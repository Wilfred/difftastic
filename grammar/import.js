const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // import
  // ------------------------------------------------------------------------

  _import_name: $ => choice(
    $._con,
    $._var,
  ),

  import_con_names: $ => parens(optional(choice(alias('..', $.all_names), sep1($.comma, $._import_name)))),

  import_item: $ => choice(
    $.class_import,
    $.type_operator_import,
    $.type_import,
    $.var_import,
  ),

  class_import: $ => seq('class', $.type_name),
  type_operator_import: $ => seq('type', parens($.operator)),
  type_import: $ => seq($._simple_tycon, optional($.import_con_names)),
  var_import: $ => $._var,

  import_list: $ => seq(
    optional('hiding'),
    parens(optional(seq(
      sep1(
        $.comma,
        $.import_item
      ),
      optional($.comma), // for trailing commas at the end of an import list
    ))),
  ),

  decl_import: $ => seq(
    'import',
    // optional(alias($.string, $.import_package)),
    field('module', $.qualified_module),
    field('imports', optional($.import_list)),
    field(
      'import_rename',
      optional(seq('as', choice($._modid, qualified($, $._modid))))
    ),
  ),
}
