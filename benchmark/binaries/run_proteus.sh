#!/usr/bin/env bash

set -o pipefail
set -o nounset
set -o errexit
#set -o xtrace

#expect
# UNPATCHED r
# code to be reduced
# STAT FILE

#do
# run perses on file to be reduced with r, collect stats

readonly BINARY_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "${BINARY_DIR}/run_common.sh"

pushd "${TMP}"
readonly START_TIME=$(date +%s)
java ${JVM_FLAGS:=''} -Xss10m -jar "/tmp/binaries/proteus_main_deploy.jar" ${PERSES_FLAGS:=''} \
  --test-script "${TMP_TEST_SCRIPT}" \
  --input-file "${TMP_SOURCE_FILE}" \
  --output-dir "${TMP}" \
  --threads "${THREADS}" \
  --query-cache-type CONTENT_SHA512 \
  --query-caching true \
  --subtree-size-limit 40 \
  --on-demand-reducer-classes org.perses.reduction.reducer.IdentifierReducer,org.perses.reduction.reducer.vulcan.SubTreeReplacementReducer,org.perses.reduction.reducer.vulcan.SubTreeCanonicalizer,

readonly RET_CODE="$?"
readonly END_TIME=$(date +%s)

summarize_results "${TMP_SOURCE_FILE}"
popd

exit "${RET_CODE}"
