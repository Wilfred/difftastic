# tree-sitter-rust

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-rust.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-rust)
[![Build status](https://ci.appveyor.com/api/projects/status/q57l49j9ancaw0fs/branch/master?svg=true)](https://ci.appveyor.com/project/maxbrunsfeld/tree-sitter-rust/branch/master)

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

* **Token tree parsing** - The content of a macro definition or macro invocation is treated by the Rust parser as a [*token tree*](https://github.com/steveklabnik/trpl/blob/master/advanced-macros.md) - a sequence of tokens with no structure except for the matching of the delimiters `()`, `[]`, and `{}`. In practice though, many arguments to macros are valid rust expressions or declarations. For code analysis tasks like syntax highlighting, it's useful to understand the structure of this code.

  `Tree-sitter-rust`  attempts to parse the contents of token trees as expressions and declarations, falling back to unstructured token sequences if it can't find a structured interpretation. Because of Tree-sitter's efficient ambiguity handling, this additional parsing adds only a small performance cost.

## References

* [The Rust Grammar Reference](https://doc.rust-lang.org/grammar.html) - The grammar reference provides chapters that formally define the language grammar.
* [The Rust Reference](https://doc.rust-lang.org/reference/) - While Rust does not have a specification, the reference tries to describe its working in detail. It tends to be out of date.
* [Syntax Index](https://doc.rust-lang.org/book/first-edition/syntax-index.html) - This appendix from The Book contains examples of all syntax in Rust cross-referenced with the section of The Book that describes it.
