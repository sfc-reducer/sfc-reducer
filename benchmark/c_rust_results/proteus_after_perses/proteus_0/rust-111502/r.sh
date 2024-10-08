#!/usr/bin/env bash

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

set -o nounset

readonly FILE=small.rs
readonly VERSION="nightly-2023-05-12"
readonly FLAGS_BUGGY="-Zmir-opt-level=0 -Copt-level=3"
readonly FLAGS_CORRECT1="-Zmir-opt-level=0 -Copt-level=0"
readonly FLAGS_CORRECT2="-Zmir-opt-level=1 -Copt-level=0"

readonly BIN_BUGGY="./buggy.out"
if ! timeout -s 9 60 rustup run "${VERSION}" rustc ${FLAGS_BUGGY} -o "${BIN_BUGGY}" "${FILE}" &> /dev/null ; then
  exit 1
fi

readonly BIN_CORRECT1="./correct1.out"
if ! timeout -s 9 60 rustup run "${VERSION}" rustc ${FLAGS_CORRECT1} -o "${BIN_CORRECT1}" "${FILE}" &> /dev/null ; then
  exit 1
fi

readonly BIN_CORRECT2="./correct2.out"
if ! timeout -s 9 60 rustup run "${VERSION}" rustc ${FLAGS_CORRECT2} -o "${BIN_CORRECT2}" "${FILE}" &> /dev/null ; then
  exit 1
fi

readonly OUTPUT_BUGGY="output_buggy.txt"
readonly OUTPUT_CORRECT1="output_correct1.txt"
readonly OUTPUT_CORRECT2="output_correct2.txt"
if ! (timeout -s 9 30 "${BIN_BUGGY}") >& "${OUTPUT_BUGGY}" ; then
  exit 1
fi

if ! (timeout -s 9 30 "${BIN_CORRECT1}") >& "${OUTPUT_CORRECT1}" ; then
  exit 1
fi

if ! (timeout -s 9 30 "${BIN_CORRECT2}") >& "${OUTPUT_CORRECT2}" ; then
  exit 1
fi

if diff "${OUTPUT_BUGGY}" "${OUTPUT_CORRECT1}" >& /dev/null ; then
  exit 1
fi

if ! diff "${OUTPUT_CORRECT1}" "${OUTPUT_CORRECT2}" >& /dev/null ; then
  exit 1
fi
exit 0

