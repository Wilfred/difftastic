#!/usr/bin/env node

'use strict';

const fs = require('fs')
const assert = require('assert');
const ITERATION_COUNT = 50;

if (process.argv.length < 3) {
  console.log("Usage: script/benchmark.js <javascript-file>")
  process.exit(1);
}

const fileName = process.argv[2];
const code = fs.readFileSync(fileName, 'utf8');

profile("Babylon", () => {
  const babylon = require('babylon');
  let rootNode = babylon.parse(code);
  assert(rootNode.type === 'File');
});

profile("Esprima", () => {
  const esprima = require('esprima');
  let rootNode = esprima.parse(code);
  assert(rootNode.type === 'Program');
});

profile("Tree-sitter", () => {
  const Document = require('tree-sitter-compiler/node_modules/tree-sitter').Document;
  const jsLanguage = require('..');
  let document = new Document()
    .setInputString(code)
    .setLanguage(jsLanguage)
    .parse();
  assert(document.rootNode.type === 'program');
});

function profile (name, action) {
  console.log(name + ":")
  let durations = [];

  for (let i = 0; i < ITERATION_COUNT; i++) {
    let startTime = Date.now();
    try {
      action();
    } catch (e) {
      console.log("FAILED", e.message);
      return
    }
    let endTime = Date.now();
    durations.push(endTime - startTime);
  }

  durations.sort((a, b) => a - b);
  const average = durations.reduce((sum, term) => sum + term) / ITERATION_COUNT;
  const min = durations[0];
  const max = durations[durations.length - 1];

  console.log("Average:", average, "Min:", min, "Max:", max);
}
