const { brackets, layouted, layouted_without_end, parens, qualified, sep, sep1, ticked } = require('./util.js')

/* ----- Composite expressions shared between do/ado and regular notation -----

The point of these is that we want them exactly the same for regular
notation and `do`/`ado` notation, except the let-in expressions.
These are not allowed in `do`/`ado` blocks, and are tricky to parse in
`ado` blocks specifically due to ambiguity stemming from `ado` block
terminator being `in`:

f = ado
  let a = []
  in a

But `do` and `ado` blocks have mutual dependency with all other expressions
so they would have to be defined in the same module.
*/

const __lexp = ($, ...rule) =>
  choice(
    $.exp_if,
    $.exp_case,
    $.exp_negation,
    $.exp_lambda,
    $._fexp,
    ...rule
  )

module.exports = {

  // ----- Identifiers and modifiers ------------------------------------------

  exp_name: $ => choice(
    $._qvar,
    $._qcon,
  ),

  exp_ticked: $ => ticked($._exp_infix),

  exp_negation: $ => seq('-', $._aexp),

  exp_parens: $ => parens($._exp),

  exp_type_application: $ => seq('@', $._atype),

  // ----- Arrays -------------------------------------------------------------

  exp_array: $ => brackets(sep($.comma, $._exp)),

  // ----- Operator sections --------------------------------------------------

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

  // ----- Records ------------------------------------------------------------

  _record_access_field: $ =>
    choice(
      $._immediate_variable,
      $.string,
      $.triple_quote_string
    ),

  record_accessor: $ =>
    prec.left(seq(
      $.wildcard,
      repeat1(seq($._immediate_dot, field('field', $._record_access_field)))
    )),

  exp_record_access: $ =>
    prec(1, seq(
      choice($.hole, $.record_literal, $.exp_parens, $._qvarid),
      repeat1(seq($._immediate_dot, field('field', $._record_access_field)))
    )),

  // ----- If-then-else -------------------------------------------------------

  exp_if: $ => seq(
    'if',
    field('if', choice($.wildcard, $._exp)),
    'then',
    field('then', choice($.wildcard, $._exp)),
    'else',
    field('else', choice($.wildcard, $._exp)),
  ),

  // ----- Case-of ------------------------------------------------------------

  pattern_guard: $ =>
    seq(
      $._pat,
      $._larrow,
      $._exp_infix,
    ),

  guard: $ =>
    choice(
      $.pattern_guard,
      $._exp_infix,
    ),

  guards: $ => seq('|', sep1($.comma, $.guard)),

  gdpat: $ => seq($.guards, $._arrow, $._exp),

  _alt_variants: $ =>
    choice(
      seq($._arrow, field('exp', $._exp)),
      repeat1($.gdpat),
    ),

  alt: $ =>
    seq(
      sep1($.comma, field('pat', $._pat)),
      $._alt_variants,
      optional(seq($.where, $.declarations))
    ),

  alts: $ => layouted($, $.alt),

  _exp_case_slots: $ =>
    sep1(
      $.comma,
      field('condition', choice($.wildcard, $._exp))
    ),

  exp_case: $ => seq(
    'case',
    $._exp_case_slots,
    'of',
    $.alts
  ),

  // ----- Let-in -------------------------------------------------------------

  _let_decls: $ => layouted_without_end($, $._decl),

  exp_let_in: $ =>
    seq(
      'let',
      alias($._let_decls, $.declarations),
      'in',
      $._exp
    ),

  // ----- Lambdas ------------------------------------------------------------

  exp_lambda: $ => seq(
    '\\',
    repeat1($._apat),
    $._arrow,
    $._exp,
  ),

  // ----- do and ado notation ------------------------------------------------

  _statement_lexp: $ => __lexp($),

  __statement_exp_infix: $ =>
    seq(
      $._statement_exp_infix,
      choice($._q_op, $.exp_ticked),
      $._lexp
    ),

  _statement_exp_infix: $ =>
    choice(
      alias($.__statement_exp_infix, $.exp_infix),
      $._statement_lexp
    ),

  _statement_exp: $ =>
    prec.right(seq($._statement_exp_infix, optional($._type_annotation))),

  bind_pattern: $ =>
    seq(
      $._typed_pat,
      $._larrow,
      $._exp,
    ),

  let: $ => seq('let', $.declarations),

  statement: $ =>
    choice(
      $._statement_exp,
      $.bind_pattern,
      $.let,
    ),

  _do_kw: _ => 'do',
  _do: $ => choice('do', qualified($, $._do_kw)),
  exp_do: $ => seq($._do, layouted($, $.statement)),

  _ado_kw: _ => 'ado',
  _ado: $ => choice('ado', qualified($, $._ado_kw)),
  _ado_in: $ => seq('in', field('in', $._exp)),

  exp_ado: $ =>
    seq(
      $._ado,
      layouted_without_end($, $.statement),
      $._ado_in, // TODO try wrap it in `layouted_without_end` ?
      $._layout_end,
    ),

  _do_or_ado_block: $ => choice($.exp_do, $.exp_ado),

  // ----- Composite expressions ----------------------------------------------

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
    $._do_or_ado_block
  ),

  /**
   * Function application.
   *
   * This convoluted rule is necessary because of BlockArguments with lambda – if `exp_lambda` is in `lexp` as is stated
   * in the reference, it can only occur after an infix operator; if it is in `aexp`, it causes lots of problems.
   * Furthermore, the strange way the recursion is done here is to avoid local conflicts.
   */
  _exp_apply: $ =>
    choice(
      $._aexp,
      seq($._aexp, $._exp_apply),
      seq($._aexp, $.exp_lambda),
      seq($._aexp, $.exp_if),
      seq($._aexp, $.exp_case),
      seq($._aexp, $.exp_let_in),
    ),

  /**
   * The point of this `choice` is to get a node for function application only if there is more than one expression
   * present.
   */
  _fexp: $ => choice(
    $._aexp,
    alias($._exp_apply, $.exp_apply),
  ),

  _lexp: $ => __lexp($, $.exp_let_in),

  /**
   * This is left-associative, although in reality this would depend on the fixity declaration for the operator.
   * The default is left, even though the reference specifies it the other way around.
   * In any case, this seems to be more stable.
   */
  exp_infix: $ => seq(
    $._exp_infix,
    choice($._q_op, $.exp_ticked),
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
