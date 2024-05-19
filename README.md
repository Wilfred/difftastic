# OpenFOAM grammar for Tree-Sitter

> This project is in early phases of development; expect things to change considerably

> DISCLAIMER:
> This offering is not approved or endorsed by OpenCFD Limited, producer and distributor
> of the OpenFOAM software and owner of the OPENFOAM®  and OpenCFD®  trade marks.

![OpenFOAM dictionary syntax highlighting](syntax-highlighting.png)

This is a generic **fail-tolerant** parser for OpenFOAM case dictionaries.
The goal is to reach a state that is "good enough" for syntax highlighting
and feasible symbols extraction.

## Features

- Semantic understanding of OpenFOAM IO entries (Dictionaries, key-value pairs, ... etc)
- Syntax highlighting (Targeting [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) mainly)
- Highlighting of C++ code blocks and regular expressions, so if your client does not install
  those parsers automatically, you might have to install them manually
- Scope-awareness is there (Per-dictionary) although not used yet
- Text-objects for dictionaries and key-value pairs to use with 
  [TreeSitter textobjects plugin for NeoVim](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
- Text-subjects to use with [TreeSitter textsubjects plugin for NeoVim](https://github.com/RRethy/nvim-treesitter-textsubjects)
- Expression-based folding

## Running tests

- Unit tests for both parsing and highlighting (Highlighting is not consistent between `tree-sitter highlight`
  and `nvim-treesitter`) are executed with `tree-sitter test`
  (Check the `test` folder)
- `testOFFiles.sh $FOAM_TUTORIALS` parses all OpenFOAM dictionaries in the tutorials directory
    - Currently, the parser works on almost all OpenFOAM 8 and Foam-Extend 4 tutorial files
      (Well, some files are faulty from source!)

## Contributing

- Pull requests are welcome!
- And, no I'm not going to support specific keyword highlighting
  (eg. `scalarField` will never be treated in a special way) unless I find an "unattended"
  way to do that.
