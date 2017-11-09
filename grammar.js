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

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],
  rules: {
    //
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
      // $.selection_statement,
      // $.iteration_statement,
      // $.jump_statement,
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

    _expression: $ => seq(
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
      // $.scoped_property_access_expression,
      // $.member_access_expression
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
      // $.subscript_expression,
      // $.member_call_expression,
      // $.scoped_call_expression,
      // $.function_call_expression
    ),

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

    array_element_initializer: $ => choice(
      seq(optional('&'), $._expression),
      seq($._expression, '=>', optional('&'), $._expression)
    ),

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
      'include_once',
      $._expression
    ),

    require_once_expression: $ => seq(
      'include_once',
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
