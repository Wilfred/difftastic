const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // module
  // ------------------------------------------------------------------------

  modid: $ => $.constructor,

  _qualifying_module: $ => repeat1(seq($.modid, $._dot)),

  qmodid: $ => qualified($, $.modid),
  _qmodid: $ => choice($.qmodid, $.modid),

  _export_con: $ => choice(
    $._qtycon,
    $._qatyconsym,
  ),

  export_names: $ => parens(optional(choice(alias('..', $.all_names), sep($.comma, $._name)))),

  export: $ => choice(
    $._qvar,
    seq(
      optional($.namespace),
      $._export_con,
      optional($.export_names),
    ),
    seq('module', field('module', $._qmodid)),
  ),

  module_exports: $ => parens(
    optional(sep1($.comma, $.export)),
    optional($.comma), // for trailing commas at the end of an export list
  ),

  _module: $ => seq(
    'module',
    field('module', $._qmodid),
    optional($.module_exports),
    where($, $._topdecl),
  ),
}
