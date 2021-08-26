const {parens, sep1} = require('./util.js')

module.exports = {
  decl_default: $ => seq('default', parens(optional(sep1($.comma, $._type_infix)))),

  /**
   * Even though the doc states "arbitrary expression", using any others than these two not only makes little sense,
   * it also incurs a >100% increase in generation time and parser size.
   */
  _splice_exp: $ => choice(
    $.exp_name,
    $.exp_parens,
  ),

  /**
    * Right precedence because of double splices `$$a`
    */
  splice: $ => seq($._splice_dollar, $._splice_exp),

  /**
   * Since `_aexp` includes `splice`, this allows for a top level dollar splice as well.
   */
  top_splice: $ => $._exp_infix,

  /**
   * `quasiquote_start` is determined by the scanner.
   * While the quoter and the bar may not be preceded by whitespace, this is not necessary to ensure here with
   * `token.immediate` since the scanner already verifies it.
   */
  quasiquote: $ => seq(
    $.quasiquote_start,
    optional(alias($._qvarid, $.quoter)),
    $.quasiquote_bar,
    optional($.quasiquote_body),
    token('|]'),
  ),
}
