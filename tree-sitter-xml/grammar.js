/**
 * @file Tree-sitter grammar definition for XML
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.w3.org/TR/xml11/|W3C standard}
 */

const {rules, rseq} = require('../common');

const O = optional;

/** @param {RuleOrLiteral[]} choices */
const str = (...choices) => choice(
  seq("'", ...choices, "'"),
  seq('"', ...choices, '"')
);

module.exports = grammar({
  name: 'xml',

  extras: _ => [],

  supertypes: $ => [
    $._Reference
  ],

  rules: {
    document: $ => seq(
      optional($.prolog),
      field('root', $.element),
      repeat($._Misc),
    ),

    prolog: $ => choice(
      seq(
        $.XMLDecl,
        repeat($._Misc),
        O(seq($.doctypedecl, repeat($._Misc)))
      ),
      seq(
        repeat($._Misc),
        seq($.doctypedecl, repeat($._Misc))
      ),
    ),

    XMLDecl: $ => seq(
      '<?xml',
      $._VersionInfo,
      O($._EncodingDecl),
      O($._SDDecl),
      O($._S),
      '?>'
    ),

    _VersionInfo: $ => seq(
      $._S,
      'version',
      $._Eq,
      str($.VersionNum)
    ),

    VersionNum: _ => /1\.[0-9]+/,

    _EncodingDecl: $ => seq(
      $._S,
      'encoding',
      $._Eq,
      str($.EncName)
    ),

    EncName: _ => /[A-Za-z][A-Za-z0-9._\-]*/,

    _SDDecl: $ => seq(
      $._S,
      'standalone',
      $._Eq,
      str(choice('yes', 'no'))
    ),

    doctypedecl: $ => seq(
      '<!DOCTYPE',
      $._S,
      $.Name,
      O(seq($._S, $.ExternalID)),
      O($._S),
      O(seq(
        '[',
        alias(
          repeat($._Char),
          $.intSubset
        ),
        ']',
        O($._S)
      )),
      '>'
    ),

    element: $ => choice(
      $.EmptyElemTag,
      seq($.STag, O($.content), $.ETag)
    ),

    EmptyElemTag: $ => seq(
      '<',
      $.Name,
      rseq($._S, $.Attribute),
      $._S,
      '/>'
    ),

    Attribute: $ => seq($.Name, $._Eq, $.AttValue),

    STag: $ => seq(
      '<',
      $.Name,
      rseq($._S, $.Attribute),
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

    _Eq: $ => seq(O($._S), '=', O($._S)),

    ...rules
  }
});
