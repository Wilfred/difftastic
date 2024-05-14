const { parens } = require('./util.js')

module.exports = {

  // ----- Data ---------------------------------------------------------------

  _data_type_signature: $ =>
    seq(
      'data',
      $._tyconid,
      $._type_annotation
    ),

  decl_data: $ => seq(
    optional(alias($._data_type_signature, $.type_signature)),
    'data',
    $._simpletype,
    '=',
    sep1('|', seq($.constructor, repeat($._type)))
  ),

  // ----- Newtype ------------------------------------------------------------

  // Using `_atype` here is a bit more loose than necessary since it also
  // includes non-Type kinds as well as holes and wildcards
  newtype_constructor: $ => seq(
    $.constructor,
    $._atype,
  ),

  _newtype_type_signature: $ =>
    seq(
      'newtype',
      $._tyconid,
      $._type_annotation
    ),

  decl_newtype: $ => seq(
    optional(alias($._newtype_type_signature, $.type_signature)),
    'newtype',
    $._simpletype,
    '=',
    $.newtype_constructor,
  ),

}
