const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // import
  // ------------------------------------------------------------------------

  _import_name: $ => choice(
    $._con,
    $._var,
  ),

  namespace: _ => choice('pattern', 'type'),

  import_con_names: $ => parens(optional(choice(alias('..', $.all_names), sep1($.comma, $._import_name)))),

  import_item: $ => seq(
    optional($.namespace),
    choice(
      $._var,
      seq($._simple_tycon, optional($.import_con_names)),
    ),
  ),

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
    optional(alias($.string, $.import_package)),
    $._qmodid,
    optional($.import_list),
    optional(seq('as', $._qmodid)),
  ),
}
