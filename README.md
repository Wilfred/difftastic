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
- `type_name` :: Refers to essentially the left side of a type declaration and
  includes parameters, e.g. `MyType(foo, bar)`.
- `type_identifier` :: Known in the parser as "UpName", this is what you would
  intuitively think of as a type's name, such as `List` or `Result`.
- `function_call` :: The name is not confusing, but its structure may be. Since
  Gleam supports first-class functions, the function being invoked could be a
  variable, a field of a record, an element of a tuple, etc. Some of these are
  ambiguous without context that tree-sitter does not have. e.g.
  In `string.replace(x, y, z)`, `string` could be a record with a field
  `replace` that is a function or it could be a module with a function `replace`
  —there's no way for the parser to know. In this case, it will be parsed to
  `(function_call function: (field_access ...) ...)` , as I arbitrarily decided
  to always assume the code is accessing a field on a record.

This is not a comprehensive list. If you find a node confusing, search for it
in `grammar.js`, as it might have an explanatory comment. Either way, feel free
to add it to this list and send a PR! ✨

## DONE

- [x] Add ability to parse all language constructs
- [x] Syntax highlighting queries

## TODO

- [ ] Add more error case tests?
- [ ] Have an issue? Let me know! Please [open an issue](https://github.com/J3RN/tree-sitter-gleam/issues/new) 💁