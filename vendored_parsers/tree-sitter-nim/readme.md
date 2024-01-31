<!--
SPDX-FileCopyrightText: None

SPDX-License-Identifier: CC0-1.0
-->

# Tree sitter grammar for Nim

A [tree-sitter] grammar for [Nim].

The goal is to parse a superset of Nim and create a syntax tree that can be
easily ingested by tools.

## Notes

Generating this parser take around 7GiB of memory. Any help in reducing
the parser size is appreciated.

## Progress

Right now the parser is capable of parsing all of Nim, with exceptions for old
and mostly unused/dead syntax, including:

- Package-level objects (ie. `type X.Y = ref Z`)

- Variable declaration with dots for "partial" objects (ie. `let x.y = z`).

- Covariance in generics for imported types (ie. `type X[out T] = Z`).

These were omitted due as they are a product of old language experiments that
never caught on, and omitting them allows for simpler and more compact parser,
but support might be added on request.

The parser correctness has not been thoroughly tested.

## Stability

Node names and structures are not expected to change between releases.

## License

The project is licensed under the [Mozilla Public License version 2.0][MPL]

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[Nim]: https://github.com/nim-lang/Nim
[MPL]: https://www.mozilla.org/en-US/MPL/2.0/
