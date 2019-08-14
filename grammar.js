const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  COMMA: -1,
  OBJECT: -1,
  DECLARATION: 1,
  ASSIGN: 0,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  REL: 4,
  PLUS: 5,
  TIMES: 6,
  EXP: 7,
  TYPEOF: 8,
  DELETE: 8,
  VOID: 8,
  NOT: 9,
  NEG: 10,
  INC: 11,
  CALL: 12,
  NEW: 13,
  MEMBER: 14
};

module.exports = grammar({
  name: 'prisma',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.datasource,
      $.model,
      $.type,
    ),

    datasource: $ => seq(
      'datasource',
      $.identifier,
      $.statement_block,
    ),

    model: $ => seq(
      'model',
      $.identifier,
      $.statement_block,
    ),

    type: $ => seq(
      'type',
      repeat1(
        $._expression,
      ),
    ),

    comment: $ => token(
      seq('//', /.*/),
    ),

    statement_block: $ => prec.right(seq(
      '{',
      repeat($._statement),
      '}'
    )),

    _statement: $ => choice(
      $._declaration,
    ),

    _declaration: $ => choice(
      $._datasource_declaration,
      $.column_declaration,
      $.block_attribute,
    ),

    column_declaration: $ => seq(
      $.identifier,
      $.column_type,
      optional($.column_relation),
      // TODO: Check if it's really needed
      $.new_line,
    ),

    _datasource_declaration: $ => choice(
      $.assignment_pattern,
    ),

    assignment_pattern: $ => seq(
      $.identifier,
      '=',
      $._constructable_expression,
    ),

    _constructable_expression: $ => choice(
      $.identifier,
      $.type_expression,
      $.block_attribute,
      $.namespace,
      // $.column_type,
      $.member_expression,
      $.number,
      $.string_value,
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
      $.identifier
    )),

    column_type: $ => seq(
      $.identifier,
      /\??/,
      optional($.array),
    ),

    column_relation: $ => repeat1(
      $.namespace,
    ),

    type_expression: $ => seq(
      $.identifier,
      ':',
      $._expression,
    ),

    call_expression: $ => prec(PREC.CALL, seq(
      // field('function', $._expression),
      $._expression,
      // field('arguments', $.arguments)
      $.arguments,
    )),

    namespace: $ => seq(
      '@',
      $._expression,
    ),

    block_attribute: $ => seq(
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
      $.string_value,
      $.array,
      // $.name_pattern,
    ),


    _expression: $ => choice(
      $._constructable_expression,
      $.call_expression,
      $.binary_expression,
    ),
  //
    identifier: $ => /[a-zA-Z-_][a-zA-Z0-9-_]*/,
    string_value: $ => token(choice(
      seq("'", /([^'\n]|\\(.|\n))*/, "'"),
      seq('"', /([^"\n]|\\(.|\n))*/, '"')
    )),

    number: $ => /\d+/,
  //
  //   assignation: $ => '=',
  //
  //   dot: $ => '.',
  //
    array: $ => seq(
      '[',
      commaSep(optional(
        $._expression
      )),
      ']'
    ),

    // TODO: Check if it's really needed.
    new_line: $ => seq(
      '\n',
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
