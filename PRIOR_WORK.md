# Prior work on difftastic performance

Written so a future session doesn't have to re-derive any of this. Everything
below comes from two sources: the Claude Code session list for this account,
and the branches on `origin`.

**All of it is reachable from git alone**, which matters if you're working
outside Claude Code on the web. The session IDs are recorded for provenance,
but the branches carry the actual work, and the commit messages carry the
measurements.

## Getting at this offline

The web sandbox clones shallow, which hides most of this. First:

```
git fetch --unshallow origin
git fetch --no-tags origin 'refs/heads/*:refs/remotes/origin/*'
```

That gives 77 non-master branches. Then, for any branch:

```
git log --format='%s' $(git merge-base origin/master origin/BRANCH)..origin/BRANCH
```

The commit messages on the `claude/*` branches are unusually detailed — several
carry their own callgrind tables — so reading them is much better value than
reading a diff.

## The most important finding

**exp1 in `PERF_RESEARCH_LOG.md` is a rediscovery.** Trimming highlight-query
patterns whose captures difftastic ignores was already done in July 2026, on
`claude/arena-allocators-difftastic-8jpqov`, commit `95d1b70`:

> Only compile the parts of highlight queries that difftastic uses
> [...] the pattern analysis in ts_query__perform_analysis was 65% of all
> instructions executed when diffing a small Rust file [...]
> nest_1/2.rs -26%, slow_1/2.rs -7.2%, typing_1/2.ml -6.6%, modules_1/2.ml -8.1%

The two implementations agree to within a few tenths of a percent on every pair
they share, and both landed on extracting the capture-name predicates so the
filter and `tree_highlights` can't drift apart. It is unmerged, which is why it
wasn't visible in `master`.

The lesson: **check the branch list before starting, not after.** The rest of
that branch is also unmerged perf work — see below.

## Sessions

`post_turn_summary.status_detail` from `list_sessions` is a one-line outcome
for each. These are the difftastic performance ones:

| date | title | branch | outcome |
| --- | --- | --- | --- |
| 2026-09-02 | Bidirectional search for shortest path | `claude/bidirectional-shortest-path-qd7f0j` | "A* contributes 8%; enter+seen gives 15% — recommend the latter two" |
| 2026-08-25 | Hash crate alternatives | *not pushed* | "benchmarked 9 hash crates; FxHasher optimal for tiny keys" |
| 2026-08-23 | imara-diff spike for lcs_diff | *not pushed* | "37–80% faster, O(n²) OOM fixed, 143 tests pass" — **landed** as `b66c183` |
| 2026-08-17 | ChangeState::UnchangedDelimiter usefulness | *not pushed* | "UnchangedDelimiter is necessary; removal causes panics" |
| 2026-08-08 | Project review: correctness, clarity, performance | `claude/project-review-az284i` | "perf micro-ops measured: −72% on display, JSON bucketing, glob cache, Cow keys, etc." |
| 2026-08-02 | Codspeed CI setup | `claude/codspeed-ci-setup-ahqufj` | "CodSpeed CI set up: workflow, bench target, docs" |
| 2026-07-18 | (arena allocators) | `claude/arena-allocators-difftastic-8jpqov` | session `session_01UbvL5R9MXnQ5JzpbW4hfDr`, older than the 40 returned by `list_sessions` |

Three of these never pushed a branch, so their conclusions survive only as
those one-liners. Two are directly actionable as settled questions:

- **Don't re-benchmark hash crates.** FxHasher was already found optimal for
  difftastic's tiny keys, against nine alternatives.
- **Don't remove `ChangeState::UnchangedDelimiter`.** It is necessary;
  removing it panics.

To re-read a session's metadata: `mcp__Claude_Code_Remote__get_session` with
the ID, or `list_sessions` and parse `session_context.outcomes[].git_repository.git_info.branches`
and `post_turn_summary.status_detail` out of the JSON.

## There is already a benchmark harness

`claude/codspeed-ci-setup-ahqufj` (commit `5e920f54f`, unmerged) adds:

- `benches/diff.rs` — divan benchmarks that time parsing and diffing
  *separately* over a handful of `sample_files/` pairs. Because difftastic is a
  binary crate, it `#[path]`-includes the source modules directly.
- `.github/workflows/codspeed.yml` — runs them on every PR.
- `manual/src/profiling.md` — documents `cargo flamegraph`, `perf stat` and
  `cargo bench`.
- A `build.rs` change to set `CARGO_BIN_NAME` for every target, without which
  `src/options.rs` won't compile outside the binary.

**CodSpeed counts instructions executed**, the same metric this research uses,
for the same reason (CI machines are noisy). If you're setting up to work
outside the web sandbox, start by cherry-picking this branch: it gives you
`cargo bench` and per-PR regression reporting, and it splits parse from diff,
which `perf-research/measure.sh` does not.

## Branches, grouped

77 non-master branches, none merged. Dates are the branch tip.

### Search algorithm

| branch | date | commits |
| --- | --- | --- |
| `claude/bidirectional-shortest-path-qd7f0j` | 2026-09-02 | 4 |
| `a_star_v3` | 2026-07-07 | 2 |
| `claude/graph-limit-heuristics` | 2026-07-14 | 6 |
| `claude/difftastic-graph-limit-r5irm0` | 2026-07-14 | 11 |
| `fringe_search` | 2022-07-17 | 8 |
| `bounded_dijkstra` | 2022-07-09 | 1 |
| `a_star_v2` | 2022-07-02 | 3 |
| `a_star_module` | 2021-09-22 | 5 |
| `ida_star` | 2021-09-12 | 9 |

The bidirectional branch is the most recent and most useful:

```
Add A* lower bound, stale heap entry skipping and smaller seen map
Make edge costs overridable with environment variables
Add EnterNovelDelimiterBoth edge
Add experimental bidirectional Dijkstra behind DFT_BIDIRECTIONAL
```

Two things to note. "Stale heap entry skipping" is **exp6 in the research log,
which measured as a 0.18% regression** — so that branch's bundle needs
unpicking rather than adopting wholesale. And its session concluded "A*
contributes 8%; enter+seen gives 15% — recommend the latter two", i.e. the
`EnterNovelDelimiterBoth` edge and the smaller seen map were the wins, not A*.
`EnterNovelDelimiterBoth` is also a standing `TODO` on the `Edge` enum in
`src/diff/graph.rs`.

Before trying A* again, read the module doc comment at the top of
`src/diff/shortest_path.rs`. It explains why it's hard here — subtree matches
give very low-cost edges covering long distances, so there's no usable
admissible heuristic — and concludes that splitting the input into smaller
sections is more effective. Five branches have tried A* or a variant since
2021; none merged.

### Diffing less: pre-diff splitting and skipping

| branch | date | tip commit |
| --- | --- | --- |
| `claude/graph-limit-heuristics` | 2026-07-14 | Split sections at runs of matched nodes, not just single big nodes |
| `claude/difftastic-graph-limit-r5irm0` | 2026-07-14 | (same, plus a writeup) |
| `agent/split-unchanged-runs` | 2026-08-02 | |
| `better_splitting_pre_diff` | 2026-07-18 | WIP summing |
| `split_more_thoroughly` | 2025-10-25 | Proof of concept split on matching runs |
| `skip_unique_symbols` | 2025-10-11 | WIP skip symbols unique to one side for perf |
| `empty_delimiters_heuristic` | 2024-07-21 | |
| `skip_unique_atoms` | 2023-04-22 | WIP marking unique atom nodes before diffing |
| `shared_unique` | 2022-11-06 | Try treating shared unique trees as atomic |
| `accurate_ancestors_v2` | 2022-05-01 | Model parent IDs accurately |

**Read `graph_limit_investigation.md` on `claude/difftastic-graph-limit-r5irm0`
before touching any of this.** It's a real study: `difft` run as
`GIT_EXTERNAL_DIFF` over ~200 commits each of redict, forgejo, veloren,
gitlab-foss, emacs, mesa and pmbootstrap — ~22,500 file diffs, 35 graph-limit
hits — with a taxonomy of what the failing inputs look like and which trimming
gap causes each. It identifies mechanical project-wide renames as the main
failure mode, because `split_unchanged_toplevel` finds no split points when no
function is exactly unchanged.

Note that everything in this group **changes diff output**, so
`perf-research/check_output.sh` rejects it by construction. It needs a human
judging diff quality, which is probably why none of it merged.

### Vertex and syntax representation

| branch | date | tip commit |
| --- | --- | --- |
| `claude/optimize-data-structs-7amkjn` | 2026-07-12 | Shrink the seen map's value type in graph search |
| `syntax_id_on_vertex` | 2024-05-23 | Using id_map everywhere except tests (8 commits) |
| `compact_arena_syntax` | 2024-05-23 | Add compact_arena dependency |
| `id_arena_for_vertex` | 2023-08-18 | Use id-arena for Vertex |
| `id_arena_syntax` | 2023-08-18 | WIP |
| `bumpstack` | 2023-08-04 | Bump allocate delimiters (4 commits) |
| `tagged_syntax_pointers_in_vertex` | 2022-10-18 | WIP tagged pointers in Vertex |
| `pass_end_node` | 2022-04-26 | Pass the end node to Dijkstra impl (5 commits) |
| `remove_eq_on_syntax` | 2022-04-24 | WIP remove Syntax::PartialEq |
| `edge_only_predecessors` | 2021-09-23 | Don't store node in predecessors |

exp7 and exp8 in the research log are in this family and both worked (-0.7% and
-1.9%), so it isn't exhausted. `claude/optimize-data-structs-7amkjn`'s "Shrink
the seen map's value type" overlaps with exp8 — compare before redoing.
`syntax_id_on_vertex` is the `TODO` on the `Vertex` struct ("experiment with
storing SyntaxId only, and have a HashMap from SyntaxId to &Syntax").

### Allocation and the text-diff path

`claude/arena-allocators-difftastic-8jpqov` (2026-07-18, 7 commits) is the
richest unmerged branch:

```
Split lines with memchr, and measure round-3 text fixes individually
Use imara-diff for the text-diff hot path
Speed up text diffs on large files
Document round-2 performance investigation
Only compile the parts of highlight queries that difftastic uses
Pre-size the vertex arena and update bumpalo to 3.19
Add arena allocator benchmark harness, patches and results
```

It carries `bench_arena/README.md`, which measures arena allocator choices in
callgrind `Ir` — the same methodology, independently arrived at, down to the
"deterministic to ~0.01% between runs" figure. It also has a useful map of
where difftastic allocates (typed-arena for `Syntax`, bumpalo for `Vertex`,
~74% of `slow`'s instructions in the vertex-arena hot path).

"Split lines with memchr" is worth lifting on its own:
`split_lines_keep_newline` in `src/line_parser.rs` still uses a `Regex` to find
newlines.

The imara-diff work here is separate from the spike that landed as `b66c183` —
that one replaced `lcs_diff`; this one targets the text-diff hot path.

### Display and general micro-optimisation

`claude/project-review-az284i` (2026-08-10, 7 commits), all unmerged:

```
Borrow node content when computing content IDs
Reduce small allocations in sliders and delimiter detection
Avoid copying file contents when guessing content
Compile language detection globs once
Reduce allocations in line-oriented diffing
Fix quadratic display costs on large hunks
```

Its session reported "−72% on display". "Fix quadratic display costs on large
hunks" is likely the biggest single item and is adjacent to exp4 in the
research log.

### Other

`try_similar_lib` (alternative to `strsim`, used for the levenshtein comparison
on replaced comments and strings), `parallel_diffing` (2022, "Basic parallel
diffing" — note instruction count is the *wrong* metric for parallelism, since
it measures total work; use wall clock), `imara_diff_library`,
`claude/reduce-binary-size-01BSCVzUBqZD4ZBiji5q5kh7`, `claude/remove-crossterm`.

## Dead ends already checked

- **GitHub issues.** `search_issues` on `Wilfred/difftastic` for performance,
  slowness, profiling and optimisation returns nothing. There is no backlog of
  user-reported performance issues.
- **The wiki** (`github.com/Wilfred/difftastic.wiki.git`). `Literature-Review.md`
  is a short reading list on tree edit distance — Bille's 2005 survey, Chawathe
  1997, Shasha & Zhang 1995, and two more recent papers — with no notes on what
  was tried. The other pages are background, not performance notes.
- **`sample_files/compare.expected`**, the pre-existing output oracle behind
  `just compare`, is **stale on master**: the `apex` pair's hash doesn't match,
  because `d17f3c9 Ensure foo.cls is LaTeX rather than Apex` changed that output
  without the expectation being regenerated. `perf-research/check_output.sh`
  records its own baseline instead.
- **`just perf`** runs `perf stat` on two sample pairs. `perf` isn't installed
  in the web sandbox and there's no package for its kernel; outside the sandbox
  it should work.
