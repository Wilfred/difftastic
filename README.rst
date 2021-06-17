==============================
A Tree-sitter parser for CMake
==============================

This project provides a `cmake` parser. Its primary use case is to provide a `cmake` parser for `nvim-treesitter`. The
project is still underdevelopment but basic highlighting should already work.

TODO
====

- Control structures

  - if()/elseif()/else()endif() [DONE]
  - foreach()/endforeach() [DONE]
  - while()/endwhile() [DONE]

- Command definitions

  - macro()/endmacro() [DONE]
  - function()/endfunction() [DONE]

- Add grammar rules for comments

  - Bracket Comment
  - Line Comment

- Create an quoted argument external scanner
