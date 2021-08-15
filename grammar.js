const COMMENT = token(/;.*\n?/);

const STRING = token(
  seq('"', repeat(/[^"\\]/), repeat(seq("\\", /./, repeat(/[^"\\]/))), '"')
);

const SYMBOL = token(/[a-zA-Z0-9_?:/*+=<>-]+/);

module.exports = grammar({
  name: "elisp",

  rules: {
    source_file: ($) => repeat(choice($._sexp, $.comment)),

    _sexp: ($) => choice($.list, $.vector, $._atom, $.quote, $.unquote),
    quote: ($) => seq(choice("#'", "'", "`"), $._sexp),
    unquote: ($) => seq(",", $._sexp),

    _atom: ($) => choice($.symbol, $.string),
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
