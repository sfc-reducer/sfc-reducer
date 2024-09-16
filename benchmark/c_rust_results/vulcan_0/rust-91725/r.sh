#!/usr/bin/env bash

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [[ -n "${REDUCTION_STAT_FILE}" ]] ; then
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
#  echo "written reduction stat file '${REDUCTION_STAT_FILE}' " >> "/tmp/reductionstatfile.txt"
#  echo "------------------------------------------------------------------------------" >> "/tmp/reductionstatfile.txt"
  date +%Y%m%d_%H%M%S_%Z >> "${REDUCTION_STAT_FILE}"
fi

set -o nounset

readonly TIMEOUT=5
readonly FILE=small.rs
readonly VERSION="nightly-2021-12-09"
readonly FLAGS_BUGGY="-O -Z mir-opt-level=4"
readonly FLAGS_CORRECT1="-O -Z mir-opt-level=3"

readonly BIN_CORRECT1="./correct1.out"
if ! timeout -s 9 60 rustup run "${VERSION}" rustc ${FLAGS_CORRECT1} -o "${BIN_CORRECT1}" "${FILE}" &> /dev/null ; then
  exit 1
fi

readonly OUTPUT_BUGGY="output_buggy.txt"
readonly OUTPUT_CORRECT1="output_correct1.txt"
readonly BIN_BUGGY="./buggy.out"

fault_happened=false

for _ in {1..10} ; do
  if ! timeout -s 9 60 rustup run "${VERSION}" rustc ${FLAGS_BUGGY} -o "${BIN_BUGGY}" "${FILE}" &> /dev/null ; then
    exit 1
  fi
  
  
  if timeout -s 9 $TIMEOUT "${BIN_BUGGY}" >& "${OUTPUT_BUGGY}" ; then
    continue
  fi
  
  if ! timeout -s 9 $TIMEOUT "${BIN_CORRECT1}" >& "${OUTPUT_CORRECT1}" ; then
    continue
  fi
  fault_happened=true
done

if [ "$fault_happened" = false ] ; then
  exit 1
fi

exit 0

