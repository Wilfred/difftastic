const PREC = {
  COMMA: -1,
  PRIORITY: 1,

  OR: 1,        //=> or
  AND: 2,       //=> and
  COMPARE: 3,   //=> < <= == ~= >= >
  BIT_OR: 4,    //=> |
  BIT_NOT: 5,   //=> ~
  BIT_AND: 6,   //=> &
  SHIFT: 7,     //=> << >>
  CONCAT: 8,    //=> ..
  PLUS: 9,      //=> + -
  MULTI: 10,    //=> * / // %
  UNARY: 11,    //=> not # - ~
  POWER: 12     //=> ^
};

module.exports = grammar({
  name: 'lua',

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  externals: $ => [
    $.comment,
    $._multiline_string
  ],

  rules: {
    lua: $ => repeat($._statement),

    return_statement: $ => seq(
      'return',
      optional(sequence($._expression)),
      optional($._empty_statement)
    ),

    // Statements
    _statement: $ => choice(
      alias($._expression, $.expression),

      $.do_statement,
      $.if_statement,
      $.while_statement,
      $.repeat_statement,

      $._empty_statement
    ),

    // Control statements
    do_statement: $ => seq(
      'do',
      repeat($._statement),
      optional($.return_statement),
      'end'
    ),

    if_statement: $ => seq(
      'if',
      alias($._expression, $.condition_expression),
      'then',
      repeat($._statement),
      optional($.return_statement),
      repeat($._elseif),
      optional($._else),
      'end'
    ),

    _elseif: $ => seq(
      'elseif',
      alias($._expression, $.condition_expression),
      'then',
      repeat($._statement),
      optional($.return_statement)
    ),

    _else: $ => seq(
      'else',
      repeat($._statement),
      optional($.return_statement)
    ),

    while_statement: $ => seq(
      'while',
      alias($._expression, $.condition_expression),
      'do',
      repeat($._statement),
      optional($.return_statement),
      'end'
    ),

    repeat_statement: $ => seq(
      'repeat',
      repeat($._statement),
      optional($.return_statement),
      'until',
      alias($._expression, $.condition_expression)
    ),

    // Void statements
    _empty_statement: $ => ';',

    // Expressions
    _expression: $ => choice(
      $.spread,

      $.table,

      $.binary_operation,
      $.unary_operation,

      $.string,
      $.number,
      $.nil,
      $.true,
      $.false,
      $.identifier
    ),

    spread: $ => '...',

    // Tables
    table: $ => seq(
      '{',
      optional($._field_sequence),
      '}'
    ),

    field: $ => choice(
      seq('[', $._expression, ']', '=', $._expression),
      seq($.identifier, '=', $._expression),
      $._expression
    ),

    _field_sequence: $ => prec(PREC.COMMA, seq(
      $.field,
      repeat(seq($._field_sep, $.field)),
      optional($._field_sep)
    )),

    _field_sep: $ => choice(',', ';'),

    // Operations
    binary_operation: $ => choice(
      ...[
        ['or', PREC.OR],
        ['and', PREC.AND],
        ['<', PREC.COMPARE],
        ['<=', PREC.COMPARE],
        ['==', PREC.COMPARE],
        ['~=', PREC.COMPARE],
        ['>=', PREC.COMPARE],
        ['>', PREC.COMPARE],
        ['|', PREC.BIT_OR],
        ['~', PREC.BIT_NOT],
        ['&', PREC.BIT_AND],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['+', PREC.PLUS],
        ['-', PREC.PLUS],
        ['*', PREC.MULTI],
        ['/', PREC.MULTI],
        ['//', PREC.MULTI],
        ['%', PREC.MULTI],
      ].map(([operator, precedence]) => prec.left(precedence, seq(
        $._expression,
        operator,
        $._expression
      ))),
      ...[
        ['..', PREC.CONCAT],
        ['^', PREC.POWER],
      ].map(([operator, precedence]) => prec.right(precedence, seq(
        $._expression,
        operator,
        $._expression
      )))
    ),

    unary_operation: $ => prec.left(PREC.UNARY, seq(
      choice('not', '#', '-', '~'),
      $._expression
    )),

    // Primitives
    string: $ => choice(
      seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'"),
      seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
      $._multiline_string
    ),

    number: $ => {
      const
        decimal_digits = /[0-9]+/;
        signed_integer = seq(optional(choice('-', '+')), decimal_digits);
        decimal_exponent_part = seq(choice('e', 'E'), signed_integer);

        decimal_integer_literal = choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(decimal_digits))
        );

        hex_digits = /[a-fA-F0-9]+/;
        hex_exponent_part = seq(choice('p', 'P'), signed_integer);

        decimal_literal = choice(
          seq(decimal_integer_literal, '.', optional(decimal_digits), optional(decimal_exponent_part)),
          seq('.', decimal_digits, optional(decimal_exponent_part)),
          seq(decimal_integer_literal, optional(decimal_exponent_part))
        );

        hex_literal = seq(
          choice('0x', '0X'),
          hex_digits,
          optional(seq('.', hex_digits)),
          optional(hex_exponent_part)
        );

      return token(choice(
        decimal_literal,
        hex_literal
      ));
    },

    nil: $ => 'nil',
    true: $ => 'true',
    false: $ => 'false',

    // Identifiers
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
});

function sequence(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
