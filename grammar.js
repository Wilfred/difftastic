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

    char_literal: $ => seq(
      "'",
      choice(
        $._graphic,
        $._space,
        $._escape
      ),
      "'"
    ),

    _graphic: $ => choice(
      $._small,
      $._large,
      $._symbol,
      digit,
      $._special,
      '"',
      '\''
    ),

    // TODO: any lowercase unicode letter
    _small: $ => choice(
      /[a-z]/,
      '_'
    ),

    // TODO: any uppercase or titlecase unicode letter
    _large: $ => choice(
      $._ascii_large
    ),

    _ascii_large: $ => /[A-Z]/,

    // TODO: any Unicode symol or punctuation
    _symbol: $ => choice(
      '!', '#', '$', '%', '&', '⋆', '+', '.', '/', '<', '=', '>', '?', '@', '^', '|', '-', '~', ':', '\\'
    ),

    _special: $ => choice(
      '(', ')', ';', '[', ']', '`', '{', '}'
    ),

    _space: $ => ' ',

    _escape: $ => prec(1, seq(
      '\\',
      choice(
        $._char_escape,
        $._ascii,
        digit,
        hexidecimal,
        octadecimal
      )
    )),

    _char_escape: $ => choice(
      'a',
      'b',
      'f',
      'n',
      'r',
      't',
      'v',
      '\\',
      '"',
      "'",
      '&'
    ),

    _ascii: $ => choice(
      seq('^', $._cntrl),
      'NUL',
      'SOH',
      'STX',
      'ETX',
      'EOT',
      'ENQ',
      'ACK',
      'BEL',
      'BS',
      'HT',
      'LF',
      'VT',
      'FF',
      'CR',
      'SO',
      'SI',
      'DLE',
      'DC1',
      'DC2',
      'DC3',
      'DC4',
      'NAK',
      'SYN',
      'ETB',
      'CAN',
      'EM',
      'SUB',
      'ESC',
      'FS',
      'GS',
      'RS',
      'US',
      'SP',
      'DEL'
    ),

    _cntrl: $ => choice(
      $._ascii_large,
      '@',
      '[',
      ']',
      '\\',
      '^',
      '_'
    ),

    _literals: $ => choice(
      $.integer_literal,
      $.float_literal,
      $.octal_literal,
      $.hexidecimal_literal,
      $.char_literal
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
