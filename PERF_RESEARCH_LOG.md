# Difftastic performance autoresearch log

An autoresearch-style loop (after [karpathy/autoresearch](https://github.com/karpathy/autoresearch)):
propose one change, measure it against a fixed metric, keep it if it wins,
revert it if it doesn't, write down the outcome either way.

**Metric**: instructions executed, summed over a fixed set of sample file pairs.
**Constraint**: difftastic's output must not change on any sample pair.

## Harness

`perf(1)` is not installed in this sandbox and its counts are noisy anyway, so
the metric is callgrind's `Ir` — the same quantity `perf stat` reports as
`instructions:u`, but counted by emulation rather than sampled from the PMU.
Repeated runs of the same binary on the same input agree to the instruction,
which means a 0.3% win is a real 0.3% win and needs no repeat runs.

| script | purpose |
| --- | --- |
| `perf-research/measure.sh LABEL` | Ir per pair over `perf-research/pairs.txt`, into `perf-research/results/LABEL.tsv` |
| `perf-research/compare.sh A B` | delta table between two runs |
| `perf-research/check_output.sh` | every sample pair, in side-by-side/inline/JSON, must md5 identically to the recorded baseline |

The correctness oracle is a baseline recorded from master HEAD rather than the
checked-in `sample_files/compare.expected`, which is stale on master: the recent
"Ensure foo.cls is LaTeX rather than Apex" commit changed the `apex` pair's
output without the expectation being regenerated.

`cargo test` is also run before accepting any change.

## Log

### Setup

- Established the harness above. Callgrind slowdown is ~40x, so the 14-pair
  suite costs a few minutes per iteration on top of a ~2.5 min release rebuild.
- Benchmark set covers the slowest sample pairs (`slow.rs`, `typing.ml`,
  `long_line.txt`, `newick.nwk`, `modules.ml`) plus a spread of languages, so a
  change that helps one parser or one shape of tree can't carry the total on
  its own.

