/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = {
  _whitespace: $ => /\s+/,

  line_comment: $ => /%[^\r\n]*/,

  block_comment: $ =>
    seq(
      field('left', alias($._iffalse_command_name, $.command_name)),
      field('comment', optional(alias($._verbatim_cmd_fi, $.comment))),
      field('right', alias($._fi_command_name, $.command_name)),
    ),
};
