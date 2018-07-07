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
}

module.exports = grammar({
  name: 'lua',

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  inline: $ => [
    $._statement
  ],

  conflicts: $ => [
    [$._prefix],
    [$._expression, $._variable_declarator],
    [$._expression, $.function_call_statement]
  ],

  externals: $ => [
    $.comment,
    $._multiline_string
  ],

  rules: {
    program: $ => repeat($._statement),

    return_statement: $ => seq(
      'return',
      optional(sequence($._expression)),
      optional($._empty_statement)
    ),

    // Statements
    _statement: $ => choice(
      alias($._expression, $.expression),

      $.variable_declaration,
      $.local_variable_declaration,

      $.do_statement,
      $.if_statement,
      $.while_statement,
      $.repeat_statement,
      $.for_statement,
      $.for_in_statement,

      $.goto_statement,
      $.break_statement,

      $.label_statement,
      $._empty_statement,

      alias($.function_statement, $.function),
      alias($.local_function_statement, $.local_function),
      alias($.function_call_statement, $.function_call)
    ),

    // Declarations
    variable_declaration: $ => seq(
      sequence(alias($._variable_declarator, $.variable_declarator)),
      '=',
      sequence($._expression)
    ),

    local_variable_declaration: $ => seq(
      'local',
      alias($._local_variable_declarator, $.variable_declarator),
      optional(seq('=', sequence($._expression)))
    ),

    _variable_declarator: $ => choice(
      $.identifier,
      seq($._prefix, '[', $._expression, ']'),
      seq($._prefix, '.', alias($.identifier, $.property_identifier))
    ),

    _local_variable_declarator: $ => sequence($.identifier),

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

    // For statements
    for_statement: $ => seq(
      'for',
      alias($._loop_expression, $.loop_expression),
      'do',
      repeat($._statement),
      optional($.return_statement),
      'end'
    ),

    for_in_statement: $ => seq(
      'for',
      alias($._in_loop_expression, $.loop_expression),
      'do',
      repeat($._statement),
      optional($.return_statement),
      'end'
    ),

    _loop_expression: $ => seq(
      $.identifier,
      '=',
      $._expression,
      ',',
      $._expression,
      optional(seq(',', $._expression))
    ),

    _in_loop_expression: $ => seq(
      sequence($.identifier),
      'in',
      sequence($._expression),
    ),

    // Simple statements
    goto_statement: $ => seq(
      'goto',
      $.identifier
    ),

    break_statement: $ => 'break',

    // Void statements
    label_statement: $ => seq(
      '::',
      $.identifier,
      '::'
    ),

    _empty_statement: $ => ';',

    // Functions
    function_statement: $ => seq(
      'function',
      $.function_name,
      $._function_body
    ),

    local_function_statement: $ => seq(
      'local',
      'function',
      $.identifier,
      $._function_body
    ),

    function_call_statement: $ => prec.dynamic(PREC.PRIORITY, choice(
      seq($._prefix, $.arguments),
      seq($._prefix, ':', alias($.identifier, $.method), $.arguments)
    )),

    arguments: $ => choice(
      seq('(', optional(sequence($._expression)), ')'),
      $.table,
      $.string
    ),

    function_name: $ => seq(
      $.identifier,
      repeat(seq('.', alias($.identifier, $.property_identifier))),
      optional(seq(':', alias($.identifier, $.method)))
    ),

    parameters: $ => seq(
      '(',
      optional(choice(
        seq(
          optional(seq($.self, optional(','))),
          sequence($.identifier),
          optional(seq(',', $.spread))
        ),
        seq($.spread)
      )),
      ')'
    ),

    _function_body: $ => seq(
      $.parameters,
      repeat($._statement),
      optional($.return_statement),
      'end'
    ),

    // Expressions
    _expression: $ => choice(
      $.spread,
      $._prefix,

      $.function_definition,

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

    this: $ => 'this',
    self: $ => 'self',

    global_variable: $ => choice('_G', '_VERSION'),

    _prefix: $ => choice(
      $.this,
      $.self,
      $.global_variable,
      $._variable_declarator,
      alias($.function_call_statement, $.function_call),
      seq('(', $._expression, ')')
    ),

    // Definitions
    function_definition: $ => seq(
      'function',
      $._function_body
    ),

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
        decimal_digits = /[0-9]+/
        signed_integer = seq(optional(choice('-', '+')), decimal_digits)
        decimal_exponent_part = seq(choice('e', 'E'), signed_integer)

        decimal_integer_literal = choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(decimal_digits))
        )

        hex_digits = /[a-fA-F0-9]+/
        hex_exponent_part = seq(choice('p', 'P'), signed_integer)

        decimal_literal = choice(
          seq(decimal_integer_literal, '.', optional(decimal_digits), optional(decimal_exponent_part)),
          seq('.', decimal_digits, optional(decimal_exponent_part)),
          seq(decimal_integer_literal, optional(decimal_exponent_part))
        )

        hex_literal = seq(
          choice('0x', '0X'),
          hex_digits,
          optional(seq('.', hex_digits)),
          optional(hex_exponent_part)
        )

      return token(choice(
        decimal_literal,
        hex_literal
      ))
    },

    nil: $ => 'nil',
    true: $ => 'true',
    false: $ => 'false',

    // Identifiers
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
})

function sequence(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
