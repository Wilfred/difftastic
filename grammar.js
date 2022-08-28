/* Copyright (c) 2022 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

const
  BooleanLiterals = ['on', 'off', 'true', 'false'].map(styleInsensitive),

  /* Inline rules */
  Digits = {
    decimal: optionalUnderscore(/[0-9]/),
    hexadecimal: optionalUnderscore(/[0-9a-fA-F]/),
    octal: optionalUnderscore(/[0-7]/),
    binary: optionalUnderscore(/[01]/)
  },

  Literals = {
    decimal: Digits.decimal,
    hexadecimal: seq(/0[xX]/, Digits.hexadecimal),
    octal: seq('0o', Digits.octal),
    binary: seq(/0[bB]/, Digits.binary)
  },

  NumericLiteral = choice(
    Literals.decimal, Literals.hexadecimal, Literals.octal, Literals.binary
  ),

  LiteralSuffix = {
    integer: seq(optional("'"), choice(/[uU]/, seq(/[iIuU]/, /8|16|32|64/))),
    float: seq(optional("'"), seq(/[fFdD]/, optional(/32|64|128/))),
  },

  Newline = /[\n\r]+/,

  MaybeNewline = repeat(Newline);

module.exports = grammar({
  name: 'nim',

  word: $ => $.identifier,

  externals: $ => [
    $._indent_start,
    $._indent,
    $._indent_eq,
    $._indent_ge,
    $._dedent,
    $._long_string_content,
    $._spaces_before_comment
  ],

  extras: $ => [' ', $._spaces_before_comment, $.comment],

  conflicts: $ => [
    [$._expression_argument_list, $._command_argument_list]
  ],

  rules: {
    source_file: $ => seq(
      $._indent_start,
      optional(repeatSep1($._indent_eq, $._statement)),
      MaybeNewline
    ),

    _statement: $ => choice(
      $._declaration,
      $._expression,
      alias($._command_call, $.call)
    ),

    _command_call: $ => seq(
      field('function', $.identifier),
      field('arguments', alias($._command_argument_list, $.argument_list))
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
      singularOrSection($, $._variable_declaration_indent)
    ),

    var_section: $ => seq(
      styleInsensitive('var'),
      singularOrSection($, $._variable_declaration_indent)
    ),

    let_section: $ => seq(
      styleInsensitive('let'),
      singularOrSection($, $._variable_declaration_indent)
    ),

    _variable_declaration_indent: $ => alias(
      $._symbol_declaration_indent, $.variable_declaration
    ),

    type_section: $ => seq(
      styleInsensitive('type'),
      singularOrSection($, $.type_declaration)
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

    object_type: $ => seq(
      styleInsensitive('object'),
      optional($.field_declaration_list)
    ),

    field_declaration_list: $ => choice(
      seq(
        '[',
        repeatSepNL1(
          /[,;]/,
          alias($._symbol_declaration_nl, $.field_declaration)
        ),
        ']'
      ),
      seq(
        $._indent,
        repeatSep1(
          $._indent_eq,
          alias($._symbol_declaration_indent, $.field_declaration)
        ),
        $._dedent
      )
    ),

    _symbol_declaration_nl: $ => seq(
      repeatSepNL1(',', $._symbol_declaration),
      optional(seq(':', field('type', $._type))),
      optional(seq('=', field('value', $._expression)))
    ),

    _symbol_declaration_indent: $ => seq(
      repeatSepInd1($, ',', $._symbol_declaration),
      optional(seq(':', field('type', $._type))),
      optional(seq('=', field('value', $._expression)))
    ),

    _symbol_declaration: $ => choice(
      field('name', $.identifier),
      $.exported_symbol,
      $.tuple_deconstruct_declaration
    ),

    tuple_deconstruct_declaration: $ => seq(
      '(',
      repeatSepNL1(',', $._symbol_declaration),
      ')'
    ),

    exported_symbol: $ => seq(field('name', $.identifier), '*'),

    distinct_type: $ => prec.left(1, seq(styleInsensitive('distinct'), $._type)),

    ref_type: $ => seq(styleInsensitive('ref'), $._type),

    _expression: $ => choice(
      $.identifier,
      $._literal,
      $.call
    ),

    call: $ => seq(
      field('function', $.identifier),
      field('arguments', $._expression_argument_list)
    ),

    _expression_argument_list: $ => alias(
      choice(
        $._paren_argument_list,
        $._expression
      ),
      $.argument_list
    ),

    _paren_argument_list: $ => seq(
      token.immediate('('),
      repeatSepNL1(',', seq($._expression)),
      ')'
    ),

    _command_argument_list: $ => repeatSepInd1($, ',', $._expression),

    _literal: $ => choice(
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
      $.string_literal,
      $.tuple
    ),

    boolean_literal: $ => choice(
      ...BooleanLiterals
    ),

    integer_literal: $ => token(seq(
      optional('-'),
      NumericLiteral,
      optional(LiteralSuffix.integer)
    )),

    float_literal: $ => token(choice(
      seq(
        optional('-'),
        NumericLiteral,
        LiteralSuffix.float
      ),
      seq(
        optional('-'),
        Literals.decimal,
        optional(seq('.', Literals.decimal)),
        optional(seq(/[eE][+-]?/, Literals.decimal)),
        optional(LiteralSuffix.float)
      )
    )),

    string_literal: $ => choice(
      $._long_string_literal,
      $._raw_string_literal,
      $._interpreted_string_literal
    ),

    _long_string_literal: $ => seq(/r?"""/, repeat($._long_string_content), '"""'),

    _raw_string_literal: $ => seq(
      'r"',
      token.immediate(/[^"\n\r]*/),
      repeat(
        seq($._escaped_double_quote, token.immediate(/[^"\n\r]*/))
      ),
      '"'
    ),

    _interpreted_string_literal: $ => seq(
      '"',
      repeat(choice(token.immediate(/[^"\\\n\r]/), $.escape_sequence)),
      '"'
    ),

    escape_sequence: $ => token.immediate(
      seq(
        '\\',
        choice(
          'p', 'r', 'c', 'n', 'l', 'f', 't', 'v', '\\', '"', "'", /\d+/, 'a',
          'e', /x[0-9a-fA-F]{2}/, /u(?:[0-9a-fA-F]{4}|\{[0-9a-fA-F]+\})/
        )
      )
    ),

    _escaped_double_quote: $ => alias(token.immediate('""'), $.escape_sequence),

    tuple: $ => seq(
      '(',
      repeatSepNL1(',', $._expression),
      ')'
    ),

    /* Identifier rules must be last to avoid overtaking keywords in precedence */
    identifier: $ => /[a-zA-Z\x80-\xff](?:_?[a-zA-Z\x80-\xff0-9])*/,
    _type_identifier: $ => alias($.identifier, $.type_identifier),

    comment: $ => /#[^\n\r]*/
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
  return seq(rule, repeat(seq(sep, rule)));
}

function repeatSepNL1(sep, rule) {
  return repeatSep1(seq(sep, MaybeNewline), rule);
}

function repeatSepInd1($, sep, rule) {
  return repeatSep1(
    seq(sep, optional($._indent_ge)),
    rule
  );
}

function optionalUnderscore(rule) {
  return seq(rule, repeat(seq(optional('_'), rule)));
}
