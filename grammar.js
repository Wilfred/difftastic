const COMMENT = token(/;.*\n?/);

const WHITESPACE_CHAR = /[\f\n\r\t, \u000B\u001C\u001D\u001E\u001F\u2028\u2029\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2008\u2009\u200a\u205f\u3000]/;

const WHITESPACE = token(repeat1(WHITESPACE_CHAR));

const STRING = token(
  seq('"', repeat(/[^"\\]/), repeat(seq("\\", /./, repeat(/[^"\\]/))), '"')
);

const SYMBOL = token(/[_a-zA-Z0-9-]+/);

module.exports = grammar({
  name: "elisp",

  rules: {
    source_file: ($) => repeat(choice($.sexp, $._gap)),

    sexp: ($) => choice($.list, $._atom),
    _atom: ($) => choice($.symbol, $.string),

    symbol: ($) => SYMBOL,
    string: ($) => STRING,

    list: ($) => seq("(", repeat(choice($.sexp, $._gap)), ")"),

    _gap: ($) => choice($._ws, $.comment),
    _ws: ($) => WHITESPACE,
    comment: ($) => COMMENT,
  },
});
