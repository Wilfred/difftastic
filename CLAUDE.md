# Working on difftastic

Rust, pinned to 1.85.0 in `rust-toolchain.toml`. That's also the MSRV,
so don't reach for newer std APIs.

## Don't touch

* `CHANGELOG.md`: only edit it when explicitly asked.
* `vendored_parsers/`: vendored with git subtree, edit upstream instead.
* `difft.1`: generated from `difft.1.md` with `just man`.
* `sample_files/compare.expected`: only update when an output change is
  intended, see below.

## Before committing

* `cargo test`
* `cargo fmt --all`
* `typos`
* `sample_files/compare_all.sh`, then `diff -C2
  sample_files/compare.result sample_files/compare.expected`. Any
  difference is a change in difftastic's output: explain it, and only
  copy `compare.result` over `compare.expected` if it's an improvement.

Prefer `DftHashMap` and `DftHashSet` over the std equivalents, and
measure rather than guess when a change is about performance.

## Commit messages

Write a concise imperative summary line, then a body explaining why the
change is worthwhile. Short, self-explanatory changes don't need a body.

Messages should be timeless: describe the code as it is after the
change. Don't mention the review that prompted it, previous attempts,
or how the work was done.
