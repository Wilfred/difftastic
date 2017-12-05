const
  digit = /[0-9]/,
  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimals = repeat1(digit),

  hexidecimal = seq(choice('x', 'X'), repeat1(hexDigit)),
  octadecimal = seq(choice('o', 'O'), repeat1(octalDigit)),

  decimalLiteral = seq(digit, repeat(digit)),
  hexLiteral     = seq('0', hexidecimal),
  octalLiteral   = seq('0', octadecimal),

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
    float_literal:   $ => token(floatLiteral),
    octal_literal:   $ => token(octalLiteral),
    hexidecimal_literal: $ => token(hexLiteral)
  }
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
