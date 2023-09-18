# Implementation documentation

## Tricky Typst

List of tests exposing particular behaviors from Typst

- Test `320`: indent takes in account comments, but redent is done at item, term or heading token.
- Tests `328` and `329`: math function don't work with symbol.
- Test `330`: Comment block don't need closing end.

## FIXME

- [X] ~Test `E10`: Math shorthand and letter can applied~
- [X] ~Test `E09`: Indentation and comments~
- [X] ~Test `E01`: Group termination in math~
- [X] ~Test `E02`: Import precedence over list~
- [X] ~Test `E08`: Condition if set statement~
- [X] ~Test `E07`: Trailing comments before `else`~
- [X] ~Test `E03`: Spaces in method notation~
- [X] ~Test `E04`: Leading space not recognized~
- [X] ~Test `E05`: Inlined code absorbs new line~

Failing tests are found in [`corpus/fixme.scm`](https://github.com/uben0/tree-sitter-typst/blob/master/corpus/fixme.scm).

## Inlined `return`

An inlined `return` statement, for some obscur reasons, is allowed to be followed by text and markup on the same line. So, the following code is valid Typst code: `#return a + b Hello World`

To have it correctly recognized by the grammar, the termination token of a statement must be optional. But this modification forces the parser to detect by himself where an expression ends, when followed by text or markup. This result in a huge parser size inscrease of +600%.

At the moment, I chose performance over correctness due to the very unlikelyhood of a return statement to be followed by text or markup. Finding a solution to have both performance and correctness would be truly awesome.

I open a thread on Typst's github discussion [#2103](https://github.com/typst/typst/discussions/2103), and an issue [#2104](https://github.com/typst/typst/issues/2104)

## Optimization with extras

When searching ways to optimize the parser and simplify the grammar, I thought about using the *extras* feature for spaces and comments (and line breaks as well). At the end, it significantly reduced parser size. The only problem arises with function calls and, in inline code, field access. They must be directly joined (no space nor comment in between). The use of the *immediate* feature won't solve the problem as it only takes in acount inline regex (which would be ok with spaces but not comments, as they have to appear in output tree).

The solution is to rely on external scanner when parsing spaces or comments. Lets call a "pre-immediate" token, a token susceptible to be followed by immediate token. When a pre-immediate token is parsed, it sets a flag to `true`, and when a space or comment is parsed, it resets the flag to `false` (this flag is stored in scanner's state as a boolean).

This way when a token has to be immediate, an external token can be required and will only match if flag is `true`. It means, any pre-immediate token have to be preceded by a token that will set to `true` the flag.