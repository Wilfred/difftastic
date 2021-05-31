const {parens, brackets, braces, sep1, layouted, qualified} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // expression
  // ------------------------------------------------------------------------

  exp_parens: $ => parens($._exp),

  /**
    * This needs to be disambiguated from `gcon_tuple`, which is a constructor with _only_ commas.
    * Tuple sections aren't allowed in patterns.
    *
    * Since tuple expressions can contain singular expressions in sections like `(a,)` and `(,a)`, it has to be ensured
    * that there is _at least_ each one comma and one expression in there, but the comma may be on either side and be
    * preceded by any number of further commas, like `(,,,a)`.
    *
    * The final `repeat` is simpler, it just has to ensure that no two `_exp`s can be successive, but this encoding
    * means that the optional `_exp` after `(5,)` needs to be included in the `choice`, otherwise a simple pair would be
    * impossible.
    */
  _exp_tuple: $ => seq(
    choice(seq(repeat1($.comma), $._exp), seq($._exp, $.comma, optional($._exp))),
    repeat(seq($.comma, optional($._exp)))
  ),

  exp_sum_empty: _ => ' ',

  _exp_sum: $ => sep2('|', choice($._exp, $.exp_sum_empty)),

  exp_tuple: $ => parens($._exp_tuple),

  exp_unboxed_tuple: $ => seq('(# ', $._exp_tuple, $._unboxed_tuple_close),

  exp_unboxed_sum: $ => seq('(# ', $._exp_sum, $._unboxed_tuple_close),

  exp_list: $ => brackets(sep1($.comma, $._exp)),

  bind_pattern: $ => seq(
    $._typed_pat,
    '<-',
    $._exp,
  ),

  exp_arithmetic_sequence: $ => brackets(
    field('from', $._exp),
    optional(seq($.comma, field('step', $._exp))),
    '..',
    optional(field('to', $._exp)),
  ),

  qual: $ => choice(
    $.bind_pattern,
    $.let,
    $._exp,
  ),

  exp_list_comprehension: $ => brackets(
    $._exp,
    '|',
    sep1($.comma, $.qual),
  ),

  exp_section_left: $ => parens(
    $._exp_infix,
    $._qop,
  ),

  exp_section_right: $ => parens(
    $._qop_nominus,
    $._exp_infix,
  ),

  exp_th_quoted_name: $ => choice(
    seq(quote, choice($._qvar, $._qcon)),
    seq(quote + quote, $._atype),
  ),

  exp_field: $ => choice(
    alias('..', $.wildcard),
    seq($._qvar, optional(seq('=', $._exp)))
  ),

  exp_type_application: $ => seq('@', $._atype),

  exp_lambda: $ => seq(
    '\\',
    repeat1($._apat),
    '->',
    $._exp,
  ),

  exp_in: $ => seq('in', $._exp),

  let: $ => seq('let', optional($.decls)),

  _let_decls: $ => layouted_without_end($, $._decl),

  exp_let: $ => seq('let', optional(alias($._let_decls, $.decls))),

  exp_let_in: $ => seq($.exp_let, $.exp_in),

  exp_cond: $ => seq(
    'if',
    field('if', $._exp),
    optional(';'),
    'then',
    field('then', $._exp),
    optional(';'),
    'else',
    field('else', $._exp),
  ),

  exp_if_guard: $ => seq('if', prec.left(repeat1($.gdpat))),

  pattern_guard: $ => seq(
    $._pat,
    '<-',
    $._exp_infix,
  ),

  guard: $ => choice(
    $.pattern_guard,
    $.let,
    $._exp_infix,
  ),

  guards: $ => seq('|', sep1($.comma, $.guard)),

  gdpat: $ => seq($.guards, '->', $._exp),

  _alt_variants: $ => choice(
    seq('->', $._exp),
    repeat1($.gdpat),
  ),

  alt: $ => seq($._pat, $._alt_variants, optional(seq($.where, optional($.decls)))),

  alts: $ => layouted($, $.alt),

  exp_case: $ => seq('case', $._exp, 'of', $.alts),

  /**
   * left associative because the alts are optional
   */
  exp_lambda_case: $ => prec.left(seq(
    '\\',
    'case',
    optional($.alts),
  )),

  rec: $ => seq(
    'rec',
    layouted($, $.stmt),
  ),

  stmt: $ => choice(
    $._exp,
    $.bind_pattern,
    $.let,
    $.rec,
  ),

  /**
   * TODO does this hide the keyword entirely?
   */
  _do_keyword: _ => choice('mdo', 'do'),

  do_module: $ => qualified($, $._do_keyword),

  exp_do: $ => seq(choice($.do_module, $._do_keyword), layouted($, $.stmt)),

  exp_negation: $ => seq('-', $._aexp),

  exp_record: $ => seq($._aexp, braces(sep1($.comma, $.exp_field))),

  exp_name: $ => choice(
    $._qvar,
    $._qcon,
    $.implicit_parid,
    $.label,
  ),

  _aexp: $ => choice(
    $.exp_name,
    $.exp_parens,
    $.exp_tuple,
    $.exp_list,
    $.exp_th_quoted_name,
    $.exp_type_application,
    $.exp_lambda_case,
    $.exp_do,
    $.exp_record,
    $.exp_arithmetic_sequence,
    $.exp_list_comprehension,
    $.exp_section_left,
    $.exp_section_right,
    $.exp_unboxed_tuple,
    $.exp_unboxed_sum,
    $.splice,
    $.quasiquote,
    alias($.literal, $.exp_literal),
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
    seq($._aexp, $.exp_cond),
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
    $.exp_cond,
    $.exp_if_guard,
    $.exp_case,
    $.exp_negation,
    $._fexp,
    $.exp_lambda,
  ),

  /**
   * This is left-associative, although in reality this would depend on the fixity declaration for the operator.
   * The default is left, even though the reerence specifies it the other way around.
   * In any case, this seems to be more stable.
   */
  exp_infix: $ => seq($._exp_infix, $._qop, $._lexp),

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
