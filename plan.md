# Plan: autoresearch on difftastic performance

How to resume this work in a fresh session. The running record of what has been
tried is `PERF_RESEARCH_LOG.md`; background on what was tried before this
started is `PRIOR_WORK.md`.

## Goal and success criterion

Reduce difftastic's execution time, using instructions executed as the primary
machine-independent metric. A successful change executes fewer instructions on
representative inputs without changing difftastic's output on any input.

The process is modelled on
[karpathy/autoresearch](https://github.com/karpathy/autoresearch): propose one
change, measure it against a fixed metric, keep it if it wins, revert it if it
doesn't, and write down the outcome either way. Rejections matter because they
stop later sessions from repeating work.

Branch: `claude/auto-research-karpathy-diuc1c`. Everything is committed and
pushed there; nothing has been merged to master and no PR has been opened.

### Active benchmarks, broad strategy

The current user request is a **second, focused investigation only of**:

- `sample_files/typing_1.ml` versus `sample_files/typing_2.ml`;
- `sample_files/slow_1.rs` versus `sample_files/slow_2.rs`.

Use these two pairs as the primary measurement targets, but do not restrict the
*kind* of solution to local optimisations in their current hot functions. In
particular, preprocessing, decomposition, alternative exact search algorithms,
edge-cost tuning, and deliberately quality-changing heuristics are all in scope
for investigation. The focused pairs keep iteration fast and comparable;
broader sample and real-world corpora protect against overfitting.

Do not spend experiment time optimising `huge_cpp`, `long_line`, other suite
leaders, or general startup microbenchmarks unless a proposed change is first
motivated by one of these two focused pairs. Still run the wider output oracle
before keeping an exact-output change. Measure both focused pairs for every
experiment: `slow` is currently the clean graph-search probe, while `typing`
catches parser, syntax-construction, slider, graph, and display costs.

There are now two legitimate research lanes, and their results must not be
mixed:

- **Exact-output lane:** byte-identical output remains a hard gate. This is the
  default lane for implementation and search-engine optimisations.
- **Diff-quality lane:** preprocessing rules, new graph edges, or cost changes
  may deliberately select a different diff. Measure performance, but keep the
  result experimental until the changed-output gallery has been reviewed by a
  human. Never update the output baseline merely to make this lane pass.

## High-level approach

Treat performance research as a search over both implementation details and the
amount of work the program chooses to do. Keep exploring while useful ideas and
research time remain; do not stop after the first win.

1. **Understand previous work.** Read `PRIOR_WORK.md` and
   `PERF_RESEARCH_LOG.md`, then inspect relevant papers, the repository wiki,
   open and closed issues, commit history, and unmerged branches. Search before
   implementing so an old result is reused rather than rediscovered.
2. **Profile representative workloads.** Include small diffs, ordinary source
   files, and large or pathological inputs. Attribute cost to phases (startup,
   query compilation, parsing, syntax conversion, matching/search, and display)
   and choose targets from evidence.
3. **Explore at several scales.** Maintain a backlog spanning:
   - micro-optimisations: remove repeated work, allocations, copies, hashing,
     bounds checks, formatting, and expensive generic operations in hot loops;
   - representation changes: pack hot keys, shrink graph nodes and maps, improve
     locality, pre-size collections, and avoid constructing values that are
     discarded;
   - macro-optimisations: cache or batch setup, skip provably irrelevant work,
     split large problems into independent sections, and avoid computing output
     modes or highlights that were not requested;
   - algorithmic changes: improve asymptotic behaviour in matching, graph
     search, text diffing, line lookup, and display while preserving exactly the
     same chosen diff;
   - dependency and parser improvements: test newer or alternative algorithms
     and libraries when they preserve semantics and the MSRV.
4. **Run one controlled experiment at a time.** Keep the benchmark inputs,
   flags, toolchain, and measurement method fixed across the comparison. Use
   focused probes before spending time on the full suite.
5. **Validate, record, and continue.** Output equivalence is a hard gate. Log
   the hypothesis, profile evidence, implementation, measurements, correctness
   checks, and verdict for every experiment. Commit kept experiments
   independently; fully revert rejected code but retain its log entry.

Large inputs deserve deliberate coverage because they expose both asymptotic
costs and memory/locality problems that small diffs hide. Use the checked-in
large pairs and, when a suspected complexity issue needs it, add a reproducible
synthetic scaling experiment across several input sizes. A win on one
pathological input is useful evidence, but the fixed suite decides whether it
is a general regression.

## Read `PRIOR_WORK.md` first

Seriously: exp1, the biggest win in the log (-38%), duplicated work already
sitting unmerged on a branch from July. There are 77 unmerged branches and
several carry their own callgrind tables. `PRIOR_WORK.md` inventories them,
records the one-line outcome of each relevant past session, and notes which
questions are already settled (FxHasher is optimal; `UnchangedDelimiter` can't
be removed).

It also points at `claude/codspeed-ci-setup-ahqufj`, which adds `benches/diff.rs`
and a CodSpeed workflow that measures instructions executed per PR, splitting
parse from diff. Consider cherry-picking or adapting that harness when
phase-level benchmarks or long-term CI regression tracking would improve the
current experiment. If relevant history or remote branches are absent from the
clone, fetch those refs before beginning implementation.

## The loop

One experiment at a time, in this order:

1. **Profile** to pick a target — don't guess. Use `perf record`/`perf report`
   when available; use callgrind when deterministic attribution is more useful.
2. **Change one thing.**
3. **`cargo build --release`** (~11s incremental in this environment). Run
   focused tests before measuring and the full `cargo test` before accepting.
4. **Probe** the pair expected to move with the fastest reliable counter
   available. Prefer repeated `perf stat -e instructions:u` runs for iteration;
   `./perf-research/ir.sh A B` is slower but deterministic. If the target pair
   does not move, stop here rather than spending a suite run on it.
5. **Validate and measure** (concurrently only when memory and CPU capacity make
   that safe):
   - `./perf-research/check_output.sh` — ~3 min
   - `./perf-research/measure.sh <label>` — ~6 min
6. **Compare**: `./perf-research/compare.sh <previous-label> <label>`.
7. **Keep or revert**, then write the log entry and commit.

## The harness

| file | what it does |
| --- | --- |
| `perf-research/measure.sh LABEL` | Ir per pair over `pairs.txt` → `results/LABEL.tsv` |
| `perf-research/compare.sh A B` | delta table between two runs |
| `perf-research/ir.sh LHS RHS` | Ir for a single pair, for quick probes |
| `perf-research/check_output.sh` | the correctness gate |
| `perf-research/pairs.txt` | the 27 benchmark pairs |
| `examples/query_cost.rs` | times `ts::Query::new` on a language, optionally with a query read from a file — how the highlight-query experiments were bisected |

### Exact focused measurement recipe

Build and establish a control only from a clean, accepted commit. The control
must be copied before editing because each release build overwrites
`target/release/difft`:

```bash
cargo build --release
cp target/release/difft /tmp/difft-focused-control
```

For each candidate, rebuild and take five instruction counts for both pairs:

```bash
for pair in slow typing; do
  for run in 1 2 3 4 5; do
    perf stat -x, -e instructions:u -- \
      target/release/difft --color never \
      sample_files/${pair}_1.* sample_files/${pair}_2.* >/dev/null
  done
done
```

Capture stderr separately and average only rows whose third comma-separated
field is `instructions:u`. Do not append a second experiment to an old `/tmp`
CSV and accidentally average ten runs. Label temporary files with the
experiment number. Five-run instruction counts have been extremely stable;
the important uncertainty is the roughly ±0.1% layout effect between distinct
binaries.

For a kept experiment, compare the accepted control and candidate on the
focused pair in all modes:

```bash
# side-by-side
difft --color always LHS RHS
# inline
difft --display inline --color never LHS RHS
# JSON (must set this for real JSON rather than comparing two error messages)
DFT_UNSTABLE=yes difft --display json LHS RHS
```

Then run the repository-wide output checker/control comparison and `cargo
test`. `/tmp/check_control_variant_pairs.sh` was used during exp25-31 to compare
the clean control and candidate in all three modes over 107 non-Haskell,
non-`huge_cpp` sample pairs, but `/tmp` is ephemeral: inspect or recreate it in
a new environment rather than assuming it exists. The Haskell pair currently
aborts in the unchanged tree-sitter-haskell baseline (`corrupted size vs.
prev_size`); this is not caused by the performance branch. The `huge_cpp` pair
uses the line fallback and is outside the active scope.

### Choosing measurement and profiling tools

Use whichever available tool makes the current part of the loop efficient:

- `perf stat -e instructions:u -- target/release/difft ...` is the primary,
  fast iteration metric requested by the original research prompt. Repeat runs
  and report the distribution or median because hardware counters have noise.
- `perf record --call-graph dwarf -- target/release/difft ...` followed by
  `perf report` or `perf annotate` is the first choice for sampling large,
  realistic inputs at close to normal speed.
- callgrind is valuable for deterministic before/after counts and exact call
  attribution when its roughly 40x slowdown is acceptable:
  `valgrind --tool=callgrind --callgrind-out-file=/tmp/cg.out target/release/difft A B`,
  then `callgrind_annotate --threshold=70 /tmp/cg.out`. Add `--tree=caller` to
  find who calls a hot function.
- wall time, peak memory, allocation counts, and cache behaviour are useful
  secondary diagnostics, especially on large inputs, but do not replace the
  fixed instruction-count acceptance metric.

Callgrind's `Ir` is the same instruction quantity requested from `perf stat`,
but counted by emulation rather than sampled from the PMU. Repeated callgrind
runs of the same binary on the same input agree to the instruction; `perf` is
much faster but requires repeated measurements to quantify noise.

**Comparing different binaries carries about ±0.1% of layout noise.** Anything
below that is not a result. This was established in exp5, where pairs that
provably never reach the changed code still moved by +0.06% to +0.09%.

### The correctness oracle

`check_output.sh` runs every `sample_files/*_1.*`/`*_2.*` pair in three display
modes (side-by-side with colour, inline without, and JSON) and compares md5s
against `perf-research/results/output-baseline.txt`, which was recorded from
master at `dc2283500`.

Do **not** use the checked-in `sample_files/compare.expected` — it is stale on
master (see `PRIOR_WORK.md`).

If you deliberately change output, re-record with `check_output.sh --record`
and say so loudly in the log. Nothing so far has needed to.

## Focused baselines, profiles, and artifacts

The focused control is the accepted post-exp22 build, copied to
`/tmp/difft-focused-control` during the 2026-09-04 session. Recreate it from the
post-exp22 commit `4d91b24` only if an exact original control is needed; for a
new incremental experiment, use the latest accepted branch tip as the control.

Fresh five-run `perf stat` means at the start of the focused pass:

| pair | post-exp22 instructions | latest accepted after exp42 | cumulative change |
| --- | ---: | ---: | ---: |
| `typing` | 3,115,140,742 | 2,787,966,830 | **-10.50%** |
| `slow` | 1,881,539,982 | 516,244,380 | **-72.56%** |

The original focused callgrind files were `/tmp/cg-focused-typing.out` and
`/tmp/cg-focused-slow.out`; sampled cycle profiles were
`/tmp/difft-focused-typing.data` and `/tmp/difft-focused-slow.data`. These are
diagnostic artifacts, not checked-in inputs, and may disappear after a restart.
Their attribution describes the post-exp22 baseline, before exp25-31:

- `slow`: 1,881,261,402 callgrind instructions. `mark_syntax` self cost 29.2%,
  `allocate_if_new` 24.7%, `compute_neighbours` 18.2%, and `pop_all_parents`
  8.1%. Its four changed sections visit 116, 6,156, 27,187, and **1,011,157**
  vertices; the last section dominates and consumed a 256 MiB bump-arena
  allocation class. This pair is overwhelmingly a graph/shortest-path problem.
- `typing`: 3,121,830,730 callgrind instructions. Major self costs included
  tree-sitter lexing (13.4%), cursor/query analysis and traversal, parser work,
  `mark_syntax` (3.4%), `allocate_if_new` (3.1%), and `compute_neighbours`
  (2.2%). The sampled profile also put 5.1% of cycles in
  `fix_all_sliders_one_step` and visible cost in `syntax::change_positions_`.
  It is a mixed pipeline workload rather than a single-hotspot graph case.

Exp35 changed the profile enough that those graph percentages are no longer a
current guide. Fresh sampled-cycle profiles are `/tmp/difft-exp35-slow.data`
and `/tmp/difft-exp35-typing.data`:

- `slow`: the former million-state section is gone. Remaining leading samples
  are graph allocation (22.8%), neighbour generation (16.6%), tree-sitter
  query analysis (9.6%), radix-heap work (7.1%), persistent-stack equality
  (6.2%), and parent popping (4.6%). The replacement sections visit 191,501
  vertices in total rather than 1,011,157.
- `typing`: tree-sitter lexing (7.9%), cursor traversal, position adjustment
  (5.2%), and slider fixing (4.5%) now lead. Graph routines are individually
  near 1%. Several independent syntax metadata walks each account for roughly
  1--1.7%, making traversal fusion a measured, exact-output opportunity.

Exp39's lower pairing gate changed `slow` again. The accepted-tip sampled
profiles are `/tmp/difft-exp40accepted-slow.data` and
`/tmp/difft-exp40accepted-typing.data`. On `slow`, allocation (15.5%) and
neighbour generation (15.2%) still lead graph work, but tree-sitter query
analysis plus compilation is now about 18.6% and the radix heap is 4.4%. On
`typing`, lexing remains largest (10.5%); `change_positions_` is 5.0%, slider
fixing 4.3%, and `MatchedPos::new` 1.8%. These figures predate exp41.

Useful diagnostics:

```bash
DFT_LOG=info target/release/difft --color never \
  sample_files/slow_1.rs sample_files/slow_2.rs >/dev/null

valgrind --tool=callgrind --callgrind-out-file=/tmp/cg-focused.out \
  target/release/difft --color never LHS RHS
callgrind_annotate --inclusive=no /tmp/cg-focused.out

perf record -o /tmp/difft-focused.data --call-graph dwarf -- \
  target/release/difft --color never LHS RHS
perf report -i /tmp/difft-focused.data --stdio
```

Release binaries use LTO and some reports lose or merge Rust symbols. Preserve
the exact profiled binary or its build ID before rebuilding; otherwise `perf
report` may show addresses because `target/release/difft` no longer matches the
recording.

## State on the current branch

Baseline is master at `dc2283500`: **28,867,072,824** instructions over the
original 27-pair callgrind suite. Through exp8, the last directly comparable
full-suite run was **16,586,352,574**, i.e. **-42.5%**. The current environment
has a pre-existing heap abort in tree-sitter-haskell on the Haskell sample, so
later fixed-suite comparisons use the other 26 pairs and fresh controls rather
than mixing counts across environments.

| exp | change | suite | verdict |
| --- | --- | --- | --- |
| 1 | drop highlight-query patterns whose captures difftastic ignores | -38.2% | kept |
| 2 | merge simple patterns sharing a capture name | ~0 | rejected |
| 3 | drop patterns already covered by a whole-node pattern | -1.4% | kept |
| 4 | ASCII fast path for display width | -0.9% | kept |
| 5 | stop splitting words past the word-diff limit | -2.4% | kept |
| 6 | skip stale entries when popping the Dijkstra heap | +0.2% | rejected |
| 7 | pack the vertex identity into two words | -0.7% | kept |
| 8 | key the `seen` map by that packed key | -1.9% | kept |
| 9 | replace each `seen` value's `SmallVec` with two exact slots | -1.18% on current 26-pair suite | kept |
| 10 | compute a vertex key before constructing the candidate | +0.38% on search probes | rejected |
| 11 | build syntax spans directly from tree-sitter points | -1.44% on current 26-pair suite | kept |
| 12 | mixed-Unicode display-width fast paths | +0.68% or incorrect output | rejected |
| 13 | insert visible line ranges once per hunk | -96.6% on a 12k-line full rewrite | kept |
| 14 | group JSON changes by line before rendering | -82.6% on a 12k-line full rewrite | kept |
| 15 | calculate inline line bounds once per file | -90.2% on a 20k-line/2k-hunk diff | kept |
| 16 | use a queue when compacting long one-sided runs | -44.5% on a 20k-line full rewrite | kept |
| 17 | index final aligned-line occurrences for hunk display | -22.0% on the 22 MB C++ pair | kept |
| 18 | replace regex newline scanning with `split_inclusive` | +0.32% to +0.86% | rejected |
| 19 | construct unchanged fallback spans from line order | -7.36% on the 22 MB C++ pair | kept |
| 20 | reserve line-map capacity from `MatchedPos` count | -2.08% on the 22 MB C++ pair | kept |
| 21 | collect, sort, and deduplicate line numbers directly | -2.81% on the 22 MB C++ pair | kept |
| 22 | store opposite-line mappings densely with inline values | -9.15% instructions, -29% RSS on the 22 MB C++ pair | kept |
| 23 | regenerate graph neighbours instead of caching them | +3.81% `slow`, +0.42% `typing` | rejected |
| 24 | omit packed keys from the graph hash table | +8.21% `slow`, +0.95% `typing`; RSS -10.8% | rejected |
| 25 | collect slider ranges without per-region vectors | -1.29% `typing`, -0.14% `slow` | kept |
| 26 | skip slider scans for fewer than three siblings | -0.19% `typing`, flat on `slow` | kept |
| 27 | classify highlight captures by direct index | -0.03% `typing`, flat on `slow` | rejected |
| 28 | return early when neither graph side can pop | -0.49% `slow`, flat on `typing` | kept |
| 29 | enter novel delimiters on both sides in one edge | +7.32% `slow`, +0.74% `typing` | rejected |
| 30 | add the combined edge only for different delimiters | +6.84% `slow`, +0.54% `typing` | rejected |
| 31 | dispatch parent pops from one stack-head lookup | -0.41% `slow`, flat on `typing` | kept |
| 32 | replace nested-slider vectors with a bounded accumulator | flat on both focused pairs | rejected |
| 33 | store edge depth differences as `u8` | +1.50% `slow`, +0.18% `typing` | rejected |
| 34 | force descent into oversized same-delimiter singleton lists | +1.28% `slow`, +0.06% `typing`; no graph reduction | rejected |
| 35 | pair similar lists before oversized-section search, then force descent | -65.42% `slow`, -7.43% `typing`; -86.1% `slow` RSS | kept |
| 36 | initialise sibling and predecessor links in one syntax traversal | -0.16% `typing`, flat on `slow` | kept |
| 37 | initialise parent, ancestor depth, and preorder ID in one traversal | -0.16% `typing`, -0.10% `slow` | kept |
| 38 | count content IDs during content-ID assignment | -0.07% `typing`, flat on `slow` | rejected |
| 39 | lower similar-list graph-size gate from 1,000,000 to 45,000 | -19.33% `slow`, -0.14% `typing` | kept |
| 40 | lower large-list pairing requirement from two unique votes to one | flat on both focused pairs | rejected |
| 41 | filter empty endpoint spans as a borrowed subslice | -0.54% `typing`, -0.19% `slow` | kept |
| 42 | append ordinary matched positions directly to the result | -0.75% `typing`, -0.25% `slow` | kept |
| 43 | reserve matched-position capacity from syntax-node count | flat on both focused pairs | rejected |

Every completed experiment is committed and pushed. `results/` holds labelled
callgrind tables through `exp13-linear-visible-width`; experiments that only
affect inline, JSON, or synthetic/very-large shapes use repeated targeted
`perf stat` measurements instead. Exp17 through exp22 reduced the 22 MB
`huge_cpp` pair from 14.86B to 9.29B instructions (**-37.5%**), and exp22 also
reduced its peak RSS from 696 MB to 491 MB. If the compiler, dependencies,
profiler, or machine changed, record a fresh control binary before comparing.
The focused exp23-42 pass reduced `typing` from 3.115B to 2.788B (**-10.50%**)
and `slow` from 1.882B to 0.516B (**-72.56%**). Exp35's similar-list pairing and
exp39's lower decomposition gate are responsible for most of that improvement.

## Research synthesis: where larger wins can come from

The current algorithm constructs an implicit directed acyclic graph. A vertex
is a pair of positions in the syntax trees plus enough parent-stack state to
represent independent changes in nesting. Each edge consumes syntax on at
least one side. Dijkstra stops when it settles the end vertex rather than
materialising the whole graph.

For a large changed section, runtime is roughly driven by four factors:

1. the dimensions of the section sent to graph search;
2. the fraction of its reachable states settled before the goal;
3. the number of candidate edges constructed per settled state; and
4. the cost of allocation, hashing, stack handling, and queue work per state.

The `slow` profile is dominated by a single section with 1,011,157 vertices,
so reducing the *problem* or the number of settled states has much more upside
than saving a few instructions on one transition. The `typing` profile still
justifies parser and syntax-pipeline work, but it also benefits from splitting
large graph sections. The next pass should therefore pursue a portfolio rather
than repeatedly polishing `compute_neighbours`.

### What the related designs teach us

#### Autochrome

[Autochrome's design write-up](https://fazzone.github.io/autochrome.html) is
the closest ancestor of difftastic's graph. It uses paired cursors and parent
stacks; identical subtrees advance together, novel subtrees advance one side,
and delimiters can be entered either together or independently so that nesting
changes remain matchable. It explicitly gives independent entry a higher cost
because those transitions cause many extra states.

Autochrome originally used A*, which explored fewer states, but changed to
Dijkstra to solve a *multi-origin top-level form alignment* problem. It limits
that quadratic alignment work by hashing identical forms first, removing an
already-selected target from later searches, and including deletion of the
whole source form as an immediate upper bound. Its reported worst case is a
large form split into several edited forms.

Implications for difftastic:

- independent nesting moves are a structural source of state growth, not just
  an implementation accident;
- matching or pairing sections before graph search is the most direct lever;
- a cheap complete route (the analogue of deleting the whole form) can provide
  a sound upper bound for branch-and-bound pruning;
- Autochrome's reason for abandoning A* does not by itself rule A* out here,
  because difftastic normally searches one start/end section at a time, but a
  strong cheap admissible heuristic is still the central difficulty.

#### Tristan Hume's dynamic program and A* search

[Tristan Hume's write-up](https://thume.ca/2017/06/17/tree-diffing/) starts
with memoised dynamic programming over a sequence-alignment-like grid. Its
objective is the size of the resulting configuration, including the overhead
of grouping edits, rather than a conventional unit-cost tree edit script. Two
engineering ideas transfer directly: calculate only scalar costs during the
search, and reconstruct expensive result objects lazily only for the winning
route.

The later A* implementation used a lower bound derived from the cost of the
remaining suffixes. Hume reports that the explored band grows with edit
distance rather than the full input product, and notes that Dijkstra is already
competitive when matches are free, but expands a blob when matches themselves
have cost. Difftastic gives even exact matches a positive cost (1--40 for an
ordinary node and 100--140 for matched delimiters), so this observation is
relevant. However, difftastic's very cheap whole-subtree transitions make a
simple geometric or remaining-node-count heuristic inadmissible.

Implications for difftastic:

- continue avoiding change-map or display construction during search;
- test admissible bounds based on *mandatory* unmatched content, not distance
  through the syntax trees;
- record heuristic construction/evaluation cost separately from states saved;
- prefer precomputed suffix/subtree summaries and O(1) estimates per vertex;
- use pathmax or a queue that tolerates non-monotone keys if a useful bound is
  admissible but inconsistent.

#### GumTree and pre-search matching

The [original GumTree paper](https://hal.science/hal-01054552/document)
describes a deliberately non-optimal hybrid:

1. a top-down pass processes large subtrees first using height-indexed queues;
2. identical subtrees are recognised by hashes, while ambiguous identical
   matches are ranked by Dice similarity of their parents;
3. a bottom-up pass considers unmatched containers in postorder and scores
   them by the proportion of already-matched descendants; and
4. an exact matcher is used only to recover mappings inside bounded small
   subtrees.

The paper's recommended controls (`minHeight = 2`, `minDice = 0.5`, and
`maxSize = 100`) make the scalability strategy explicit: greedy global anchors,
similarity-guided container pairing, and exact work only below a size limit.
The later [hyperparameter optimisation study](https://arxiv.org/abs/2011.10268)
also shows that these thresholds materially affect results: tuned settings
improved edit-script length in 21.8% of evaluated cases. This supports treating
difftastic's costs and split thresholds as empirical parameters, while also
warning that tuning only on two files will overfit.

There is already stronger repository-specific evidence. The historical
`origin/claude/difftastic-graph-limit-r5irm0` branch contains a study of about
22,500 real file diffs and a GumTree-like `similar-list pairing` prototype. It
lets shared unique descendants vote for sibling-list pairs, keeps a
non-crossing increasing subsequence of pairs, and forcibly descends into
oversized paired lists. In its old build, this changed:

- `slow_1.rs`: about 1.3 s to 0.2 s;
- `typing_1.ml`: about 0.83 s to 0.56 s;
- all 35 captured graph-limit failures to structural output rather than
  wholesale fallback.

The focused pair outputs were unchanged, but two other sample diffs changed
and appeared better to the researcher. This is the strongest current lead and
belongs in the diff-quality lane until revalidated. Do not cherry-pick the
branch wholesale: inspect forced descent at `036892a`, similar-list pairing at
`178d05f`, and the later fixes at `a9daf30`/`30e3e02`, then reimplement or
isolate the minimum pieces on the latest accepted base. Measure each component
with today's instruction harness.

#### Other exact and approximate solvers

| approach | potential value here | main obstacle / proposed treatment |
| --- | --- | --- |
| GumTree-style anchors and descendant voting | Very high: shrinks an `L x R` section before the expensive search, with strong historical results on both focused pairs | Can constrain the global optimum and alter output. Re-isolate first, then use a changed-output gallery and real corpus. |
| [A*](https://doi.org/10.1109/TSSC.1968.300136) | Can settle fewer states while preserving minimum cost with an admissible bound | Five historical branches did not merge. Reuse the latest unmatched-content heuristic as a baseline; only continue if a stronger O(1) bound saves more than it costs. |
| Branch and bound from a fast complete route | Can avoid allocating or queuing states that cannot beat a known route, and composes with A* | A scalar all-novel bound may be too loose. Build a legal route, prune only strictly worse states, and prove tie handling before claiming byte identity. |
| [Bounded-integer bucket/Dial queue](https://people.mpi-inf.mpg.de/~mehlhorn/ftp/Mehlhorn-Sanders-Toolbox.pdf) | Current edge weights are small positive integers (1--600), so a circular bucket queue may have lower constants than the current radix heap | The radix heap is already a monotone integer queue. Prototype behind one queue abstraction and compare pushes/pops plus instructions; reject unless clearly better. |
| [Topological DAG dynamic programming](https://xlinux.nist.gov/dads/HTML/dagShortPath.html) | A DAG shortest path can be solved in linear `O(V + E)` time without a priority queue | It generally explores the whole reachable graph, whereas Dijkstra stops at the goal. First prove a cheap rank from syntax progress and measure total reachable states on reduced sections; likely useful only in small/dense regions. |
| Bidirectional Dijkstra/A* | Could meet before either frontier spans the search blob | Historical reverse-edge enumeration had to undo canonical parent pops and validate candidates with the forward generator. Treat as low priority unless a compact exact predecessor representation is found. |
| [Delta-stepping / parallel frontier search](https://doi.org/10.1016/S0196-6774(03)00076-2) | May exploit multiple cores and buckets for large graphs | Repeated relaxations, synchronisation, arena allocation, and a mostly sequential implicit graph threaten instruction count. Wall-time-only gains do not meet the primary metric; keep low priority. |
| RTED/APTED or Zhang--Shasha-style tree edit DP | Dynamic tree-shape-dependent decomposition and bounded exact subproblems could replace graph search inside suitable regions | These solve a different edit model and do not naturally cover difftastic's cross-depth matching and display objective. Consider only as a bounded local matcher or lower bound, never a drop-in replacement. See the [RTED paper](https://vldb.org/pvldb/vol5/p334_mateuszpawlik_vldb2012.pdf). |
| Patience/unique anchors | Cheap, reliable split points; already successful in the graph-limit study | Unique tiny anchors can still change alignment. Retain the historical two-pass rule where large exact matches claim alignment first. |
| Histogram/rare anchors | More anchors than strict uniqueness | Historical `occurs <= 4` work fixed no additional corpus cases and regressed sample output. Do not repeat unchanged. |
| Beam search, IDA*, fringe search, or hard work bounds | Bounded memory/work and graceful performance cliffs | Beam/work bounds sacrifice optimality; IDA*/fringe variants already have old unmerged branches and can repeat expensive neighbour generation. Only revisit for explicit fallback behaviour, not the exact lane. |

The current `RadixHeapMap` is not a naive binary heap: [radix heaps were
designed](https://acm.math.spbu.ru/~sk1/download/books/ds/heaps/ahuja-heap.pdf)
for monotone integer shortest-path keys. A queue experiment must therefore beat
an appropriate specialised baseline, not merely improve asymptotic claims.
Conversely, the DAG property is worth exploiting only if a topological order is
obtainable without first constructing the graph and without expanding far more
states than Dijkstra.

### Edge-cost and search-order investigation

Current costs in `Edge::cost` are:

| edge | current cost | intended preference |
| --- | ---: | --- |
| unchanged ordinary node | `min(40, depth_difference + 1)` = 1--40 | favour exact content, especially at similar depth |
| unchanged punctuation | ordinary cost + 200 = 201--240 | avoid aligning punctuation instead of meaningful atoms |
| enter unchanged delimiters | `100 + min(40, depth_difference)` = 100--140 | preserve matching structure, but below novelty |
| novel atom or one-sided delimiter entry | 300 | insertion/deletion |
| replaced comment or string | `500 + (100 - levenshtein_pct)` = 500--600 | prefer a similar replacement to two novel atoms |

Costs determine both the selected diff and how Dijkstra expands the graph.
Autochrome explicitly used relative costs to postpone state-expanding
single-cursor moves, and the current code does the same. A useful tuning can
therefore improve performance even without changing the graph representation,
but a lower instruction count might merely reflect a worse objective. Uniformly
scaling every cost cannot change queue order and is not a useful experiment.

Use historical commit `5165b0c` as the starting point for an experimental cost
switchboard. It exposed `depth cap`, punctuation, delimiter entry, novelty,
novel punctuation, and replacement costs through environment variables.
Recreate that facility so variables are parsed once outside the hot loop, or
generate compile-time variants; do not leave repeated environment lookups in a
candidate being timed.

Explore these hypotheses one factor at a time before trying combinations:

- **Delimiter entry:** sweep the base near 50, 75, 100, 125, and 150. Raising
  it may suppress speculative descent; lowering it may reach cheap subtree
  matches sooner. Record edge mix because either direction can explode states.
- **Depth penalty/cap:** try caps near 10, 20, 40, and 80. A smaller cap makes
  cross-depth matches competitive sooner; a larger cap keeps the search near
  structurally similar paths. Include nesting-change fixtures in review.
- **Punctuation:** sweep the +200 penalty and separately price *novel*
  punctuation. This can make the queue prioritise identifiers and literals,
  but the existing +200 encodes a deliberate inequality around replacement
  edges, so audit `comma_and_comment_1.js` and related tests.
- **Novelty:** test modest changes around 250--350, preferably as ratios to the
  other costs. Moving novelty changes how long Dijkstra explores cheap matches
  before accepting an insertion/deletion.
- **Replacement:** vary the base and similarity contribution while retaining
  the invariant that a good comment/string replacement is cheaper than two
  novel atoms. Inspect word-diff quality, not only graph size.
- **Content-aware match value:** longer or globally unique atoms may deserve a
  stronger preference than common short tokens. This resembles GumTree's
  large/unique-first matching, but changes the objective and belongs in the
  quality lane.
- **Separate search tie-break from semantic cost:** keep distance as the
  primary key and prefer more syntax progress, matched-subtree size, smaller
  diagonal imbalance, or fewer independent parent stacks only among equal-cost
  states. This preserves the minimum numeric cost but can still select a
  different equal-cost route, so output equivalence is not automatic.

For each setting record both focused instruction counts and search shape:
vertices allocated, vertices settled, neighbours generated, heap pushes/pops,
maximum heap size, arena bytes, winning path cost/length, and edge-type counts.
Start with a sensitivity sweep, then test a small number of promising
combinations; do not grid-search every combination. Any candidate must then run
the complete sample oracle and a language-diverse corpus. If output changes,
produce paired rendered diffs and evaluate readability separately from speed.

### Prioritised next-experiment backlog

Stay focused on `typing` and `slow` for measurement, but pursue the following
in order of expected impact. Re-profile after any large accepted change; the
percentages above predate exp25-31.

1. **Characterise and tighten similar-list pairing.** Exp35 kept the pairing +
   descent combination after byte-identical output on all 107 available sample
   pairs. Exp39 swept the graph-size gate and retained 45,000: 40,000 changed
   `slider_1.rs`, while 25,000 also changed `load_1.js`. Exp40 showed that a
   one-vote rule finds no additional performance-relevant pairs. The remaining
   useful characterization is raising the two-vote requirement or changing the
   20-descendant boundary; only pursue it with evidence that pairing overhead
   or a weak match matters. Do not weaken ambiguity or non-crossing guards
   merely for speed.
2. **Add low-overhead search-shape instrumentation.** Counters should be
   compile-time- or log-gated and excluded from timed release measurements.
   Attribute which edge types create and settle the million-state `slow`
   section. This turns the edge-cost sweep and pruning work into evidence rather
   than blind parameter changes.
3. **Run the edge-cost sensitivity sweep.** Use the switchboard and governance
   above. Keep exact-output winners eligible for normal acceptance; report
   quality-changing winners separately. Validate promising settings beyond the
   focused files before drawing conclusions.
4. **Try an exact upper-bound prune.** Construct the cheap all-novel route (and,
   if useful, a greedy matched route) before Dijkstra. Avoid allocating or
   pushing candidates whose `g + admissible_lower_bound` is strictly greater
   than the bound. Preserve an actual fallback route and prove what happens at
   equal cost.
5. **Compare a circular bucket queue with the radix heap.** Current maximum edge
   cost is 600. Keep graph generation identical and make queue statistics
   visible so a result is attributable. This is a contained exact-output
   experiment and can move earlier if instrumentation shows queue work is hot.
6. **Re-evaluate A* only from the best historical lower bound.** Port the
   unmatched-content suffix heuristic from `2efe93b` onto the current compact
   graph, measure heuristic-only deltas, and inspect why it leaves states
   unpruned. Candidate extensions are multiplicity imbalance and a cheap
   abstract/flattened relaxation; abandon any bound whose O(1) evaluation cost
   is not repaid on `slow`.
7. **Continue exact per-state graph reductions.** Preserve the lazy neighbour
   cache and packed `VertexKey`. Look for repeated state extraction, parent
   stack allocation, or matching in existing edges. Exp28 and exp31 show exact
   parent-stack reductions pay; exp10 shows merely decomposing candidate
   construction does not.
8. **Target the remaining mixed-pipeline work on `typing`.** Exp27 proved
   capture-bucket lookup itself is negligible, while exp41 removed one
   allocation from `change_positions_`, and exp42 removed the per-node result
   vector; exp43 showed destination capacity growth is negligible. Inspect the
   remaining replacement-word vector only if a replacement-heavy profile
   motivates it. Also investigate query matching, syntax
   cursor traversal, duplicated tree walking, and whether no-colour mode can
   safely skip highlight-only classifications after tracing `AtomKind::Type`
   through parsing, equality, and all output modes.
9. **Use phase-specific benchmarks when attribution is unclear.** Adapt the
   unmerged `claude/codspeed-ci-setup-ahqufj` benchmark locally to separate
   parse and diff. Continue reporting whole-process instructions for acceptance.

### Settled directions not to repeat

- Do not regenerate neighbours to shrink `Vertex` (exp23: +3.81% on `slow`).
- Do not omit packed keys from seen-map buckets (exp24: +8.21% on `slow`, even
  though RSS improved 10.8%).
- Do not retry hash crates; nine were previously measured and FxHasher won.
- Do not add `EnterNovelDelimiterBoth`, even only for mismatched delimiters
  (exp29-30: +6.84% to +7.32% on `slow`). Fewer vertices did not mean fewer
  instructions.
- Do not add the stale-heap check unchanged (exp6: +0.2%).
- Do not optimize capture classification alone (exp27: -0.03%, noise).
- Do not replace nested-slider scratch vectors with a bounded accumulator;
  those searches were flat on both focused pairs (exp32).
- Do not compact edge depth fields to `u8`; pointer alignment preserves the
  neighbour-entry size and conversions regressed both pairs (exp33).
- Do not force descent into oversized singleton lists without similar-list
  pairing; it did not change either graph and regressed `slow` 1.28% (exp34).
- Do not fold uniqueness counting into content-ID assignment alone; removing
  only the traversal overhead was flat on both focused pairs (exp38).
- Do not lower the large-list similar-pair vote requirement from two to one;
  it did not change either focused workload (exp40).
- Do not reserve `change_positions` output capacity from syntax-node count;
  vector growth was flat on both focused pairs after exp41-42 (exp43).
- Do not remove `ChangeState::UnchangedDelimiter`; prior work found it is
  required and its removal panics.
- Do not reimplement the historical A*, bidirectional, IDA*, or fringe-search
  designs unchanged. Start from their recorded failure/benefit and articulate
  the new information that makes a variant different.
- Do not retry histogram-style `occurs <= 4` anchors unchanged. The graph-limit
  study found no additional corpus wins and worse sample alignment.

## Resume checklist

1. Read this file, then the exp23 onward section of `PERF_RESEARCH_LOG.md`, the
   search/splitting sections of `PRIOR_WORK.md`, and the historical report via
   `git show origin/claude/difftastic-graph-limit-r5irm0:graph_limit_investigation.md`
   before editing.
2. Confirm the branch and a clean worktree with `git status --short --branch`.
   Fetch the requested branch if the local clone is stale; do not work on
   master.
3. Build the latest accepted commit and copy a fresh control binary to `/tmp`.
4. Re-run one five-sample baseline for both focused pairs. If it differs
   materially from 3.065B (`typing`) / 1.862B (`slow`), record the new control
   rather than comparing across machines or toolchains.
5. Choose one hypothesis from the prioritised backlog, state whether it is in
   the exact-output or diff-quality lane, change one thing, measure both pairs,
   and immediately append exp44 (then exp45, etc.) to
   `PERF_RESEARCH_LOG.md` and the state table here.
6. Fully revert rejected source changes with `apply_patch`, but commit and push
   their log entries. For a kept change, run the wider output oracle and full
   tests before committing. For a quality-lane change, also preserve a gallery
   of changed outputs and do not promote it without human review.
7. Stage explicit paths, include `AI-assisted change (OpenAI Codex).` in every
   commit message, push, and verify the remote ref when finishing a tranche.

## Constraints

- `AI_POLICY.md` applies: disclose AI use in commit messages or the pull request
  description, and don't write GitHub issue or PR comments with an LLM.
- `AGENTS.md`: don't touch `CHANGELOG.md` unless asked.
- MSRV is 1.85; `rust-toolchain.toml` pins it, so anything newer won't compile.
- Commit one experiment per commit, and stage explicitly (`git add <paths>`).
  `git add -A` repeatedly swept an in-flight experiment into the previous
  experiment's commit.
