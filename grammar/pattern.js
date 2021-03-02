const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // pattern synonym
  // ------------------------------------------------------------------------

  _pattern_type: $ => seq(
    $.constructor,
    $._type_annotation,
  ),

  _pattern_equals: $ => seq(
    $._pat,
    '=',
    $._pat,
  ),

  _pattern_decl: $ => seq(
    $._pat,
    $._funrhs,
  ),

  _pattern_arrow: $ => seq(
    $._pat,
    '<-',
    $._pat,
    optional(seq($.where, layouted($, $._pattern_decl))),
  ),

  decl_pattern: $ => seq('pattern', choice($._pattern_type, $._pattern_equals, $._pattern_arrow)),
}
