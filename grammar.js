const PREC = {
  COMMA: -1,
  DECLARATION: 1,
  COMMENT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  PLUS: 4,
  MINUS: 4,
  REL: 5,
  TIMES: 6,
  SHIFT: 6,
  NOT: 8,
  NEG: 9,
};

module.exports = grammar({
  name: 'php',

  conflicts: $ => [
    [$.function_call_expression, $._variable],
    [$.scoped_property_access_expression, $.scoped_call_expression],
    [$.member_access_expression, $.member_call_expression]
  ],
  inline: $ => [
    $._expression,
    $._member_name,
    $._variable,
    $._callable_expression,
    $._selection_statement,
    $._iteration_statement,
    $._foreach_value,
  ],
  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],
  rules: {

    program: $ => seq(
      // TODO: optional text
      choice('<?php', '<?='),
      repeat($.statement),
      optional('?>'),
      // TODO: optional text
    ),

    statement: $ => choice(
      $.compound_statement,
      $.named_label_statement,
      $.expression_statement,
      $._selection_statement,
      $._iteration_statement,
      $.jump_statement,
      // $.try_statement,
      // $.declare_statement,
      // $.echo_statement,
      // $.unset_statement,
      // $.const_declaration,
      // $.function_definition,
      // $.class_declaration,
      // $.interface_declaration,
      // $.trait_declaration,
      // $.namespace_definition,
      // $.namespace_use_declaration,
      // $.global_declaration,
      // $.function_static_declaration,
    ),

    _selection_statement: $ => choice(
      $.if_statement,
      $.switch_statement
    ),

    jump_statement: $ => choice(
      $.goto_statement,
      $.continue_statement,
      $.break_statement,
      $.return_statement,
      $.throw_statement,
    ),

    goto_statement: $ => seq(
      'goto', $.name, ';'
    ),

    continue_statement: $ => seq(
      'continue', optional($._breakout_level), ';'
    ),

    break_statement: $ => seq(
      'break', optional($._breakout_level), ';'
    ),

    _breakout_level: $ => choice(
      $.integer,
      seq('(', $._breakout_level, ')')
    ),

    integer: $ => {
      const decimal = /1-9\d+/
      const octal = /0[0-7]+/
      const hex = /0[xX][0-9|a-f|A-F]+/
      const binary = /0[bB][01]+/
      return choice(
        decimal,
        octal,
        hex,
        binary
      )
  },

    return_statement: $ => seq(
      'return', optional($._expression), ';'
    ),

    throw_statement: $ => seq(
      'throw', $._expression, ';'
    ),

    _iteration_statement: $ => choice(
      $.while_statement,
      $.do_statement,
      $.for_statement,
      $.foreach_statement,
    ),

    while_statement: $ => seq(
      'while', '(', $._expression, ')',
      choice(
        $.statement,
        seq(':', repeat1($.statement), 'endwhile', ';')
      )
    ),

    do_statement: $ => seq(
      'do', $.statement, 'while', '(', $._expression, ')', ';'
    ),

    for_statement: $ => seq(
      'for', '(', $._expressions, ';', $._expressions, ';', $._expressions, ')',
      choice(
        $.statement,
        seq(':', repeat1($.statement), 'endfor', ';')
      )
    ),

    _expressions: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    sequence_expression: $ => prec(PREC.COMMA, seq(
     $._expression, ',', choice($.sequence_expression, $._expression))
   ),

    foreach_statement: $ => seq(
      'foreach', '(', $._expression, 'as', optional(seq($._expression, '=>')), $._foreach_value, ')',
      choice(
        $.statement,
        seq(':', repeat1($.statement), 'endforeach', ';')
      )
    ),

    _foreach_value: $ => choice(
      seq(optional('&'), $._expression),
      $.list_literal
    ),

    if_statement: $ => seq(
      'if', '(', $._expression ,')',
      choice(
        seq($.statement, repeat(alias($.else_if_clause_1, $.else_if_clause)), alias($.else_clause_1, $.else_clause)),
        seq(':', repeat1($.statement), repeat(alias($.else_if_clause_2, $.else_if_clause)), alias($.else_clause_2, $.else_clause), 'endif', ';')
      ),
    ),

    else_if_clause_1: $ => seq(
      'elseif', '(', $._expression, ')', $.statement
    ),

    else_clause_1: $ => seq(
      'else', $.statement
    ),

    else_if_clause_2: $ => seq(
      'elseif', '(', $._expression, ')', seq(':', repeat1($.statement))
    ),

    else_clause_2: $ => seq(
      'else', seq(':', repeat1($.statement))
    ),

    switch_statement: $ => seq(
      'switch', '(', $._expression, ')',
      choice('{', ':'),
      repeat(choice($.case_statement, $.default_statement)),
      choice('}', seq('endswitch', ';'))
    ),

    case_statement: $ => seq(
      'case', $._expression, seq(':', ';'), repeat($.statement)
    ),

    default_statement: $ => seq(
      'default', seq(':', ';'), repeat($.statement)
    ),


    compound_statement: $ => seq(
      '{',
      repeat($.statement),
      '}'
    ),

    named_label_statement: $ => seq(
      $.name,
      ':'
    ),

    expression_statement: $ => seq(
      optional($._expression),
      ';'
    ),

    _expression: $ => choice(
      $.assignment_expression,
      $.yield_expression,
      $.binary_expression,
      $.include_expression,
      $.include_once_expression,
      $.require_expression,
      $.require_once_expression,
    ),

    assignment_expression: $ => choice(
      seq(choice($._variable, $.list_literal), '=', $.assignment_expression),
      seq($._variable, '=', '&', $._variable),
      choice(...[
        ['**=', PREC.TIMES],
        ['*=', PREC.TIMES],
        ['/=', PREC.TIMES],
        ['+=', PREC.PLUS],
        ['-=', PREC.PLUS],
        ['.=', PREC.PLUS],
        ['<<=', PREC.SHIFT],
        ['>>=', PREC.SHIFT],
        ['&=', PREC.AND],
        ['^=', PREC.AND],
        ['|=', PREC.OR]
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq($._variable, operator, $.assignment_expression)
      )))
    ),

    _variable: $ => choice(
      $._callable_variable,
      $.scoped_property_access_expression,
      $.member_access_expression
    ),

    member_access_expression: $ => seq(
      $.dereferencable_expression, '->', $._member_name
    ),

    scoped_property_access_expression: $ => seq(
      $._scope_resolution_qualifier, '::', $.simple_variable
    ),

    list_literal: $ => seq(
      'list',
      '(',
      commaSep(choice(
        choice($.list_literal, $._variable),
        seq($._expression, '=>', choice($.list_literal, $._variable))
      )),
      ')'
    ),

    _callable_variable: $ => choice(
      $.simple_variable,
      $.subscript_expression,
      $.member_call_expression,
      $.scoped_call_expression,
      $.function_call_expression
    ),

    function_call_expression: $ => seq(
      choice($.qualified_name, ),
      $.arguments
    ),

    _callable_expression: $ => choice(
      $._callable_variable,
      seq('(', $._expression, ')'),
      $.array_creation_expression,
      $.string
    ),

    scoped_call_expression: $ => seq(
      $._scope_resolution_qualifier, '::', $._member_name, $.arguments
    ),

    _scope_resolution_qualifier: $ => choice(
      $.relative_scope,
      $.qualified_name,
      $.dereferencable_expression
    ),

    relative_scope: $ => choice(
      'self',
      'parent',
      'static'
    ),

    qualified_name: $ => seq(
      optional($.namespace_name_as_prefix), $.name
    ),

    namespace_name_as_prefix: $ => prec.right(choice(
      '\\',
      seq(optional('\\'), $.namespace_name, '\\'),
      seq('namespace', '\\'),
      seq('namespace', '\\', $.namespace_name, '\\')
    )),

    namespace_name: $ => prec.right(seq($.name, repeat(seq('\\', $.name)))),

    arguments: $ => seq(
      '(',
      repeat($.variadic_unpacking, $._expression),
      ')'
    ),

    member_call_expression: $ => seq(
      $.dereferencable_expression,
      '->',
      $._member_name,
      $.arguments
    ),

    variadic_unpacking: $ => seq('...', $._expression),

    _member_name: $ => choice(
      $.name, $.simple_variable, seq('{', $._expression, '}')
    ),

    subscript_expression: $ => seq(
      $.dereferencable_expression,
      choice(
        seq('[', optional($._expression), ']'),
        seq('{', $._expression, '}')
      )
    ),

    dereferencable_expression: $ => seq(
      $._variable,
      seq('(', $._expression, ')'),
      $.array_creation_expression,
      $.string
    ),

    array_creation_expression: $ => choice(
      seq('array', '(', commaSep($.array_element_initializer), optional(','), ')'),
      seq('[', commaSep($.array_element_initializer), optional(','), ']')
    ),

    string: $ => {
      const b_prefix = /[bB]/
      const single_quote_chars = repeat(/\\'|\\\\|\\?[^'\\]/)
      const single_quote_string = seq(
        optional(b_prefix), "'", single_quote_chars, "'"
      )

      const dq_simple_escapes = /\\"|\\\\|\\\$|\\e|\\f|\\n|\\r|\\t|\\v/
      const octal_digit = /0-7/
      const dq_octal_escapes = seq('\\', octal_digit, optional(octal_digit), optional(octal_digit))
      const hex_digit = /\d|a-f|A-F/
      const dq_hex_escapes = seq(
        /\\[xX]/,
        hex_digit,
        optional(hex_digit)
      )

      const dq_unicode_escapes = seq('\\u{', repeat1(hex_digit), '}')
      const dq_escapes = choice(dq_simple_escapes, dq_octal_escapes, dq_hex_escapes, dq_unicode_escapes)
      const double_quote_chars = repeat(dq_escapes, /[^"\\]|\\[^"\\$efnrtvxX0-7]/)
      const double_quote_string = seq(
        optional(b_prefix), '"', double_quote_chars, '"'
      )

      return token(choice(
        single_quote_string,
        double_quote_string,
        // heredoc_string,
        // nowdoc_string,
      ))
    },

    simple_variable: $ => choice(
      $._variable_name,
      seq('$', $.simple_variable),
      seq('$', '{', $._expression, '}')
    ),

    _variable_name: $ => seq('$', $.name),

    yield_expression: $ => choice(
      seq('yield', $.array_element_initializer),
      seq('yield', 'from', $._expression),
    ),

    array_element_initializer: $ => prec.right(choice(
      seq(optional('&'), $._expression),
      seq($._expression, '=>', optional('&'), $._expression)
    )),

    binary_expression: $ => choice(...[
      ['and', PREC.AND],
      ['or', PREC.OR],
      ['xor', PREC.OR],
      ['||', PREC.OR],
      ['&&', PREC.AND],
      ['|', PREC.OR],
      ['^', PREC.AND],
      ['&', PREC.AND],
      ['??', PREC.TERNARY],
      ['==', PREC.REL],
      ['!=', PREC.REL],
      ['<>', PREC.REL],
      ['===', PREC.REL],
      ['!==', PREC.REL],
      ['<', PREC.REL],
      ['>', PREC.REL],
      ['<=', PREC.REL],
      ['>=', PREC.REL],
      ['<=>', PREC.REL],
      ['<<', PREC.SHIFT],
      ['>>', PREC.SHIFT],
      ['+', PREC.PLUS],
      ['-', PREC.MINUS],
      ['.', PREC.PLUS],
      ['*', PREC.TIMES],
      ['/', PREC.TIMES],
      ['%', PREC.TIMES],
      ['instanceof', PREC.REL]
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq($._expression, operator, $._expression))
    )),

    include_expression: $ => seq(
      'include',
      $._expression
    ),

    include_once_expression: $ => seq(
      'include_once',
      $._expression
    ),

    require_expression: $ => seq(
      'require',
      $._expression
    ),

    require_once_expression: $ => seq(
      'require_once',
      $._expression
    ),

    name: $ => {
      var nondigit = /[_a-zA-Z\u0080-\u00ff]/

      return choice(
        nondigit,
        seq($.name, nondigit),
        seq($.name, /\d/)
      )
    },

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
})

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
