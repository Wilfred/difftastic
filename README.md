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

Failing test are found in `corpus/fixme.scm`.

Don't hesitate to contact me: eddie.gerbais-nief@proton.me

## FIXME

- [ ] Test `E01`: Group termination in math
- [ ] Test `E06`: Inlined return statement
- [X] ~Test `E02`: Import precedence over list~
- [X] ~Test `E08`: Condition if set statement~
- [X] ~Test `E07`: Trailing comments before `else`~
- [X] ~Test `E03`: Spaces in method notation~
- [X] ~Test `E04`: Leading space not recognized~
- [X] ~Test `E05`: Inlined code absorbs new line~
- [X] ~Reduce parser size~

Failing test are found in `corpus/fixme.scm`.

## TODO

- [ ] More tests, objectif 1000, current 298
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

Copy the `helix/queries/typst` directory inside your corresponding `runtime/queries` directory. This will provide theming indication to the text editor.

Append the following configuration to the `languages.toml` file. And indicate the path to this grammar. This will make the text editor able to recognized the Typst source files and offer the desired functionalities.

```toml
[[language]]
name = "typst"
scope = "text.typst"
file-types = ["typst", "typ"]
indent = { tab-width = 2, unit = "  " }
comment-token = "//"
injection-regex = "^typ(st)?$"

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