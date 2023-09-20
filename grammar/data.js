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

  record_fields: $ => braces(
    seq(sep($.comma, $.field), optional(seq('|', $.type_variable)))
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

  decl_datatype: $ => seq(
    'data',
    $._simpletype,
    '=',
    choice($.data_constructor, $._type_sum),
  ),

  decl_datakind: $ => seq(
    'data',
    $._simpletype,
  ),

  decl_data: $ => choice(
    $.decl_datakind,
    $.decl_datatype,
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
