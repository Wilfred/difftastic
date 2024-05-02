; See: https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#injections
((comment) @injection.content
  (#set! injection.language "comment")
  (#match? @injection.content "^//"))
