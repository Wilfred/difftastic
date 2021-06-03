==============================
A Tree-sitter parser for CMake
==============================

This project provides a `cmake` parser. Its primary use case is to provide a `cmake` parser for `nvim-treesitter`. The
project is still underdevelopment but basic highlighting should already work.

TODO
====

- |uncheck| Control structures

  - |uncheck| if()/elseif()/else()endif()
  - |uncheck| foreach()/endforeach()
  - |uncheck| while()/endwhile()

- |uncheck| Command definitions

  - |uncheck| macro()/endmacro()
  - |uncheck| function()/endfunction()

- |uncheck| Add grammar rules for comments

  - |uncheck| Bracket Comment
  - |uncheck| Line Comment

- |uncheck| Create an quoted argument external scanner

.. |check| unicode:: U+2611
.. |uncheck| unicode:: U+2610
