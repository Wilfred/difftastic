tree-sitter-gleam
=================

A [tree-sitter] grammar for the [Gleam programming language]

[tree-sitter]: http://tree-sitter.github.io
[Gleam programming language]: https://gleam.run

This grammar is able to parse the entire Gleam language. It is largely based
on the Gleam parser itself, and deviations from that are noted throughout the
codebase.

Various Gotchas
---------------

There are a few nodes in the generated AST that may be confusing at first:
- `type` :: A very ambiguous name, but this refers to a concrete type such as
  `List(#(String, Int))`
- `type_name` :: Refers to essentially the left side of a type declaration, and
  includes parameters, e.g. `MyType(foo, bar)`.
- `type_identifier` :: Known in the parser as "UpName", this is what you would
  intuitively think of as a type's name, such as `List` or `Result`.

This is not a comprehensive list. If you find a node confusing, search for it
in `grammar.js`, as it might have an explanatory comment. Either way, feel free
to add it to this list and send a PR! ✨

## DONE

- [x] Parsing
  - [x] Add ability to parse all language constructs

## TODO

- [ ] Parsing
  - [ ] Verify the generated ASTs for consistency, usability
- [ ] Testing
  - [ ] Add more error case tests
- [ ] Queries
  - [ ] Syntax highlighting queries
