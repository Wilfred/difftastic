const { parens } = require('./util.js')

module.exports = {

  // ----- Type variables -----------------------------------------------------

  // `a`
  type_variable: $ => $._varid,

  // `@a`
  _visible_type_variable: $ =>
    seq('@', alias($._immediate_varid, $.type_variable)),

  // `a` or `@a`
  _tyvar_no_annotation: $ =>
    choice($.type_variable, $._visible_type_variable),

  // `(a :: Type)` or `(@a :: Type)`
  _tyvar_annotated: $ =>
    parens(seq(
      $._tyvar_no_annotation,
      $._type_annotation
    )),

  _tyvar: $ =>
    choice(
      $._tyvar_no_annotation,
      $._tyvar_annotated
    ),

  // ----- Quantifiers --------------------------------------------------------

  _forall_kw: _ => choice('forall', '∀'),

  _quantifiers: $ => seq($._forall_kw, repeat1($._tyvar), '.'),

  forall: $ => $._quantifiers,

  // ----- Misc ---------------------------------------------------------------

  type_name: $ =>
    choice(
      $.type_variable,
      $._qtycon,
    ),

  type_wildcard: _ => '_',

  type_operator: $ => $._operator,

  // ----- Aggregation --------------------------------------------------------

  type_parens: $ => parens($._type),

  // This is the parser to be used in signatures for functions, classes, types, newtypes and data.
  _type_annotation: $ => seq($._colon2, $._type),

  _fun_signature: $ =>
    seq(
      field('name', $._varid),
      $._type_annotation
    ),

  _atype: $ =>
    choice(
      $.hole,
      $.type_wildcard,
      $.row_type,
      $.record_type_literal,
      $.type_name,
      $.type_literal,
      $.type_parens,
    ),

  /**
   * Type application, as in `Either e (Int, Text)` or `TypeRep @Int`.
   */
   type_apply: $ => seq($._atype, repeat1($._atype)),

  /**
   * The point of this `choice` is to get a node for type application only if there is more than one atype present.
   */
  _btype: $ =>
    choice(
      $._atype,
      $.type_apply
    ),

  type_infix: $ =>
    seq(
      field('left', $._btype),
      $.type_operator,
      field('right', $._type)
    ),

  _type: $ =>
    seq(
      optional($.forall),
      choice($.type_infix, $._btype),
    ),

  _simpletype: $ =>
    seq(field('name', $._tyconid), repeat($._tyvar)),

  // ----- Type declaration ---------------------------------------------------

  _type_type_signature: $ =>
    seq(
      'type',
      $._tyconid,
      $._type_annotation
    ),

  decl_type: $ =>
    seq(
      optional(alias($._type_type_signature, $.type_signature)),
      'type',
      $._simpletype,
      '=',
      $._type
    ),
}
