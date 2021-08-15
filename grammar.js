const COMMENT = token(/;.*\n?/);

const STRING = token(
  seq('"', repeat(/[^"\\]/), repeat(seq("\\", /./, repeat(/[^"\\]/))), '"')
);

const SYMBOL = token(/[a-zA-Z0-9_?:/*+=<>-]+/);

const INTEGER_BASE10 = token(/[+-]?[0-9]+\.?/);
const INTEGER_WITH_BASE = token(/#([box]|[0-9][0-9]?r)[0-9a-zA-Z]/);

const FLOAT_WITH_DEC_POINT = token(/[+-]?[0-9]*\.[0-9]+/);
const FLOAT_WITH_EXPONENT = token(/[+-]?[0-9]+[eE][0-9]+/);
const FLOAT_WITH_BOTH = token(/[+-]?[0-9]*\.[0-9]+[eE][0-9]+/);
const FLOAT_INF = token(/-?1.0[eE]+INF/);
const FLOAT_NAN = token(/-?0.0[eE]+NaN/);

const CHAR = token(/\?(\\.|.)/);

module.exports = grammar({
  name: "elisp",

  rules: {
    source_file: ($) => repeat(choice($._sexp, $.comment)),

    _sexp: ($) => choice($.list, $.vector, $._atom, $.quote, $.unquote),
    quote: ($) => seq(choice("#'", "'", "`"), $._sexp),
    unquote: ($) => seq(",", $._sexp),

    _atom: ($) => choice($.integer, $.float, $.char, $.string, $.symbol),
    integer: ($) => choice(INTEGER_BASE10, INTEGER_WITH_BASE),
    float: ($) =>
      choice(
        FLOAT_WITH_DEC_POINT,
        FLOAT_WITH_EXPONENT,
        FLOAT_WITH_BOTH,
        FLOAT_INF,
        FLOAT_NAN
      ),
    char: ($) => CHAR,
    string: ($) => STRING,
    symbol: ($) => SYMBOL,

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
