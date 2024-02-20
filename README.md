tree-sitter-gdscript
====================

GDScript grammar for [tree-sitter][].

## Latest Godot Commit Syntactically Synced

Note: *Some commits may have been missed.*

```bash
git log --oneline --no-merges modules/gdscript
```

[6ae54fd787](https://github.com/godotengine/godot/commits/6ae54fd787)

## How To

- Test grammar
  1. `npm run genTest`
- Test scanner
  1. Edit "src/scanner.c"
  1. `npm run test`, no need to generate.
- Build prebuilds
  1. `npm run genTest`
  1. `npm run prebuild`
- Build with node-gyp
  1. `npm run genTest`
  1. `npm install node-gyp`
  1. `node-gyp rebuild`
- Edit
  1. Write tests in corpus to express behavior.
  1. Make grammar or scanner edits.
  1. See above for running tests.
  1. `npm run format`
  1. Commit changes.
    - If commit is an issue fix, prefix message with `fix(#<issue-number>):`
    - List the rules changed in commit message.
    - Note what rules need to be updated in [nvim-treesitter][] queries.
  1. Commit generated files separately.
    - With commit message: "tree-sitter generate"
  1. Push
- Release
  1. `npm version <major, minor, patch> -m "<> version bump"`
  1. `git push --follow-tags`

Note: `node-gyp-build` will check for binaries in both `build` and `prebuilds`
directories.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
