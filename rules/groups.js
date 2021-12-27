/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { sepBy } = require('../util');

const group = (left, content, right) =>
  seq(field('left', left), content, field('right', right));

module.exports = {
  curly_group: $ => group('{', repeat($._full_content), '}'),

  curly_group_key: $ => group('{', field('key', $.key), '}'),

  curly_group_key_list: $ => group('{', sepBy(field('key', $.key), ','), '}'),

  curly_group_key_value: $ =>
    group('{', sepBy(field('property', $.key_value_pair), ','), '}'),

  curly_group_path: $ => group('{', field('path', $.path), '}'),

  curly_group_path_list: $ =>
    group('{', sepBy(field('path', $.path), ','), '}'),

  curly_group_text: $ => group('{', field('text', $.text), '}'),

  curly_group_command_name: $ =>
    group(
      '{',
      field('command_name', alias($._generic_command_name, $.command_name)),
      '}',
    ),

  curly_group_impl: $ => group('{', repeat($._minimal_content), '}'),

  curly_group_glob_pattern: $ =>
    group('{', field('glob_pattern', $.glob_pattern), '}'),

  brack_group: $ =>
    prec.right(
      group(
        '[',
        repeat(
          choice($._basic_content, $.brack_group, $._contextual_delimiter),
        ),
        ']',
      ),
    ),

  brack_group_key: $ => prec.right(1, group('[', field('key', $.key), ']')),

  brack_group_key_value: $ =>
    group('[', sepBy(field('property', $.key_value_pair), ','), ']'),

  brack_group_argc: $ => group('[', field('argc', $.argc), ']'),

  mixed_group: $ =>
    group(
      choice('[', '('),
      repeat(choice($._basic_content, $.mixed_group, choice(',', '='))),
      choice(']', ')'),
    ),

  key_value_pair: $ =>
    seq(field('key', $.key), optional(seq('=', field('value', $.value)))),

  value: $ =>
    prec.right(
      repeat1(
        choice(
          $.curly_group,
          $.displayed_equation,
          $.inline_formula,
          $.text,
          $.macro_parameter,
          $._command,
          choice('(', ')'),
          $.brack_group,
        ),
      ),
    ),
};
