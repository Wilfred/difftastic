module.exports = grammar({
  name: 'ruby',

  rules: {
	_terminator: $ => choice('\n', ';'),
  }
});
