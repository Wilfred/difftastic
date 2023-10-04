# tree-sitter-sfapex

Salesforce grammars for [tree-sitter](https://github.com/tree-sitter/tree-sitter), including Apex, SOQL, and SOSL languages.

Try it out using our [playground](https://aheber.github.io/tree-sitter-sfapex/playground/)

If you are a Neo-vim user, the parsers and syntax highlights are part of nvim-treesitter
plugin already, [guidance](nvim-treesitter-setup.md).

## Status

Most of the parsers are built and tested on large corpus of Apex, I still intend to write automated tests that parse large Apex libraries as part of evaluating the grammar.

### Apex

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests
- [x] tags queries
- [x] tags tests (could use more)
- [x] locals queries
- [x] locals tests (using highlighting)

### Anonymous Apex

- [ ] grammar
- [ ] grammar tests
- [ ] highlighting queries
- [ ] highlighting tests
- [ ] tags queries
- [ ] tags tests (could use more)
- [ ] locals queries
- [ ] locals tests (using highlighting)

_This won't be difficult, I just haven't tackled it yet, will largely reuse the Apex grammar with some different construction rules._

### SOQL

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests

### SOSL

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests

(not sure tags and locals are relevant to query grammars)

## Questions/Issues

Please open an issue on this repo and we'll work through it.

## Contributing

Still figuring this out. By far the most useful contributions would be tests, if you have a scenario that doesn't work you can just provide the example or open a PR with a new failing test and I can figure out what to do about it.
