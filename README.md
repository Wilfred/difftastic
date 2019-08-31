# tree-sitter-toml

[![npm](https://img.shields.io/npm/v/tree-sitter-toml.svg)](https://www.npmjs.com/package/tree-sitter-toml)
[![build](https://img.shields.io/travis/com/ikatyang/tree-sitter-toml/master.svg)](https://travis-ci.com/ikatyang/tree-sitter-toml/builds)

TOML ([TOML Spec v0.5.0](https://github.com/toml-lang/toml/blob/master/versions/en/toml-v0.5.0.md)) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

[Changelog](https://github.com/ikatyang/tree-sitter-toml/blob/master/CHANGELOG.md)

## Install

```sh
npm install tree-sitter-toml tree-sitter
```

## Usage

```js
const Parser = require("tree-sitter");
const TOML = require("tree-sitter-toml");

const parser = new Parser();
parser.setLanguage(TOML);

const sourceCode = `
  [hello]
  world = true
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
// (document
//   (table
//     (key)
//     (pair
//       (key) (boolean))))
```

## License

MIT © [Ika](https://github.com/ikatyang)
