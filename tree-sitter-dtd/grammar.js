/**
 * @file Tree-sitter grammar definition for DTD
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.w3.org/TR/xml/|XML standard}
 */

const c = require('../common');

const O = optional;

module.exports = grammar({
  name: 'dtd',

  externals: $ => [
    $.PITarget,
    $._pi_content,
    $.Comment,
  ],

  extras: _ => [],

  supertypes: $ => [
    $._markupdecl,
    $._AttType,
    $._EnumeratedType,
    $._EntityDecl,
    $._Reference,
  ],

  word: $ => $.Name,

  rules: {
    // AKA: extSubset
    document: $ => seq(
      O($.XMLDecl),
      repeat1($._extSubsetDecl)
    ),

    _extSubsetDecl: $ => choice(
      $._markupdecl,
      $.conditionalSect,
      $._DeclSep
    ),

    conditionalSect: $ => seq(
      '<![',
      O($._S),
      c.ref($, 'IGNORE', 'INCLUDE'),
      O($._S),
      '[',
      repeat($._extSubsetDecl),
      ']]>'
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
      '<!',
      'ELEMENT',
      $._S,
      c.ref($, $.Name),
      $._S,
      $.contentspec,
      O($._S),
      '>'
    ),

    contentspec: $ => choice(
      'EMPTY',
      'ANY',
      $.Mixed,
      $.children,
      $.PEReference
    ),

    Mixed: $ => choice(
      seq(
        '(',
        O($._S),
        c.ref($, '#PCDATA'),
        c.rseq(
          O($._S),
          '|',
          O($._S),
          c.ref($, $.Name),
          O($._S),
        ),
        ')',
        '*'
      ),
      seq(
        '(',
        O($._S),
        c.ref($, '#PCDATA'),
        O($._S),
        ')'
      )
    ),

    children: $ => seq(
      $._choice,
      O(choice('?', '*', '+'))
    ),

    _cp: $ => prec.right(seq(
      c.ref($, $.Name, $._choice),
      O(choice('?', '*', '+'))
    )),

    _choice: $ => seq(
      '(',
      O($._S),
      $._cp,
      c.rseq(
        O($._S),
        choice('|', ','),
        O($._S),
        $._cp
      ),
      ')'
    ),

    AttlistDecl: $ => seq(
      '<!',
      'ATTLIST',
      $._S,
      c.ref($, $.Name),
      repeat($.AttDef),
      O($._S),
      '>'
    ),

    AttDef: $ => prec.right(seq(
      $._S,
      c.ref($, $.Name),
      $._S,
      $._AttType,
      O(seq($._S, $.DefaultDecl))
    )),

    _AttType: $ => choice(
      $.StringType,
      $.TokenizedType,
      $._EnumeratedType,
      $.PEReference
    ),

    StringType: _ => 'CDATA',

    TokenizedType: _ => token(choice(
      'ID',
      'IDREF',
      'IDREFS',
      'ENTITY',
      'ENTITIES',
      'NMTOKEN',
      'NMTOKENS',
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
      c.ref($, $.Name),
      c.rseq(
        O($._S),
        '|',
        O($._S)
      ),
      c.ref($, $.Name),
      O($._S),
      ')'
    ),

    Enumeration: $ => seq(
      '(',
      O($._S),
      $.Nmtoken,
      c.rseq(
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
      '<!',
      'ENTITY',
      $._S,
      c.ref($, $.Name),
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
      '<!',
      'ENTITY',
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
      c.entity_value($, '"'),
      c.entity_value($, "'")
    ),

    NDataDecl: $ => seq($._S, 'NDATA', $._S, c.ref($, $.Name)),

    NotationDecl: $ => seq(
      '<!',
      'NOTATION',
      $._S,
      c.ref($, $.Name),
      $._S,
      choice($.ExternalID, $.PublicID),
      O($._S),
      '>'
    ),

    PEReference: $ => seq('%', $.Name, ';'),

    _S: _ => /[ \t\r\n]+/,

    Name: _ => /[a-zA-Z_][a-zA-Z0-9_:.·-]*/,

    Nmtoken: _ => /[a-zA-Z0-9_:.·-]+/,

    _Reference: $ => choice($.EntityRef, $.CharRef),

    EntityRef: $ => seq('&', $.Name, ';'),

    CharRef: _ => choice(
      seq('&#', /[0-9]+/, ';'),
      seq('&#x', /[0-9a-fA-F]+/, ';')
    ),

    AttValue: $ => choice(
      c.att_value($, '"'),
      c.att_value($, "'")
    ),

    ExternalID: $ => choice(
      seq('SYSTEM', $._S, $.SystemLiteral),
      seq('PUBLIC', $._S, $.PubidLiteral, $._S, $.SystemLiteral)
    ),

    PublicID: $ => prec.right(
      seq(c.ref($, 'PUBLIC'), $._S, $.PubidLiteral)
    ),

    SystemLiteral: $ => choice(
      seq('"', alias(/[^"]*/, $.URI), '"'),
      seq("'", alias(/[^']*/, $.URI), "'")
    ),

    PubidLiteral: _ => choice(
      seq('"', c.pubid_char("'"), '"'),
      seq("'", c.pubid_char(''), "'")
    ),

    // AKA: TextDecl
    XMLDecl: $ => seq(
      '<?',
      'xml',
      $._VersionInfo,
      O($._EncodingDecl),
      O($._S),
      '?>'
    ),

    _VersionInfo: $ => seq(
      $._S,
      'version',
      $._Eq,
      c.str($.VersionNum)
    ),

    VersionNum: _ => /1\.[0-9]+/,

    _EncodingDecl: $ => seq(
      $._S,
      'encoding',
      $._Eq,
      c.str($.EncName)
    ),

    EncName: _ => /[A-Za-z][A-Za-z0-9._\-]*/,

    PI: $ => seq(
      '<?',
      $.PITarget,
      O(seq($._S, $._pi_content)),
      '?>'
    ),

    _Eq: $ => seq(O($._S), '=', O($._S))
  }
});
