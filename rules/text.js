/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = {
  key: $ => $._words,

  text: $ => $._words,

  _words: $ => prec.right(repeat1(field('word', $.word))),

  word: $ => /[^\s\\%\{\},\$\[\]\(\)=\#]+/,

  glob_pattern: $ => repeat1($._glob_pattern_fragment),

  _glob_pattern_fragment: $ =>
    choice(
      seq('{', repeat($._glob_pattern_fragment), '}'),
      /[^\"\[\]:;\|\{\}<>]+/,
    ),

  path: $ => /[^\*\"\[\]:;,\|\{\}<>]+/,

  argc: $ => /\d/,

  macro_parameter: $ => /#\d/,
};
