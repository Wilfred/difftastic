const { parens } = require('./util.js')

module.exports = {

  decl_data: $ => seq(
    'data',
    $._simpletype,
    '=',
    sep1('|', seq($.constructor, repeat($._type)))
  ),

  newtype_constructor: $ => seq(
    $.constructor,
    $._atype,
  ),

  decl_newtype: $ => seq(
    'newtype',
    $._simpletype,
    '=',
    $.newtype_constructor,
  ),

}
