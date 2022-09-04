# tree-sitter-rust

[![Build/test](https://github.com/tree-sitter/tree-sitter-rust/actions/workflows/ci.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-rust/actions/workflows/ci.yml)

Rust grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Features

* **Speed** - When initially parsing a file, `tree-sitter-rust` takes around twice as long as Rustc's hand-coded parser.

  ```sh
  $ wc -l examples/ast.rs
    2157 examples/ast.rs

  $ rustc -Z ast-json-noexpand -Z time-passes examples/ast.rs | head -n1
    time: 0.007	parsing # (7 ms)

  $ tree-sitter parse examples/ast.rs --quiet --time
    examples/ast.rs	16 ms
  ```

  But if you *edit* the file after parsing it, this parser can generally *update* the previous existing syntax tree to reflect your edit in less than a millisecond, thanks to Tree-sitter's incremental parsing system.

## References

* [The Rust Grammar Reference](https://doc.rust-lang.org/grammar.html) - The grammar reference provides chapters that formally define the language grammar.
* [The Rust Reference](https://doc.rust-lang.org/reference/) - While Rust does not have a specification, the reference tries to describe its working in detail. It tends to be out of date.
* [Syntax Index](https://doc.rust-lang.org/book/first-edition/syntax-index.html) - This appendix from The Book contains examples of all syntax in Rust cross-referenced with the section of The Book that describes it.
