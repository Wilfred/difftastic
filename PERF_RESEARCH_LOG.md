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

### exp3: drop patterns already covered by a whole-node pattern — KEPT

Ablating the 13 surviving non-trivial Rust patterns individually (query build
cost above the 41.2M floor of an empty query):

```
  48,847,281  ((scoped_identifier path: (scoped_identifier name: (identifier) @type)) ...)
  47,531,515  ((scoped_type_identifier path: (scoped_identifier name: (identifier) @type)) ...)
  25,456,275  (struct_pattern type: (scoped_type_identifier name: (type_identifier) @constructor))
  24,473,042  (scoped_identifier (self) @keyword)
  21,761,456  (block_comment (doc_comment)) @comment.documentation
  20,128,573  (line_comment (doc_comment)) @comment.documentation
  18,187,236  ((scoped_identifier path: (identifier) @type) ...)
  17,423,127  ((scoped_type_identifier path: (identifier) @type) ...)
   4,960,645  (lifetime (identifier) @label)
     429,225  ((identifier) @constant (#match? ...))
     241,994  (use_list (self) @keyword)
     220,676  (scoped_use_list (self) @keyword)
      83,296  ((identifier) @constructor (#match? ...))
```

Cost is in the nested patterns, not the count: dropping all 60 *bare* patterns
(`"fn" @keyword` and friends) from the filtered query saved only 1.8M of 269M.
Analysis is proportional to how many grammar states a pattern's steps can occur
in, and a bare token pattern resolves in one step.

Three of these nested patterns can go. `(type_identifier) @type` already puts
every `type_identifier` in the type bucket, so the `struct_pattern` pattern that
captures a `type_identifier` as `@constructor` — also the type bucket — cannot
add a node id that isn't there already. Likewise `(line_comment) @comment`
covers `(line_comment (doc_comment)) @comment.documentation`.

Generalised: a pattern is redundant when every capture difftastic reads sits on
a node kind that some whole-node pattern already assigns to the same bucket.
`whole_node_pattern` recognises the covering patterns, `bucketed_captures`
works out which node kind each capture attaches to (skipping capture references
inside predicates, which name a capture written elsewhere in the pattern), and
the two are compared as bucket bitmasks.

```
name                     exp1-trim-highlight-query exp3-drop-covered-patterns        delta      pct
slow                          2290030615      2222301428    -67729187   -2.96%
typing                        3132286053      3133607355     +1321302   +0.04%
long_line                     2301487378      2302154010      +666632   +0.03%
newick                         822165785       821645928      -519857   -0.06%
modules                       2129202366      2128993936      -208430   -0.01%
fortran                        864272651       864047589      -225062   -0.03%
objc_module                   1529525143      1529469142       -56001   -0.00%
perl                           772147917       772256892      +108975   +0.01%
verilog                        773666334       773789797      +123463   +0.02%
nest                           505792998       440165855    -65627143  -12.98%
javascript                     254039479       253917656      -121823   -0.05%
erlang                         547417696       546811605      -606091   -0.11%
context                        274677075       209156043    -65521032  -23.85%
haskell                        147330305       147509665      +179360   +0.12%
apex                           467304356       467491440      +187084   +0.04%
simple                          12897356        12934842       +37486   +0.29%
typescript                      33118177        33193269       +75092   +0.23%
ruby                            52987433        53065657       +78224   +0.15%
swift                          322854722       323036290      +181568   +0.06%
hack                             3079266         3081236        +1970   +0.06%
identical                      336597949       289305278    -47292671  -14.05%
zig                            163218690       163340886      +122196   +0.07%
dart                            59249924        58970261      -279663   -0.47%
if                              17467133        17516504       +49371   +0.28%
tab                             16435738        16481710       +45972   +0.28%
json                             4916062         4927875       +11813   +0.24%
yaml                            10320618        10339252       +18634   +0.18%
total                        17844489219     17599511401   -244977818   -1.37%
```

**-1.37% overall**, concentrated where the redundancy is: Rust (`context`
-23.9%, `nest` -13.0%) and Scala (`identical` -14.1%). The trivial Rust diff
goes from 272.1M to 206.6M.

The +0.1% to +0.3% on the other pairs is the cost of the extra analysis pass
itself — building the covered-kinds map and walking each pattern's captures.
On `json`, whose whole run is 4.9M instructions, that shows up as +11.8k. It is
paid once per language and is worth the Rust and Scala wins.

Output unchanged; `cargo test` passes.

### exp4: ASCII fast path for display width — KEPT

Profiling `long_line` (a 4.7MB single-line text file, the sample that isn't a
tree-sitter language at all):

```
426,574,998 (18.53%)  DoubleEndedIterator::rfold
402,958,051 (17.50%)  difft::words::split_words
235,811,605 (10.24%)  difft::display::style::split_string_by_width
```

The `rfold` is `UnicodeWidthStr::width`, called 218,714 times from
`split_string_by_width` and 4 times from `side_by_side::print`
(`visible_content_max_display_width` measures each whole line, and here a line
is the whole file). Wrapping a 4.7MB line at 180 columns produces ~26,000
parts, and each part's width is measured with the full Unicode algorithm.

Printable ASCII is one column per byte, so counting bytes and tabs gives the
same answer. The fast path bails to the Unicode version on any other byte, and
a test asserts the two agree on ASCII, accented Latin, CJK, emoji, newlines and
control characters.

The tab arithmetic is written so it matches the general formula whether
`"\t".width()` is 0 or 1, which the existing code is careful about.

```
name                     exp3-drop-covered-patterns exp4-ascii-width        delta      pct
slow                          2222301428      2221986140      -315288   -0.01%
typing                        3133607355      3131942073     -1665282   -0.05%
long_line                     2302154010      2155541019   -146612991   -6.37%
newick                         821645928       819429551     -2216377   -0.27%
modules                       2128993936      2127326407     -1667529   -0.08%
fortran                        864047589       863710138      -337451   -0.04%
objc_module                   1529469142      1529153628      -315514   -0.02%
perl                           772256892       772183377       -73515   -0.01%
verilog                        773789797       773789468         -329   -0.00%
nest                           440165855       440073036       -92819   -0.02%
javascript                     253917656       253807575      -110081   -0.04%
erlang                         546811605       546994707      +183102   +0.03%
context                        209156043       209145812       -10231   -0.00%
haskell                        147509665       147473209       -36456   -0.02%
apex                           467491440       467486965        -4475   -0.00%
simple                          12934842        12944111        +9269   +0.07%
typescript                      33193269        33192338         -931   -0.00%
ruby                            53065657        53057684        -7973   -0.02%
swift                          323036290       322980994       -55296   -0.02%
hack                             3081236         3071416        -9820   -0.32%
identical                      289305278       289304008        -1270   -0.00%
zig                            163340886       163315301       -25585   -0.02%
dart                            58970261        58960240       -10021   -0.02%
if                              17516504        17509208        -7296   -0.04%
tab                             16481710        16473880        -7830   -0.05%
json                             4927875         4910033       -17842   -0.36%
yaml                            10339252        10336876        -2376   -0.02%
total                        17599511401     17446099194   -153412207   -0.87%
```

**-0.87% overall, -6.4% on `long_line`.** Everything else is flat, as expected:
the function is only hot when lines are long enough to wrap many times.

Output unchanged; `cargo test` passes.

