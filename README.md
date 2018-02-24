tree-sitter-scala
=================

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-scala.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-scala)

Scala grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

References

* [The Scala Language Specification](http://www.scala-lang.org/docu/files/ScalaReference.pdf)
* [Scala Syntax Summary](https://www.scala-lang.org/files/archive/spec/2.11/13-syntax-summary.html)

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
