const

decimal = /[0-9][0-9_]*/
exponent = /[eE][+-]?[0-9_]+/
hex_exponent = /[pP][+-]?[0-9a-fA-F_]+/
magic_hash = rule => token(seq(rule, optional(token.immediate(/##?/))))

module.exports = {
  // ------------------------------------------------------------------------
  // literals
  // ------------------------------------------------------------------------

  // the `choice` here is necessary to avoid integers being parsed as floats
  float: _ => magic_hash(
    seq(
      decimal,
      choice(
        seq(/\.[0-9_]+/, optional(exponent)),
        exponent,
      ),
    ),
  ),

  char: _ => magic_hash(
    choice(
      /'[^']'/,
      /'\\[^ ]*'/,
    ),
  ),

  string: _ => magic_hash(
    seq(
      '"',
      repeat(choice(
        /[^\\"\n]/,
        /\\(\^)?./,
        /\\\n\s*\\/,
      )),
      '"',
    ),
  ),

  _integer_literal: _ => magic_hash(decimal),
  _binary_literal: _ => magic_hash(/0[bB][01_]+/),
  _octal_literal: _ => magic_hash(/0[oO][0-7]+/),

  _hex_literal: _ => magic_hash(
    seq(
      /0[xX][0-9a-fA-F_]+/,
      optional(/\.[0-9a-fA-F_]+/),
      optional(hex_exponent),
    )
  ),

  integer: $ => choice(
    $._binary_literal,
    $._integer_literal,
    $._octal_literal,
    $._hex_literal,
  ),

  _stringly: $ => choice(
    $.string,
    $.char,
  ),

  _number: $ => choice(
    $.integer,
    $.float,
  ),

  _literal: $ => choice(
    $._stringly,
    $._number,
  ),

  _unboxed_open: _ => choice('(# ', '(#\n'),

  // ------------------------------------------------------------------------
  // pragma
  // ------------------------------------------------------------------------

  pragma: _ => token(
    seq(
      '{-#',
      repeat(choice(
        /[^#]/,
        /#[^-]/,
        /#\-[^}]/,
      )),
      '#-}'
    )
  ),
}
