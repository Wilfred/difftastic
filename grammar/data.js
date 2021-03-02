const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // adt
  // ------------------------------------------------------------------------

  field: $ => seq(
    sep1($.comma, $.variable),
    '::',
    choice($.strict_type, $._type),
  ),

  data_constructor: $ => seq(
    $.constructor,
    repeat(choice($.strict_type, $._atype))
  ),

  data_constructor_infix: $ => seq(
    choice($.strict_type, $._type_infix),
    $._conop,
    choice($.strict_type, $._type_infix),
  ),

  _record_field: $ => braces($.field),

  record_fields: $ => braces(sep1($.comma, $.field)),

  data_constructor_record: $ => seq(
    $.constructor,
    $.record_fields,
  ),

  constrs: $ => sep1(
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

  via: $ => seq('via', $._atype),

  deriving_strategy: _ => choice('stock', 'newtype', 'anyclass'),

  deriving: $ => seq(
    'deriving',
    optional($.deriving_strategy),
    choice(
      field('class', $._qtycon),
      parens(optional(sep1($.comma, field('class', $._qtycon))))
    ),
    optional($.via),
  ),

  _adt_rhs: $ => seq(
    '=',
    $.constrs,
    repeat($.deriving),
  ),

  _gadt_fun: $ => seq(choice($.strict_type, $._type_infix), '->', $._gadt_sig),

  _gadt_sig: $ => choice(
    alias($._gadt_fun, $.fun),
    choice($.strict_type, $._type_infix)
  ),

  _gadt_constr_type: $ => seq(
    '::',
    optional($.forall),
    optional($.context),
    choice($._gadt_sig, seq($.record_fields, '->', $._gadt_sig)),
  ),

  gadt_constructor: $ => seq(
    $._con,
    $._gadt_constr_type,
  ),

  _gadt_rhs: $ => where($, choice($.gadt_constructor, $.deriving)),

  _adt: $ => seq(
    choice($._adt_rhs, $._gadt_rhs),
  ),

  decl_adt: $ => seq(
    'data',
    optional($.context),
    $._simpletype,
    optional($._type_annotation),
    optional($._adt),
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
    $._newtype
  ),

  // ------------------------------------------------------------------------
  // data family
  // ------------------------------------------------------------------------

  decl_datafam: $ => seq(
    'data',
    'family',
    $._simpletype,
    optional($._type_annotation),
  ),

  _datainst: $ => seq(
    'instance',
    optional($.forall),
    optional($.context),
    $._type_infix,
    optional($._type_annotation),
  ),

  decl_datainst: $ => choice(
    seq(
      'data',
      $._datainst,
      optional($._adt),
    ),
    seq(
      'newtype',
      $._datainst,
      $._newtype
    ),
  ),
}
