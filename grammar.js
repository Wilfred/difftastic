const PREC = {
  // this resolves a conflict between the usage of ':' in a lambda vs in a
  // typed parameter. In the case of a lambda, we don't allow typed parameters.
  typed_parameter: -1,

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
    $._dedent,
  ],

  conflicts: $ => [
    [$.keyword_identifier, $.print_statement],
    [$.keyword_identifier, $.exec_statement],
  ],

  rules: {
    module: $ => repeat($._statement),

    _statement: $ => choice(
      $._simple_statements,
      $._compound_statement
    ),

    // Simple statements

    _simple_statements: $ => seq(
      $._simple_statement,
      optional(repeat(seq($._semicolon, $._simple_statement))),
      optional($._semicolon),
      $._newline
    ),

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
      $.global_statement,
      $.nonlocal_statement,
      $.exec_statement
    ),

    keyword_identifier: $ => choice('print', 'exec'),

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
        ),
        $._expression,
        commaSep1($._expression)
      ),
      optional(',')
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
      seq(commaSep1($._expression), optional(',')),
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
      optional($.expression_list),
      optional(seq('from', $._expression))
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
      $.async_function_definition,
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

    async_function_definition: $ => seq(
      'async',
      $._function_definition
    ),

    function_definition: $ => $._function_definition,

    _function_definition: $ => seq(
      'def',
      $.identifier,
      $.parameters,
      optional(
        seq(
          '->',
          $.type
        )
      ),
      ':',
      $._suite
    ),

    parameters: $ => seq(
      '(',
      optional($._parameters),
      ')'
    ),

    lambda_parameters: $ => $._parameters,

    _parameters: $ => seq(
      commaSep1(choice(
        $.identifier,
        $.tuple,
        $.typed_parameter,
        $.keyword_identifier,
        $.default_parameter,
        $.typed_default_parameter,
        $.list_splat_parameter,
        $.dictionary_splat_parameter
      )),
      optional(',')
    ),

    default_parameter: $ => seq(
      choice($.identifier, $.keyword_identifier),
      '=',
      $._expression
    ),

    typed_default_parameter: $ => prec(PREC.typed_parameter, seq(
      choice($.identifier, $.keyword_identifier),
      ':',
      $.type,
      '=',
      $._expression
    )),

    list_splat_parameter: $ => seq(
      '*',
      optional($.identifier)
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

    nonlocal_statement: $ => seq(
      'nonlocal',
      commaSep1($.identifier)
    ),

    exec_statement: $ => seq(
      'exec',
      $.string,
      optional(
        seq(
          'in',
          commaSep1($._expression)
        )
      )
    ),

    class_definition: $ => seq(
      'class',
      $.identifier,
      optional($.argument_list),
      ':',
      $._suite
    ),

    argument_list: $ => seq(
      '(',
      optional(commaSep1(
        choice(
          $._expression,
          $.keyword_argument,
          $.list_splat_argument,
          $.dictionary_splat_argument
        )
      )),
      optional(','),
      ')'
    ),

    decorated_definition: $ => seq(
      repeat1($.decorator),
      choice(
        $.class_definition,
        $.function_definition,
        $.async_function_definition
      )
    ),

    decorator: $ => seq(
      '@',
      $.dotted_name,
      optional($.argument_list),
      $._newline
    ),

    _suite: $ => choice(
      $._simple_statements,
      seq(
        $._indent,
        repeat($._statement),
        $._dedent
      )
    ),

    variables: $ => seq(
      commaSep1($._primary_expression),
      optional(',')
    ),

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
      $.await,
      $.lambda,
      $._primary_expression,
      $.conditional_expression
    ),

    _primary_expression: $ => choice(
      $.binary_operator,
      $.identifier,
      $.keyword_identifier,
      $.string,
      $.concatenated_string,
      $.integer,
      $.float,
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
      $.generator_expression,
      $.ellipsis
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
      optional($.lambda_parameters),
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

    yield: $ => seq(
      'yield',
      choice(
        seq(
          'from',
          $._expression
        ),
        optional($.expression_list)
      )
    ),

    attribute: $ => seq(
      $._primary_expression,
      '.',
      $.identifier
    ),

    subscript: $ => seq(
      $._primary_expression,
      '[',
      commaSep1(choice($._expression, $.slice)),
      optional(','),
      ']'
    ),

    slice: $ => seq(
      optional($._expression),
      ':',
      optional($._expression),
      optional(seq(':', optional($._expression)))
    ),

    ellipsis: $ => '...',

    call: $ => prec(PREC.call, seq(
      $._primary_expression,
      choice(
        $.generator_expression,
        $.argument_list
      )
    )),

    typed_parameter: $ => prec(PREC.typed_parameter, seq(
      choice(
        $.identifier,
        $.list_splat_parameter,
        $.dictionary_splat_parameter
      ),
      ':',
      $.type
    )),

    type: $ => $._expression,

    keyword_argument: $ => seq(
      choice($.identifier, $.keyword_identifier),
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
      choice($._list_comprehension, commaSep1($._expression))
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
      $._set_comprehension,
      '}'
    ),

    _set_comprehension: $ => seq(
      $._expression,
      'for',
      $.variables,
      'in',
      choice($._expression, $._set_comprehension)
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
      optional(','),
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
        seq('`', repeat(choice(/[^\\`\n]/, /\\./, /\\\n/)), '`'),
        seq('"', repeat(choice(/[^\\"\n]/, /\\./, /\\\n/)), '"'),
        seq("'", repeat(choice(/[^\\'\n]/, /\\./, /\\\n/)), "'"),
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

    integer: $ => token(choice(
      seq(
        choice('0x', '0X'),
        repeat1(/_?[A-Fa-f0-9]+/),
        optional(/[Ll]/)
      ),
      seq(
        choice('0o', '0O'),
        repeat1(/_?[0-7]+/),
        optional(/[Ll]/)
      ),
      seq(
        choice('0b', '0B'),
        repeat1(/_?[0-1]+/),
        optional(/[Ll]/)
      ),
      seq(
        repeat1(/[0-9]+_?/),
        choice(
          optional(/[Ll]/), // long numbers
          optional(/[jJ]/) // complex numbers
        )
      )
    )),

    float: $ => token(
      seq(
        choice(
          seq(repeat(/[0-9]+_?/), '.', repeat(/[0-9]+_?/), optional(/[eE]/), optional(/[\+-]/), repeat(/[0-9]+_?/)),
          seq(repeat(/[0-9]+_?/), /[eE]/, optional(/[\+-]/), repeat1(/[0-9]+_?/))
        ),
        optional(
          choice(
            optional(/[Ll]/), // long numbers
            optional(/[jJ]/) // complex numbers
          )
        )
      )
    ),

    identifier: $ => /[\a_]\w*/,

    true: $ => 'True',
    false: $ => 'False',

    none: $ => 'None',

    await: $ => seq(
      'await',
      $._expression
    ),

    comment: $ => token(seq('#', /.*/)),

    _semicolon: $ => ';'
  }
})

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
