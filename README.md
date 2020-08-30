## tree-sitter-solidity

> 💡 this grammar is still in development, the structure of the generated AST is not stable

This repository contains a grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

The goal of this project is to provide an parser efficient low-dependency parser for solidity which targets most solidity versions in use and is designed for enabling metaprogramming.


### Navigating this repository
The primary file in this repository is `grammar.js` which describes the tree-sitter grammar.

```
# Primary file:
grammar.js
# Tests:
/test/**/*

# Auto generated:
/src/**/*
index.js
binding.gyp
```

### References
-> Ethereum solidity grammar: https://github.com/ethereum/solidity/blob/develop/docs/grammar/Solidity.g4
-> Tree-sitter javascript grammar: https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js

Major inspriration & some structures have been taken from tree-sitter-javascript, a big thanks to the contributors to this repo!