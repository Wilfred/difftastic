# tree-sitter-haskell

[![Test the grammar](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/test.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-haskell/actions/workflows/test.yml)

Haskell grammar for [tree-sitter].

# References

* [Haskell 2010 Language Report – Syntax References](ref)
* [GHC Language Extensions](ext)

# Bugs

## CPP

Preprocessor `#elif` and `#else` directives cannot be handled correctly, since the parser state would have to be
manually reset to what it was at the `#if`.
As a workaround, the code blocks in the alternative branches are parsed as part of the directives.

## Layout

`NondecreasingIndentation` is not supported (yet?).

### Operators on newlines in `do`

A strange edge case is when an infix operator follows an expression statement of a do block with an indent of less or equal the `do`'s layout column:

```haskell
f = do
  readSomething
  >>= doSomething
```

The `>>=` causes the `do`'s layout to be terminated, resulting in an AST similar to

```haskell
f = (do readSomething) >>= doSomething
```

This is checked heuristically, probably unreliably.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[ref]: https://www.haskell.org/onlinereport/haskell2010/haskellch10.html
[ext]: https://downloads.haskell.org/~ghc/latest/docs/html/users_guide/exts/table.html
