# This module, i.e. the nim bindings, can be placed anywhere in your nim project
# or kept in the bindings directory.
#
# However the following assumes that when compiling your project or main module that 
# "tree-sitter-gdscript/" is accessible from the current working directory.
{.passC: "-Itree-sitter-gdscript/src".}
{.compile: "tree-sitter-gdscript/src/parser.c".}
{.compile: "tree-sitter-gdscript/src/scanner.c".}
proc tree_sitter_gdscript*(): pointer {.importc.}
