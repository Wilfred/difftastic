/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const { commandName } = require('../util');

const basicInclude = ($, rule) =>
  seq(
    commandName($, rule),
    field('options', optional($.brack_group_key_value)),
    field('path', $.curly_group_path),
  );

module.exports = {
  _include: $ =>
    choice(
      $.package_include,
      $.class_include,
      $.latex_include,
      $.biblatex_include,
      $.bibtex_include,
      $.graphics_include,
      $.svg_include,
      $.inkscape_include,
      $.verbatim_include,
      $.import,
    ),

  package_include: $ =>
    seq(
      commandName($, 'package_include'),
      field('options', optional($.brack_group_key_value)),
      field('paths', $.curly_group_path_list),
    ),

  class_include: $ => basicInclude($, 'class_include'),

  latex_include: $ => basicInclude($, 'latex_include'),

  biblatex_include: $ =>
    seq(
      commandName($, 'biblatex_include'),
      field('options', optional($.brack_group_key_value)),
      field('glob_pattern', $.curly_group_glob_pattern),
    ),

  bibtex_include: $ => basicInclude($, 'bibtex_include'),

  graphics_include: $ => basicInclude($, 'graphics_include'),

  svg_include: $ => basicInclude($, 'svg_include'),

  inkscape_include: $ => basicInclude($, 'inkscape_include'),

  verbatim_include: $ => basicInclude($, 'verbatim_include'),

  import: $ =>
    seq(
      commandName($, 'import'),
      field('directory', $.curly_group_path),
      field('file', $.curly_group_path),
    ),
};
