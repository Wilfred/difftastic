# A TreeSitter grammar for the Typst language

https://typst.app

https://tree-sitter.github.io

Typst doesn't have yet an official tree-sitter grammar. This grammar is work-in-progress. It is the first time I write a TreeSitter grammar. There are so many things I don't understand about TreeSitter.

There are two equivalent projects that I know of:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. As I said before, this is the first time I am dealing with tree-sitter, and up until know it has been a pain. I hope to receive indications to improve this grammar about things I am doing wrong.

I hope to receive solutions for the following failing tests in `"corpus/fixme.scm"`. If you can make one of them pass, I'd be happy to accept your pull request !

My grammar suffers a lot from handling manually comments and white spaces (not using extras). I have different ideas for improving on this:
- Make a operator which consist of a comment or space followed by an expression.
- Or, make use of the *extra* feature along with the `token.immediate`.

## FIXME

- [X] ~Multiline vs singleline expressions~
- [X] ~Comments before operators~
- [ ] Test E01: Group termination
- [ ] Test E02: Spaces break parsing in code mode
- [ ] Test E03: Spaces break parsing in math mode
- [ ] Test E04: Import and include have expression as file path
- [ ] Test E05: Idents in math mode can't contain `_`
- [ ] Test E06: Comments and spaces in `not in` between the `not` and the `in`

## TODO

- [ ] Math mode
  - [X] Expr
  - [X] Symbol
  - [X] Code
- [ ] Unicode characters
  - [X] `ident` and `label`
  - [ ] White spaces
  - [ ] math `ident`
- [ ] More tests

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
- [X] Code
- [X] Indentation
- [X] Comments
