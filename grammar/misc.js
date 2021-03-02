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
}
