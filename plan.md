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
3. **`cargo build --release`** (~17s incremental) and **`cargo test --release`**.
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

## State as of this handoff

Baseline is master at `dc2283500`: **28,867,072,824** instructions over the
suite. After the kept changes: **16,586,352,574**, i.e. **-42.5%**.

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

The last completed experiment is committed. `results/` holds a labelled `.tsv`
per experiment, so a new callgrind suite run should normally be compared
against `exp8-key-seen-map-by-key`. If the compiler, dependencies, profiler, or
machine changed, record a fresh control build before comparing binaries.

## Where to look next

Ordered by how much is left on the table. The suite is now dominated by
`typing` (3.12G), `slow` (2.17G), `modules` (2.13G), `long_line` (1.74G) and
`objc_module` (1.52G).

1. **The remaining tree-sitter query analysis.** After exp1 and exp3 a trivial
   Rust diff is 206M instructions, still ~80% `ts_query__perform_analysis`. The
   ablation in the log shows it's four `scoped_identifier`/`scoped_type_identifier`
   patterns costing ~132M between them, and they genuinely affect output, so
   they can't just be dropped. Ideas not yet tried: whether `@type` captures
   are needed at all when `--color=never` (they only affect display colour,
   unlike `@comment`/`@string` which change the diff itself); whether a newer
   tree-sitter analyses faster.
2. **`split_string_by_width` and the display path** — still 10% of
   `long_line` after exp4.
3. **Graph search after exp9.** `mark_syntax`, `allocate_if_new`, and
   `compute_neighbours` remain the leading costs on `slow`; exp10 showed that
   merely decomposing candidate construction makes the hot path worse, so the
   next attempt needs to remove larger-grained work or improve the algorithm.
4. **Large-file line conversion and allocation behaviour.** After exp17, the
   22 MB `huge_cpp` profile is led by hash-table insertion and
   `LinePositions::from_offset`; determine which maps and line-parser regions
   can use monotonic cursors, dense storage, or better capacity planning. Also
   measure peak memory so instruction-only wins do not hide excessive retained
   indexes or temporary structures.
5. **Ideas that change output** — better pre-diff splitting, skipping unique
   atoms — are listed in `PRIOR_WORK.md`. They can't go through this loop as
   set up, because `check_output.sh` would reject them by construction. They
   need Wilfred judging diff quality.

## Constraints

- `AI_POLICY.md` applies: disclose AI use in commit messages or the pull request
  description, and don't write GitHub issue or PR comments with an LLM.
- `AGENTS.md`: don't touch `CHANGELOG.md` unless asked.
- MSRV is 1.85; `rust-toolchain.toml` pins it, so anything newer won't compile.
- Commit one experiment per commit, and stage explicitly (`git add <paths>`).
  `git add -A` repeatedly swept an in-flight experiment into the previous
  experiment's commit.
