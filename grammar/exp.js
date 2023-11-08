const { parens, brackets, sep1, layouted, qualified, ticked } = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // expression
  // ------------------------------------------------------------------------

  exp_parens: $ => parens($._exp),

  exp_array: $ => brackets(sep($.comma, $._exp)),

  bind_pattern: $ => seq(
    $._typed_pat,
    $._larrow,
    $._exp,
  ),

  exp_section_left: $ => parens(
    $.wildcard,
    choice($._q_op, $.exp_ticked),
    $._exp_infix
  ),

  exp_section_right: $ => parens(
    $._exp_infix,
    choice($._q_op, $.exp_ticked),
    $.wildcard
  ),

  exp_type_application: $ => seq('@', $._atype),

  exp_lambda: $ => seq(
    '\\',
    repeat1($._apat),
    $._arrow,
    $._exp,
  ),

  record_accessor: $ =>
    prec.left(seq(
      $.wildcard,
      repeat1(seq($._immediate_dot, field('field', $._immediate_variable)))
    )),

  exp_record_access: $ =>
    prec(1, seq(
      choice($.hole, $.record_literal, $.exp_parens),
      repeat1(seq($._immediate_dot, field('field', $._immediate_variable)))
    )),

  exp_in: $ => seq('in', $._exp),

  let: $ => seq('let', optional($.decls)),

  _let_decls: $ => layouted_without_end($, $._decl),

  exp_let: $ => seq('let', optional(alias($._let_decls, $.decls))),

  exp_let_in: $ => seq($.exp_let, $.exp_in),

  exp_if: $ => seq(
    'if',
    field('if', choice($.wildcard, $._exp)),
    'then',
    field('then', choice($.wildcard, $._exp)),
    'else',
    field('else', choice($.wildcard, $._exp)),
  ),

  pattern_guard: $ => seq(
    $._pat,
    $._larrow,
    $._exp_infix,
  ),

  guard: $ => choice(
    $.pattern_guard,
    $.let,
    $._exp_infix,
  ),

  guards: $ => seq('|', sep1($.comma, $.guard)),

  gdpat: $ => seq($.guards, $._arrow, $._exp),

  _alt_variants: $ => choice(
    seq($._arrow, field('exp', $._exp)),
    repeat1($.gdpat),
  ),

  alt: $ => seq(
    sep1($.comma, field('pat', $._pat)),
    $._alt_variants,
    optional(seq($.where, optional($.decls)))
  ),

  alts: $ => layouted($, $.alt),

  _exp_case_slots: $ => sep1($.comma,
    field('condition', choice($.wildcard, $._exp))
  ),

  exp_case: $ => seq(
    'case',
    $._exp_case_slots,
    'of',
    $.alts
  ),

  stmt: $ => choice(
    $._exp,
    $.bind_pattern,
    $.let,
  ),

  _do_keyword: _ => choice('ado', 'do'),

  do_module: $ => qualified($, $._do_keyword),

  exp_do: $ => seq(choice($.do_module, $._do_keyword), layouted($, $.stmt)),

  exp_negation: $ => seq('-', $._aexp),

  exp_name: $ => choice(
    $._qvar,
    $._qcon,
  ),

  /**
   * The Report lists for `aexp` only expressions that don't have any unbracketed whitespace, except for record
   * construction/update.
   * The GHC parser, however, includes lambdas, let/in and extensions like lambda case in it.
   *
   * Dot-syntax projection works only with simple `aexp`s. For example, these are valid:
   *
   * - `(a <> b).name`
   * - `[a, b].name`
   * - `(,).name`
   * - `[e|a|].name`
   * - `Animal {name = "cat"}.name`
   * - `(.name).name`
   * - `(# 1, 2 #).name` (doesn't typecheck, but might in the future?)
   *
   * Some are clear parse errors:
   *
   * - `@Int.name`
   *
   * Others simply don't make sense since they bind the projection into a subexpression, (lambda case and do), even
   * though the grammar works fine if they are included here.
   * We simply keep them out to reduce complexity.
   */
  _aexp_projection: $ => choice(
    $.hole,
    $.exp_name,
    $.exp_parens,
    $.exp_array,
    $.record_literal,
    $.record_update,
    $.record_accessor,
    $.exp_record_access,
    $.exp_section_left,
    $.exp_section_right,
    alias($.literal, $.exp_literal),
  ),

  _aexp: $ => choice(
    $._aexp_projection,
    $.exp_type_application,
    $.exp_do,
  ),

  /**
   * Function application.
   *
   * This convoluted rule is necessary because of BlockArguments with lambda – if `exp_lambda` is in `lexp` as is stated
   * in the reference, it can only occur after an infix operator; if it is in `aexp`, it causes lots of problems.
   * Furthermore, the strange way the recursion is done here is to avoid local conflicts.
   */
  _exp_apply: $ => choice(
    $._aexp,
    seq($._aexp, $._exp_apply),
    seq($._aexp, $.exp_lambda),
    seq($._aexp, $.exp_let_in),
    seq($._aexp, $.exp_if),
    seq($._aexp, $.exp_case),
  ),

  /**
   * The point of this `choice` is to get a node for function application only if there is more than one expression
   * present.
   */
  _fexp: $ => choice(
    $._aexp,
    alias($._exp_apply, $.exp_apply),
  ),

  _lexp: $ => choice(
    $.exp_let_in,
    $.exp_if,
    $.exp_case,
    $.exp_negation,
    $._fexp,
    $.exp_lambda,
  ),

  exp_ticked: $ => ticked($._exp_infix),

  /**
   * This is left-associative, although in reality this would depend on the fixity declaration for the operator.
   * The default is left, even though the reference specifies it the other way around.
   * In any case, this seems to be more stable.
   */
  exp_infix: $ => seq(
    $._exp_infix,
    choice(
      $._q_op,
      $.exp_ticked
      ),
    $._lexp
  ),

  _exp_infix: $ => choice(
    $.exp_infix,
    $._lexp,
  ),

  /**
   * `prec.right` because:
   *
   * let x = 1 in x :: Int
   *
   * here the type annotation binds to `x`, not the entire expression
   */
  _exp: $ => prec.right(seq($._exp_infix, optional($._type_annotation))),
}
