/* -*- mode: C++; c-basic-offset: 2; indent-tabs-mode: nil -*- */
/*
 *  Main authors:
 *     Guido Tack <tack@gecode.org>
 *
 *  Copyright:
 *     Guido Tack, 2014
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

#include "test/flatzinc.hh"

namespace Test { namespace FlatZinc {

  namespace {
    /// Helper class to create and register tests
    class Create {
    public:

      /// Perform creation and registration
      Create(void) {
        (void) new FlatZincTest("radiation",
std::string("predicate bool_lin_ge(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_gt(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_lt(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
predicate bool_lin_ne(array [int] of int: a, array [int] of var bool: x, var int: c);\n\
array [1..25] of int: Intensity = [7, 2, 14, 8, 9, 13, 4, 1, 2, 9, 5, 12, 2, 11, 9, 10, 2, 4, 9, 7, 10, 2, 8, 11, 1];\n\
var 0..172: INT____00001 :: is_defined_var :: var_is_introduced;\n\
var 0..172: Beamtime :: output_var = INT____00001;\n\
var 0..25: INT____00002 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00003 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00004 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00005 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00006 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00007 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00008 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00009 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00010 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00011 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00012 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00013 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00014 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00015 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00016 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00017 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00018 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00019 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00020 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00021 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00022 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00023 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00024 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00025 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00026 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00027 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00028 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00029 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00030 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00031 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00032 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00033 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00034 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00035 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00036 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00037 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00038 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00039 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00040 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00041 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00042 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00043 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00044 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00045 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00046 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00047 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00048 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00049 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00050 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00051 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00052 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00053 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00054 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00055 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00056 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00057 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00058 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00059 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00060 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00061 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00062 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00063 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00064 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00065 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00066 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00067 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00068 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00069 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00070 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00071 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00072 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00073 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00074 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00075 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00076 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00077 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00078 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00079 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00080 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00081 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00082 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00083 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00084 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00085 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00086 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00087 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00088 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00089 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00090 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00091 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00092 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00093 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00094 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00095 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00096 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00097 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00098 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00099 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00100 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00101 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00102 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00103 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00104 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00105 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00106 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00107 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00108 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00109 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00110 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00111 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00112 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00113 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00114 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00115 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00116 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00117 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00118 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00119 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00120 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00121 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00122 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00123 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00124 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00125 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00126 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00127 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00128 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00129 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00130 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00131 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00132 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00133 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00134 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00135 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00136 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00137 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00138 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00139 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00140 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00141 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00142 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00143 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00144 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00145 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00146 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00147 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00148 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00149 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00150 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00151 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00152 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00153 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00154 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00155 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00156 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00157 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00158 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00159 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00160 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00161 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00162 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00163 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00164 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00165 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00166 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00167 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00168 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00169 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00170 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00171 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00172 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00173 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00174 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00175 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00176 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00177 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00178 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00179 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00180 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00181 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00182 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00183 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00184 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00185 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00186 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00187 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00188 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00189 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00190 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00191 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00192 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00193 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00194 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00195 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00196 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00197 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00198 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00199 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00200 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00201 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00202 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00203 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00204 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00205 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00206 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00207 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00208 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00209 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00210 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00211 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00212 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00213 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00214 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00215 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00216 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00217 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00218 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00219 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00220 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00221 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00222 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00223 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00224 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00225 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00226 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00227 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00228 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00229 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00230 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00231 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00232 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00233 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00234 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00235 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00236 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00237 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00238 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00239 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00240 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00241 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00242 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00243 :: is_defined_var :: var_is_introduced;\n")+"\
var 0..25: INT____00244 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00245 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00246 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00247 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00248 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00249 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00250 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00251 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00252 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00253 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00254 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00255 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00256 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00257 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00258 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00259 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00260 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00261 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00262 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00263 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00264 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00265 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00266 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00267 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00268 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00269 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00270 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00271 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00272 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00273 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00274 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00275 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00276 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00277 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00278 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00279 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00280 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00281 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00282 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00283 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00284 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00285 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00286 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00287 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00288 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00289 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00290 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00291 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00292 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00293 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00294 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00295 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00296 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00297 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00298 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00299 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00300 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00301 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00302 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00303 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00304 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00305 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00306 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00307 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00308 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00309 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00310 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00311 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00312 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00313 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00314 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00315 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00316 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00317 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00318 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00319 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00320 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00321 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00322 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00323 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00324 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00325 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00326 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00327 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00328 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00329 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00330 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00331 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00332 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00333 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00334 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00335 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00336 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00337 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00338 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00339 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00340 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00341 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00342 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00343 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00344 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00345 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00346 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00347 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00348 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00349 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00350 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00351 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00352 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00353 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00354 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00355 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00356 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00357 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00358 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00359 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00360 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00361 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00362 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00363 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00364 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00365 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00366 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00367 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00368 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00369 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00370 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00371 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00372 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00373 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00374 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00375 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00376 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00377 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00378 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00379 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00380 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00381 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00382 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00383 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00384 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00385 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00386 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00387 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00388 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00389 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00390 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00391 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00392 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00393 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00394 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00395 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00396 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00397 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00398 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00399 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00400 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00401 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00402 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00403 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00404 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00405 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00406 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00407 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00408 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00409 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00410 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00411 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00412 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00413 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00414 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00415 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00416 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00417 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00418 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00419 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00420 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00421 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00422 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00423 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00424 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00425 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00426 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00427 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00428 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00429 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00430 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00431 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00432 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00433 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00434 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00435 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00436 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00437 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00438 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00439 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00440 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00441 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00442 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00443 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00444 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00445 :: is_defined_var :: var_is_introduced;\n"+"\
var 0..25: INT____00446 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00447 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00448 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00449 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00450 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00451 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00452 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00453 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00454 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00455 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00456 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00457 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00458 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00459 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00460 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00461 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00462 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00463 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00464 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00465 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00466 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00467 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00468 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00469 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00470 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00471 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00472 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00473 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00474 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00475 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00476 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00477 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00478 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00479 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00480 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00481 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00482 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00483 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00484 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00485 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00486 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00487 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00488 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00489 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00490 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00491 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00492 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00493 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00494 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00495 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00496 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00497 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00498 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00499 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00500 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00501 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00502 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00503 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00504 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00505 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00506 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00507 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00508 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00509 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00510 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00511 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00512 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00513 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00514 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00515 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00516 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00517 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00518 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00519 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00520 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00521 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00522 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00523 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00524 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00525 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00526 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00527 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00528 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00529 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00530 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00531 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00532 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00533 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00534 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00535 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00536 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00537 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00538 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00539 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00540 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00541 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00542 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00543 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00544 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00545 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00546 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00547 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00548 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00549 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00550 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00551 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00552 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00553 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00554 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00555 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00556 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00557 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00558 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00559 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00560 :: is_defined_var :: var_is_introduced;\n\
var -25..25: INT____00561 :: is_defined_var :: var_is_introduced;\n\
var 0..25: INT____00562 :: is_defined_var :: var_is_introduced;\n\
var 0..4497: INT____00563 :: is_defined_var :: var_is_introduced;\n\
var 0..25: K :: output_var = INT____00002;\n\
array [1..14] of var 0..25: N;\n\
array [1..350] of var 0..25: Q;\n\
constraint int_lin_eq([-1, -1, 1], [INT____00003, Q[1], Q[15]], 0) :: defines_var(INT____00003);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00005, Q[15], Q[29]], 0) :: defines_var(INT____00005);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00007, Q[29], Q[43]], 0) :: defines_var(INT____00007);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00009, Q[43], Q[57]], 0) :: defines_var(INT____00009);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00011, Q[2], Q[16]], 0) :: defines_var(INT____00011);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00013, Q[16], Q[30]], 0) :: defines_var(INT____00013);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00015, Q[30], Q[44]], 0) :: defines_var(INT____00015);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00017, Q[44], Q[58]], 0) :: defines_var(INT____00017);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00019, Q[3], Q[17]], 0) :: defines_var(INT____00019);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00021, Q[17], Q[31]], 0) :: defines_var(INT____00021);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00023, Q[31], Q[45]], 0) :: defines_var(INT____00023);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00025, Q[45], Q[59]], 0) :: defines_var(INT____00025);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00027, Q[4], Q[18]], 0) :: defines_var(INT____00027);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00029, Q[18], Q[32]], 0) :: defines_var(INT____00029);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00031, Q[32], Q[46]], 0) :: defines_var(INT____00031);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00033, Q[46], Q[60]], 0) :: defines_var(INT____00033);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00035, Q[5], Q[19]], 0) :: defines_var(INT____00035);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00037, Q[19], Q[33]], 0) :: defines_var(INT____00037);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00039, Q[33], Q[47]], 0) :: defines_var(INT____00039);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00041, Q[47], Q[61]], 0) :: defines_var(INT____00041);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00043, Q[6], Q[20]], 0) :: defines_var(INT____00043);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00045, Q[20], Q[34]], 0) :: defines_var(INT____00045);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00047, Q[34], Q[48]], 0) :: defines_var(INT____00047);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00049, Q[48], Q[62]], 0) :: defines_var(INT____00049);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00051, Q[7], Q[21]], 0) :: defines_var(INT____00051);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00053, Q[21], Q[35]], 0) :: defines_var(INT____00053);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00055, Q[35], Q[49]], 0) :: defines_var(INT____00055);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00057, Q[49], Q[63]], 0) :: defines_var(INT____00057);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00059, Q[8], Q[22]], 0) :: defines_var(INT____00059);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00061, Q[22], Q[36]], 0) :: defines_var(INT____00061);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00063, Q[36], Q[50]], 0) :: defines_var(INT____00063);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00065, Q[50], Q[64]], 0) :: defines_var(INT____00065);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00067, Q[9], Q[23]], 0) :: defines_var(INT____00067);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00069, Q[23], Q[37]], 0) :: defines_var(INT____00069);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00071, Q[37], Q[51]], 0) :: defines_var(INT____00071);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00073, Q[51], Q[65]], 0) :: defines_var(INT____00073);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00075, Q[10], Q[24]], 0) :: defines_var(INT____00075);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00077, Q[24], Q[38]], 0) :: defines_var(INT____00077);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00079, Q[38], Q[52]], 0) :: defines_var(INT____00079);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00081, Q[52], Q[66]], 0) :: defines_var(INT____00081);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00083, Q[11], Q[25]], 0) :: defines_var(INT____00083);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00085, Q[25], Q[39]], 0) :: defines_var(INT____00085);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00087, Q[39], Q[53]], 0) :: defines_var(INT____00087);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00089, Q[53], Q[67]], 0) :: defines_var(INT____00089);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00091, Q[12], Q[26]], 0) :: defines_var(INT____00091);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00093, Q[26], Q[40]], 0) :: defines_var(INT____00093);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00095, Q[40], Q[54]], 0) :: defines_var(INT____00095);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00097, Q[54], Q[68]], 0) :: defines_var(INT____00097);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00099, Q[13], Q[27]], 0) :: defines_var(INT____00099);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00101, Q[27], Q[41]], 0) :: defines_var(INT____00101);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00103, Q[41], Q[55]], 0) :: defines_var(INT____00103);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00105, Q[55], Q[69]], 0) :: defines_var(INT____00105);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00107, Q[14], Q[28]], 0) :: defines_var(INT____00107);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00109, Q[28], Q[42]], 0) :: defines_var(INT____00109);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00111, Q[42], Q[56]], 0) :: defines_var(INT____00111);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00113, Q[56], Q[70]], 0) :: defines_var(INT____00113);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00115, Q[71], Q[85]], 0) :: defines_var(INT____00115);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00117, Q[85], Q[99]], 0) :: defines_var(INT____00117);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00119, Q[99], Q[113]], 0) :: defines_var(INT____00119);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00121, Q[113], Q[127]], 0) :: defines_var(INT____00121);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00123, Q[72], Q[86]], 0) :: defines_var(INT____00123);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00125, Q[86], Q[100]], 0) :: defines_var(INT____00125);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00127, Q[100], Q[114]], 0) :: defines_var(INT____00127);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00129, Q[114], Q[128]], 0) :: defines_var(INT____00129);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00131, Q[73], Q[87]], 0) :: defines_var(INT____00131);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00133, Q[87], Q[101]], 0) :: defines_var(INT____00133);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00135, Q[101], Q[115]], 0) :: defines_var(INT____00135);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00137, Q[115], Q[129]], 0) :: defines_var(INT____00137);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00139, Q[74], Q[88]], 0) :: defines_var(INT____00139);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00141, Q[88], Q[102]], 0) :: defines_var(INT____00141);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00143, Q[102], Q[116]], 0) :: defines_var(INT____00143);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00145, Q[116], Q[130]], 0) :: defines_var(INT____00145);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00147, Q[75], Q[89]], 0) :: defines_var(INT____00147);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00149, Q[89], Q[103]], 0) :: defines_var(INT____00149);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00151, Q[103], Q[117]], 0) :: defines_var(INT____00151);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00153, Q[117], Q[131]], 0) :: defines_var(INT____00153);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00155, Q[76], Q[90]], 0) :: defines_var(INT____00155);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00157, Q[90], Q[104]], 0) :: defines_var(INT____00157);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00159, Q[104], Q[118]], 0) :: defines_var(INT____00159);\n"+"\
constraint int_lin_eq([-1, -1, 1], [INT____00161, Q[118], Q[132]], 0) :: defines_var(INT____00161);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00163, Q[77], Q[91]], 0) :: defines_var(INT____00163);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00165, Q[91], Q[105]], 0) :: defines_var(INT____00165);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00167, Q[105], Q[119]], 0) :: defines_var(INT____00167);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00169, Q[119], Q[133]], 0) :: defines_var(INT____00169);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00171, Q[78], Q[92]], 0) :: defines_var(INT____00171);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00173, Q[92], Q[106]], 0) :: defines_var(INT____00173);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00175, Q[106], Q[120]], 0) :: defines_var(INT____00175);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00177, Q[120], Q[134]], 0) :: defines_var(INT____00177);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00179, Q[79], Q[93]], 0) :: defines_var(INT____00179);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00181, Q[93], Q[107]], 0) :: defines_var(INT____00181);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00183, Q[107], Q[121]], 0) :: defines_var(INT____00183);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00185, Q[121], Q[135]], 0) :: defines_var(INT____00185);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00187, Q[80], Q[94]], 0) :: defines_var(INT____00187);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00189, Q[94], Q[108]], 0) :: defines_var(INT____00189);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00191, Q[108], Q[122]], 0) :: defines_var(INT____00191);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00193, Q[122], Q[136]], 0) :: defines_var(INT____00193);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00195, Q[81], Q[95]], 0) :: defines_var(INT____00195);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00197, Q[95], Q[109]], 0) :: defines_var(INT____00197);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00199, Q[109], Q[123]], 0) :: defines_var(INT____00199);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00201, Q[123], Q[137]], 0) :: defines_var(INT____00201);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00203, Q[82], Q[96]], 0) :: defines_var(INT____00203);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00205, Q[96], Q[110]], 0) :: defines_var(INT____00205);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00207, Q[110], Q[124]], 0) :: defines_var(INT____00207);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00209, Q[124], Q[138]], 0) :: defines_var(INT____00209);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00211, Q[83], Q[97]], 0) :: defines_var(INT____00211);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00213, Q[97], Q[111]], 0) :: defines_var(INT____00213);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00215, Q[111], Q[125]], 0) :: defines_var(INT____00215);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00217, Q[125], Q[139]], 0) :: defines_var(INT____00217);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00219, Q[84], Q[98]], 0) :: defines_var(INT____00219);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00221, Q[98], Q[112]], 0) :: defines_var(INT____00221);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00223, Q[112], Q[126]], 0) :: defines_var(INT____00223);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00225, Q[126], Q[140]], 0) :: defines_var(INT____00225);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00227, Q[141], Q[155]], 0) :: defines_var(INT____00227);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00229, Q[155], Q[169]], 0) :: defines_var(INT____00229);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00231, Q[169], Q[183]], 0) :: defines_var(INT____00231);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00233, Q[183], Q[197]], 0) :: defines_var(INT____00233);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00235, Q[142], Q[156]], 0) :: defines_var(INT____00235);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00237, Q[156], Q[170]], 0) :: defines_var(INT____00237);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00239, Q[170], Q[184]], 0) :: defines_var(INT____00239);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00241, Q[184], Q[198]], 0) :: defines_var(INT____00241);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00243, Q[143], Q[157]], 0) :: defines_var(INT____00243);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00245, Q[157], Q[171]], 0) :: defines_var(INT____00245);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00247, Q[171], Q[185]], 0) :: defines_var(INT____00247);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00249, Q[185], Q[199]], 0) :: defines_var(INT____00249);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00251, Q[144], Q[158]], 0) :: defines_var(INT____00251);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00253, Q[158], Q[172]], 0) :: defines_var(INT____00253);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00255, Q[172], Q[186]], 0) :: defines_var(INT____00255);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00257, Q[186], Q[200]], 0) :: defines_var(INT____00257);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00259, Q[145], Q[159]], 0) :: defines_var(INT____00259);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00261, Q[159], Q[173]], 0) :: defines_var(INT____00261);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00263, Q[173], Q[187]], 0) :: defines_var(INT____00263);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00265, Q[187], Q[201]], 0) :: defines_var(INT____00265);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00267, Q[146], Q[160]], 0) :: defines_var(INT____00267);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00269, Q[160], Q[174]], 0) :: defines_var(INT____00269);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00271, Q[174], Q[188]], 0) :: defines_var(INT____00271);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00273, Q[188], Q[202]], 0) :: defines_var(INT____00273);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00275, Q[147], Q[161]], 0) :: defines_var(INT____00275);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00277, Q[161], Q[175]], 0) :: defines_var(INT____00277);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00279, Q[175], Q[189]], 0) :: defines_var(INT____00279);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00281, Q[189], Q[203]], 0) :: defines_var(INT____00281);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00283, Q[148], Q[162]], 0) :: defines_var(INT____00283);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00285, Q[162], Q[176]], 0) :: defines_var(INT____00285);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00287, Q[176], Q[190]], 0) :: defines_var(INT____00287);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00289, Q[190], Q[204]], 0) :: defines_var(INT____00289);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00291, Q[149], Q[163]], 0) :: defines_var(INT____00291);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00293, Q[163], Q[177]], 0) :: defines_var(INT____00293);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00295, Q[177], Q[191]], 0) :: defines_var(INT____00295);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00297, Q[191], Q[205]], 0) :: defines_var(INT____00297);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00299, Q[150], Q[164]], 0) :: defines_var(INT____00299);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00301, Q[164], Q[178]], 0) :: defines_var(INT____00301);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00303, Q[178], Q[192]], 0) :: defines_var(INT____00303);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00305, Q[192], Q[206]], 0) :: defines_var(INT____00305);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00307, Q[151], Q[165]], 0) :: defines_var(INT____00307);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00309, Q[165], Q[179]], 0) :: defines_var(INT____00309);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00311, Q[179], Q[193]], 0) :: defines_var(INT____00311);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00313, Q[193], Q[207]], 0) :: defines_var(INT____00313);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00315, Q[152], Q[166]], 0) :: defines_var(INT____00315);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00317, Q[166], Q[180]], 0) :: defines_var(INT____00317);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00319, Q[180], Q[194]], 0) :: defines_var(INT____00319);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00321, Q[194], Q[208]], 0) :: defines_var(INT____00321);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00323, Q[153], Q[167]], 0) :: defines_var(INT____00323);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00325, Q[167], Q[181]], 0) :: defines_var(INT____00325);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00327, Q[181], Q[195]], 0) :: defines_var(INT____00327);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00329, Q[195], Q[209]], 0) :: defines_var(INT____00329);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00331, Q[154], Q[168]], 0) :: defines_var(INT____00331);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00333, Q[168], Q[182]], 0) :: defines_var(INT____00333);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00335, Q[182], Q[196]], 0) :: defines_var(INT____00335);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00337, Q[196], Q[210]], 0) :: defines_var(INT____00337);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00339, Q[211], Q[225]], 0) :: defines_var(INT____00339);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00341, Q[225], Q[239]], 0) :: defines_var(INT____00341);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00343, Q[239], Q[253]], 0) :: defines_var(INT____00343);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00345, Q[253], Q[267]], 0) :: defines_var(INT____00345);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00347, Q[212], Q[226]], 0) :: defines_var(INT____00347);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00349, Q[226], Q[240]], 0) :: defines_var(INT____00349);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00351, Q[240], Q[254]], 0) :: defines_var(INT____00351);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00353, Q[254], Q[268]], 0) :: defines_var(INT____00353);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00355, Q[213], Q[227]], 0) :: defines_var(INT____00355);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00357, Q[227], Q[241]], 0) :: defines_var(INT____00357);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00359, Q[241], Q[255]], 0) :: defines_var(INT____00359);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00361, Q[255], Q[269]], 0) :: defines_var(INT____00361);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00363, Q[214], Q[228]], 0) :: defines_var(INT____00363);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00365, Q[228], Q[242]], 0) :: defines_var(INT____00365);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00367, Q[242], Q[256]], 0) :: defines_var(INT____00367);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00369, Q[256], Q[270]], 0) :: defines_var(INT____00369);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00371, Q[215], Q[229]], 0) :: defines_var(INT____00371);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00373, Q[229], Q[243]], 0) :: defines_var(INT____00373);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00375, Q[243], Q[257]], 0) :: defines_var(INT____00375);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00377, Q[257], Q[271]], 0) :: defines_var(INT____00377);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00379, Q[216], Q[230]], 0) :: defines_var(INT____00379);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00381, Q[230], Q[244]], 0) :: defines_var(INT____00381);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00383, Q[244], Q[258]], 0) :: defines_var(INT____00383);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00385, Q[258], Q[272]], 0) :: defines_var(INT____00385);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00387, Q[217], Q[231]], 0) :: defines_var(INT____00387);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00389, Q[231], Q[245]], 0) :: defines_var(INT____00389);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00391, Q[245], Q[259]], 0) :: defines_var(INT____00391);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00393, Q[259], Q[273]], 0) :: defines_var(INT____00393);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00395, Q[218], Q[232]], 0) :: defines_var(INT____00395);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00397, Q[232], Q[246]], 0) :: defines_var(INT____00397);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00399, Q[246], Q[260]], 0) :: defines_var(INT____00399);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00401, Q[260], Q[274]], 0) :: defines_var(INT____00401);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00403, Q[219], Q[233]], 0) :: defines_var(INT____00403);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00405, Q[233], Q[247]], 0) :: defines_var(INT____00405);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00407, Q[247], Q[261]], 0) :: defines_var(INT____00407);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00409, Q[261], Q[275]], 0) :: defines_var(INT____00409);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00411, Q[220], Q[234]], 0) :: defines_var(INT____00411);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00413, Q[234], Q[248]], 0) :: defines_var(INT____00413);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00415, Q[248], Q[262]], 0) :: defines_var(INT____00415);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00417, Q[262], Q[276]], 0) :: defines_var(INT____00417);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00419, Q[221], Q[235]], 0) :: defines_var(INT____00419);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00421, Q[235], Q[249]], 0) :: defines_var(INT____00421);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00423, Q[249], Q[263]], 0) :: defines_var(INT____00423);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00425, Q[263], Q[277]], 0) :: defines_var(INT____00425);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00427, Q[222], Q[236]], 0) :: defines_var(INT____00427);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00429, Q[236], Q[250]], 0) :: defines_var(INT____00429);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00431, Q[250], Q[264]], 0) :: defines_var(INT____00431);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00433, Q[264], Q[278]], 0) :: defines_var(INT____00433);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00435, Q[223], Q[237]], 0) :: defines_var(INT____00435);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00437, Q[237], Q[251]], 0) :: defines_var(INT____00437);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00439, Q[251], Q[265]], 0) :: defines_var(INT____00439);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00441, Q[265], Q[279]], 0) :: defines_var(INT____00441);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00443, Q[224], Q[238]], 0) :: defines_var(INT____00443);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00445, Q[238], Q[252]], 0) :: defines_var(INT____00445);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00447, Q[252], Q[266]], 0) :: defines_var(INT____00447);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00449, Q[266], Q[280]], 0) :: defines_var(INT____00449);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00451, Q[281], Q[295]], 0) :: defines_var(INT____00451);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00453, Q[295], Q[309]], 0) :: defines_var(INT____00453);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00455, Q[309], Q[323]], 0) :: defines_var(INT____00455);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00457, Q[323], Q[337]], 0) :: defines_var(INT____00457);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00459, Q[282], Q[296]], 0) :: defines_var(INT____00459);\n"+"\
constraint int_lin_eq([-1, -1, 1], [INT____00461, Q[296], Q[310]], 0) :: defines_var(INT____00461);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00463, Q[310], Q[324]], 0) :: defines_var(INT____00463);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00465, Q[324], Q[338]], 0) :: defines_var(INT____00465);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00467, Q[283], Q[297]], 0) :: defines_var(INT____00467);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00469, Q[297], Q[311]], 0) :: defines_var(INT____00469);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00471, Q[311], Q[325]], 0) :: defines_var(INT____00471);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00473, Q[325], Q[339]], 0) :: defines_var(INT____00473);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00475, Q[284], Q[298]], 0) :: defines_var(INT____00475);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00477, Q[298], Q[312]], 0) :: defines_var(INT____00477);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00479, Q[312], Q[326]], 0) :: defines_var(INT____00479);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00481, Q[326], Q[340]], 0) :: defines_var(INT____00481);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00483, Q[285], Q[299]], 0) :: defines_var(INT____00483);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00485, Q[299], Q[313]], 0) :: defines_var(INT____00485);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00487, Q[313], Q[327]], 0) :: defines_var(INT____00487);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00489, Q[327], Q[341]], 0) :: defines_var(INT____00489);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00491, Q[286], Q[300]], 0) :: defines_var(INT____00491);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00493, Q[300], Q[314]], 0) :: defines_var(INT____00493);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00495, Q[314], Q[328]], 0) :: defines_var(INT____00495);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00497, Q[328], Q[342]], 0) :: defines_var(INT____00497);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00499, Q[287], Q[301]], 0) :: defines_var(INT____00499);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00501, Q[301], Q[315]], 0) :: defines_var(INT____00501);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00503, Q[315], Q[329]], 0) :: defines_var(INT____00503);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00505, Q[329], Q[343]], 0) :: defines_var(INT____00505);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00507, Q[288], Q[302]], 0) :: defines_var(INT____00507);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00509, Q[302], Q[316]], 0) :: defines_var(INT____00509);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00511, Q[316], Q[330]], 0) :: defines_var(INT____00511);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00513, Q[330], Q[344]], 0) :: defines_var(INT____00513);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00515, Q[289], Q[303]], 0) :: defines_var(INT____00515);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00517, Q[303], Q[317]], 0) :: defines_var(INT____00517);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00519, Q[317], Q[331]], 0) :: defines_var(INT____00519);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00521, Q[331], Q[345]], 0) :: defines_var(INT____00521);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00523, Q[290], Q[304]], 0) :: defines_var(INT____00523);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00525, Q[304], Q[318]], 0) :: defines_var(INT____00525);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00527, Q[318], Q[332]], 0) :: defines_var(INT____00527);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00529, Q[332], Q[346]], 0) :: defines_var(INT____00529);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00531, Q[291], Q[305]], 0) :: defines_var(INT____00531);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00533, Q[305], Q[319]], 0) :: defines_var(INT____00533);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00535, Q[319], Q[333]], 0) :: defines_var(INT____00535);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00537, Q[333], Q[347]], 0) :: defines_var(INT____00537);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00539, Q[292], Q[306]], 0) :: defines_var(INT____00539);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00541, Q[306], Q[320]], 0) :: defines_var(INT____00541);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00543, Q[320], Q[334]], 0) :: defines_var(INT____00543);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00545, Q[334], Q[348]], 0) :: defines_var(INT____00545);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00547, Q[293], Q[307]], 0) :: defines_var(INT____00547);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00549, Q[307], Q[321]], 0) :: defines_var(INT____00549);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00551, Q[321], Q[335]], 0) :: defines_var(INT____00551);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00553, Q[335], Q[349]], 0) :: defines_var(INT____00553);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00555, Q[294], Q[308]], 0) :: defines_var(INT____00555);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00557, Q[308], Q[322]], 0) :: defines_var(INT____00557);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00559, Q[322], Q[336]], 0) :: defines_var(INT____00559);\n\
constraint int_lin_eq([-1, -1, 1], [INT____00561, Q[336], Q[350]], 0) :: defines_var(INT____00561);\n\
constraint int_lin_eq([-1, 26, 1], [INT____00563, INT____00001, INT____00002], 0) :: defines_var(INT____00563);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[1], Q[2], Q[3], Q[4], Q[5], Q[6], Q[7], Q[8], Q[9], Q[10], Q[11], Q[12], Q[13], Q[14]], -7);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[15], Q[16], Q[17], Q[18], Q[19], Q[20], Q[21], Q[22], Q[23], Q[24], Q[25], Q[26], Q[27], Q[28]], -2);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[29], Q[30], Q[31], Q[32], Q[33], Q[34], Q[35], Q[36], Q[37], Q[38], Q[39], Q[40], Q[41], Q[42]], -14);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[43], Q[44], Q[45], Q[46], Q[47], Q[48], Q[49], Q[50], Q[51], Q[52], Q[53], Q[54], Q[55], Q[56]], -8);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[57], Q[58], Q[59], Q[60], Q[61], Q[62], Q[63], Q[64], Q[65], Q[66], Q[67], Q[68], Q[69], Q[70]], -9);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[71], Q[72], Q[73], Q[74], Q[75], Q[76], Q[77], Q[78], Q[79], Q[80], Q[81], Q[82], Q[83], Q[84]], -13);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[85], Q[86], Q[87], Q[88], Q[89], Q[90], Q[91], Q[92], Q[93], Q[94], Q[95], Q[96], Q[97], Q[98]], -4);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[99], Q[100], Q[101], Q[102], Q[103], Q[104], Q[105], Q[106], Q[107], Q[108], Q[109], Q[110], Q[111], Q[112]], -1);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[113], Q[114], Q[115], Q[116], Q[117], Q[118], Q[119], Q[120], Q[121], Q[122], Q[123], Q[124], Q[125], Q[126]], -2);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[127], Q[128], Q[129], Q[130], Q[131], Q[132], Q[133], Q[134], Q[135], Q[136], Q[137], Q[138], Q[139], Q[140]], -9);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[141], Q[142], Q[143], Q[144], Q[145], Q[146], Q[147], Q[148], Q[149], Q[150], Q[151], Q[152], Q[153], Q[154]], -5);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[155], Q[156], Q[157], Q[158], Q[159], Q[160], Q[161], Q[162], Q[163], Q[164], Q[165], Q[166], Q[167], Q[168]], -12);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[169], Q[170], Q[171], Q[172], Q[173], Q[174], Q[175], Q[176], Q[177], Q[178], Q[179], Q[180], Q[181], Q[182]], -2);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[183], Q[184], Q[185], Q[186], Q[187], Q[188], Q[189], Q[190], Q[191], Q[192], Q[193], Q[194], Q[195], Q[196]], -11);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[197], Q[198], Q[199], Q[200], Q[201], Q[202], Q[203], Q[204], Q[205], Q[206], Q[207], Q[208], Q[209], Q[210]], -9);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[211], Q[212], Q[213], Q[214], Q[215], Q[216], Q[217], Q[218], Q[219], Q[220], Q[221], Q[222], Q[223], Q[224]], -10);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[225], Q[226], Q[227], Q[228], Q[229], Q[230], Q[231], Q[232], Q[233], Q[234], Q[235], Q[236], Q[237], Q[238]], -2);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[239], Q[240], Q[241], Q[242], Q[243], Q[244], Q[245], Q[246], Q[247], Q[248], Q[249], Q[250], Q[251], Q[252]], -4);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[253], Q[254], Q[255], Q[256], Q[257], Q[258], Q[259], Q[260], Q[261], Q[262], Q[263], Q[264], Q[265], Q[266]], -9);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[267], Q[268], Q[269], Q[270], Q[271], Q[272], Q[273], Q[274], Q[275], Q[276], Q[277], Q[278], Q[279], Q[280]], -7);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[281], Q[282], Q[283], Q[284], Q[285], Q[286], Q[287], Q[288], Q[289], Q[290], Q[291], Q[292], Q[293], Q[294]], -10);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[295], Q[296], Q[297], Q[298], Q[299], Q[300], Q[301], Q[302], Q[303], Q[304], Q[305], Q[306], Q[307], Q[308]], -2);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[309], Q[310], Q[311], Q[312], Q[313], Q[314], Q[315], Q[316], Q[317], Q[318], Q[319], Q[320], Q[321], Q[322]], -8);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[323], Q[324], Q[325], Q[326], Q[327], Q[328], Q[329], Q[330], Q[331], Q[332], Q[333], Q[334], Q[335], Q[336]], -11);\n\
constraint int_lin_eq([-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14], [Q[337], Q[338], Q[339], Q[340], Q[341], Q[342], Q[343], Q[344], Q[345], Q[346], Q[347], Q[348], Q[349], Q[350]], -1);\n\
constraint int_lin_eq([-1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [INT____00002, N[1], N[2], N[3], N[4], N[5], N[6], N[7], N[8], N[9], N[10], N[11], N[12], N[13], N[14]], 0) :: defines_var(INT____00002);\n\
constraint int_lin_eq([-1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], [INT____00001, N[1], N[2], N[3], N[4], N[5], N[6], N[7], N[8], N[9], N[10], N[11], N[12], N[13], N[14]], 0) :: defines_var(INT____00001);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00004, INT____00006, INT____00008, INT____00010, N[1], Q[1]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00012, INT____00014, INT____00016, INT____00018, N[2], Q[2]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00020, INT____00022, INT____00024, INT____00026, N[3], Q[3]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00028, INT____00030, INT____00032, INT____00034, N[4], Q[4]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00036, INT____00038, INT____00040, INT____00042, N[5], Q[5]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00044, INT____00046, INT____00048, INT____00050, N[6], Q[6]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00052, INT____00054, INT____00056, INT____00058, N[7], Q[7]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00060, INT____00062, INT____00064, INT____00066, N[8], Q[8]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00068, INT____00070, INT____00072, INT____00074, N[9], Q[9]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00076, INT____00078, INT____00080, INT____00082, N[10], Q[10]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00084, INT____00086, INT____00088, INT____00090, N[11], Q[11]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00092, INT____00094, INT____00096, INT____00098, N[12], Q[12]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00100, INT____00102, INT____00104, INT____00106, N[13], Q[13]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00108, INT____00110, INT____00112, INT____00114, N[14], Q[14]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00116, INT____00118, INT____00120, INT____00122, N[1], Q[71]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00124, INT____00126, INT____00128, INT____00130, N[2], Q[72]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00132, INT____00134, INT____00136, INT____00138, N[3], Q[73]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00140, INT____00142, INT____00144, INT____00146, N[4], Q[74]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00148, INT____00150, INT____00152, INT____00154, N[5], Q[75]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00156, INT____00158, INT____00160, INT____00162, N[6], Q[76]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00164, INT____00166, INT____00168, INT____00170, N[7], Q[77]], 0);\n"+"\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00172, INT____00174, INT____00176, INT____00178, N[8], Q[78]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00180, INT____00182, INT____00184, INT____00186, N[9], Q[79]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00188, INT____00190, INT____00192, INT____00194, N[10], Q[80]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00196, INT____00198, INT____00200, INT____00202, N[11], Q[81]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00204, INT____00206, INT____00208, INT____00210, N[12], Q[82]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00212, INT____00214, INT____00216, INT____00218, N[13], Q[83]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00220, INT____00222, INT____00224, INT____00226, N[14], Q[84]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00228, INT____00230, INT____00232, INT____00234, N[1], Q[141]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00236, INT____00238, INT____00240, INT____00242, N[2], Q[142]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00244, INT____00246, INT____00248, INT____00250, N[3], Q[143]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00252, INT____00254, INT____00256, INT____00258, N[4], Q[144]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00260, INT____00262, INT____00264, INT____00266, N[5], Q[145]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00268, INT____00270, INT____00272, INT____00274, N[6], Q[146]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00276, INT____00278, INT____00280, INT____00282, N[7], Q[147]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00284, INT____00286, INT____00288, INT____00290, N[8], Q[148]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00292, INT____00294, INT____00296, INT____00298, N[9], Q[149]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00300, INT____00302, INT____00304, INT____00306, N[10], Q[150]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00308, INT____00310, INT____00312, INT____00314, N[11], Q[151]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00316, INT____00318, INT____00320, INT____00322, N[12], Q[152]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00324, INT____00326, INT____00328, INT____00330, N[13], Q[153]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00332, INT____00334, INT____00336, INT____00338, N[14], Q[154]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00340, INT____00342, INT____00344, INT____00346, N[1], Q[211]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00348, INT____00350, INT____00352, INT____00354, N[2], Q[212]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00356, INT____00358, INT____00360, INT____00362, N[3], Q[213]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00364, INT____00366, INT____00368, INT____00370, N[4], Q[214]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00372, INT____00374, INT____00376, INT____00378, N[5], Q[215]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00380, INT____00382, INT____00384, INT____00386, N[6], Q[216]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00388, INT____00390, INT____00392, INT____00394, N[7], Q[217]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00396, INT____00398, INT____00400, INT____00402, N[8], Q[218]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00404, INT____00406, INT____00408, INT____00410, N[9], Q[219]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00412, INT____00414, INT____00416, INT____00418, N[10], Q[220]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00420, INT____00422, INT____00424, INT____00426, N[11], Q[221]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00428, INT____00430, INT____00432, INT____00434, N[12], Q[222]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00436, INT____00438, INT____00440, INT____00442, N[13], Q[223]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00444, INT____00446, INT____00448, INT____00450, N[14], Q[224]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00452, INT____00454, INT____00456, INT____00458, N[1], Q[281]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00460, INT____00462, INT____00464, INT____00466, N[2], Q[282]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00468, INT____00470, INT____00472, INT____00474, N[3], Q[283]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00476, INT____00478, INT____00480, INT____00482, N[4], Q[284]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00484, INT____00486, INT____00488, INT____00490, N[5], Q[285]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00492, INT____00494, INT____00496, INT____00498, N[6], Q[286]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00500, INT____00502, INT____00504, INT____00506, N[7], Q[287]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00508, INT____00510, INT____00512, INT____00514, N[8], Q[288]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00516, INT____00518, INT____00520, INT____00522, N[9], Q[289]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00524, INT____00526, INT____00528, INT____00530, N[10], Q[290]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00532, INT____00534, INT____00536, INT____00538, N[11], Q[291]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00540, INT____00542, INT____00544, INT____00546, N[12], Q[292]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00548, INT____00550, INT____00552, INT____00554, N[13], Q[293]], 0);\n\
constraint int_lin_le([1, 1, 1, 1, -1, 1], [INT____00556, INT____00558, INT____00560, INT____00562, N[14], Q[294]], 0);\n\
constraint int_max(INT____00003, 0, INT____00004) :: defines_var(INT____00004);\n\
constraint int_max(INT____00005, 0, INT____00006) :: defines_var(INT____00006);\n\
constraint int_max(INT____00007, 0, INT____00008) :: defines_var(INT____00008);\n\
constraint int_max(INT____00009, 0, INT____00010) :: defines_var(INT____00010);\n\
constraint int_max(INT____00011, 0, INT____00012) :: defines_var(INT____00012);\n\
constraint int_max(INT____00013, 0, INT____00014) :: defines_var(INT____00014);\n\
constraint int_max(INT____00015, 0, INT____00016) :: defines_var(INT____00016);\n\
constraint int_max(INT____00017, 0, INT____00018) :: defines_var(INT____00018);\n\
constraint int_max(INT____00019, 0, INT____00020) :: defines_var(INT____00020);\n\
constraint int_max(INT____00021, 0, INT____00022) :: defines_var(INT____00022);\n\
constraint int_max(INT____00023, 0, INT____00024) :: defines_var(INT____00024);\n\
constraint int_max(INT____00025, 0, INT____00026) :: defines_var(INT____00026);\n\
constraint int_max(INT____00027, 0, INT____00028) :: defines_var(INT____00028);\n\
constraint int_max(INT____00029, 0, INT____00030) :: defines_var(INT____00030);\n\
constraint int_max(INT____00031, 0, INT____00032) :: defines_var(INT____00032);\n\
constraint int_max(INT____00033, 0, INT____00034) :: defines_var(INT____00034);\n\
constraint int_max(INT____00035, 0, INT____00036) :: defines_var(INT____00036);\n\
constraint int_max(INT____00037, 0, INT____00038) :: defines_var(INT____00038);\n\
constraint int_max(INT____00039, 0, INT____00040) :: defines_var(INT____00040);\n\
constraint int_max(INT____00041, 0, INT____00042) :: defines_var(INT____00042);\n\
constraint int_max(INT____00043, 0, INT____00044) :: defines_var(INT____00044);\n\
constraint int_max(INT____00045, 0, INT____00046) :: defines_var(INT____00046);\n\
constraint int_max(INT____00047, 0, INT____00048) :: defines_var(INT____00048);\n\
constraint int_max(INT____00049, 0, INT____00050) :: defines_var(INT____00050);\n\
constraint int_max(INT____00051, 0, INT____00052) :: defines_var(INT____00052);\n\
constraint int_max(INT____00053, 0, INT____00054) :: defines_var(INT____00054);\n\
constraint int_max(INT____00055, 0, INT____00056) :: defines_var(INT____00056);\n\
constraint int_max(INT____00057, 0, INT____00058) :: defines_var(INT____00058);\n\
constraint int_max(INT____00059, 0, INT____00060) :: defines_var(INT____00060);\n\
constraint int_max(INT____00061, 0, INT____00062) :: defines_var(INT____00062);\n\
constraint int_max(INT____00063, 0, INT____00064) :: defines_var(INT____00064);\n\
constraint int_max(INT____00065, 0, INT____00066) :: defines_var(INT____00066);\n\
constraint int_max(INT____00067, 0, INT____00068) :: defines_var(INT____00068);\n\
constraint int_max(INT____00069, 0, INT____00070) :: defines_var(INT____00070);\n\
constraint int_max(INT____00071, 0, INT____00072) :: defines_var(INT____00072);\n\
constraint int_max(INT____00073, 0, INT____00074) :: defines_var(INT____00074);\n\
constraint int_max(INT____00075, 0, INT____00076) :: defines_var(INT____00076);\n\
constraint int_max(INT____00077, 0, INT____00078) :: defines_var(INT____00078);\n\
constraint int_max(INT____00079, 0, INT____00080) :: defines_var(INT____00080);\n\
constraint int_max(INT____00081, 0, INT____00082) :: defines_var(INT____00082);\n\
constraint int_max(INT____00083, 0, INT____00084) :: defines_var(INT____00084);\n\
constraint int_max(INT____00085, 0, INT____00086) :: defines_var(INT____00086);\n\
constraint int_max(INT____00087, 0, INT____00088) :: defines_var(INT____00088);\n\
constraint int_max(INT____00089, 0, INT____00090) :: defines_var(INT____00090);\n\
constraint int_max(INT____00091, 0, INT____00092) :: defines_var(INT____00092);\n\
constraint int_max(INT____00093, 0, INT____00094) :: defines_var(INT____00094);\n\
constraint int_max(INT____00095, 0, INT____00096) :: defines_var(INT____00096);\n\
constraint int_max(INT____00097, 0, INT____00098) :: defines_var(INT____00098);\n\
constraint int_max(INT____00099, 0, INT____00100) :: defines_var(INT____00100);\n\
constraint int_max(INT____00101, 0, INT____00102) :: defines_var(INT____00102);\n\
constraint int_max(INT____00103, 0, INT____00104) :: defines_var(INT____00104);\n\
constraint int_max(INT____00105, 0, INT____00106) :: defines_var(INT____00106);\n\
constraint int_max(INT____00107, 0, INT____00108) :: defines_var(INT____00108);\n\
constraint int_max(INT____00109, 0, INT____00110) :: defines_var(INT____00110);\n\
constraint int_max(INT____00111, 0, INT____00112) :: defines_var(INT____00112);\n\
constraint int_max(INT____00113, 0, INT____00114) :: defines_var(INT____00114);\n\
constraint int_max(INT____00115, 0, INT____00116) :: defines_var(INT____00116);\n\
constraint int_max(INT____00117, 0, INT____00118) :: defines_var(INT____00118);\n\
constraint int_max(INT____00119, 0, INT____00120) :: defines_var(INT____00120);\n\
constraint int_max(INT____00121, 0, INT____00122) :: defines_var(INT____00122);\n\
constraint int_max(INT____00123, 0, INT____00124) :: defines_var(INT____00124);\n\
constraint int_max(INT____00125, 0, INT____00126) :: defines_var(INT____00126);\n\
constraint int_max(INT____00127, 0, INT____00128) :: defines_var(INT____00128);\n\
constraint int_max(INT____00129, 0, INT____00130) :: defines_var(INT____00130);\n\
constraint int_max(INT____00131, 0, INT____00132) :: defines_var(INT____00132);\n\
constraint int_max(INT____00133, 0, INT____00134) :: defines_var(INT____00134);\n\
constraint int_max(INT____00135, 0, INT____00136) :: defines_var(INT____00136);\n\
constraint int_max(INT____00137, 0, INT____00138) :: defines_var(INT____00138);\n\
constraint int_max(INT____00139, 0, INT____00140) :: defines_var(INT____00140);\n\
constraint int_max(INT____00141, 0, INT____00142) :: defines_var(INT____00142);\n\
constraint int_max(INT____00143, 0, INT____00144) :: defines_var(INT____00144);\n\
constraint int_max(INT____00145, 0, INT____00146) :: defines_var(INT____00146);\n\
constraint int_max(INT____00147, 0, INT____00148) :: defines_var(INT____00148);\n\
constraint int_max(INT____00149, 0, INT____00150) :: defines_var(INT____00150);\n\
constraint int_max(INT____00151, 0, INT____00152) :: defines_var(INT____00152);\n\
constraint int_max(INT____00153, 0, INT____00154) :: defines_var(INT____00154);\n\
constraint int_max(INT____00155, 0, INT____00156) :: defines_var(INT____00156);\n\
constraint int_max(INT____00157, 0, INT____00158) :: defines_var(INT____00158);\n\
constraint int_max(INT____00159, 0, INT____00160) :: defines_var(INT____00160);\n\
constraint int_max(INT____00161, 0, INT____00162) :: defines_var(INT____00162);\n\
constraint int_max(INT____00163, 0, INT____00164) :: defines_var(INT____00164);\n\
constraint int_max(INT____00165, 0, INT____00166) :: defines_var(INT____00166);\n\
constraint int_max(INT____00167, 0, INT____00168) :: defines_var(INT____00168);\n\
constraint int_max(INT____00169, 0, INT____00170) :: defines_var(INT____00170);\n\
constraint int_max(INT____00171, 0, INT____00172) :: defines_var(INT____00172);\n\
constraint int_max(INT____00173, 0, INT____00174) :: defines_var(INT____00174);\n\
constraint int_max(INT____00175, 0, INT____00176) :: defines_var(INT____00176);\n\
constraint int_max(INT____00177, 0, INT____00178) :: defines_var(INT____00178);\n\
constraint int_max(INT____00179, 0, INT____00180) :: defines_var(INT____00180);\n\
constraint int_max(INT____00181, 0, INT____00182) :: defines_var(INT____00182);\n\
constraint int_max(INT____00183, 0, INT____00184) :: defines_var(INT____00184);\n\
constraint int_max(INT____00185, 0, INT____00186) :: defines_var(INT____00186);\n\
constraint int_max(INT____00187, 0, INT____00188) :: defines_var(INT____00188);\n\
constraint int_max(INT____00189, 0, INT____00190) :: defines_var(INT____00190);\n\
constraint int_max(INT____00191, 0, INT____00192) :: defines_var(INT____00192);\n\
constraint int_max(INT____00193, 0, INT____00194) :: defines_var(INT____00194);\n\
constraint int_max(INT____00195, 0, INT____00196) :: defines_var(INT____00196);\n\
constraint int_max(INT____00197, 0, INT____00198) :: defines_var(INT____00198);\n\
constraint int_max(INT____00199, 0, INT____00200) :: defines_var(INT____00200);\n\
constraint int_max(INT____00201, 0, INT____00202) :: defines_var(INT____00202);\n\
constraint int_max(INT____00203, 0, INT____00204) :: defines_var(INT____00204);\n"+"\
constraint int_max(INT____00205, 0, INT____00206) :: defines_var(INT____00206);\n\
constraint int_max(INT____00207, 0, INT____00208) :: defines_var(INT____00208);\n\
constraint int_max(INT____00209, 0, INT____00210) :: defines_var(INT____00210);\n\
constraint int_max(INT____00211, 0, INT____00212) :: defines_var(INT____00212);\n\
constraint int_max(INT____00213, 0, INT____00214) :: defines_var(INT____00214);\n\
constraint int_max(INT____00215, 0, INT____00216) :: defines_var(INT____00216);\n\
constraint int_max(INT____00217, 0, INT____00218) :: defines_var(INT____00218);\n\
constraint int_max(INT____00219, 0, INT____00220) :: defines_var(INT____00220);\n\
constraint int_max(INT____00221, 0, INT____00222) :: defines_var(INT____00222);\n\
constraint int_max(INT____00223, 0, INT____00224) :: defines_var(INT____00224);\n\
constraint int_max(INT____00225, 0, INT____00226) :: defines_var(INT____00226);\n\
constraint int_max(INT____00227, 0, INT____00228) :: defines_var(INT____00228);\n\
constraint int_max(INT____00229, 0, INT____00230) :: defines_var(INT____00230);\n\
constraint int_max(INT____00231, 0, INT____00232) :: defines_var(INT____00232);\n\
constraint int_max(INT____00233, 0, INT____00234) :: defines_var(INT____00234);\n\
constraint int_max(INT____00235, 0, INT____00236) :: defines_var(INT____00236);\n\
constraint int_max(INT____00237, 0, INT____00238) :: defines_var(INT____00238);\n\
constraint int_max(INT____00239, 0, INT____00240) :: defines_var(INT____00240);\n\
constraint int_max(INT____00241, 0, INT____00242) :: defines_var(INT____00242);\n\
constraint int_max(INT____00243, 0, INT____00244) :: defines_var(INT____00244);\n\
constraint int_max(INT____00245, 0, INT____00246) :: defines_var(INT____00246);\n\
constraint int_max(INT____00247, 0, INT____00248) :: defines_var(INT____00248);\n\
constraint int_max(INT____00249, 0, INT____00250) :: defines_var(INT____00250);\n\
constraint int_max(INT____00251, 0, INT____00252) :: defines_var(INT____00252);\n\
constraint int_max(INT____00253, 0, INT____00254) :: defines_var(INT____00254);\n\
constraint int_max(INT____00255, 0, INT____00256) :: defines_var(INT____00256);\n\
constraint int_max(INT____00257, 0, INT____00258) :: defines_var(INT____00258);\n\
constraint int_max(INT____00259, 0, INT____00260) :: defines_var(INT____00260);\n\
constraint int_max(INT____00261, 0, INT____00262) :: defines_var(INT____00262);\n\
constraint int_max(INT____00263, 0, INT____00264) :: defines_var(INT____00264);\n\
constraint int_max(INT____00265, 0, INT____00266) :: defines_var(INT____00266);\n\
constraint int_max(INT____00267, 0, INT____00268) :: defines_var(INT____00268);\n\
constraint int_max(INT____00269, 0, INT____00270) :: defines_var(INT____00270);\n\
constraint int_max(INT____00271, 0, INT____00272) :: defines_var(INT____00272);\n\
constraint int_max(INT____00273, 0, INT____00274) :: defines_var(INT____00274);\n\
constraint int_max(INT____00275, 0, INT____00276) :: defines_var(INT____00276);\n\
constraint int_max(INT____00277, 0, INT____00278) :: defines_var(INT____00278);\n\
constraint int_max(INT____00279, 0, INT____00280) :: defines_var(INT____00280);\n\
constraint int_max(INT____00281, 0, INT____00282) :: defines_var(INT____00282);\n\
constraint int_max(INT____00283, 0, INT____00284) :: defines_var(INT____00284);\n\
constraint int_max(INT____00285, 0, INT____00286) :: defines_var(INT____00286);\n\
constraint int_max(INT____00287, 0, INT____00288) :: defines_var(INT____00288);\n\
constraint int_max(INT____00289, 0, INT____00290) :: defines_var(INT____00290);\n\
constraint int_max(INT____00291, 0, INT____00292) :: defines_var(INT____00292);\n\
constraint int_max(INT____00293, 0, INT____00294) :: defines_var(INT____00294);\n\
constraint int_max(INT____00295, 0, INT____00296) :: defines_var(INT____00296);\n\
constraint int_max(INT____00297, 0, INT____00298) :: defines_var(INT____00298);\n\
constraint int_max(INT____00299, 0, INT____00300) :: defines_var(INT____00300);\n\
constraint int_max(INT____00301, 0, INT____00302) :: defines_var(INT____00302);\n\
constraint int_max(INT____00303, 0, INT____00304) :: defines_var(INT____00304);\n\
constraint int_max(INT____00305, 0, INT____00306) :: defines_var(INT____00306);\n\
constraint int_max(INT____00307, 0, INT____00308) :: defines_var(INT____00308);\n\
constraint int_max(INT____00309, 0, INT____00310) :: defines_var(INT____00310);\n\
constraint int_max(INT____00311, 0, INT____00312) :: defines_var(INT____00312);\n\
constraint int_max(INT____00313, 0, INT____00314) :: defines_var(INT____00314);\n\
constraint int_max(INT____00315, 0, INT____00316) :: defines_var(INT____00316);\n\
constraint int_max(INT____00317, 0, INT____00318) :: defines_var(INT____00318);\n\
constraint int_max(INT____00319, 0, INT____00320) :: defines_var(INT____00320);\n\
constraint int_max(INT____00321, 0, INT____00322) :: defines_var(INT____00322);\n\
constraint int_max(INT____00323, 0, INT____00324) :: defines_var(INT____00324);\n\
constraint int_max(INT____00325, 0, INT____00326) :: defines_var(INT____00326);\n\
constraint int_max(INT____00327, 0, INT____00328) :: defines_var(INT____00328);\n\
constraint int_max(INT____00329, 0, INT____00330) :: defines_var(INT____00330);\n\
constraint int_max(INT____00331, 0, INT____00332) :: defines_var(INT____00332);\n\
constraint int_max(INT____00333, 0, INT____00334) :: defines_var(INT____00334);\n\
constraint int_max(INT____00335, 0, INT____00336) :: defines_var(INT____00336);\n\
constraint int_max(INT____00337, 0, INT____00338) :: defines_var(INT____00338);\n\
constraint int_max(INT____00339, 0, INT____00340) :: defines_var(INT____00340);\n\
constraint int_max(INT____00341, 0, INT____00342) :: defines_var(INT____00342);\n\
constraint int_max(INT____00343, 0, INT____00344) :: defines_var(INT____00344);\n\
constraint int_max(INT____00345, 0, INT____00346) :: defines_var(INT____00346);\n\
constraint int_max(INT____00347, 0, INT____00348) :: defines_var(INT____00348);\n\
constraint int_max(INT____00349, 0, INT____00350) :: defines_var(INT____00350);\n\
constraint int_max(INT____00351, 0, INT____00352) :: defines_var(INT____00352);\n\
constraint int_max(INT____00353, 0, INT____00354) :: defines_var(INT____00354);\n\
constraint int_max(INT____00355, 0, INT____00356) :: defines_var(INT____00356);\n\
constraint int_max(INT____00357, 0, INT____00358) :: defines_var(INT____00358);\n\
constraint int_max(INT____00359, 0, INT____00360) :: defines_var(INT____00360);\n\
constraint int_max(INT____00361, 0, INT____00362) :: defines_var(INT____00362);\n\
constraint int_max(INT____00363, 0, INT____00364) :: defines_var(INT____00364);\n\
constraint int_max(INT____00365, 0, INT____00366) :: defines_var(INT____00366);\n\
constraint int_max(INT____00367, 0, INT____00368) :: defines_var(INT____00368);\n\
constraint int_max(INT____00369, 0, INT____00370) :: defines_var(INT____00370);\n\
constraint int_max(INT____00371, 0, INT____00372) :: defines_var(INT____00372);\n\
constraint int_max(INT____00373, 0, INT____00374) :: defines_var(INT____00374);\n\
constraint int_max(INT____00375, 0, INT____00376) :: defines_var(INT____00376);\n\
constraint int_max(INT____00377, 0, INT____00378) :: defines_var(INT____00378);\n\
constraint int_max(INT____00379, 0, INT____00380) :: defines_var(INT____00380);\n\
constraint int_max(INT____00381, 0, INT____00382) :: defines_var(INT____00382);\n\
constraint int_max(INT____00383, 0, INT____00384) :: defines_var(INT____00384);\n\
constraint int_max(INT____00385, 0, INT____00386) :: defines_var(INT____00386);\n\
constraint int_max(INT____00387, 0, INT____00388) :: defines_var(INT____00388);\n\
constraint int_max(INT____00389, 0, INT____00390) :: defines_var(INT____00390);\n\
constraint int_max(INT____00391, 0, INT____00392) :: defines_var(INT____00392);\n\
constraint int_max(INT____00393, 0, INT____00394) :: defines_var(INT____00394);\n\
constraint int_max(INT____00395, 0, INT____00396) :: defines_var(INT____00396);\n\
constraint int_max(INT____00397, 0, INT____00398) :: defines_var(INT____00398);\n\
constraint int_max(INT____00399, 0, INT____00400) :: defines_var(INT____00400);\n\
constraint int_max(INT____00401, 0, INT____00402) :: defines_var(INT____00402);\n\
constraint int_max(INT____00403, 0, INT____00404) :: defines_var(INT____00404);\n\
constraint int_max(INT____00405, 0, INT____00406) :: defines_var(INT____00406);\n\
constraint int_max(INT____00407, 0, INT____00408) :: defines_var(INT____00408);\n\
constraint int_max(INT____00409, 0, INT____00410) :: defines_var(INT____00410);\n\
constraint int_max(INT____00411, 0, INT____00412) :: defines_var(INT____00412);\n\
constraint int_max(INT____00413, 0, INT____00414) :: defines_var(INT____00414);\n\
constraint int_max(INT____00415, 0, INT____00416) :: defines_var(INT____00416);\n\
constraint int_max(INT____00417, 0, INT____00418) :: defines_var(INT____00418);\n\
constraint int_max(INT____00419, 0, INT____00420) :: defines_var(INT____00420);\n\
constraint int_max(INT____00421, 0, INT____00422) :: defines_var(INT____00422);\n\
constraint int_max(INT____00423, 0, INT____00424) :: defines_var(INT____00424);\n\
constraint int_max(INT____00425, 0, INT____00426) :: defines_var(INT____00426);\n\
constraint int_max(INT____00427, 0, INT____00428) :: defines_var(INT____00428);\n\
constraint int_max(INT____00429, 0, INT____00430) :: defines_var(INT____00430);\n\
constraint int_max(INT____00431, 0, INT____00432) :: defines_var(INT____00432);\n\
constraint int_max(INT____00433, 0, INT____00434) :: defines_var(INT____00434);\n\
constraint int_max(INT____00435, 0, INT____00436) :: defines_var(INT____00436);\n\
constraint int_max(INT____00437, 0, INT____00438) :: defines_var(INT____00438);\n\
constraint int_max(INT____00439, 0, INT____00440) :: defines_var(INT____00440);\n\
constraint int_max(INT____00441, 0, INT____00442) :: defines_var(INT____00442);\n\
constraint int_max(INT____00443, 0, INT____00444) :: defines_var(INT____00444);\n\
constraint int_max(INT____00445, 0, INT____00446) :: defines_var(INT____00446);\n\
constraint int_max(INT____00447, 0, INT____00448) :: defines_var(INT____00448);\n\
constraint int_max(INT____00449, 0, INT____00450) :: defines_var(INT____00450);\n\
constraint int_max(INT____00451, 0, INT____00452) :: defines_var(INT____00452);\n\
constraint int_max(INT____00453, 0, INT____00454) :: defines_var(INT____00454);\n\
constraint int_max(INT____00455, 0, INT____00456) :: defines_var(INT____00456);\n\
constraint int_max(INT____00457, 0, INT____00458) :: defines_var(INT____00458);\n\
constraint int_max(INT____00459, 0, INT____00460) :: defines_var(INT____00460);\n\
constraint int_max(INT____00461, 0, INT____00462) :: defines_var(INT____00462);\n\
constraint int_max(INT____00463, 0, INT____00464) :: defines_var(INT____00464);\n\
constraint int_max(INT____00465, 0, INT____00466) :: defines_var(INT____00466);\n\
constraint int_max(INT____00467, 0, INT____00468) :: defines_var(INT____00468);\n\
constraint int_max(INT____00469, 0, INT____00470) :: defines_var(INT____00470);\n\
constraint int_max(INT____00471, 0, INT____00472) :: defines_var(INT____00472);\n\
constraint int_max(INT____00473, 0, INT____00474) :: defines_var(INT____00474);\n\
constraint int_max(INT____00475, 0, INT____00476) :: defines_var(INT____00476);\n\
constraint int_max(INT____00477, 0, INT____00478) :: defines_var(INT____00478);\n\
constraint int_max(INT____00479, 0, INT____00480) :: defines_var(INT____00480);\n\
constraint int_max(INT____00481, 0, INT____00482) :: defines_var(INT____00482);\n\
constraint int_max(INT____00483, 0, INT____00484) :: defines_var(INT____00484);\n\
constraint int_max(INT____00485, 0, INT____00486) :: defines_var(INT____00486);\n\
constraint int_max(INT____00487, 0, INT____00488) :: defines_var(INT____00488);\n\
constraint int_max(INT____00489, 0, INT____00490) :: defines_var(INT____00490);\n\
constraint int_max(INT____00491, 0, INT____00492) :: defines_var(INT____00492);\n\
constraint int_max(INT____00493, 0, INT____00494) :: defines_var(INT____00494);\n\
constraint int_max(INT____00495, 0, INT____00496) :: defines_var(INT____00496);\n\
constraint int_max(INT____00497, 0, INT____00498) :: defines_var(INT____00498);\n\
constraint int_max(INT____00499, 0, INT____00500) :: defines_var(INT____00500);\n\
constraint int_max(INT____00501, 0, INT____00502) :: defines_var(INT____00502);\n\
constraint int_max(INT____00503, 0, INT____00504) :: defines_var(INT____00504);\n"+"\
constraint int_max(INT____00505, 0, INT____00506) :: defines_var(INT____00506);\n\
constraint int_max(INT____00507, 0, INT____00508) :: defines_var(INT____00508);\n\
constraint int_max(INT____00509, 0, INT____00510) :: defines_var(INT____00510);\n\
constraint int_max(INT____00511, 0, INT____00512) :: defines_var(INT____00512);\n\
constraint int_max(INT____00513, 0, INT____00514) :: defines_var(INT____00514);\n\
constraint int_max(INT____00515, 0, INT____00516) :: defines_var(INT____00516);\n\
constraint int_max(INT____00517, 0, INT____00518) :: defines_var(INT____00518);\n\
constraint int_max(INT____00519, 0, INT____00520) :: defines_var(INT____00520);\n\
constraint int_max(INT____00521, 0, INT____00522) :: defines_var(INT____00522);\n\
constraint int_max(INT____00523, 0, INT____00524) :: defines_var(INT____00524);\n\
constraint int_max(INT____00525, 0, INT____00526) :: defines_var(INT____00526);\n\
constraint int_max(INT____00527, 0, INT____00528) :: defines_var(INT____00528);\n\
constraint int_max(INT____00529, 0, INT____00530) :: defines_var(INT____00530);\n\
constraint int_max(INT____00531, 0, INT____00532) :: defines_var(INT____00532);\n\
constraint int_max(INT____00533, 0, INT____00534) :: defines_var(INT____00534);\n\
constraint int_max(INT____00535, 0, INT____00536) :: defines_var(INT____00536);\n\
constraint int_max(INT____00537, 0, INT____00538) :: defines_var(INT____00538);\n\
constraint int_max(INT____00539, 0, INT____00540) :: defines_var(INT____00540);\n\
constraint int_max(INT____00541, 0, INT____00542) :: defines_var(INT____00542);\n\
constraint int_max(INT____00543, 0, INT____00544) :: defines_var(INT____00544);\n\
constraint int_max(INT____00545, 0, INT____00546) :: defines_var(INT____00546);\n\
constraint int_max(INT____00547, 0, INT____00548) :: defines_var(INT____00548);\n\
constraint int_max(INT____00549, 0, INT____00550) :: defines_var(INT____00550);\n\
constraint int_max(INT____00551, 0, INT____00552) :: defines_var(INT____00552);\n\
constraint int_max(INT____00553, 0, INT____00554) :: defines_var(INT____00554);\n\
constraint int_max(INT____00555, 0, INT____00556) :: defines_var(INT____00556);\n\
constraint int_max(INT____00557, 0, INT____00558) :: defines_var(INT____00558);\n\
constraint int_max(INT____00559, 0, INT____00560) :: defines_var(INT____00560);\n\
constraint int_max(INT____00561, 0, INT____00562) :: defines_var(INT____00562);\n\
solve  :: int_search([INT____00001, N[1], N[2], N[3], N[4], N[5], N[6], N[7], N[8], N[9], N[10], N[11], N[12], N[13], N[14], Q[1], Q[2], Q[3], Q[4], Q[5], Q[6], Q[7], Q[8], Q[9], Q[10], Q[11], Q[12], Q[13], Q[14], Q[15], Q[16], Q[17], Q[18], Q[19], Q[20], Q[21], Q[22], Q[23], Q[24], Q[25], Q[26], Q[27], Q[28], Q[29], Q[30], Q[31], Q[32], Q[33], Q[34], Q[35], Q[36], Q[37], Q[38], Q[39], Q[40], Q[41], Q[42], Q[43], Q[44], Q[45], Q[46], Q[47], Q[48], Q[49], Q[50], Q[51], Q[52], Q[53], Q[54], Q[55], Q[56], Q[57], Q[58], Q[59], Q[60], Q[61], Q[62], Q[63], Q[64], Q[65], Q[66], Q[67], Q[68], Q[69], Q[70], Q[71], Q[72], Q[73], Q[74], Q[75], Q[76], Q[77], Q[78], Q[79], Q[80], Q[81], Q[82], Q[83], Q[84], Q[85], Q[86], Q[87], Q[88], Q[89], Q[90], Q[91], Q[92], Q[93], Q[94], Q[95], Q[96], Q[97], Q[98], Q[99], Q[100], Q[101], Q[102], Q[103], Q[104], Q[105], Q[106], Q[107], Q[108], Q[109], Q[110], Q[111], Q[112], Q[113], Q[114], Q[115], Q[116], Q[117], Q[118], Q[119], Q[120], Q[121], Q[122], Q[123], Q[124], Q[125], Q[126], Q[127], Q[128], Q[129], Q[130], Q[131], Q[132], Q[133], Q[134], Q[135], Q[136], Q[137], Q[138], Q[139], Q[140], Q[141], Q[142], Q[143], Q[144], Q[145], Q[146], Q[147], Q[148], Q[149], Q[150], Q[151], Q[152], Q[153], Q[154], Q[155], Q[156], Q[157], Q[158], Q[159], Q[160], Q[161], Q[162], Q[163], Q[164], Q[165], Q[166], Q[167], Q[168], Q[169], Q[170], Q[171], Q[172], Q[173], Q[174], Q[175], Q[176], Q[177], Q[178], Q[179], Q[180], Q[181], Q[182], Q[183], Q[184], Q[185], Q[186], Q[187], Q[188], Q[189], Q[190], Q[191], Q[192], Q[193], Q[194], Q[195], Q[196], Q[197], Q[198], Q[199], Q[200], Q[201], Q[202], Q[203], Q[204], Q[205], Q[206], Q[207], Q[208], Q[209], Q[210], Q[211], Q[212], Q[213], Q[214], Q[215], Q[216], Q[217], Q[218], Q[219], Q[220], Q[221], Q[222], Q[223], Q[224], Q[225], Q[226], Q[227], Q[228], Q[229], Q[230], Q[231], Q[232], Q[233], Q[234], Q[235], Q[236], Q[237], Q[238], Q[239], Q[240], Q[241], Q[242], Q[243], Q[244], Q[245], Q[246], Q[247], Q[248], Q[249], Q[250], Q[251], Q[252], Q[253], Q[254], Q[255], Q[256], Q[257], Q[258], Q[259], Q[260], Q[261], Q[262], Q[263], Q[264], Q[265], Q[266], Q[267], Q[268], Q[269], Q[270], Q[271], Q[272], Q[273], Q[274], Q[275], Q[276], Q[277], Q[278], Q[279], Q[280], Q[281], Q[282], Q[283], Q[284], Q[285], Q[286], Q[287], Q[288], Q[289], Q[290], Q[291], Q[292], Q[293], Q[294], Q[295], Q[296], Q[297], Q[298], Q[299], Q[300], Q[301], Q[302], Q[303], Q[304], Q[305], Q[306], Q[307], Q[308], Q[309], Q[310], Q[311], Q[312], Q[313], Q[314], Q[315], Q[316], Q[317], Q[318], Q[319], Q[320], Q[321], Q[322], Q[323], Q[324], Q[325], Q[326], Q[327], Q[328], Q[329], Q[330], Q[331], Q[332], Q[333], Q[334], Q[335], Q[336], Q[337], Q[338], Q[339], Q[340], Q[341], Q[342], Q[343], Q[344], Q[345], Q[346], Q[347], Q[348], Q[349], Q[350]], input_order, indomain_split, complete) minimize INT____00563;\n\
", "Beamtime = 21;\n\
K = 7;\n\
----------\n\
==========\n\
");
      }
    };

    Create c;
  }

}}

// STATISTICS: test-flatzinc
