const COMMENT = token(/;.*\n?/);

const STRING = token(
  seq('"', repeat(/[^"\\]/), repeat(seq("\\", /(.|\n)/, repeat(/[^"\\]/))), '"')
);

const SYMBOL = token(/&?[a-zA-Z0-9_?:/*+=<>%!|.~$λ\\@{}-]+/);
const ESCAPED_READER_SYMBOL = token(/\\(`|'|,)/);

const INTEGER_BASE10 = token(/[+-]?[0-9]+\.?/);
const INTEGER_WITH_BASE = token(/#([box]|[0-9][0-9]?r)[0-9a-zA-Z]/);

const FLOAT_WITH_DEC_POINT = token(/[+-]?[0-9]*\.[0-9]+/);
const FLOAT_WITH_EXPONENT = token(/[+-]?[0-9]+[eE][0-9]+/);
const FLOAT_WITH_BOTH = token(/[+-]?[0-9]*\.[0-9]+[eE][0-9]+/);
const FLOAT_INF = token(/-?1.0[eE]\+INF/);
const FLOAT_NAN = token(/-?0.0[eE]\+NaN/);

const CHAR = token(/\?(\\.|.)/);

// https://www.gnu.org/software/emacs/manual/html_node/elisp/Special-Read-Syntax.html
const BYTE_COMPILED_FILE_NAME = token("#$");

module.exports = grammar({
  name: "elisp",

  extras: ($) => [/(\s|\f)/, $.comment],

  rules: {
    source_file: ($) => repeat($._sexp),

    _sexp: ($) =>
      choice(
        $.list,
        $.vector,
        $.bytecode,
        $._atom,
        $.quote,
        $.unquote_splice,
        $.unquote
      ),

    _atom: ($) =>
      choice(
        $.float,
        $.integer,
        $.char,
        $.string,
        $.byte_compiled_file_name,
        $.symbol
      ),
    float: ($) =>
      choice(
        FLOAT_WITH_DEC_POINT,
        FLOAT_WITH_EXPONENT,
        FLOAT_WITH_BOTH,
        FLOAT_INF,
        FLOAT_NAN
      ),
    integer: ($) => choice(INTEGER_BASE10, INTEGER_WITH_BASE),
    char: ($) => CHAR,
    string: ($) => STRING,
    byte_compiled_file_name: ($) => BYTE_COMPILED_FILE_NAME,
    symbol: ($) => choice(ESCAPED_READER_SYMBOL, SYMBOL),

    quote: ($) => seq(choice("#'", "'", "`"), $._sexp),
    unquote_splice: ($) => seq(",@", $._sexp),
    unquote: ($) => seq(",", $._sexp),

    dot: ($) => token("."),
    list: ($) =>
      seq(
        "(",
        choice(seq(repeat($._sexp), $.dot, $._sexp), repeat($._sexp)),
        ")"
      ),
    vector: ($) => seq("[", repeat($._sexp), "]"),
    bytecode: ($) => seq("#[", repeat($._sexp), "]"),

    comment: ($) => COMMENT,
  },
});
