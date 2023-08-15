const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // type
  // ------------------------------------------------------------------------

  type_variable: $ => $._varid,

  annotated_type_variable: $ => seq($.type_variable, $._type_annotation),

  _tyvar: $ => choice(
    parens($.annotated_type_variable),
    $.type_variable,
  ),

  inferred_type_variable: $ => braces(choice($.annotated_type_variable, $.type_variable)),

  _quantifier: $ => choice(
    $._tyvar,
    $.inferred_type_variable,
  ),

  _forall_kw: _ => choice('forall', '∀'),

  _forall_dot: $ => choice('.', $._arrow),

  _forall: $ => seq(
    $._forall_kw,
    repeat1($._quantifier),
  ),

  _quantifiers: $ => seq(
    alias($._forall, $.quantifiers),
    $._forall_dot,
  ),

  forall: $ => $._quantifiers,

  type_parens: $ => parens($._type_with_kind),

  type_list: $ => brackets(sep1($.comma, $._type_with_kind)),

  _type_tuple: $ => sep2($.comma, $._type_with_kind),

  type_tuple: $ => parens($._type_tuple),

  _type_sum: $ => sep2('|', optional($._type_with_kind)),

  _type_promotable_literal: $ => choice(
    $.type_literal,
    $.type_tuple,
    $.type_list,
  ),

  _type_promoted_literal: $ => seq(quote, $._type_promotable_literal),

  _type_literal: $ => choice(
    alias($._type_promoted_literal, $.promoted),
    $._type_promotable_literal,
  ),

  strict_type: $ => seq($._strict, $._atype),

  lazy_type: $ => seq($._lazy, $._atype),

  type_name: $ => choice(
    $._tyvar,
    $._gtycon,
  ),

  type_star: _ => choice('*', '★'),

  /**
  * The `(##)` format of the unit tuple is parsed as an operator, see `exp_unboxed_tuple`.
  */
  type_unboxed_tuple: $ => seq($._unboxed_open, sep($.comma, $._type_with_kind), $._unboxed_close),

  type_unboxed_sum: $ => seq($._unboxed_open, $._type_sum, $._unboxed_close),

  _atype: $ => choice(
    $.type_name,
    $.type_star,
    $._type_literal,
    $.type_parens,
    $.type_unboxed_tuple,
    $.type_unboxed_sum,
    $.splice,
    $.quasiquote,
  ),

  type_invisible: $ => seq('@', $._atype),

  /**
   * Type application, as in `Either e (Int, Text)` or `TypeRep @Int`.
   */
  type_apply: $ => seq($._atype, repeat1(choice($._atype, $.type_invisible))),

  /**
   * The point of this `choice` is to get a node for type application only if there is more than one atype present.
   */
  _btype: $ => choice(
    $._atype,
    $.type_apply,
  ),

  implicit_param: $ => seq(
    $.implicit_parid,
    $._type_annotation,
  ),

  type_infix: $ => seq(
    field('left', $._btype),
    field('op', $._qtyconop),
    field('right', $._type_infix),
  ),

  _type_infix: $ => choice(
    $.type_infix,
    $._btype,
  ),

  constraint: $ => choice(
    seq(field('class', alias($.type_name, $.class_name)), repeat($._atype)),
    $.type_infix,
  ),

  _quantified_constraint: $ => seq($._quantifiers, $._constraint),

  _constraint_context: $ => seq($._context, $._constraint),

  _constraint: $ => choice(
    alias($._quantified_constraint, $.forall),
    alias($._constraint_context, $.context),
    parens($._constraint),
    $.constraint,
  ),

  _context_constraints: $ => seq(
    choice(
      $.constraint,
      prec('context-empty', parens(optional(sep1($.comma, choice($._constraint, $.implicit_param))))),
    ),
  ),

  _context: $ => seq($._context_constraints, $._carrow),

  context: $ => $._context,

  _type_quantifiers: $ => seq($._quantifiers, $._type),

  _type_context: $ => seq($._context, $._type),

  modifier: $ => seq('%', $._atype),

  _fun_arrow: $ => seq(
    optional($.modifier),
    $._arrow,
  ),

  _type_fun: $ => prec('function-type', seq($._type_infix, $._fun_arrow, $._type)),

  _type: $ => prec('type', choice(
    alias($._type_quantifiers, $.forall),
    alias($._type_context, $.context),
    alias($._type_fun, $.fun),
    $._type_infix,
  )),

  _type_or_implicit: $ => choice(
    $.implicit_param,
    $._type,
  ),

  _type_annotation: $ => seq(
    $._colon2,
    field('type', $._type_or_implicit),
  ),

  kind: $ => $._type_annotation,

  _type_with_kind: $ => seq($._type_or_implicit, optional($.kind)),

  _simpletype_infix: $ => seq(
    $._tyvar,
    field('name', $._simple_tyconop),
    $._tyvar,
  ),

  _simpletype: $ => choice(
    parens($._simpletype),
    alias($._simpletype_infix, $.type_infix),
    seq(
      field('name', $._simple_tycon),
      repeat($._tyvar),
    ),
  ),

  // ------------------------------------------------------------------------
  // type decl
  // ------------------------------------------------------------------------

  decl_type: $ => seq(
    'type',
    $._simpletype,
    choice(
      $._adt_rhs,
      $._type_annotation
    ),
  ),

  // ------------------------------------------------------------------------
  // type family
  // ------------------------------------------------------------------------

  tyfam_head: $ => $._simpletype,

  _tyfam_pat_prefix: $ => seq(
    field('name', $._simple_qtyconop),
    repeat(choice($._atype, $.type_invisible)),
  ),

  _tyfam_pat_infix: $ => seq(
    $._btype,
    field('op', $._qtyconop),
    $._btype,
  ),

  tyfam_pat: $ => choice(
    $._tyfam_pat_prefix,
    $._tyfam_pat_infix,
  ),

  tyfam_eq: $ => seq(
    alias($.tyfam_pat, $.pattern),
    '=',
    $._type_or_implicit,
  ),

  tyfam_result_type: $ => seq('=', $._tyvar),

  tyfam_injectivity: $ => seq('|', $.type_variable, $._arrow, repeat1($.type_variable)),

  _tyfam_inj: $ => seq(
    $.tyfam_result_type,
    optional($.tyfam_injectivity),
  ),

  _tyfam: $ => seq(
    alias($.tyfam_head, $.head),
    optional(choice($._type_annotation, $._tyfam_inj)),
  ),

  decl_tyfam: $ => seq(
    'type',
    'family',
    $._tyfam,
    optional(where($, alias($.tyfam_eq, $.equation))),
  ),

  _tyinst: $ => seq(
    repeat(choice($._atype, $.type_invisible)),
    '=',
    $._type_or_implicit,
  ),

  decl_tyinst: $ => seq(
    'type',
    'instance',
    $._tyinst,
  ),

  type_role: _ => choice(
    'representational',
    'nominal',
    'phantom',
    '_',
  ),

  decl_role: $ => seq(
    'type',
    'role',
    $._qtycon,
    repeat1($.type_role),
  )
}
