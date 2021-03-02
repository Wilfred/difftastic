# tree-sitter-haskell

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-haskell.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-haskell)

Haskell grammar for [tree-sitter].

# References

* [Haskell 2010 Language Report – Syntax References](ref)
* [GHC Language Extensions](ext)

# Bugs

Preprocessor `#elif` and `#else` directives cannot be handled correctly, since the parser state would have to be
manually reset to what it was at the `#if`.
As a workaround, the code blocks in the alternative branches are parsed as part of the directives.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[ref]: https://www.haskell.org/onlinereport/haskell2010/haskellch10.html
[ext]: https://downloads.haskell.org/~ghc/latest/docs/html/users_guide/exts/table.html
