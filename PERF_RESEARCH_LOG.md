# Difftastic performance autoresearch log

An autoresearch-style loop (after [karpathy/autoresearch](https://github.com/karpathy/autoresearch)):
propose one change, measure it against a fixed metric, keep it if it wins,
revert it if it doesn't, write down the outcome either way.

**Metric**: instructions executed, summed over a fixed set of sample file pairs.
**Constraint**: difftastic's output must not change on any sample pair.

## Harness

Both `perf` and callgrind are available in the current environment. The fast
iteration metric is repeated `perf stat -e instructions:u`; callgrind's `Ir`
counts the same quantity by emulation and is used when deterministic attribution
or a fixed-suite comparison justifies its roughly 40x slowdown. Repeated
callgrind runs of the same binary agree to the instruction, while `perf` runs
are reported as a distribution or median.

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

**This turned out to be a rediscovery.** The same change was made in July 2026
on `claude/arena-allocators-difftastic-8jpqov`, commit `95d1b70` — same
reasoning, same measurements to within a few tenths of a percent, and the same
decision to extract the capture-name predicates so the filter and
`tree_highlights` can't drift. It is unmerged, so it isn't visible from
`master`. See `PRIOR_WORK.md`: check the branch list *before* starting, not
after.

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

### exp5: stop splitting words once past the word-diff limit — KEPT

`change_positions` splits a novel run into words on both sides, then throws
both vecs away if either has more than `MAX_WORDS_IN_LINE` (1000) words,
because Myers diff scales badly. For `long_line.txt` that means splitting 4.7MB
into millions of `&str` and immediately discarding them.

`split_words_up_to` returns `None` as soon as the count passes the limit, and
the caller only splits the right-hand side if the left-hand side came back
under it. Same decision, same output, without walking the rest of the line.

```
name                     exp4-ascii-width exp5-word-split-limit        delta      pct
slow                          2221986140      2223663938     +1677798   +0.08%
typing                        3131942073      3133916884     +1974811   +0.06%
long_line                     2155541019      1734942448   -420598571  -19.51%
newick                         819429551       820174614      +745063   +0.09%
modules                       2127326407      2129237363     +1910956   +0.09%
fortran                        863710138       864238799      +528661   +0.06%
objc_module                   1529153628      1529218070       +64442   +0.00%
perl                           772183377       772193040        +9663   +0.00%
verilog                        773789468       773769623       -19845   -0.00%
nest                           440073036       440070721        -2315   -0.00%
javascript                     253807575       254035839      +228264   +0.09%
erlang                         546994707       547287342      +292635   +0.05%
context                        209145812       209145801          -11   -0.00%
haskell                        147473209       147473232          +23   +0.00%
apex                           467486965       467489914        +2949   +0.00%
simple                          12944111        12944682         +571   +0.00%
typescript                      33192338        33186088        -6250   -0.02%
ruby                            53057684        53068015       +10331   +0.02%
swift                          322980994       322981812         +818   +0.00%
hack                             3071416         3066110        -5306   -0.17%
identical                      289304008       289288293       -15715   -0.01%
zig                            163315301       163285037       -30264   -0.02%
dart                            58960240        58963118        +2878   +0.00%
if                              17509208        17510582        +1374   +0.01%
tab                             16473880        16492177       +18297   +0.11%
json                             4910033         4911591        +1558   +0.03%
yaml                            10336876        10325709       -11167   -0.11%
total                        17446099194     17032880842   -413218352   -2.37%
```

**-2.37% overall, -19.5% on `long_line`.**

The +0.06% to +0.09% on `typing`, `modules`, `newick`, `fortran` and `erlang`
is not a real cost: those are tree-sitter languages, which reach
`split_words_and_numbers` and never call `split_words` at all. It's the binary
laying out differently. Worth recording as a methodology note — callgrind's Ir
is exact for a given binary, but comparing *different* binaries carries about
±0.1% of layout noise, so anything below that isn't a result.

Output unchanged; `cargo test` passes.

### exp6: skip stale entries when popping the Dijkstra heap — REJECTED

A vertex is pushed again every time a shorter route to it is found, so the heap
holds entries for routes already improved on. The textbook fix is to compare
the popped distance against the recorded one and skip if it's worse. That's
output-safe here: edge costs are all positive and `RadixHeapMap` pops in order,
so by the time a stale entry surfaces its neighbours have already been offered
a shorter distance, and `found_shorter_route` would reject every update it
proposes.

| pair | before | after | change |
| --- | --- | --- | --- |
| slow | 2,223,663,938 | 2,227,576,780 | **+0.18%** |
| typing | 3,133,916,884 | 3,133,590,637 | -0.01% |

Slower. The existing `found_shorter_route` guard already stops most redundant
pushes, so stale pops are rare, and re-expanding one is cheap because
`neighbours` is memoised in a `OnceCell`. The added `Cell` read and compare on
every pop costs more than the re-expansions it avoids. Reverted.

### exp7: pack the vertex identity into two words — KEPT

Profiling `slow.rs`, where the search dominates:

```
744,162,246 (33.46%)  difft::diff::graph::allocate_if_new     (3,466,493 calls)
575,047,461 (25.86%)  difft::diff::shortest_path::mark_syntax
341,732,608 (15.37%)  difft::diff::graph::compute_neighbours  (1,909,165 calls)
```

215 instructions per `allocate_if_new` call is a lot for one hash-map lookup.
`Hash for Vertex` hashed five fields separately — two `Option<SyntaxId>` from
the syntax nodes, two parent ids and a bool — which is ten writes into
`FxHasher` once the `Option` discriminants are counted, and `PartialEq` walked
the same fields with a match per side.

Both now go through one `key()` returning `(u64, u64)`. Syntax IDs are
`NonZeroU32`, so bit 32 distinguishes "we're at this node" from "we've run out
of nodes inside this parent", and bit 33 carries the pop-either-parent flag.
This is exactly the old equality relation, and it no longer relies on the
invariant that `lhs_parent_id` agrees with `lhs_syntax`'s parent — which the
old `Hash` did rely on, since it hashed the parent id even when `eq` ignored
it.

```
name                     exp5-word-split-limit exp7-packed-vertex-key        delta      pct
slow                          2223663938      2172859254    -50804684   -2.28%
typing                        3133916884      3124653500     -9263384   -0.30%
long_line                     1734942448      1736277833     +1335385   +0.08%
newick                         820174614       799386781    -20787833   -2.53%
modules                       2129237363      2126747538     -2489825   -0.12%
fortran                        864238799       842185725    -22053074   -2.55%
objc_module                   1529218070      1524663681     -4554389   -0.30%
perl                           772193040       772169563       -23477   -0.00%
verilog                        773769623       773671321       -98302   -0.01%
nest                           440070721       438663009     -1407712   -0.32%
javascript                     254035839       246270346     -7765493   -3.06%
erlang                         547287342       546402084      -885258   -0.16%
context                        209145801       209114703       -31098   -0.01%
haskell                        147473232       147433034       -40198   -0.03%
apex                           467489914       467490266         +352   +0.00%
simple                          12944682        12943728         -954   -0.01%
typescript                      33186088        33201773       +15685   +0.05%
ruby                            53068015        53062547        -5468   -0.01%
swift                          322981812       322992220       +10408   +0.00%
hack                             3066110         3066652         +542   +0.02%
identical                      289288293       289302984       +14691   +0.01%
zig                            163285037       163283703        -1334   -0.00%
dart                            58963118        58912804       -50314   -0.09%
if                              17510582        17509585         -997   -0.01%
tab                             16492177        16511177       +19000   +0.12%
json                             4911591         4891975       -19616   -0.40%
yaml                            10325709        10290879       -34830   -0.34%
total                        17032880842     16913958665   -118922177   -0.70%
```

**-0.70% overall**, up to -3.1% on the pairs that spend most of their time in
the search (`javascript`, `fortran`, `newick`, `slow`).

Output unchanged; `cargo test` passes.

### exp8: key the seen map by the packed key — KEPT

exp7 made `Vertex`'s hash and equality cheap, but the map was still keyed by
`&Vertex`, so every probe candidate had to be unpacked into a key on both sides
and compared. Keying `seen` by `VertexKey` directly means probing compares two
words, and `hashbrown`'s ordinary `Entry` API replaces `raw_entry_mut`.

```
name                     exp7-packed-vertex-key exp8-key-seen-map-by-key        delta      pct
slow                          2172859254      2016559970   -156299284   -7.19%
typing                        3124653500      3096827340    -27826160   -0.89%
long_line                     1736277833      1739119496     +2841663   +0.16%
newick                         799386781       735855443    -63531338   -7.95%
modules                       2126747538      2127199152      +451614   +0.02%
fortran                        842185725       795282320    -46903405   -5.57%
objc_module                   1524663681      1511289981    -13373700   -0.88%
perl                           772169563       772183498       +13935   +0.00%
verilog                        773671321       773458183      -213138   -0.03%
nest                           438663009       435423446     -3239563   -0.74%
javascript                     246270346       227892250    -18378096   -7.46%
erlang                         546402084       545640147      -761937   -0.14%
context                        209114703       209087925       -26778   -0.01%
haskell                        147433034       147403051       -29983   -0.02%
apex                           467490266       467497800        +7534   +0.00%
simple                          12943728        12953982       +10254   +0.08%
typescript                      33201773        33203982        +2209   +0.01%
ruby                            53062547        53079310       +16763   +0.03%
swift                          322992220       323023455       +31235   +0.01%
hack                             3066652         3081152       +14500   +0.47%
identical                      289302984       289308105        +5121   +0.00%
zig                            163283703       163175624      -108079   -0.07%
dart                            58912804        58698574      -214230   -0.36%
if                              17509585        17519112        +9527   +0.05%
tab                             16511177        16516150        +4973   +0.03%
json                             4891975         4845341       -46634   -0.95%
yaml                            10290879        10227785       -63094   -0.61%
total                        16913958665     16586352574   -327606091   -1.94%
```

**-1.94% overall**, and -5% to -8% on the search-bound pairs (`newick`, `slow`,
`fortran`). Cumulative against master: **-42.5%**, 28.87G to 16.59G.

`Hash for Vertex` is now gone; `PartialEq` stays because `edge_between`
compares vertices.

Output unchanged; `cargo test` passes.

### exp9: replace the per-key `SmallVec` with two pointer slots — KEPT

After exp8, the packed-key lookup was cheaper but its value was still a
`SmallVec<[&Vertex; 2]>`. The graph deliberately keeps at most two vertices for
each key (representing two possible parenthesis nestings), so the collection's
length/capacity representation described states that cannot occur.

The current `slow.rs` profile made this the first large-input target:

```
422,473,594 (21.20%)  difft::diff::graph::allocate_if_new
341,732,608 (17.15%)  difft::diff::graph::compute_neighbours
```

The map value is now `(&Vertex, Option<&Vertex>)`. The occupied path returns
the second pointer immediately when present, compares the first vertex's
parent stack when it is the only entry, and fills the second slot otherwise.
This is the same decision tree as the previous `SmallVec` implementation, but
with a smaller hash-table bucket and no collection length checks or iteration.

This environment produced materially different counts from the saved exp8
binary, so I rebuilt the unchanged control and measured both binaries rather
than comparing across environments. The unchanged control aborts in
tree-sitter-haskell on `haskell_1.hs` even after a clean out-of-tree rebuild
(`corrupted size vs. prev_size`), so Haskell was excluded from both sides of
this one comparison. It accounts for only 0.9% of the previous suite. The
fixed remaining 26 pairs measured:

```
name                     exp8-current-no-haskell exp9-two-slot-seen-map        delta      pct
slow                          1992564782      1896338185    -96226597   -4.83%
typing                        3402837328      3381722170    -21115158   -0.62%
long_line                     1702198562      1704010085     +1811523   +0.11%
newick                         734314839       697981531    -36333308   -4.95%
modules                       2417955794      2418498514      +542720   +0.02%
fortran                        811587848       786098742    -25489106   -3.14%
objc_module                   1499759526      1490766209     -8993317   -0.60%
perl                           740366051       740309725       -56326   -0.01%
verilog                        729503833       729343136      -160697   -0.02%
nest                           412052183       410337856     -1714327   -0.42%
javascript                     226483406       216428943    -10054463   -4.44%
erlang                         585760902       585303945      -456957   -0.08%
context                        191824833       191792739       -32094   -0.02%
apex                           459699702       459703280        +3578   +0.00%
simple                          12259037        12265867        +6830   +0.06%
typescript                      31678686        31687672        +8986   +0.03%
ruby                            50965920        50968358        +2438   +0.00%
swift                          312531337       312536131        +4794   +0.00%
hack                             2873439         2878236        +4797   +0.17%
identical                      275585630       275590174        +4544   +0.00%
zig                            154356589       154297241       -59348   -0.04%
dart                            55898003        55783632      -114371   -0.20%
if                              16827820        16832135        +4315   +0.03%
tab                             15829374        15833332        +3958   +0.03%
json                             4588681         4559076       -29605   -0.65%
yaml                             9808290         9765426       -42864   -0.44%
total                        16850112395     16651632340   -198480055   -1.18%
```

**-1.18% overall on the controlled 26-pair suite**, concentrated in inputs
where the graph search is hot. `slow`, `newick`, JavaScript and Fortran improve
by 3.1-5.0%; parsing- and display-bound pairs are flat within binary-layout
noise. A quick hardware-counter probe with `perf stat` also works in this
environment and will be used for faster iteration in later experiments.

All 26 measurable pairs are byte-identical between the control and experiment
in side-by-side colour, inline, and JSON output. `cargo test --release` passes
(157 tests passed, one ignored). The Haskell abort is unchanged in the control
and experiment and is therefore recorded as a correctness-harness limitation,
not caused by this change.

### exp10: compute the vertex key before constructing a `Vertex` — REJECTED

`compute_neighbours` passed a complete 64-byte `Vertex` to `allocate_if_new`
at each of its seven edge sites. Most candidates hit an existing map entry, so
the hypothesis was that computing the packed key from the five position fields
first would avoid initializing `OnceCell`, `Cell`, and the full struct on the
common hit path.

I extracted `vertex_key` so it could operate on the position fields, changed
`allocate_if_new` to accept those fields separately, and constructed `Vertex`
only in the occupied-new-nesting and vacant branches. Five-run `perf stat`
instruction counts regressed on both search-bound probes:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| slow | 1,888,131,031 | 1,895,312,738 | **+0.38%** |
| newick | 695,362,982 | 698,007,128 | **+0.38%** |
| typing | 3,266,890,480 | 3,268,374,572 | +0.05% |

The compiler was already able to make constructing the simple metadata fields
cheap. Decomposing the value instead increased argument passing and code size
on every candidate, including misses where the struct is still required. The
probe failed, so no full suite or output check was run. Reverted.

### exp11: build syntax spans from tree-sitter points — KEPT

On `typing.ml`, `line_numbers::LinePositions::from_offset` consumed 86.3M
instructions (2.5% of the whole run). Every syntax atom and delimiter called
`LinePositions::from_region`, which binary-searched the file's line table for
both ends of the region. Tree-sitter nodes already expose their start and end
as byte-based `(row, column)` points, so the searches duplicated information
the parser had computed.

The tree-sitter conversion path now keeps a slice of source lines. Zero-width
outer delimiter positions come directly from a point; full node positions
iterate from the start row to the end row, using the point columns on the first
and last rows and the indexed source-line length for intermediate rows. This
preserves the old multiline `Vec<SingleLineSpan>` representation, including
zero-width final spans, without searching by absolute byte offset.

A five-run `perf stat` probe reduced `typing` from 3,266,890,480 to
3,148,455,355 instructions (**-3.63%**). The deterministic callgrind suite
confirmed the result:

| pair | exp9 | exp11 | change |
| --- | ---: | ---: | ---: |
| slow | 1,896,338,185 | 1,892,085,471 | -0.22% |
| typing | 3,381,722,170 | 3,264,634,497 | **-3.46%** |
| long_line | 1,704,010,085 | 1,705,547,227 | +0.09% |
| modules | 2,418,498,514 | 2,330,652,805 | **-3.63%** |
| nest | 410,337,856 | 404,315,477 | **-1.47%** |
| erlang | 585,303,945 | 565,611,246 | **-3.36%** |
| total (26 pairs) | 16,651,632,340 | 16,412,197,612 | **-1.44%** |

The other pairs are flat or modest wins; the full per-pair result is in
`perf-research/results/exp11-tree-sitter-point-spans.tsv`. The only apparent
regression is `long_line` at +0.09%, which is plain text and cannot reach this
code, so it is binary-layout noise.

The experiment is byte-identical to the control in side-by-side colour,
inline, and JSON modes on 108 of the 109 sample pairs, including the separate
22 MB `huge_cpp` pair, HTML sublanguages, multibyte text, and multiline
strings. The remaining Haskell pair is the pre-existing baseline heap abort
described in exp9. `cargo test --release` passes (157 passed, one ignored).

### exp12: avoid the scalar ASCII pre-scan on mixed Unicode lines — REJECTED

`long_line` is mostly ASCII but contains some Unicode. The exp4 helper scans
bytes until the first non-ASCII character, then falls back to
`UnicodeWidthStr::width`, which scans the complete string again. `perf report`
showed 9.4% of cycles in Unicode width's reverse fold and another 11.3% in
`split_string_by_width`.

The first experiment replaced both passes with a forward byte loop that decoded
only non-ASCII characters. It appeared to cut the `long_line` instruction
count by 4.95%, but the existing equivalence test caught that this changes
semantics: `UnicodeWidthStr` handles controls, CRLF, variation selectors, and
emoji sequences with right-to-left context, so character widths cannot simply
be summed. That implementation was discarded immediately.

The semantics-preserving version first used vectorised `str::is_ascii`; mixed
strings went directly to the unchanged Unicode algorithm, while ASCII strings
continued through exp4's byte-and-tab counter. Its five-run `perf stat` result
was a regression:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| long_line | 1,696,739,631 | 1,708,245,401 | **+0.68%** |

The extra ASCII pass is paid on every short wrapped chunk, outweighing the
faster detection on the two complete mixed-Unicode lines. The focused Unicode
equivalence test passed, but the performance probe failed, so no suite run was
needed. Reverted.

### exp13: insert visible line ranges once per hunk — KEPT

`visible_content_max_display_width` scans each hunk to find its minimum and
maximum visible line, then records that padded range in a set. The range
insertion was inside the loop over hunk lines, so a hunk spanning `n` lines
inserted growing ranges of sizes 1 through `n`: quadratic work before any text
was displayed. This exact issue was already present in the unmerged
`claude/project-review-az284i` branch; this experiment isolates that one fix on
top of the current autoresearch changes.

Moving the two range-insertion loops after the hunk scan makes the work linear
without changing which line numbers enter either set. On a reproducible
12,000-line full text rewrite, three individual `perf stat` runs were stable:

| implementation | median instructions | change |
| --- | ---: | ---: |
| insert the growing range per line | 14,912,560,491 | |
| insert the final range per hunk | 504,788,354 | **-96.6%** |

The 22 MB `huge_cpp` pair is split into many small hunks and stayed flat at
about 16.6G instructions, confirming that file size alone does not create the
pathology. The fixed 26-pair callgrind suite also remained essentially flat
overall, while finding a real win on `newick`:

| pair | exp11 | exp13 | change |
| --- | ---: | ---: | ---: |
| long_line | 1,705,547,227 | 1,702,111,158 | -0.20% |
| newick | 696,865,747 | 690,004,893 | **-0.98%** |
| total (26 pairs) | 16,412,197,612 | 16,397,707,382 | -0.09% |

The suite total is at the established binary-layout noise boundary, but the
asymptotic result and the isolated large-hunk measurement are unambiguous. The
full table is in `perf-research/results/exp13-linear-visible-width.tsv`.

Output is byte-identical in side-by-side colour, inline, and JSON modes on all
108 measurable sample pairs, including `huge_cpp`; Haskell remains unavailable
because of the unchanged baseline abort from exp9. `cargo test --release`
passes (157 passed, one ignored).

### exp14: group JSON changes by line before rendering — KEPT

JSON rendering called `matches_for_line` for every changed line on both sides.
That helper scanned every `MatchedPos` in the file and allocated a result vec,
making a large changed hunk quadratic in the number of positions. This was
another component of the unmerged `claude/project-review-az284i` display work,
isolated here on the current branch.

The renderer now makes one pass over each side's positions, grouping novel
matches in a `DftHashMap<LineNumber, Vec<&MatchedPos>>`, and performs a map
lookup for each output line. On the same 12,000-line full rewrite used for
exp13, three individual `perf stat` runs gave:

| implementation | median instructions | change |
| --- | ---: | ---: |
| scan every position per output line | 1,734,710,300 | |
| group novel positions once | 301,986,032 | **-82.6%** |

This code is only reached by `--display json`, so the default side-by-side
callgrind suite cannot measure it and was not run. Output is byte-identical in
all three modes on all 108 measurable sample pairs, including a separate JSON
comparison of the 22 MB `huge_cpp` pair. Haskell remains unavailable because
of the unchanged baseline abort from exp9. `cargo test --release` passes (157
passed, one ignored).

### exp15: calculate inline line bounds once per file — KEPT

Inline rendering computed each input's maximum line number once to determine
the line-number column width, but then rescanned both complete input strings
inside every hunk when calculating after-context. With `h` sparse hunks in an
`n`-byte file, that made this part of inline display O(nh).

The renderer now retains the two line numbers it already needs for column
widths and passes them to every context calculation. On a synthetic 20,000-line
text pair with every tenth line changed, `--display inline --context 0`
produces 2,000 separate hunks. Three individual `perf stat` runs gave:

| implementation | instruction counts | median | change |
| --- | --- | ---: | ---: |
| rescan both files per hunk | 17,610,740,476; 17,610,721,413; 17,610,524,215 | 17,610,721,413 | |
| calculate each maximum once | 1,719,749,762; 1,719,473,867; 1,719,496,131 | 1,719,496,131 | **-90.2%** |

This path is only reached by inline display, so the default side-by-side
callgrind suite was not run. Output is byte-identical in side-by-side colour,
inline, and JSON modes on all 108 measurable sample pairs, including the 22 MB
`huge_cpp` pair. Haskell remains unavailable because of the unchanged baseline
abort from exp9. `cargo test` passes (157 passed, one ignored).

### exp16: use a queue when compacting long one-sided runs — KEPT

`compact_gaps` buffers a run of lines present on only one side, then pairs them
with lines from the other side. The buffer was a `Vec`, and every pairing used
`remove(0)`, shifting all remaining elements. Two opposite runs of `n` lines
therefore copied O(n²) elements. A sampled profile of a 20,000-line full
rewrite put about half the cycles in anonymous libc addresses, consistent with
the repeated `memmove` calls.

The buffer is now a `VecDeque`, so consuming its front is amortised O(1). Three
individual `perf stat` runs on that full rewrite gave:

| implementation | instruction counts | median | change |
| --- | --- | ---: | ---: |
| `Vec::remove(0)` | 675,042,806; 675,054,490; 674,999,344 | 675,042,806 | |
| `VecDeque::pop_front()` | 374,746,583; 374,695,959; 374,726,007 | 374,726,007 | **-44.5%** |

Five-run probes on ordinary `slow`, `typing`, and `long_line` pairs were flat:
the instruction-count changes were -0.0005%, -0.0030%, and -0.0028%, all well
below the established binary-layout noise threshold. This fix was also present
in the unmerged `claude/project-review-az284i` display work and is isolated here.

Output is byte-identical in side-by-side colour, inline, and JSON modes on all
108 measurable sample pairs, including `huge_cpp`; Haskell remains unavailable
because of the unchanged baseline abort from exp9. `cargo test` passes (157
passed, one ignored).

### exp17: index final line occurrences for hunk display — KEPT

After exp16, a cycle profile of the 22 MB `huge_cpp` pair put 19.7% of the
entire run in `matched_lines_indexes_for_hunk`. The side-by-side and JSON
renderers advance the start of their alignment slice as they visit hunks, so
finding each hunk's first line is linear overall. Finding its end still scanned
backward from the end of the remaining file for every hunk, making many sparse
hunks near-quadratic.

The first probe searched forward from the hunk start and reduced `huge_cpp` by
22.4%, but changed output on `Session_1.kt`. A line number can occur multiple
times in an alignment, and the renderer intentionally ends at its final
occurrence. That unsafe version was discarded.

The kept implementation makes one linear pass over the alignment and stores
the final index of every LHS and RHS line in dense vectors. Hunk starts retain
the old ordered forward search; hunk ends now take the maximum indexed
occurrence from either side, exactly matching the old reverse search. Results:

| workload | before | after | change |
| --- | ---: | ---: | ---: |
| 22 MB `huge_cpp` pair (three-run `perf stat` mean) | 14,858,905,910 | 11,597,644,715 | **-22.0%** |
| 20k-line/2k-hunk synthetic pair (median) | 1,919,832,555 | 1,720,873,610 | **-10.4%** |

The post-change profile no longer contains `matched_lines_indexes_for_hunk`
among its visible costs. Output is byte-identical in side-by-side colour,
inline, and JSON modes on all 108 measurable sample pairs, including all three
modes on `huge_cpp`. Haskell remains unavailable because of the unchanged
baseline abort from exp9. The duplicate-line invariant now has a focused unit
test; the full suite plus that test passes (158 passed, one ignored).

### exp18: replace the regex newline splitter with `split_inclusive` — REJECTED

The post-exp17 `huge_cpp` profile spends 7.3% of cycles in string splitting
iterators and searchers. `line_parser::split_lines_keep_newline` used a compiled
regex solely to find `\n`, so the standard library's `str::split_inclusive`
looked like a simpler zero-setup replacement with identical slices.

Five-run `perf stat` probes showed the opposite:

| pair | regex iterator | `split_inclusive` | change |
| --- | ---: | ---: | ---: |
| `huge_cpp` | 11,608,400,594 | 11,645,368,750 | **+0.32%** |
| `long_line` | 1,619,434,227 | 1,633,405,708 | **+0.86%** |

The regex engine's literal search is better optimized for this workload than
the generic pattern iterator. Focused line-parser tests passed, but the
performance probe failed, so the implementation was reverted.

### exp19: construct unchanged fallback spans from line order — KEPT

Large files exceed the syntax parser's size limit and use the line-oriented
fallback parser. Its changed-part iterator consumes both files monotonically,
but every unchanged line still called `LinePositions::from_region` on each
side. That performs two binary searches to recover a fact the iterator already
knows: the line starts at column zero on the next line. After exp17,
`LinePositions::from_offset` alone accounted for 8.0% of `huge_cpp` cycles.

The fallback parser now tracks each side's current line number. It constructs
the single span for an unchanged line directly and advances the counters by
the number of source lines in changed blocks; changed-word spans retain the old
`LinePositions` path. Five-run `perf stat` results:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `huge_cpp` | 11,607,904,707 | 10,753,573,169 | **-7.36%** |
| `long_line` | 1,619,329,210 | 1,619,452,542 | +0.008% |

The plain-text long-line result is flat within binary-layout noise; its cost is
in novel-word and display processing, not unchanged lines. Output is
byte-identical in all three modes on all 108 measurable sample pairs, including
all modes on `huge_cpp`; Haskell remains unavailable because of the unchanged
baseline abort from exp9. `cargo test` passes (159 passed, one ignored), with a
new focused test for unchanged line numbers after a novel block.

### exp20: reserve line-map capacity from the position count — KEPT

After exp19, hash-table insertion accounted for 16.7% of `huge_cpp` cycles and
rehashing for another 3.8%. Both `all_lines` and `opposite_positions` build at
most one outer key per `MatchedPos`, but started empty and repeatedly grew.
The large fallback representation has approximately one position per source
line, so `mps.len()` is also a close capacity estimate rather than merely an
upper bound.

Constructing those sets and maps with that known capacity reduced the five-run
`huge_cpp` instruction count from 10,744,079,610 to 10,520,825,001
(**-2.08%**). The `slow` syntax-diff probe was flat (-0.011%, below layout
noise), despite its larger number of positions per line.

Peak RSS did not regress: `/usr/bin/time -v` measured 696 MB versus 699 MB on
`huge_cpp`, and both versions used 349 MB on `slow`. Output is byte-identical
in all three modes on all 108 measurable sample pairs, including all modes on
`huge_cpp`; Haskell remains unavailable because of the unchanged baseline
abort from exp9. `cargo test` passes (159 passed, one ignored).

### exp21: sort and deduplicate line numbers directly — KEPT

`all_lines` inserted every `MatchedPos` line number into a hash set and then
copied the set into a vector and sorted it. The required result is simply a
sorted unique vector, so collecting directly, sorting, and calling `dedup`
removes hashing without changing the result. Rust's unstable sort also handles
the already ordered large-fallback positions efficiently.

On five-run `perf stat` measurements, `huge_cpp` fell from 10,518,314,074 to
10,222,259,856 instructions (**-2.81%**). `slow` was flat (-0.018%, below the
binary-layout noise threshold). Peak RSS was effectively unchanged at 702 MB
versus 703 MB on `huge_cpp`.

Output is byte-identical in all three modes on all 108 measurable sample pairs,
including all modes on `huge_cpp`; Haskell remains unavailable because of the
unchanged baseline abort from exp9. `cargo test` passes (159 passed, one
ignored).

### exp22: store opposite-line mappings densely with inline values — KEPT

`opposite_positions` used a hash map from source line to a separately allocated
hash set of opposite lines. Line numbers are dense, and the overwhelmingly
common mapping has one value, so the large fallback path paid for roughly
1.2 million outer hash entries plus one heap allocation per mapped line.

`OppositePositions` now indexes a vector by source line and stores values in
`SmallVec<[LineNumber; 1]>`. Insertion retains the hash set's deduplication
semantics, and all consumers still sort multi-line mappings before choosing an
opposite, so output ordering is unchanged.

Five-run `perf stat` results:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `huge_cpp` | 10,219,934,402 | 9,285,036,692 | **-9.15%** |
| `typing` | 3,138,777,608 | 3,115,209,321 | **-0.75%** |
| `slow` | 1,882,855,301 | 1,881,540,156 | -0.07% |

Peak RSS on `huge_cpp` fell from 696 MB to 491 MB (**-29%**); `typing` stayed
flat at 230 MB. Output is byte-identical in all three modes on all 108
measurable sample pairs, including all modes on `huge_cpp`; Haskell remains
unavailable because of the unchanged baseline abort from exp9. `cargo test`
passes (160 passed, one ignored), including a focused test for deduplication
and absent line keys.

## Focused pass: `typing.ml` and `slow.rs`

At the user's request, the second investigation is restricted to
`typing_1.ml`/`typing_2.ml` and `slow_1.rs`/`slow_2.rs`. A fresh release build
at the post-exp22 commit established these five-run `perf stat` means:

| pair | instructions |
| --- | ---: |
| `typing` | 3,115,140,742 |
| `slow` | 1,881,539,982 |

The profiles are materially different. In callgrind, `slow` is dominated by
the syntax graph: `mark_syntax` self cost is 29.2%, `allocate_if_new` 24.7%,
`compute_neighbours` 18.2%, and `pop_all_parents` 8.1%. Its largest diff section
visits 1,011,157 graph vertices. `typing` has a broader mix: tree-sitter lexing,
querying, cursor traversal, graph search, syntax-position construction, and
slider correction. This makes `slow` the clean probe for graph changes, while
`typing` is the guard against shifting work into parsing or post-processing.

### exp23: regenerate neighbours instead of caching them — REJECTED

Each graph vertex stored a 16-byte lazy neighbour slice. Removing that field,
returning the inline `SmallVec` from `compute_neighbours`, and recording the
chosen edge with each predecessor shrank `Vertex` from 64 to 56 bytes and also
removed the arena copy of every neighbour list. The tradeoff was recomputing
neighbours when a vertex had more than one heap entry.

Five-run `perf stat` means rejected the tradeoff:

| pair | cached neighbours | regenerated neighbours | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,881,539,982 | 1,953,247,780 | **+3.81%** |
| `typing` | 3,115,140,742 | 3,128,177,709 | **+0.42%** |

The million-vertex `slow` section still consumed a 256 MiB bump-arena chunk,
so the smaller vertex did not reduce its reported allocation class. More
importantly, the repeated graph construction outweighed both the smaller hot
object and the eliminated neighbour-slice allocations. The code was reverted;
future graph-layout experiments should preserve the lazy cache or avoid stale
heap expansions by construction.

### exp24: omit packed keys from the graph hash table — REJECTED

The seen map stores a 16-byte packed `VertexKey` beside two vertex pointers.
`hashbrown::HashTable` can instead store only those pointers, using the first
vertex to reconstruct the key for equality and rehashing. This reduced the hot
bucket payload from 32 to 16 bytes without changing lookup semantics.

The memory saving was real: peak RSS on `slow` fell from 349,460 KiB to
311,772 KiB (**-10.8%**). Runtime moved sharply in the wrong direction:

| pair | packed key in bucket | keyless bucket | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,881,539,982 | 2,036,086,409 | **+8.21%** |
| `typing` | 3,115,140,742 | 3,144,876,634 | **+0.95%** |

Equality probes in the keyless table must chase a pointer into the much larger
vertex arena and rebuild the key. Keeping the packed key adjacent to the table
control bytes is substantially faster despite its memory cost. The change was
reverted.

### exp25: collect slider ranges without per-region vectors — KEPT

Slider correction scanned every sibling list twice per correction pass. Each
scan represented a run of novel nodes as a separately allocated `Vec<usize>`,
then retained only its first and last indexes. `typing` spends substantial time
in the two recursive slider passes, making those short-lived allocations
visible at whole-program scale.

The scanner now tracks each active run as an inline `(start, end)` pair and
pushes that pair directly. It preserves the distinctions between a run after
an unchanged node, a run invalidated by a replacement, and ignored punctuation
inside a run.

Five-run `perf stat` means:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `typing` | 3,115,140,742 | 3,074,886,508 | **-1.29%** |
| `slow` | 1,881,539,982 | 1,878,980,000 | **-0.14%** |

Output is byte-identical in side-by-side colour, inline, and JSON modes on all
107 available sample pairs; Haskell remains unavailable because of the
unchanged baseline abort from exp9. The focused `typing` and `slow` JSON checks
were also repeated with unstable JSON explicitly enabled. `cargo test` passes
(160 passed, one ignored).

### exp26: skip slider scans for fewer than three siblings — KEPT

A slider needs both an unchanged boundary and at least two novel nodes, so it
cannot exist in a sibling list shorter than three items. Despite that invariant,
each side's two correction passes scanned every such list twice looking for
regions. An early return now skips those structurally impossible scans.

Relative to exp25, five-run `perf stat` means were:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `typing` | 3,074,886,508 | 3,069,056,555 | **-0.19%** |
| `slow` | 1,878,980,000 | 1,878,402,116 | -0.03% |

The `typing` result is small but exceeds the established ±0.1% binary-layout
noise bound and removes work by construction; the `slow` movement is treated
as flat. Output is byte-identical in all three modes on all 107 available
sample pairs, and `cargo test` passes (160 passed, one ignored).

### exp27: classify highlight captures by direct index — REJECTED

`tree_highlights` kept four short vectors of capture IDs and linearly searched
them for every tree-sitter query capture. Replacing those searches with a
single byte of bucket flags indexed by capture ID looked useful for the
query-heavy `typing` input, but the existing vectors are sufficiently short
that this work is negligible.

Against exp26, five-run means moved from 3,069,056,555 to 3,068,149,116 on
`typing` (-0.03%) and from 1,878,402,116 to 1,878,299,363 on `slow` (-0.005%).
Both are inside binary-layout noise, so the change was reverted. Further
tree-sitter work should reduce query matching, parsing, or cursor traversal
rather than micro-optimizing capture classification.

### exp28: return early when neither graph side can pop — KEPT

Every graph edge calls `pop_all_parents`, but the common transition still has
a next syntax node on both sides. In that case no parent can be exhausted, yet
the general loop tested left exhaustion, right exhaustion, and joint
exhaustion before returning. A fast path now returns the unchanged state as
soon as both nodes are present; all actual popping continues through the old
loop.

Relative to exp26, five-run `perf stat` means were:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,878,402,116 | 1,869,143,154 | **-0.49%** |
| `typing` | 3,069,056,555 | 3,066,150,157 | -0.09% |

The graph-dominated `slow` improvement is clear; `typing` is treated as flat.
Output is byte-identical in all three modes on all 107 available sample pairs,
and `cargo test` passes (160 passed, one ignored).

### exp29: enter novel delimiters on both sides in one edge — REJECTED

A historical branch proposed a cost-600 edge that enters list delimiters on
both sides at once, reaching the same state and marking the same nodes as the
two cost-300 one-sided edges. It promised to shorten paths and remains a TODO
in the current source, so it was isolated from that branch and retested after
the newer seen-map improvements.

The largest `slow` section did visit fewer vertices: 1,011,157 fell to 990,008
(-2.09%). Generating and considering an additional neighbour at every pair of
list nodes cost much more than that saved:

| pair | exp28 | combined edge | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,869,143,154 | 2,005,982,593 | **+7.32%** |
| `typing` | 3,066,150,157 | 3,088,878,537 | **+0.74%** |

### exp30: add the combined edge only for different delimiters — REJECTED

The combined edge is redundant with the cheap unchanged-delimiter edge when
the two lists use the same opening and closing text. Restricting it to list
pairs whose delimiters differ reduced the candidate rate, but not enough. The
largest `slow` graph still shrank 1.63%, to 994,718 vertices, while instructions
rose to 1,997,067,064 (**+6.84%**). `typing` rose to 3,082,794,712 (**+0.54%**).

Both variants were reverted. On the current implementation, reducing the
number of popped vertices is not sufficient if it requires constructing an
extra candidate across a large part of the graph.

### exp31: dispatch parent pops from one stack-head lookup — KEPT

After exp28's common-case return, the general parent-pop loop still called up
to three helpers in sequence. Each helper independently loaded and matched the
same persistent-stack head to determine whether the LHS, RHS, or both sides
could pop. The loop now matches that head once and performs the applicable
state transition directly, retaining the original LHS-first ordering for
`PopEither` states.

Relative to exp28, five-run `perf stat` means were:

| pair | before | after | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,869,143,154 | 1,861,541,470 | **-0.41%** |
| `typing` | 3,066,150,157 | 3,065,196,701 | -0.03% |

`typing` is flat within layout noise. Output is byte-identical in all three
modes on all 107 available sample pairs, and `cargo test` passes (160 passed,
one ignored).

### exp32: replace nested-slider vectors with a bounded accumulator — REJECTED

Nested slider searches only distinguish zero, one, and multiple unchanged
descendants, but collected every match in a `Vec<&Syntax>`. A fixed two-state
accumulator removed those allocations and stopped traversal as soon as a
second candidate made sliding impossible.

A fresh exp31 control measured 1,861,551,104 instructions on `slow` and
3,065,110,465 on `typing`. Five-run candidate means were 1,861,549,014
(-0.0001%) and 3,065,320,316 (+0.007%), respectively. Both are unequivocally
flat. These nested-slider searches are too rare to matter on the focused
inputs, so the extra representation was reverted.

### exp33: store edge depth differences as `u8` — REJECTED

`Edge::UnchangedNode` and `EnterUnchangedDelimiter` stored a `u32` depth
difference even though edge costs cap the value at 40. Following a historical
branch, the fields were changed to saturating `u8` values and widened only
inside `Edge::cost`.

Five-run means regressed from the fresh exp31 control:

| pair | `u32` depth | `u8` depth | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,861,551,104 | 1,889,546,037 | **+1.50%** |
| `typing` | 3,065,110,465 | 3,070,731,701 | **+0.18%** |

The `(Edge, &Vertex)` neighbour representation remains pointer-aligned, so the
smaller enum does not shrink the hot neighbour entries. Saturating on edge
construction and widening during cost calculation instead add work. The change
was reverted.

### exp34: forcibly descend into oversized singleton lists — REJECTED

The historical graph-limit branch only decomposed a large changed section after
it had become a same-delimiter singleton list. This experiment isolated that
forced-descent component before restoring its similar-list pairing enabler. A
section with at least one million possible node pairs was allowed to mark the
outer delimiters unchanged and recursively split their children even when the
ordinary unchanged-node splitter had made no progress.

Five-run `perf stat` means against a fresh exp31 control were:

| pair | control | forced descent | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,861,548,883 | 1,885,292,437 | **+1.28%** |
| `typing` | 3,065,283,546 | 3,067,054,391 | +0.06% |

The `typing` movement is within layout noise. `DFT_LOG=info` confirmed that
`slow` still produced exactly the same four graph searches, including the same
1,011,157-vertex dominant section: that section has five top-level nodes per
side, so forced singleton descent cannot reach it without the pairing phase.
The component was reverted. Do not retry it alone; its only plausible role is
as the recursion enabler for similar-list pairing.

### exp35: pair similar lists before searching oversized sections — KEPT

The dominant `slow` section contains five changed Rust items per side. Rather
than sending their 1,227 by 1,369 syntax nodes into one graph, this experiment
uses the historical GumTree-like decomposition from `178d05f`: content that is
unique on its own side votes for corresponding sibling lists, competing claims
are resolved by vote count, and a longest increasing subsequence removes
crossing pairs. The forced descent from exp34 then opens each paired
same-delimiter list and lets the existing exact-subtree splitter work inside
it. The heuristic runs only when the section-size product is at least one
million.

Final five-run `perf stat` means against the fresh exp31 control were:

| pair | control | similar-list pairing | change |
| --- | ---: | ---: | ---: |
| `slow` | 1,861,546,836 | 643,763,021 | **-65.42%** |
| `typing` | 3,065,167,932 | 2,837,444,022 | **-7.43%** |

The graph log explains the large result. The old 1,011,157-vertex `slow`
search became five searches with 8,916, 39,156, 38,291, 41,364, and 63,774
vertices: 191,501 in total, **81.06% fewer**. The largest reported bump arena
fell from 256 MiB to 16 MiB. A single `/usr/bin/time -v` check also reduced
peak RSS from 347,176 KiB to 48,108 KiB (-86.1%) and wall time from 0.92 s to
0.14 s; instructions remain the acceptance metric.

Unlike the tiny-unique-anchor changes elsewhere on the historical branch,
this isolated pairing + descent variant was byte-identical to the exp31 control
in side-by-side, inline, and JSON modes on all 107 available non-Haskell,
non-`huge_cpp` sample pairs. The focused pairs were included in all modes.
Three new unit tests cover direct pairing, an inserted sibling, and removal of
crossing pairs. `cargo test` passes (163 passed, one ignored), and the changed
file passes `rustfmt --check` (the full repository still has pre-existing
formatting drift in unrelated accepted files).

This result is kept. It validates the broader strategy: reducing the dimensions
of the graph before Dijkstra has much more leverage than further work on each
million-state transition.

### exp36: initialise sibling and predecessor links in one traversal — KEPT

The fresh post-exp35 `typing` cycle profile showed three separate recursive
tree walks for closely related metadata: `set_prev_sibling` accounted for
about 1.15% of samples, `set_next_sibling` for 1.20%, and `set_prev` for 0.92%.
All three follow the same sibling/child structure. They are now a single
preorder traversal which sets the previous sibling, next sibling, and graph
predecessor links together.

Ten-run `perf stat` means against a copied exp35 control were:

| pair | exp35 control | fused traversal | change |
| --- | ---: | ---: | ---: |
| `slow` | 643,756,140 | 643,382,474 | -0.058% |
| `typing` | 2,837,256,810 | 2,832,639,324 | **-0.163%** |

`slow` is flat; the mixed-pipeline `typing` improvement is small but exceeds
the repeatedly observed instruction noise and removes two complete syntax-tree
passes by construction. Output is byte-identical in side-by-side, inline, and
JSON modes on all 107 available sample pairs. `cargo test` passes (163 passed,
one ignored), and the changed file passes `rustfmt --check`.

### exp37: initialise identity and ancestry in one traversal — KEPT

The other three independent syntax metadata walks set each node's parent,
ancestor depth, and preorder unique ID. They have the same recursive shape and
no dependency on one another, so they now run as one preorder traversal. The
ordering of IDs, parent pointers, and depths is unchanged.

Ten-run `perf stat` means against a copied exp36 control were:

| pair | exp36 control | fused traversal | change |
| --- | ---: | ---: | ---: |
| `slow` | 643,390,669 | 642,755,405 | **-0.099%** |
| `typing` | 2,832,816,064 | 2,828,276,712 | **-0.160%** |

The result is another small, consistent reduction on `typing`, and removes two
complete tree walks by construction. Output is byte-identical in side-by-side,
inline, and JSON modes on all 107 available sample pairs. `cargo test` passes
(163 passed, one ignored), and the changed file passes `rustfmt --check`.

### exp38: count content IDs while assigning them — REJECTED

The post-exp35 profile showed `find_nodes_with_unique_content` at about 1.7% of
sampled `typing` cycles. Since content IDs are already visited immediately
before uniqueness counting, the count was accumulated during ID assignment,
removing one recursive pass per side.

The first candidate also reused the LHS count map allocation for the RHS and
appeared marginally positive (`typing` -0.113%, `slow` -0.023%). To avoid
attributing two changes to one experiment, the allocation reuse was removed and
the traversal fusion was rebuilt and measured independently. Ten-run means for
the isolated change were:

| pair | exp37 control | fused counting | change |
| --- | ---: | ---: | ---: |
| `slow` | 642,746,015 | 642,643,884 | -0.016% |
| `typing` | 2,828,168,951 | 2,826,182,636 | -0.070% |

Both changes are within the roughly 0.1% cross-binary layout noise. The pass
mostly performs required hash-table counting work, so eliminating only its
tree-walk control flow has little leverage. The source was fully reverted.

### exp39: lower the similar-list decomposition gate — KEPT at 45,000

Exp35 only attempted similar-list pairing when the product of the two section
sizes reached one million. A temporary trace showed that `slow` entered through
one 1.69M top-level section, while `typing` recursively paired sections from
1.06M to 5.10M but left plausible 0.40M and 0.48M sections untouched. A
compile-time sensitivity sweep lowered this single gate:

| graph-size gate | `slow` change | `typing` change | 107-pair output oracle |
| ---: | ---: | ---: | --- |
| 250,000 | flat | -0.103% | identical |
| 100,000 | flat | -0.145% | identical |
| 50,000 | -17.62% | -0.143% | identical |
| 45,000 | **-19.33%** | **-0.144%** | identical |
| 40,000 | -19.33% | -0.144% | `slider_1.rs` changed |
| 25,000 | -31.40% | -0.140% | `load_1.js` and `slider_1.rs` changed |

The cliff is discrete: lowering the threshold enables another recursive split,
not merely a little more preprocessing. The lowest tested exact-output setting,
45,000, was retained. Its final ten-run means against a copied exp37 control
were 642,765,789 to 518,537,235 instructions on `slow` and 2,828,226,154 to
2,824,159,538 on `typing`.

On `slow`, the number of searches rises from 8 to 17, but their total visited
vertices fall from 224,960 to 144,260 (**-35.87%**) and the largest search falls
from 63,774 to 42,265 vertices (**-33.73%**). This confirms that many smaller
searches are substantially cheaper than a few medium dense ones. Output is
byte-identical in side-by-side, inline, and JSON modes on all 107 available
sample pairs. `cargo test` passes (163 passed, one ignored), and the changed
file passes `rustfmt --check`.

### exp40: require one unique-content vote for large-list pairing — REJECTED

Large sibling lists normally require two shared unique descendants before they
are paired; lists below 20 descendants already require only one. Lowering the
large-list requirement to one tested whether additional weak anchors could
decompose either focused graph further.

Ten-run means were flat: `slow` moved from 518,514,898 to 518,545,181
instructions (+0.006%), and `typing` from 2,824,043,612 to 2,824,052,878
(+0.0003%). Every performance-relevant candidate on these files therefore
already has two votes, or is handled by the small-list rule. The source was
reverted without running the wider oracle.

### exp41: filter empty endpoint spans without allocating — KEPT

After exp39, a fresh sampled-cycle profile put 5.0% of `typing` in
`change_positions_` and another 1.8% in `MatchedPos::new`. Every syntax token
called `filter_empty_ends`, which copied its span vector solely to omit a
zero-width first and/or last element. Those removals are representable as a
borrowed subslice, including the important case where an empty span in the
middle must be retained.

Ten-run `perf stat` means were:

| pair | exp39 control | borrowed subslice | change |
| --- | ---: | ---: | ---: |
| `slow` | 518,517,191 | 517,554,150 | **-0.186%** |
| `typing` | 2,824,174,045 | 2,809,006,642 | **-0.537%** |

Output is byte-identical in side-by-side, inline, and JSON modes on all 107
available sample pairs. `cargo test` passes, the changed file passes
`rustfmt --check`, and a new unit test covers trimming both ends, preserving a
middle empty span, and the singleton-empty case.

### exp42: append matched positions directly — KEPT

After exp41, `MatchedPos::new` still allocated a fresh vector for every syntax
node and `change_positions_` immediately drained it into the result. The helper
now appends unchanged and novel positions directly to the caller's vector.
Replacement comments and strings still use their existing word-diff vector, so
this experiment isolates the common per-node scratch allocation. The unchanged
case retains the original emitted-position count rule, including its behaviour
when an opposite delimiter has no spans.

Ten-run `perf stat` means were:

| pair | exp41 control | direct append | change |
| --- | ---: | ---: | ---: |
| `slow` | 517,558,958 | 516,244,380 | **-0.254%** |
| `typing` | 2,808,912,768 | 2,787,966,830 | **-0.746%** |

Output is byte-identical in side-by-side, inline, and JSON modes on all 107
available sample pairs. `cargo test` passes (164 passed, one ignored), and the
changed file passes `rustfmt --check`.

### exp43: reserve matched-position capacity from syntax size — REJECTED

The result vector after exp42 still grows geometrically. The existing
`num_descendants` field gives an O(number-of-roots) lower bound of one output
position per syntax node, so the candidate reserved that capacity before the
walk without adding a counting traversal.

Ten-run means were flat: `slow` moved from 516,228,011 to 516,397,899
instructions (+0.033%), while `typing` moved from 2,787,899,956 to
2,787,345,767 (-0.020%). Geometric growth is not a relevant cost after the
per-node allocations removed in exp41-42, and the source was reverted.

## Where this leaves things

| workload | earlier reference | now | change |
| --- | ---: | ---: | ---: |
| original 27-pair suite, master through exp8 | 28,867,072,824 | 16,586,352,574 | **-42.5%** |
| trivial Rust diff, master through query work | 444,668,795 | ~206,000,000 | **-54%** |
| `huge_cpp`, before exp17 through exp22 | 14,858,905,910 | 9,285,036,692 | **-37.5%** |
| `huge_cpp` peak RSS, exp21 through exp22 | 696 MB | 491 MB | **-29%** |
| focused `typing`, exp22 through exp42 | 3,115,140,742 | 2,787,966,830 | **-10.50%** |
| focused `slow`, exp22 through exp42 | 1,881,539,982 | 516,244,380 | **-72.56%** |

The large-input pass found a different class of wins from the original suite:
quadratic display loops (exp13-17), redundant offset-to-line searches (exp19),
and general-purpose hashed representations for dense line data (exp20-22).
The post-exp22 `huge_cpp` profile is now led by line splitting, Imara histogram
diff construction, allocator traffic, and changed-region line conversion; the
previous hunk-end and opposite-line hash hotspots are gone.

The focused exp23-42 pass first found small, composable wins in slider range
collection and parent-stack dispatch, then a much larger win by decomposing
oversized graphs at similar sibling lists. It also ruled out three tempting
graph directions on the exact target inputs: regenerating cached neighbours,
moving packed keys out of hash buckets, and adding a combined novel-delimiter
edge. The latter reduced the vertex count but still increased executed
instructions, so vertex count alone is not a sufficient proxy for this graph.

Rejected experiments continue to constrain the search: generic-looking
simplifications are not necessarily cheaper (`split_inclusive`, exp18), and
Unicode display width has contextual semantics that a scalar character loop
does not preserve (exp12). Measure the exact workload and keep output
equivalence as the gate.
