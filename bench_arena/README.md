# Arena allocator experiments

An exploration of how different arena allocator choices affect
difftastic performance, measured as **total instruction count**
(callgrind `Ir`, deterministic to ~0.01% between runs).

## Background: where difftastic allocates

difftastic uses two arenas:

1. **Syntax arena** (`typed_arena::Arena<Syntax>`): one arena per file
   pair, holding every parsed `Syntax` node. Populated once during
   parsing, read-only afterwards. `Syntax` nodes own heap data
   (`String` content, `Vec<SingleLineSpan>` positions, `Vec` children),
   so this arena relies on typed-arena running destructors on drop.

2. **Vertex arena** (`bumpalo::Bump`): one arena per `mark_syntax`
   call, holding the Dijkstra graph: `Vertex` values (64 bytes each),
   neighbour lists (`alloc_slice_copy`), and persistent-stack nodes for
   the `EnteredDelimiter` stacks. This is the hot path: on the `slow`
   sample pair, ~74% of all instructions are spent in
   `allocate_if_new`, the Dijkstra loop, `compute_neighbours` and
   `pop_all_parents`, with the arena allocation fully inlined into
   them. Large diffs allocate hundreds of MiB here (the biggest
   `mark_syntax` call on the `slow` pair sees ~1M vertices and consumes
   256 MiB of arena).

## Method

- `measure.sh <variant> <binary>` runs
  `valgrind --tool=callgrind` over four sample pairs and records total
  instruction counts. `RAYON_NUM_THREADS=1` keeps runs single-threaded
  and deterministic (repeat-run jitter ≈ 0.01%).
- Inputs chosen to cover different profiles:
  - `slow_1/2.rs` — pathological Dijkstra case, graph-dominated.
  - `typing_1/2.ml` — large real-world files, mixed parse + graph.
  - `nest_1/2.rs` — small input, fixed startup costs dominate.
  - `modules_1/2.ml` — large files, parse-heavy.
  - (`huge_cpp` was rejected: `wu_diff` makes an allocation there that
    fails under valgrind's brk limits with jemalloc as global
    allocator.)
- Each variant is a patch in `patches/` applied to commit `3310f2b`,
  built with `cargo build --release` on rustc 1.85.0. Binaries were
  checked to produce byte-identical diff output to the baseline.
- Raw per-variant counts are in `results/`.

## Variants

| variant | change |
|---|---|
| `baseline` | current code: bumpalo 3.16 `Bump::new()` for vertices, typed-arena for `Syntax` |
| `bump-with-capacity` | `Bump::with_capacity(size_hint * size_of::<Vertex>())`, reusing the existing hashmap `size_hint` |
| `bumpalo-3.19` | dependency update only (lockfile), no code change |
| `combined-cap-3.19` | both of the above |
| `typed-arena-vertices` | vertex graph moved to four `typed_arena::Arena`s (vertices, neighbour lists, two stack-node types) |
| `blink-alloc-vertices` | vertex graph moved to `blink_alloc::Blink` (`put_no_drop` / `copy_slice`) |
| `sysalloc-leak` | control: no arena; `Box::leak` / `Vec::leak` straight from jemalloc |
| `bumpalo-syntax` | `Syntax` arena switched from typed-arena to bumpalo (see caveat) |

## Results

Total instructions (millions), delta vs baseline in parentheses:

| variant | slow | typing | nest | modules |
|---|---|---|---|---|
| baseline | 2459.7 | 3292.0 | 670.8 | 2309.4 |
| bump-with-capacity | 2450.0 (−0.39%) | 3291.1 (−0.03%) | 670.5 (−0.04%) | 2310.0 (+0.03%) |
| bumpalo-3.19 | 2453.8 (−0.24%) | 3293.2 (+0.04%) | 670.6 (−0.03%) | 2310.2 (+0.04%) |
| **combined-cap-3.19** | **2444.2 (−0.63%)** | 3290.3 (−0.05%) | 670.4 (−0.05%) | 2309.5 (+0.00%) |
| typed-arena-vertices | 2642.6 (+7.44%) | 3329.4 (+1.14%) | 674.7 (+0.59%) | 2312.3 (+0.13%) |
| blink-alloc-vertices | 2524.2 (+2.62%) | 3304.9 (+0.39%) | 672.1 (+0.21%) | 2310.3 (+0.04%) |
| sysalloc-leak | 3006.1 (+22.21%) | 3396.0 (+3.16%) | 681.2 (+1.56%) | 2315.4 (+0.26%) |
| bumpalo-syntax | 2458.1 (−0.07%) | 3256.3 (−1.08%) | 667.7 (−0.45%) | 2284.1 (−1.09%) |

Peak RSS is essentially unchanged for the pre-sized arena (330 → 337
MiB worst case on `slow`; the `seen` hashmap reserve dominates memory
either way).

## Findings

1. **bumpalo is the right choice for the vertex graph.** The
   no-arena control costs +22% instructions on graph-heavy input
   (`_rjem_malloc` alone becomes 5.9% of the program), and typed-arena
   costs +7.4%: its `alloc` is a `Vec`-style push with a capacity
   check that doesn't inline as well (`Stack::push` stops being
   inlined entirely, 104M self-instructions appear), and
   `alloc_extend` for neighbour lists is slower than bumpalo's
   `alloc_slice_copy` memcpy. blink-alloc (0.4, via `Blink::put_no_drop`)
   is also slower here (+2.6% on `slow`) despite its microbenchmark
   claims — its allocation path is heavier once embedded in
   difftastic's already-inlined hot loops.

2. **Pre-sizing the vertex arena is a small, free win.** Reusing the
   existing `size_hint` (already used to reserve the `seen` hashmap)
   for `Bump::with_capacity` saves 0.4% on graph-heavy input by
   skipping repeated chunk-doubling, with negligible RSS impact.

3. **bumpalo 3.19 is slightly faster than 3.16** on the hot
   `alloc_slice_copy` path (−5.9M instructions in `compute_neighbours`
   on `slow`). The two wins compose additively (−0.63% combined).

4. **Switching the Syntax arena to bumpalo saves ~1.1% on
   parse-heavy inputs, but is not sound as a drop-in change:**
   bumpalo does not run destructors, so every `Syntax` node's `String`
   and `Vec` fields would leak (per file pair, until process exit).
   The honest version of this change is to move those fields into the
   bump too (`bumpalo::collections::String`/`Vec` or `&str` slices),
   which would also eliminate one global-allocator round trip per
   atom — likely worth more than 1.1%, but it is a much larger
   refactor. Recorded as future work.

## Round 2: beyond allocators

After the arena work, profiles showed the biggest remaining costs were
not allocation at all:

1. **Tree-sitter highlight query construction** (`Query::new` →
   `ts_query__perform_analysis`): a fixed cost per language per
   invocation, 433M instructions for Rust — 65% of the entire run on a
   small diff (`nest`), and ~18% even on `slow`. difftastic only reads
   four capture groups from highlight queries (comment/keyword-ish/
   string/type buckets in `tree_highlights`), but compiles the stock
   highlights queries, which are dominated by patterns it never reads
   (@function, @variable, @punctuation, ...).

   **Change (`filtered-highlight-query.patch`)**: filter the query
   text to top-level patterns containing at least one used capture
   before `Query::new`. Since tree-sitter query patterns match
   independently and difftastic only unions matches of used capture
   names, dropping never-read patterns cannot change results.
   Validated by byte-identical `--color always` output across all 111
   sample pairs, plus the `test_configs_valid` test which compiles
   the filtered query for every supported language.

2. **Stale heap entries in Dijkstra** (`shortest_vertex_path`,
   rejected): when a vertex's distance improves it is pushed again,
   the old entry stays in the heap, and a stale pop re-relaxes all
   neighbours. Skipping stale pops with a distance comparison is the
   textbook fix — but it *lost* here (+0.8% on `slow`): distance
   improvements after the first push are rare in difftastic's graphs,
   so the extra per-pop compare costs more than the skipped
   re-relaxations save. Kept as a patch, not applied.

### Round 2 results

Measured against the round-1 committed state (`combined-cap-3.19`,
i.e. pre-sized arena + bumpalo 3.19):

| variant | slow | typing | nest | modules |
|---|---|---|---|---|
| round-1 state | 2444.2 | 3290.3 | 670.4 | 2309.5 |
| + filtered highlight query | 2268.1 (−7.2%) | 3073.7 (−6.6%) | 493.1 (−26.4%) | 2123.3 (−8.1%) |
| + stale-pop skip (rejected) | 2287.1 (+0.8%) | 3077.1 (+0.1%) | 493.5 (+0.1%) | 2123.7 (+0.0%) |

Native wall-clock on `nest` (small diff): ~78ms → ~68ms from the
query filtering alone.

After both changes, `ts_query__perform_analysis` is still the largest
single cost on small diffs (222M instructions, 45% of `nest`): the
keyword patterns that difftastic genuinely uses still have to be
analysed, and tree-sitter has no way to cache compiled queries across
invocations. Further cuts there need upstream tree-sitter changes.

## Round 3: large files (the text-diff path)

Files over `--byte-limit` (1 MiB default) take the text-diff path
(`line_parser.rs`), and the stress test for that is
`huge_cpp_1/2.cpp`: 22 MiB, 590K lines per side. Profiling it exposed
four issues, all fixed with byte-identical output (validated on all
111 sample pairs plus huge_cpp itself, with colours):

1. **The whole line diff ran twice.** `change_positions(lhs, rhs)`
   and `change_positions(rhs, lhs)` each recomputed line splitting,
   line hashing, the wu-diff and the word-level diffs from scratch.
   Replaced with `change_positions_both`, which walks the diff once
   and emits both sides' `MatchedPos` vecs. (Within any valid diff
   stream, items carrying an RHS index appear in RHS-index order, so
   the mirrored second pass was recomputing the same information.)

2. **`wu-diff` allocates two `M*N`-element arrays** (`routes`,
   `diff_types`) where M and N are the deduplicated novel-line counts.
   That's quadratic address space — several GiB on huge_cpp (which is
   why it aborted under valgrind in round 1), and a genuine OOM for
   pairs with ~100K+ novel lines each. The algorithm writes these
   arrays strictly sequentially, so difftastic now vendors a copy
   (`src/diff/wu_diff.rs`, MIT, from wu-diff 0.1.2) using growable
   vectors: identical values at identical indexes, identical output,
   linear memory.

3. **Line splitting used a regex** to find newlines.
   `str::split_inclusive('\n')` does the same thing without regex
   machinery (54M instructions of regex search + 35M of memchr on
   huge_cpp).

4. **Every line was hashed ~3 times** in `slice_unique_by_hash`
   (uniqueness sets, contains-filter, then interning again in
   `slice_by_hash`), and the re-interleaving loop compared full
   strings. Now lines are interned once into dense u32 IDs and
   everything downstream (uniqueness filter, wu-diff, re-interleave)
   works on integers.

### Round 3 results

huge_cpp (text path, best-of-4 warm wall clock, plus callgrind now
that the vendored wu-diff makes it measurable):

| state | wall clock | instructions |
|---|---|---|
| round-2 state | 3.59s | aborts under valgrind |
| + split_inclusive + vendored wu-diff | 3.61s | 17.02G |
| + single-pass both sides + intern-once | 2.92s | 13.79G (−19%) |

Structural-diff inputs (slow/typing/nest/modules) are unaffected
(all within 0.02% of round 2). Getting there needed one extra fix:
the new code shifted thin-LTO inlining decisions and `Stack::eq`
stopped being inlined into the hot `allocate_if_new` path, costing
1.9% on `slow` — an explicit `#[inline]` hint pins it. A reminder
that with thin LTO, unrelated code changes can silently deoptimise
hot paths, and deterministic instruction counting catches it.

The remaining large-file lever on the *parsed* side is moving
`Syntax` string/position storage into the syntax arena
(the bumpalo-collections refactor from round 1's finding #4).

## Round 4: replacing the Wu diff library

With the text path fast, the question was whether the wu-diff
algorithm itself (vendored in round 3) is the right linear-diff
engine. Candidates evaluated as drop-in engines for
`slice_unique_by_hash` (the text-diff hot path, which feeds
pre-interned u32 tokens): **imara-diff 0.2** (gitoxide's engine;
Histogram and Myers) and **similar 3.1** (Myers).

huge_cpp (22 MiB text pair), callgrind instructions:

| engine | instructions | vs wu |
|---|---|---|
| wu (vendored, round-3 state) | 13.79G | — |
| imara-diff Myers | 13.83G | +0.3% |
| similar Myers | 13.94G | +1.1% |
| imara-diff Histogram | 15.09G | +9.4% |

Native wall clock is noise-level identical (2.9-3.1s) for all four.
Histogram's token-occurrence bookkeeping doesn't pay off here:
difftastic's unique-line prefilter already removes the tokens
histogram would use as anchors, and what remains is a
small-edit-distance diff, which is Wu's and Myers' best case.

**The deciding test was adversarial input**: two 50K-line files with
identical lines in reversed order (edit distance ≈ N, the worst case
for O(NP)/O(ND) algorithms):

| engine | result |
|---|---|
| wu (even with round-3 linear storage) | **OOM-killed** after 70s (route storage is inherently O(N·P) ≈ 20 GiB here) |
| imara-diff Myers | 16s, bounded |
| imara-diff Histogram | 16s, bounded |
| similar Myers | 31s, bounded |

imara-diff's Myers applies the same effort-bounding heuristics git
uses, trading minimality for a hard cost ceiling; wu-diff has no such
bound, so a hostile (or just heavily-reordered) text pair kills the
process.

Output divergence from wu across all 111 sample pairs: imara
Histogram 1 pair, imara Myers and similar Myers 2 pairs (huge_cpp
plus, for the Myers engines, colour-only word-alignment differences
on hare) — all equally-valid alternative alignments.

**Adopted: imara-diff (Myers) for `slice_unique_by_hash`.**
Performance parity on real inputs, bounded on adversarial ones,
actively maintained, and difftastic's dense u32 interning feeds its
`Token` type with no re-interning. The vendored wu-diff remains for
the two small-input callers (`slice` for unchanged-node detection,
`slice_by_hash` for comment word diffs): `slice` diffs values that
are `PartialEq` but not `Hash`, so migrating it means reworking
`unchanged.rs`, and alignment changes there affect structural diff
decisions — recorded as possible follow-up work. Engine patches for
all four variants are in `patches/`.

## Round 5: isolating the three text-path fixes

Round 3 landed three text-path fixes as one change. Re-measuring each
one **individually** against a common base (round-2 state + the
vendored wu-diff, which is what makes huge_cpp measurable under
callgrind, + the `Stack::eq` inline hint) separates their
contributions. huge_cpp, callgrind instructions:

| variant | size of fix | instructions | vs base | wall clock (best of 3) |
|---|---|---|---|---|
| iso base | — | 16.98G | — | 3.47s |
| only single-pass both sides | ~260 diff lines, API change (4 call sites) | 14.17G | **−16.5%** | 2.97s |
| only intern-once `slice_unique_by_hash` | ~150 diff lines, one function | 16.16G | **−4.8%** | 3.41s |
| only regex → `split_inclusive` | ~40 diff lines | 17.01G | **+0.18%** | 3.64s |

Findings:

1. **The run-twice fix dominates** (−16.5% alone) but is the least
   "small" of the three: it changes the `change_positions` API and
   all four `main.rs` call sites. The intern-once rewrite is a
   genuinely small, self-contained fix (one function, no API change)
   for −4.8%.

2. **The regex → `split_inclusive` swap was a small *pessimization*,
   not a win.** The regex crate compiles the literal `"\n"` pattern
   down to a memchr scan, which is faster than
   `str::split_inclusive`'s `CharSearcher` on 22 MiB of text. Bundled
   into round 3, this was masked by the two real wins. The correct
   small fix is to split with `memchr` directly (already in the
   dependency tree via imara-diff): 13.67G (−1.2%) vs the committed
   state (imara-myers, 13.83G). Applied as the `memchr-split` change.

3. The individual gains overlap rather than add: −16.5% − 4.8%
   ≈ −21% naively, but the measured combined effect is −18.8% —
   halving the line diff also halves what interning once can save.

A lead for future work spotted in the iso-base profile: on huge_cpp,
`display::hunks::matched_lines_indexes_for_hunk` is the single
largest cost (19.4% of the whole run) — the display layer, not
diffing itself.

## Reproducing

```
cargo build --release
cp target/release/difft /tmp/difft-baseline
bench_arena/measure.sh baseline /tmp/difft-baseline

git apply bench_arena/patches/<variant>.patch
cargo build --release
cp target/release/difft /tmp/difft-<variant>
bench_arena/measure.sh <variant> /tmp/difft-<variant>
```

Note: the experiment patches only keep the non-test code compiling
(`cargo build`), they don't update `#[cfg(test)]` code, so `cargo
test` will not compile for `typed-arena-vertices`, `blink-alloc-vertices`,
`sysalloc-leak` and `bumpalo-syntax`.
