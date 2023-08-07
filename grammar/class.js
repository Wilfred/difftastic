module.exports = {
  // ------------------------------------------------------------------------
  // class
  // ------------------------------------------------------------------------

  default_signature: $ => seq('default', $.signature),

  class_datafam: $ => seq(
    'data',
    optional('family'),
    $._datafam,
  ),

  class_tyfam: $ => seq(
    'type',
    optional('family'),
    $._tyfam,
  ),

  _cdecl: $ => choice(
    $._gendecl,
    $.default_signature,
    $.function,
    alias($.class_tyfam, $.type_family),
    alias($.inst_tyinst, $.type_instance),
    alias($.class_datafam, $.data_family),
  ),

  fundep: $ => seq(repeat1($.type_variable), $._arrow, repeat1($.type_variable)),

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
    $._tyinst,
  ),

  _idecl: $ => choice(
    $.function,
    $.signature,
    alias($.inst_datainst, $.data_instance),
    alias($.inst_tyinst, $.type_instance),
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
