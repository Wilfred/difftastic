const PREC = {
  compare: 1,
  or: 10,
  and: 11,
  bitwise_or: 12,
  bitwise_and: 13,
  xor: 14,
  shift: 15,
  plus: 16,
  times: 17,
  power: 18,
  not: 19,
  call: 20,
  attribute: 20
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
      $.import_statement,
      $.import_from_statement,
      $.print_statement,
      $.expression_statement,
      $.assignment_statement,
      $.return_statement,
      $.delete_statement,
      $.pass_statement,
      $.break_statement,
      $.continue_statement
    ),

    import_statement: $ => seq(
      'import',
      $._import_list
    ),

    import_from_statement: $ => seq(
      'from',
      choice(
        seq(
          repeat('.'),
          $.dotted_name
        ),
        repeat1('.')
      ),
      'import',
      choice(
        $.wildcard_import,
        $._import_list,
        seq('(', $._import_list, ')')
      )
    ),

    _import_list: $ => seq(
      commaSep1(choice(
        $.dotted_name,
        $.aliased_import
      )),
      optional(',')
    ),

    aliased_import: $ => seq(
      $.dotted_name,
      'as',
      $.identifier
    ),

    wildcard_import: $ => '*',

    print_statement: $ => seq(
      'print',
      $._expression,
      repeat(seq(',', $._expression))
    ),

    expression_statement: $ => $._expression,

    assignment_statement: $ => seq(
      $.expression_list,
      '=',
      $.expression_list
    ),

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

    expression_list: $ => commaSep1($._primary_expression),

    dotted_name: $ => sep1($.identifier, '.'),

    // Expressions

    _expression: $ => choice(
      $.comparison_operator,
      $._primary_expression
    ),

    _primary_expression: $ => choice(
      $.binary_operator,
      $.identifier,
      $.string,
      $.number,
      $.unary_operator,
      $.attribute,
      $.subscript,
      $.call,
      $.list,
      $.list_comprehension,
      $.dictionary,
      $.dictionary_comprehension,
      $.set,
      $.set_comprehension,
      $.tuple
    ),

    binary_operator: $ => choice(
      prec.left(PREC.plus, seq($._primary_expression, '+', $._primary_expression)),
      prec.left(PREC.plus, seq($._primary_expression, '-', $._primary_expression)),
      prec.left(PREC.times, seq($._primary_expression, '*', $._primary_expression)),
      prec.left(PREC.times, seq($._primary_expression, '/', $._primary_expression)),
      prec.left(PREC.power, seq($._primary_expression, '**', $._primary_expression)),
      prec.left(PREC.bitwise_or, seq($._primary_expression, '|', $._primary_expression)),
      prec.left(PREC.bitwise_and, seq($._primary_expression, '&', $._primary_expression)),
      prec.left(PREC.xor, seq($._primary_expression, '^', $._primary_expression)),
      prec.left(PREC.shift, seq($._primary_expression, '<<', $._primary_expression)),
      prec.left(PREC.shift, seq($._primary_expression, '>>', $._primary_expression)),
      prec.left(PREC.and, seq($._primary_expression, 'and', $._primary_expression)),
      prec.left(PREC.or, seq($._primary_expression, 'or', $._primary_expression))
    ),

    unary_operator: $ => choice(
      prec(PREC.not, seq('not', $._primary_expression))
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
          '<>',
          'in',
          seq('not', 'in'),
          'is',
          seq('is', 'not')
        ),
        $._primary_expression
      ))
    )),

    attribute: $ => prec(PREC.attribute, seq(
      $._primary_expression,
      '.',
      $.identifier
    )),

    subscript: $ => prec(PREC.call, seq(
      $._primary_expression,
      '[',
      commaSep1(choice($._expression, '...')),
      optional(','),
      ']'
    )),

    call: $ => prec(PREC.call, seq(
      $._primary_expression,
      '(',
      repeat(seq(
        choice($._expression, $.keyword_argument),
        ','
      )),
      optional(choice(
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
      )),
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

    tuple: $ => seq(
      '(',
      optional(seq(
        commaSep1($._expression),
        optional(',')
      )),
      ')'
    ),

    string: $ => token(choice(
      seq(
        '"',
        repeat(choice(
          /[^\\"]/,
          /\\./
        )),
        '"'
      ),
      seq(
        '\'',
        repeat(choice(
          /[^\\']/,
          /\\./
        )),
        '\''
      )
    )),

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
