/**
 * @file Tree-sitter grammar definition for XML
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.w3.org/TR/xml/|XML standard}
 * @see {@link https://www.w3.org/TR/xml-model/|XML model}
 * @see {@link https://www.w3.org/TR/xml-stylesheet/|XML stylesheet}
 */

const c = require('../common');

const DTD = require('../tree-sitter-dtd/grammar');

const O = optional;

module.exports = grammar(DTD, {
  name: 'xml',

  inline: $ => [
    $._extSubsetDecl,
    $.conditionalSect
  ],

  rules: {
    document: $ => prec(2, seq(
      optional($._S),
      optional($.prolog),
      field('root', $.element),
      repeat($._Misc),
    )),

    prolog: $ => prec.right(choice(
      seq(
        $.XMLDecl,
        repeat($._Misc),
      ),
      seq(
        O($.XMLDecl),
        repeat($._Misc),
        $.doctypedecl,
        repeat($._Misc),
      ),
      repeat1($._Misc)
    )),

    _Misc: $ => choice(
      $.PI,
      $.StyleSheetPI,
      $.XmlModelPI,
      $.Comment,
      $._S
    ),

    XMLDecl: $ => seq(
      '<?',
      'xml',
      $._VersionInfo,
      O($._EncodingDecl),
      O($._SDDecl),
      O($._S),
      '?>'
    ),

    _SDDecl: $ => seq(
      $._S,
      'standalone',
      $._Eq,
      c.str(choice('yes', 'no'))
    ),

    doctypedecl: $ => seq(
      '<!',
      'DOCTYPE',
      $._S,
      $.Name,
      O(seq($._S, $.ExternalID)),
      O($._S),
      O(seq(
        '[',
        $._intSubset,
        ']',
        O($._S)
      )),
      '>'
    ),

    _intSubset: $ => c.rseq1(
      O($._S),
      $._markupdecl,
      $._DeclSep
    ),

    element: $ => choice(
      $.EmptyElemTag,
      seq($.STag, O($.content), $.ETag)
    ),

    EmptyElemTag: $ => seq(
      '<',
      $.Name,
      c.rseq($._S, $.Attribute),
      O($._S),
      '/>'
    ),

    Attribute: $ => seq($.Name, $._Eq, $.AttValue),

    STag: $ => seq(
      '<',
      $.Name,
      c.rseq($._S, $.Attribute),
      O($._S),
      '>'
    ),

    ETag: $ => seq('</', $.Name, O($._S), '>'),

    content: $ => repeat1(
      choice(
        $.CharData,
        $.element,
        $._Reference,
        $.CDSect,
        $.PI,
        $.Comment
      )
    ),

    CharData: _ => /([^<&]|[^<&\]]|][^<&\]]|]][^<&>])*/,

    CDSect: $ => prec.left(
      seq('<![CDATA[', $.CData, ']]>')
    ),

    CData: _ => /([^\]]|][^\]]|]][^>])*/,

    StyleSheetPI: $ => seq(
      '<?',
      'xml-stylesheet',
      c.rseq($._S, $.PseudoAtt),
      O($._S),
      '?>'
    ),

    XmlModelPI: $ => seq(
      '<?',
      'xml-model',
      c.rseq($._S, $.PseudoAtt),
      O($._S),
      '?>'
    ),

    PseudoAtt: $ => seq($.Name, $._Eq, $.PseudoAttValue),

    PseudoAttValue: $ => choice(
      c.att_value($, '"'),
      c.att_value($, "'")
    )
  }
});
