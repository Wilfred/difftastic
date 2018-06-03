module.exports = grammar({
  name: 'lua',

  extras: $ => [
    $.comment,
    /[\s\n]/
  ],

  externals: $ => [
    $.comment,
    $._multiline_string
  ],

  rules: {
    lua: $ => repeat($._statement),

    // Statements
    _statement: $ => choice(
      alias($._expression, $.expression)
    ),

    // Expressions
    _expression: $ => choice(
      $.string,
      $.identifier
    ),

    // Primitives
    string: $ => choice(
      seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'"),
      seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
      $._multiline_string
    ),

    // Identifiers
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
});
