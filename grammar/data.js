const {parens} = require('./util.js')

module.exports = {

  field: $ => seq(
    $.variable,
    $._colon2,
    $._type,
  ),

  data_constructor: $ => choice(
    $.constructor,
    $._type,
  ),

  record_fields: $ => braces(sep($.comma, $.field)),

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
    choice($._simpletype, $._type_sum),
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
