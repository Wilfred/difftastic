const { parens, varid_pattern } = require('./util.js')

module.exports = {
  // ------------------------------------------------------------------------
  // Identifiers
  // ------------------------------------------------------------------------

  // https://github.com/purescript/documentation/blob/09859e0d53d2b08ee7e63686a083c1a45423005f/language/Syntax.md#function-and-value-names
  // https://github.com/natefaubion/purescript-language-cst-parser/blob/bf5623e08e1f43f923d4ff3c29cafbda25128768/src/PureScript/CST/Lexer.purs#L500
  _varid: _ => varid_pattern,
  _immediate_varid: _ => token.immediate(varid_pattern),
  variable: $ => $._varid,
  _immediate_variable: $ => alias($._immediate_varid, $.variable),
  qualified_variable: $ => qualified($, $.variable),
  _qvarid: $ => choice($.qualified_variable, $.variable),

  // `_varsym` comes from the scanner.
  // operator: $ => $._varsym,
  // Scanner doesn't let us use -> <- => <= and their unicode counterparts,
  // which complicates the grammar, so just using regex here.
  // Look-around isn't allowed, so this is slightly modified.
  // https://github.com/natefaubion/purescript-language-cst-parser/blob/bf5623e08e1f43f923d4ff3c29cafbda25128768/src/PureScript/CST/Lexer.purs#L503
  _operator: _ => /(?:[:!#$%&*+./<=>?@\\^|~-]|\p{S})+/u,
  operator: $ => $._operator,
  _minus: $ => alias('-', $.operator),

  // Any operator including `-`
  _operator_or_minus: $ => choice($.operator, $._minus),
  qualified_operator: $ => qualified($, $._operator_or_minus),

  // Qualified or unqualified operator, with and without `-`.
  _q_op: $ => choice($.qualified_operator, $._operator_or_minus),
  _q_op_nominus: $ => choice($.qualified_operator, $.operator),

  // Qualified and unqualified identifier or operator in parens.
  _var: $ => choice($.variable, parens($._operator_or_minus)),
  _qvar: $ => choice($._qvarid, parens($._q_op)),

  // ------------------------------------------------------------------------
  // Data constructors
  // ------------------------------------------------------------------------

  // Same as the varid pattern except this one would have to start with a capital letter.
  _conid: _ => /[\p{Lu}_][\p{L}0-9_']*/u,
  constructor: $ => $._conid,

  qualified_constructor: $ => qualified($, $.constructor),
  // Qualified or unqualified data constructor.
  _qconid: $ => choice($.qualified_constructor, $.constructor),

  // TODO: should be deleted?
  // `_consym` comes from the scanner.
  constructor_operator: $ => $._consym,
  qualified_constructor_operator: $ => qualified($, $.constructor_operator),
  // Qualified or unqualified constructor operator
  _qconsym: $ => choice($.qualified_constructor_operator, $.constructor_operator),

  // Data constructor in "normal" or infix operator form (in parens).
  _con: $ => choice($.constructor, parens($.constructor_operator)),
  // Qualified data constructor in "normal" or infix operator form (in parens).
  _qcon: $ => choice($._qconid, parens($._qconsym)),

  // Data constructor in "normal" or infix operator form (in parens).
  _con: $ => choice($.constructor, parens($.constructor_operator)),
  // Qualified data constructor in "normal" or infix operator form (in parens).
  _qcon: $ => choice($._qconid, parens($._qconsym)),

  // ------------------------------------------------------------------------
  // Type constructors
  // ------------------------------------------------------------------------

  _tyconid: $ => alias($.constructor, $.type),
  qualified_type: $ => qualified($, $._tyconid),
  _qtyconid: $ => choice($.qualified_type, $._tyconid),

  // `_tyconsym` comes from the scanner.
  _type_operator: $ => choice(alias($._tyconsym, $.type_operator), $.constructor_operator),
  qualified_type_operator: $ => qualified($, alias($._tyconsym, $.type_operator)),

  _qualified_type_operator: $ => choice($.qualified_type_operator, $.qualified_constructor_operator),
  _qtyconsym: $ => choice($._qualified_type_operator, $._type_operator),

  _simple_tycon: $ => choice($._tyconid, parens($._type_operator)),
  _simple_qtyconop: $ => choice($._qtyconid, parens($._qtyconsym)),

  // TODO: Should be removed?
  // Technically it is a 'special' value, but:
  // 1. Doesn't matter semantically for the grammar
  // 2. All other type operators behave exactly the same way
  tycon_arrow: $ => parens($._arrow),

  type_literal: $ => choice(
    $.integer,
    $.string,
    $.triple_quote_string
  ),

  _qtycon: $ => choice($._qtyconid, parens($._qtyconsym)),

  _gtycon: $ => choice(
    $._qtycon,
    $.tycon_arrow,
  ),

  literal: $ => $._literal,
  _name: $ => choice($._var, $._con),
  _qname: $ => choice($._qvar, $._qcon),
}
