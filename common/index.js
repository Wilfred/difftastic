/**
 * @file Reusable constructs
 * @author ObserverOfTime
 * @license MIT
 */

/** @see {@link https://www.w3.org/TR/xml/#NT-NameStartChar} */
const NAME_START_CHAR = '[' +
  ':A-Z_a-z' +
  '\u00C0-\u00D6' +
  '\u00D8-\u00F6' +
  '\u00F8-\u02FF' +
  '\u0370-\u037D' +
  '\u037F-\u1FFF' +
  '\u200C-\u200D' +
  '\u2070-\u218F' +
  '\u2C00-\u2FEF' +
  '\u3001-\uD7FF' +
  '\uF900-\uFDCF' +
  '\uFDF0-\uFFFD' +
  '\u{10000}-\u{EFFFF}' +
  ']';

/** @see {@link https://www.w3.org/TR/xml/#NT-NameChar} */
const NAME_CHAR = '[\-.0-9\xB7' +
  '\u0300-\u036F\u203F-\u2040' +
  NAME_START_CHAR.substring(1);

/** @param {"'" | ''} q */
const pubid_char = (q) =>
  new RegExp(`[\x20\x0D\x0Aa-zA-Z0-9\-${q}()+,./:=?;!*#@$_%]*`);

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
const att_value = ($, q) =>
  seq(q, repeat(choice(new RegExp(`[^<&${q}]`), $._Reference)), q);

const O = optional;

/** @param {RuleOrLiteral[]} rules */
module.exports.rseq = (...rules) => repeat(seq(...rules));

/** @param {RuleOrLiteral[]} rules */
module.exports.rseq1 = (...rules) => repeat1(seq(...rules));

/** @type {RuleBuilders<any, never>} */
module.exports.rules = {
  /** @see {@link https://www.w3.org/TR/xml/#NT-Char} */
  _Char: _ => /[\u0001-\uD7FF\uE000-\uFFFD\u{10000}-\u{10FFFF}]/u,

  /** @see {@link https://www.w3.org/TR/xml/#NT-S} */
  _S: _ => /[\x20\x09\x0D\x0A]+/,

  /** @see {@link https://www.w3.org/TR/xml/#NT-Name} */
  Name: _ => new RegExp(`${NAME_START_CHAR}${NAME_CHAR}*`, 'u'),

  /** @see {@link https://www.w3.org/TR/xml/#NT-Nmtoken} */
  Nmtoken: _ => new RegExp(`${NAME_CHAR}+`, 'u'),

  /** @see {@link https://www.w3.org/TR/xml/#NT-Reference} */
  _Reference: $ => choice($.EntityRef, $.CharRef),

  /** @see {@link https://www.w3.org/TR/xml/#NT-EntityRef} */
  EntityRef: $ => seq('&', $.Name, ';'),

  /** @see {@link https://www.w3.org/TR/xml/#NT-CharRef} */
  CharRef: _ => choice(
    seq('&#', /[0-9]+/, ';'),
    seq('&#x', /[0-9a-fA-F]+/, ';')
  ),

  /** @see {@link https://www.w3.org/TR/xml/#NT-AttValue} */
  AttValue: $ => choice(
    att_value($, '"'),
    att_value($, "'")
  ),

  /** @see {@link https://www.w3.org/TR/xml/#NT-ExternalID} */
  ExternalID: $ => choice(
    seq('SYSTEM', $._S, $.SystemLiteral),
    seq('PUBLIC', $._S, $.PubidLiteral, $._S, $.SystemLiteral)
  ),

  /** @see {@link https://www.w3.org/TR/xml/#NT-PublicID} */
  PublicID: $ => prec.right(seq('PUBLIC', $._S, $.PubidLiteral)),

  /** @see {@link https://www.w3.org/TR/xml/#NT-SystemLiteral} */
  SystemLiteral: _ => choice(
    seq('"', O(field('content', /[^"]*/)), '"'),
    seq("'", O(field('content', /[^']*/)), "'")
  ),

  /** @see {@link https://www.w3.org/TR/xml/#NT-PubidLiteral} */
  PubidLiteral: _ => choice(
    seq('"', O(field('content', pubid_char("'"))), '"'),
    seq("'", O(field('content', pubid_char(''))), "'")
  ),

  // TODO: parse attributes
  /** @see {@link https://www.w3.org/TR/xml/#NT-PI} */
  PI: $ => seq(
    '<?',
    // FIXME: disallow /xml/i
    alias($.Name, $.PITarget),
    O(seq($._S, /([^?]|\?[^>])*/)),
    '?>'
  ),

  /** @see {@link https://www.w3.org/TR/xml/#NT-Comment} */
  Comment: _ => token(seq(
    '<!--',
    /([^-]|-[^-])*/,
    '-->'
  )),

  /** @see {@link https://www.w3.org/TR/xml/#NT-Misc} */
  _Misc: $ => choice(
    $.PI,
    $.Comment,
    $._S
  ),
};
