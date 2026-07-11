# AGENTS.md

Guidance for AI coding agents working in the difftastic repository.
Humans should start with [`CONTRIBUTING.md`](CONTRIBUTING.md) and the
[contributing guide](https://difftastic.wilfred.me.uk/contributing.html).

## What difftastic is

Difftastic is a structural diff tool that compares files based on their
syntax (using tree-sitter parsers) rather than line-by-line. It's a Rust
binary crate; the installed binary is called `difft`.

## Build and run

- Build: `cargo build` (debug) or `cargo build --release`. Debug builds
  diff much more slowly, so use `--release` for anything non-trivial.
- The Rust toolchain is pinned in `rust-toolchain.toml` (currently
  1.85.0) and rustup selects it automatically — don't assume the latest
  stable.
- Run on two files: `cargo run -- FILE1 FILE2`.
- Debug logging: `DFT_LOG=debug cargo run -- FILE1 FILE2`.
- `just --list` shows the canonical developer commands (the `justfile`
  is the task runner).

## Checks to run before finishing (all enforced by CI)

- **Format:** `cargo fmt --all` (CI runs `cargo fmt --all -- --check`).
- **Tests:** `cargo test` and `cargo test -- --ignored` (the latter
  needs the system MIME database).
- **Spelling:** `typos` (allow-list is in `.typos.toml`).
- **Output regression:** `just compare` (or
  `./sample_files/compare_all.sh`). This diffs every pair in
  `sample_files/` and compares the result against
  `sample_files/compare.expected`. If you change diff output
  intentionally, regenerate it with
  `cp sample_files/compare.result sample_files/compare.expected` and
  commit the result.

## Repository layout

- `src/main.rs` — entry point and CLI.
- `src/options.rs` — command-line options.
- `src/parse/` — parsing. Key files:
  - `tree_sitter_parser.rs` — per-language tree-sitter configuration.
  - `guess_language.rs` — language detection (extension, shebang, etc.).
- `src/diff/` — the diffing algorithm (graph search / Dijkstra).
- `src/display/` — rendering diffs to the terminal.
- `vendored_parsers/` — tree-sitter parsers vendored into the repo. Most
  parsers come from crates.io; vendoring is a last resort.
- `sample_files/` — output-regression fixtures (see above).
- `manual/` — the mdbook manual (user-facing docs and the full
  contributing guide, under `manual/src/`).

## Adding language support

Follow [Adding A
Parser](https://difftastic.wilfred.me.uk/adding_a_parser.html)
(`manual/src/adding_a_parser.md`): add the crate to `Cargo.toml`,
configure `src/parse/tree_sitter_parser.rs` and
`src/parse/guess_language.rs`, add `sample_files/` fixtures, then update
`sample_files/compare.expected`.

## Conventions

- Match the style of surrounding code; `cargo fmt` is authoritative
  (`imports_granularity = "module"`, see `.rustfmt.toml`).
- Add a `CHANGELOG.md` entry for user-visible changes.
- Documentation lives in the mdbook manual under `manual/src/`; update
  it when behaviour changes.
