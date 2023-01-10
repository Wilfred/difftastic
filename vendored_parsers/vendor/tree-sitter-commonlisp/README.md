# tree-sitter-commonlisp

WIP. Goal is to have a better syntax highlighting for Neovim
and some semantic refactoring https://github.com/nvim-treesitter/nvim-treesitter-refactor/.

All praise goes to https://github.com/sogaiu/tree-sitter-clojure which is extended by this grammar.

TODOs:

- support number literatls that are different from clojure (e.g. `.9`)

Macros with special respresentation in syntax tree (when written with lowercase letters):

- defun and friends (e.g. defmethod)
- loop macro

This grammar is used in https://github.com/Wilfred/difftastic to generate syntax-ware diffs for Common Lisp.

## Additional Highlighting Support

Install https://github.com/theHamsta/nvim-treesitter-commonlisp to get highlighting of all functions and macros in the `cl` namespace.
