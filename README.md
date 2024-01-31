# tree-sitter-typescript

[![CI](https://github.com/tree-sitter/tree-sitter-typescript/actions/workflows/ci.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-typescript/actions/workflows/ci.yml)
[![Discord](https://img.shields.io/discord/1063097320771698699?logo=discord)](https://discord.gg/w7nTvsVJhm)
[![Rust Crate](https://img.shields.io/crates/v/tree-sitter-typescript.svg)](https://crates.io/crates/tree-sitter-typescript)
[![Node Package](https://img.shields.io/npm/v/tree-sitter-typescript.svg)](https://www.npmjs.com/package/tree-sitter-typescript)

TypeScript and TSX grammars for [tree-sitter][].

Because TSX and TypeScript are actually two different dialects, this module defines two grammars. Require them as follows:

```js
require("tree-sitter-typescript").typescript; // TypeScript grammar
require("tree-sitter-typescript").tsx; // TSX grammar
```

For Javascript files with [flow] type annotations you can use the the `tsx` parser.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[flow]: https://flow.org/en/

References

- [TypeScript Language Spec](https://github.com/microsoft/TypeScript/blob/main/doc/spec-ARCHIVED.md)
