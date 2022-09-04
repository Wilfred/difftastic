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
    $.decl_tyfam_sig,
    $.decl_type,
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

  inst_datainst: $ => choice(
    seq(
      'data',
      optional('instance'),
      $._datainst,
      optional($._adt),
    ),
    seq(
      'newtype',
      optional('instance'),
      $._datainst,
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

  /**
   * instances only allow single foralls and contexts
   */
  _instance: $ => seq(
    'instance',
    optional($.forall),
    optional($.context),
    alias($.constraint, $.instance_head),
  ),

  decl_instance: $ => seq(
    $._instance,
    optional(where($, $._idecl)),
  ),

  decl_deriving: $ => seq(
    'deriving',
    optional(choice($.deriving_strategy, $.via)),
    $._instance,
  ),
}
