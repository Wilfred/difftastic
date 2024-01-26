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

- [ ] More tests, objectif 1000, current 409
- [ ] Documentation
  - [ ] Installation
    - [X] Helix
    - [X] Emacs
    - [ ] NeoVim (work in progress)
  - [X] Implementation
- [X] Update 0.10
- [X] Fixme
- [X] Optimization
  - [X] Parser size
  - [X] Math ident
  - [X] Extras

## DONE

- [X] Code
- [X] Indentation
- [X] Foldable sections
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

Having syntax highlighting is great but having syntax highlighting and the language server is even greater. If you have `cargo` installed (Rust's package manager), you can install Typst language server with the following command (you don't have to be in any particular directory):

```sh
cargo install --git https://github.com/nvarner/typst-lsp typst-lsp
```

## Neovim

The following fork adds Typst to the supported language of Neovim TreeSitter plugin:

https://github.com/Nagefire/nvim-treesitter/tree/feat/typst

It will lead to a future pull-request. At the moment, you can have a look to the diff and apply them to your config.

## Emacs

Typst support for Emacs is available through the following package:

[typst-ts-mode](https://git.sr.ht/~meow_king/typst-ts-mode)

```scheme
(use-package typst-ts-mode
  :elpaca (:type git :host sourcehut :repo "meow_king/typst-ts-mode")
  :custom
  (typst-ts-mode-watch-options "--open"))
```

## Helix

1. Locate the configuration directory:

- Global `/usr/share/helix`
- Local `~/.config/helix`


2. Append the following configuration to the `languages.toml` file.

```toml
[[language]]
name = "typst"
scope = "source.typst"
file-types = ["typst", "typ"]
indent = { tab-width = 2, unit = "  " }
comment-token = "//"
injection-regex = "typ(st)?"
roots = ["typst.toml"]

[language.auto-pairs]
'(' = ')'
'{' = '}'
'[' = ']'
'$' = '$'
'"' = '"'

[[grammar]]
name = "typst"
source.git = "https://github.com/uben0/tree-sitter-typst"
source.rev = "master"
```

3. Copy the content of the `queries` directory (`highlights.scm` and `injections.scm`) inside your corresponding `runtime/queries/typst` directory. You should have the following structure:

```
runtime
└── queries
    └── typst
        ├── highlights.scm
        └── injections.scm
```

4. And finally execute (you don't have to be in any particular directory):

```sh
hx --grammar fetch
hx --grammar build
```

The fetch command will clone the git repository, and the build command will compile the grammar.
