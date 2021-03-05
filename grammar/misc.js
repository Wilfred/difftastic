const {parens, sep1} = require('./util.js')

module.exports = {
  decl_default: $ => seq('default', parens(optional(sep1($.comma, $._type_infix)))),

  /**
    * Right precedence because of double splices `$$a`
    */
  splice: $ => prec.right(seq($._splice_dollar, $._aexp)),

  /**
   * Since `_aexp` includes `splice`, this allows for a top level dollar splice as well.
   */
  top_splice: $ => $._exp_infix,

  quasiquote_body: _ => token(repeat1(choice(/[^|]/, /\|[^\]]/))),

  /**
   * `_qq_start` is determined by the scanner.
   * While the quoter and the bar may not be preceded by whitespace, this is not necessary to ensure here with
   * `token.immediate` since the scanner already verifies it.
   */
  quasiquote: $ => seq(
    $._qq_start,
    optional(alias($._varid, $.quoter)),
    '|',
    optional($.quasiquote_body),
    token('|]'),
  ),
}
