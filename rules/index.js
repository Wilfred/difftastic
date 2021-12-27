/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const commands = require('./commands');
const environments = require('./environments');
const groups = require('./groups');
const includes = require('./includes');
const math = require('./math');
const sections = require('./sections');
const text = require('./text');
const trivia = require('./trivia');

module.exports = {
  ...commands,
  ...environments,
  ...groups,
  ...includes,
  ...math,
  ...sections,
  ...text,
  ...trivia,
};
