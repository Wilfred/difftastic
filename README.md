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

- support number literatls that are different from clojure (e.g. `.9`)

Macros with special respresentation in syntax tree (when written with lowercase letters):

- defun and friends (e.g. defmethod)
- loop macro

This grammar is used in https://github.com/Wilfred/difftastic to generate syntax-ware diffs for Common Lisp.

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-commonlisp/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-commonlisp?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-commonlisp?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-commonlisp?logo=pypi&logoColor=ffd242
