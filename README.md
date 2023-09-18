# A TreeSitter grammar for the Typst language

Typst official page https://typst.app

TreeSitter documentation page https://tree-sitter.github.io

Typst doesn't have yet an official TreeSitter grammar. This grammar is complete but may contains bug as it is very recent.

## Participation

I publish this grammar because I hope for help from other involved enthousiasts. You don't have to know anything about tree-sitter to help. I need you to find bugs!

Find a bug by using this grammar. If you find an incorrect highlighting of your Typst files, then you found a bug. You can open an issue or simply send me by mail the Typst code causing the bug. See below installation instructions for this grammar.

Any inconsistance between this syntax and Typst's one is considered a bug. In Helix editor, the syntax tree of selected text can be displayed with `:tree-sitter-subtree` command.

Don't hesitate to contact me: eddie.gerbais-nief@proton.me

The documentation of this implementation is available in [DOC](DOC.md).

## TODO

- [ ] More tests, objectif 1000, current 347
- [ ] Documentation
- [X] Update 0.8.0
- [X] Fixme
- [X] Optimization
  - [X] Parser size
  - [X] Math ident
  - [X] Extras

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
