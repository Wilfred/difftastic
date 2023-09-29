const { parens } = require('./util.js')

module.exports = {

  data_constructor: $ => choice(
    $.constructor,
    $._type,
  ),

  data_constructor_record: $ => seq(
    $.constructor,
    repeat($._type),
  ),

  /**
   * data constructors only allow single foralls and contexts
   */
  constructors: $ => seq(
    optional($.forall),
    optional($.context),
    $.data_constructor,
  ),

  decl_data: $ => seq(
    'data',
    $._simpletype,
    '=',
    choice($.data_constructor, $._type_sum),
  ),

  newtype_constructor: $ => seq(
    $.constructor,
    $._atype,
  ),

  decl_newtype: $ => seq(
    'newtype',
    '=',
    $.newtype_constructor,
  ),

}
