==============================
A Tree-sitter parser for CMake
==============================

This project provides a `cmake` parser. Its primary use case is to provide a `cmake` parser for `nvim-treesitter`.


Parsed syntax
=============

- Command

  - General commands
  - For and while loops
  - If conditions
  - Functions and macros

- Arguments

  - Quoted arguments
  - Bracket arguments
  - Unquoted arguments
  - Parentheses

- Variable refences

  - Environment and cache variables
  - Normal variables

- Generator expression

