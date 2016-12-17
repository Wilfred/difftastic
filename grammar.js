const PREC = {
  or: 0,
  and: 1,
  bitwise_or: 0,
  bitwise_and: 1,
  xor: 2,
  shift: 3,
  plus: 3,
  times: 4,
  power: 5,
  not: 6,
  call: 10,
}

module.exports = grammar({
  name: 'python',

  extras: $ => [
    $.comment,
    /\s/
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent
  ],

  rules: {
    module: $ => optional(seq(
      repeat1($._statement),
      optional(choice(';', $._newline))
    )),

    _statement: $ => choice(
      seq($._simple_statement, $._newline),
      $._compound_statement
    ),

    // Simple statements

    _simple_statement: $ => choice(
      $.print_statement,
      $.expression_statement,
      $.return_statement,
      $.delete_statement,
      $.pass_statement,
      $.break_statement,
      $.continue_statement
    ),

    print_statement: $ => seq(
      'print',
      $._expression,
      repeat(seq(',', $._expression))
    ),

    expression_statement: $ => $._expression,

    return_statement: $ => seq(
      'return',
      $.expression_list
    ),

    delete_statement: $ => seq(
      'del',
      $.expression_list
    ),

    pass_statement: $ => 'pass',
    break_statement: $ => 'break',
    continue_statement: $ => 'continue',

    // Compount statements

    _compound_statement: $ => choice(
      $.if_statement,
      $.for_statement,
      $.while_statement,
      $.try_statement,
      $.with_statement,
      $.function_definition,
      $.class_definition,
      $.decorated_definition
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
      $.expression_list,
      'in',
      $.expression_list,
      ':',
      $._suite,
      optional($.else_clause)
    ),

    while_statement: $ => seq(
      'while',
      $._expression,
      ':',
      $._suite,
      optional($.else_clause)
    ),

    try_statement: $ => seq(
      'try',
      ':',
      $._suite,
      choice(
        seq(
          repeat1($.except_clause),
          optional($.else_clause),
          optional($.finally_clause)
        ),
        $.finally_clause
      )
    ),

    except_clause: $ => seq(
      'except',
      $._expression,
      optional(seq(
        choice('as', ','),
        $._expression
      )),
      ':',
      $._suite
    ),

    finally_clause: $ => seq(
      'finally',
      ':',
      $._suite
    ),

    with_statement: $ => seq(
      'with',
      commaSep1($.with_item),
      ':',
      $._suite
    ),

    with_item: $ => seq(
      $._expression,
      optional(seq(
        'as',
        $._expression
      ))
    ),

    function_definition: $ => seq(
      'def',
      $.identifier,
      $.parameters,
      ':',
      $._suite
    ),

    parameters: $ => seq(
      '(',
      optional(seq(
        repeat(seq(
          choice($.identifier, $.default_parameter),
          ','
        )),
        choice(
          seq(
            choice($.identifier, $.default_parameter),
            optional(',')
          ),
          $.list_splat_parameter,
          $.dictionary_splat_parameter,
          seq(
            $.list_splat_parameter,
            ',',
            $.dictionary_splat_parameter
          )
        )
      )),
      ')'
    ),

    default_parameter: $ => seq(
      $.identifier,
      '=',
      $._expression
    ),

    list_splat_parameter: $ => seq(
      '*',
      $.identifier
    ),

    dictionary_splat_parameter: $ => seq(
      '*',
      '*',
      $.identifier
    ),

    class_definition: $ => seq(
      'class',
      $.identifier,
      optional(seq(
        '(',
        $.expression_list,
        ')'
      )),
      ':',
      $._suite
    ),

    decorated_definition: $ => seq(
      repeat1($.decorator),
      choice(
        $.class_definition,
        $.function_definition
      )
    ),

    decorator: $ => seq(
      '@',
      $.dotted_name,
      optional($.arguments),
      $._newline
    ),

    _suite: $ => choice(
      seq(
        $._simple_statement,
        $._newline
      ),
      seq(
        $._indent,
        repeat($._statement),
        $._dedent
      )
    ),

    arguments: $ => seq(
      '(',
      commaSep1($._expression),
      ')'
    ),

    expression_list: $ => commaSep1($._expression),

    dotted_name: $ => sep1($.identifier, '.'),

    // Expressions

    _expression: $ => choice(
      $.number,
      $.identifier,
      $.binary_operator,
      $.unary_operator,
      $.subscript,
      $.call,
      $.list,
      $.list_comprehension,
      $.dictionary,
      $.dictionary_comprehension,
      $.set,
      $.set_comprehension
    ),

    binary_operator: $ => choice(
      prec.left(PREC.plus, seq($._expression, '+', $._expression)),
      prec.left(PREC.plus, seq($._expression, '-', $._expression)),
      prec.left(PREC.times, seq($._expression, '*', $._expression)),
      prec.left(PREC.times, seq($._expression, '/', $._expression)),
      prec.left(PREC.power, seq($._expression, '**', $._expression)),
      prec.left(PREC.bitwise_or, seq($._expression, '|', $._expression)),
      prec.left(PREC.bitwise_and, seq($._expression, '&', $._expression)),
      prec.left(PREC.xor, seq($._expression, '^', $._expression)),
      prec.left(PREC.shift, seq($._expression, '<<', $._expression)),
      prec.left(PREC.shift, seq($._expression, '>>', $._expression)),
      prec.left(PREC.and, seq($._expression, 'and', $._expression)),
      prec.left(PREC.or, seq($._expression, 'or', $._expression))
    ),

    unary_operator: $ => choice(
      prec(PREC.not, seq('not', $._expression))
    ),

    subscript: $ => seq(
      $._expression,
      '[',
      commaSep1(choice($._expression, '...')),
      optional(','),
      ']'
    ),

    call: $ => prec(PREC.call, seq(
      $._expression,
      '(',
      repeat(seq(
        choice($._expression, $.keyword_argument),
        ','
      )),
      choice(
        seq(
          choice($._expression, $.keyword_argument),
          optional(',')
        ),
        seq(
          $.list_splat_argument,
          repeat(seq(',', choice($._expression, $.keyword_argument))),
          optional(seq(',', $.dictionary_splat_argument))
        ),
        $.dictionary_splat_argument
      ),
      ')'
    )),

    keyword_argument: $ => seq(
      $.identifier,
      '=',
      $._expression
    ),

    list_splat_argument: $ => seq(
      '*',
      $._expression
    ),

    dictionary_splat_argument: $ => seq(
      '**',
      $._expression
    ),

    // Literals

    list: $ => seq(
      '[',
      optional(seq(
        commaSep1($._expression),
        optional(',')
      )),
      ']'
    ),

    list_comprehension: $ => seq(
      '[',
      $._expression,
      'for',
      $.expression_list,
      'in',
      $._expression,
      ']'
    ),

    dictionary: $ => seq(
      '{',
      optional(seq(
        commaSep1($.pair),
        optional(',')
      )),
      '}'
    ),

    dictionary_comprehension: $ => seq(
      '{',
      $.pair,
      'for',
      $.expression_list,
      'in',
      $._expression,
      '}'
    ),

    pair: $ => seq(
      $._expression,
      ':',
      $._expression
    ),

    set: $ => seq(
      '{',
      seq(
        commaSep1($._expression),
        optional(',')
      ),
      '}'
    ),

    set_comprehension: $ => seq(
      '{',
      $._expression,
      'for',
      $.expression_list,
      'in',
      $._expression,
      '}'
    ),

    number: $ => token(seq(
      /\d+/,
      optional(seq(
        '.',
        /\d*/
      ))
    )),

    identifier: $ => /\a\w*/,

    comment: $ => token(seq(
      '#',
      /.+/
    ))
  }
})

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
