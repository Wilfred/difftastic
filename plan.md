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

### Active scope (supersedes the broad backlog)

The current user request is a **second, focused investigation only of**:

- `sample_files/typing_1.ml` versus `sample_files/typing_2.ml`;
- `sample_files/slow_1.rs` versus `sample_files/slow_2.rs`.

Do not spend experiment time on `huge_cpp`, `long_line`, other suite leaders,
or general startup microbenchmarks unless a proposed change is first motivated
by one of these two focused pairs. Still run the wider output oracle before
keeping a change, because exact output compatibility remains the correctness
gate. Measure both focused pairs for every experiment: `slow` is currently the
clean graph-search probe, while `typing` catches parser, syntax-construction,
slider, graph, and display costs.

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

| pair | post-exp22 instructions | latest accepted after exp31 | cumulative change |
| --- | ---: | ---: | ---: |
| `typing` | 3,115,140,742 | 3,065,196,701 | **-1.60%** |
| `slow` | 1,881,539,982 | 1,861,541,470 | **-1.06%** |

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

Every completed experiment is committed and pushed. `results/` holds labelled
callgrind tables through `exp13-linear-visible-width`; experiments that only
affect inline, JSON, or synthetic/very-large shapes use repeated targeted
`perf stat` measurements instead. Exp17 through exp22 reduced the 22 MB
`huge_cpp` pair from 14.86B to 9.29B instructions (**-37.5%**), and exp22 also
reduced its peak RSS from 696 MB to 491 MB. If the compiler, dependencies,
profiler, or machine changed, record a fresh control binary before comparing.
The focused exp23-31 pass then reduced `typing` from 3.115B to 3.065B
(**-1.60%**) and `slow` from 1.882B to 1.862B (**-1.06%**).

## Focused next-experiment backlog

Stay within `typing` and `slow`. Re-profile after a few more accepted changes;
the percentages above predate exp25-31.

1. **Reduce existing graph candidate overhead on `slow`.** Preserve the lazy
   neighbour cache and the packed `VertexKey` stored directly in the hash
   bucket. Look for repeated state extraction, stack allocation, or matching in
   `compute_neighbours`/`allocate_if_new` that can be removed on an existing
   edge. Exp28 and exp31 show that exact parent-stack reductions pay; exp10
   shows that merely decomposing candidate construction does not.
2. **Measure compact `Edge` metadata.** A historical search branch stores
   depth differences as `u8`; current costs cap them at 40 but the enum carries
   `u32`. First check `size_of::<Edge>()` and generated code. A smaller enum only
   matters if it reduces copying or the `(Edge, &Vertex)` neighbour/route
   representation; alignment may erase the apparent saving.
3. **Target real tree-sitter work on `typing`.** Exp27 proved capture-bucket
   lookup itself is negligible. Investigate query matching, syntax cursor
   traversal, or duplicated tree walking. Type highlights affect colour but,
   unlike comments and strings, appear not to affect content equality; a
   no-colour fast path is only valid after tracing `AtomKind::Type` through
   parsing, matching, and every output mode. Do not assume this from the name.
4. **Consider phase-specific instrumentation.** The unmerged
   `claude/codspeed-ci-setup-ahqufj` benchmark separates parse and diff. Adapt
   it locally if whole-process profiles cannot distinguish a `typing` change;
   do not broaden the benchmark inputs beyond the two focused pairs.
5. **Algorithmic splitting only with explicit output review.** Historical
   pre-diff splitting and unique-atom branches can dramatically reduce graph
   work, but they change which optimal diff is selected. The current exact
   output oracle will reject them. Record such a proposal separately and seek
   Wilfred's diff-quality judgment rather than silently weakening the gate.

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
- Do not remove `ChangeState::UnchangedDelimiter`; prior work found it is
  required and its removal panics.

## Resume checklist

1. Read this file, then the exp23 onward section of `PERF_RESEARCH_LOG.md` and
   the relevant `PRIOR_WORK.md` section before editing.
2. Confirm the branch and a clean worktree with `git status --short --branch`.
   Fetch the requested branch if the local clone is stale; do not work on
   master.
3. Build the latest accepted commit and copy a fresh control binary to `/tmp`.
4. Re-run one five-sample baseline for both focused pairs. If it differs
   materially from 3.065B (`typing`) / 1.862B (`slow`), record the new control
   rather than comparing across machines or toolchains.
5. Choose one hypothesis from the focused backlog, change one thing, measure
   both pairs, and immediately append exp32 (then exp33, etc.) to
   `PERF_RESEARCH_LOG.md` and the state table here.
6. Fully revert rejected source changes with `apply_patch`, but commit and push
   their log entries. For a kept change, run the wider output oracle and full
   tests before committing.
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
