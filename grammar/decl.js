module.exports = {
  // ------------------------------------------------------------------------
  // Declarations
  // ------------------------------------------------------------------------

  guard_equation: $ => seq($.guards, '=', $._exp),
  _fun_guards: $ => repeat1($.guard_equation),

  _funpat: $ => seq(
    field('pattern', $._typed_pat),
    $._funrhs,
  ),

  _fun_name: $ => field('name', $._var),

  _funrhs: $ => seq(
    choice(
      seq('=', field('body', $._exp)),
      $._fun_guards,
    ),
    optional(seq($.where, optional($._decls))),
  ),

  _fun_patterns: $ => repeat1($._apat),

  _funvar: $ =>
    seq(
      $._fun_name,
      field('patterns', optional(alias($._fun_patterns, $.patterns)))
    ),

  _funlhs: $ => prec.dynamic(2, $._funvar),

  _function: $ => seq(
    $._funlhs,
    $._funrhs,
  ),

  _value_type_signature: $ => seq(
    field('name', $._var),
    $._type_annotation,
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
    $._function,
    prec.dynamic(1, alias($._funpat, $.function)),
  ),

  declaration: $ => seq(
    optional(alias($._value_type_signature, $.type_signature)),
    $._decl_fun,
  ),

  _decls: $ => layouted($, $.declaration),

  // ----- Operators ----------------------------------------------------------

  operator_declaration: $ => seq(
    choice('infixl', 'infixr', 'infix'),
    field('precedence', $.integer),
    choice(seq('type', $._qtyconid), $._qvarid),
    'as',
    $.operator
  ),

  // ------------------------------------------------------------------------
  // Foreign
  // ------------------------------------------------------------------------

  decl_foreign_import: $ => seq(
    'foreign',
    'import',
    $._fun_name,
    $._type_annotation
  ),

  _decl_foreign: $ => alias($.decl_foreign_import, $.foreign_import),

  // ------------------------------------------------------------------------
  // Kinds and kind values
  // ------------------------------------------------------------------------

  kind_declaration: $ => seq('data', $._simpletype),

  kind_value_declaration: $ =>
    seq(
      'foreign',
      'import',
      'data',
      $._simpletype,
      $._type_annotation
    ),

}
