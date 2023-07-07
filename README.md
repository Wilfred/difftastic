# tree-sitter-racket

[![Test](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml/badge.svg)](https://github.com/6cdh/tree-sitter-racket/actions/workflows/test.yml)

Racket grammar for tree-sitter.

This grammar only implements the Racket language with the default readtable.

## Status

It should be complete and compatible with Racket 8.9.

There are no plans to add support for new language currently.

## News

Starting from June 24, 2023, ([commit](https://github.com/6cdh/tree-sitter-racket/commit/989c3e631a7f2d87bb6a66a5394870aaeb6c56e7)) or release 0.3.0, the external scanner was written in C.

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

