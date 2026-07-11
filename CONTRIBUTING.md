# Contributing to Difftastic

Thanks for your interest in contributing to difftastic!

The full contributing guide lives in the manual:
**<https://difftastic.wilfred.me.uk/contributing.html>**
(source: [`manual/src/contributing.md`](manual/src/contributing.md)).

## Quick start

Install Rust with [rustup](https://rustup.rs/) — the correct toolchain
version is pinned in `rust-toolchain.toml`, so rustup selects it
automatically. Then clone and build:

```
$ git clone https://github.com/Wilfred/difftastic.git
$ cd difftastic
$ cargo build --release
```

Debug builds diff much more slowly than release builds, so use
`--release` for anything non-trivial.

Difftastic uses a [`justfile`](https://github.com/casey/just) for common
tasks. Run `just --list` to see them.

## Before you open a pull request

CI checks more than `cargo test`, so run these locally first:

- `cargo fmt --all` — formatting
- `cargo test` and `cargo test -- --ignored` — tests
- `typos` — spelling ([typos-cli](https://github.com/crate-ci/typos))
- `just compare` — output regression test

See the [full guide](https://difftastic.wilfred.me.uk/contributing.html)
for details, and [Adding A
Parser](https://difftastic.wilfred.me.uk/adding_a_parser.html) if you
want to add support for a new language.
