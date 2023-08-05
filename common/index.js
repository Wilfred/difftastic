/**
 * @file Reusable constructs
 * @author ObserverOfTime
 * @license MIT
 */

/** @see {@link https://www.w3.org/TR/xml/#NT-NameStartChar} */
module.exports.NAME_START_CHAR = '[' +
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
module.exports.NAME_CHAR = '[\-.0-9\xB7' +
  '\u0300-\u036F\u203F-\u2040' +
  module.exports.NAME_START_CHAR.substring(1);

/** @param {"'" | ''} q */
module.exports.pubid_char = (q) =>
  new RegExp(`[\x20\x0D\x0Aa-zA-Z0-9\-${q}()+,./:=?;!*#@$_%]*`);

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
module.exports.att_value = ($, q) =>
  seq(q, repeat(choice(new RegExp(`[^<&${q}]`), $._Reference)), q);

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
module.exports.entity_value = ($, q) =>
  seq(
    q,
    repeat(choice(
      new RegExp(`[^<%&${q}]`),
      $.PEReference,
      $._Reference
    )),
    q
  );


/** @param {RuleOrLiteral[]} choices */
module.exports.str = (...choices) =>
  choice(
    seq("'", ...choices, "'"),
    seq('"', ...choices, '"')
  );

/**
 * @param {GrammarSymbols<any>} $
 * @param {RuleOrLiteral[]} choices
 */
module.exports.ref = ($, ...choices) =>
  choice(...choices, $.PEReference);

/** @param {RuleOrLiteral[]} rules */
module.exports.rseq = (...rules) => repeat(seq(...rules));

/** @param {RuleOrLiteral[]} rules */
module.exports.rseq1 = (...rules) => repeat1(seq(...rules));
