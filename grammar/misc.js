const {parens, sep1} = require('./util.js')

module.exports = {
  decl_default: $ => seq('default', parens(optional(sep1($.comma, $._type_infix)))),

  /**
   * `quasiquote_start` is determined by the scanner.
   * While the quoter and the bar may not be preceded by whitespace, this is not necessary to ensure here with
   * `token.immediate` since the scanner already verifies it.
   */
  quasiquote: $ => seq(
    choice(
      '⟦',
      seq(
        $.quasiquote_start,
        optional(alias($._qvarid, $.quoter)),
        $.quasiquote_bar,
      )
    ),
    optional($.quasiquote_body),
    choice(token('|]'), '⟧'),
  ),
}
