# tree-sitter-rust

[![CI](https://github.com/tree-sitter/tree-sitter-c/actions/workflows/ci.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-c/actions/workflows/ci.yml)

Rust grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Features

- **Speed** — When initially parsing a file, `tree-sitter-rust` takes around twice
  as long as Rustc's hand-coded parser.

  ```sh
  $ wc -l examples/ast.rs
    2157 examples/ast.rs

  $ rustc -Z ast-json-noexpand -Z time-passes examples/ast.rs | head -n1
    time: 0.007    parsing # (7 ms)

  $ tree-sitter parse examples/ast.rs --quiet --time
    examples/ast.rs    16 ms
  ```

  But if you _edit_ the file after parsing it, this parser can generally _update_
  the previous existing syntax tree to reflect your edit in less than a millisecond,
  thanks to Tree-sitter's incremental parsing system.

## References

- [The Rust Grammar Reference](https://doc.rust-lang.org/grammar.html) — The grammar
  reference provides chapters that formally define the language grammar.
- [The Rust Reference](https://doc.rust-lang.org/reference/) — While Rust does
  not have a specification, the reference tries to describe its working in detail.
  It tends to be out of date.
- [Keywords](https://doc.rust-lang.org/stable/book/appendix-01-keywords.html) and
  [Operators and Symbols](https://doc.rust-lang.org/stable/book/appendix-02-operators.html).
- Archive of the outdated [Syntax Index](https://web.mit.edu/rust-lang_v1.25/arch/amd64_ubuntu1404/share/doc/rust/html/book/first-edition/syntax-index.html)
  that contains examples of all syntax in Rust cross-referenced with the section
  of The Book that describes it.
