#!/bin/bash

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi

rm -f out*.txt

if 
  timeout -s 9 60 clang -pedantic -Wall -O0 -c small.c  >out.txt 2>&1 &&\
  ! grep 'incompatible redeclaration' out.txt &&\
  ! grep 'ordered comparison between pointer' out.txt &&\
  ! grep 'warning: use of GNU' out.txt &&\
  ! grep 'expected ' out.txt &&\
  ! grep 'eliding middle term' out.txt &&\
  ! grep 'end of non-void function' out.txt &&\
  ! grep 'specifies type' out.txt &&\
  ! grep 'invalid in C99' out.txt &&\
  ! grep 'should return a value' out.txt &&\
  ! grep 'uninitialized' out.txt &&\
  ! grep 'incompatible pointer to' out.txt &&\
  ! grep 'incompatible integer to' out.txt &&\
  ! grep 'type specifier missing' out.txt &&\
  !  timeout -s 9 60 /uusoc/exports/scratch/chenyang/compilers/compiler-install/gcc-430/bin/gcc-430 -O3  -w -DINLINE= -DCSMITH_MINIMAL  -I/uusoc/exports/scratch/chenyang/csmith/runtime  -DWRAP_VOLATILES=0   small.c -o small1 > cc_out1.txt 2>&1 &&\
  grep "internal compiler error: in get_addr_dereference_operands, at tree-ssa-operands.c:1698" cc_out1.txt
then
  exit 0
else
  exit 1
fi


#  timeout -s 9 60 gcc -Wall -Wextra -O2 small.c  >outa.txt 2>&1 &&\
#  ! grep uninitialized outa.txt &&\
#  ! grep 'without a cast' outa.txt &&\
#  ! grep 'control reaches end' outa.txt &&\
#  ! grep 'return type defaults' outa.txt &&\
#  ! grep 'useless type name in empty declaration' outa.txt &&\
#  ! grep 'no semicolon at end' outa.txt &&\
#  ! grep 'type defaults to' outa.txt &&\
#  ! grep 'too few arguments for format' outa.txt &&\
#  ! grep 'incompatible pointer' outa.txt &&\
#  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
#  ! grep 'declaration does not declare anything' outa.txt &&\
#  ! grep 'expects type' outa.txt &&\
#  ! grep 'pointer from integer' outa.txt &&\
#  ! grep 'incompatible implicit' outa.txt &&\
#  ! grep 'excess elements in struct initializer' outa.txt &&\
#  ! grep 'comparison between pointer and integer' outa.txt &&\


#  clang --analyze small.c > out_analyze.txt 2>&1 &&\
#  ! grep garbage out_analyze.txt &&\
#  ! grep undefined out_analyze.txt &&\
