const COMMENT = token(/;.*\n?/);

const STRING = token(
  seq('"', repeat(/[^"\\]/), repeat(seq("\\", /./, repeat(/[^"\\]/))), '"')
);

const SYMBOL = token(/[a-zA-Z0-9_?:/*+=<>-]+/);

const INTEGER_BASE10 = token(/[+-]?[0-9]+\.?/);
const INTEGER_WITH_BASE = token(/#([box]|[0-9][0-9]?r)[0-9a-zA-Z]/);

module.exports = grammar({
  name: "elisp",

  rules: {
    source_file: ($) => repeat(choice($._sexp, $.comment)),

    _sexp: ($) => choice($.list, $.vector, $._atom, $.quote, $.unquote),
    quote: ($) => seq(choice("#'", "'", "`"), $._sexp),
    unquote: ($) => seq(",", $._sexp),

    _atom: ($) => choice($.number, $.symbol, $.string),
    number: ($) => choice(INTEGER_BASE10, INTEGER_WITH_BASE),
    symbol: ($) => SYMBOL,
    string: ($) => STRING,

    // dotted_list: ($) =>
    //   seq(
    //     "(",
    //     repeat(choice($.comment)),
    //     $._sexp,
    //     ".",
    //     repeat(choice($.comment)),
    //     $._sexp,
    //     repeat(choice($.comment)),
    //     ")"
    //   ),
    list: ($) => seq("(", repeat(choice($._sexp, $.comment)), ")"),
    vector: ($) => seq("[", repeat(choice($._sexp, $.comment)), "]"),

    comment: ($) => COMMENT,
  },
});
