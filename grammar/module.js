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
      $._qtycon,
      optional($.export_names),
    ),
    seq('type', parens($._q_op)),
    seq('class', $.class_name),
    seq('module', field('module', $.qualified_module)),
  ),

  exports: $ => parens(sep1($.comma, $.export)),

  _decl_module: $ => seq(
    'module',
    field('name', $.qualified_module),
    field('exports', optional($.exports)),
    where($, $._topdecl),
  ),
}
