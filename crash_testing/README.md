# Crash testing

Artifacts from a crash-testing pass over difftastic: reproducers for the
distinct crashes found, plus the harness used to find them.

## Contents

- `FINDINGS.md` — the crashes, root causes, and how they were found.
- `reproduce.sh` — runs every reproducer and reports which crash.
- `reproducers/` — minimal (or near-minimal) input pairs, one per crash.
- `harness/` — the tooling:
  - `clone.sh` — clones the 10 well-known repositories used for the
    real-history test.
  - `difft_wrapper.sh` — `GIT_EXTERNAL_DIFF` wrapper that records any input
    pair on which difft panics or aborts.
  - `run_repos.sh` — drives `git log -p --ext-diff` over each repo's history
    through the wrapper.
  - `fuzz.py` / `fuzz2.py` — realistic mutation fuzzers (see FINDINGS.md for
    the mutation catalogue). `fuzz2.py` additionally injects tricky tokens
    (heredocs, multiline-string delimiters, JSX).
  - `minimize.py` — shrinks a crashing input pair while preserving the
    panic signature.

The harness scripts contain absolute paths from the machine they were run
on; they are included as a record of method, not as turnkey scripts.

## Quick start

```sh
cargo build --release
./crash_testing/reproduce.sh
```
