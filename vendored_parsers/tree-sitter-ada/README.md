# Tree-Sitter parser for Ada

The grammar is adapted from the work done by Stephen Leak for the
Emacs ada-mode. It was translated (partially for now) to tree-sitter
syntax, and slightly changed to reduce some conflicts. Tree-sitter
doesn't need a full syntax tree, so we can take some shortcuts in
the grammar.

## Installation

You will need neovim at least version 8.0 (not tested with earlier version).

Installation is very manual at this stage, until we can integrate this package
inside nvim-treesitter itself. At the moment, assuming you are using lua
configuration and Packer for your package management:

```lua
-- file: ~/.config/nvim/init.lua

--  Merge this with any existing Packer configuration you might already
--  have. This loads packer itself, then loads the new `ada.nvim` package.
require('packer').startup(function(use)
    use(require('mytreesitter.nvim'))
end)
```

Then create a new file to setup treesitter (or merge with an existing
configuration of course).
```lua
--  file: ~/.config/nvim/mytreesitter.nvim

return {
   'nvim-treesitter/nvim-treesitter',
   requires = {
      'nvim-treesitter/nvim-treesitter-textobjects'
   },
   run=function()
      require('nvim-treesitter.install').update({ with_sync = true })
   end,
   config=function()

      --  Add support for our Ada parser

      local parsers = require "nvim-treesitter.parsers"
      local parser_config = parsers.get_parser_configs()
      parser_config.ada = {
         install_info = {
            url = "https://github.com/briot/tree-sitter-ada",
            files = {"src/parser.c"},
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
         },
         filetype = "ada",
       }
   end,
}
```

Finally, we need to install the Ada parser with:
```vim
   :PackerSync                          " to install treesitter itself
   :TSInstall ada                       " to install Ada support
```

However, the above part only installs the parser itself (to generate a syntax
tree from your source files). We now need to install queries, i.e. pattern
matching against that tree to provide various capabilities like syntax
highlighting, folding, indentation, smart textobject selection,...

For this, and until we can merge with nvim-treesitter itself, you will have
to clone this github repository, then copy the `queries/` directory to
```
  ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/
```

## Usage

### Syntax highlighting

The above default configuration will replace the default regular
expressions-based syntax highlighting in vim. Instead, the highlighting is
based on the tree build every time you type something.

The default highlighting looks pretty much like the one from the standard
Ada mode. However, the tree-based approach potentially opens the door for
smart highlighting, like "Use a different background color for a subprogram
specification", "show constant definitions in blue" or other high-level
approaches.

    WIP: document how users can do this in their own configuration files.
    The current approach is to modify queries/highlights.scm

Potentially (though it seems to be disabled in neovim at the moment), the
highlighting can also get smarter. Going back to the "show constants in
blue" example above, the queries/locals.scm file adds a simple approach so
that references to those constants can point to the definition, and therefore
use the same blue highlighting.

Because neovim also has support for language servers (LSP), it is likely
better to rely on the language server here.

### Block folding

If you press <kbd>za</kbd> now, this will toggle the folding of the
"current block".
This is defined in queries/folds.scm, and currently knows about package
specifications, package bodies, subprograms bodies, if statements and loops.
Other semantic blocks could be added.

### Smart Selection

The file queries/textobjects.scm defines a function textobjects, so that
you can now use commands like

 -  <kbd>vaf</kbd>    (v)isually select (a) (f)unction or subprogram
 -  <kbd>vif</kbd>    (v)isually select (i)nside a (f)unction or subprogram
 -  <kbd>vai</kbd>    (v)isually select (a) (i)f statement (or loop)
 -  <kbd>vii</kbd>    (v)isually select (i)nside an (i)f statement (or loop)


## Development

Execute the following commands:
```bash
   npm install
   npm run test
```

## Documentation

The grammar itself is fully described in the file grammar.js.
When it processes it, TreeSitter generates src/grammar.json, which can be
converted to a EBNF format via https://github.com/mingodad/plgh/blob/main/json2ebnf.js
and rendered into a diagram on https://www.bottlecaps.de/rr/ui if you
prefer graphical visualization (you can also copy-paste from issue #1 a
pre-processed version of grammar.json).
