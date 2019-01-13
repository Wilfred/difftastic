tree-sitter-gdscript
==================

GDScript grammar for [tree-sitter][].

NOTE: Not ready for use. @see Todo.

### Todo

- [ ] Compound Statements
  - [ ] match
  - [ ] enum
  - [ ] inheriting class constructor
- [ ] Expression
  - [ ] call base class function
- [ ] Function Attributes
  - [ ] static
  - [ ] remote[sync]
  - [ ] master[sync]
  - [ ] puppet[sync]
- [ ] Format Specifiers
- [X] Statements
  - [X] setget
  - [X] export
  - [X] const
  - [X] signal
- [X] Literals
  - [X] @"NodePath/StringName"
  - [X] $node and $"../node"
- [X] Operators
  - [X] is
  - [X] as
- [X] Keyword Statements
  - [X] breakpoint
- [X] Variable Attributes
  - [X] onready

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
