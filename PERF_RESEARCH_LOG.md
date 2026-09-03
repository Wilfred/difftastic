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

### Where the instructions actually go

Profiling a diff of two 24-byte Rust files (`fn main() { let x = 1; }`):

```
444,668,795 total Ir
388,843,746 (87%)  ts_query__perform_analysis
 44,115,214 (10%)  ts_query__analyze_patterns
```

Essentially the entire run is tree-sitter compiling the syntax-highlighting
query, before any parsing or diffing happens. It is a fixed cost per process,
paid once per language (`from_language` already caches `TreeSitterConfig`), and
it is invisible on large inputs but dominates the small-diff case that `git
diff` actually hits.

Fixed cost of a trivial diff, by language, before any change:

| language | Ir |
| --- | --- |
| Rust | 444,668,795 |
| JavaScript | 101,986,799 |
| Python | 67,987,464 |
| JSON | 3,506,786 |
| plain text | 3,516,740 |

JSON and plain text set the floor: no highlighting query worth analysing.

### exp1: drop highlight-query patterns whose captures difftastic ignores — KEPT

`tree_highlights` reduces every capture in `highlights.scm` to one of four
buckets (comment / keyword-ish / string / type) and throws the rest away.
Rust's `highlights.scm` has 101 patterns, of which 28 capture only things
difftastic never reads: `@property`, `@function`, `@punctuation.bracket`,
`@variable.parameter`, `@escape`, `@attribute`.

Patterns in a tree-sitter query match independently, so dropping one cannot
change the matches of the others. `retain_relevant_patterns` splits the query
source into top-level patterns and keeps only those containing a capture name
that `is_relevant_capture` accepts. Splitting is textual, so a query whose
syntax the splitter mishandles yields a query that fails to compile rather than
one that quietly matches differently — `new_highlight_query` then falls back to
the original source.

The capture-name predicates are now the single source of truth shared by the
filter and by `tree_highlights`, so the two can't drift apart.

Trivial-diff cost after:

| language | before | after | change |
| --- | --- | --- | --- |
| Rust | 444,668,795 | 272,106,589 | **-38.8%** |
| JavaScript | 101,986,799 | 12,045,324 | **-88.2%** |
| Python | 67,987,464 | 17,207,949 | **-74.7%** |
| JSON | 3,506,786 | 3,493,849 | -0.4% |
| plain text | 3,516,740 | 3,511,534 | -0.1% |

JavaScript gains most because difftastic concatenates three highlight queries
(JS + TypeScript + QML) for `.js`, and most of the combined result is captures
it discards.

Across the whole benchmark suite (27 pairs, instructions executed):

```
name                            baseline exp1-trim-highlight-query        delta      pct
slow                          2465876442      2290030615   -175845827   -7.13%
typing                        3380379723      3132286053   -248093670   -7.34%
long_line                     2302656601      2301487378     -1169223   -0.05%
newick                         823119262       822165785      -953477   -0.12%
modules                       2349996120      2129202366   -220793754   -9.40%
fortran                        939055225       864272651    -74782574   -7.96%
objc_module                   2228274140      1529525143   -698748997  -31.36%
perl                          2182661116       772147917  -1410513199  -64.62%
verilog                       1368529947       773666334   -594863613  -43.47%
nest                           683344286       505792998   -177551288  -25.98%
javascript                     345241026       254039479    -91201547  -26.42%
erlang                         654797252       547417696   -107379556  -16.40%
context                        447270316       274677075   -172593241  -38.59%
haskell                       2370207090       147330305  -2222876785  -93.78%
apex                          2793654418       467304356  -2326350062  -83.27%
simple                         102864006        12897356    -89966650  -87.46%
typescript                     235574104        33118177   -202455927  -85.94%
ruby                           284677942        52987433   -231690509  -81.39%
swift                         1166420340       322854722   -843565618  -72.32%
hack                             3089382         3079266       -10116   -0.33%
identical                      608560652       336597949   -271962703  -44.69%
zig                            398482558       163218690   -235263868  -59.04%
dart                           559198461        59249924   -499948537  -89.40%
if                              68274815        17467133    -50807682  -74.42%
tab                             41634481        16435738    -25198743  -60.52%
json                             4932310         4916062       -16248   -0.33%
yaml                            58300809        10320618    -47980191  -82.30%
total                        28867072824     17844489219 -11022583605  -38.18%
```

**-38.2% overall.** The large pairs gain 7-9%, which is the fixed query cost
amortised over real work. The small pairs gain 60-94%, because for them the
query build *was* the work. Haskell is the extreme: `haskell_1.hs` is 191 bytes
and took 2.37 billion instructions to diff, of which 2.22 billion was analysing
highlighting patterns whose captures difftastic discards.

The pairs that don't move (`long_line`, `newick`, `hack`, `json`) are plain
text, or languages whose highlighting query is small to begin with.

Output unchanged on all 145 sample pairs in all three display modes;
`cargo test` passes.

### exp2: merge simple patterns sharing a capture name — REJECTED

Follow-on idea: rewrite the 42 separate `"fn" @keyword`-style patterns as one
`["fn" "let" ...] @keyword` alternation, on the theory that analysis cost scales
with pattern count. It does not. For Rust, after exp1's filtering:

| query | patterns | `Query::new` |
| --- | --- | --- |
| filtered | 73 | 38.2 ms |
| filtered + merged | 21 | 36.1 ms |

A 3.5x reduction in pattern count buys ~5%, which is inside the noise of the
wall-clock measurement. Analysis cost tracks the number of pattern *steps* and
the grammar states each step can occur in, not the number of patterns, so
merging steps into one alternation moves the work rather than removing it. Not
worth the risk of rewriting query source.

