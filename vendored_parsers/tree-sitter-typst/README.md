# A TreeSitter grammar for the Typst language

Typst official page https://typst.app

TreeSitter documentation page https://tree-sitter.github.io

Typst doesn't have yet an official TreeSitter grammar. This grammar is complete but may contains bug as it is very recent.

## Get involved

Your help is welcome. You don't have to know anything about tree-sitter to help. We need you to find bugs!

Find a bug by using this grammar. If you find an incorrect highlighting of your Typst files, then you found a bug. You can open an issue or simply send me by mail the Typst code causing the bug. See below installation instructions for this grammar. Even if your not sure it is a bug, it doesn't hurt to repport it.

Any inconsistancy between this syntax and Typst's one is considered a bug. In Helix editor, the syntax tree of selected text can be displayed with `:tree-sitter-subtree` command.

Don't hesitate to contact me: eddie.gerbais-nief@proton.me

The documentation of this implementation is available in [DOC](DOC.md). Because parsing Typst is really tricky. It would also be great to have a competitor parser, to see if the other finds better ways, and for redunduncy, because as of today, only one person understand how this parser works (me), and if I'm out, this parser won't be maintained (I guess). If your interresting in implementing a competitor Typst tree-sitter parser, I'd be happy to help you.

## TODO

- [X] Update 0.11
  - [X] Hangul script doesn't form words
  - [X] Context operator
  - [X] No line comment inside block comment
- [ ] More tests, objectif 1000, current 430
- [X] Installation
  - [X] Helix
  - [X] Emacs
  - [X] NeoVim
- [ ] Simplification
  - [ ] Implement a type 3/4 parser generator (work in progress)
  - [ ] Migrate all lexing to external scanner
  - [ ] Remove dependency on `get_column`
    - [ ] Check if this fixes [`fixme/011`](corpus/fixme.scm)

## Features

- [X] Markup mode
- [X] Code mode
- [X] Math mode
- [X] Indentation
- [X] Foldable sections
- [X] Unicode characters

# Installation

Having syntax highlighting is great but having syntax highlighting and the language server is even greater. If you have `cargo` installed (Rust's package manager), you can install Typst language server with the following command (you don't have to be in any particular directory):

```sh
cargo install --git https://github.com/nvarner/typst-lsp typst-lsp
```

## Neovim

The https://github.com/nvim-treesitter/nvim-treesitter provides this grammar.

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

The next release of Helix will support Typst. Waiting until then, you can add support for Typst with the following instructions:

1. Locate the configuration directory:

- Global `/usr/share/helix`
- Local `~/.config/helix`


2. Append the following configuration to the `languages.toml` file (create it if it doesn't exist).

```toml
[language-server.typst-lsp]
command = "typst-lsp"

[[language]]
name = "typst"
scope = "source.typst"
file-types = ["typst", "typ"]
indent = { tab-width = 2, unit = "  " }
comment-token = "//"
injection-regex = "typ(st)?"
roots = ["typst.toml"]
language-servers = [ "typst-lsp" ]

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
config.toml
languages.toml
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
