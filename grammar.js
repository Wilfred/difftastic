module.exports = grammar({
  name: 'R',

  rules: {
    source_file: $ => repeat($._expression),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => prec.left(seq(
      'function',
      '(',
      optional(seq(
        commaSep1($._parameter),
        optional(',')
      )),
      ')',
      $._expression
    )),

    _parameter: $ => choice(
        $.identifier,
        seq($.identifier, '=', $._expression),
    ),

    block: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    call: $ => seq(
      $._expression,
      '(',
      repeat(
        choice(
          $._expression,
          seq(',', $._expression)
        )
      ),
      ')'
    ),

    left_assignment: $ => prec.right(seq(
      $.identifier,
      choice(
        '=',
        '<-',
        '<<-'
      ),
      $._expression
    )),

    brace_list: $ => seq(
      '{',
      repeat(
        $._expression
      ),
      '}'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.call,
      $.function_definition,
      $.left_assignment,
      $.brace_list
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
