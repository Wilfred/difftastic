tree-sitter-gdscript
====================

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

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
