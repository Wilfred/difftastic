module.exports = {
  // ------------------------------------------------------------------------
  // class
  // ------------------------------------------------------------------------

  default_signature: $ => seq('default', $.signature),

  class_datafam: $ => seq(
    'data',
    optional('family'),
    $._simpletype,
    optional($._type_annotation),
  ),

  _cdecl: $ => choice(
    $._gendecl,
    $.default_signature,
    $.function,
    $.decl_type_sig,
    alias($.class_datafam, $.data_family),
  ),

  fundep: $ => seq(repeat1($.type_variable), '->', repeat1($.type_variable)),

  fundeps: $ => seq('|', sep1($.comma, $.fundep)),

  class_body: $ => where($, $._cdecl),

  decl_class: $ => seq(
    'class',
    optional($.context),
    alias($.constraint, $.class_head),
    optional($.fundeps),
    optional($.class_body),
  ),

  // ------------------------------------------------------------------------
  // instance
  // ------------------------------------------------------------------------

  decl_deriving: $ => seq(
    'deriving',
    optional($.deriving_strategy),
    'instance',
    optional($.context),
    alias($.constraint, $.instance_head),
  ),

  _inst_datainst: $ => seq(
    optional('instance'),
    optional($.forall),
    optional($.context),
    $._type_infix,
    optional($._type_annotation),
  ),

  inst_datainst: $ => choice(
    seq(
      'data',
      $._inst_datainst,
      optional($._adt),
    ),
    seq(
      'newtype',
      $._inst_datainst,
      $._newtype
    ),
  ),

  inst_tyinst: $ => seq(
    'type',
    optional('instance'),
    repeat($._atype),
    '=',
    $._type,
  ),

  _idecl: $ => choice(
    $.function,
    $.signature,
    $.inst_datainst,
    $.inst_tyinst,
  ),

  decl_instance: $ => seq(
    'instance',
    optional($.forall),
    optional($.context),
    alias($.constraint, $.instance_head),
    optional(where($, $._idecl)),
  ),
}
