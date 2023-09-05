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

Don't esitate to contact me: eddie.gerbais-nief@proton.me

## FIXME

- [ ] Reduce parser size
- [ ] Test `E01`: Group termination in math
- [ ] Test `E02`: Import precedence over list
- [ ] Test `E03`: Spaces in method notation
- [X] ~Test `E04`: Leading space not recognized~
- [X] ~Test `E05`: Inlined code absorbs new line~

Failing test are found in `corpus/fixme.scm`.

Test `E03` can't be solved due to strange behavior from the grammar generator and C compiler. When adding the syntax to fix `E03`, either the grammar don't accept any input, or the c compiler is stuck in an infinite loop. My guess is that the generated grammar is too large. The generated `parser.c` have a size around 100M.

The priority is to simplify the grammar to reduce the size of generated parser.

## TODO

- [ ] More tests 264 / 1000 (current / objectif)
- [ ] Optimization
  - [ ] Parser size
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

To generate this grammar from source, the `tree-sitter` command line tool is required. Installation instructions are available here https://github.com/tree-sitter/tree-sitter/tree/master/cli. Then, build the grammar with `tree-sitter generate`.

The already generated grammar is available here https://github.com/uben0/tree-sitter-typst/releases/download/v1.0-beta.0/tree-sitter-typst.tar.xz

The grammar takes around 2 minutes to generate, and around 30 seconds to compile.

## Helix

Locate the installation directory:

- Global `/usr/share/helix`
- Local `/.config/helix`

Copy the `helix/queries/typst` directory inside your corresponding `runtime/queries` directory.

Append the following configuration to the `languages.toml` file. And indicate the path to this grammar.

```toml
[[language]]
name = "typst"
scope = "text.typst"
file-types = ["typst", "typ"]
indent = { tab-width = 2, unit = "  " }
comment-token = "//"
injection-regex = "^typst|typ$"

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

If you downloaded the pre-built grammar, the `tree-sitter generate` step is unecessary.