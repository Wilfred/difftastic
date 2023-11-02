const { parens, sep1 } = require("./util");

module.exports = {

  // ----- Shared -------------------------------------------------------------

  class_name: $ => $._tyconid,

  // Technically wrong as it doesn't exclude row types
  constraint: $ => seq($.class_name, repeat($._type)),

  constraints: $ =>
    choice(
      $.constraint,
      parens(sep1($.comma, $.constraint))
    ),

  // ----- Class --------------------------------------------------------------

  class_member: $ => alias($._value_type_signature, $.type_signature),

  fundep: $ =>
    seq(
      repeat1($.type_variable),
      $._arrow,
      repeat1($.type_variable)
    ),

  fundeps: $ => seq('|', sep1($.comma, $.fundep)),

  class_body: $ => where($, $.class_member),

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

  instance_head: $ =>
    seq(
      optional(seq($.constraints, $._rcarrow)),
      $.class_name,
      repeat($._type)
    ),

  class_instance: $ =>
    seq(
      'instance',
      $.instance_head,
      optional(where($, $.declaration))
    ),

}
