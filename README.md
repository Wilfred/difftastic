# Tree Sitter Prisma

## Introduction

This is an **unofficial** Prisma language parsing. More information about the language and specs
can be found here:

- [vscode-prisma](https://github.com/prisma/vscode-prisma)
- [prisma2-schema-file](https://github.com/prisma/prisma2/blob/master/docs/prisma-schema-file.md)
- [prisma2-data-modeling](https://github.com/prisma/prisma2/blob/master/docs/data-modeling.md)

If you notice any bug or problem, please submit an issue or make a pull request. Any contribution
is welcomed and probably needed.

## Development

**Requirements:**

- Rust >= 1.36
- npm >= 6

All the parsin logic is specified in `grammar.js` at the root level. To see if the changes made to
it are working, run the tests and compare the results.

```
npm test
```

More information about how to write or use the tree parser can be found here:
[http://tree-sitter.github.io/tree-sitter/](http://tree-sitter.github.io/tree-sitter/)

Many parts of the code were scavenged from these repositories:

- [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript)
- [tree-sitter-typescript](https://github.com/tree-sitter/tree-sitter-typescript)
