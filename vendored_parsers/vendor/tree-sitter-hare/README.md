# tree-sitter-hare
[Hare](https://harelang.org/) grammar for the popular incremental parser generator [tree-sitter](https://tree-sitter.github.io/tree-sitter/).

**status**: the majority of sources in `examples` (Hare stdlib) is recognized fine - sources containing 
`\\` in strings fail, due to them getting parsed as comments 
as a consequence to tree-sitter precedence rules. 

For a list of features offered by tree-sitter refer to their site. Summarily, 
one of the main features is context-aware highlight (e.g. local variables are highlighted 
differently than function parameters).

This grammar can be used in a number of editors and different situations (github 
uses it, for example) - at this stage it must be inserted manually into your editor. 
See, for example, [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter#advanced-setup).
