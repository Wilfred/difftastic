const {parens} = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // var
  // ------------------------------------------------------------------------

  _varid: _ => /[_a-z](\w|')*#?/,
  label: _ => /#[_a-z](\w|')*/,
  variable: $ => $._varid,
  qualified_variable: $ => qualified($, $.variable),
  _qvarid: $ => choice($.qualified_variable, $.variable),

  operator: $ => $._varsym,
  _minus: $ => alias('-', $.operator),
  _operator_minus: $ => choice($.operator, $._minus),
  qualified_operator: $ => qualified($, $._operator_minus),
  _qvarsym: $ => choice($.qualified_operator, $._operator_minus),
  _qvarsym_nominus: $ => choice($.qualified_operator, $.operator),

  _var: $ => choice($.variable, parens($._operator_minus)),
  _qvar: $ => choice($._qvarid, parens($._qvarsym)),

  varop: $ => choice($._operator_minus, ticked($.variable)),
  _qvarop: $ => choice($._qvarsym, ticked($._qvarid)),
  _qvarop_nominus: $ => choice($._qvarsym_nominus, ticked($._qvarid)),

  implicit_parid: _ => /\?[_a-z](\w|')*/,

  // ------------------------------------------------------------------------
  // con
  // ------------------------------------------------------------------------

  _conid: _ => /[A-Z](\w|')*#?/,
  constructor: $ => $._conid,
  qualified_constructor: $ => qualified($, $.constructor),
  _qconid: $ => choice($.qualified_constructor, $.constructor),

  constructor_operator: $ => $._consym,
  qualified_constructor_operator: $ => qualified($, $.constructor_operator),
  _qconsym: $ => choice($.qualified_constructor_operator, $.constructor_operator),

  _con: $ => choice($.constructor, parens($.constructor_operator)),
  _qcon: $ => choice($._qconid, parens($._qconsym)),
  _conop: $ => choice($.constructor_operator, ticked($.constructor)),
  _qconop: $ => choice($._qconsym, ticked($._qconid)),
  _op: $ => choice($.varop, $._conop),
  _qop: $ => choice($._qvarop, $._qconop),

  _qop_nominus: $ => choice($._qvarop_nominus, $._qconop),

  con_unit: _ => prec('con_unit', parens()),
  con_list: _ => brackets(),
  con_tuple: $ => parens(repeat1($.comma)),

  _gcon_literal: $ => choice(
    $.con_unit,
    $.con_list,
    $.con_tuple,
  ),

  literal: $ => choice(
    $._literal,
    $._gcon_literal,
  ),

  _gcon: $ => choice(
    $._qcon,
    $._gcon_literal,
  ),

  // ------------------------------------------------------------------------
  // tycon
  // ------------------------------------------------------------------------

  _tyconid: $ => alias($.constructor, $.type),
  qualified_type: $ => qualified($, $._tyconid),
  _qtyconid: $ => choice($.qualified_type, $._tyconid),

  _type_operator: $ => choice(alias($._tyconsym, $.type_operator), $.constructor_operator),
  qualified_type_operator: $ => qualified($, alias($._tyconsym, $.type_operator)),
  _qualified_type_operator: $ => choice($.qualified_type_operator, $.qualified_constructor_operator),
  _qtyconsym: $ => choice($._qualified_type_operator, $._type_operator),

  _ticked_tycon: $ => ticked($._tyconid),
  _simple_tyconop: $ => choice(alias($._ticked_tycon, $.ticked), $._type_operator),
  _simple_tycon: $ => choice($._tyconid, parens($._type_operator)),

  _ticked_qtycon: $ => ticked($._qtyconid),
  _qtyconops: $ => choice(alias($._ticked_qtycon, $.ticked), $._qtyconsym),
  _promoted_tyconop: $ => seq(quote, $._qtyconops),
  _qtyconop: $ => choice(
    alias($._promoted_tyconop, $.promoted),
    $._qtyconops,
  ),

  tycon_arrow: _ => parens('->'),

  type_literal: $ => choice(
    $._literal,
    $.con_unit,
    $.con_list,
    $.con_tuple,
  ),

  _qtycon: $ => choice($._qtyconid, parens($._qtyconsym)),

  _promoted_tycon: $ => seq(quote, $._qtycon),

  _gtycon: $ => choice(
    alias($._promoted_tycon, $.promoted),
    $._qtycon,
    $.tycon_arrow,
  ),

  _name: $ => choice($._var, $._con),
  _qname: $ => choice($._qvar, $._qcon),
}
