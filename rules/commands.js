/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { commandName } = require('../util');

module.exports = {
  _command: $ =>
    choice(
      $._include,
      $.caption,
      $.citation,
      $.label_definition,
      $.label_reference,
      $.label_reference_range,
      $.label_number,
      $.new_command_definition,
      $.old_command_definition,
      $.let_command_definition,
      $.environment_definition,
      $.glossary_entry_definition,
      $.glossary_entry_reference,
      $.acronym_definition,
      $.acronym_reference,
      $.theorem_definition,
      $.color_definition,
      $.color_set_definition,
      $.color_reference,
      $.tikz_library_import,
      alias($._generic_command, $.command),
    ),

  _generic_command: $ =>
    prec.right(
      seq(
        field('command_name', alias($._generic_command_name, $.command_name)),
        repeat(choice($.curly_group, $.mixed_group)),
      ),
    ),

  caption: $ =>
    seq(
      commandName($, 'caption'),
      field('list_entry', optional($.brack_group)),
      field('heading', $.curly_group),
    ),

  citation: $ =>
    seq(
      commandName($, 'citation'),
      optional(
        seq(
          field('prenote', $.brack_group),
          field('postnote', optional($.brack_group)),
        ),
      ),
      $.curly_group_key_list,
    ),

  label_definition: $ =>
    seq(commandName($, 'label_definition'), field('name', $.curly_group_key)),

  label_reference: $ =>
    seq(
      commandName($, 'label_reference'),
      field('names', $.curly_group_key_list),
    ),

  label_reference_range: $ =>
    seq(
      commandName($, 'label_reference_range'),
      field('name_lo', $.curly_group_key),
      field('name_hi', $.curly_group_key),
    ),

  label_number: $ =>
    seq(
      commandName($, 'label_number'),
      field('name', $.curly_group_key),
      field('number', $.curly_group),
    ),

  new_command_definition: $ =>
    seq(
      commandName($, 'new_command_definition'),
      field('declaration', $.curly_group_command_name),
      field('argc', optional($.brack_group_argc)),
      field('implementation', $.curly_group),
    ),

  old_command_definition: $ =>
    seq(
      commandName($, 'old_command_definition'),
      field('declaration', alias($._generic_command_name, $.command_name)),
    ),

  let_command_definition: $ =>
    seq(
      commandName($, 'let_command_definition'),
      field('declaration', alias($._generic_command_name, $.command_name)),
      optional('='),
      field('implementation', alias($._generic_command_name, $.command_name)),
    ),

  environment_definition: $ =>
    seq(
      commandName($, 'environment_definition'),
      field('name', $.curly_group_key),
      field('argc', optional($.brack_group_argc)),
      field('begin', $.curly_group_impl),
      field('end', $.curly_group_impl),
    ),

  glossary_entry_definition: $ =>
    seq(
      commandName($, 'glossary_entry_definition'),
      field('name', $.curly_group_key),
      field('properties', $.curly_group_key_value),
    ),

  glossary_entry_reference: $ =>
    seq(
      commandName($, 'glossary_entry_reference'),
      field('options', optional($.brack_group_key_value)),
      field('name', $.curly_group_key),
    ),

  acronym_definition: $ =>
    seq(
      commandName($, 'acronym_definition'),
      field('options', optional($.brack_group_key_value)),
      field('name', $.curly_group_key),
      field('abbrv', $.curly_group),
      field('full', $.curly_group),
    ),

  acronym_reference: $ =>
    seq(
      commandName($, 'acronym_reference'),
      field('options', optional($.brack_group_key_value)),
      field('name', $.curly_group_key),
    ),

  theorem_definition: $ =>
    prec.right(
      seq(
        commandName($, 'theorem_definition'),
        field('options', optional($.brack_group_key_value)),
        field('name', $.curly_group_key),
        optional(
          choice(
            seq(
              field('heading', $.curly_group),
              field('counter', optional($.brack_group_key)),
            ),
            seq(
              field('counter', $.brack_group_key),
              field('heading', $.curly_group),
            ),
          ),
        ),
      ),
    ),

  color_definition: $ =>
    seq(
      commandName($, 'color_definition'),
      field('kind', optional($.brack_group_key)),
      field('name', $.curly_group_key),
      field('model', $.curly_group_key),
      field('spec', $.curly_group_text),
    ),

  color_set_definition: $ =>
    seq(
      commandName($, 'color_set_definition'),
      field('kind', optional($.brack_group_key)),
      field('model', $.curly_group_key_list),
      field('head', $.curly_group),
      field('tail', $.curly_group),
      field('spec', $.curly_group),
    ),

  color_reference: $ =>
    seq(commandName($, 'color_reference'), field('name', $.curly_group_key)),

  tikz_library_import: $ =>
    seq(
      commandName($, 'tikz_library_import'),
      field('name', $.curly_group_key),
    ),
};
