# A TreeSitter grammar for the Typst language

Typst official page https://typst.app

TreeSitter documentation page https://tree-sitter.github.io

Typst doesn't have yet an official TreeSitter grammar. This grammar is work-in-progress. It is the first time I write a TreeSitter grammar. There are so many things I don't understand about TreeSitter.

There are two equivalent projects that I know of:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. As I said before, this is the first time I am dealing with tree-sitter, and up until know it has been a pain. I hope to receive indications to improve this grammar about things I am doing wrong.

I hope to receive solutions for the following failing tests in `"corpus/fixme.scm"`. If you can make one of them pass, I'd be happy to accept your pull request !

If you find a bug not yet documented in the `fixme.scm`, send it!

My contact: eddie.gerbais-nief@proton.me

## FIXME

- [ ] Test E01: Group termination in math
- [ ] Test E02: Import looses precedence to list with `,`
- [ ] Test E04: Leading space not recognized
- [ ] Test E05: Inlined code absorbs new line

## TODO

- [ ] Unicode characters
  - [X] Ident and label
  - [ ] White spaces
  - [X] Math ident
- [ ] More tests
- [ ] Optimization
  - [ ] Math ident

- Investigate the behavior of `lexer->get_column`, because it seems to backtrack the lexer's cursor, which could be very interesting to simplify the indent-dedent mechnism.

## DONE

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
- [X] Math mode
  - [X] Expr
  - [X] Symbol
  - [X] Code
- [X] Code
- [X] Indentation
- [X] Comments
