# A TreeSitter grammar for the Typst language

Typst official page https://typst.app

TreeSitter documentation page https://tree-sitter.github.io

Typst doesn't have yet an official TreeSitter grammar. This grammar is work-in-progress but is already quite complete.

Two other TreeSitter grammars for Typst are in development:

- https://github.com/frozolotl/tree-sitter-typst
- https://github.com/SeniorMars/tree-sitter-typst

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. This is the first time I am dealing with tree-sitter, and up until know it has been quite a challenge.

Participate by:
- Indicating improvements to this grammar.
- Finding solution for the bugs corresponding to failing tests.
- Finding new bug and send corresponding test

Failing tests are found in [`corpus/fixme.scm`](https://github.com/uben0/tree-sitter-typst/blob/master/corpus/fixme.scm).

Don't hesitate to contact me: eddie.gerbais-nief@proton.me

## FIXME

- [ ] Test `E06`: Inlined return followed by text ([here](https://github.com/uben0/tree-sitter-typst/blob/master/corpus/fixme.scm#L2C10-L2C10))
- [X] ~Test `E09`: Indentation and comments~
- [X] ~Test `E01`: Group termination in math~
- [X] ~Test `E02`: Import precedence over list~
- [X] ~Test `E08`: Condition if set statement~
- [X] ~Test `E07`: Trailing comments before `else`~
- [X] ~Test `E03`: Spaces in method notation~
- [X] ~Test `E04`: Leading space not recognized~
- [X] ~Test `E05`: Inlined code absorbs new line~
- [X] ~Reduce parser size~

Failing tests are found in [`corpus/fixme.scm`](https://github.com/uben0/tree-sitter-typst/blob/master/corpus/fixme.scm).

### Optimization with extras

When searching ways to optimize the parser and simplify the grammar, I thought about using the *extras* feature for spaces and comments. I don't know if it will significantly reduce parser size, but I want to try it to see. The only problem arises with function calls and, in inline code, field access. They must be directly joined (no space nor comment in between). The use of the *immediate* feature won't solve the problem as it only takes in acount inline regex (which would be ok with spaces but not comments, as they have to appear in output tree).

The solution is to rely on external scanner when parsing spaces or comments. If a space or comment is followed by `'['`, `'('` or `'.'`, it sets a flag to `false` (this flag is stored in scanner's state).

This way when a token has to be immediate, an external token can be required and will only match if flag is `true`. Another external token is necessary to reset the flag to `true`, because the flag is set to `false` every time a space or comment is followed by `'['`, `'('` or `'.'`, and we need to reset it when the immediateness is not required and when it is detected in text mode.

Spaces and comments must have precedence over two marker tokens (`required` and `reset`).

- [ ] Space and comments as externals
- [ ] Detection of non-immediate tokens
- [ ] `require` and `reset` token
- [ ] Enable extras
- [ ] Remove explicit extras

A diffictult case arises with `$ .hello()$`, where flag will be set to `false` on `'.'`, but has to be reset to `true` with `'hello'`, otherwise, the `'('` won't be considered immediate.

### Inlined `return`

An inlined `return` statement, for some obscur reasons, is allowed to be followed by text and markup on the same line. So, the following code is valid Typst code: `#return a + b Hello World`

To have it correctly recognized by the grammar, the termination token of a statement must be optional. But this modification forces the parser to detect by himself where an expression ends, when followed by text or markup. This result in a huge parser size inscrease of +600%.

At the moment, I chose performance over correctness due to the very unlikelyhood of a return statement to be followed by text or markup. Finding a solution to have both performance and correctness would be truly awesome.

I open a thread on Typst's github discussion [#2103](https://github.com/typst/typst/discussions/2103), and an issue [#2104](https://github.com/typst/typst/issues/2104)

## TODO

- [ ] More tests, objectif 1000, current 321
- [ ] Optimization
  - [X] Parser size
  - [ ] Benchmark
  - [X] Math ident

- [X] ~Use the unicode database to implement a test based on binary search to find math identifier.~

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

To generate this grammar from source, the `tree-sitter` command line tool is required. Installation instructions are available here https://github.com/tree-sitter/tree-sitter/tree/master/cli. Then, generate the grammar with `tree-sitter generate`. To "generate" the grammar means the tool will generate C source as `parser.c` from `grammar.js`.

The already generated grammar is available here https://github.com/uben0/tree-sitter-typst/releases/download/v0.7.0-beta.1/tree-sitter-typst.tar.xz. You will only need a C compiler.

## Helix

Locate the installation directory:

- Global `/usr/share/helix`
- Local `/.config/helix`

Copy the content of the `queries` directory inside your corresponding `runtime/queries/typst` directory. This will provide hightlight indications.

Append the following configuration to the `languages.toml` file. And indicate the path to this grammar. This will make the text editor able to recognized the Typst source files and offer the desired functionalities.

```toml
[[language]]
name = "typst"
scope = "source.typst"
file-types = ["typst", "typ"]
indent = { tab-width = 2, unit = "  " }
comment-token = "//"
injection-regex = "typ(st)?"

[language.auto-pairs]
'(' = ')'
'{' = '}'
'[' = ']'
'$' = '$'
'"' = '"'

[[grammar]]
name = "typst"
source = { path = "path/to/the/tree-sitter's/grammar" }
```

And finally execute:
```sh
tree-sitter generate
hx --grammar fetch
hx --grammar build
```

If you downloaded the already generated grammar, the `tree-sitter generate` step is unecessary. If syntax highlighting doesn't work, you may open Helix's log file with the `:log-open` command and obtain helpful error message.