module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
	$._line_break,
	/[ \t\r]/
  ],

  rules: {
    program: $ => repeat(seq($._statement, optional($._terminator))),

	_statement: $ => choice($._expression),
	_expression: $ => choice($._argument),

	_argument: $ => choice($._primary),

	_primary: $ => choice($._variable),

	_variable: $ => choice($.identifier , 'nil', 'self'),

	identifier: $ => seq(repeat(choice('@', '$')), /[a-zA-Z_][a-zA-Z0-9_]*/),

	comment: $ => token(seq('#', /.*/)),

    _line_break: $ => '\n',
	_terminator: $ => choice($._line_break, ';'),
  }
});
