module.exports = grammar({
  name: 'json',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  supertypes: $ => [
    $._value
  ],

  rules: {
    document: $ => repeat($._value),

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
      field("key", choice($.string, $.number)),
      ":",
      field("value", $._value)
    ),

    array: $ => seq(
      "[", commaSep($._value), "]"
    ),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $.string_content, '"')
    ),

    string_content: $ => repeat1(choice(
      token.immediate(prec(1, /[^\\"\n]+/)),
      $.escape_sequence
    )),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

    number: _ => {
      const decimal_digits = /\d+/
      const signed_integer = seq(optional('-'), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const decimal_integer_literal = seq(
        optional('-'),
        choice(
          '0',
          seq(/[1-9]/, optional(decimal_digits))
        )
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      )

      return token(decimal_literal)
    },

    true: _ => "true",

    false: _ => "false",

    null: _ => "null",

    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
