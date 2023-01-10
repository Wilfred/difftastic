tree-sitter-scala
=================

[![Test the grammar](https://github.com/tree-sitter/tree-sitter-scala/actions/workflows/ci.yml/badge.svg)](https://github.com/tree-sitter/tree-sitter-scala/actions/workflows/ci.yml)

Scala grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

References

* [The Scala Language Specification](https://www.scala-lang.org/files/archive/spec/2.13/)
* [Scala Syntax Summary](https://www.scala-lang.org/files/archive/spec/2.13/13-syntax-summary.html)

Development
-----------

First, install the project's dependencies:

```sh
npm install
```

Add a test case to `./corpus`, make the required changes to `grammar.js`,
regenerate and recompile the parser, and run the tests:

```sh
npm run build
npm test
```
