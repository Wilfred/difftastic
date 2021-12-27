/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { commandName } = require('../util');

const verbatimEnvironment = (prefix, name, lexerRule) => ({
  [`_${prefix}_environment`]: $ =>
    seq(
      field('begin', alias($[`_${prefix}_begin`], $.begin)),
      alias($[lexerRule], $.comment),
      field('end', alias($[`_${prefix}_end`], $.end)),
    ),

  [`_${prefix}_begin`]: $ =>
    seq(
      commandName($, 'begin'),
      field('name', alias($[`_${prefix}_curly_group_key`], $.curly_group_key)),
      field('options', optional($.brack_group)),
    ),

  [`_${prefix}_end`]: $ =>
    seq(
      commandName($, 'end'),
      field('name', alias($[`_${prefix}_curly_group_key`], $.curly_group_key)),
    ),

  [`_${prefix}_curly_group_key`]: $ =>
    seq(
      field('left', '{'),
      field('key', alias($[`_${prefix}_key`], $.key)),
      field('right', '}'),
    ),

  [`_${prefix}_key`]: $ => seq(field('word', alias(name, $.word))),
});

module.exports = {
  _environment: $ =>
    choice(
      $._comment_environment,
      $._verbatim_environment,
      $._listing_environment,
      $._generic_environment,
    ),

  // Regular environment
  _generic_environment: $ =>
    seq(field('begin', $.begin), repeat($._full_content), field('end', $.end)),

  begin: $ =>
    prec.right(
      seq(
        commandName($, 'begin'),
        field('name', $.curly_group_key),
        field('options', optional($.brack_group)),
      ),
    ),

  end: $ =>
    prec.right(seq(commandName($, 'end'), field('name', $.curly_group_key))),

  // Verbatim environments
  ...verbatimEnvironment('comment', 'comment', '_verbatim_env_comment'),
  ...verbatimEnvironment('verbatim', 'verbatim', '_verbatim_env_verbatim'),
  ...verbatimEnvironment('listing', 'lstlisting', '_verbatim_env_listing'),
};
