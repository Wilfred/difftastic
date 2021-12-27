/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const rules = require('./rules');

module.exports = grammar({
  name: 'latex',
  extras: $ => [$._whitespace, $.line_comment],
  externals: $ => [
    $._generic_command_name,
    $._begin_command_name,
    $._end_command_name,
    $._iffalse_command_name,
    $._fi_command_name,
    $._caption_command_name,
    $._citation_command_name,
    $._label_definition_command_name,
    $._label_reference_command_name,
    $._label_reference_range_command_name,
    $._label_number_command_name,
    $._new_command_definition_command_name,
    $._old_command_definition_command_name,
    $._let_command_definition_command_name,
    $._environment_definition_command_name,
    $._glossary_entry_definition_command_name,
    $._glossary_entry_reference_command_name,
    $._acronym_definition_command_name,
    $._acronym_reference_command_name,
    $._theorem_definition_command_name,
    $._color_definition_command_name,
    $._color_set_definition_command_name,
    $._color_reference_command_name,
    $._tikz_library_import_command_name,
    $._package_include_command_name,
    $._class_include_command_name,
    $._latex_include_command_name,
    $._biblatex_include_command_name,
    $._bibtex_include_command_name,
    $._graphics_include_command_name,
    $._svg_include_command_name,
    $._inkscape_include_command_name,
    $._verbatim_include_command_name,
    $._import_command_name,
    $._escaped_lparen_command_name,
    $._escaped_rparen_command_name,
    $._escaped_lbrack_command_name,
    $._escaped_rbrack_command_name,
    $._escaped_lcurly_command_name,
    $._escaped_rcurly_command_name,
    $._part_command_name,
    $._chapter_command_name,
    $._section_command_name,
    $._subsection_command_name,
    $._subsubsection_command_name,
    $._paragraph_command_name,
    $._subparagraph_command_name,
    $._enum_item_command_name,
    $._verbatim_cmd_fi,
    $._verbatim_env_comment,
    $._verbatim_env_verbatim,
    $._verbatim_env_listing,
    $._verbatim_env_minted,
  ],
  supertypes: $ => [$._include],
  rules: {
    source_file: $ => repeat($._full_content),

    ...rules,

    _full_content: $ =>
      choice($._section, $._basic_content, $._contextual_delimiter, '[', ']'),

    _basic_content: $ =>
      choice(alias($._environment, $.environment), $._minimal_content),

    _minimal_content: $ =>
      choice(
        $.curly_group,
        $.block_comment,
        $.displayed_equation,
        $.inline_formula,
        $.math_set,
        $.text,
        $.macro_parameter,
        $._command
      ),

    _contextual_delimiter: $ => choice(',', '=', '(', ')'),
  },
});
