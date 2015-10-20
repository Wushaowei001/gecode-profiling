/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Christian Schulte <schulte@gecode.org>
 *
 *  Contributing authors:
 *     Guido Tack <tack@gecode.org>
 *
 *  Copyright:
 *     Christian Schulte, 2004
 *     Guido Tack, 2004
 *
 *  Last modified:
 *     $Date$ by $Author$
 *     $Revision$
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 *  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 *  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef __GECODE_SEARCH_SEQUENTIAL_BAB_HH__
#define __GECODE_SEARCH_SEQUENTIAL_BAB_HH__

#include <gecode/search.hh>
#include <gecode/search/support.hh>
#include <gecode/search/worker.hh>
#include <gecode/search/sequential/path.hh>
#include <gecode/flatzinc.hh>

#include <gecode/search/connector.hh>

#include <iostream>

using Profiling::NodeStatus;

namespace Gecode { namespace FlatZinc {
  class FlatZincSpace;
}}

namespace Gecode { namespace Search { namespace Sequential {



  /// Implementation of depth-first branch-and-bound search engine
  class BAB : public Worker {
  private:
    /// Search options
    Options opt;
    /// Socket handler
    Connector connector;
    /// Current path in search tree
    Path path;
    /// Current space being explored
    Space* cur;
    /// Distance until next clone
    unsigned int d;
    /// Number of entries not yet constrained to be better
    int mark;
    /// Best solution found so far
    Space* best;

    std::ostringstream oss;

  public:
    /// Initialize with space \a s and search options \a o
    /// isRestarts = true if running -restart option
    BAB(Space* s, const Options& o, bool isRestarts = false);
    /// %Search for next better solution
    Space* next(void);
    /// Return statistics
    Statistics statistics(void) const;
    /// Reset engine to restart at space \a s
    void reset(Space* s);
    /// Return no-goods
    NoGoods& nogoods(void);
    /// Destructor
    ~BAB(void);
  };

  forceinline 
  BAB::BAB(Space* s, const Options& o, bool isRestarts)
    : opt(o), connector(o.port == 0 ? 6565 : o.port), path(opt.nogoods_limit), 
      d(0), mark(0), best(NULL) {


    if (opt.sendNodes) {
      connector.connect();

      if (isRestarts)
        connector.restart(o.problem_name, 0);
      else
        connector.restart(o.problem_name);
    }

    // std::cout << "sequential BAB\n";

    

    if ((s == NULL) || (s->status(*this) == SS_FAILED)) {
      fail++;
      cur = NULL;
      if (!o.clone)
        delete s;
    } else {
      cur = snapshot(s,opt);
    }

    // std::cout << "initial domain size: " << s->getDomainSize() << std::endl; // TODO: delete this
  }

  forceinline Space*
  BAB::next(void) {
    /*
     * The engine maintains the following invariant:
     *  - If the current space (cur) is not NULL, the path always points
     *    to exactly that space.
     *  - If the current space (cur) is NULL, the path always points
     *    to the next space (if there is any).
     *
     * This invariant is needed so that no-goods can be extracted properly
     * when the engine is stopped or has found a solution.
     *
     * An additional invariant maintained by the engine is:
     *   For all nodes stored at a depth less than mark, there
     *   is no guarantee of betterness. For those above the mark,
     *   betterness is guaranteed.
     *
     */
    int pid = -1;
    int alt = -1;
    int kids = -1;

    if (opt.sendNodes) {
      path.setConnector(&connector);
    }

    start();
    while (true) {
      if (stop(opt))
        return NULL;
      // Recompute and add constraint if necessary
      while (cur == NULL) {
        if (path.empty())
          return NULL;
        cur = path.recompute(d,opt.a_d,*this,*best,mark);
        if (cur != NULL)
          break;
        path.next();
      }
      node++;
      if (opt.sendNodes) {
        oss.str("");
        oss.clear();
        if (node == 1) {
          pid = -1;
          alt = -1;
        } else {
          Path::Edge& edge = path.top();
          pid = edge.pid();
          alt = std::min(edge.alt(), edge.choice()->alternatives() - 1);
          cur->print(*edge.choice(), alt, oss);
        }
      }
      switch (cur->status(*this)) {
      case SS_FAILED:
        if (opt.sendNodes) {

          connector.createNode(node, pid, alt, 0, Profiling::NodeStatus::FAILED)
           .set_label(oss.str().c_str())
           .set_thread_id(0)
           .set_restart_id(restart)
           .set_domain_size(cur->getDomainSize())
           .send();
        }
        fail++;
        delete cur;
        cur = NULL;
        path.next();
        break;
      case SS_SOLVED:
        if (opt.sendNodes) {

          connector.createNode(node, pid, alt, 0, Profiling::NodeStatus::SOLVED)
           .set_label(oss.str().c_str())
           .set_thread_id(0)
           .set_restart_id(restart)
           .set_domain_size(cur->getDomainSize())
           .set_solution("[solution]")
           .send();
        }
        // Deletes all pending branchers
        (void) cur->choice();
        delete best;
        best = cur;
        cur = NULL;
        path.next();
        mark = path.entries();
        return best->clone();
      case SS_BRANCH:
        {
          Space* c;
          if ((d == 0) || (d >= opt.c_d)) {
            c = cur->clone();
            d = 1;
          } else {
            c = NULL;
            d++;
          }
          const Choice* ch = path.push(*this,node,cur,c);
          if (opt.sendNodes) {
            kids = ch->alternatives();

            connector.createNode(node, pid, alt, kids, Profiling::NodeStatus::BRANCH)
             .set_label(oss.str().c_str())
             .set_thread_id(0)
             .set_restart_id(restart)
             .set_domain_size(cur->getDomainSize())
             .send();
          }
          cur->commit(*ch,0);
          break;
        }
      default:
        GECODE_NEVER;
      }
    }
    GECODE_NEVER;
    return NULL;
  }

  forceinline Statistics
  BAB::statistics(void) const {
    return *this;
  }

  forceinline void
  BAB::reset(Space* s) {
    restart++;
    delete best;
    best = NULL;
    path.reset();
    d = 0;
    mark = 0;
    delete cur;
    if ((s == NULL) || (s->status(*this) == SS_FAILED)) {
      delete s;
      cur = NULL;
    } else {
      cur = s;
    }
    Worker::reset();
  }

  forceinline NoGoods&
  BAB::nogoods(void) {
    return path;
  }

  forceinline 
  BAB::~BAB(void) {
    if (opt.sendNodes) {
      connector.done();
      connector.disconnect();
    }
    path.reset();
    delete best;
    delete cur;
  }

}}}

#endif

// STATISTICS: search-sequential
