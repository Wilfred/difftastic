# A TreeSitter grammar for the Typst language

Typst official page https://typst.app

TreeSitter documentation page https://tree-sitter.github.io

Typst doesn't have yet an official TreeSitter grammar. This grammar is work-in-progress but is already quite complete.

Two other TreeSitter grammars for Typst are in development:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. This is the first time I am dealing with tree-sitter, and up until know it has been quite a challenge as TreeSitter is not the more clear nor predictable tool.

Participate by:
- Indicating improvements to this grammar.
- Finding solution for the bugs corresponding to failing tests.
- Finding new bug and send corresponding test

Failing test are found in `corpus/fixme.scm`.

Don't esitate to contact me: eddie.gerbais-nief@proton.me

## FIXME

- [ ] Test `E01`: Group termination in math
- [ ] Test `E02`: Import looses precedence to list with `,`
- [X] ~Test `E04`: Leading space not recognized~
- [X] ~Test `E05`: Inlined code absorbs new line~

Failing test are found in `corpus/fixme.scm`.

## TODO

- [ ] More tests 264/1000 (current/objectif)
- [ ] Optimization
  - [ ] Benchmark
  - [ ] Math ident

- Investigate the behavior of `lexer->get_column`, because it seems to backtrack the lexer's cursor, which could be very interesting to simplify the indent-dedent mechnism.

- Use the unicode database to implement a test based on binary search to find math identifier.

## DONE

- [X] Code
- [X] Indentation
- [X] Comments
- [X] Math mode
  - [X] Precedence
  - [X] Call
    - [X] Tagged
    - [X] Separator
  - [X] Symbol
  - [X] Code
- [X] Markups
  - [X] Strong
  - [X] Emph
  - [X] Heading
  - [X] Url
  - [X] List
  - [X] Label
  - [X] Reference
  - [X] Symbol
  - [X] Quote
- [X] Unicode characters
  - [X] Ident and label
  - [X] White spaces
  - [X] Math ident
  - [X] Anti markup

# Installation

To build this grammar from source, the `tree-sitter` command line tool is required. Installation instructions are available here https://github.com/tree-sitter/tree-sitter/tree/master/cli

## Helix


