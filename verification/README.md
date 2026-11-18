# Supporting invariants in difftastic

This investigation covers four components independently of syntax-graph search.

| Component | Claim under investigation |
| --- | --- |
| Conflict parsing | Valid documents recover left and right payloads and conflict count. Compare acceptance with ordered merge and diff3 marker grammar. |
| Gap compaction | Preserve each column in order and every existing paired row. Compaction is idempotent and emits no empty row for valid input. |
| JSON highlights | Both endpoints are ordered UTF-8 boundaries on the indicated source line. The slice recovers content and prefix edits shift the changed word by their byte length. |
| Word splitting | Both tokenizations partition the source into nonempty tokens. Splitting ASCII digits refines coarse tokens. The bounded splitter succeeds exactly at and above the token count. |

The Rust conflict parser accepts an opening marker followed by left text and a closing marker without a separator. Whether this permissiveness is desirable is an open design question.
