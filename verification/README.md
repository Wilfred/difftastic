# Supporting invariants in difftastic

This investigation covers four components independently of syntax-graph search.

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
