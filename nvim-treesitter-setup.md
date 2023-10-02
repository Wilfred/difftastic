# Use parsers and queries in nvim-treesitter plugin

The Apex, SOQL, and SOSL parsers in this repo are alredy part of [nvim-treesitter
repository](https://github.com/nvim-treesitter/nvim-treesitter). 
Any parser new version in this repo is automatically syned in nvim-treesitter.

Note. Nvim-treesitter maintains its own version of `scm` [query files](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries).
It means that the query files stored in this repo is not used by nvim-treesitter.

# How to install and use

Installing the nvim-treesitter plugin with whatever package manager you use. 
I use `Lazy`, and you can find my Nvim dotfiles
[here](https://github.com/xixiaofinland/dotfiles/tree/main/.config/nvim).

Once the plugin is installed, the parsers and query files are part of the plugin in your
local installed version.

In your Nvim init configuraiton, you need to setup the filetypes so
nvim-treesitter automatically kicks-in when corresponding filetypes are opened.

```lua
vim.filetype = on

vim.filetype.add({
  extension = {
    cls = 'apex',
    apex = 'apex',
    trigger = 'apex',
    soql = 'soql',
    sosl = 'sosl',
  }
})
```

Now when you open a `.cls` file, Nvim should use the `Apex` parser to parse the Apex language and
`highlights.scm` to highlight syntax. 


# Troubleshoot

1. Are the parsers successfully installed?

Run `:TSInstallInfo` to see the parser installation information

2. No syntax highlight in Apex?

Sometimes the syntax higlight module is disabled, open an Apex file and run `:TSEnable highlight` to enable it.

