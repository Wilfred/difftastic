const foreign = ($, kw, pent) => seq(
    'foreign',
    kw,
    $._foreign_pre,
    optional(pent),
    $.signature,
  )

module.exports = {
  // ------------------------------------------------------------------------
  // decl
  // ------------------------------------------------------------------------

  _funpat_infix: $ => seq(field('lhs', $._pat), field('op', $.varop), field('rhs', $._pat)),

  _funpat: $ => seq(
    field('pattern', $._typed_pat),
    $._funrhs,
  ),

  /**
    * The `implicit_parid` here is for:
    * g = let ?par = Impy 5 in f
    */
  _fun_name: $ => field('name', choice($._var, $.implicit_parid)),

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

  _funlhs: $ => choice(
    prec.dynamic(2, $._funvar),
    prec.dynamic(1, field('infix', alias($._funpat_infix, $.infix))),
  ),

  function: $ => seq(
    $._funlhs,
    $._funrhs,
  ),

  fixity: $ => seq(
    choice('infixl', 'infixr', 'infix'),
    optional($.integer),
    sep1($.comma, $._op),
  ),

  signature: $ => seq(
    field('lhs', sep1($.comma, field('name', $._var))),
    field('type', $._type_annotation),
  ),

  _gendecl: $ => choice(
    $.signature,
    $.fixity,
  ),

  /**
    * in the reference, `apat` is a choice in `lpat`, but this creates a conflict:
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
  // foreign
  // ------------------------------------------------------------------------

  calling_convention: _ => choice(
    'ccall',
    'stdcall',
    'cplusplus',
    'jvm',
    'dotnet',
    'prim',
    'capi',
  ),

  safety: _ => choice('unsafe', 'safe', 'interruptible'),

  impent: $ => $.string,

  expent: $ => $.string,

  _foreign_pre: $ => seq(
    $.calling_convention,
    optional($.safety),
  ),

  decl_foreign_import: $ => foreign($, 'import', $.impent),

  decl_foreign_export: $ => foreign($, 'export', $.expent),

  _decl_foreign: $ => choice(
    alias($.decl_foreign_import, $.foreign_import),
    alias($.decl_foreign_export, $.foreign_export)
  ),
}
