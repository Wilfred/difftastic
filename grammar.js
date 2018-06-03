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
      $.number,
      $.identifier
    ),

    // Primitives
    string: $ => choice(
      seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'"),
      seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
      $._multiline_string
    ),

    number: $ => {
      const
        decimal_digits = /[0-9]+/;
        signed_integer = seq(optional(choice('-', '+')), decimal_digits);
        decimal_exponent_part = seq(choice('e', 'E'), signed_integer);

        decimal_integer_literal = choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(decimal_digits))
        );

        hex_digits = /[a-fA-F0-9]+/;
        hex_exponent_part = seq(choice('p', 'P'), signed_integer);

        decimal_literal = choice(
          seq(decimal_integer_literal, '.', optional(decimal_digits), optional(decimal_exponent_part)),
          seq('.', decimal_digits, optional(decimal_exponent_part)),
          seq(decimal_integer_literal, optional(decimal_exponent_part))
        );

        hex_literal = seq(
          choice('0x', '0X'),
          hex_digits,
          optional(seq('.', hex_digits)),
          optional(hex_exponent_part)
        );

      return token(choice(
        decimal_literal,
        hex_literal
      ));
    },

    // Identifiers
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/
  }
});
