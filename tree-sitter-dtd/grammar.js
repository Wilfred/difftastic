/**
 * @file Tree-sitter grammar definition for DTD
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.w3.org/TR/xml11/|W3C standard}
 */

const {rules, rseq, rseq1} = require('../common');

const O = optional;

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
const entity_value = ($, q) =>
  seq(
    q,
    repeat(choice(
      new RegExp(`[^<%&${q}]`),
      $.PEReference,
      $._Reference
    )),
    q
  );

module.exports = grammar({
  name: 'dtd',

  extras: _ => [],

  supertypes: $ => [
    $._markupdecl,
    $._AttType,
    $._EnumeratedType,
    $._EntityDecl,
    $._Reference
  ],

  inline: $ => [
    $._occurences
  ],

  rules: {
    document: $ => rseq1(
      O($._S),
      $._markupdecl,
      $._DeclSep
    ),

    _markupdecl: $ => choice(
      $.elementdecl,
      $.AttlistDecl,
      $._EntityDecl,
      $.NotationDecl,
      $.PI,
      $.Comment
    ),

    _DeclSep: $ => choice($.PEReference, $._S),

    elementdecl: $ => seq(
      '<!ELEMENT',
      $._S,
      $.Name,
      $._S,
      $.contentspec,
      O($._S),
      '>'
    ),

    contentspec: $ => choice(
      'EMPTY',
      'ANY',
      $.Mixed,
      $.children
    ),

    Mixed: $ => choice(
      seq(
        '(',
        O($._S),
        '#PCDATA',
        rseq(
          O($._S),
          '|',
          O($._S),
          choice($.Name, $.PEReference),
          O($._S),
        ),
        ')',
        '*'
      ),
      seq(
        '(',
        O($._S),
        '#PCDATA',
        O($._S),
        ')'
      )
    ),

    // TODO: clean this up
    children: $ => seq(
      choice($._choice, $._seq),
      O($._occurences)
    ),

    _cp: $ => seq(
      choice($.Name, $._choice, $._seq),
      O($._occurences)
    ),

    _choice: $ => seq(
      '(',
      O($._S),
      $._cp,
      rseq1(
        O($._S),
        '|',
        O($._S),
        $._cp
      ),
      ')'
    ),

    _seq: $ => seq(
      '(',
      O($._S),
      $._cp,
      rseq(
        O($._S),
        ',',
        O($._S),
        $._cp
      ),
      ')'
    ),

    AttlistDecl: $ => seq(
      '<!ATTLIST',
      $._S,
      $.Name,
      repeat($._AttDef),
      O($._S),
      '>'
    ),

    _AttDef: $ => seq(
      $._S,
      $.Name,
      $._S,
      $._AttType,
      $._S,
      $.DefaultDecl
    ),

    _AttType: $ => choice(
      $.StringType,
      $.TokenizedType,
      $._EnumeratedType
    ),

    StringType: _ => 'CDATA',

    TokenizedType: _ => token(choice(
      'ID',
      'IDREF',
      'IDREFS',
      'ENTITY',
      'ENTITIES',
      'NMTOKEN',
      'NMTOKENS'
    )),

    _EnumeratedType: $ => choice(
      $.NotationType,
      $.Enumeration
    ),

    NotationType: $ => seq(
      'NOTATION',
      $._S,
      '(',
      O($._S),
      $.Name,
      rseq(
        O($._S),
        '|',
        O($._S)
      ),
      $.Name,
      O($._S),
      ')'
    ),

    Enumeration: $ => seq(
      '(',
      O($._S),
      $.Nmtoken,
      rseq(
        O($._S),
        '|',
        O($._S),
        $.Nmtoken
      ),
      O($._S),
      ')'
    ),

    DefaultDecl: $ => choice(
      '#REQUIRED',
      '#IMPLIED',
      seq(
        O(seq('#FIXED', $._S)),
        $.AttValue
      )
    ),

    _EntityDecl: $ => choice(
      $.GEDecl,
      $.PEDecl
    ),

    GEDecl: $ => seq(
      '<!ENTITY',
      $._S,
      $.Name,
      $._S,
      choice(
        $.EntityValue,
        seq(
          $.ExternalID,
          O($.NDataDecl)
        )
      ),
      O($._S),
      '>'
    ),

    PEDecl: $ => seq(
      '<!ENTITY',
      $._S,
      '%',
      $._S,
      $.Name,
      $._S,
      choice(
        $.EntityValue,
        $.ExternalID
      ),
      O($._S),
      '>'
    ),

    EntityValue: $ => choice(
      entity_value($, '"'),
      entity_value($, "'")
    ),

    NDataDecl: $ => seq($._S, 'NDATA', $._S, $.Name),

    NotationDecl: $ => seq(
      '<!NOTATION',
      $._S,
      $.Name,
      $._S,
      choice($.ExternalID, $.PublicID),
      O($._S),
      '>'
    ),

    PEReference: $ => seq('%', $.Name, ';'),

    _occurences: _ => choice('?', '*', '+'),

    ...rules
  }
});
