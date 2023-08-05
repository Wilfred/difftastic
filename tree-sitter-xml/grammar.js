/**
 * @file Tree-sitter grammar definition for XML
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.w3.org/TR/xml/|W3C standard}
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
    document: $ => seq(
      optional($.prolog),
      repeat($._Misc),
      field('root', $.element),
      repeat($._Misc),
    ),

    prolog: $ => prec.right(choice(
      $.XMLDecl,
      seq(
        O($.XMLDecl),
        repeat($._Misc),
        $.doctypedecl
      )
    )),

    _Misc: $ => choice($.PI, $.Comment, $._S),

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
      '<!DOCTYPE',
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

    CData: _ => /([^\]]|][^\]]|]][^>])*/
  }
});
