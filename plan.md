# Plan: autoresearch on difftastic's instruction count

How to resume this work in a fresh session. The running record of what has been
tried is `PERF_RESEARCH_LOG.md`; background on what was tried before this
started is `PRIOR_WORK.md`.

## The goal

Reduce the number of instructions difftastic executes, without changing its
output on any input. Modelled on [karpathy/autoresearch](https://github.com/karpathy/autoresearch):
propose one change, measure it against a fixed metric, keep it if it wins,
revert it if it doesn't, and write down the outcome either way — including the
rejections, which are the part that stops the next session repeating the work.

Branch: `claude/auto-research-karpathy-diuc1c`. Everything is committed and
pushed there; nothing has been merged to master and no PR has been opened.

## Read `PRIOR_WORK.md` first

Seriously: exp1, the biggest win in the log (-38%), duplicated work already
sitting unmerged on a branch from July. There are 77 unmerged branches and
several carry their own callgrind tables. `PRIOR_WORK.md` inventories them,
records the one-line outcome of each relevant past session, and notes which
questions are already settled (FxHasher is optimal; `UnchangedDelimiter` can't
be removed).

It also points at `claude/codspeed-ci-setup-ahqufj`, which adds `benches/diff.rs`
and a CodSpeed workflow that measures instructions executed per PR, splitting
parse from diff. **If you're moving off Claude Code on the web, cherry-pick
that branch first** — it's a better long-term harness than `perf-research/`,
which was built only because `perf` is unavailable in the sandbox.

Note the sandbox clones shallow, which hides almost every branch. Start with
`git fetch --unshallow origin`.

## The loop

One experiment at a time, in this order:

1. **Profile** to pick a target — don't guess.
   `valgrind --tool=callgrind --callgrind-out-file=/tmp/cg.out target/release/difft A B`
   then `callgrind_annotate --threshold=70 /tmp/cg.out`. Add `--tree=caller` to
   find who calls a hot function, which is usually the real question.
2. **Change one thing.**
3. **`cargo build --release`** (~17s incremental) and **`cargo test --release`**.
4. **Probe** the pair you expected to move: `./perf-research/ir.sh A B`. If it
   didn't move, stop here — don't spend a suite run on it.
5. **Validate and measure, concurrently** (they don't conflict, and this halves
   the wall time):
   - `./perf-research/check_output.sh` — ~3 min
   - `./perf-research/measure.sh <label>` — ~6 min
6. **Compare**: `./perf-research/compare.sh <previous-label> <label>`.
7. **Keep or revert**, then write the log entry and commit.

Run steps 5's two commands as separate background tasks and poll; each single
command otherwise exceeds the 120s foreground timeout.

## The harness

| file | what it does |
| --- | --- |
| `perf-research/measure.sh LABEL` | Ir per pair over `pairs.txt` → `results/LABEL.tsv` |
| `perf-research/compare.sh A B` | delta table between two runs |
| `perf-research/ir.sh LHS RHS` | Ir for a single pair, for quick probes |
| `perf-research/check_output.sh` | the correctness gate |
| `perf-research/pairs.txt` | the 27 benchmark pairs |
| `examples/query_cost.rs` | times `ts::Query::new` on a language, optionally with a query read from a file — how the highlight-query experiments were bisected |

### Why callgrind and not perf

`perf` is not installed in the Claude Code web sandbox and there is no package
for this kernel. Callgrind's `Ir` is the same quantity `perf stat` reports as
`instructions:u`, but counted by emulation rather than sampled, so repeated
runs of the *same* binary on the same input agree to the instruction. Cost is
~40x slowdown.

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

Everything is committed and the working tree is clean. `results/` holds a
labelled `.tsv` per experiment, so a new change is compared against
`exp8-key-seen-map-by-key`.

## Where to look next

Ordered by how much is left on the table. The suite is now dominated by
`typing` (3.12G), `slow` (2.17G), `modules` (2.13G), `long_line` (1.74G) and
`objc_module` (1.52G).

1. **More of `allocate_if_new`.** Still the single hottest function: 33% of
   `slow.rs`, 3.47M calls at ~215 instructions each before exp7 and exp8 took
   about a fifth off that. The remaining idea is to avoid *constructing* the
   64-byte `Vertex` at all on a hit — `compute_neighbours` builds one for each of up to seven neighbours
   and `allocate_if_new` discards most of them. The key can be computed from
   the same inputs before the struct is built. This is a real refactor of the
   seven construction sites, not a micro-edit.
2. **`line_numbers::LinePositions::from_region`** — 86M (2.75%) on `typing.ml`,
   plus its `Vec` allocation per call. Two binary searches per call, and
   difftastic calls it with offsets that increase monotonically as it walks the
   tree. A local wrapper caching the last line index would make it O(1)
   amortised. `line-numbers` is Wilfred's own crate, so upstreaming is an
   option.
3. **The remaining tree-sitter query analysis.** After exp1 and exp3 a trivial
   Rust diff is 206M instructions, still ~80% `ts_query__perform_analysis`. The
   ablation in the log shows it's four `scoped_identifier`/`scoped_type_identifier`
   patterns costing ~132M between them, and they genuinely affect output, so
   they can't just be dropped. Ideas not yet tried: whether `@type` captures
   are needed at all when `--color=never` (they only affect display colour,
   unlike `@comment`/`@string` which change the diff itself); whether a newer
   tree-sitter analyses faster.
4. **`split_string_by_width` and the display path** — still 10% of
   `long_line` after exp4.
5. **Ideas that change output** — better pre-diff splitting, skipping unique
   atoms — are listed in `PRIOR_WORK.md`. They can't go through this loop as
   set up, because `check_output.sh` would reject them by construction. They
   need Wilfred judging diff quality.

## Constraints

- `AI_POLICY.md` applies: disclose AI use in commit messages (the
  `Co-Authored-By` and `Claude-Session` trailers do this), and don't write
  GitHub issue or PR comments with an LLM.
- `CLAUDE.md`: don't touch `CHANGELOG.md` unless asked.
- MSRV is 1.85; `rust-toolchain.toml` pins it, so anything newer won't compile.
- Commit one experiment per commit, and stage explicitly (`git add <paths>`).
  `git add -A` repeatedly swept an in-flight experiment into the previous
  experiment's commit.
