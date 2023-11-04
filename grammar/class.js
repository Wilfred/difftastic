const { parens, sep1 } = require("./util");

module.exports = {

  // ----- Shared -------------------------------------------------------------

  class_name: $ => $._qtyconid,

  // Technically wrong as it doesn't exclude row types
  constraint: $ => seq($.class_name, repeat($._type)),

  constraints: $ =>
    choice(
      $.constraint,
      parens(sep1($.comma, $.constraint))
    ),

  // ----- Class --------------------------------------------------------------

  _cdecl: $ => choice($._gendecl, $.function,),

  fundep: $ =>
    seq(
      repeat1($.type_variable),
      $._arrow,
      repeat1($.type_variable)
    ),

  fundeps: $ => seq('|', sep1($.comma, $.fundep)),

  class_body: $ => where($, $._cdecl),

  _class_kind_declaration: $ =>
    seq(
      'class',
      alias($._tyconid, $.class_name),
      $._type_annotation
    ),

  class_head: $ =>
    seq(
      optional(seq($.constraints, $._lcarrow)),
      $.class_name,
      repeat($.type_variable),
      optional($.fundeps)
    ),

  class_declaration: $ =>
    seq(
      optional(alias($._class_kind_declaration, $.kind_declaration)),
      'class',
      $.class_head,
      optional($.class_body)
    ),

  // ----- Instance -----------------------------------------------------------

  _idecl: $ => choice(
    $.function,
    $.signature,
  ),

  instance_head: $ =>
    seq(
      optional(seq($.constraints, $._rcarrow)),
      $.class_name,
      repeat($._type)
    ),

  _instance_name: $ =>
    seq(
      alias($._varid, $.instance_name),
      $._colon2
    ),

  class_instance: $ =>
    seq(
      optional('else'),
      'instance',
      optional($._instance_name),
      $.instance_head,
      optional(where($, $._idecl))
    ),

}
