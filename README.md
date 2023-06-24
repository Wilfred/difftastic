# tree-sitter-racket

[![Test](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml/badge.svg)](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml)

Racket grammar for tree-sitter.

This grammar only implements the Racket language with the default readtable.

## Status

It should be complete and compatible with Racket 8.9.

There are no plans to add support for new language currently.

## News

From 2023-6-24 (commit date) or release 0.3.0, the external scanner will be written in C.

## Build and Try

You need

* nodejs
* a C compiler

then run

```shell
npm install
npx tree-sitter parse [filename]
```

## Usage

See [nodes.md](./nodes.md) for all visible nodes.

## Reference

Racket

- [The Racket Reader](https://docs.racket-lang.org/reference/reader.html)

