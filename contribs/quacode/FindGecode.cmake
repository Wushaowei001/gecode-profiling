#
# Main authors:
#    Vincent Barichard <Vincent.Barichard@univ-angers.fr>
#
# Copyright:
#    Vincent Barichard, 2013
#
# Last modified:
#    $Date$ by $Author$
#    $Revision$
#
# This file is part of Quacode:
#    http://quacode.barichard.com
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
# CMake package to find Gecode libraries and set usefull variables

SET(GECODE_SEARCH_PATH ${GECODE_BIN} /usr/lib /usr/local/lib)

FILE(STRINGS ${GECODE_BIN}/config.status GECODE_DLL_ARCH LIMIT_COUNT 1 REGEX "S\\[\"DLL_ARCH\"\\]=")
STRING(REGEX MATCH "=\"[^\"]*" GECODE_DLL_ARCH "${GECODE_DLL_ARCH}")
STRING(SUBSTRING "${GECODE_DLL_ARCH}" 2 -1 GECODE_DLL_ARCH)

FIND_LIBRARY(GECODE_KERNEL_LIBRARIES gecodekernel${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH}) 

IF(GECODE_KERNEL_LIBRARIES)
  SET(GECODE_FOUND TRUE)
  SET(GECODE_LIBRARIES ${GECODE_KERNEL_LIBRARIES})

  FIND_LIBRARY(GECODE_SUPPORT_LIBRARIES gecodesupport${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_SUPPORT_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_SUPPORT_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_SUPPORT_LIBRARIES)

  FIND_LIBRARY(GECODE_INT_LIBRARIES gecodeint${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_INT_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_INT_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_INT_LIBRARIES)

  FIND_LIBRARY(GECODE_FLOAT_LIBRARIES gecodefloat${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_FLOAT_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_FLOAT_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_FLOAT_LIBRARIES)

  FIND_LIBRARY(GECODE_SET_LIBRARIES gecodeset${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_SET_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_SET_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_SET_LIBRARIES)

  FIND_LIBRARY(GECODE_SEARCH_LIBRARIES gecodesearch${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_SEARCH_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_SEARCH_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_SEARCH_LIBRARIES)

  FIND_LIBRARY(GECODE_MINIMODEL_LIBRARIES gecodeminimodel${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_MINIMODEL_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_MINIMODEL_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_MINIMODEL_LIBRARIES)

  FIND_LIBRARY(GECODE_DRIVER_LIBRARIES gecodedriver${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_DRIVER_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_DRIVER_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_DRIVER_LIBRARIES)

  FIND_LIBRARY(GECODE_GIST_LIBRARIES gecodegist${GECODE_DLL_ARCH} ${GECODE_SEARCH_PATH})
  IF(GECODE_GIST_LIBRARIES)
    SET(GECODE_LIBRARIES ${GECODE_GIST_LIBRARIES} ${GECODE_LIBRARIES})
  ENDIF(GECODE_GIST_LIBRARIES)

ENDIF(GECODE_KERNEL_LIBRARIES)

IF(GECODE_FOUND)
  MESSAGE(STATUS "Found GECODE: ${GECODE_LIBRARIES}")
ELSE (GECODE_FOUND)
  MESSAGE(STATUS "Could not find GECODE")
ENDIF(GECODE_FOUND)
