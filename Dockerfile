FROM cancel/trec:latest

RUN mv /tmp/benchmark/smt_benchmarks/bin /tmp/smt_bin

RUN rm -rf /tmp/benchmark
RUN rm -rf /tmp/binaries

COPY benchmark /tmp/benchmark
COPY binaries /tmp/binaries

USER root

RUN mv /tmp/smt_bin /tmp/benchmark/smt_benchmarks/
RUN chown -R coq:coq /tmp/benchmark
RUN chown -R coq:coq /tmp/binaries

USER coq