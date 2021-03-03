const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // module
  // ------------------------------------------------------------------------

  _modid: $ => alias($.constructor, $.module),

  _qualifying_module: $ => repeat1(seq($._modid, $._dot)),

  qualified_module: $ => qualified($, $._modid),
  _qmodid: $ => choice($.qualified_module, $._modid),

  export_names: $ => parens(optional(choice(alias('..', $.all_names), sep($.comma, $._name)))),

  export: $ => choice(
    $._qvar,
    seq(
      optional($.namespace),
      $._qtycon,
      optional($.export_names),
    ),
    seq('module', field('module', $._qmodid)),
  ),

  exports: $ => parens(
    optional(sep1($.comma, $.export)),
    optional($.comma), // for trailing commas at the end of an export list
  ),

  _module: $ => seq(
    'module',
    field('module', $._qmodid),
    optional($.exports),
    where($, $._topdecl),
  ),
}
