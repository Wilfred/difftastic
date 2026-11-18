# Lean invariant checks for difftastic

## Issues that look worth fixing

1. **Nested slider adjustment leaves stale partners.** A list can point at a novel delimiter while its new partner points back from elsewhere. Update both directions when moving a match. [Minimal example](#a-slider-counterexample)
2. **JSON chunks reorder aligned rows.** A right-only row can precede an earlier paired row when serialized. Preserve alignment order when collecting chunk rows. [CLI reproduction](#json-chunk-order)
3. **Conflict parsing accepts a missing separator.** A closed conflict with no separator passes the CLI's positive-count check. Decide whether malformed input should be rejected before presenting an empty right side. [Parser evidence](#results)

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
