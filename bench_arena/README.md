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
