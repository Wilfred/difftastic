tree-sitter-ocaml
=================

[![Build Status](https://github.com/tree-sitter/tree-sitter-ocaml/workflows/build/badge.svg)](https://github.com/tree-sitter/tree-sitter-ocaml/actions?query=workflow%3Abuild)

OCaml grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

This module defines two grammars for implementation (`.ml`) and interface (`.mli`) files. Require them as follows:

```js
require('tree-sitter-ocaml').ocaml;
require('tree-sitter-ocaml').interface;
```

References

* [OCaml language reference](https://ocaml.org/manual/language.html)
* [OCaml language extensions](https://ocaml.org/manual/extn.html)
* [OCaml parser](https://github.com/ocaml/ocaml/blob/trunk/parsing/parser.mly)
