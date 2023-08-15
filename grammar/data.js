const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // adt
  // ------------------------------------------------------------------------

  field: $ => seq(
    sep1($.comma, $.variable),
    $._colon2,
    choice($.strict_type, $.lazy_type, $._type),
  ),

  data_constructor: $ => seq(
    $.constructor,
    repeat(choice($.strict_type, $.lazy_type, $._atype))
  ),

  data_constructor_infix: $ => seq(
    choice($.strict_type, $.lazy_type, $._type_infix),
    $._conop,
    choice($.strict_type, $.lazy_type, $._type_infix),
  ),

  _record_field: $ => braces($.field),

  record_fields: $ => braces(sep($.comma, $.field)),

  data_constructor_record: $ => seq(
    $.constructor,
    $.record_fields,
  ),

  /**
   * data constructors only allow single foralls and contexts
   */
  constructors: $ => sep1(
    '|',
    seq(
      optional($.forall),
      optional($.context),
      choice(
        $.data_constructor,
        $.data_constructor_infix,
        $.data_constructor_record,
      ),
    )
  ),

  via: $ => seq('via', $._type),

  deriving_strategy: _ => choice('stock', 'newtype', 'anyclass'),

  deriving: $ => seq(
    'deriving',
    optional($.deriving_strategy),
    choice(
      field('class', $._qtyconid),
      parens(optional(sep1($.comma, field('class', $._constraint))))
    ),
    optional($.via),
  ),

  _adt_rhs: $ => seq(
    '=',
    $.constructors,
    repeat($.deriving),
  ),

  _gadt_fun: $ => seq(choice($.strict_type, $.lazy_type, $._type_infix), $._fun_arrow, $._gadt_sig),

  _gadt_sig: $ => choice(
    alias($._gadt_fun, $.fun),
    choice($.strict_type, $.lazy_type, $._type_infix)
  ),

  /**
   * gadt constructors only allow single foralls and contexts
   */
  _gadt_constr_type: $ => seq(
    $._colon2,
    optional($.forall),
    optional($.context),
    choice($._gadt_sig, seq($.record_fields, $._arrow, $._gadt_sig)),
  ),

  gadt_constructor: $ => seq(
    $._con,
    $._gadt_constr_type,
  ),

  _gadt_rhs: $ => where($, choice($.gadt_constructor, $.deriving)),

  _adt: $ => $._gadt_rhs,

  decl_adt: $ => seq(
    'data',
    optional($.context),
    $._simpletype,
    '=',
    choice($._simpletype, $._type_sum),
  ),

  newtype_constructor: $ => seq(
    $.constructor,
    choice(
      $._atype,
      $._record_field,
    ),
  ),

  _newtype: $ => seq(
    '=',
    $.newtype_constructor,
    repeat($.deriving),
  ),

  _context_newtype: $ => choice(
    seq($.context, $._simpletype),
    $._simpletype,
  ),

  decl_newtype: $ => seq(
    'newtype',
    $._context_newtype,
    choice($._newtype, seq(optional($._type_annotation), $._gadt_rhs)),
  ),

  // ------------------------------------------------------------------------
  // data family
  // ------------------------------------------------------------------------

  _datafam: $ => seq(
    $._simpletype,
    optional($._type_annotation),
  ),

  decl_datafam: $ => seq(
    'data',
    'family',
    $._datafam,
  ),

  /**
   * data instances only allow single foralls and contexts
   */
  _datainst: $ => seq(
    optional($.forall),
    optional($.context),
    $._type_infix,
    optional($._type_annotation),
  ),

  decl_datainst: $ => choice(
    seq(
      'data',
      'instance',
      $._datainst,
      optional($._adt),
    ),
    seq(
      'newtype',
      'instance',
      $._datainst,
      $._newtype
    ),
  ),
}
