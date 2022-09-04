# tree-sitter-yaml

[![npm](https://img.shields.io/npm/v/tree-sitter-yaml.svg)](https://www.npmjs.com/package/tree-sitter-yaml)
[![build](https://img.shields.io/travis/com/ikatyang/tree-sitter-yaml/master.svg)](https://travis-ci.com/ikatyang/tree-sitter-yaml/builds)

YAML ([YAML Spec v1.2](https://yaml.org/spec/1.2/spec.html)) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

[Changelog](https://github.com/ikatyang/tree-sitter-yaml/blob/master/CHANGELOG.md)

## Install

```sh
npm install tree-sitter-yaml tree-sitter
```

## Usage

```js
const Parser = require("tree-sitter");
const YAML = require("tree-sitter-yaml");

const parser = new Parser();
parser.setLanguage(YAML);

const sourceCode = `
!!map
hello: &anchor
- world
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
// (stream
//   (document
//     (block_node
//       (tag)
//       (block_mapping
//         (block_mapping_pair
//           key: (flow_node
//             (plain_scalar
//               (string_scalar)))
//           value: (block_node
//             (anchor)
//             (block_sequence
//               (block_sequence_item
//                 (flow_node
//                   (plain_scalar
//                     (string_scalar)))))))))))
```

## License

MIT © [Ika](https://github.com/ikatyang)
