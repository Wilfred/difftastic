/* Copyright (c) 2022 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

const BooleanLiterals = ['on', 'off', 'true', 'false'].map(styleInsensitive);

module.exports = grammar({
  name: 'nim',

  word: $ => $.identifier,

  externals: $ => [
    $._indent,
    $._indent_any,
    $._dedent,
    $._eol
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._declaration,
      $.expression_statement
    ),

    expression_statement: $ => seq(
      $.expression,
      $._eol
    ),

    _declaration: $ => choice(
      $.const_section,
      $.var_section,
      $.let_section
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

    identifier: $ => /[a-zA-Z\x80-\xff](?:_?[a-zA-Z\x80-\xff0-9])*/,

    _type: $ => choice(
      prec.dynamic(-1, $._type_identifier)
    ),

    _type_identifier: $ => alias($.identifier, $.type_identifier),

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
    )
  }
});

function styleInsensitive(ident) {
  let result = ident[0];
  for (let i = 1, L = ident.length; i < L; i++) {
    const lower = ident[i].toLowerCase();
    const upper = ident[i].toUpperCase();
    result = lower === upper
      ? result.concat(`_?${lower}`)
      : result.concat(`_?(?:${lower}|${upper})`);
  }

  return new RegExp(result);
}

function singularOrSection($, sectionBody) {
  return choice(
    seq(sectionBody, $._eol),
    seq(
      $._eol, $._indent,
      repeat1(
        seq(sectionBody, $._eol)
      ),
      $._dedent
    )
  )
}

function repeatSep1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}
