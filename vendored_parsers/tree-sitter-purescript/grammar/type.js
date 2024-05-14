const { parens, qualified } = require('./util.js')

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
      alias($._tyvar_annotated, $.annotated_type_variable)
    ),

  // ----- Quantifiers --------------------------------------------------------

  _forall_kw: _ => choice('forall', '∀'),

  _quantifiers: $ => seq($._forall_kw, repeat1($._tyvar), '.'),

  // This could be simply `$._quantifiers` but we also handle
  // the edge case of `f :: forall a. forall b. Unit`
  forall: $ => prec.left(repeat1($._quantifiers)),

  // ----- Misc ---------------------------------------------------------------

  type_name: $ =>
    // conflicts with row types, see comments in that module
    prec.dynamic(0, choice(
      $._tyvar,
      $._qtyconid,
    )),

  type_wildcard: _ => '_',

  type_operator: $ => $._operator,

  qualified_type_operator: $ => qualified($, $.type_operator),

  _type_qoperator: $ =>
    choice(
      $.type_operator,
      $.qualified_type_operator
    ),

  captured_type_operator: $ =>
    parens($._q_op),

  // ----- Aggregation --------------------------------------------------------

  type_parens: $ => parens(seq(optional($.forall), $._type)),

  // This is the parser to be used in signatures for functions, classes, types, newtypes and data.
  _type_annotation: $ =>
    seq(
      $._colon2,
      optional($.forall),
      $._type
    ),

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
      $.captured_type_operator,
    ),

  /**
   * Type application, as in `Either e (Int, Text)` or `TypeRep @Int`.
   */
   type_apply: $ => seq($._atype, repeat1($._atype)),

  /**
   * The point of this `choice` is to get a node for type application only if there is more than one atype present.
   */
  _btype: $ =>
    seq(
      optional($.forall),
      choice(
        $._atype,
        $.type_apply
      ),
    ),

  type_infix: $ =>
    seq(
      $._btype,
      $._type_qoperator,
      $._type
    ),

  _type: $ =>
    seq(
      optional($.forall),
      choice($.type_infix, $._btype),
    ),

  _simpletype: $ =>
    seq(field('name', $._tyconid), repeat($._tyvar)),

  // ----- Type role declaration -0--------------------------------------------

  _role: _ => choice('nominal', 'representational', 'phantom'),

  type_role_declaration: $ =>
    seq(
      'type',
      'role',
      $._tyconid,
      repeat1(field('role', alias($._role, $.type_role))),
    ),

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
