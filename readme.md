<!--
SPDX-FileCopyrightText: None

SPDX-License-Identifier: CC0-1.0
-->

# Tree sitter grammar for Nim

A [tree-sitter] grammar for [Nim].

The goal is to parse a superset of Nim and create a syntax tree that can be
easily ingested by tools.

## Notes

Unlike other tree-sitter grammars, this repository does not contain a generated
parser. This is due to the parser being 118MiB in size as of writing, which
exceeded GitHub's 100MiB limit.

Generating this parser does take around 7GiB of memory. Any help in reducing
the parser size is appreciated.

## Progress

Right now the parser is capable of parsing most of Nim, but some "advanced"
constructs are not supported due to size limitation.

The parser correctness has not been thoroughly tested.

## Stability

Right now the parser is in early development. Node names and structures are expected
to change drastically between releases.

## License

The project is licensed under the [Mozilla Public License version 2.0][MPL]

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[Nim]: https://github.com/nim-lang/Nim
[MPL]: https://www.mozilla.org/en-US/MPL/2.0/
