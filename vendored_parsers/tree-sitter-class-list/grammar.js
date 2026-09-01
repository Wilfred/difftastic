// A tiny grammar for whitespace-separated tokens, such as the value
// of an HTML `class` attribute (e.g. "classOne classTwo"). Each
// token becomes its own node, so difftastic can diff them
// independently instead of treating the whole string as one atom.
//
// Each token is further split on '-', ':' and '/', since utility
// class frameworks like Tailwind pack meaning into hyphen/colon
// separated segments (e.g. "hover:tw-px-4" vs "hover:tw-px-5" should
// highlight just "4" vs "5", not the whole class name).
module.exports = grammar({
  name: "class_list",

  extras: ($) => [/\s/],

  externals: ($) => [$._continuation_separator],

  rules: {
    source: ($) => repeat($.class_name),

    // The continuation separator/segment pair must not be separated
    // from the previous token by whitespace: without that,
    // whitespace-separated class names like "foo -bar" would be
    // swallowed into a single `class_name`, since nothing else would
    // stop the repeat from continuing across the (skippable)
    // whitespace extra.
    //
    // `_continuation_separator` is implemented in scanner.c rather
    // than as `token.immediate(/[-:/]+/)` because a plain regex can't
    // express "and a segment character follows": that check needs
    // arbitrary lookahead, which tree-sitter's regex support doesn't
    // have. Without it, a *dangling* separator (followed by
    // whitespace or end of input, e.g. the trailing ":" in
    // "hover: foo") gets lexed as a continuation separator anyway,
    // the immediate segment that must follow fails to match, and
    // tree-sitter can't backtrack out of the already-shifted token
    // (this is a lexer commitment, not a parser-level ambiguity, so
    // `conflicts` can't help either).
    class_name: ($) =>
      seq(
        optional($.separator),
        $.segment,
        repeat(
          seq(
            alias($._continuation_separator, $.separator),
            alias(token.immediate(/[^\s\-:/]+/), $.segment),
          ),
        ),
      ),

    // A *run* of separator characters (e.g. "--" in a BEM-style class
    // like "legacy--text-center") is one separator token, not two
    // separators with an (invalid, empty) segment between them.
    segment: ($) => /[^\s\-:/]+/,

    separator: ($) => /[-:/]+/,
  },
});
