module.exports = grammar({
  name: 'lua',

  extras: $ => [
    $.single_comment,
    $.multiline_comment,
    /[\s\n]/
  ],

  externals: $ => [
    $.single_comment,
    $.multiline_comment,
  ],

  rules: {
    lua: $ => repeat($._statement),

    // Statements
    _statement: $ => choice(
      alias($._expression, $.expression)
    ),

    // Expressions
    _expression: $ => choice(
      $.identifier
    ),

    // Identifiers
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
});
