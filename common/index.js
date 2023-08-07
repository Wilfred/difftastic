/**
 * @file Reusable constructs
 * @author ObserverOfTime
 * @license MIT
 */

/**
 * @param {"'" | ''} q
 * @see {@link https://www.w3.org/TR/xml/#NT-PubidChar}
 */
module.exports.pubid_char = (q) =>
  new RegExp(`[ \\r\\na-zA-Z0-9\\-${q}()+,./:=?;!*#@$_%]*`);

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
module.exports.att_value = ($, q) =>
  seq(
    q,
    field(
      'content',
      repeat(choice(
        new RegExp(`[^<&${q}]`),
        $._Reference
      ))
    ),
    q
  );

/**
 * @param {GrammarSymbols<any>} $
 * @param {'"' | "'"} q
 */
module.exports.entity_value = ($, q) =>
  seq(
    q,
    field(
      'content',
      repeat(choice(
        new RegExp(`[^<%&${q}]`),
        $.PEReference,
        $._Reference
      ))
    ),
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
