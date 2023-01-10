const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // pattern synonym
  // ------------------------------------------------------------------------

  _pattern_type: $ => seq(
    $._con,
    $._type_annotation,
  ),

  _pattern_equals: $ => seq(
    field('lhs', $._pat),
    '=',
    field('rhs', $._pat),
  ),

  _pattern_decl: $ => seq(
    $._pat,
    $._funrhs,
  ),

  /**
   * `where` may not be empty
   */
  _pattern_arrow: $ => seq(
    field('lhs', $._pat),
    '<-',
    field('rhs', $._pat),
    optional(seq($.where, layouted($, $._pattern_decl))),
  ),

  decl_pattern: $ => seq(
    'pattern',
    choice(
      alias($._pattern_type, $.signature),
      alias($._pattern_equals, $.equation),
      alias($._pattern_arrow, $.equation),
    ),
  ),
}
