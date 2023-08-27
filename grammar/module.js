const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // module
  // ------------------------------------------------------------------------

  _modid: $ => alias($.constructor, $.module),

  _qualifying_module: $ => repeat1(seq($._modid, $._dot)),

  qualified_module: $ => choice($._modid, qualified($, $._modid)),

  export_names: $ => parens(optional(choice(alias('..', $.all_names), sep($.comma, $._name)))),

  export: $ => choice(
    $._qvar,
    seq(
      optional($.namespace),
      $._qtycon,
      optional($.export_names),
    ),
    seq('module', field('module', $.qualified_module)),
  ),

  exports: $ => parens(
    optional(sep1($.comma, $.export)),
    optional($.comma), // for trailing commas at the end of an export list
  ),

  _decl_module: $ => seq(
    'module',
    field('name', $.qualified_module),
    field('exports', optional($.exports)),
    $.where,
    optional(layouted($, $._topdecl)),
  ),
}
