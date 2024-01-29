# tree-sitter-purescript
[Purescript](https://github.com/purescript/purescript) language grammar for [Tree-sitter](https://tree-sitter.github.io/tree-sitter/).

## Current state of the grammar
Parsing and highlighting is handled rather well; for instance, parsing 57k LOC of PureScript code across 700 files returns no errors, so it will work very well for your regular syntax highlighting tasks.

The areas of potential improvement at the moment are cleaner, better structured node trees, more elaborate queries, reducing the size of and the dependency for the C scanner as well as increasing the amount of tests. Some documentation wouldn't hurt too.

## Editor support

### Helix
PureScript support works out of the box.

### Kakoune
Default configuration is present for [kak-tree-sitter](https://github.com/phaazon/kak-tree-sitter). Install the plugin and install PureScript grammar with `ktsctl -fci purescript`.

### (Neo)Vim
PureScript support is available with [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) plugin. First of all, make sure your Neovim installation recognizes PureScript filetype. If you have [purescript-vim](https://github.com/purescript-contrib/purescript-vim) installed, this is already the case. If you haven't, you can either [install](https://github.com/purescript-contrib/purescript-vim#installation) it, or add PS filetype manually. To add it manually, add this to your `init.lua`:
```vim
vim.filetype.add({ extension = { purs = 'purescript' }})
```
After that, install the grammar with `:TSInstall purescript` and it's ready.

##### Q: Should I use this or `purescript-vim`?
Our grammar seems to provide more extensive highlighting, but these two do not conflict. If you enjoy the features that `purescript-vim` plugin provides, you can as well keep using both.

### Zed
[Zed editor](https://github.com/zed-industries/zed) includes PureScript support (thanks to [@ivanmoreau](https://github.com/zed-industries/zed/pull/6911)).

### Emacs
TBA.

### Other editors
Please suggest your ideas via issues.

## Issues reporting and contributing
If you notice something not working correctly or simply have a suggestion or request to make, don't hesitate to open an issue, or open a pull request if you have code to share.

## Related projects
- [purescript-language-cst-parser](https://github.com/natefaubion/purescript-language-cst-parser) - PureScript CST Parser written in PureScript.

## Acknowledgments
- [tree-sitter-haskell](https://github.com/tree-sitter/tree-sitter-haskell) contributors for developing the original grammar
- [Maskhjarna/tree-sitter-purescript](https://github.com/Maskhjarna/tree-sitter-purescript) for starting the fork and inspiring further work
