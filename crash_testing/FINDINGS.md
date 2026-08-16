# Difftastic crash testing — findings

Binary tested: **Difftastic 0.71.0** (`d8fe43b`), release build, toolchain 1.85.0.

## Method

**1. Real repositories.** Ran `difft` as `GIT_EXTERNAL_DIFF` over the full
shallow history (`git log -p --ext-diff --no-merges`, depth 150) of 10
well-known repositories spanning C, Rust, Python, Go, JavaScript, TypeScript,
Ruby, Java, C++, and PHP:

> redis, sharkdp/bat, pallets/flask, gin-gonic/gin, expressjs/express,
> microsoft/TypeScript, jekyll, google/gson, nlohmann/json, symfony

A wrapper (`harness/difft_wrapper.sh`) captured any input pair on which difft
panicked (exit ≥ 101) or aborted (fatal signal).

**2. Mutation fuzzing.** Collected ~870 real source files (22 languages) from
those repositories as a corpus and applied edits of the kind that occur in
real version-control circumstances, then diffed original vs. mutant under real
display modes. Mutation catalogue:

- truncation (partial file)
- line insert / delete / duplicate / swap
- whitespace changes (trailing, tabs↔spaces)
- trailing-final-newline changes
- Unicode injection (combining marks, zero-width, RTL override, wide chars, BOM, NUL)
- mixed line endings (CRLF/CR)
- minification (joining many lines into one very long line)
- injecting tricky tokens (heredocs, `"""`/`` ` ``/`r"#"` string delimiters, JSX, `#{}`)

Display modes exercised: side-by-side (default), `--display inline`,
`--display json`, varying `--width` and `--context`, `--ignore-comments`.
**~110,000+ diff executions** across three fuzzing rounds. Crashes were
deduplicated by panic location and minimized with `harness/minimize.py`.

## Result on real repository history

**No crashes** were observed diffing real commit history at default settings.
Difftastic is robust on ordinary real-world diffs; every crash below required a
specific content pattern that the mutation fuzzer had to construct.

## Distinct crashes

All reproduce at **default settings** unless noted. `exit 101` is a Rust
panic; `exit 134` is a fatal `abort`. Run `./reproduce.sh` to confirm.

### 1. Stack overflow on deeply-nested syntax — `abort` (exit 134)

- **Cause:** difftastic traverses the syntax tree recursively with no depth
  limit. It reproduces even under `--dump-ts`, so the unbounded recursion is
  in difft's own tree walk, not in tree-sitter's parser.
- **Trigger:** a file whose *valid* parse is deeply nested — long method
  chains, long operator chains, minified code. Threshold ≈ 6k–12k nesting
  levels (language-dependent). (Deeply nested *invalid* bracket soup does not
  trigger it, because tree-sitter error-recovers to a shallow tree.)
- **Real circumstances:** diffing minified JS/CSS, generated code, or fluent
  builder / method-chain code (`x.f().f().f()…`).
- **Reproducer:** `reproducers/deepchain_{a,b}.js` — `x` + `.f()`×12000.

### 2. Index out of bounds in `side_by_side::print` — panic (exit 101)

- **Where:** `src/display/side_by_side.rs:710` (`rhs_lines[…]`) and its twin
  `:700` (`lhs_lines[…]`).
- **Cause:** lines 544–548 pop a trailing empty line from `lhs_lines` /
  `rhs_lines`, but a `MatchedPos` line number from the parser can still
  reference the popped index, so `rhs_lines[rhs_line_num.as_usize()]` panics
  with `index out of bounds: the len is N but the index is N`.
- **Trigger:** a Ruby heredoc combined with a difference in the final-newline
  state of the two sides.
- **Real circumstances:** editing the body of a Ruby heredoc when the two
  file versions differ in whether they end with a trailing newline — a very
  common situation across editors and tooling.
- **Reproducers:**
  - `reproducers/heredoc_wellformed_{a,b}.rb` — a *well-formed* squiggly
    heredoc (`q = <<~SQL / SELECT 1 / SQL`) where one side lacks the final
    newline. → `:700`.
  - `reproducers/heredoc_rhs_{a,b}.rb` (`<<Y\n">\n\n` vs `<<L\n">`) → `:710`.
  - `reproducers/heredoc_lhs_{a,b}.rb` → `:700`.

### 3. `unreachable!` matched-position invariant — panic (exit 101)

- **Where:** `src/display/hunks.rs:518` — *"every LHS Unchanged MatchedPos
  should have a corresponding RHS Unchanged MatchedPos"*.
- **Trigger:** asymmetric JSX/TSX where matched positions on one side lack a
  partner on the other.
- **Real circumstances:** editing JSX/TSX markup (mid-edit fragments).
- **Reproducer:** `reproducers/jsx_{a,b}.tsx`
  (`<>hi hi hi!\n </;<{}"</>` vs `<C b="">\nhi hi hi!</;`).

### 4. `expect()` in hunk line lookup — panic (exit 101), requires `--context 0`

- **Where:** `src/display/hunks.rs:667` — *"Hunk lines should be present in
  matched lines"* (`start_i` / `end_i` come back `None`).
- **Trigger:** certain diffs when context is zero (`--context 0` /
  `DFT_CONTEXT=0`, a documented option). Does not reproduce at the default
  context of 3.
- **Reproducer:** `reproducers/context0_hunk_{a,b}.py` run with `--context 0`.

## Summary

| # | Panic site | Kind | Default settings? | Root cause |
|---|-----------|------|-------------------|-----------|
| 1 | abort (stack overflow) | recursion | yes | unbounded syntax-tree recursion |
| 2 | side_by_side.rs:700 / :710 | index OOB | yes | trailing-empty-line pop desyncs line numbers |
| 3 | hunks.rs:518 | `unreachable!` | yes | matched-position pairing invariant |
| 4 | hunks.rs:667 | `expect()` | needs `--context 0` | hunk line lookup returns None |

**4 distinct root causes across 5 distinct panic locations.** Three of the
four occur at default settings; none surfaced on ~1000 real commits, all were
found by mutation-fuzzing realistic edits.
