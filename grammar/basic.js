const

decimal = /[0-9][0-9_]*/
exponent = /[eE][+-]?[0-9_]+/

module.exports = {
  // ------------------------------------------------------------------------
  // literals
  // ------------------------------------------------------------------------

  float: _ => token(seq(
    decimal,
    choice(
      seq(/\.[0-9_]+/, optional(exponent)),
      exponent,
    ),
  )),

  char: _ => /'([A-Za-z0-9();\[\]`ʹ{}_!#$%&⋆+,./<=>?@^" |\-~:\\*]|\\[a-zA-Z0-9\\"'&]*|\\\^[0-9A-Z@\[\]\\\^_])'/,

  string: _ => token(seq(
    '"',
    repeat(choice(
      /[^\\"\n]/,
      /\\(\^)?./,
      /\\\n\s*\\/,
    )),
    '"',
  )),

  _integer_literal: _ => token(decimal),
  _binary_literal: _ => token(/0[bB][01_]+/),
  _octal_literal: _ => token(/0[oO][0-7]+/),
  _hex_literal: _ => token(/0[xX][0-9a-fA-F_]+/),

  integer: $ => choice(
    $._binary_literal,
    $._integer_literal,
    $._octal_literal,
    $._hex_literal,
  ),

  _literal: $ => choice(
    $.integer,
    $.float,
    $.string,
    $.char,
  ),

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
