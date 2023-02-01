tree-sitter-gdscript
==================

GDScript grammar for [tree-sitter][].

## How To

- Build prebuilds
  1. `npm run genTest`
  2. `npm run prebuild`
- Build with node-gyp
  1. `npm run genTest`
  2. `npm install node-gyp`
  3. `node-gyp rebuild`

Note: `node-gyp-build` will check for binaries in both `build` and `prebuilds`
directories.

### Todo

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
  - These can come after 'export' or before 'var'
    - [X] remote[sync]
    - [X] master[sync]
    - [X] puppet[sync]
- [X] Function Attributes
  - [X] static
  - [X] remote[sync]
  - [X] master[sync]
  - [X] puppet[sync]
- [X] Compound Statements
  - [X] match
  - [X] enum
  - [X] inheriting class constructor
- [X] Expression
  - [X] call base class function

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
