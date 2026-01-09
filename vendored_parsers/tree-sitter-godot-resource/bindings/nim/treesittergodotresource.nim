# This module, i.e. the nim bindings, can be placed anywhere in your nim project
# or kept in the bindings directory.
#
# However the following assumes that when compiling your project or main module that 
# "tree-sitter-godot-resource/" is accessible from the current working directory.
{.passC: "-Itree-sitter-godot-resource/src".}
{.compile: "tree-sitter-godot-resource/src/parser.c".}
{.compile: "tree-sitter-godot-resource/src/scanner.c".}
proc tree_sitter_godot_resource*(): pointer {.importc.}
