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
  };

module.exports = grammar({
  name: 'nim',

  word: $ => $.identifier,

  externals: $ => [
    $._layout_indent_start,
    $._layout_indent,
    $._layout_indent_eq,
    $._layout_indent_gt,
    $._layout_dedent,
    $._long_string_quotes,
    $._newline,
    $._block_comment_specials
  ],

  extras: $ => [' ', $._newline_gt, $.block_comment, $.comment],

  conflicts: $ => [
    [$.case],
    [$.if],
    [$.try],
    [$.when],
    [$.object_type]
  ],

  rules: {
    source_file: $ => seq(
      repeat($._newline),
      $._layout_indent_start,
      optional(repeatSep1($._indent_eq, $._statement)),
      repeat($._newline)
    ),

    statement_list: $ => prec.right(choice(
      repeatSep1(';', $._statement_simple),
      seq(
        $._indent,
        repeatSep1(choice($._indent_eq, ';'), $._statement),
        $._dedent
      )
    )),

    _statement: $ => choice(
      $._declaration,
      $._statement_simple,
      $.for,
      $.while
    ),

    for: $ => seq(
      styleInsensitive('for'),
      field('left', alias($._pattern_list, $.pattern_list)),
      styleInsensitive('in'),
      field('right', $._expression),
      ':',
      field('body', $.statement_list)
    ),

    _pattern_list: $ => prec.right(repeatSep1(
      ',', choice($.identifier, $.tuple_pattern)
    )),

    tuple_pattern: $ => seq(
      '(', repeatSep1(',', $._pattern_list), ')'
    ),

    while: $ => seq(
      styleInsensitive('while'),
      field('condition', $._expression),
      ':',
      field('body', $.statement_list)
    ),

    _statement_simple: $ => choice(
      $._expression,
      $.import_statement,
      $.export_statement,
      $.import_from_statement,
      $.include_statement,
      $.discard_statement,
      $.asm_statement,
      $.break_statement,
      $.continue_statement,
      $.raise_statement,
      $.return_statement,
      $.yield_statement,
      $.bind_statement,
      $.mixin_statement
    ),

    import_statement: $ => prec.left(seq(
      styleInsensitive('import'),
      repeatSep1(',', field('module', $._expression)),
      optional($.import_exception)
    )),

    export_statement: $ => prec.left(seq(
      styleInsensitive('export'),
      repeatSep1(',', field('symbol', $._expression)),
      optional(alias($.import_exception, $.export_exception))
    )),

    import_exception: $ => prec.left(seq(
      styleInsensitive('except'),
      repeatSep1(',', $._expression)
    )),

    import_from_statement: $ => prec.left(seq(
      styleInsensitive('from'),
      field('module', $._expression),
      styleInsensitive('import'),
      repeatSep1(',', field('symbol', $._expression))
    )),

    include_statement: $ => prec.left(seq(
      styleInsensitive('include'),
      repeatSep1(',', field('path', $._expression))
    )),

    discard_statement: $ => seq(
      styleInsensitive('discard'),
      optional($._expression)
    ),

    asm_statement: $ => seq(
      styleInsensitive('asm'),
      $.string_literal
    ),

    break_statement: $ => seq(
      styleInsensitive('break'),
      optional(field('label', $._expression))
    ),

    continue_statement: $ => seq(
      styleInsensitive('continue'),
      optional(field('label', $._expression))
    ),

    raise_statement: $ => seq(
      styleInsensitive('raise'),
      optional($._expression)
    ),

    return_statement: $ => seq(
      styleInsensitive('return'),
      optional($._expression)
    ),

    yield_statement: $ => seq(
      styleInsensitive('yield'),
      $._expression
    ),

    bind_statement: $ => prec.left(seq(
      styleInsensitive('bind'),
      repeatSep1(',', $._expression)
    )),

    mixin_statement: $ => prec.left(seq(
      styleInsensitive('mixin'),
      repeatSep1(',', $._expression)
    )),

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
      $._symbol_declaration_list, $.variable_declaration
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
        repeatSep1(
          /[,;]/,
          alias($._symbol_declaration_list, $.field_declaration)
        ),
        ']'
      ),
      seq(
        $._indent,
        repeat1(
          seq(
            $._indent_eq,
            alias($._symbol_declaration_list, $.field_declaration)
          )
        ),
        $._dedent
      )
    ),

    _symbol_declaration_list: $ => seq(
      repeatSep1(',', $._symbol_declaration),
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
      repeatSep1(',', $._symbol_declaration),
      ')'
    ),

    exported_symbol: $ => seq(field('name', $.identifier), '*'),

    distinct_type: $ => prec.left(1, seq(styleInsensitive('distinct'), $._type)),

    ref_type: $ => seq(styleInsensitive('ref'), $._type),

    _expression: $ => choice(
      $.identifier,
      $._literal,
      $.call,
      $.block,
      $.if,
      $.when,
      $.case,
      $.try
    ),

    call: $ => seq(
      field('function', $.identifier),
      field('arguments', $.argument_list)
    ),

    argument_list: $ => choice(
      $._paren_argument_list,
      $._command_argument_list
    ),

    _paren_argument_list: $ => seq(
      token.immediate('('),
      optional(repeatSep1(',', seq($._expression))),
      ')'
    ),

    _command_argument_list: $ => prec.left(
      repeatSep1(',', $._expression)
    ),

    block: $ => seq(
      styleInsensitive('block'),
      optional(field('name', $.identifier)),
      ':',
      field('body', $.statement_list)
    ),

    if: $ => seq(
      styleInsensitive('if'),
      field('condition', $._expression),
      ':',
      field('consequence', $.statement_list),
      repeat(seq(optional($._indent_ge), field('alternative', $.elif_clause))),
      optional(seq(optional($._indent_ge), field('alternative', $.else_clause)))
    ),

    when: $ => seq(
      styleInsensitive('when'),
      field('condition', $._expression),
      ':',
      field('consequence', $.statement_list),
      repeat(seq(optional($._indent_ge), field('alternative', $.elif_clause))),
      optional(seq(optional($._indent_ge), field('alternative', $.else_clause)))
    ),

    case: $ => seq(
      styleInsensitive('case'),
      field('value', $._expression),
      optional(':'),
      optional(repeat1(seq(optional($._indent_ge), $.of_branch))),
      repeat(seq(optional($._indent_ge), field('alternative', $.elif_clause))),
      optional(seq(optional($._indent_ge), field('alternative', $.else_clause)))
    ),

    of_branch: $ => seq(
      styleInsensitive('of'),
      repeatSep1(',', field('value', $._expression)),
      ':',
      field('body', $.statement_list)
    ),

    elif_clause: $ => seq(
      styleInsensitive('elif'),
      field('condition', $._expression),
      ':',
      field('consequence', $.statement_list)
    ),

    else_clause: $ => seq(
      styleInsensitive('else'),
      ':',
      field('body', $.statement_list)
    ),

    try: $ => seq(
      styleInsensitive('try'),
      ':',
      field('body', $.statement_list),
      repeat(seq($._indent_eq, $.except_branch)),
      optional(seq($._indent_eq, $.finally_branch))
    ),

    except_branch: $ => seq(
      styleInsensitive('except'),
      optional(repeatSep1(',', field('exception', $._expression))),
      ':',
      field('body', $.statement_list),
    ),

    finally_branch: $ => seq(
      styleInsensitive('finally'),
      ':',
      field('body', $.statement_list)
    ),

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

    _long_string_content: $ => choice(
      token.immediate(/[^"\n\r]+/),
      $._newline,
      $._long_string_quotes
    ),

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
      repeat(choice(token.immediate(/[^"\\\n\r]+/), $.escape_sequence)),
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
      $._expression, ',',
      optional(repeatSep1(',', $._expression)),
      ')'
    ),

    /* Identifier rules must be last to avoid overtaking keywords in precedence */
    identifier: $ => /[a-zA-Z\x80-\xff](?:_?[a-zA-Z\x80-\xff0-9])*/,
    _type_identifier: $ => alias($.identifier, $.type_identifier),

    block_comment: $ => seq(
      '#[', repeat($._block_comment_content), ']#'
    ),

    _block_comment_content: $ => choice(
      token.immediate(/[^#\]\n\r]+/),
      $._newline,
      $._block_comment_specials
    ),

    comment: $ => /#(?:[^\[\n\r][^\n\r]*)*/,

    _indent: $ => seq(repeat($._newline), $._layout_indent),
    _indent_eq: $ => seq(repeat($._newline), $._layout_indent_eq),
    _indent_gt: $ => seq(repeat($._newline), $._layout_indent_gt),
    _indent_ge: $ => seq(repeat($._newline), choice($._layout_indent_gt, $._layout_indent_eq)),
    _dedent: $ => seq(repeat($._newline), $._layout_dedent),

    _newline_gt: $ => seq($._newline, $._indent_gt)
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

function optionalUnderscore(rule) {
  return seq(rule, repeat(seq(optional('_'), rule)));
}

function repeatIndentGE1($, rule) {
  return choice(
    repeat1(seq($._indent_eq, rule)),
    seq(
      $._indent,
      repeatSep1($._indent_eq, rule),
      $._dedent
    )
  )
}
