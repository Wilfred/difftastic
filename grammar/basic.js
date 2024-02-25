decimals1 = /[1-9][0-9_]*/
exponent = /e[+-]?[1-9_]+/

module.exports = {
  // ------------------------------------------------------------------------
  // literals
  // ------------------------------------------------------------------------

  // the `choice` here is necessary to avoid integers being parsed as numbers
  number: _ => token(
    seq(
      choice('0', decimals1),
      choice(
        seq(/\.[0-9][0-9_]*/, optional(exponent)),
        exponent,
      ),
    ),
  ),

  char: _ => token(
    choice(
      /'[^']'/,
      /'\\[^ ]*'/,
    ),
  ),

  string: _ => token(
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

  // https://github.com/natefaubion/purescript-language-cst-parser/blob/bf5623e08e1f43f923d4ff3c29cafbda25128768/src/PureScript/CST/Lexer.purs#L595
  triple_quote_string: _ => token(
    seq(
      '"""',
      /"{0,2}([^"]+"{1,2})*[^"]*/,
      '"""'
    )
  ),

  _integer_literal: _ => token(choice('0', decimals1)),
  _hex_literal: _ => token(/0x[0-9a-fA-F_]+/),

  integer: $ => choice(
    $._integer_literal,
    $._hex_literal,
  ),

  _stringly: $ => choice(
    $.string,
    $.triple_quote_string,
    $.char,
  ),

  _numeric: $ => choice(
    $.integer,
    $.number,
  ),

  _literal: $ => choice(
    $._stringly,
    $._numeric,
  ),

  _rcarrow: _ => choice('⇒', '=>'),

  _lcarrow: _ => choice('⇐', '<='),

  _arrow: _ => choice('→', '->'),

  _larrow: _ => choice('←', '<-'),

  _colon2: _ => choice('∷', '::'),

  wildcard: _ => '_',

  /**
   * Same as varid_pattern except it's preceded by `?`, plus `'` and `_` are allowed
   * to be the first and only characters after `?`.
   */
  hole: _ => /\?[\p{L}0-9_']+/,

  /**
   * Field projection dot-syntax requires the dot to follow a varid without any whitespace.
   */
  _immediate_dot: _ => token.immediate('.'),
}
