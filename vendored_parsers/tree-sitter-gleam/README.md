tree-sitter-gleam
=================

A [tree-sitter] grammar for the [Gleam programming language]

[tree-sitter]: https://tree-sitter.github.io
[Gleam programming language]: https://gleam.run

This grammar is able to parse the entire Gleam language. It is largely based
on the Gleam parser itself, and deviations from that are noted throughout the
codebase.

Usage
-----

tree-sitter-gleam, as with all tree-sitter grammars, is of limited utility on
its own. Instead, tree-sitter-gleam is best used as a Gleam parser that can be
embedded in other projects. An example of such a project is
[tree-sitter-gleam-rust-example].

However, [tree-sitter-cli] can be used with this grammar to show generated parse
trees and syntax highlighting for a given Gleam file.

1. [Install tree-sitter-cli]
2. Create a `tree-sitters` directory in your home directory.
3. Clone this repository (or symlink it) into the new `~/tree-sitters/` directory.
4. Run `tree-sitter parse path/to/file.gleam` to be shown the parse tree for the
   file.
5. Run `tree-sitter highlight path/to/file.gleam` to be shown the file with
   syntax highlighting applied.

[tree-sitter-gleam-rust-example]: https://github.com/J3RN/tree-sitter-gleam-rust-example
[tree-sitter-cli]: https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md
[Install tree-sitter-cli]: https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md#installation

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
- `constant_field_access` :: Recognizes when a reference to a remote function is used as a constant's value. Generally field accesses are indistinguishable from remote function invocations by the parser so `field_access` is the node name used for both (hence this misnomer).

This is not a comprehensive list. If you find a node confusing, search for it
in `grammar.js`, as it might have an explanatory comment. Either way, feel free
to add it to this list and send a PR! ✨

To-do List
----------

- [x] Add ability to parse all language constructs
- [x] Syntax highlighting queries
- [ ] Have an issue? Let me know! Please [open an issue] 💁

[open an issue]: https://github.com/J3RN/tree-sitter-gleam/issues/new

Contributing
------------

1. Change files such as `grammar.js` and `queries/highlight.scm`.
2. The grammar needs to be generated from the `grammar.js` file by running `npm run generate`.
3. Add parser feature tests to the relevant file(s) in `test/corpus/`, or make a new one.
4. Run `npm run test` and fix any failing tests.

Policies
--------

### Backwards-Compatibility Policy

Per the conversation in [#55](https://github.com/gleam-lang/tree-sitter-gleam/pull/55), we have decided that from v0.28.0 forward, tree-sitter-gleam will maintain backwards compatibility with the previous two minor versions; meaning that each release will support three versions:
- 0.x.0
- 0.x-1.*
- 0.x-2.*

e.g. The v0.30.0 release of tree-sitter gleam will support the following version of the Gleam language:
- v0.30.0
- v0.29.*
- v0.28.*

Style
-----

To prevent headaches from stylistic differences, I request that you please
follow these style suggestions. 🙏

- Remove all non-mandatory trailing whitespace.
- Ensure a final newline is present at the end of all files (this is the default
  in Vim, Emacs).
- Format JavaScript by running `npm run format`.
