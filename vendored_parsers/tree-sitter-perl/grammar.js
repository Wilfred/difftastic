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
  COMMA_OPERATORS: 5,
  UNARY_NOT: 4,
  UNARY_AND: 3,
  OR_XOR: 2,
  // end of operators
};

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: 'perl',

  inline: $ => [
    // $.semi_colon,
  ],

  conflicts: $ => [

    [$._auto_increment_decrement],
    
    [$._range_exp],
    [$._class_instance_exp],

    [$.package_name],
    [$.hash_ref],

    // [$.list_block, $.hash_ref],

    // [$.list_block],

    [$._block_statements],

    [$.variable_declaration],

  ],

  externals: $ => [
    $._start_delimiter,
    $._end_delimiter,
    $._string_content,
    $._string_single_quoted_content,
    $._string_qq_quoted_content,
    $._string_double_quoted_content,
    $._start_delimiter_qw,
    $._element_in_qw,
    $._end_delimiter_qw,
    $._start_delimiter_regex,
    $._regex_pattern, // supports interpolation
    $._end_delimiter_regex,
    $._start_delimiter_search_replace,
    $._search_replace_content,
    $._separator_delimiter_search_replace,
    $._end_delimiter_search_replace,
    $._start_delimiter_transliteration,
    $._transliteration_content,
    $._separator_delimiter_transliteration,
    $._end_delimiter_transliteration,
    // heredocs
    $._imaginary_heredoc_start,
    $.heredoc_start_identifier,
    $._heredoc_content,
    $.heredoc_end_identifier,
    // end of heredocs
    $._pod_content,
  ],
  
  extras: $ => [
    $.comments,
    /[\s\uFEFF\u2060\u200B\u00A0]/,
  ],

  precedences: $ => [

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
      $.named_block_statement,

      $.ellipsis_statement,
      $.special_block,

      $.special_literal,

      $.heredoc_body_statement,

      $.pod_statement,
    ),

    // pseudocode
    // ------------
    // have start identifier as external. then parse till end of line
    // then \n, then start hereodc body.
    heredoc_initializer: $ => prec(PRECEDENCE.STRING, seq(
      $._heredoc_operator,
      $.heredoc_start_identifier,
    )),

    _heredoc_operator: $ => '<<',

    heredoc_body_statement: $ => seq(
      $._imaginary_heredoc_start, // just to track between initializer and body start
      repeat(choice(
        $.interpolation,
        $.escape_sequence,
        $._heredoc_content,
      )),
      $.heredoc_end_identifier
    ),

    pod_statement: $ => prec(PRECEDENCE.COMMENTS, seq(
      /=[\w]*/,
      $._pod_content,
    )),

    special_literal: $ => choice(
      '__FILE__',
      '__LINE__',
      '__PACKAGE__',
      '__SUB__',
      '__END__',
      '__DATA__',
    ),

    use_parent_statement: $ => seq(
      'use',
      'parent',
      optional(seq($.no_require, ',')),
      choice(
        commaSeparated($._string),
        $.word_list_qw,
      ),
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
      optional(field('version', $.version)),
      choice(
        $.semi_colon,
        field('body', $.block)
      )
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
      optional(choice($._list, $._string)),
      $.semi_colon,
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
      optional($._comma_operator),
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
      choice('for', 'foreach'),
      field('list', with_or_without_brackets($._expression)),
      $.semi_colon,
    )),
    when_simple_statement: $ => prec.right(seq(
      'when',
      field('condition', choice($.parenthesized_expression, $._expression)),
      $.semi_colon,
    )),

    // TODO: should be a boolean expression and not the current one?
    if_statement: $ => prec.left(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.block),
      repeat(field('alternative', $.elsif_clause)),
      optional(field('alternative', $.else_clause)),
    )),

    unless_statement: $ => prec.left(seq(
      'unless',
      field('condition', $.parenthesized_expression),
      field('consequence', $.block),
      repeat(field('alternative', $.elsif_clause)),
      optional(field('alternative', $.else_clause)),
    )),

    elsif_clause: $ => seq(
      'elsif',
      field('condition', $.parenthesized_expression),
      field('alternative_if_consequence', $.block),
    ),

    else_clause: $ => seq(
      'else',
      field('alternative', $.block),
    ),

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
      optional(field('flow', $.continue)),
    ),

    continue: $ => seq(
      'continue',
      field('body', $.block),
    ),

    until_statement: $ => seq(
      optional(seq(field('label', $.identifier), ':')),
      'until',
      field('condition', $.empty_parenthesized_expression),
      field('body', $.block),
      optional(field('flow', $.continue)),
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
      choice('for', 'foreach'),
      optional(choice(
        seq(optional($.scope), $.scalar_variable),
        seq('\\', optional($.scope), $.hash_variable), // \my %hash
      )),
      $.array,      
      field('body', $.block),
      optional(field('flow', $.continue)),
    ),

    _for_parenthesize: $ => choice(
      seq(
        '(',
        field('initializer', $._expression),
        $.semi_colon,
        field('condition', $._expression),
        $.semi_colon,
        field('incrementor', $._expression),
        ')'
      ),
      seq(
        '(',
        $.semi_colon,
        $.semi_colon,
        ')'
      )
    ),

    _declaration: $ => choice(
      $.function_definition,
      // moving variable_declaration to expressioin
    ),

    variable_declaration: $ => seq(
      $.scope,
      // multi declaration
      // or single declaration without brackets
      choice(
        $.multi_var_declaration, 
        field('name', $._variables),
      ),
      optional($._initializer),
    ),

    multi_var_declaration: $ => seq(
      '(',
      commaSeparated(field('name', $._variables)),
      ')',
    ),

    _initializer: $ => seq(
      '=',
      field('value', $._expression),
    ),
    
    scope: $ => choice(
      'our',
      'state',
      'my',
      'local',
    ),

    // why perl, why!
    function_definition: $ => prec.left(seq(
      optional($.scope),
      'sub',
      field('name', $.identifier),
      choice(
        seq(
          optional($.function_prototype),
          optional($.function_attribute),
          choice(
            $.semi_colon,
            field('body', $.block),
          ),
        ),
        seq(
          $.function_prototype,
          optional($._function_signature),
          choice(
            $.semi_colon,
            field('body', $.block),
          ),
        ),
        seq(
          optional($.function_prototype),
          $._function_signature,
          choice(
            $.semi_colon,
            field('body', $.block),
          ),
        ),
        seq(
          ':', 'prototype',
          $.function_prototype,
          $._function_signature,
          choice(
            $.semi_colon,
            field('body', $.block),
          ),
        ),
      )
    )),

    anonymous_function: $ => seq(
      'sub',
      $.block,
    ),

    block: $ => prec(PRECEDENCE.BRACKETS, seq(
      '{',
      optional(repeat($._block_statements)),
      '}'
    )),

    _function_signature: $ => alias($.array, $.function_signature),

    function_prototype: $ => prec(PRECEDENCE.SUB_CALL, seq(
      '(',
      optional($.prototype),
      ')',
    )),
    prototype: $ => /[&$@%;*\[\]\\]+/, // (\[$@%;&*])
 
    // sub test2 : Path('/') Args(0) {}
    // colon and space are separators
    // basically they are :call_expressions()
    function_attribute: $ => seq(
      ':',
      repeat1(
        seq(
          $.identifier,
          optional($._function_signature),
        )
      )
    ),

    standalone_block: $ => prec(PRECEDENCE.BRACKETS, seq(
      optional(
        seq(field('label', $.identifier), ':'),
      ),
      '{',
      optional(repeat($._block_statements)),
      '}',
      optional(field('flow', $.continue)),
    )),

    _block_statements: $ => choice(
      $._statement,
      seq($.return_expression, $.semi_colon),
      $.loop_control_statement,
    ),

    loop_control_statement: $ => seq(
      $.loop_control_keyword,
      optional(field('label', $.identifier)),
      choice(
        $._statement_modifiers,
        $.semi_colon
      ),
    ),

    // there are function calls to be precise
    // see - https://stackoverflow.com/questions/24526885/does-anyone-know-how-to-understand-such-kind-of-perl-code-blocks
    named_block_statement: $ => prec(PRECEDENCE.SUB_CALL, seq(
      repeat1(seq(
        field('function_name', $.identifier),
        '{',
          repeat(choice(
            $._statement,
            seq($.return_expression, $.semi_colon),
          )),
        '}'
      )),
      $.semi_colon,
    )),

    parenthesized_expression: $ => seq(
      '(',
      prec.left($._expression),
      ')'
    ),

    empty_parenthesized_expression: $ => seq(
      '(',
      optional(prec.left($._expression)),
      ')'
    ),

    // TODO: do this
    // parenthesized_condition: $ => seq(
    //   '(',
    //   ')'
    // ),

    // TODO: return hello => 'dsfs' && meow => 'dsf';
    return_expression: $ => seq(
      'return',
      optional($._expression),
    ),

    _expression: $ => with_or_without_brackets(choice(
      $._expression_without_bareword,
      alias($.call_expression_with_bareword, $.call_expression),
    )),

    // TODO: change this to _expression_without_bareword
    // NOTE: just a hack to handle identifier vs subroutine call
    _expression_without_bareword: $ => with_or_without_brackets(choice(
      $._primitive_expression,
      $._string,
      $._variables,
      $._dereference,
      $.package_variable,

      $.binary_expression,
      $.unary_expression,
      $.ternary_expression,

      $.call_expression,
      $.call_expression_recursive,
      $.method_invocation,
      $.goto_expression,

      // quote-like operators
      $.command_qx_quoted,
      $.backtick_quoted,
      $.patter_matcher_m,
      $.regex_pattern_qr,
      $.substitution_pattern_s,
      $.transliteration_tr_or_y,
      $.heredoc_initializer,
      $.pattern_matcher,

      $._i_o_operator,

      $.anonymous_function,

      // object oriented stuffs
      $.bless,

      // $.grep_or_map_function,
      // $.join_function,
      // $.sort_function,
      // $.unpack_function,

      // $.push_function,

      $.array_function,

      $.variable_declaration,

      $.key_value_pair,
    )),

    array_function: $ => prec(PRECEDENCE.SUB_CALL, seq(
      alias($.identifier, $.function_name),
      $.block,
      commaSeparated($._expression),
    )),

    // TODO: the output tree is wrong for this. fix it.
    package_variable: $ => seq(
      alias(seq(
        $.scalar_variable,
        token.immediate('::'),
        repeat(seq($.identifier, '::')),
      ), $.package_name),
      alias($.identifier, $.scalar_variable),
    ),

    push_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      alias('push', $.push),
      with_or_without_brackets(commaSeparated($._expression)),
    )),

    grep_or_map_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      choice(
        alias('grep', $.grep),
        alias('map', $.map),
      ),
      choice(
        seq($.list_block, $._expression),
        with_or_without_brackets(commaSeparated($._expression)),
      ),
    )),

    join_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      choice(
        alias('join', $.join),
      ),
      with_or_without_brackets(commaSeparated($._expression)),
    )),

    reverse_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      alias('reverse', $.reverse),
      optional(with_or_without_brackets(commaSeparated($._expression))),
    )),

    sort_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      alias('sort', $.sort),
      choice(
        $._expression,
        seq($.list_block, $._expression),
        seq($.call_expression, $._expression),
      ),
    )),

    unpack_function: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      alias('unpack', $.alias),
      with_or_without_brackets(commaSeparated($._expression)),
    )),

    // TODO: this needs more cases coverage
    list_block: $ => seq(
      '{',
      repeat1(choice($._statement, $._expression_without_bareword)),
      '}'
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

    goto_expression: $ => prec.right(PRECEDENCE.ASSIGNMENT_OPERATORS, seq(
      'goto',
      choice(
        seq(field('label', $.identifier), ':'),
        field('expression', $._expression),
        field('subroutine', $.call_expression),
      ),
    )),

    // begin of operators

    binary_expression: $ => choice(
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
      $.to_reference,
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
        field('operator', 'x'),
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
        field('variable', $._expression_without_bareword),
        field('operator', '<<'),
        field('variable', $._expression_without_bareword),
      ),
      seq(
        field('variable', $._expression_without_bareword),
        field('operator', '>>'),
        field('variable', $._expression_without_bareword),
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

    _comma_operator: $ => choice(
      ',',
      '=>',
    ),

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
      field('args', choice($.empty_parenthesized_argument, $.parenthesized_argument, $.arguments)),
    )),

    call_expression_with_bareword: $ => prec.right(PRECEDENCE.SUB_CALL, seq(
      optional(token.immediate('&')),
      optional(seq(
        field('package_name', $.package_name),
        token.immediate('::'),
      )),
      field('function_name', $.identifier),
    )),

    method_invocation: $ => prec.left(PRECEDENCE.SUB_CALL + 1, seq(
      choice(
        field('package_name', choice($.identifier, $.package_name, $.string_single_quoted)),
        field('object', $.scalar_variable),
        field('object_return_value', $._expression),
      ),
      prec.right(repeat1(
        seq(
          $.arrow_operator,
          choice(
            seq(
              optional(seq($.super, token.immediate('::'))),
              field('function_name', $.identifier)
            ),
            $.scalar_variable,
            $.scalar_dereference,
          ),
          optional(field('args', choice($.empty_parenthesized_argument, $.parenthesized_argument, $.arguments))), // TODO: make this optional and fix errors
        ),
      ),
    ))),

    empty_parenthesized_argument: $ => prec(PRECEDENCE.SUB_ARGS, seq('(', ')')),

    parenthesized_argument: $ => prec(PRECEDENCE.SUB_ARGS, seq(
      '(',
      $.arguments,
      ')',
    )),

    arguments: $ => prec.left(PRECEDENCE.SUB_ARGS,
      commaSeparated($.argument),
    ),

    argument: $ => prec.left(PRECEDENCE.SUB_ARGS,
      $._expression,
    ),

    call_expression_recursive: $ => seq(
      '__SUB__',
      field('operator', '->'),
      $.parenthesized_argument,
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
      $.heredoc_initializer,
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
    identifier_2: $ => /[a-zA-Z0-9_$:\.@%\^]+/,

    // TODO: this should be operators. Check.
    loop_control_keyword: $ => prec(PRECEDENCE.ASSIGNMENT_OPERATORS, choice(
      'next',
      'last',
      'redo',
    )),

    package_name: $ => choice(
      $.identifier,
      seq(
        $.identifier,
        repeat1(seq(
          token.immediate('::'),
          $.identifier,
        )),
      ),
      // /[A-Z_a-z][0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/,
      // /\$[0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/, // TODO fix this
      // /\*[0-9A-Z_a-z]*(?:::[0-9A-Z_a-z]+)*/, // type glob stuff
      // TODO: put in other package name structures
    ),

    module_name: $ => choice(
      seq('\'', /.*pm/, '\''), 
      seq('\"', /.*pm/, '\"'), 
     ),

    semi_colon: $ => ';',

    string_single_quoted: $ => prec(PRECEDENCE.STRING, seq(
      "'",
      repeat($._string_single_quoted_content),
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
      repeat(choice($.interpolation, $.escape_sequence, $._string_double_quoted_content)),
      '"',
    )),
    string_qq_quoted: $ => prec(PRECEDENCE.STRING, seq(
      'qq',
      alias($._start_delimiter, $.start_delimiter),
      repeat(choice($._string_qq_quoted_content, $.interpolation, $.escape_sequence)),
      alias($._end_delimiter, $.end_delimiter),
    )),

    command_qx_quoted: $ => prec(PRECEDENCE.STRING, seq(
      'qx',
      choice(
        $.string_single_quoted, // TODO: this is not working
        seq(
          alias($._start_delimiter, $.start_delimiter),
          repeat(choice($._string_qq_quoted_content, $.interpolation, $.escape_sequence)),
          alias($._end_delimiter, $.end_delimiter),
        ),
      ),
    )),

    // same as command_qx_quoted
    backtick_quoted: $ => prec(PRECEDENCE.STRING, seq(
      '`',
      repeat(choice($.interpolation, $.escape_sequence, token(/[^`]+/))),
      '`',
    )),

    word_list_qw: $ => prec(PRECEDENCE.REGEXP, seq(
      'qw',
      alias($._start_delimiter_qw, $.start_delimiter_qw),
      repeat(alias($._element_in_qw, $.list_item)),
      alias($._end_delimiter_qw, $.end_delimiter_qw),
    )),

    patter_matcher_m: $ => prec(PRECEDENCE.REGEXP, seq(
      'm',
      // /'.*'/, // don't interpolate for a single quote. TODO: not working
      alias($._start_delimiter_regex, $.start_delimiter),
      repeat(choice($._regex_pattern, $.interpolation, $.escape_sequence)),
      alias($._end_delimiter_regex, $.end_delimiter),
      optional($.regex_option),
    )),

    pattern_matcher: $ => prec(PRECEDENCE.REGEXP, seq(
      '/',
      $.regex_pattern,
      '/',
      optional($.regex_option),
    )),

    regex_pattern_qr: $ => prec(PRECEDENCE.REGEXP, seq(
      'qr',
      // /'.*'/, // don't interpolate for a single quote. TODO: not working
      alias($._start_delimiter_regex, $.start_delimiter),
      repeat(choice($._regex_pattern, $.interpolation, $.escape_sequence)),
      alias($._end_delimiter_regex, $.end_delimiter),
      optional($.regex_option),
    )),

    substitution_pattern_s: $ => prec(PRECEDENCE.REGEXP, seq(
      's',
      alias($._start_delimiter_search_replace, $.start_delimiter),
      repeat(choice($._search_replace_content, $.interpolation, $.escape_sequence)),
      alias($._separator_delimiter_search_replace, $.separator_delimiter),
      repeat(choice($._search_replace_content, $.interpolation, $.escape_sequence)),
      alias($._end_delimiter_search_replace, $.end_delimiter),
      field('regex_option', optional($.regex_option_for_substitution)),
    )),

    // TODO: revisit this
    transliteration_tr_or_y: $ => prec(PRECEDENCE.REGEXP, seq(
      choice('tr', 'y'),
      alias($._start_delimiter_transliteration, $.start_delimiter),
      repeat($._transliteration_content),
      alias($._separator_delimiter_transliteration, $.separator_delimiter),
      repeat($._transliteration_content),
      alias($._end_delimiter_transliteration, $.end_delimiter),
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

    regex_option: $ => /[msixpodualng]+/,
    regex_option_for_substitution: $ => /[msixpodualngcer]+/,
    regex_option_for_transliteration: $ => /[cdsr]+/,

    // https://perldoc.perl.org/perlop#Quote-and-Quote-like-Operators
    escape_sequence: $ => prec(PRECEDENCE.ESCAPE_SEQ, seq(
      '\\',
      /[tnrfbae]/,
    )),

    // escape_character: $ => '\\[.]+',

    interpolation: $ => choice(
      $.array_variable,
      alias($.hash_ref_in_interpolation, $.arrow_notation),
      // $.hash_access_variable,
      $.scalar_variable,
    ),

    hash_ref_in_interpolation: $ => seq(
      alias(/\$_?[a-zA-Z0-9_]+/, $.scalar_variable),
      alias(token.immediate('->'), $.arrow_operator),
      '{',
      field('hash_key', choice($.identifier, $.scalar_variable)),
      '}',
    ),

    _boolean: $ => choice(
      $.true,
      $.false,
    ),
    true: $ => 'true',
    false: $ => 'false',

    scalar_variable: $ => choice(
      /\$[!"#$%&'()*+,-./0123456789:;<=>?@\]\[\\_`ab|~]/, // special scalar variables
      /\$\^[A-Z]/,                    // $^A
      /\$\#_?[a-zA-Z0-9_]+/,          // length of an array
      /\$[A-Z^_?\\]/,                 // checkout https://perldoc.perl.org/perldata#Identifier-parsing
      // /\$\{_?[a-zA-Z0-9_]+\}/,        // need to name this. eg print "${key}"
      /\$_?[a-zA-Z0-9_]+/,
      /\*[a-zA-Z0-9_]+/,
    ),

    array_access_variable: $ => prec(PRECEDENCE.ARRAY, seq(
      field('array_variable', choice(
        $.scalar_variable,
        $.array_access_variable,
        $.hash_access_variable,
        $.call_expression,
        $.method_invocation,
        $._expression,
      )),
      repeat1(
        seq(
          choice(
            token.immediate('->['),
            token.immediate('[')
          ),
          field('index', $._expression),
          ']',
        )
      ),
    )),

    hash_access_variable: $ => prec(PRECEDENCE.HASH, seq(
      field('hash_variable', choice(
        $.scalar_variable,
        $.array_access_variable,
        $.hash_access_variable,
        $.call_expression,
        $.method_invocation,
        $._expression,
      )),
      repeat1(
        seq(
          choice(
            token.immediate('->{'),
            token.immediate('{'),
          ),
          field('key', choice(
            alias($.identifier, $.bareword),
            alias($.key_words_in_hash_key, $.bareword),
            $._expression_without_bareword,
          )),
          '}',
        )
      ),
    )),

    array_variable: $ => choice(
      /@[+-_!]/,                // special array variable
      /@\^[A-Z]/,               // %^H
      /@[a-zA-Z0-9_]+/
    ),

    hash_variable: $ => choice(
      /%[!+-]/,                 // special hash variables
      /%\^[A-Z]/,               // %^H
      /%[a-zA-Z0-9_]+/
    ),

    _list: $ => choice(
      $._array_type,
      $.array_variable,
    ),

    array: $ => prec(PRECEDENCE.ARRAY, seq(
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
    hash: $ => prec(PRECEDENCE.HASH, seq(
      '(',
      optional(binaryCommaSeparated(choice(
        $.ternary_expression,
        $.key_value_pair,
        $.hash_dereference,
        // $.hash_variable,
      ))),
      ')',
    )),

    hash_ref: $ => prec(PRECEDENCE.HASH, seq(
      optional('+'), // to make into a hash_ref rather than a block
      '{',
      optional(binaryCommaSeparated(choice(
        $.ternary_expression,
        $.key_value_pair,
        $.hash_dereference,
        $.hash_variable,
      ))),
      '}'
    )),

    _reference: $ => choice(
      $.array_ref,
      $.hash_ref,
      $.scalar_variable,
      $.to_reference,
    ),

    to_reference: $ => prec.right(PRECEDENCE.SYMBOLIC_UNARY, seq(
      field('operator', '\\'),
      field('variable', $._expression), // this is to make anything a reference
    )),

    _dereference: $ => choice(
      $.scalar_dereference,
      $.array_dereference,
      $.hash_dereference,
    ),

    scalar_dereference: $ => prec.left(PRECEDENCE.STRING, seq(
      '$',
      with_or_without_curly_brackets($._expression_without_bareword),
    )),

    array_dereference: $ => prec.left(PRECEDENCE.ARRAY, seq(
      '@',
      with_or_without_curly_brackets($._expression),
    )),

    hash_dereference: $ => prec.right(PRECEDENCE.HASH ,seq(
      '%',
      with_or_without_curly_brackets($._expression),
    )),

    // cat => 'meow', meta => {}
    key_value_pair: $ => prec.left(PRECEDENCE.HASH, seq(
      field('key', choice(
        alias($.identifier, $.bareword),
        alias($.key_words_in_hash_key, $.bareword),
        $.variable_declaration,
        $._expression_without_bareword,
      )),
      $.hash_arrow_operator,
      field('value', $._expression),
    )),

    // NOTE: this is a hack for keys that are keywords
    key_words_in_hash_key: $ => choice(
      'sub'
    ),

    arrow_operator: $ => /->/,
    hash_arrow_operator: $ => prec.left(PRECEDENCE.COMMA_OPERATORS, /=>/), // alias comma operator

    // some key words
    super: $ => 'SUPER',
    no_require: $ => '-norequire',

    // single line comment
    comments: $ => prec(PRECEDENCE.COMMENTS, seq(
      '#', /.*/
    )),

  }
});

/**
 * repeats the rule comma separated, like
 * rule, rule => rule, rule => rule
 * example: my (a, b);
 * using it in the above.
 * @param {*} rule 
 */
function commaSeparated(rule) {
  return prec.left(PRECEDENCE.COMMA_OPERATORS, seq(
    rule,
    repeat(seq(choice(',', '=>'), rule)),
    optional(','), // in perl so far you could have this
  ));
}

/**
 * repeats the rule binary comma (,) separated, like
 * rule, rule
 * example: my (a, b);
 * using it in the above.
 * @param {*} rule 
 */
function binaryCommaSeparated(rule) {
  return prec.left(PRECEDENCE.COMMA_OPERATORS, seq(
    rule,
    repeat(seq(',', rule)),
    optional(','), // in perl so far you could have this
  ));
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
  return choice(
    rule,
    prec.left(PRECEDENCE.BRACKETS, seq('(', rule, ')')),
  );
}
// TODO: the above should be like this, test it
// function with_or_without_brackets(rule) {
//   return choice(
//     rule,
//     prec(PRECEDENCE.BRACKETS, seq('(', rule, ')')),
//   );
// }

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
  return choice(
    rule,
    prec.left(PRECEDENCE.BRACKETS, seq('{', rule, '}')),
  );
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
