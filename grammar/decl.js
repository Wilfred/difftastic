module.exports = {
  // ------------------------------------------------------------------------
  // Declarations
  // ------------------------------------------------------------------------

  _funpat: $ => seq(
    field('pattern', $._typed_pat),
    $._funrhs,
  ),

  _fun_name: $ => field('name', $._var),

  guard_equation: $ => seq($.guards, '=', $._exp),

  _fun_guards: $ => repeat1($.guard_equation),

  _funrhs: $ => seq(
    choice(
      seq('=', field('rhs', $._exp)),
      $._fun_guards,
    ),
    optional(seq($.where, optional($.decls))),
  ),

  _fun_patterns: $ => repeat1($._apat),

  _funvar: $ => seq($._fun_name, field('patterns', optional(alias($._fun_patterns, $.patterns)))),

  _funlhs: $ => prec.dynamic(2, $._funvar),

  function: $ => seq(
    $._funlhs,
    $._funrhs,
  ),

  operator_declaration: $ => seq(
    choice('infixl', 'infixr', 'infix'),
    field('precedence', $.integer),
    choice(seq('type', $._qtyconid), $._qvarid),
    'as',
    $.operator
  ),

  signature: $ => seq(
    field('lhs', field('name', $._var)),
    field('type', $._type_annotation),
  ),

  _gendecl: $ => choice(
    $.signature,
    $.operator_declaration,
  ),

  /**
    * In the reference, `apat` is a choice in `lpat`, but this creates a conflict:
    * `decl` allows the lhs to be a `pat`, as in:
    * let Just 5 = prog
    * let a = prog
    * Since patterns can be `variable`s, the `funpat` lhs of the second example cannot be distinguished from a `funvar`.
    * The precedences here and in `_funlhs` solve this.
    */
  _decl_fun: $ => choice(
    $.function,
    prec.dynamic(1, alias($._funpat, $.function)),
  ),

  _decl: $ => choice(
    $._gendecl,
    $._decl_fun,
  ),

  decls: $ => layouted($, $._decl),

  // ------------------------------------------------------------------------
  // Foreign
  // ------------------------------------------------------------------------

  decl_foreign_import: $ => seq(
    'foreign',
    'import',
    $._fun_name,
    $._colon2,
    $._type,
  ),

  _decl_foreign: $ => alias($.decl_foreign_import, $.foreign_import),

  // ------------------------------------------------------------------------
  // Kinds and kind values
  // ------------------------------------------------------------------------

  decl_new_kind: $ => seq(
    'data',
    $._simpletype,
  ),

  decl_new_kind_value: $ => seq(
    'foreign',
    'import',
    'data',
    $._simpletype,
    $._colon2,
    $._type,
  ),

  _decl_kind: $ => alias($.decl_new_kind, $.kind),
  _decl_kind_value: $ => alias($.decl_new_kind_value, $.kind_value),

}
