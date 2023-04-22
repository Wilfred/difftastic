# tree-sitter-scheme

[![Build/test](https://github.com/6cdh/tree-sitter-scheme/workflows/Build/test/badge.svg)](https://github.com/6cdh/tree-sitter-scheme/actions/workflows/test.yml)

Scheme grammar for tree-sitter.

## Recent News

With R7RS support, `|` will now be used as delimiter. In the past, it was permitted to be included as part of an identifier.

## Status

~~tree-sitter-scheme should work on a superset of Scheme.~~

Different Implementations might have conflict grammar. I am not sure if I should support
them. If you need some implementation-specific features, please open an issue, then I will support it.

current status:

* [x] R5RS
* [x] R6RS
* [x] R7RS
* [ ] Implementation specific extensions
  * [ ] Chez Scheme ([#1](https://github.com/6cdh/tree-sitter-scheme/issues/1))
  * [ ] Chicken Scheme ([#3](https://github.com/6cdh/tree-sitter-scheme/issues/3))

## TODO

* More tests
* Queries

## Usage

See [nodes.md](./nodes.md) for all visible nodes.

This parser don't parse language constructs. Instead, it parse code as lists.

If you want language constructs support, use custom queries (see [#5](https://github.com/6cdh/tree-sitter-scheme/issues/5)), also see [thchha/tree-sitter-scheme](https://gitlab.com/thchha/tree-sitter-scheme).

## Reference

Scheme

* [R5RS](https://schemers.org/Documents/Standards/R5RS/)
* [R6RS](http://www.r6rs.org/)
* [R7RS](https://small.r7rs.org/)
* [The Scheme Programming Language](https://www.scheme.com/tspl4/)

Tree-sitter

* [official documents](https://tree-sitter.github.io/tree-sitter)
* [Guide to your first Tree-sitter grammar](https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef)
* [tree-sitter-clojure](https://github.com/sogaiu/tree-sitter-clojure)
* [tree-sitter-commonlisp](https://github.com/theHamsta/tree-sitter-commonlisp)
* [tree-sitter-fennel](https://github.com/TravonteD/tree-sitter-fennel)

