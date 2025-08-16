# tree-sitter-commonlisp

[![CI][ci]](https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-commonlisp)
[![crates][crates]](https://crates.io/crates/tree-sitter-commonlisp)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-commonlisp)

WIP. Goal is to have a better syntax highlighting for Neovim
and some semantic refactoring https://github.com/nvim-treesitter/nvim-treesitter-refactor/.

All praise goes to https://github.com/sogaiu/tree-sitter-clojure which is extended by this grammar.

TODOs:

- support number literals that are different from clojure (e.g. `.9`)

Macros with special respresentation in syntax tree (when written with lowercase letters):

- defun and friends (e.g. defmethod)
- loop macro

This grammar is used in https://github.com/Wilfred/difftastic to generate syntax-ware diffs for Common Lisp.

## Usage

- C/C++
   - compilation run `make` (optional `make install`)
   - Follow the [Guide on using tree-sitter parsers](https://tree-sitter.github.io/tree-sitter/using-parsers/1-getting-started.html#getting-started)
   - set `tree_sitter_commonlisp()` as language on your Tree-Sitter parser from [`tree_sitter_commonlisp.h`](https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/blob/4d2a2247bb0ec117193ef33e3ce546a6781c5bf5/bindings/c/tree-sitter-commonlisp.h#L10-L10)
    ```c
    ts_parser_set_language(parser, tree_sitter_commonlisp());
     ```

- Python (`pip install tree-sitter-commonlisp tree-sitter`)
  https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/blob/4d2a2247bb0ec117193ef33e3ce546a6781c5bf5/bindings/python/tests/test_import.py#L15-L23
- Rust `cargo add tree-sitter tree-sitter-grammars`
  https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/blob/4d2a2247bb0ec117193ef33e3ce546a6781c5bf5/bindings/rust/lib.rs#L47-L50
- Swift
  https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/blob/4d2a2247bb0ec117193ef33e3ce546a6781c5bf5/bindings/swift/TreeSitterCommonlispTests/TreeSitterCommonlispTests.swift#L3-L13
- Go
  https://github.com/tree-sitter-grammars/tree-sitter-commonlisp/blob/4d2a2247bb0ec117193ef33e3ce546a6781c5bf5/bindings/go/binding_test.go#L1-L15

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-commonlisp/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-commonlisp?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-commonlisp?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-commonlisp?logo=pypi&logoColor=ffd242
