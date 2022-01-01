#!/usr/bin/env node

const fs = require('fs');
const Parser = require('web-tree-sitter');

if (process.argv.length < 3) {
  console.log('Usage: script/tree-sitter-parse.js <haskell-file..>')
  process.exit(1)
}

Parser.init().then(() => {
  Parser.Language.load('tree-sitter-haskell.wasm').then((Haskell) => {
    const parser = new Parser;
    parser.setLanguage(Haskell);
    for (let i = 2; i < process.argv.length - 1; i++) {
      const fileName = process.argv[2]
      const sourceCode = fs.readFileSync(fileName, 'utf8')
      const tree = parser.parse(sourceCode);
    }
  });
});
