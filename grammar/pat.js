const {parens} = require('./util.js')

module.exports = {
  pat_field: $ => choice(
    // alias('..', $.wildcard),
    seq($._qvar, optional(seq(':', $._nested_pat))),
  ),

  pat_fields: $ => braces(optional(sep1($.comma, $.pat_field))),

  pat_name: $ => $._var,

  pat_as: $ => seq(field('var', $.variable), token.immediate('@'), field('pat', $._apat)),

  /**
   * Needed non-inlined for conflict definition.
   */
  _pat_constructor: $ => alias($._qcon, $.pat_name),

  pat_record: $ => field('fields', $.pat_fields),

  pat_wildcard: _ => '_',

  pat_parens: $ => parens($._nested_pat),

  _pat_unboxed_sum: $ => sep2('|', optional($._nested_pat)),

  pat_unboxed_sum: $ => seq($._unboxed_open, $._pat_unboxed_sum, $._unboxed_close),

  pat_list: $ => brackets(sep1($.comma, $._nested_pat)),

  pat_strict: $ => seq($._strict, $._apat),

  pat_irrefutable: $ => seq($._lazy, $._apat),

  pat_type_binder: $ => seq('@', $._atype),

  _apat: $ => choice(
    $.pat_name,
    $.pat_as,
    $._pat_constructor,
    $.pat_record,
    alias($.literal, $.pat_literal),
    $.pat_wildcard,
    $.pat_parens,
    $.pat_unboxed_sum,
    $.pat_list,
    $.pat_strict,
    $.pat_irrefutable,
    $.pat_type_binder,
    $.splice,
    $.quasiquote,
  ),

  pat_negation: $ => seq('-', $._apat),

  /**
   * In patterns, application is only legal if the first element is a con.
   */
  pat_apply: $ => seq($._pat_constructor, repeat1($._apat)),

  _lpat: $ => choice(
    $._apat,
    $.pat_negation,
    $.pat_apply,
  ),

  pat_infix: $ => seq($._lpat, $._qconop, $._pat),

  /**
   * Without the precs, a conflict is needed.
   */
  _pat: $ => choice(
    prec(2, $.pat_infix),
    prec(1, $._lpat),
  ),

  pat_typed: $ => seq(field('pattern', $._pat), $._type_annotation),

  _typed_pat: $ => choice(
    $._pat,
    $.pat_typed,
  ),

  pat_view: $ => seq($._exp, $._arrow, $._nested_pat),

  /**
   * Patterns that occur inside parentheses, and thus can always have view patterns and type annotations.
   */
  _nested_pat: $ => choice(
    $._typed_pat,
    $.pat_view,
  )
}
