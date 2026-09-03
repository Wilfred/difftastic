# Prior work on difftastic performance

Context gathered while setting up the autoresearch loop in
`PERF_RESEARCH_LOG.md`, recorded here so a resuming session doesn't have to go
looking for it again.

## Scope of this document, and what it is not

Two things were checked: the Claude Code session list for this account, and the
branch list on `origin`. **The session transcripts themselves were not read** —
`list_sessions` returns titles, IDs and timestamps but `task_summary` was null
for every one of them, and there is no tool in this session that returns a
transcript body. So the session table below is a map of where to look, not a
summary of what was found. Treat every "likely about" as a guess from the
title.

The branch list is firmer evidence: these are experiments Wilfred actually ran,
and none of them are merged into `master`. That they are unmerged does not
necessarily mean they failed — some may be unfinished, or abandoned for
correctness rather than performance reasons.

## Relevant Claude Code sessions

Retrieved with `mcp__Claude_Code_Remote__list_sessions` (`mine: true`, 40 most
recent). To read one, its ID is below.

| date | title | session id |
| --- | --- | --- |
| 2026-09-02 | Bidirectional search for shortest path | `session_01Cw3rPw3UwoudfLHc2r6v5C` |
| 2026-08-25 | Hash crate alternatives for difftastic | `session_01DMsXcVR5otbM2XF2BSFuwh` |
| 2026-08-23 | imara-diff spike for lcs_diff | `session_018VevccPHsENDaUp9uCDsZv` |
| 2026-08-17 | ChangeState::UnchangedDelimiter usefulness | `session_01GkP5CdXJNFh1BRYGqj46rB` |
| 2026-08-08 | Project review: correctness, clarity, performance | `session_019qDpmJSW9CtTNxViVNB4QE` |
| 2026-08-02 | Codspeed CI setup | `session_01TdwwCrtGaGqkeEcYDFXFYk` |

Of these, the imara-diff spike landed: `b66c183 Switch to imara-diff for
line-oriented diffing` is on master. The rest have no obvious corresponding
commit.

Other sessions in the list that touch difftastic but aren't about performance:
language detection review and audit, crash testing, release versioning, options
parsing with clap, issue 1020, issue 1026, dependency upgrades, highlights
queries review, grammar and syntax highlighting review, `difft.1` docs review,
`ChangeState` review, binary size reduction, invisible structural changes
display.

## Unmerged experiment branches on `origin`

79 branches exist. These are the ones whose names describe a performance
experiment, grouped by what they appear to attack. **None are merged.**

### Search algorithm

`a_star_module`, `a_star_v2`, `a_star_v3`, `ida_star`, `fringe_search`,
`bounded_dijkstra`, `claude/bidirectional-shortest-path-qd7f0j`,
`claude/difftastic-graph-limit-r5irm0`, `claude/graph-limit-heuristics`

The module doc comment at the top of `src/diff/shortest_path.rs` explains why
A* is hard here and is worth reading before trying any of these again: the
graph has very low-cost edges that cover long distances when whole subtrees
match, so there's no usable admissible heuristic. It concludes that
"preprocessing the input to find smaller subsections to diff tends to be much
more effective" — which is what the `split_*` branches below are.

### Data representation in the search

`id_arena_for_vertex`, `id_arena_syntax`, `compact_arena_syntax`,
`syntax_id_on_vertex`, `syntax_id`, `tagged_syntax_pointers_in_vertex`,
`bumpstack`, `edge_only_predecessors`, `remove_eq_on_syntax`,
`claude/arena-allocators-difftastic-8jpqov`,
`claude/optimize-data-structs-7amkjn`, `pass_end_node`

exp7 in the research log (packing the vertex identity into two words) is in
this family and did work, so the family isn't exhausted. A `TODO` in
`src/diff/graph.rs` on the `Vertex` struct — "experiment with storing SyntaxId
only, and have a HashMap from SyntaxId to &Syntax" — is presumably what
`syntax_id_on_vertex` and `tagged_syntax_pointers_in_vertex` were.

### Diffing less: pre-diff splitting and skipping

`skip_unique_atoms`, `skip_unique_symbols`, `split_more_thoroughly`,
`better_splitting_pre_diff`, `empty_delimiters_heuristic`, `shared_unique`,
`agent/split-unchanged-runs`, `accurate_ancestors_v2`,
`accurate_ancestors_with_fallback`

This is the direction `shortest_path.rs` recommends. `src/diff/unchanged.rs`
already does some of it (`mark_unchanged`, `split_mostly_unchanged_toplevel`,
`shrink_unchanged_at_ends`). Note that anything here **changes the diff
output**, so it can't be validated by `perf-research/check_output.sh` — it
needs a human judging diff quality. That makes it a poor fit for the
autoresearch loop as currently set up, and probably explains why these are
unmerged.

### Parallelism

`parallel_diffing`

difftastic already diffs *files* in parallel in directory mode
(`src/main.rs`); this presumably parallelised within a single file pair.
Note that instruction count is the wrong metric for parallelism work: it
measures total work, which parallelism doesn't reduce. Wall clock would be
needed instead.

### Other

`try_similar_lib` (an alternative to `strsim`, used for the levenshtein
comparison on replaced comments and strings), `imara_diff_library` (landed),
`claude/reduce-binary-size-01BSCVzUBqZD4ZBiji5q5kh7`, `claude/remove-crossterm`

## Things checked that turned out to be dead ends

- **GitHub issues.** `search_issues` on `Wilfred/difftastic` for performance,
  slowness, profiling and optimisation returned zero results. There is no
  backlog of user-reported performance issues to mine.
- **The repository wiki** (`github.com/Wilfred/difftastic.wiki.git`) has a
  `Literature-Review.md`, but it is a short reading list about tree edit
  distance algorithms — Bille's 2005 survey, Chawathe 1997, Shasha & Zhang
  1995, and two more recent tree-edit-distance papers — with no notes on what
  was tried or rejected. `LCS-Algorithms.md`, `Line-Based-Diffs.md`,
  `Structural-Diffs.md` and `Token-based-linear-diff-problems.md` are
  background rather than performance notes.
- **`justfile`** has a `perf` recipe that runs `perf stat` on two sample pairs
  (`typing_*.ml` and `slow_*.rs`) and writes a timestamped file. That's the
  pre-existing measurement approach; it needs `perf`, which isn't available in
  the Claude Code web sandbox.
- **`sample_files/compare.expected`** is the pre-existing output-regression
  oracle, driven by `sample_files/compare_all.sh` (`just compare`). It is
  **stale on master**: the `apex` pair's hash doesn't match, because
  `d17f3c9 Ensure foo.cls is LaTeX rather than Apex` changed that output
  without the expectation being regenerated. Don't trust it as a baseline;
  `perf-research/check_output.sh` records its own.
