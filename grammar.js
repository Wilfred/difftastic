const PREC = {
  compare: 2,
  conditional: 2,
  or: 10,
  and: 11,
  bitwise_or: 12,
  bitwise_and: 13,
  xor: 14,
  shift: 15,
  plus: 16,
  times: 17,
  power: 18,
  not: 1,
  unary: 19,
  call: 20,
  attribute: 20
}

module.exports = grammar({
  name: 'python',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B]|\\\n/
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent
  ],

  rules: {
    module: $ => repeat($._statement),

    _statement: $ => choice(
      seq($._simple_statement, repeat1($._newline)),
      $._compound_statement
    ),

    // Simple statements

    _simple_statement: $ => choice(
      $.import_statement,
      $.import_from_statement,
      $.print_statement,
      $.assert_statement,
      $.expression_statement,
      $.return_statement,
      $.delete_statement,
      $.raise_statement,
      $.pass_statement,
      $.break_statement,
      $.continue_statement,
      $.global_statement
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
      choice(
        $.chevron,
        seq(
          optional(seq($.chevron, ',')),
          commaSep1($._expression)
        )
      )
    ),

    chevron: $ => seq(
      '>>',
      $._expression
    ),

    assert_statement: $ => seq(
      'assert',
      $._expression,
      repeat(seq(',', $._expression))
    ),

    expression_statement: $ => choice(
      $._expression,
      $.assignment,
      $.augmented_assignment,
      $.yield
    ),

    return_statement: $ => seq(
      'return',
      optional($.expression_list)
    ),

    delete_statement: $ => seq(
      'del',
      $.expression_list
    ),

    raise_statement: $ => seq(
      'raise',
      optional($.expression_list)
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
      $.variables,
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
      optional(seq(
        $._expression,
        optional(seq(
          choice('as', ','),
          $._expression
        ))
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
      optional(commaSep1(
        choice(
          $.identifier,
          $.default_parameter,
          $.list_splat_parameter,
          $.dictionary_splat_parameter
        )
      )),
      optional(','),
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

    global_statement: $ => seq(
      'global',
      commaSep1($.identifier)
    ),

    class_definition: $ => seq(
      'class',
      $.identifier,
      optional(seq(
        '(',
        optional($.expression_list),
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
      optional(
        commaSep1(
          choice($._expression, $.keyword_argument, $.list_splat_argument, $.dictionary_splat_argument)
        )
      ),
      ')'
    ),

    variables: $ => commaSep1($._primary_expression),

    expression_list: $ => seq(
      commaSep1($._expression),
      optional(',')
    ),

    dotted_name: $ => sep1($.identifier, '.'),

    // Expressions

    _expression: $ => choice(
      $.comparison_operator,
      $.not_operator,
      $.boolean_operator,
      $.lambda,
      $._primary_expression,
      $.conditional_expression
    ),

    _primary_expression: $ => choice(
      $.binary_operator,
      $.identifier,
      $.string,
      $.concatenated_string,
      $.number,
      $.true,
      $.false,
      $.none,
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
      $.tuple,
      $.generator_expression
    ),

    not_operator: $ => choice(
      seq('not', $._expression)
    ),

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
      prec.left(PREC.times, seq($._primary_expression, '//', $._primary_expression)),
      prec.left(PREC.power, seq($._primary_expression, '**', $._primary_expression)),
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
          '<>',
          'in',
          seq('not', 'in'),
          'is',
          seq('is', 'not')
        ),
        $._primary_expression
      ))
    )),

    lambda: $ => seq(
      'lambda',
      optional(commaSep1(
        choice(
          $.identifier,
          $.default_parameter,
          $.list_splat_parameter,
          $.dictionary_splat_parameter
        )
      )),
      optional(','),
      ':',
      $._expression
    ),

    assignment: $ => seq(
      $.expression_list,
      '=',
      $._right_hand_side
    ),

    augmented_assignment: $ => seq(
      $.expression_list,
      choice('+=', '-=', '*=', '/=', '//=', '%=', '**=', '>>=', '<<=', '&=', '^=', '|='),
      $._right_hand_side
    ),

    _right_hand_side: $ => choice(
      $.expression_list,
      $.assignment,
      $.augmented_assignment,
      $.yield
    ),

    yield: $ => seq('yield', optional($.expression_list)),

    attribute: $ => prec(PREC.attribute, seq(
      $._primary_expression,
      '.',
      $.identifier
    )),

    subscript: $ => prec(PREC.call, seq(
      $._primary_expression,
      '[',
      commaSep1(choice($._expression, $.slice, $.ellipsis)),
      optional(','),
      ']'
    )),

    slice: $ => seq(
      optional($._expression),
      ':',
      optional($._expression),
      optional(seq(':', optional($._expression)))
    ),

    ellipsis: $ => '...',

    call: $ => prec(PREC.call, seq(
      choice($._primary_expression, 'print'),
      choice(
        $.generator_expression,
        seq(
          '(',
          optional(commaSep1($._expression)),
          repeat(seq(
            optional(','),
            choice(
              $.keyword_argument,
              $.list_splat_argument,
              $.dictionary_splat_argument
            )
          )),
          optional(','),
          ')'
        )
      )
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
      $._list_comprehension,
      ']'
    ),

    _list_comprehension: $ => seq(
      $._expression,
      'for',
      $.variables,
      'in',
      choice($._list_comprehension, $._expression)
    ),

    dictionary: $ => seq(
      '{',
      optional(commaSep1($.pair)),
      optional(','),
      '}'
    ),

    dictionary_comprehension: $ => seq(
      '{',
      $._expression,
      ':',
      $._dictionary_comprehension,
      '}'
    ),

    pair: $ => seq(
      $._expression,
      ':',
      $._expression
    ),

    _dictionary_comprehension: $ => seq(
      $._expression,
      'for',
      $.variables,
      'in',
      choice($._expression, $._dictionary_comprehension)
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
      $.variables,
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

    generator_expression: $ => seq(
      '(',
      $._generator_expression,
      ')'
    ),

    _generator_expression: $ => seq(
      $._expression,
      'for',
      $.variables,
      'in',
      choice($._expression, $._generator_expression)
    ),

    conditional_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      'if',
      $._expression,
      optional(seq(
        'else',
        $._expression
      )))
    ),

    concatenated_string: $ => seq(
      $.string,
      repeat1($.string)
    ),

    string: $ => token(seq(
      repeat(choice('u', 'r', 'b')),
      choice(
        seq(
          '"',
          repeat(choice(
            /[^\\"]/,
            /\\./
          )),
          '"'
        ),
        seq(
          "'",
          repeat(choice(
            /[^\\']/,
            /\\./
          )),
          "'"
        ),
        seq(
          '"""',
          repeat(choice(
            /[^"]/,
            /"[^"]/,
            /""[^"]/
          )),
          '"""'
        ),
        seq(
          "'''",
          repeat(choice(
            /[^']/,
            /'[^']/,
            /''[^']/
          )),
          "'''"
        )
      )
    )),

    number: $ => token(choice(
      seq(
        '0x',
        /[A-Fa-f0-9]+/
      ),
      seq(
        '.',
        /\d+/,
        optional(/[jJ]/) // complex numbers
      ),
      seq(
        /\d+/,
        optional(seq(
          '.',
          /\d*/
        )),
        optional(/[eE][\+-]?/),
        /\d*/,
        optional(/[jJ]/) // complex numbers
      )
    )),

    identifier: $ => /[\a_]\w*/,

    true: $ => 'True',
    false: $ => 'False',
    none: $ => 'None',

    comment: $ => token(seq('#', /.*/))
  }
})

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
