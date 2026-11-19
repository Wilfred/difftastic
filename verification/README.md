# Lean invariant checks for difftastic

## Issues that look worth fixing

1. **Conflict parsing loses shared source text in genuine Git output.** An underline of seven equals signs before the conflict disappears on both sides, and common prose disappears on the left. Restrict separator transitions to an active conflict. [Git-generated witness](#git-generated-conflict-projections)
2. **Check-only JSON hides actual changes.** A changed file is labeled unchanged even when the same process exits 1 for changes. Directory output with `--skip-unchanged` can omit the changed file entirely. Derive check-only status from the computed change summary. [Status matrix](#check-only-status)
3. **Nested slider adjustment leaves stale partners.** A list can point at a novel delimiter while its new partner points back from elsewhere. Update both directions when moving a match. [Minimal example](#a-slider-counterexample)
4. **A missing side can admit an unchanged row to a JSON chunk.** The filter substitutes line zero for an absent side. Check membership only for sides present in the row. [Prefix experiment](#missing-sides-and-line-zero)
5. **JSON chunks reorder aligned rows.** A right-only row can precede an earlier paired row when serialized. Preserve alignment order when collecting chunk rows. [CLI reproduction](#json-chunk-order)
6. **Conflict parsing accepts a missing separator.** A closed conflict with no separator passes the CLI's positive-count check. Decide whether malformed input should be rejected before presenting an empty right side. [Parser evidence](#results)

## Supporting checks

| Component | Claim under investigation |
| --- | --- |
| Conflict parsing | Valid documents recover left and right payloads and conflict count. Compare acceptance with ordered merge and diff3 marker grammar. |
| Gap compaction | Preserve each column in order and every existing paired row. Compaction is idempotent and emits no empty row for valid input. |
| JSON highlights | Both endpoints are ordered UTF-8 boundaries on the indicated source line. The slice recovers content and prefix edits shift the changed word by their byte length. |
| Word splitting | Both tokenizations partition the source into nonempty tokens. Splitting ASCII digits refines coarse tokens. The bounded splitter succeeds exactly at and above the token count. |

The Rust conflict parser accepts an opening marker followed by left text and a closing marker without a separator. Whether this permissiveness is desirable is an open design question.

Run `python verification/run.py` with Rust, Cargo, elan and Lean 4.35.0.
The harness builds the branch's release CLI and compiles private Rust functions
into a temporary probe. Gap labels use integers because the function only copies
them. The probe protocol reserves punctuation outside the generated alphabets.

The gap checker enumerates all 364 strings of left, right, and paired rows
through length five with unique labels. Its independent specification zips
single-sided runs between paired anchors. It compares the first and second
Rust compactions to this same expected output. The word checker covers all
259 strings through length three over six representative characters and every
limit from zero through input length plus one. It compares both Rust functions
to Lean's maximal-run specification, including reconstruction of the input.
These are bounded differential checks.

## Results

| Area | Evidence | What we learned |
| --- | --- | --- |
| Gap compaction | Lean proves `expectedRows_projections` for arbitrary input length and pending columns. The Rust helper agrees with the complete expected arrangement, including paired anchors, on all 364 layouts. Applying the Rust helper twice also agrees. | Splitting at paired anchors makes the specification simple. Projecting the zipped runs recovers each source column even when their lengths differ. The no-empty-row claim assumes valid inputs. The Rust catch-all arm passes an input empty row through. |
| Word splitting | Lean proves `tokens_reconstruct` and `tokens_nonempty` for both modes on arbitrary character lists. The bounded Rust comparison checks reconstruction, nonemptiness, digit refinement and the exact success threshold. | A non-ASCII decimal digit can belong to a word while an adjacent ASCII digit starts a new fine token. The model's character-class table covers the generated alphabet. Extending correspondence to all Unicode would require matching Rust's classification. |
| Conflict parsing | Rust recovered both projections and count on all 144 two-conflict documents, including empty sides, optional empty or populated bases, shared CRLF text and an unterminated final line. On all 781 streams of up to four marker/text events, every strict-grammar document was accepted. Rust also accepted 188 streams outside the grammar. | Acceptance alone does not establish a well-formed merge conflict. The missing-separator example also passes the caller's positive-count check. The 188 count describes the helper and includes inputs the caller rejects for zero conflicts. |
| JSON highlights | Lean invoked the freshly built CLI for six plain-text diffs with ASCII, accented, CJK, tab, combining-sequence and emoji prefixes. On each side it checked the line number, every emitted range and its decoded bytes, and the independently predicted range of the edited word. | In this corpus the offsets follow UTF-8 bytes. Moving the edit past a tab shifts it by one byte. The check allows other highlights on the same line. |

The universal theorems cover the independent Lean specifications. Agreement
with production Rust is bounded by the corpora above. The JSON cases exercise
the plain-text path. The conflict grammar operates on marker classes and uses
unambiguous payloads; handling marker-looking payload lines is still open.

## Structural pipeline

The test-only exporter in `structural_probe.rs` captures occurrence IDs at the end of
preprocessing, the forests delegated to each search, each chosen
edge, shallow matches before and after both slider passes, and hunk membership.
`Structural.lean` checks both map directions and compares sorted occurrence
multisets to detect both dropped and duplicated work. Its search oracle walks
balanced token streams and keeps the exact closing-token positions for every
paired delimiter. This allows edge replay and minimum-cost search without
using Rust's vertex equality or predecessor links.

### A slider counterexample

Compare Emacs Lisp `(a a)` with `((a))`. Before slider adjustment, the left
list (occurrence 1) and the right outer list (4) point to one another.
Afterwards, 1 still points to 4, 4 is novel, and the right inner list (5)
points to 1. The same result occurs with preprocessing enabled and bypassed.
The nested slider helper moves the classification from the outer list to the
inner list while retaining the old target in the opposite-side map. The
position-generation code subsequently reads this target when constructing
opposite delimiter positions. This example establishes inconsistent partner
metadata; its two right delimiters lie on the same line.

Lean proves that reciprocity implies injectivity of the directed partner
lookup. Each successful route replay also produces a Lean witness of a
legal model execution from the initial cursor to exhaustion with the reported
cost. The minimum-cost comparison is an executable full-history search over
the observed section, using the same parsed forests and content IDs as Rust.
The corpus uses atoms, subtree matches and delimiters. Replacement edges for
strings and comments require an additional model rule.

### Structural results

The exporter ran 658 input/mode combinations. It diffed all ordered pairs of
18 small Emacs Lisp forests and targeted multi-hunk and trailing-comma cases,
each with preprocessing enabled and bypassed. Counts below include both modes.

| Invariant | Observation |
| --- | --- |
| Preprocessing partitions occurrences | On both sides of every input, the multiset of delegated occurrence IDs exactly equalled the unclassified IDs. An outer list and its children are counted individually. |
| Completed change maps classify every occurrence | All 658 inputs had full coverage both before and after slider adjustment. The Python array cases exercised ignored trailing punctuation. |
| Unchanged partners are reciprocal and compatible | All pre-slider maps passed. After sliding, 104 maps failed reciprocity, 52 in each mode. All partners retained compatible atom content IDs or matching opening and closing delimiters. |
| Deep unchanged edges match descendants | All 699 equal-node edges passed the preorder partner comparison, omitting explicitly ignored punctuation. The 225 shallow delimiter matches permit changed children. |
| The chosen route is realizable in one full delimiter history | All 639 section traces replayed to exhaustion with the observed cursor IDs, edge kinds and costs. |
| Coarse vertex reuse preserves the minimum cost on these inputs | All 639 costs equalled the independently searched minimum. In 220 sections the two-history cap was reached. In 62, an incoming stack compared equal to the first stored stack and unequal to the second by Rust's own comparison, yet the allocator returned the second. The observed final routes still passed. |
| Hunk rows are ordered, in bounds, and cover their designated novel lines | Both extracted rows and the aligned window used by the JSON path passed for all 622 hunks, including two multi-hunk runs. |

### JSON chunk order

Compare a left file containing `(a a)` with the following right file, ending
both files with a newline.

```elisp
(
 (a)
)
```

With `--display json`, projecting the right column of `aligned_lines` yields
`[0, 1, 2, 3]`. Projecting the right column of the single serialized chunk
yields **`[1, 2, 0]`**. The indices are zero-based. The JSON writer collects
rows in a BTreeMap keyed by the pair of optional line numbers. Right-only
rows sort ahead of rows with a left line number. A consumer iterating the
chunk thus sees line 0 last. The harness checks this separately from internal
alignment; whether the JSON format should guarantee source order is a format
decision.

Run `python verification/run.py` for the supporting checks, structural export,
Lean replay and JSON witness. The structural checker reports known
post-slider reciprocity failures and fails the run on other structural
invariant violations. The CLI probe reports the observed chunk order.

## Additional CLI and Git experiments

Run `python verification/run.py --published-only` to reproduce these checks
with Lean, the release CLI, Git, and the Rust conflict parser. The full runner
includes them too. Known counterexamples are printed. Unexpected control
results fail the run.

### Git-generated conflict projections

The base, left and right files have this common prefix, followed by one line
containing respectively `BASE`, `LEFT`, or `RIGHT`.

    Title
    =======
    common paragraph

A blank line follows the paragraph.

Git's `merge-file -p` reports one conflict and preserves the heading and
paragraph above the opening marker. Because each branch edits the same single
line, projecting Git's output must recover each original file exactly.
Instead the Rust parser returns `"Title\nLEFT\n"` on the left and
`"Title\ncommon paragraph\n\nRIGHT\n"` on the right. It recognizes a separator
by prefix before checking its current state, so the shared underline switches
it into the right-side state. This failure precedes the actual conflict.

Lean compared both projections and the count for eight Git outputs. Six
failed across merge and diff3 styles with `=======`, `========`, and
`======= heading`. Both six-equals controls passed. The original synthetic
round-trip corpus explicitly excluded marker-looking payloads.

### Check-only status

With `--display json --exit-code`, compare full and check-only output for nine
file pairs. Six changes spanning Lisp and plain text gave exit code 1 in both
modes. Full output reported the expected changed, created or deleted status;
check-only labeled all six unchanged. The three controls (identical Lisp,
formatting-only Lisp, identical text) gave unchanged and exit 0 in both modes.

For a directory containing just `edit.el` changed from `a` to `b`, adding
`--check-only` to `--display json --skip-unchanged --exit-code` changes the
result from a one-file array to `[]` while retaining exit code 1. The check-only
path records the syntactic-change decision and skips position generation.
The JSON converter infers unchanged from the resulting empty hunk list.

### Missing sides and line zero

In the [multiline JSON example](#json-chunk-order), the right-only row for
line 1 has no highlights on either side. Prepending `same\n` to both files
removes that row after adjusting for the line-number shift. The rows carrying
highlights remain identical after adjustment. Lean checked both input
directions with zero, one and two common prefix lines. Only the original
direction without a prefix emitted a completely empty change row.

The JSON row filter tests whether either side has a novel line, substituting
line 0 for a missing side. An unrelated edit on line 0 therefore admits
this row. Lean also proves that a membership test on an optional line is
invariant under a common offset when the novelty predicate shifts with it.
This finding concerns row membership independently of serialization order.

## GitHub issue experiments

I screened 160 recent open and closed issues and read six reports in detail.
The following cases give independent expected results for a CLI comparison.

- A file's presence in either directory determines whether it was created or deleted, including zero-byte files. Filtering unchanged files should preserve every changed path. [Open issue 1027](https://github.com/Wilfred/difftastic/issues/1027)
- Static words around Kotlin interpolation and commands inside a Dockerfile heredoc should remain observable in both edit directions. A JavaScript or TypeScript template deletion also gives a stricter test of which lines carry highlights. [Closed issue 860](https://github.com/Wilfred/difftastic/issues/860), [closed issue 1060](https://github.com/Wilfred/difftastic/issues/1060), [open issue 911](https://github.com/Wilfred/difftastic/issues/911)
- Optional trailing commas should preserve equality in TOML arrays. A comma that changes a Python scalar into a tuple provides the opposite control. [Closed issue 1002](https://github.com/Wilfred/difftastic/issues/1002), [closed issue 958](https://github.com/Wilfred/difftastic/issues/958)
