# tree-sitter-tact

<center>
  <img src=".github/BANNER.png" alt="Tree-sitter + Tact = tree-sitter-tact"/>
</center>

A fully-featured 🌳 [Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for the ⚡ Tact contract programming language:

- 🍰 Parses whole Tact grammar as defined in [grammar.ohm](https://github.com/tact-lang/tact/blob/main/src/grammar/grammar.ohm) (with performance and usability in mind).
- 🎨 Provides highlighting, scoping and tagging [queries](#-structure).
- ⚙ Test-covered (including queries), reflects latest Tact language updates.
- 🚀 See guidelines on usage and integration in editors supporting Tree-sitter [below](#-usage).

## 🚀 Usage

### Neovim

Installation assumes you're using [`lazy.nvim`](https://github.com/folke/lazy.nvim) as a plugin manager:

<details>
<summary>Instructions</summary>

1. Clone the repo to any convenient place: `git clone https://github.com/tact-lang/tree-sitter-tact ~/.local/git/tree-sitter-tact` (`~/.local/git` is exemplary, you may choose another directory)

2. Add the following (partly or as a whole) to your `~/.config/nvim/init.lua` (Or `~\AppData\Local\nvim\init.lua` on Windows):

For the general Tree-sitter support:

```lua
-- lazy.nvim package manager
require('lazy').setup({
  -- ...
	{
    -- Highlight, edit, and navigate code
    'nvim-treesitter/nvim-treesitter',
    build = ':TSUpdate',

    -- Optional, may be removed:
    dependencies = {
      -- adds syntax aware text-objects, select, move, swap, and peek support
      -- see: https://github.com/nvim-treesitter/nvim-treesitter-textobjects
      'nvim-treesitter/nvim-treesitter-textobjects',

      -- adds a sticky context header on top as you scroll through file contents
      -- see: https://github.com/nvim-treesitter/nvim-treesitter-context
      'nvim-treesitter/nvim-treesitter-context'
    },
  },
  -- ...
}, {})
```

For the tree-sitter-tact support:

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()

-- Adds tree-sitter-tact support
parser_config.tact = {
  install_info = {
    url = "~/.local/git/tree-sitter-tact", -- a path to the cloned repo
    files = {"src/parser.c"},
    branch = "main",
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  }
}

-- Adds filetype recognition for .tact files
vim.filetype.add({
  extension = {
    tact = "tact",
  }
})
```

3. Create a folder for queries under your Neovim runtime directory, if not exists:
  * Windows: `mkdir -p ~\AppData\Local\nvim\queries`
  * Linux, macOS, *NIX: `mkdir -p ~/.config/nvim/queries`

4. Symlink the `editor_queries/neovim` sub-directory, this will add all the queries:
  * Windows: `mklink /D ~\AppData\Local\nvim\queries\tact ~\.local\git\tree-sitter-tact\editor_queries\neovim`
  * Linux, macOS, *NIX: `ln -s ~/.local/git/tree-sitter-tact/editor_queries/neovim ~/.config/nvim/queries/tact`

5. Finally, run the `:TSInstall tact` inside the Neovim.

6. For further configuration and customization, refer to the following repositories:
* [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
* [nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
* [nvim-treesitter-context](https://github.com/nvim-treesitter/nvim-treesitter-context)

</details>

Queries bundled (see `editor_queries/neovim`):
* `highlights.scm` — syntax highlighting
* `locals.scm` — used to extract keyword definitions, scopes, references, etc., but NOT used for highlighting (unlike Generic or Helix queries)
* `injections.scm` — highlighting of TODO, FIXME and related in single-line comments
* `folds.scm` — syntax folds (note, that folding has to be enabled in config in order to use those)
* `indents.scm` — indentation levels
* `textobjects.scm` — syntax aware text-objects, select, move, swap, and peek support.
* `context.scm` — shows sticky context on top of the editor as you scroll through file contents

### Helix

Parser and queries are bundled with Helix starting with any version past 23.10.\
For versions prior or equal to 23.10 or to always have the latest queries available, do the following:

<details>
<summary>Instructions</summary>

1. Clone the repo to any convenient place: `git clone https://github.com/tact-lang/tree-sitter-tact ~/.local/git/tree-sitter-tact` (`~/.local/git` is exemplary, you may choose another directory)

2. Create a folder for queries under your Helix runtime directory, if not exists:
  * Windows: `mkdir -p ~\AppData\Roaming\helix\runtime\queries`
  * Linux, macOS, *NIX: `mkdir -p ~/.config/helix/runtime/queries`

3. Symlink the `editor_queries/helix` sub-directory, this will add all the queries:
  * Windows: `mklink /D ~\AppData\Roaming\helix\runtime\queries\tact ~\.local\git\tree-sitter-tact\editor_queries\helix`
  * Linux, macOS, *NIX: `ln -s ~/.local/git/tree-sitter-tact/editor_queries/helix ~/.config/helix/runtime/queries/tact`

4. Inside the `~/.local/git/tree-sitter-tact/editor_queries/helix` run `mv highlights-before-version-24.scm highlights.scm` to use compatible queries (only for versions prior or equal to 23.10).

5. Add the following to your `~/.config/helix/languages.toml` (Or `~\AppData\Roaming\helix\languages.toml` on Windows):

```toml
[[language]]
name = "tact"
scope = "source.tact"
injection-regex = "tact"
file-types = ["tact"]
comment-token = "//"
indent = { tab-width = 4, unit = "    " }
roots = []

[language.auto-pairs]
'"' = '"'
'{' = '}'
'(' = ')'
'<' = '>'

[[grammar]]
name = "tact"
source = { path = "/absolute/path/to/your/home/directory/.local/git/tree-sitter-tact" }  # TODO: replace with your full path to downloaded repo
```

6. Finally, run the following commands to update all Tree-sitter grammars, including Tact's:

```bash
hx --grammar fetch
hx --grammar build
```

</details>

Queries bundled (see `editor_queries/helix`):
* `highlights.scm` — syntax highlighting
* `injections.scm` — highlighting of TODO, FIXME and related in single-line comments
* `indents.scm` — indentation levels
* `textobjects.scm` — syntax aware text-objects

## 💲 CLI Usage

Tree-sitter grammars have limited utility on its own and are best used as parsers that can be embedded in other projects. However, [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) can be used with this grammar to show generated parse trees and syntax highlighting for a given Tact file.

For a quick demo of tree-sitter-cli usage:
1. Clone this repo.
2. Install Node.js dependencies (by `npm i`, `pnpm i` or `yarn`).
3. Execute relevant commands from the `scripts` tag in `package.json`.

For a more streamlined experience, you may:
1. [Install tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md#installation).
2. Create a `tree-sitters` directory in your home directory.
3. Clone this repository (or symlink it) into the new `~/tree-sitters/` directory.
4. Run `tree-sitter parse path/to/file.tact` to be shown the parse tree for the file.
5. Run `tree-sitter highlight path/to/file.tact` to be shown the file with syntax highlighting applied.

## 🎨 Structure

Grammar definition resides in `grammar.js`:

- Actual grammar and bindings are generated from it via Tree-sitter.
- Queries and tests rely on its namings of nodes and fields.

Generic queries are structured as follows:

```
queries/
|-- highlights.scm -- syntax highlighting queries (generic, for Tree-sitter & GitHub)
|-- locals.scm -- fixed set of capture names to track local scopes and variables (and alike)
`-- tags.scm -- tagging queries for code navigation systems (as used on GitHub)
```

To find highlighting and other queries for specific editors, look in the `editor_queries/` directory.

## ⚙ References

- [grammar.ohm](https://github.com/tact-lang/tact/blob/main/src/grammar/grammar.ohm) — Official grammar specification in Ohm PEG language.
- [tact-by-example](https://github.com/tact-lang/tact-by-example) — Many different contract samples.

## Useful ⚡ Tact links

- [Official Website](https://tact-lang.org/)
- Discussion Group in [Telegram](https://t.me/tactlang)
- [X/Twitter](https://twitter.com/tact_language)

## Credits

Based on [The Open Network](https://ton.org).

Built with 🤍 by [Novus Nota](https://github.com/novusnota).

## License

[MIT](LICENSE)
