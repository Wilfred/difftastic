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
        seq(',', optional($._expression))
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

    subset2: $ => seq(
      $._expression,
      '[[',
      $.argument_list,
      ']]'
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
      prec.left(seq($._expression, '==', $._expression)),
      prec.left(seq($._expression, '|', $._expression)),
      prec.left(seq($._expression, '&', $._expression))
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
      $.subset,
      $.subset2
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
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          /[^'\\\n]+|\\\r?\n/,
          $.escape_sequence
        )),
        "'"
      )
    ),

        escape_sequence: $ => token.immediate(seq(
          '\\',
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        ))
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
