module.exports = grammar({
  name: 'ruby',

  rules: {
	_primary: $ => choice($._variable),

	_variable: $ => choice($.identifier , 'nil', 'self'),

	identifier: $ => seq(rep(choice('@', '$')), /[a-zA-Z_][a-zA-Z0-9_]*/),

	_terminator: $ => choice('\n', ';'),
  }
});
