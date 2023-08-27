# A Typst tree-sitter grammar for syntax highlighting in Helix and Neovim editors

Typst doesn't have yet an official tree-sitter grammar. This grammar is work-in-progress. It is the first time I write a Tree-Sitter grammar. There are so many things I don't understand about Tree-Sitter. I have been refactoring the code several time after unlocking some understanding about this tool.

The two following alternative projects should be mentioned:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. As I said before, this is the first time I am dealing with tree-sitter, and up until know it has been a pain in the moon.

I hope to solve the following failing tests (201, 202, 203, 204 and 205). If you can make one of them pass, I'd be happy to accept your pull request !

My grammar suffers from handling manually comments and white spaces (not using extras). I have different ideas for improving on this:
- Make a operator which consist of a comment or space followed by an expression.
- Or, make spaces and comments as extras and protect function calls with `token.immediate`.

## FIXME

- [X] ~Multiline vs singleline expressions~
- [X] ~Comments before operators~
- [ ] Test 201: Spaces break parsing in code mode
- [ ] Test 202: Spaces break parsing in math mode
- [ ] Test 203: Import and include have expression as file path
- [ ] Test 204: Idents in math mode can't contain `_`
- [ ] Test 205: Comments and spaces in `not in` between the `not` and the `in`

## TODO

- [ ] Math mode
  - [ ] Expr
  - [ ] Symbol
  - [ ] Code
- [ ] Unicode characters
  - [X] `ident` and `label` (unicode property `XID`)
  - [ ] White spaces
- [ ] Increase by an order of magnitude the number of tests

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
