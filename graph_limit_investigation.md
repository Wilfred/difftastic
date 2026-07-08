# Investigation: where difftastic hits DFT_GRAPH_LIMIT, and how to shrink the ASTs it diffs

## 1. Methodology

I ran `difft` (0.70.0, current main) as `GIT_EXTERNAL_DIFF` over the most
recent ~200 non-merge commits of a language-diverse set of OSS projects,
logging every file-level diff and saving any file pair whose output fell
back to `Text (exceeded DFT_GRAPH_LIMIT)`:

| repo | language(s) | file diffs | graph-limit hits |
|---|---|---|---|
| redict (Redis fork) | C | 2333 | 9 |
| forgejo (Gitea fork) | Go | 1322 | 8 |
| veloren | Rust | 1229 | 9 |
| gitlab-foss | Ruby, JS, Go, JSON | 16295 | 8 |
| emacs | C, Elisp | 371 | 1 |
| mesa | C, C++ | 454 | 0 |
| pmbootstrap | Python | 507 | 0 |

35 hits over ~22,500 file diffs (~0.15% of files, but clustered: when one
commit renames something project-wide, *every* touched file falls back at
once, which is exactly when a structural diff would be most appreciated).

## 2. What the failing inputs look like

With `DFT_LOG=info`, every failure is a *section* (what remains after
`unchanged::mark_unchanged` trimming) of roughly 1.5k–35k nodes per side.
A Dijkstra vertex is essentially a `(lhs node, rhs node)` pair (times a
small constant for the pop-either flag and parenthesis nestings), so a
section with L×R ≳ 3M explodes. ~1700 nodes per side is enough — that's a
~200-line file if the edits are spread out.

Failure categories, with the trimming gap that causes each:

1. **Mechanical renames touching every top-level node** (all 9 redict
   files: the Redis→Redict rename). No function is *exactly* unchanged, so
   `split_unchanged_toplevel` (LCS over equal `content_id`s) finds no split
   points, and `split_mostly_unchanged_toplevel` stops at the first changed
   atom because it only peels *whole lists* from the *ends*. Result: one
   2714×2714 section for a 591-line C file.

2. **Files of many tiny records with edits sprinkled throughout**
   (forgejo `locale_zh-CN.json`, 1725 top-level entries; gitlab-foss
   `master_report.json`, thousands of `"test path": runtime` entries where
   most *values* change). The unchanged entries *are* matched by the LCS,
   but each is below `TINY_TREE_THRESHOLD` (10 descendants), so none is
   used as a split point and the whole object is a single 3451×3491
   section. The threshold exists so a stray matched comma can't split
   unrelated regions, but it also rejects thousands of trustworthy anchors.

3. **One giant list with widespread internal changes** (forgejo
   `routers/web/web.go` — `registerRoutes`, 1500 lines of nested `m.Group`
   closures; emacs `modus-themes.el` — a `defconst` holding a quoted list
   of thousands of face specs). The singleton-list descent
   (`split_unchanged_singleton_list`) gives up at the first nesting level
   whose children produce no LCS splits, and the whole 15924×14639 subtree
   goes to the graph.

4. **Several large changed siblings** (veloren animation code, forgejo
   test files: 3–15 changed functions per side, none exactly equal). There
   is no mechanism to pair "the same function, slightly changed" — that
   pairing only happens implicitly inside the graph search itself, which is
   exactly what's too big to run.

5. **Code wrapped in a new block and edited** (veloren `basic.rs`: 34 LHS
   siblings vs 1 RHS list after code moved into a new `match` arm).
   Nesting-depth changes defeat all sibling-level trimming.

## 3. How GNU diff and git handle the same problem

Line-based diffs hit the identical wall (Myers is O(ND), and D is huge for
renames), and deploy a stack of input-shrinking tricks. Most have a direct
difftastic analogue — two don't, and those two are the interesting ones:

| GNU diff / git xdiff | difftastic analogue |
|---|---|
| `find_identical_ends` (io.c): strip common prefix/suffix before diffing, keeping `horizon_lines` of context | `shrink_unchanged_at_ends` ✅ |
| hash lines into equivalence classes; never compare text again | `content_id` ✅ |
| `shift_boundaries` (analyze.c) / git's indent heuristic: normalise hunk boundaries post-hoc | `fix_all_sliders` ✅ |
| patience diff (git xpatience.c): anchor on lines **unique in both files**, split, recurse | ⚠️ partial: LCS anchors must be non-tiny; uniqueness ignored |
| histogram diff (git xhistogram.c): like patience but anchors may occur up to 64 times, preferring the rarest | ❌ |
| `discard_confusing_lines` (analyze.c): lines with no match on the other side are provisionally discarded *before* the LCS runs ("Mark to be discarded each line that matches no line of the other file"), with un-discard passes to keep context | ❌ novel subtrees still enlarge the graph |
| `too_expensive` heuristic (gnulib diffseq.h): when the cost exceeds ~O(√N), "give up and report halfway between our best results so far" — split at the best diagonal seen and recurse on both halves. Output degrades gracefully; GNU diff never falls back wholesale | ❌ difftastic aborts the **whole file** to a text diff, discarding sections it already diffed successfully |

The tree-diff literature lands in the same place: GumTree's top-down phase
matches identical subtrees (≈ `content_id` LCS) and its bottom-up phase
pairs *similar* containers by how many of their descendants were already
matched — which is the missing piece for categories 1, 3, 4 and 5.

## 4. Prototyped changes (branch `claude/difftastic-graph-limit-r5irm0`)

All in `src/diff/unchanged.rs`, extending the existing
start/end-trimming pipeline rather than touching the graph search.

### 4a. Patience anchors: unique tiny nodes are trustworthy split points

`split_unchanged_toplevel` now keeps a matched node as a split point even
below `TINY_TREE_THRESHOLD` if its content occurs exactly once on each side
(`content_is_unique` is already precomputed on every node). Atoms must be
≥3 bytes, so punctuation that happens to be unique in a small file can't
become an anchor — the pathology `TINY_TREE_THRESHOLD` protects against,
caught by `sample_files/comma_and_comment_1.js`.

This alone fixed 12 of the 26 initially-captured cases (category 2 files,
and most redict files via unique unchanged comments between the renamed
functions).

One subtlety: a small unique node that *moved past* a big sibling must
not steal the alignment from it. The LCS maximises match count, so a
tiny node that hopped over exactly one big matched sibling ties with
it, and if the tie breaks toward the tiny node, anchoring there forces
the big sibling to display as removed-and-re-added (reproduced
empirically with a crafted elisp file). The splitting therefore runs
in two passes: big nodes match first and claim the alignment; tiny
unique anchors are only considered within the gaps between big
matches, where a moved node's old and new positions land in different
gaps and it is simply treated as changed — the same output the graph
search produces. Corpus results and sample outputs are unaffected by
the second pass.

### 4b. Similarity pairing + forced descent for oversized sections

When a possibly-changed section could still produce a graph of ≥1M
(`section_size(lhs) × section_size(rhs)`), `split_possibly_changed_section`
tries, in order:

1. **Singleton descent** — a 1v1 section of same-delimiter lists marks the
   delimiters unchanged and recurses into the children. (The existing
   `shrink_unchanged_delimiters` only descends when end-trimming already
   made progress, which the category-3 files never achieve.)
2. **Similar-list pairing** — pair sibling lists that share unique
   subtrees. Because a both-sides-unique subtree occurs in exactly one
   list per side, each one directly *votes* for a pairing, GumTree-style:
   index unique content IDs per RHS list, walk each LHS list once, tally
   votes, resolve conflicts by vote count, and keep the longest increasing
   subsequence so pairs never cross. Roughly linear time, so it works both
   for 20 large functions (category 1/4) and for 2000 tiny JSON records
   (category 2). Small lists need 1 vote; lists ≥20 descendants need 2.
   Then recurse into each pair and into the gaps between pairs.

A third step was tried and later dropped (see §7c): *unwrapping* a
section with a single list on one side (category 5) by marking that
list's delimiters novel and diffing its children against the other
side's nodes. It mattered when pairing used a coarser similarity test,
but with vote-based pairing it fixed nothing further and its timing
contribution was noise, so it didn't justify its speculative
delimiter marking.

The ≥1M gate means none of this runs on sections the graph search already
handles, so ordinary diff output is untouched (verified empirically, §5).

### 4c. Diagnostics

The `mark_syntax` info log now includes the first node (content + line
number) of each section, which is how the failing regions above were
identified. Worth keeping for future investigations.

## 5. Results

**All 35 captured failing file pairs now produce structural diffs** (the
last two holdouts, veloren's ~60%-rewrite `basic.rs`/`multi.rs`, were fixed
by the voting version of pairing). Full-corpus re-runs:

| repo | hits before → after | total wall time |
|---|---|---|
| redict | 9 → 0 | 207s → 129s |
| forgejo | 8 → 0 | 158s → 74s |
| veloren | 9 → 2¹ | 196s → 135s |
| emacs | 1 → 0 | 40s → 42s |
| mesa | 0 → 0 | 41s → 44s |
| pmbootstrap | 0 → 0 | 19s → 17s |
| gitlab-foss | 8 → (8/8 pairs fixed in isolation)² | — |

¹ re-run predates the voting version of pairing; the two remaining pairs
pass with the final code.
² full re-run skipped (the baseline run alone took ~35 minutes); all 8
captured pairs pass with the final binary.

Pathological files get much faster because the search no longer burns 3M
vertices (~1 GiB of arena) before giving up:

| file | before | after |
|---|---|---|
| master_report.json (gitlab-foss) | 7.4s → text fallback | 34ms, structural |
| locale_zh-CN.json (forgejo) | 3.3s → text fallback | 33ms, structural |
| helloworld.c (redict rename) | 4.1s → text fallback | 235ms, structural |
| web.go (forgejo) | 4.8s → text fallback | 444ms, structural |
| modus-themes.el (emacs) | 5.9s → text fallback | 484ms, structural |
| sample_files/slow_1.rs | 1.5s | 195ms, identical output |

One trade-off: veloren's `basic.rs`/`multi.rs` (heavy rewrites) now spend
10–19s producing a real structural diff where they previously spent ~5s
and fell back to a text diff. If that's undesirable, pairing could mark
low-vote pairs' unmatched content novel instead of graph-diffing it.

Verification:

- `cargo test`: 147 tests pass (124 lib + 23 CLI), including 4 new unit
  tests for the anchor and pairing logic.
- A differential run of baseline vs patched binaries over 40 commits × 4
  repos (605 file diffs) shows exactly 2 outputs changed — both files
  where the baseline had fallen back with `exceeded DFT_GRAPH_LIMIT`.
  Every previously-working diff is byte-identical.
- `sample_files/compare_all.sh` shows exactly two output changes, both
  arguably improvements:
  - `strings.el` (a list of strings was re-sorted): previously paired
    positionally, showing `"noreturn"` edited into `"bool"`; now identical
    strings match across the reorder.
  - `css.css` (two rules swapped, one edited): previously showed `.foo1`
    renamed to `.bar`; now `.bar` is recognised as unchanged and `.foo1`
    as moved.

## 6. Per-heuristic attribution

Measured by building a binary at each commit in the stack (plus two
variants with individual heuristics cherry-picked out) and re-running
the 35-pair hit corpus:

| binary | fixed | corpus time |
|---|---|---|
| baseline | 0/32¹ | 166.0s |
| + patience anchors | 11/32 | 132.5s |
| + forced descent | 11/32 | 135.4s |
| + similarity pairing | 32/32 | 55.3s |
| + unwrap | 32/32 | 52.1s |
| descent alone (no anchors, no pairing) | 0/32 | 153.4s |
| descent + pairing (no anchors) | 32/32 | 54.4s |

¹ 32 unique file pairs from the 35 hits.

Per-file timings (best of 2, warm) make the attribution concrete.
`typing.ml` and `slow.rs` never hit the graph limit — they show the
pairing heuristic also speeds up ordinary large diffs:

| file | baseline | +anchors | +descent | +pairing | +unwrap | final |
|---|---|---|---|---|---|---|
| helloworld.c (rename) | 4314ms | 257ms | 262ms | 259ms | 257ms | 264ms |
| locale_zh-CN.json | 3833ms | 38ms | 38ms | 36ms | 36ms | 37ms |
| web.go | 5996ms | 6634ms | 6712ms | 450ms | 463ms | 465ms |
| modus-themes.el | 7481ms | 7458ms | 7003ms | 517ms | 547ms | 563ms |
| master_report.json | 7784ms | 8383ms | 4552ms | 36ms | 35ms | 35ms |
| slow_1.rs (no limit hit) | 1333ms | 1471ms | 1480ms | 204ms | 201ms | 197ms |
| typing_1.ml (no limit hit) | 834ms | 845ms | 884ms | 556ms | 557ms | 565ms |

And at repo level, redict's 200 commits (2,333 file diffs):

| binary | hits | total time |
|---|---|---|
| baseline | 9 | 207s |
| + patience anchors | 2 | 162s |
| + descent + pairing | 0 | 132s |
| final (all heuristics) | 0 | 130s |

Notable:

- **Similarity pairing is the workhorse**: descent + pairing without
  the anchors heuristic still fixes all 32 pairs, and pairing is the
  step where web.go, modus-themes.el and master_report.json collapse
  from seconds to milliseconds. It even speeds up files that never
  hit the limit (slow_1.rs 1.3s → 0.2s with identical output),
  because sections in the 1M–3M vertex range get decomposed instead
  of searched.
- **Forced descent fixes nothing by itself** (0/32 alone, and adds
  nothing on top of anchors), but it is the *enabler*: pairing without
  a way to descend into a paired 1v1 list can't reach nested changes,
  so the two heuristics are only useful together.
- **Patience anchors fix a meaningful subset alone** (11/32: the
  record-file and comment-anchored rename cases, e.g. helloworld.c
  4.3s → 0.26s and the locale JSON 3.8s → 38ms) and carry the two
  sample-file quality improvements (strings.el, css.css), which
  pairing does not affect.
- **The safety heuristics are free at the default limit**: best-so-far
  changes no timing outside its trigger condition (130s vs 132s repo
  time is noise).
- **Unwrap added nothing once vote-based pairing landed**: zero
  additional fixes, timing within noise. It was dropped from the final
  patch series on complexity grounds.

## 7. The remaining ideas, implemented and compared

Each idea from the earlier draft of this report was implemented and
measured. Two were kept; two were implemented, measured, and dropped —
each heuristic increases implementation complexity and makes
difftastic's behaviour around performance cliffs harder to reason
about, so a measured win on the corpus was the bar for keeping one.

### 7a. Per-section fallback (kept, then superseded by 7b)

`main.rs` previously abandoned the whole file when *any* section
exceeded the limit. Now only the failing section degrades and the
rest of the file keeps its structural diff. The "exceeded
DFT_GRAPH_LIMIT" text fallback no longer exists; the limit is a
per-section work bound.

### 7b. Best-so-far routes (kept, supersedes 7a's marking)

The direct `too_expensive` analogue: when Dijkstra exceeds the limit,
keep the route to the visited vertex that consumed the most input at
the lowest cost (`num_after` gives remaining input for free), and mark
only the remainder of the section novel. `mark_syntax` can no longer
fail, and the `ExceededGraphLimit` plumbing is gone.

Measured with a reduced `--graph-limit` to force degradation, the
partial route consistently recovers more matched content than marking
the whole section novel (e.g. 10,594 vs 10,664 changed spans on a
heavily-rewritten file at `--graph-limit 100000`; 2,016 vs 2,091 on a
renamed C file at 2,000). The margin is modest because the section
decomposition already handles the easy cases — this is the safety net
for what remains. At the default limit, output is byte-identical on
all 32 corpus pairs and the sample suite.

### 7c. Discarding wholly-novel nodes (dropped)

The `discard_confusing_lines` analogue: in an oversized section, a
node whose subtree shares no content ID at all with the other side is
marked novel upfront and dropped. On real code it never fires (any
shared keyword like `return` keeps a node), and it changed nothing on
the 32-pair corpus. Its one demonstrated win — replacing a
1,200-entry data file wholesale drops from 2.3s of graph search to
51ms — is bounded by 7b anyway: worst case the search burns the graph
limit once and still degrades gracefully. 81 lines of maintenance
(and a subtle interaction with `ReplacedComment` word-diffing of
large comments) wasn't worth a case the safety net already covers, so
it was dropped from the final patch series.

Similarly, the *unwrap* step from §4b was dropped: it fixed the two
hard veloren rewrites when pairing used a coarser O(k·m) similarity
test, but once vote-based pairing landed it contributed zero fixes
and noise-level timing, while speculatively marking delimiters novel
— the most surprising behaviour of the decomposition trio.

### 7d. Histogram-style rare anchors (rejected before committing)

Extending the anchor rule from "unique on both sides" to "occurs ≤4
times on each side" was implemented (plumbing a `content_count`
through `SyntaxInfo`) and measured:

- fixes nothing further (everything already passes),
- breaks the ambiguity guard: with `(repeated)` twice on one side and
  once on the other, the LCS picks an arbitrary occurrence to anchor,
  which is exactly what patience diff's uniqueness requirement avoids,
- regresses two sample outputs, e.g. in `elm_1.elm` a rare anchor
  forces an alignment that turns a clean `y : Int` → `x : Int`
  word-level rename into whole novel lines.

The uniqueness requirement is doing real work; rarity is not a
substitute. Not committed.

## 8. Further ideas (not implemented)

- **Restart-from-best**: 7b keeps the best partial route and marks the
  rest novel; the full GNU diff analogue would *restart* the search
  from the best vertex, repeatedly, chaining partial routes until the
  input is consumed. Bounded work per restart, and the tail of the
  section gets a real diff instead of novel marks. Requires carrying
  the vertex's delimiter stack into a fresh search, which is invasive
  but mechanical.
- **Line-diff fallback within a section**: instead of marking a failed
  section novel, run the line-oriented diff on just that section's
  span for finer-grained output.

## Appendix: reproduction

```
# corpus run, per repo
GIT_EXTERNAL_DIFF=<wrapper calling difft and grepping for the fallback> \
  git log --ext-diff --no-merges -p -200
# inspect one failure
DFT_LOG=info difft old.c new.c 2>&1 >/dev/null | grep -B1 'Reached graph'
```
