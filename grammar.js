const PREC = {
  typed_parameter: -1,
  conditional: -1,

  parenthesized_expression: 1,
  not: 1,
  compare: 2,
  or: 10,
  and: 11,
  bitwise_or: 12,
  bitwise_and: 13,
  xor: 14,
  shift: 15,
  plus: 16,
  times: 17,
  power: 18,
  unary: 19,
  call: 20,
}

module.exports = grammar({

  name: 'gdscript',

  word: $ => $.identifier,

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B]|\\\r?\n/
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,
  ],

  inline: $ => [
    $._simple_statement,
    $._compound_statement,
    $.keyword_identifier,
  ],

  rules: {

    source: $ => repeat($._statement),

// -----------------------------------------------------------------------------
// -                                     Atoms                                 -
// -----------------------------------------------------------------------------

    identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,
    type: $ => $.identifier,
    comment: $ => token(seq('#', /.*/)),
    _semicolon: $ => ';',
    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',

    escape_sequence: $ => token(seq(
      '\\',
      choice(
        /u[a-fA-F\d]{4}/,
        /U[a-fA-F\d]{8}/,
        /x[a-fA-F\d]{2}/,
        /o\d{3}/,
        /\r\n/,
        /[^uxo]/
      )
    )),

    string: $ => seq(
      alias($._string_start, '"'),
      repeat(choice($.escape_sequence, $._string_content)),
      alias($._string_end, '"')
    ),

    float: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits)

      return token(choice(
        seq(digits, '.', optional(digits), optional(exponent)),
        seq(optional(digits), '.', digits, optional(exponent)),
        seq(digits, exponent)
      ))
    },

    integer: $ => token(choice(
      seq(
        choice('0x', '0X'),
        repeat1(/_?[A-Fa-f0-9]+/)
      ),
      seq(
        choice('0o', '0O'),
        repeat1(/_?[0-7]+/),
      ),
      seq(
        choice('0b', '0B'),
        repeat1(/_?[0-1]+/),
      ),
      repeat1(/[0-9]+_?/)
    )),

// -----------------------------------------------------------------------------
// -                                  Statements                               -
// -----------------------------------------------------------------------------

    _statement: $ => choice(
      $._simple_statements,
      $._compound_statement
    ),

    _suite: $ => choice(
      $._simple_statements,
      seq(
        $._indent,
        repeat($._statement),
        $._dedent
      )
    ),

    // Simple statements

    _simple_statements: $ => seq(
      $._simple_statement,
      optional(repeat(seq($._semicolon, $._simple_statement))),
      optional($._semicolon),
      $._newline
    ),

    _simple_statement: $ => choice(
      $.tool_statement,
      $.class_name_statement,
      $.extends_statement,
      $.expression_statement,
      $.variable_statement,
      $.return_statement,
      $.pass_statement,
      $.break_statement,
      $.continue_statement
    ),

    expression_statement: $ => choice(
      $._expression,
      seq(commaSep1($._expression), optional(',')),
      $.assignment,
      $.augmented_assignment,
    ),

    // -- Variables
    variable_statement: $ => seq(
      'var', $.identifier,
      optional(choice(
        $._variable_typed_definition,
        seq($.inferred_type, $._expression),
        seq('=', $._expression)
      ))
    ),

    inferred_type: $ => seq(':', '='),
    _variable_typed_definition: $ => choice(
        seq(':', $.type),
        seq(':', $.type, '=', $._expression)
    ),

    return_statement: $ => seq(
      'return',
      optional($._expression)
    ),

    pass_statement: $ => prec.left('pass'),
    break_statement: $ => prec.left('break'),
    continue_statement: $ => prec.left('continue'),
    tool_statement: $ => 'tool',

    class_name_statement: $ => seq(
      'class_name',
      $.identifier,
      optional(seq(',', /".*"/))
    ),

    dotted_name: $ => sep1($.identifier, '.'),
    extends_statement: $ => seq(
      'extends',
      choice(
        $.identifier,
        $.string,
      )
    ),

    _compound_statement: $ => choice(
      $.if_statement,
      $.for_statement,
      $.while_statement,
      $.function_definition,
      $.class_definition,
    ),

    if_statement: $ => seq(
      'if',
      $._expression,
      ':',
      $._suite,
      repeat($.elif_clause),
      optional($.else_clause)
    ),

    elif_clause: $ => seq(
      'elif',
      $._expression,
      ':',
      $._suite
    ),

    else_clause: $ => seq(
      'else',
      ':',
      $._suite
    ),

    for_statement: $ => seq(
      'for',
      $.identifier,
      'in',
      $._expression,
      ':',
      $._suite
    ),

    while_statement: $ => seq(
      'while',
      $._expression,
      ':',
      $._suite
    ),

    class_definition: $ => seq(
      'class',
      $.identifier,
      optional($.extends_statement),
      ':',
      $._suite
    ),

// -----------------------------------------------------------------------------
// -                                  Expressions                              -
// -----------------------------------------------------------------------------

    _expression: $ => choice(
      $.comparison_operator,
      $.not_operator,
      $.boolean_operator,
      $._primary_expression,
      $.conditional_expression
    ),

    _primary_expression: $ => choice(
      $.binary_operator,
      $.identifier,
      $.string,
      $.integer,
      $.float,
      $.true,
      $.false,
      $.null,
      $.unary_operator,
      $.attribute,
      $.subscript,
      $.call,
      $.list,
      $.dictionary,
      $.parenthesized_expression
    ),

    // -- Operators
    not_operator: $ => prec(PREC.not, seq('not', $._expression)),

    boolean_operator: $ => choice(
      prec.left(PREC.and, seq($._expression, 'and', $._expression)),
      prec.left(PREC.or, seq($._expression, 'or', $._expression))
    ),

    binary_operator: $ => choice(
      prec.left(PREC.plus, seq($._primary_expression, '+', $._primary_expression)),
      prec.left(PREC.plus, seq($._primary_expression, '-', $._primary_expression)),
      prec.left(PREC.times, seq($._primary_expression, '*', $._primary_expression)),
      prec.left(PREC.times, seq($._primary_expression, '/', $._primary_expression)),
      prec.left(PREC.times, seq($._primary_expression, '%', $._primary_expression)),
      prec.left(PREC.bitwise_or, seq($._primary_expression, '|', $._primary_expression)),
      prec.left(PREC.bitwise_and, seq($._primary_expression, '&', $._primary_expression)),
      prec.left(PREC.xor, seq($._primary_expression, '^', $._primary_expression)),
      prec.left(PREC.shift, seq($._primary_expression, '<<', $._primary_expression)),
      prec.left(PREC.shift, seq($._primary_expression, '>>', $._primary_expression))
    ),

    unary_operator: $ => choice(
      prec(PREC.unary, seq('-', $._primary_expression)),
      prec(PREC.unary, seq('+', $._primary_expression)),
      prec(PREC.unary, seq('~', $._primary_expression))
    ),

    comparison_operator: $ => prec.left(PREC.compare, seq(
      $._primary_expression,
      repeat1(seq(
        choice(
          '<',
          '<=',
          '==',
          '!=',
          '>=',
          '>',
          'in',
          'is',
        ),
        $._primary_expression
      ))
    )),

    // -- Accessors
    subscript: $ => seq(
      $._primary_expression,
      '[',
      $._expression,
      ']'
    ),

    attribute: $ => seq(
      $._primary_expression,
      '.',
      $.identifier
    ),

    conditional_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      'if',
      $._expression,
      'else',
      $._expression
    )),

    parenthesized_expression: $ => prec(PREC.parenthesized_expression, seq(
      '(',
      $._expression,
      ')'
    )),

// -----------------------------------------------------------------------------
// -                                  Assignment                               -
// -----------------------------------------------------------------------------

    assignment: $ => seq(
      $._expression,
      '=',
      $._expression
    ),

    augmented_assignment: $ => seq(
      $._expression,
      choice('+=', '-=', '*=', '/=', '%=', '>>=', '<<=', '&=', '^=', '|='),
      $._expression
    ),

// -----------------------------------------------------------------------------
// -                                 Data Structs                              -
// -----------------------------------------------------------------------------

    pair: $ => seq(
      choice(
        seq(
          $._expression,
          ':',
        ),
        seq(
          $.identifier,
          '=',
        )),
      $._expression
    ),

    dictionary: $ => seq(
      '{',
      optional(commaSep1($.pair)),
      optional(','),
      '}'
    ),

    list: $ => seq(
      '[',
      optional(commaSep1($._expression)),
      optional(','),
      ']'
    ),

// -----------------------------------------------------------------------------
// -                              Function Definition                          -
// -----------------------------------------------------------------------------


    typed_parameter: $ => prec(PREC.typed_parameter, seq(
      $.identifier,
      ':',
      $.type
    )),

    default_parameter: $ => seq(
      $.identifier,
      '=',
      $._expression
    ),

    typed_default_parameter: $ => prec(PREC.typed_parameter, seq(
      $.identifier,
      ':',
      $.type,
      '=',
      $._expression
    )),

    _parameters: $ => commaSep1(choice(
        $.identifier,
        $.typed_parameter,
        $.default_parameter,
        $.typed_default_parameter,
    )),

    parameters: $ => seq(
      '(',
      optional($._parameters),
      ')'
    ),

    return_type: $ => seq(
      '->',
      $.type
    ),

    function_definition: $ => seq(
      'func',
      $.identifier,
      $.parameters,
      optional($.return_type),
      ':',
      $._suite
    ),


// -----------------------------------------------------------------------------
// -                                 Function Call                             -
// -----------------------------------------------------------------------------

    argument_list: $ => seq(
      '(',
      optional(commaSep1($._expression)),
      ')'
    ),

    call: $ => prec(PREC.call, seq(
      $._primary_expression,
      $.argument_list
    )),











  } // end rules

})


function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
