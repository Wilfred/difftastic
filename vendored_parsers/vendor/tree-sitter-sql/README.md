[![Node.js CI](https://github.com/m-novikov/tree-sitter-sql/actions/workflows/node.js.yml/badge.svg)](https://github.com/m-novikov/tree-sitter-sql/actions/workflows/node.js.yml)

# SQL syntax for tree-sitter

This project initially focuses on PostgreSQL flavor of SQL

## Try it out

You can try out the parser here: [Tree Sitter SQL Playground](https://m-novikov.github.io/tree-sitter-sql/)

## Development

Install [pre-commit](https://pre-commit.com/#install) and run `pre-commit install` in the root of this repo. This will ensure
that code follows code style of this repo.

File describing grammar is [grammar.js](./grammar.js)

Every time the grammar file changes code generation needs to be run by invoking `npm run gen`

`npm test` command automatically performs code generation

Tests files are located in [test/corpus](./test/corpus)

[Here](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test) is the documentation on test file syntax

### Running tests

```
npm install --also=dev
npm test
```

### Debbuging

* `npm run parse <file.sql>` outputs a syntax tree
* `npm run extract-error <file.sql>` shows first offending line

### Goals

This parser is supposed to be used in text editors. As a result:

* it's very lax in what it considers valid SQL parse
* adding extra nodes to have convenient selection anchors is okay

### Other projects

* https://github.com/DerekStride/tree-sitter-sql
* https://github.com/dhcmrlchtdj/tree-sitter-sqlite
* 
