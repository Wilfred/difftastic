tree-sitter-typescript
===========================

[![Build Status](https://github.com/tree-sitter/tree-sitter-typescript/workflows/build/badge.svg)](https://github.com/tree-sitter/tree-sitter-typescript/actions?query=workflow%3Abuild)
[![Build status](https://ci.appveyor.com/api/projects/status/rn11gs5y3tm7tuy0/branch/master?svg=true)](https://ci.appveyor.com/project/maxbrunsfeld/tree-sitter-typescript/branch/master)

TypeScript and TSX grammars for [tree-sitter][].

Because TSX and TypeScript are actually two different dialects, this module defines two grammars. Require them as follows:

```js
require('tree-sitter-typescript').typescript; // TypeScript grammar
require('tree-sitter-typescript').tsx; // TSX grammar
```

For Javascript files with [flow] type annotations you can use the the `tsx` parser.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[flow]: https://flow.org/en/

References

* [TypeScript Language Spec](https://github.com/microsoft/TypeScript/blob/main/doc/spec-ARCHIVED.md)
