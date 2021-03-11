// the constant contains the order of precedence.
// the higher the value, higher the precedence.
const PRECEDENCE = {
  REGEXP: 1,
  STRING: 2,
  COMMENTS: 3, // comments over anything. Except in strings or regex.
  
  HASH: 1,
  ARRAY: 2,
  SUB_ARGS: 29,
  SUB_CALL: 30, // sub call, parathesised have higher precedence than operators

  // begin of operators
  AUTO_INCREMENT_DECREMENT: 23,
  EXPONENTIATION: 22,
  SYMBOLIC_UNARY: 21,
  BINDING_OPERATORS: 20,
  BODMAS_1: 19,
  BODMAS_2: 18,
  SHIFT_OPERATORS: 17,
  RELATIONAL_OPERATORS: 15,
  EQUALITY_OPERATORS: 14,
  ISA_OPERATOR: 13,
  BITWISE_AND: 12,
  BITWISE_OR_XOR: 11,
  LOGICAL_AND: 10,
  LOGICAL_ORS: 9,
  RANGE_OPERATOR: 8,
  TERNARY_OPERATOR: 7,
  ASSIGNMENT_OPERATORS: 6,
  // COMMA_OPERATORS: 5,
  UNARY_NOT: 4,
  UNARY_AND: 3,
  OR_XOR: 2,
  // end of operators
};

module.exports = grammar({
  name: 'perl',

  conflicts: $ => [
    [$._boolean, $.call_expression],
    [$._auto_increment_decrement],
    [$.binary_expression, $._bodmas_2, $._shift_expression],
    [$.binary_expression, $._bodmas_2, $._equality_expression],
    [$.binary_expression, $._bodmas_2, $._class_instance_exp],
    [$.binary_expression, $._bodmas_2, $._bitwise_and_exp],
    [$.binary_expression, $._bodmas_2, $._bitwise_or_xor_exp],
    [$.binary_expression, $._bodmas_2, $._logical_and_exp],
    [$.binary_expression, $._bodmas_2, $._logical_ors_exp],
    [$.binary_expression, $._bodmas_2, $._range_exp],
    [$.binary_expression, $._bodmas_2, $._assignment_exp],
    [$.binary_expression, $._bodmas_2, $.ternary_expression],
    [$.binary_expression, $._bodmas_2, $._unary_not],
    [$.binary_expression, $._bodmas_2, $._unary_and],
    [$.binary_expression, $._bodmas_2, $._logical_verbal_or_xor],
    [$._range_exp],
    [$._class_instance_exp],
    [$._primitive_expression, $._list],
  ],

  extras: $ => [
    $.comments,
    /[\s\uFEFF\u2060\u200B\u00A0]/,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.use_statement,
      $.require_statement,

      $._expression_statement,

      $._declaration,

      $.single_line_statement,

      $._compound_statement,
    ),

    _expression_or_return_expression: $ => choice(
      $._expression,
      $.return_expression,
    ),

    // aka _statement_modifiers_expression
    single_line_statement: $ => prec.right(seq(
      $._expression_or_return_expression,
      $._statement_modifiers,
    )),

    _statement_modifiers: $ => choice(
      $.if_simple_statement,
      $.unless_simple_statement,
      $.while_simple_statement,
      $.until_simple_statement,
      $.for_simple_statement,
      $.foreach_simple_statement,
      $.when_simple_statement,
    ),

    _compound_statement: $ => choice(
      // conditional statements
      $.if_statement,
      $.unless_statement,
      // $.given_statement,

      // loops
      $.while_statement,
      $.until_statement,
      $.for_statement_1,
      $.for_statement_2,
      $.foreach_statement,
    ),

    _expression_statement: $ => seq(
      $._expression,
      $.semi_colon,
    ),

    use_statement: $ => seq(
      'use',
      $.package_name,
      $.semi_colon,
    ),

    require_statement: $ => seq(
      'require',
      $.package_name,
      $.semi_colon,
    ),

    if_simple_statement: $ => prec.right(seq(
      'if',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),
    unless_simple_statement: $ => prec.right(seq(
      'unless',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),
    while_simple_statement: $ => prec.right(seq(
      'while',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),
    until_simple_statement: $ => prec.right(seq(
      'until',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),
    for_simple_statement: $ => prec.right(seq(
      'for',
      field('list', with_or_without_brackets($._list)),
      $.semi_colon,
    )),
    foreach_simple_statement: $ => prec.right(seq(
      'foreach',
      field('list', with_or_without_brackets($._list)),
      $.semi_colon,
    )),
    when_simple_statement: $ => prec.right(seq(
      'when',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),

    // TODO: should be a boolean expression and not the current one?
    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.block),
      optional(repeat(
        seq(
          'elsif',
          field('condition', $.parenthesized_expression),
          field('alternative_if_consequence', $.block),
        ),
      )),
      optional(seq(
        'else',
        field('alternative', $.block),
      ))
    )),

    unless_statement: $ => prec.right(seq(
      'unless',
      field('condition', $.parenthesized_expression),
      field('consequence', $.block),
      optional(repeat(
        seq(
          'elsif',
          field('condition', $.parenthesized_expression),
          field('alternative_if_consequence', $.block),
        ),
      )),
      optional(seq(
        'else',
        field('alternative', $.block),
      ))
    )),

    // given_statement: $ => seq(
    //   'given',
    //   '(',
    //   field('value', choice($.scalar_variable, $._scalar_type)),
    //   ')',
    //   field('body', $.given_body),
    // ),

    // given_body: $ => seq(
    //   'when',
    //   $.parenthesized_expression,
    //   $.block,
    // ),

    while_statement: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      'while',
      field('condition', $.empty_parenthesized_expression),
      field('body', $.block),
      optional(
        seq(
          'continue',
          field('body', $.block), // normal block for a continue block
        )
      ),
    ),

    until_statement: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      'until',
      field('condition', $.empty_parenthesized_expression),
      field('body', $.block),
      optional(
        seq(
          'continue',
          field('body', $.block),
        )
      ),
    ),

    // the C - style for loop
    for_statement_1: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      choice('for', 'foreach'),
      $._for_parenthesize,
      field('body', $.block),
    ),

    for_statement_2: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      'for',
      choice(
        seq(optional($.scope), $.scalar_variable),
        seq('\\', optional($.scope), $.hash_variable), // \my %hash
      ),
      '(',
      $._list,
      ')',      
      field('body', $.block),
      optional(
        seq(
          'continue',
          field('body', $.block),
        )
      ),
    ),

    _for_parenthesize: $ => seq(
      '(',
      optional(field('initializer', $._expression)),
      $.semi_colon,
      optional(field('condition', $._expression)),
      $.semi_colon,
      optional(field('incrementor', $._expression)),
      ')'
    ),

    foreach_statement: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      'foreach',
      choice(
        seq(optional($.scope), $.scalar_variable),
        seq('\\', optional($.scope), $.hash_variable), // \my %hash
      ),
      '(',
      $._list,
      ')',
      field('body', $.block),
      optional(
        seq(
          'continue',
          field('body', $.block),
        )
      ),
    ),
    
    _declaration: $ => choice(
      $.function_definition,
      $.variable_declaration, // TODO: make this under expression? to accommodate for loop?
    ),

    variable_declaration: $ => seq(
      $.scope,
      // multi declaration
      // or single declaration without brackets
      choice($.multi_var_declaration, $.single_var_declaration),
      $.semi_colon,
    ),

    multi_var_declaration: $ => seq(
      '(',
      commaSeparated($.variable_declarator),
      ')',
    ),

    single_var_declaration: $ => alias($.variable_declarator, 'single_var_declaration'),

    variable_declarator: $ => seq(
      field('name', choice($.scalar_variable, $.array_variable, $.hash_variable)),
      optional($._initializer),
    ),

    _initializer: $ => seq(
      '=',
      field('value', $._expression),
    ),
    
    scope: $ => choice(
      'our',
      'state',
      'my',
    ),

    function_definition: $ => seq(
      'sub',
      field('name', $.identifier),
      field('body', $.block),
    ),

    block: $ => seq(
      '{',
      optional(repeat($._block_statements)),
      '}'
    ),

    _block_statements: $ => choice(
      $._statement,
      seq($.return_expression, $.semi_colon),
      $.loop_control_statement,
    ),

    loop_control_statement: $ => seq(
      $.loop_control_keyword,
      optional(field('label', $.identifier)),
      optional($._statement_modifiers),
      $.semi_colon,
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    empty_parenthesized_expression: $ => seq(
      '(',
      optional($._expression),
      ')'
    ),

    // TODO: do this
    // parenthesized_condition: $ => seq(
    //   '(',
    //   ')'
    // ),

    return_expression: $ => seq(
      'return',
      optional($._expression),
    ),

    _expression: $ => choice(
      $._primitive_expression,
      $._variables,

      $.binary_expression,
      $.unary_expression,
      $.ternary_expression,

      $.call_expression,
    ),

    // begin of operators

    binary_expression: $ => choice(
      ...[
        ['+', 1],
        ['-', 2]
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ),
      $._exponentiation,
      $._binding_expression,
      $._bodmas_1,
      $._bodmas_2,
      $._shift_expression,
      $._relational_expression,
      $._equality_expression,
      $._class_instance_exp,
      $._bitwise_and_exp,
      $._bitwise_or_xor_exp,
      $._logical_and_exp,
      $._logical_ors_exp,
      $._range_exp,
      $._assignment_exp,
      $._logical_verbal_or_xor,
    ),

    unary_expression: $ => choice(
      $._auto_increment_decrement,
      $._symbolic_unary,
      // TODO: named_unary_expression
      $._unary_not,
      $._unary_and,
    ),

    ternary_expression: $ => prec.right(PRECEDENCE.TERNARY_OPERATOR, seq(
      field('condition', $._expression),
      field('operator', '?'),
      field('true', $._expression),
      field('operator', ':'),
      field('false', $._expression),
    )),

    // no associativity
    // auto increment and auto decrement
    _auto_increment_decrement: $ => prec(PRECEDENCE.AUTO_INCREMENT_DECREMENT, choice(
      seq(
        field('operator', choice('++', '--')),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', choice('++', '--')),
      ),
    )),

    // It binds even more tightly than unary minus, so -2**4 is -(2**4), not (-2)**4
    _exponentiation: $ => prec.right(PRECEDENCE.EXPONENTIATION, seq(
      field('variable', $._expression),
      field('operator', '**'),
      field('variable', $._expression),
    )),

    _symbolic_unary: $ => prec.right(PRECEDENCE.SYMBOLIC_UNARY, choice(
      seq(
        field('operator', '!'),
        field('variable', $._expression),
      ),
      seq(
        field('operator', '~'),
        field('variable', $._expression),
      ),
      seq(
        field('operator', '\\'),
        field('variable', $._expression),
      ),
      seq(
        field('operator', '+'),
        field('variable', $._expression),
      ),
      seq(
        field('operator', '-'),
        field('variable', $._expression),
      ),
    )),

    _binding_expression: $ => prec.left(PRECEDENCE.BINDING_OPERATORS, choice(
      seq(
        field('variable', $._expression),
        field('operator', '=~'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '!~'),
        field('variable', $._expression),
      ),
    )),

    _bodmas_1: $ => prec.left(PRECEDENCE.BODMAS_1, choice(
      seq(
        field('variable', $._expression),
        field('operator', '*'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '/'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '%'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', 'X'),
        field('variable', $._expression),
      ),
    )),

    _bodmas_2: $ => prec.left(PRECEDENCE.BODMAS_2, choice(
      seq(
        field('variable', $._expression),
        field('operator', '+'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '-'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '.'),
        field('variable', $._expression),
      ),
    )),

    _shift_expression: $ => prec.left(PRECEDENCE.SHIFT_OPERATORS, choice(
      seq(
        field('variable', $._expression),
        field('operator', '<<'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '>>'),
        field('variable', $._expression),
      ),
    )),

    // has chaining. example: $a > $b > $c
    _relational_expression: $ => prec.left(PRECEDENCE.RELATIONAL_OPERATORS, seq(
      field('variable', $._expression),
      repeat1(seq(
        choice(
          '<',
          '>',
          '<=',
          '>=',
          'lt',
          'gt',
          'le',
          'ge',
        ),
        $._expression,
      ))
    )),

    // first few has chaining
    _equality_expression: $ => prec.left(PRECEDENCE.EQUALITY_OPERATORS, choice(
      seq(
        field('variable', $._expression),
        repeat1(seq(
          choice(
            '==',
            '!=',
            'eq',
            'ne',
          ),
          $._expression,
        ))
      ),
      seq(
        field('variable', $._expression),
        field('operator', '<=>'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', 'cmp'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '~~'),
        field('variable', $._expression),
      ),
    )),

    _class_instance_exp: $ => prec(PRECEDENCE.ISA_OPERATOR, seq(
      field('variable', $._expression),
      field('operator', 'isa'),
      field('variable', $._expression),
    )),

    _bitwise_and_exp: $ => prec.left(PRECEDENCE.BITWISE_AND, seq(
      field('variable', $._expression),
      field('operator', '&'),
      field('variable', $._expression),
    )),

    _bitwise_or_xor_exp: $ => prec.left(PRECEDENCE.BITWISE_OR_XOR, choice(
      seq(
        field('variable', $._expression),
        field('operator', '|'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '^'),
        field('variable', $._expression),
      ),
    )),

    _logical_and_exp: $ => prec.left(PRECEDENCE.LOGICAL_AND, seq(
      field('variable', $._expression),
      field('operator', '&&'),
      field('variable', $._expression),
    )),

    _logical_ors_exp: $ => prec.left(PRECEDENCE.LOGICAL_ORS, choice(
      seq(
        field('variable', $._expression),
        field('operator', '||'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '//'),
        field('variable', $._expression),
      ),
    )),

    _range_exp: $ => prec(PRECEDENCE.RANGE_OPERATOR, choice(
      seq(
        field('variable', $._expression),
        field('operator', '..'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', '...'),
        field('variable', $._expression),
      ),
    )),

    // **=    +=    *=    &=    &.=    <<=    &&=
    //    -=    /=    |=    |.=    >>=    ||=
    //    .=    %=    ^=    ^.=           //=
    //          x=
    _assignment_exp: $ => prec.right(PRECEDENCE.ASSIGNMENT_OPERATORS, choice(
      ...[
        '=',
        '**=',
        '+=',
        '*=',
        '&=',
        '&.=',
        '<<=',
        '&&=',
        '-=',
        '/=',      
        '|=',
        '|.=',
        '>>=',
        '||=',
        '.=',
        '%=',
        '^=',
        '^.=',
        '//=',
        'X=',
      ].map((operator) => 
        seq(
          field('variable', $._expression),
          field('operator', operator),
          field('variable', $._expression),
        ),
      )
    )),

    _unary_not: $ => prec.right(PRECEDENCE.UNARY_NOT, seq(
      field('operator', 'not'),
      field('variable', $._expression),
    )),

    _unary_and: $ => prec.left(PRECEDENCE.UNARY_AND, seq(
      field('operator', 'and'),
      field('variable', $._expression),
    )),

    _logical_verbal_or_xor: $ => prec.left(PRECEDENCE.OR_XOR, choice(
      seq(
        field('variable', $._expression),
        field('operator', 'or'),
        field('variable', $._expression),
      ),
      seq(
        field('variable', $._expression),
        field('operator', 'xor'),
        field('variable', $._expression),
      )
    )),

    // end of operators

    call_expression: $ => prec.left(PRECEDENCE.SUB_CALL, seq(
      field('function_name', $.identifier),
      field('args', optional(choice($.parenthesized_arguments, $.arguments))),
    )),

    parenthesized_arguments: $ => prec.left(PRECEDENCE.SUB_ARGS, seq(
      '(',
      optional($.arguments),
      ')',
    )),

    arguments: $ => prec.left(PRECEDENCE.SUB_ARGS, commaSeparated($._expression)),

    _primitive_expression: $ => choice(
      // data-types
      $._scalar_type,
      
      $._boolean,

      $.array,
      $.hash,
    ),

    _variables: $ => choice(
      $.scalar_variable,
      $.array_variable,
      $.hash_variable,
    ),

    _scalar_type: $ => choice(
      $.string_single_quoted,
      // TODO: handle escape sequences
      $.string_double_quoted,
      $._numeric_literals,
      $.array_ref,
      $.hash_ref,
    ),
    
    _numeric_literals: $ => choice(
      $.integer,
      $.floating_point,
      $.scientific_notation,
      $.hexadecimal,
      $.octal,
    ),

    integer: $ => /-?\d+/,
    floating_point: $ => /-?\d+\.\d+/,
    // copied shamelessly from https://stackoverflow.com/questions/638565/parsing-scientific-notation-sensibly
    scientific_notation: $ => /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,
    hexadecimal: $ => /0[xX][0-9a-fA-F]+/,
    octal: $ => /0[1-7][0-7]*/,

    identifier: $ => /[a-zA-z0-9_]+/,

    loop_control_keyword: $ => choice(
      'next',
      'last',
      'redo',
    ),

    package_name: $ => /[A-Z_a-z][0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/,

    semi_colon: $ => ';',

    string_single_quoted: $ => prec(PRECEDENCE.STRING, /\'.*\'/),

    string_double_quoted: $ => prec(PRECEDENCE.STRING, /\".*\"/),

    _boolean: $ => choice(
      $.true,
      $.false,
    ),
    true: $ => 'true',
    false: $ => 'false',

    //TODO: add check that variable name shouldn't start with numbers
    scalar_variable: $ => /\$[a-zA-z0-9_]+/,

    array_variable: $ => /@[a-zA-z0-9_]+/,

    hash_variable: $ => /%[a-zA-z0-9_]+/,

    _list: $ => choice(
      $.array,
      $.array_variable,
      // TODO: array casted reference, functions with return value as array, qw()
    ),

    array: $ => prec(PRECEDENCE.ARRAY, seq(
      '(',
      optional(commaSeparated($._primitive_expression)),
      ')',
    )),

    array_ref: $ => seq(
      '[',
      optional(commaSeparated($._primitive_expression)),
      ']',
    ),

    // TODO: accept ('key', value, 'key2', value2) as hash
    hash: $ => prec(PRECEDENCE.HASH, seq(
      '(',
      optional(commaSeparated($._key_value_pair)),
      ')',
    )),
    
    hash_ref: $ => seq(
      '{',
      optional(commaSeparated($._key_value_pair)),
      '}'
    ),

    // cat => 'meow',
    _key_value_pair: $ => seq(
      $.identifier,
      '=>',
      $._primitive_expression,
    ),

    comments: $ => token(prec(PRECEDENCE.COMMENTS, choice(
      /#.*/, // single line comment
    ))),

  }
});

/**
 * repeats the rule comma separated, like
 * rule, rule
 * example: my (a, b);
 * using it in the above.
 * @param {*} rule 
 */
function commaSeparated(rule) {
  return seq(
    rule,
    repeat(seq(',', rule)),
    optional(','), // in perl so far you could have this
  );
}

function with_or_without_brackets(rule) {
  return choice(
    rule,
    seq('(', rule, ')'),
  );
}
