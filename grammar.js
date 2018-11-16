module.exports = grammar({
  name: 'json',

  extras: $ => [
    /\s/
  ],

  rules: {
    value: $ => $._value,

    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null
    ),

    object: $ => seq(
      "{", commaSep($.pair), "}"
    ),

    pair: $ => seq(
      choice($.string, $.number),
      ":",
      $._value
    ),

    array: $ => seq(
      "[", commaSep($._value), "]"
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]/)),
        $.escape_sequence
      )),
      '"'
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|n|r|t|u)/
    )),

    number: $ => {
      const hex_literal = seq(
        choice('0x', '0X'),
        /[\da-fA-F]+/
      )

      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-','+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

      const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)

      const decimal_integer_literal = seq(
        optional(choice('-','+')),
        choice(
          '0',
          seq(/[1-9]/, optional(decimal_digits))
        )
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      )

      return token(choice(
        hex_literal,
        decimal_literal,
        binary_literal,
        octal_literal
      ))
    },

    true: $ => "true",

    false: $ => "false",

    null: $ => "null"
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)))
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}
