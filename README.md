tree-sitter-gleam
=================

A [tree-sitter] grammar for the [Gleam programming language]

[tree-sitter]: http://tree-sitter.github.io
[Gleam programming language]: https://gleam.run

This grammar is able to parse the entire Gleam language. It is largely based
on the Gleam parser itself, and deviations from that are noted throughout the
codebase.

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
