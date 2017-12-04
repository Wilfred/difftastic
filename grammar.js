const
  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  decimals = repeat1(decimalDigit),

  decimalLiteral = seq(decimalDigit, repeat(decimalDigit)),
  hexLiteral     = seq('0', choice('x', 'X'), repeat1(hexDigit)),
  octalLiteral   = seq('0', choice('o', 'O'), repeat(octalDigit)),

  exponent = seq(
    choice('e', 'E'),
    optional(choice('+', '-')),
    repeat1(decimalLiteral)
  ),

  floatLiteral = choice(
    seq(decimals, '.', optional(decimals), optional(exponent)),
    seq(decimals, exponent)
  )

module.exports = grammar({
  name: 'haskell',

  rules: {
    program: $ => seq(repeat($.statement)),

    statement: $ => choice(
      $._literals
    ),

    _literals: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.octal_literal,
      $.hexidecimal_literal
    ),

    integer_literal: $ => token(decimalLiteral),
    float_literal: $ => token(floatLiteral),
    octal_literal: $ => token(octalLiteral),
    hexidecimal_literal: $ => token(hexLiteral)
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
