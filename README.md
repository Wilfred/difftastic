tree-sitter-typescript
===========================

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-typescript.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-typescript)
[![Build status](https://ci.appveyor.com/api/projects/status/rn11gs5y3tm7tuy0/branch/master?svg=true)](https://ci.appveyor.com/project/maxbrunsfeld/tree-sitter-typescript/branch/master)

TypeScript and TSX grammars for [tree-sitter][].

Because TSX and TypeScript are actually two different dialects, this module defines two grammars. Require them as follows:

```js
require('tree-sitter-typescript/typescript'); // TypeScript grammar
require('tree-sitter-typescript/tsx'); // TSX grammar
```

[tree-sitter]: https://github.com/tree-sitter/tree-sitter

References

* [TypeScript Language Spec](https://github.com/Microsoft/TypeScript/blob/master/doc/spec.md)
