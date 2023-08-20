# A Typst tree-sitter grammar for syntax highlighting in Helix and Neovim editors

Typst doesn't have yet an official tree-sitter grammar. This grammar is work-in-progress. It is the first time I write a Tree-Sitter grammar. There are so many things I don't understand about Tree-Sitter. I have been refactoring the code several time after unlocking some understanding about this tool.

The two following alternative projects should be mentioned:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. As I said before, this is the first time I am dealing with tree-sitter, and up until know it has been a pain in the moon.

## FIXME

- [ ] Multiline vs singleline expressions
- [ ] Comments befor operators

Those two problems are the priority. No other work should be done before fixing them.

The branch `experimental` contains work that fixes both problems, but introduces new problems, particularly in transition from inlined code to markup, like in `#a._ b _`.

## TODO

- [ ] Scanner for indent and dedent.
- [ ] All remaining markups like `@` reference, `-` lists, and others...
- [ ] Math mode.
- [ ] Check Typst specification about `ident` and `label` character classes like `XID_Start` and `XID_Continue`.
- [ ] Increase by an order of magnitude the number of tests

## Particularity

I am making heavy use of token precedence, which is explained in the tree sitter documentation. Because, there are ambiguity between markup token and code token, it is tricky to get tokenisation right.
