// the constant contains the order of precedence.
// the higher the value, higher the precedence.
const PRECEDENCE = {
  REGEXP: 1,
  ESCAPE_SEQ: 1,
  STRING: 4,
  COMMENTS: 5, // comments over anything. Except in strings or regex.
  
  HASH: 3,
  ARRAY: 4,
  SUB_ARGS: 29,
  SUB_CALL: 30, // sub call, parathesised have higher precedence than operators\
  BRACKETS: 31, // highest of them all
  BAREWORD: 31,

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
    [$.standalone_block, $.hash_ref],
    [$.goto_expression, $._expression],
    [$._primitive_expression, $.to_reference],
    [$._expression],
    [$._expression_without_call_expression],
    [$.bareword_import, $.package_name],
    [$.package_name],
    [$._list, $._variables],
    [$._dereference],
  ],

  // externals: $ => [
  //   $._string_content,
  //  TODO: handle <<EOF
  // ],
  
  extras: $ => [
    $.comments,
    /[\s\uFEFF\u2060\u200B\u00A0]/,
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.package_statement,

      $.use_no_statement,
      $.use_no_if_statement,
      $.bareword_import,
      $.use_no_subs_statement,
      $.use_no_feature_statement,
      $.use_no_version,
      $.require_statement,

      $.use_constant_statement,

      $.use_parent_statement,

      $._expression_statement,

      $._declaration,

      $.single_line_statement,

      $._compound_statement,

      $.standalone_block,

      $.ellipsis_statement,
      $.special_block,

      // $.pod_statement, TODO: come back to this later
    ),

    // pod_statement: $ => prec(1, seq(
    //   /=[\w]*/,
    //   /=cut/,
    // )),

    use_parent_statement: $ => seq(
      'use',
      'parent',
      commaSeparated($._string),
      $.semi_colon,
    ),

    use_constant_statement: $ => seq(
      'use',
      'constant',
      choice(
        seq(
          field('constant', choice($.identifier, $._string)), choice('=>', ','), field('value', $._expression)
        ),
        field('value', $.hash_ref),
      ),
      $.semi_colon,
    ),

    special_block: $ => seq(
      optional('sub'), // but this is often frowned upon
      choice(
        'BEGIN', 'UNITCHECK', 'CHECK', 'INIT', 'END',
      ),
      field('body', $.block),
    ),

    package_statement: $ => seq(
      'package',
      $.package_name,
      $.semi_colon
    ),

    ellipsis_statement: $ => seq(
      '...',
      optional($.semi_colon),
    ),

    use_no_version: $ => seq(
      choice(
        field('use', 'use'),
        field('no', 'no'),
      ),
      field('version', $.version),
      $.semi_colon,
    ),
    
    use_no_feature_statement: $ => seq(
      choice(
        field('use', 'use'),
        field('no', 'no'),
      ),
      'feature',
      $._experimental_feature,
      $.semi_colon,
    ),

    _experimental_feature: $ => choice(
      '"signatures"',
      "'signatures'",
      '"switch"',
      "'switch'", // TODO: add more https://perldoc.perl.org/feature#AVAILABLE-FEATURES
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

    use_no_statement: $ => seq(
      choice(
        field('use', 'use'),
        field('no', 'no'),
      ),
      choice($.package_name, $.module_name),
      optional($.version),
      optional(choice($._list, $._string)),
      $.semi_colon,
    ),

    use_no_if_statement: $ => seq(
      choice(
        field('use', 'use'),
        field('no', 'no'),
      ),
      seq(
        $._if_simple,
        ',',
      ),
      choice($.package_name, $.module_name, $._string),
      optional($.version),
      optional('=>'),
      optional(choice($._list, $._string)),
      $.semi_colon,
    ),

    // Module->import( LIST );
    bareword_import: $ => seq(
      field('module', $.identifier),
      '->',
      'import',
      $._list,
      $.semi_colon,
    ),

    use_no_subs_statement: $ => seq(
      choice(
        field('use', 'use'),
        field('no', 'no'),
      ),
      'subs',
      $._list,
      $.semi_colon,
    ),

    require_statement: $ => seq(
      'require',
      $.package_name,
      $.semi_colon,
    ),

    if_simple_statement: $ => prec.right(seq(
      $._if_simple,
      $.semi_colon,
    )),
    _if_simple: $ => prec.right(seq(
      'if',
      field('condition', choice($.parenthesized_expression, $._expression)),
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
      $._expression,
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
      choice($.multi_var_declaration, $.single_var_declaration, $.type_glob_declaration),
      optional($._initializer),
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
    ),

    _initializer: $ => seq(
      '=',
      field('value', $._expression),
    ),

    type_glob_declaration: $ => seq(
      $.type_glob,
    ),
    
    scope: $ => choice(
      'our',
      'state',
      'my',
      'local',
    ),

    // why perl, why!
    function_definition: $ => seq(
      optional($.scope),
      choice(
        // a function declaration to be precise
        seq(
          'sub',
          field('name', $.identifier),
          optional($.function_prototype),
          optional($.function_attribute),
          optional($.function_signature),
          $.semi_colon,
        ),
        // and here is the function definition WITHOUT signatures
        seq(
          'sub',
          field('name', $.identifier),
          optional($.function_prototype),
          optional($.function_attribute),
          field('body', $.block),
        ),
        // and here is the function definition WITH signatures
        seq(
          'sub',
          field('name', $.identifier),
          optional($.function_attribute),
          optional($.function_signature),
          field('body', $.block),
        ),
        seq(
          'sub',
          field('name', $.identifier),
          ':', 'prototype',
          $.function_prototype,
          $.function_signature,
          field('body', $.block),
        ),
      )
    ),

    anonymous_function: $ => seq(
      'sub',
      $.block,
    ),

    block: $ => seq(
      '{',
      optional(repeat($._block_statements)),
      '}'
    ),

    function_prototype: $ => seq(
      '(',
      repeat1(/[$@\\;]+/),
      ')',
    ),
    function_attribute: $ => seq(
      ':',
      $.identifier,
    ),
    function_signature: $ => seq(
      '(',
      choice(
        commaSeparated($._expression), // TODO: this is more
        /\+\{\}/,
      ),
      ')',
    ),

    standalone_block: $ => seq(
      optional(
        seq(field('label', $.identifier), ':'),
      ),
      '{',
      optional(repeat($._block_statements)),
      '}',
      optional(
        seq(
          'continue',
          field('body', $.block),
        )
      ),
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

    _expression: $ => with_or_without_brackets(choice(
      $._expression_without_call_expression,
      $.call_expression,      
    )),

    // NOTE: just a hack to handle identifier vs subroutine call
    _expression_without_call_expression: $ => choice(
      $._primitive_expression,
      $._string,
      $._variables,

      $.binary_expression,
      $.unary_expression,
      $.ternary_expression,

      $.call_expression_recursive,
      $.method_invocation,
      $.goto_expression,

      // quote-like operators
      $.command_qx_quoted,
      $.patter_matcher_m,
      $.regex_pattern_qr,
      $.substitution_pattern_s,
      $.transliteration_tr_or_y,

      $._i_o_operator,

      $.arrow_notation,

      $.type_glob,

      $.anonymous_function,

      $.scalar_reference,
      $.to_reference,
      $._dereference,

      // object oriented stuffs
      $.bless,
      
      $.special_variable,

      $.grep_or_map_function, // TODO: make a _list_context, which has all expressions that could return a list context
      $.join_function,
      $.sort_function,
      $.unpack_function,

      $.push_function,
    ),

    push_function: $ => prec.right(seq(
      alias('push', $.push),
      with_or_without_brackets(seq($._expression, ',', $._expression))
    )),

    grep_or_map_function: $ => prec.right(seq(
      choice(
        alias('grep', $.grep),
        alias('map', $.map),
      ),
      choice(
        seq($.list_block, $._expression),
        with_or_without_brackets(seq($._expression, ',', $._expression)),
      ),
    )),

    join_function: $ => prec.right(seq(
      choice(
        alias('join', $.join),
      ),
      with_or_without_brackets(commaSeparated($._expression)),
    )),

    reverse_function: $ => prec.right(seq(
      alias('reverse', $.reverse),
      optional(with_or_without_brackets(commaSeparated($._expression))),
    )),

    sort_function: $ => prec.right(seq(
      alias('sort', $.sort),
      choice(
        $._expression,
        seq($.list_block, $._expression),
        seq($.call_expression, $._expression),
      ),
    )),

    unpack_function: $ => prec.right(seq(
      alias('unpack', $.alias),
      with_or_without_brackets(seq($._expression, ',', $._expression)),
    )),

    list_block: $ => seq(
      '{',
      $._expression,
      '}'
    ),

    special_variable: $ => choice(
      /@_/,
      /\$_/
    ),

    bless: $ => prec.right(seq(
      'bless',
      with_or_without_brackets(
        seq(
          field('self', $._reference),
          optional(seq(
            ',',                            // comma separated
            field('class', $._expression),
          )),
        ),
      ),
    )),

    type_glob: $ => seq(
      '\*',
      choice(
        // $.package_name,
        $.identifier,
      ),
    ),

    // TODO handle CONSTANTS here AND have _expression as left(latter is done) - revisit
    arrow_notation: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      choice(
        $.scalar_variable,
        $.array_access_variable,
        $.hash_access_variable,
        $._expression,
      ),
      repeat1(
        seq(
          $.arrow_operator,
          choice( // either a array element or hash key
            seq('[', field('array_element', $._expression), ']'),
            seq('{', field('hash_key', choice($.identifier, $._expression_without_call_expression)), '}'),
          ),
        )
      ),
    )),

    goto_expression: $ => seq(
      'goto',
      choice(
        seq(field('label', $.identifier), ':'),
        field('expression', $._expression),
        field('subroutine', $.call_expression),
      ),
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

    _i_o_operator: $ => choice(
      $.standard_input,
      $.file_handle,
      $.standard_input_to_identifier,
      $.standard_input_to_variable,
    ),
    standard_input: $ => choice(
      /<>/,
      /<<>>/,
      /<STDIN>/,
      /\\\*STDIN/, // a reference to the STDIN
    ),
    file_handle: $ => /<FILEHANDLE>/,
    standard_input_to_identifier: $ => seq(
      '<',
      $.identifier,
      token.immediate('>'),
    ),
    standard_input_to_variable: $ => seq(
      '<',
      $.scalar_variable,
      token.immediate('>'),
    ),

    call_expression: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      optional(token.immediate('&')),
      optional(seq(
        field('package_name', $.package_name),
        token.immediate('::'),
      )),
      field('function_name', $.identifier),
      field('args', optional(choice($.parenthesized_arguments, $.arguments))),
    )),

    method_invocation: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      choice(
        field('package_name', choice($.package_name, $.string_single_quoted)),
        field('object', $.scalar_variable),
      ),
      prec.right(repeat1(seq(
        $.arrow_operator,
        choice(
          field('function_name', $.identifier),
          $.scalar_variable,
          $.scalar_reference,
        ),
        field('args', optional(choice($.parenthesized_arguments, $.arguments))),
      ))),
    )),

    parenthesized_arguments: $ => prec.right(PRECEDENCE.SUB_ARGS, seq(
      '(',
      optional($.arguments),
      ')',
    )),

    arguments: $ => prec.right(PRECEDENCE.SUB_ARGS, commaSeparated($._expression)),

    call_expression_recursive: $ => seq(
      '__SUB__',
      field('operator', '->'),
      $.parenthesized_arguments,
    ),

    _primitive_expression: $ => choice(
      // data-types
      $._scalar_type,
      
      $._boolean,

      $._array_type,

      $.hash,
    ),

    _variables: $ => choice(
      $.scalar_variable,
      $.array_variable,
      $.hash_variable,
    ),

    _scalar_type: $ => choice(
      $.string_single_quoted,
      $.string_q_quoted,
      // TODO: handle escape sequences
      $.string_double_quoted,
      $.string_qq_quoted,
      $._numeric_literals,
      $.array_ref,
      $.hash_ref,

      $.array_access_variable,
      $.hash_access_variable,
    ),

    // the strings
    _string: $ => prec(PRECEDENCE.STRING, choice(
      $.string_single_quoted,
      $.string_q_quoted,
      $.string_double_quoted,
      $.string_qq_quoted,
    )),

    _resolves_to_digit: $ => choice(
      $.string_single_quoted,
      $.string_q_quoted,
      // TODO: handle escape sequences
      $.string_qq_quoted,
      $._numeric_literals,
    ),

    _array_type: $ => choice(
      $.array,
      $.word_list_qw,
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

    version: $ => choice(
      /v[\d.]+/,  // v5.24.1
      /[\d.]+/,   // 5.24.1
      /[\d._]+/, // 5.024_001 older syntax compatible with perl 5.6
    ),

    identifier: $ => /[a-zA-Z0-9_]+/,
    // bareword: $ => /[a-zA-Z0-9_$]+/,

    // any characters or just bareword(s) and variables
    identifier_1: $ => /[a-zA-Z0-9_$]+/,

    loop_control_keyword: $ => choice(
      'next',
      'last',
      'redo',
    ),

    package_name: $ => choice(
      seq(
        $.identifier,
        optional(repeat(seq(
          token.immediate('::'),
          $.identifier,
        ))),
      ),
      // /[A-Z_a-z][0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/,
      // /\$[0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/, // TODO fix this
      // /\*[0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/, // type glob stuff
      // TODO: put in other package name structures
    ),

    package_name_in_call: $ => /([A-Z_a-z][0-9A-Z_a-z]::)+/,
    module_name: $ => choice(
      seq('\'', /.*pm/, '\''), 
      seq('\"', /.*pm/, '\"'), 
     ),

    semi_colon: $ => ';',

    string_single_quoted: $ => prec(PRECEDENCE.STRING, seq(
      "'",
      repeat(choice(
        token(prec(PRECEDENCE.STRING, /[^']+/)),
        /\\'/, // TODO: make this work
      )),
      "'",
    )),
    // TODO change all + to * in regex
    // NOTE/TODO:
    // we are currently only supporting {, /, (, \ as delimiters
    // in future release should use external scanners for delimiters
    string_q_quoted: $ => prec(PRECEDENCE.STRING, seq(
      'q',
      choice(
        seq('{', token(prec(PRECEDENCE.STRING, /[^}]+/)), '}'),
        seq('/', token(prec(PRECEDENCE.STRING, /[^/]+/)), '/'),
        seq('(', token(prec(PRECEDENCE.STRING, /[^)]+/)), ')'),
        seq('\'', token(prec(PRECEDENCE.STRING, /[^']+/)), '\''),
      ),
    )),

    string_double_quoted: $ => prec(PRECEDENCE.STRING, seq(
      '"',
      repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.STRING, /[^"\\]+/)))),
      '"',
    )),
    string_qq_quoted: $ => prec(PRECEDENCE.STRING, seq(
      'qq',
      choice(
        seq('{', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.STRING, /[^}]+/)))), '}'),
        seq('/', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.STRING, /[^/]+/)))), '/'),
        seq('(', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.STRING, /[^)]+/)))), ')'),
        /'.*'/, // don't interpolate for a single quote
      ),
    )),

    command_qx_quoted: $ => prec(PRECEDENCE.STRING, seq(
      'qx',
      choice(
        seq('{', repeat(choice($.interpolation, token(prec(PRECEDENCE.STRING, /[^}]+/)))), '}'),
        seq('/', repeat(choice($.interpolation, token(prec(PRECEDENCE.STRING, /[^\/]+/)))), '/'),
        seq('(', repeat(choice($.interpolation, token(prec(PRECEDENCE.STRING, /[^)]+/)))), ')'),
        /'.*'/, // don't interpolate for a single quote
      ),
    )),

    word_list_qw: $ => prec(PRECEDENCE.REGEXP, seq(
      'qw',
      choice(
        seq('{', repeat($.identifier_1), '}'),
        seq('/', repeat($.identifier_1), '/'),
        seq('(', repeat($.identifier_1), ')'),
        seq('\'', repeat($.identifier_1), '\''),
      ),
    )),

    patter_matcher_m: $ => prec(PRECEDENCE.REGEXP, seq(
      'm',
      choice(
        seq('{', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.REGEXP, /[^}]+/)))), '}'),
        seq('/', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.REGEXP, /[^/]+/)))), '/'),
        seq('(', repeat(choice($.interpolation, $.escape_sequence, token(prec(PRECEDENCE.REGEXP, /[^)]+/)))), ')'),
        /'.*'/, // don't interpolate for a single quote
      ),
      optional($.regex_option),
    )),

    regex_pattern_qr: $ => prec(PRECEDENCE.REGEXP, seq(
      'qr',
      choice(
        seq('{', optional($.regex_pattern), '}'),
        seq('/', optional($.regex_pattern), '/'),
        seq('(', optional($.regex_pattern), ')'),
        seq('\'', optional($.regex_pattern), '\''),
      ),
      optional($.regex_option),
    )),

    substitution_pattern_s: $ => prec(PRECEDENCE.REGEXP, seq(
      's',
      choice(
        seq('{', optional($.regex_pattern), '}', '{', field('replace', optional($.identifier)), '}'),
        seq('/', optional($.regex_pattern), '/', field('replace', optional($.identifier)), '/'),
        seq('(', optional($.regex_pattern), ')', '(', field('replace', optional($.identifier)), ')'),
        seq('\'', optional($.regex_pattern), '\'', field('replace', optional($.identifier)), '\''),
      ),
      field('regex_option', optional($.regex_option_for_substitution)),
    )),

    // TODO: revisit this
    transliteration_tr_or_y: $ => prec(PRECEDENCE.REGEXP, seq(
      choice('tr', 'y'),
      choice(
        seq('{', field('search_list', optional($.regex_pattern)), '}', '{', field('replacement_list', optional($.regex_pattern)), '}'),
        seq('/', field('search_list', optional($.regex_pattern)), '/', field('replacement_list', optional($.regex_pattern)), '/'),
        seq('(', field('search_list', optional($.regex_pattern)), ')', '(', field('replacement_list', optional($.regex_pattern)), ')'),
        seq('\'', field('search_list', optional($.regex_pattern)), '\'', field('replacement_list', optional($.regex_pattern)), '\''),
      ),
      field('regex_option', optional($.regex_option_for_transliteration)),
    )),

    // shamelessly copied from the tree-sitter-javascript
    regex_pattern: $ => prec(PRECEDENCE.REGEXP, repeat1(
      choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./), // escaped character
            /[^\]\n\\]/       // any character besides ']' or '\n'
          )),
          ']'
        ),              // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/,   // any character besides '[', '\', '/', '\n'
      ),
    )),

    regex_option: $ => /[msixpodualn]+/,
    regex_option_for_substitution: $ => /[msixpodualngcer]+/,
    regex_option_for_transliteration: $ => /[cdsr]+/,

    // https://perldoc.perl.org/perlop#Quote-and-Quote-like-Operators
    escape_sequence: $ => prec(PRECEDENCE.ESCAPE_SEQ, seq(
      '\\',
      token.immediate(
        /[tnrfbae]/,
      ),
    )),

    interpolation: $ => choice(
      $.scalar_variable,
      $.array_variable,
    ),

    _boolean: $ => choice(
      $.true,
      $.false,
    ),
    true: $ => 'true',
    false: $ => 'false',

    scalar_variable: $ => choice(
      /\$[\d]+/,                      // $0, $1 - they are read-only
      /\$[!]/,
      /\$\#_?[a-zA-Z0-9_]+/,          // length of an array
      /\$[A-Z^_?\\]/,                 // checkout https://perldoc.perl.org/perldata#Identifier-parsing
      /\$_?[a-zA-Z0-9_]+/,
    ),

    array_access_variable: $ => prec(PRECEDENCE.ARRAY, seq(
      field('array_variable', $._expression),
      '[',
      field('index', $._expression),
      ']'
    )),

    hash_access_variable: $ => prec(PRECEDENCE.HASH, seq(
      field('hash_variable', $._expression),
      '{',
      field('key', choice($.identifier, $._expression_without_call_expression)),
      '}',
    )),

    array_variable: $ => /@[a-zA-Z0-9_]+/,

    hash_variable: $ => /%[a-zA-Z0-9_]+/,

    _list: $ => choice(
      $._array_type,
      $.array_variable,
    ),

    array: $ => prec.right(PRECEDENCE.ARRAY, seq(
      '(',
      optional(commaSeparated($._expression)),
      ')',
    )),

    array_ref: $ => seq(
      '[',
      optional(commaSeparated($._expression)),
      ']',
    ),

    // TODO: accept ('key', value, 'key2', value2) as hash
    hash: $ => prec.right(PRECEDENCE.HASH, seq(
      '(',
      optional(commaSeparated($._key_value_pair)),
      ')',
    )),
    
    hash_ref: $ => prec.right(PRECEDENCE.HASH, seq(
      '{',
      optional(repeat(
        prec.right(PRECEDENCE.HASH, commaSeparated(choice(
          $._key_value_pair,
          $.hash_dereference,
        ))),
      )),
      '}'
    )),

    _reference: $ => choice(
      $.array_ref,
      $.hash_ref,
      $.scalar_variable,
      // TODO: \@array goes as unary_expression array_variable
      // TODO: { \'string' }
    ),

    scalar_reference: $ => seq(
      '$',
      '{',
      choice($.call_expression, $.to_reference),
      '}',
    ),

    to_reference: $ => prec(PRECEDENCE.SUB_CALL, seq(
      '\\',
      choice(
        $.array_variable,
        $.hash_variable,
        $.array,
        $.hash,
      ),
    )),

    _dereference: $ => choice(
      $.array_dereference,
      $.hash_dereference,
    ),

    array_dereference: $ => prec(PRECEDENCE.ARRAY, seq(
      '@',
      with_or_without_curly_brackets($._expression),
    )),

    hash_dereference: $ => prec(PRECEDENCE.HASH ,seq(
      '%',
      with_or_without_curly_brackets($._expression),
    )),

    // cat => 'meow', meta => {}
    // TODO: cat => 'meow' should be bareword => 'string' and not a call_expression => 'string'
    _key_value_pair: $ => prec.right(seq(
      field('key', choice(
        $._expression_without_call_expression,
        alias($.identifier, $.bareword),
      )),
      $.hash_arrow_operator,
      field('value', $._expression),
    )),

    arrow_operator: $ => /->/,
    hash_arrow_operator: $ => /=>/,

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

/**
 * Given a rule, returns back a rule with and without
 * brackets on them.
 * 
 * print ("hello"); vs print "hello"
 * 
 * @param {any} rule the rule
 * @returns choice of rules
 */
function with_or_without_brackets(rule) {
  return prec(PRECEDENCE.BRACKETS, choice(
    rule,
    seq('(', rule, ')'),
  ));
}

/**
 * Given a rule, returns back a rule with and without
 * curly brackets on them.
 * 
 * @$array vs @{$array}
 * 
 * @param {any} rule the rule
 * @returns choice of rules
 */
 function with_or_without_curly_brackets(rule) {
  return prec(PRECEDENCE.BRACKETS, choice(
    rule,
    seq('{', rule, '}'),
  ));
}

/**
 * Given a rule, returns back a choice of rule with and
 * without quotes surrounded by the rule.
 * 
 * $hash->{'romantic'} vs $hash->{romantic}
 * 
 * @param {any} rule the rule
 * @returns choice of rules
 */
function with_or_without_quotes(rule) {
  return choice(
    rule,
    seq('\'', rule, '\''),
    seq('"', rule, '"'),
  );
}

// TODO: move this to a custom scanner so that it matches - https://stackoverflow.com/questions/22492028/regex-that-start-and-end-with-same-letter
// /([^a-z]).*\1/,
function delimited_with_interpolation($) {
  return choice(
    
  );
}
