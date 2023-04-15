# tree-sitter-fsharp
tree-sitter grammar for F# (still WIP)
Based on [the 4.1 F# language specification](https://fsharp.org/specs/language-spec/4.1/FSharpSpec-4.1-latest.pdf) (Mostly, Appendix A)
and the [F# compiler parser](https://github.com/dotnet/fsharp/blob/main/src/Compiler/pars.fsy)

## Getting started

First, run `npm install` to install the `tree-sitter cli`.
Next, the grammar can be build using `npm run build`, or used to parse a file with `npm run parse $file`

### Project structure
The parser consists of two parts:
- `src/scanner.cc` is responsible for parsing newlines and comments and keeps track of indentation to open and close scopes.
- `grammar.js` the main tree-sitter grammar. The indent tokens from the external scanner is access though the `$.virtual_open_section` and `virtual_end_section` tokens.

The grammar starts with the `file` node at the begging of the rules.

### Adding to neovim
#### From the local copy:
```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.fsharp = {
  install_info = {
    url = "path/to/tree-sitter-fsharp",
    files = {"src/scanner.cc", "src/parser.c" }
  },
  filetype = "fsharp",
}
```
#### From GitHub repository:
```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.fsharp = {
  install_info = {
    url = "https://github.com/Nsidorenco/tree-sitter-fsharp",
    branch = "develop",
    files = {"src/scanner.cc", "src/parser.c" },
    generate_requires_npm = true,
    requires_generate_from_grammar = true
  },
  filetype = "fsharp",
}
```

Then run `:TSInstallFromGrammar fsharp` inside Nvim.
## Status
The grammar currently has support for most language features, but might have rough edges.
Some parts, like the type annotations are still very bare-bones.

The grammar supports indentation-based scoping but does not fully support offside indentation and opening new indentation levels on record/list construction.

The precedence rules for the different grammar nodes (and particularly expressions) are not set properly yet, which means that the parser size is much larger than needed.

### Missing
- [ ] Computational expressions
- [ ] Type annotations
- [x] Annotations
- [ ] Offside tokens inside indentation scope
- [ ] Testing
- [ ] Set properly precedence rules

## Testing
### Testing corpus
To run all tests stores in `corpus/` run

```sh
$ npm test
```

### Test parsing a specific file
```
$ npm run debug $file
```

## How to contribute
Clone the repo and start playing around with it.
If you find a code example which fails to parse, please reduce it to a minimal example, such that it can be added to the corpus as a test case.

PRs fleshing out the grammar or fixing bugs are very welcome!
