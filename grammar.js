/* Copyright (c) 2022 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

const BooleanLiterals = ['on', 'off', 'true', 'false'].map(styleInsensitive);

module.exports = grammar({
  name: 'nim',

  word: $ => $.identifier,

  externals: $ => [
    $._indent_start,
    $._indent,
    $._indent_eq,
    $._dedent
  ],

  extras: $ => [' ', '\r', '\n'],

  conflicts: $ => [
    [$.object_type]
  ],

  rules: {
    source_file: $ => seq($._indent_start, repeatSep1($._indent_eq, $._statement)),

    _statement: $ => choice(
      $._declaration,
      $.expression_statement
    ),

    expression_statement: $ => seq(
      $.expression
    ),

    _declaration: $ => choice(
      $.const_section,
      $.var_section,
      $.let_section,
      $.type_section
      // TODO: more declarations
    ),

    const_section: $ => seq(
      styleInsensitive('const'),
      singularOrSection($, $.variable_declaration)
    ),

    var_section: $ => seq(
      styleInsensitive('var'),
      singularOrSection($, $.variable_declaration)
    ),

    let_section: $ => seq(
      styleInsensitive('let'),
      singularOrSection($, $.variable_declaration)
    ),

    type_section: $ => seq(
      styleInsensitive('type'),
      singularOrSection($, $.type_declaration)
    ),

    variable_declaration: $ => seq(
      repeatSep1(',', $._variable_name_declaration),
      optional(
        seq(':', field('type', $._type))
      ),
      optional(
        seq('=', field('value', $.expression))
      )
    ),

    _variable_name_declaration: $ => choice(
      field('name', $.identifier),
      $.tuple_deconstruct_declaration
    ),

    tuple_deconstruct_declaration: $ => seq(
      '(',
      repeatSep1(',', field('name', $.identifier)),
      ')'
    ),

    type_declaration: $ => seq(
      field('name', $.identifier),
      '=',
      field('type', $._type)
    ),


    _type: $ => choice(
      $._type_identifier,
      $.tuple_type,
      $.object_type,
      $.distinct_type,
      $.ref_type
    ),

    tuple_type: $ => seq(
      styleInsensitive('tuple'),
      $.field_declaration_list
    ),

    object_type: $ => prec.dynamic(1, seq(
      styleInsensitive('object'),
      optional($.field_declaration_list)
    )),

    field_declaration_list: $ => choice(
      seq('[', repeatSep1(/[,;]/, $.field_declaration), ']'),
      seq($._indent, repeatSep1($._indent_eq, $.field_declaration), $._dedent)
    ),

    field_declaration: $ => seq(
      repeatSep1(',', $._symbol_declaration),
      ':',
      field('type', $._type)
    ),

    _symbol_declaration: $ => choice(
      field('name', $.identifier),
      $.exported_symbol
    ),

    exported_symbol: $ => seq(field('name', $.identifier), '*'),

    distinct_type: $ => prec.left(1, seq(styleInsensitive('distinct'), $._type)),

    ref_type: $ => seq(styleInsensitive('ref'), $._type),

    expression: $ => choice(
      $._literal
    ),

    _literal: $ => choice(
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
      $.tuple
    ),

    boolean_literal: $ => choice(
      ...BooleanLiterals
    ),

    integer_literal: $ => seq(
      $._numeric_literal,
      optional($._integer_literal_suffix)
    ),

    float_literal: $ => choice(
      seq(
        $._numeric_literal,
        $._float_literal_suffix
      ),
      seq(
        $._decimal_literal,
        '.',
        $._decimal_literal,
        optional(seq(/[eE][+-]?/, $._decimal_literal)),
        optional($._float_literal_suffix)
      ),
      seq(
        $._decimal_literal,
        optional(seq('.', $._decimal_literal)),
        seq(/[eE][+-]?/, $._decimal_literal),
        optional($._float_literal_suffix)
      )
    ),

    tuple: $ => seq(
      '(',
      repeatSep1(',', $.expression),
      ')'
    ),

    _numeric_literal: $ => choice(
      $._decimal_literal,
      /0[xX][0-9a-fA-F](?:_?[0-9a-fA-F])*/,
      /0o[0-7](?:_?[0-7])*/,
      /0[bB][01](?:_?[01])*/
    ),

    _decimal_literal: $ => /\d(?:_?\d)*/,

    _integer_literal_suffix: $ => seq(
      optional("'"),
      choice(
        'u', 'U', /[iIuU](?:8|16|32|64)/
      )
    ),

    _float_literal_suffix: $ => seq(
      optional("'"),
      choice(
        'd', 'D', /[fF](?:32|64|128)?/
      )
    ),

    /* Identifier rules must be last to avoid overtaking keywords in precedence */
    identifier: $ => /[a-zA-Z\x80-\xff](?:_?[a-zA-Z\x80-\xff0-9])*/,
    _type_identifier: $ => alias($.identifier, $.type_identifier),
  }
});

function styleInsensitive(ident) {
  let result = ident[0];
  for (let i = 1, L = ident.length; i < L; i++) {
    const lower = ident[i].toLowerCase();
    const upper = ident[i].toUpperCase();
    result = lower === upper
      ? result.concat(`_?${lower}`)
      : result.concat(`_?[${lower}${upper}]`);
  }

  return new RegExp(result);
}

function singularOrSection($, sectionBody) {
  return choice(
    sectionBody,
    seq(
      $._indent,
      repeatSep1(
        $._indent_eq,
        sectionBody
      ),
      $._dedent
    )
  )
}

function repeatSep1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}
