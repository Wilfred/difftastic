const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // type
  // ------------------------------------------------------------------------

  type_variable: $ => $._varid,

  annotated_type_variable: $ => parens($.type_variable, $._type_annotation),

  _tyvar: $ => choice(
    $.annotated_type_variable,
    $.type_variable,
  ),

  _forall_kw: _ => choice('forall', '∀'),

  _forall_dot: $ => choice('.', '->'),

  _forall: $ => seq(
    $._forall_kw,
    repeat1($._tyvar),
  ),

  forall: $ => seq(
    $._forall,
    $._forall_dot,
  ),

  type_parens: $ => parens($._type),

  type_list: $ => brackets(sep1($.comma, $._type)),

  type_tuple: $ => parens(sep2($.comma, $._type)),

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

  type_name: $ => choice(
    $._tyvar,
    $._gtycon,
  ),

  type_star: _ => '*',

  _atype: $ => choice(
    $.type_name,
    $.type_star,
    $._type_literal,
    $.type_parens,
  ),

  /**
   * Type application, as in `Either e (Int, Text)`.
   */
  type_apply: $ => seq($._atype, repeat1($._atype)),

  /**
   * The point of this `choice` is to get a node for type application only if there is more than one atype present.
   */
  _btype: $ => choice(
    $._atype,
    $.type_apply,
  ),

  type_infix: $ => prec('infix-type', seq(
    field('left', $._btype),
    field('op', $.tyconop),
    field('right', $._type_infix),
  )),

  _type_infix: $ => choice(
    $.type_infix,
    prec('btype', $._btype),
  ),

  implicit_param: $ => seq(
    $.implicit_parid,
    $._type_annotation,
  ),

  constraint: $ => choice(
    seq(field('class', alias($.type_name, $.class_name)), repeat($._atype)),
    $.type_infix,
  ),

  _context: $ => seq(
    choice(
      $.constraint,
      prec('context-empty', parens(optional(sep1($.comma, choice($.constraint, $.implicit_param))))),
    ),
  ),

  context: $ => seq($._context, '=>'),

  _type_quantifiers: $ => seq(
    alias($._forall, $.quantifiers),
    $._forall_dot,
    $._type,
  ),

  _type_context: $ => seq(
    $._context,
    '=>',
    $._type,
  ),

  _type_fun: $ => prec('function-type', seq($._type_infix, '->', $._type)),

  _type: $ => prec('type', choice(
    alias($._type_quantifiers, $.forall),
    alias($._type_context, $.context),
    alias($._type_fun, $.fun),
    $._type_infix,
  )),

  _type_annotation: $ => seq(
    '::',
    field('type', $._type),
  ),

  _simpletype_infix: $ => seq(
    $._tyvar,
    field('name', alias($._tyconsym, $.type_operator)),
    $._tyvar,
  ),

  _simpletype: $ => choice(
    parens($._simpletype),
    alias($._simpletype_infix, $.type_infix),
    seq(
      field('name', $._qtycon),
      repeat($._tyvar),
    ),
  ),

  // ------------------------------------------------------------------------
  // type decl
  // ------------------------------------------------------------------------

  decl_type: $ => seq(
    'type',
    $._simpletype,
    '=',
    $._type,
  ),

  decl_type_sig: $ => seq(
    'type',
    optional('family'),
    $._simpletype,
    $._type_annotation,
  ),

  // ------------------------------------------------------------------------
  // type family
  // ------------------------------------------------------------------------

  // TODO what's this?
  tyfam_sig: $ => seq(
    // optional(sep1($.comma, choice($._variable, $.implicit_parid))),
    '::',
    $._type
  ),

  tyfam_head: $ => $._simpletype,

  tyfam_pat: $ => seq(
    field('name', $._qtycon),
    repeat($._atype),
  ),

  tyfam_eq: $ => seq(
    alias($.tyfam_pat, $.pattern),
    '=',
    $._type,
  ),

  decl_tyfam: $ => seq(
    'type',
    'family',
    alias($.tyfam_head, $.head),
    optional(alias($.tyfam_sig, $.signature)),
    optional(where($, alias($.tyfam_eq, $.equation))),
  ),

  decl_tyinst: $ => seq(
    'type',
    'instance',
    repeat($._atype),
    '=',
    $._type,
  ),
}
