module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
    $._line_break,
    /[ \t\r]/
  ],

  rules: {
    program: $ => $._compound_statement,

    _compound_statement: $ => repeat(seq($._statement, optional($._terminator))),

  	_statement: $ => choice(
      $._expression
    ),
  	_expression: $ => choice($._argument),

  	_argument: $ => choice($._primary),

  	_primary: $ => choice(
      seq("(", $._compound_statement, ")"),
      $._variable
    ),

  	_variable: $ => choice($.identifier , 'nil', 'self'),

  	identifier: $ => seq(repeat(choice('@', '$')), /[a-zA-Z_][a-zA-Z0-9_]*/),

  	comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        '=begin\n',
        repeat(/.*\n/),
        '=end\n'
      )
    )),

    _line_break: $ => '\n',
  	_terminator: $ => choice($._line_break, ';'),
  }
});
