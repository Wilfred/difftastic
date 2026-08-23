# Graph limit / splitting heuristics: accumulated learnings

Handoff notes from a long investigation session. Context: difftastic's
Dijkstra graph search explores O(L×R) vertices for a section of L and R
nodes per side, capped by `DFT_GRAPH_LIMIT` (3M). Sections that the
unchanged-trimming pipeline fails to shrink below ~1,700 nodes/side can
exceed the cap. This document records what we measured, what we built,
what we rejected, and why — so a fresh session can continue without
re-deriving it.

## 1. Where the limit gets hit (corpus study)

Method: run `difft` as `GIT_EXTERNAL_DIFF` over ~200 recent non-merge
commits per repo, log per-file outcomes, save pairs that fall back with
"exceeded DFT_GRAPH_LIMIT".

| repo | languages | file diffs | fallbacks (upstream master at the time) |
|---|---|---|---|
| redict (Redis fork) | C | 2,333 | 9 |
| forgejo (Gitea fork) | Go | 1,322 | 8 |
| veloren | Rust | 1,229 | 9 |
| gitlab-foss | Ruby/JS/JSON | 16,295 | 8 |
| emacs | C, Elisp | 371 | 1 |
| mesa | C/C++ | 454 | 0 |
| pmbootstrap | Python | 507 | 0 |

~0.15% of file diffs, but clustered on exactly the commits where a
structural diff matters most. Failure categories (each observed in the
wild):

1. **Mechanical renames** touching every top-level node (redict's
   `s/RedisModule/RedictModule/`): nothing is exactly unchanged, no
   split points. Anchors that do exist are single unchanged *comments*
   between changed functions — matched runs of length 1.
2. **Record files** (locale JSON, config stanzas, test-runtime maps):
   thousands of tiny records, edits sprinkled or dense. Unchanged
   records individually below any per-node threshold.
3. **One giant changed list** (forgejo's 1,500-line `registerRoutes`,
   emacs' `modus-themes.el` defconst): needs recursive descent, not
   sibling splitting.
4. **Several large changed siblings** (veloren animation code): no
   exact matches at all; needs similarity pairing.
5. **Code wrapped in a new block + edited**: nesting change defeats
   sibling-level splitting.

Benefit profile by repo type: repos doing large mechanical refactors
(forks mid-rename: redict), repos with big generated/registration
files (forgejo route tables), repos with large data/translation files
(gitlab-foss, forgejo locales), repos with huge homogeneous record
files. Repos with small hand-edited commits (mesa, pmbootstrap) see
no fallbacks and must see **zero output change** — that's the key
regression constraint throughout.

## 2. The two implementations

### 2a. `claude/graph-limit-heuristics` (earlier, more machinery)

Commit-per-heuristic branch, all verified: patience anchors with a
two-pass guard; forced descent into oversized same-delimiter 1v1
sections; **similarity pairing** (GumTree-style: both-sides-unique
subtrees vote for list pairings, LIS keeps them non-crossing) — the
workhorse, fixes *all* corpus fallbacks including the
no-exact-matches category; per-section fallback; best-so-far routes
(GNU diff `too_expensive` analogue — on limit, keep the route to the
vertex that consumed the most input, mark only the rest novel; the
graph limit stops being a behaviour cliff). Results: 0 fallbacks on
the corpus, ~30–50% repo scan speedups, byte-identical output on 605
differential file diffs except previously-falling-back files.

### 2b. This branch (`claude/patience-style-fixes`, on top of WIP 5)

Wilfred's simpler architecture: one mechanism — LCS over siblings,
accumulate **runs** of consecutive matches, commit a run as a split
point if it qualifies, merge non-qualifying runs back into the
changed stream, recurse into single changed lists
(`split_changed_singleton_list`). The commits here fix/extend it:

- `9473e3d`: qualification = absolute run mass **or** contains a
  unique-on-both-sides node (≥3-byte atoms only); final flush routed
  through singleton descent; empty-region guard; removed the
  proportional `PATIENCE_RATIO`.
- `da5080c`: **two-pass big-first matching** — pass 1 gives tiny
  nodes unmatchable keys `(side, node.id())` so only nodes ≥
  `TINY_TREE_THRESHOLD` (10) can match and claim the alignment; tiny
  nodes match in pass 2 within the gaps between big matches. Then
  `RUN_MASS_THRESHOLD` dropped 64 → 32 (pair-counted; 16/side).

State: all tests green, sample suite churn = exactly two files, both
improvements (css_1.css: unchanged `.bar` recognised instead of fake
`.foo1`→`.bar` rename; strings_1.el: identical strings matched across
a re-sort). `compare.expected` updated accordingly. redict 200-commit
scan: **2 fallbacks (master: 9), 155s (master: ~207s)**.

## 3. The load-bearing insights

**Count vs mass.** The LCS maximises match *count* with every sibling
weighted 1; the graph search and human judgement weigh *mass*. All
observed quality hazards are count/mass disagreements at crossings:
(a) a moved tiny unique node ties with one big sibling it crossed
(tie-break decides; observed picking the tiny node → big sibling shown
removed-and-re-added); (b) k≥2 matches of repeated tiny content
outvote a big node outright (repetition hazard: wrong-group-survives,
fake renames of unrelated siblings). The fully principled fix is a
mass-weighted LCS (heaviest common subsequence) — not implemented;
`lcs_diff` is plain LCS. The two-pass big-first is a cheap
lexicographic approximation with one known inverse failure: a big node
moved across many preserved tiny siblings sacrifices the tinies
(rarer, and displays as a readable "block moved").

**Trust criteria compose; none suffices alone.**
- *Run mass* (contiguity evidence): covers repetitive content with
  long unchanged runs. Alone, fails on isolated anchors.
- *Uniqueness* (identity evidence, patience diff): covers isolated
  single-node anchors (rename category — comments between changed
  functions; record files with unique keys). Alone, fails on
  identical repeated records. Guard: atoms ≥ 3 bytes, else unique
  punctuation in small files anchors (`comma_and_comment_1.js`).
- *Big-first priority* (structural): prevents tiny matches from
  defining boundaries that cross big matches, at any record size.
  Bounds the residual hazard class to all-tiny conflicts, whose
  damage is capped by `TINY_TREE_THRESHOLD` itself.

**Absolute vs proportional thresholds.** A run's trustworthiness does
not scale with file size; the evidence available (run length, set by
record sizes and edit density) doesn't either. Proportional
(`PATIENCE_RATIO = 0.2`) made splitting *stricter than the old
per-node rule* on real files and measured worse than master (13 vs 9
fallbacks). Effort budgets may scale (GNU diff's `too_expensive`
~√N); evidence bars should not (patience/histogram anchors are
absolute).

**Threshold calibration data** (pair-counted mass; halve for
per-side). Without two-pass: repetition hazard bad zone ends at ~2
repeated records' mass (≤12 for 6-node records, ≤48 for 12-node —
unbounded in record size). Coverage cliffs: identical-record file
with edit every 30 records needs ≤ ~232; edit every 5 needs ≤ ~40.
On 150 real redict pairs: byte-identical output and flat runtime at
*every* value 4→640 — the knob only matters on pathological files.
With two-pass: hazard capped at all-tiny scale, ≥16 suffices
empirically; 32 chosen (covers dense-identical records that 64
abandoned: 4s fallback → ~120ms). `DFT_RUN_THRESHOLD` env overrides
for experiments.

**Commitment vs protection decouple.** A big matched node that
doesn't clear the run-mass bar isn't lost: it merges into the gap and
either re-matches in pass 2 or reaches the graph, which prefers mass
anyway. Pass 1's job is only to stop tiny matches *sectioning* across
big ones; correctness never depends on committing.

**Sections are walls.** Anything split into different sections can
never be matched across by the graph. This is why: never emit a tiny
matched run as its own section (WIP 1's bug — resurrects the comma
pathology as boundaries); resolve runs *before* pushing the
run-ending node (WIP 3's ordering bug paired content from opposite
sides of an anchor — worst case displayed a genuinely reordered file
as "No syntactic changes", a check-only correctness bug); route
*every* changed-region flush through the singleton descent or a
fully-changed file never descends (1.6s → 36ms on a nested case).

**Pipeline invariant to watch:** the run accumulator logic assumes
sections never *end* with a matched pair (guaranteed today because
`shrink_unchanged_at_ends` runs first). WIP 1 silently dropped a
trailing run because of a check-after-drain bug that this invariant
masked. Nothing asserts it.

## 4. Rejected approaches (with evidence — do not re-try naively)

- **Histogram-style rare anchors** (content occurring ≤4×/side as
  anchor): fixes nothing extra, breaks the ambiguity guard test,
  byte-identical regression to a known-bad elm output (whole novel
  lines instead of a word-level rename). Uniqueness is doing real
  work; rarity is not a substitute.
- **Proportional threshold**: see above.
- **Unwrap** (single list on one side → mark delimiters novel, diff
  children against other side): zero fixes and noise-level timing
  once vote-based pairing existed; most surprising behaviour of the
  set. Dropped from the other branch.
- **Wholly-novel discard** (`discard_confusing_lines` analogue —
  drop nodes sharing no content with the other side): never fires on
  real code (any shared keyword keeps a node); its one win
  (wholesale data-file replacement) is bounded by graceful
  degradation anyway. Dropped.
- **Splitting at every matched run regardless of size** (WIP 1):
  26/109 sample outputs changed; two byte-identical to previously
  rejected experiments.

## 5. What still isn't covered on this branch

- **No-exact-match files**: redict `tests/modules/misc.c` and
  `propagate.c` still fall back — every sibling edited, anchors too
  sparse even for uniqueness. Fixed on the other branch by
  similarity pairing (~250 lines: index unique content ids per RHS
  list, vote, LIS). This is the next capability tier if 0 fallbacks
  is the goal.
- **Graceful degradation**: this branch still does whole-file text
  fallback when any section exceeds the limit. The other branch
  removes the cliff (per-section novel marking, then best-so-far
  partial routes; `ExceededGraphLimit` plumbing deleted). Port is
  independent of the splitting work.
- **Weighted LCS**: would subsume the two-pass and resolve the
  big-node-moved-across-many-tinies inverse case by mass. Requires a
  different DP in `lcs_diff`.
- **Unit nit**: `sum_pair_descendants` counts both sides;
  `RUN_MASS_THRESHOLD` is documented in those units. Halving to
  single-side would read better.
- Dead code from the WIP remains (`split_unchanged_toplevel`), one
  compiler warning; the per-section `info!` in
  `split_unchanged_patience` fires a lot.

## 6. Reproduction kit

Benchmarks lived in an ephemeral scratchpad; regenerate:

```bash
# corpus repos (Codeberg/GitLab reachable; github.com clones may be blocked)
git clone --depth 400 --single-branch https://codeberg.org/redict/redict

# extract real file pairs / scan for fallbacks via GIT_EXTERNAL_DIFF
# wrapper pattern: run difft, grep output for 'exceeded DFT_GRAPH_LIMIT',
# copy $2 (old) and $5 (new) to save a pair
GIT_EXTERNAL_DIFF=wrapper.sh git log --ext-diff --no-merges -p -200

# see section sizes / limit hits
DFT_LOG=info difft old new 2>&1 >/dev/null | grep -E 'Patience|Reached'

# sample regression (expected-hash workflow)
sample_files/compare_all.sh   # cp compare.result compare.expected if intended
```

Synthetic stress generators (elisp, `parse` + graph behave as in the
measurements):

```python
# stanzas: identical records cycling 3 forms, edit every 30th
forms = ['(opt-a value-1 t nil)', '(opt-b value-2 nil t)', '(opt-c value-3 t t)']
old = [forms[i % 3] for i in range(1500)]
new = [x for x in old]; 
for i in range(25, 1500, 30): new[i] = f'(changed-{i} novel-value-{i} nil nil)'
# dense variant: edit every 5th (coverage cliff probe)
# unique variant: records f'(key-{i} value-{i})' (uniqueness rescues at any threshold)

# repetition hazard (count-vs-mass LCS trap): wrong branch wins on count
i = '(it aa)'
H2 = '(header-two alpha beta gamma delta epsilon zeta eta theta)'   # 9 desc = tiny!
old = ['(header-one x y)'] + [i]*8 + [H2] + [i]*4
new = [H2] + [i]*6
# group3 variant: make H2 ~30 atoms -> non-tiny -> two-pass protects it

# moved unique node (tie case)
old = ['(big-a one two three four five six seven eight nine ten eleven)',
       '(marker-u special)', '(big-b ... twelve)']
new = [old[1], old[0], old[2]]

# nested worst case: container head renamed + first/last children changed
# (defeats end-shrinking; exercises singleton descent)
```

Verification bar used throughout: full `cargo test`; `compare_all.sh`
(only intended changes); hazard cases graph-identical vs
`DFT_RUN_THRESHOLD=1000000000` reference; corpus drift vs that
reference (expect 0 on real pairs); redict 200-commit scan fallback
count + time.

## 7. Cross-references

- Patience diff: unique-in-both lines → LIS → anchors → recurse;
  uniqueness = can't-be-wrong-occurrence. Histogram: rarest-common
  anchor, ≤64 occurrences. GNU diff: `find_identical_ends`,
  equivalence classes, `discard_confusing_lines`, `too_expensive`
  ("give up and report halfway between our best results so far").
  GumTree: top-down isomorphic matching (≈ `content_id`), bottom-up
  container similarity (≈ pairing), ordered vs unordered being the
  key difference (difftastic must stay ordered → LIS everywhere,
  no move detection).
- Full earlier writeup with benchmark tables:
  `graph_limit_investigation.md` on `claude/difftastic-graph-limit-r5irm0`.
