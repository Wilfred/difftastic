const PREC = {
  // this resolves a conflict between the usage of ':' in a lambda vs in a
  // typed parameter. In the case of a lambda, we don't allow typed parameters.
  lambda: -2,
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
  name: 'python',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B]|\\\r?\n/
  ],

  supertypes: $ => [
    $._simple_statement,
    $._compound_statement,
    $._expression,
    $._primary_expression,
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
    $._suite,
  ],

  word: $ => $.identifier,

  rules: {
    module: $ => repeat($._statement),

    _statement: $ => choice(
      $._simple_statements,
      $._compound_statement
    ),

    // Simple statements

    _simple_statements: $ => seq(
      $._simple_statement,
      optional(repeat(seq(
        $._semicolon,
        $._simple_statement
      ))),
      optional($._semicolon),
      $._newline
    ),

    _simple_statement: $ => choice(
      $.future_import_statement,
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

    import_statement: $ => seq(
      'import',
      $._import_list
    ),

    import_prefix: $ => repeat1('.'),

    relative_import: $ => seq(
      $.import_prefix,
      optional($.dotted_name)
    ),

    future_import_statement: $ => seq(
      'from',
      '__future__',
      'import',
      choice(
        $._import_list,
        seq('(', $._import_list, ')'),
      )
    ),

    import_from_statement: $ => seq(
      'from',
      field('module_name', choice(
        $.relative_import,
        $.dotted_name
      )),
      'import',
      choice(
        $.wildcard_import,
        $._import_list,
        seq('(', $._import_list, ')')
      )
    ),

    _import_list: $ => seq(
      commaSep1(field('name', choice(
        $.dotted_name,
        $.aliased_import
      ))),
      optional(',')
    ),

    aliased_import: $ => seq(
      field('name', $.dotted_name),
      'as',
      field('alias', $.identifier)
    ),

    wildcard_import: $ => '*',

    print_statement: $ => choice(
      prec(1, seq(
        'print',
        $.chevron,
        repeat(seq(',', field('argument', $._expression))),
        optional(','))
      ),
      prec(-1, seq(
        'print',
        commaSep1(field('argument', $._expression)),
        optional(','))
      )
    ),

    chevron: $ => seq(
      '>>',
      $._expression
    ),

    assert_statement: $ => seq(
      'assert',
      commaSep1($._expression)
    ),

    expression_statement: $ => choice(
      $._expression,
      seq(commaSep1($._expression), optional(',')),
      $.assignment,
      $.augmented_assignment,
      $.yield
    ),

    named_expression: $ => seq(
      field('name', $.identifier),
      ':=',
      field('value', $._expression)
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
      optional(seq('from', field('cause', $._expression)))
    ),

    pass_statement: $ => prec.left('pass'),
    break_statement: $ => prec.left('break'),
    continue_statement: $ => prec.left('continue'),

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
      field('condition', $._expression),
      ':',
      field('consequence', $._suite),
      repeat(field('alternative', $.elif_clause)),
      optional(field('alternative', $.else_clause))
    ),

    elif_clause: $ => seq(
      'elif',
      field('condition', $._expression),
      ':',
      field('consequence', $._suite)
    ),

    else_clause: $ => seq(
      'else',
      ':',
      field('body', $._suite)
    ),

    for_statement: $ => seq(
      optional('async'),
      'for',
      field('left', $.variables),
      'in',
      field('right', $.expression_list),
      ':',
      field('body', $._suite),
      field('alternative', optional($.else_clause))
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      ':',
      field('body', $._suite),
      optional(field('alternative', $.else_clause))
    ),

    try_statement: $ => seq(
      'try',
      ':',
      field('body', $._suite),
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
      optional('async'),
      'with',
      commaSep1($.with_item),
      ':',
      field('body', $._suite)
    ),

    with_item: $ => seq(
      field('value', $._expression),
      optional(seq(
        'as',
        field('alias', $._expression)
      ))
    ),

    function_definition: $ => seq(
      optional('async'),
      'def',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(
        seq(
          '->',
          field('return_type', $.type)
        )
      ),
      ':',
      field('body', $._suite)
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
        $.keyword_identifier,
        $.tuple,
        $.typed_parameter,
        $.default_parameter,
        $.typed_default_parameter,
        $.list_splat,
        $.dictionary_splat
      )),
      optional(',')
    ),

    default_parameter: $ => seq(
      field('name', choice($.identifier, $.keyword_identifier)),
      '=',
      field('value', $._expression)
    ),

    typed_default_parameter: $ => prec(PREC.typed_parameter, seq(
      field('name', choice($.identifier, $.keyword_identifier)),
      ':',
      field('type', $.type),
      '=',
      field('value', $._expression)
    )),

    list_splat: $ => seq(
      '*',
      optional($._expression)
    ),

    dictionary_splat: $ => seq(
      '*',
      '*',
      $._expression
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
      field('code', $.string),
      optional(
        seq(
          'in',
          commaSep1($._expression)
        )
      )
    ),

    class_definition: $ => seq(
      'class',
      field('name', $.identifier),
      field('superclasses', optional($.argument_list)),
      ':',
      field('body', $._suite)
    ),

    argument_list: $ => seq(
      '(',
      optional(commaSep1(
        choice(
          $._expression,
          $.list_splat,
          $.dictionary_splat,
          $.keyword_argument
        )
      )),
      optional(','),
      ')'
    ),

    decorated_definition: $ => seq(
      repeat1($.decorator),
      field('definition', choice(
        $.class_definition,
        $.function_definition
      ))
    ),

    decorator: $ => seq(
      '@',
      $.dotted_name,
      field('arguments', optional($.argument_list)),
      $._newline
    ),

    _suite: $ => choice(
      alias($._simple_statements, $.block),
      seq($._indent, $.block)
    ),

    block: $ => seq(
      repeat($._statement),
      $._dedent
    ),

    variables: $ => seq(
      commaSep1($._primary_expression),
      optional(',')
    ),

    expression_list: $ => prec.right(seq(
      commaSep1($._expression),
      optional(',')
    )),

    dotted_name: $ => sep1($.identifier, '.'),

    // Expressions
    _expression_within_for_in_clause: $ => choice(
      $._expression,
      alias($.lambda_within_for_in_clause, $.lambda)
    ),

    _expression: $ => choice(
      $.comparison_operator,
      $.not_operator,
      $.boolean_operator,
      $.await,
      $.lambda,
      $._primary_expression,
      $.conditional_expression,
      $.named_expression
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
      $.parenthesized_expression,
      $.generator_expression,
      $.ellipsis
    ),

    not_operator: $ => prec(PREC.not, seq(
      'not',
      field('argument', $._expression)
    )),

    boolean_operator: $ => choice(
      prec.left(PREC.and, seq(
        field('left', $._expression),
        field('operator', 'and'),
        field('left', $._expression)
      )),
      prec.left(PREC.or, seq(
        field('left', $._expression),
        field('operator', 'or'),
        field('right', $._expression)
      ))
    ),

    binary_operator: $ => {
      const table = [
        ['+', PREC.plus],
        ['-', PREC.plus],
        ['*', PREC.times],
        ['@', PREC.times],
        ['/', PREC.times],
        ['%', PREC.times],
        ['//', PREC.times],
        ['**', PREC.power],
        ['|', PREC.bitwise_or],
        ['&', PREC.bitwise_and],
        ['^', PREC.xor],
        ['<<', PREC.shift],
        ['>>', PREC.shift],
      ];

      return choice(...table.map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._primary_expression),
          field('operator', operator),
          field('right', $._primary_expression)
        ))
      ));
    },

    unary_operator: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '~')),
      field('argument', $._primary_expression)
    )),

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

    lambda: $ => prec(PREC.lambda, seq(
      'lambda',
      field('parameters', optional($.lambda_parameters)),
      ':',
      field('body', $._expression)
    )),

    lambda_within_for_in_clause: $ => seq(
      'lambda',
      field('parameters', optional($.lambda_parameters)),
      ':',
      field('body', $._expression_within_for_in_clause)
    ),

    assignment: $ => seq(
      field('left', $.expression_list),
      choice(
        seq('=', field('right', $._right_hand_side)),
        seq(':', field('type', $.type)),
        seq(':', field('type', $.type), '=', field('right', $._right_hand_side))
      )
    ),

    augmented_assignment: $ => seq(
      field('left', $.expression_list),
      choice('+=', '-=', '*=', '/=', '@=', '//=', '%=', '**=', '>>=', '<<=', '&=', '^=', '|='),
      field('right', $._right_hand_side)
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
      field('value', $._primary_expression),
      '[',
      field('subscript', commaSep1(choice($._expression, $.slice))),
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
      field('function', $._primary_expression),
      field('arguments', choice(
        $.generator_expression,
        $.argument_list
      ))
    )),

    typed_parameter: $ => prec(PREC.typed_parameter, seq(
      choice(
        $.identifier,
        $.list_splat,
        $.dictionary_splat
      ),
      ':',
      field('type', $.type)
    )),

    type: $ => $._expression,

    keyword_argument: $ => seq(
      field('name', choice($.identifier, $.keyword_identifier)),
      '=',
      field('value', $._expression)
    ),

    // Literals

    list: $ => seq(
      '[',
      optional(commaSep1(choice($._expression, $.list_splat))),
      optional(','),
      ']'
    ),

    _comprehension_clauses: $ => seq(
      $.for_in_clause,
      repeat(choice(
        $.for_in_clause,
        $.if_clause
      ))
    ),

    list_comprehension: $ => seq(
      '[',
      field('body', $._expression),
      $._comprehension_clauses,
      ']'
    ),

    dictionary: $ => seq(
      '{',
      optional(commaSep1(choice($.pair, $.dictionary_splat))),
      optional(','),
      '}'
    ),

    dictionary_comprehension: $ => seq(
      '{',
      field('body', $.pair),
      $._comprehension_clauses,
      '}'
    ),

    pair: $ => seq(
      field('key', $._expression),
      ':',
      field('value', $._expression)
    ),

    set: $ => seq(
      '{',
      commaSep1(choice($._expression, $.list_splat)),
      optional(','),
      '}'
    ),

    set_comprehension: $ => seq(
      '{',
      field('body', $._expression),
      $._comprehension_clauses,
      '}'
    ),

    parenthesized_expression: $ => prec(PREC.parenthesized_expression, seq(
      '(',
      choice($._expression, $.yield),
      ')'
    )),

    tuple: $ => seq(
      '(',
      optional(commaSep1(choice($._expression, $.yield))),
      optional(','),
      ')'
    ),

    generator_expression: $ => seq(
      '(',
      field('body', $._expression),
      $._comprehension_clauses,
      ')'
    ),

    for_in_clause: $ => seq(
      optional('async'),
      'for',
      field('left', $.variables),
      'in',
      field('right', commaSep1($._expression_within_for_in_clause)),
      optional(',')
    ),

    if_clause: $ => seq(
      'if',
      $._expression
    ),

    conditional_expression: $ => prec.right(PREC.conditional, seq(
      $._expression,
      'if',
      $._expression,
      'else',
      $._expression
    )),

    concatenated_string: $ => seq(
      $.string,
      repeat1($.string)
    ),

    string: $ => seq(
      alias($._string_start, '"'),
      repeat(choice($.interpolation, $.escape_sequence, $._string_content)),
      alias($._string_end, '"')
    ),

    interpolation: $ => seq(
      '{',
      $._expression,
      optional($.type_conversion),
      optional($.format_specifier),
      '}'
    ),

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

    format_specifier: $ => seq(
      ':',
      repeat(choice(
        /[^{}\n]+/,
        $.format_expression
      ))
    ),

    format_expression: $ => seq('{', $._expression, '}'),

    type_conversion: $ => /![a-z]/,

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

    float: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits)

      return token(seq(
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent)
        ),
        optional(choice(/[Ll]/, /[jJ]/))
      ))
    },

    identifier: $ => /[a-zA-Zα-ωΑ-Ω_][a-zA-Zα-ωΑ-Ω_0-9]*/,

    keyword_identifier: $ => alias(choice('print', 'exec'), $.identifier),

    true: $ => 'True',
    false: $ => 'False',
    none: $ => 'None',

    await: $ => prec(PREC.unary, seq(
      'await',
      $._expression
    )),

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
