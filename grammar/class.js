module.exports = {
  // ------------------------------------------------------------------------
  // class
  // ------------------------------------------------------------------------

  default_signature: $ => seq('default', $.signature),

  _cdecl: $ => choice(
    $._gendecl,
    $.default_signature,
    $.function,
  ),

  fundep: $ => seq(repeat1($.type_variable), $._arrow, repeat1($.type_variable)),

  fundeps: $ => seq('|', sep1($.comma, $.fundep)),

  class_body: $ => where($, $._cdecl),

  decl_class: $ => seq(
    'class',
    // optional($.context),
    alias($.constraint, $.class_head),
    optional($.fundeps),
    optional($.class_body),
  ),

  // ------------------------------------------------------------------------
  // instance
  // ------------------------------------------------------------------------

  inst_tyinst: $ => seq(
    'type',
    optional('instance'),
    $._tyinst,
  ),

  _idecl: $ => choice(
    $.function,
    $.signature,
  ),

  /**
   * instances only allow single foralls and contexts
   */
  _instance: $ => seq(
    'instance',
    // optional($.forall),
    // optional($.context),
    alias($.constraint, $.instance_head),
  ),

  decl_instance: $ => seq(
    $._instance,
    optional(where($, $._idecl)),
  ),

  decl_deriving: $ => seq(
    'deriving',
    $._instance,
  ),
}
