module.exports = grammar({
  name: 'R',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    program: $ => repeat($._expression),

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

    argument_list: $ => repeat1(
      choice(
        $._expression,
        seq(',', $._expression)
      )
    ),

    call: $ => seq(
      $._expression,
      '(',
      optional($.argument_list),
      ')'
    ),

    left_assignment: $ => prec.right(seq(
      $._expression,
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

    subset: $ => seq(
      $._expression,
      '[',
      $.argument_list,
      ']'
    ),

    unary: $ => prec.left(2, choice(
      seq('-', $._expression),
      seq('+', $._expression),
      seq('!', $._expression)
    )),

    binary: $ => choice(
      prec.left(2, seq($._expression, '*', $._expression)),
      prec.left(1, seq($._expression, '+', $._expression)),
      prec.left(1, seq($._expression, '-', $._expression)),
      prec.left(seq($._expression, '==', $._expression))
    ),

    _expression: $ => choice(
      $.identifier,
      $.integer,
      $.string,
      $.call,
      $.function_definition,
      $.left_assignment,
      $.brace_list,
      $.binary,
      $.unary,
      $.subset
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[A-Za-z.][A-Za-z0-9_.]*/,

    integer: $ => /\d+/,

    comment: $ => seq('#', /.*/),

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          /[^"\\\n]+|\\\r?\n/,
          '\\'
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          /[^'\\\n]+|\\\r?\n/,
          '\\'
        )),
        "'"
      )
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
