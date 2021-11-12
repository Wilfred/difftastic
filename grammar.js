const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  ASSIGN: 0,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  REL: 4,
  PLUS: 5,
  TIMES: 6,
  EXP: 7,
  CALL: 8,
  MEMBER: 9
};

module.exports = grammar({
  name: 'prisma',

  extras: $ => [
    $.comment,
    $.developer_comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  conflicts: $ => [
    [$.column_declaration, $.type_declaration],
    [$.assignment_pattern, $.assignment_expression],
    [$.comment, $.developer_comment],
  ],

  rules: {
    program: $ => repeat($._declaration),

    datasource_declaration: $ => seq(
      'datasource',
      $.identifier,
      $.statement_block,
    ),

    model_declaration: $ => seq(
      'model',
      $.identifier,
      $.statement_block,
    ),

    generator_declaration: $ => seq(
      'generator',
      $.identifier,
      $.statement_block,
    ),

    type_declaration: $ => prec(PREC.MEMBER, seq(
      'type',
      repeat1(
        $._expression,
      ),
    )),

    enum_declaration: $ => seq(
      'enum',
      $.identifier,
      $.enum_block,
    ),

    _declaration: $ => choice(
      $.datasource_declaration,
      $.model_declaration,
      $.generator_declaration,
      $.type_declaration,
      $.enum_declaration
    ),

    developer_comment: $ => token(
      seq('//', /[^/].*/),
    ),

    comment: $ => prec(PREC.COMMENT, token(
      seq('///', /.*/),
    )),

    statement_block: $ => prec.right(seq(
      '{',
      repeat($._statement),
      '}'
    )),

    enum_block: $ => prec.right(seq(
      '{',
      repeat($.enumeral),
      '}'
    )),

    _statement: $ => choice(
      $.column_declaration,
      $.block_attribute_declaration,
      $.assignment_expression,
    ),

    column_declaration: $ => seq(
      $.identifier,
      $.column_type,
      optional(repeat(
        $.attribute
      )),
    ),

    assignment_pattern: $ => seq(
      $.identifier,
      '=',
      $._constructable_expression,
    ),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      alias($.identifier, $.variable),
      '=',
      $._expression
    )),

    _constructable_expression: $ => choice(
      $.identifier,
      $.type_expression,
      $.block_attribute_declaration,
      $.attribute,
      $.member_expression,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null,
      $.array,
    ),

    binary_expression: $ => choice(
      ...[
        ['&&', PREC.AND],
        ['||', PREC.OR],
        ['>>', PREC.TIMES],
        ['>>>', PREC.TIMES],
        ['<<', PREC.TIMES],
        ['&', PREC.AND],
        ['^', PREC.OR],
        ['|', PREC.OR],
        ['+', PREC.PLUS],
        ['-', PREC.PLUS],
        ['*', PREC.TIMES],
        ['/', PREC.TIMES],
        ['%', PREC.TIMES],
        ['**', PREC.EXP],
        ['<', PREC.REL],
        ['<=', PREC.REL],
        ['==', PREC.REL],
        ['===', PREC.REL],
        ['!=', PREC.REL],
        ['!==', PREC.REL],
        ['>=', PREC.REL],
        ['>', PREC.REL],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          $._expression,
          operator,
          $._expression
        ))
      )
    ),

    member_expression: $ => prec(PREC.MEMBER, seq(
      choice(
        $.identifier,
        $.member_expression
      ),
      '.',
      alias($.identifier, $.property_identifier)
    )),

    column_type: $ => seq(
      $.identifier,
      /\??/,
      optional($.array),
    ),

    type_expression: $ => seq(
      $.identifier,
      ':',
      $._expression,
    ),

    call_expression: $ => prec(PREC.CALL, seq(
      $._expression,
      $.arguments,
    )),

    attribute: $ => seq(
      '@',
      $._expression,
    ),

    block_attribute_declaration: $ => seq(
      '@@',
      $._expression,
    ),

    arguments: $ => prec(PREC.CALL, seq(
      '(',
      commaSep(optional($._expression)),
      ')'
    )),

    _call_signature: $ => seq(
      field('parameters', $.formal_parameters)
    ),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        commaSep1($._formal_parameter)
      )),
      ')'
    ),

    _formal_parameter: $ => choice(
      $.identifier,
      $.string,
      $.array,
      $.assignment_pattern,
    ),

    _expression: $ => choice(
      $._constructable_expression,

      $.assignment_expression,
      $.call_expression,
      $.binary_expression,
    ),

    identifier: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,
    string: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"')
    )),

    enumeral: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,

    number: $ => /\d+/,

    array: $ => seq(
      '[',
      commaSep(optional(
        $._expression
      )),
      ']'
    ),

    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
