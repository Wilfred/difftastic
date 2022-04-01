module.exports = grammar({
  name: "scheme",

  extras: $ => [
    // Unicode whitespace
    // In Javascript, /\s/ equivalent to this long regex.
    // But we can't just use /\s/ since tree-sitter doesn't
    // use JS's regex engine.
    /[\r\n\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/,
    $.comment,
    $.directive,
  ],

  rules: {
    program: $ => repeat($._datum),
    _datum: $ => choice($._simple_datum, $._compound_datum),
    comment: $ =>
      choice(
        token(seq(";", /.*/)),
        // unrolled version of /#\|.*?\|#/s
        seq("#|", /[^|]*\|+([^#][^|]*\|+)*/, "#"),
        seq("#;", $._datum)),
    directive: $ =>
      seq("#!", $.symbol),

    // simple datum {{{

    _simple_datum: $ =>
      choice(
        $.boolean,
        $.number,
        $.character,
        $.string,
        $.symbol),

    boolean: _ => choice("#t", "#f", "#T", "#F"),

    character: _ =>
      token(
        choice(
          "#\\space", "#\\newline",
          "#\\alarm", "#\\backspace",
          "#\\delete", "#\\esc",
          "#\\linefeed", "#\\page",
          "#\\return", "#\\space", "#\\tab", "#\\vtab",
          seq("#\\x", /[0-9a-fA-F]+/),
          /#\\./)),

    string: $ =>
      seq(
        '"',
        repeat(
          choice(
            $.escape_sequence,
            token.immediate(prec(1, /[^"\\]/)))),
        '"'),
    escape_sequence: _ =>
      token.immediate(
        choice(
          seq("\\", /["\\abfnrtv]/),
          seq("\\x", /[0-9a-fA-F]+/, ";"),
          seq("\\", /./))),

    number: _ =>
      token(
        choice(
          number_base(2),
          number_base(8),
          number_base(10),
          number_base(16))),

    symbol: _ => {
      const first_char = choice(/[a-zA-Z!$%&*/:<=>?^_~]/, seq("\\x", /[0-9a-fA-F]+/, ";"));
      return token(
        choice(
          "...",
          seq(
            first_char,
            repeat(choice(first_char, /[0-9.@+-]/))),
          /[.@+-]/,
        ));
    },

    // simple datum }}}

    // compound datum {{{

    _compound_datum: $ =>
      choice(
        $._special_form,
        $.list),

    list: $ =>
      choice(
        par(repeat($._datum)),
        par(seq(repeat1($._datum), ".", $._datum)),
        $._abbreviation),


    _abbreviation: $ => choice(seq($._abbreviation_prefix, $._datum)),
    _abbreviation_prefix: _ => choice("`", ",", ",@", "#'", "#`", "#,", "#,@"),

    _special_form: $ =>
      choice(
        $.quote,
        $.if_expr,
        $.vector,
        $.byte_vector),

    quote: $ =>
      choice(
        seq(
          "'",
          $._datum),
        par(seq("quote", $._datum))),

    vector: $ => seq("#(", repeat($._datum), ")"),

    byte_vector: $ => seq("#vu8(", repeat($.number), ")"),

    define: $ =>
      par(
        choice(
          seq("define", $._datum, optional($._datum)),
          seq("define", par(seq($._datum, optional($.parameters))), repeat($._datum)))),

    if_expr: $ =>
      choice(
        par(seq("if", $.if_test, $._datum, optional($._datum)))),

    if_test: $ => $._datum,

    _parameters: $ => par(optional($.parameters)),

    parameters: $ =>
      choice(
        seq(
          repeat($.symbol),
          ".",
          $.symbol),
        repeat1($.symbol)),

    // compound datum }}}
  },
});

function par(rule) {
  return choice(
    seq('(', rule, ')'),
    seq('[', rule, ']'),
    seq('{', rule, '}'));
}

function number_base(n) {
  const radixn = {
    2: choice("#b", "#B"),
    8: choice("#o", "#O"),
    10: choice("#d", "#D", ""),
    16: choice("#x", "#X"),
  };
  const digitsn = {
    2: /[01]/,
    8: /[0-7]/,
    10: /[0-9]/,
    16: /[0-9a-fA-F]/,
  };

  const exactness = optional(choice("#i", "#e", "#I", "#E"));
  const radix = radixn[n];
  const prefix = choice(seq(radix, exactness), seq(exactness, radix));

  const sign = optional(/[+-]/);
  const digits = digitsn[n];

  const exponent = choice("e", "s", "f", "d", "l");
  const suffix = optional(choice(
    seq(exponent, sign, repeat1(digits)),
    seq("|", repeat1(digits)),
  ));
  const uinteger = seq(repeat1(digits), repeat("#"));
  const decimal10 = choice(
    seq(uinteger, suffix),
    seq(".", repeat1(digits), repeat("#"), suffix),
    seq(repeat1(digits), ".", repeat(digits), repeat("#"), suffix),
    seq(repeat1(digits), repeat1("#"), ".", repeat("#"), suffix)
  );
  const decimal = {
    2: "",
    8: "",
    10: decimal10,
    16: "",
  };

  const ureal = choice(uinteger, seq(uinteger, "/", uinteger), decimal[n]);
  const imag = choice("i", seq(ureal, "i"), "inf.0i", "nan.0i");
  const real = choice(seq(sign, ureal), "+nan.0", "-nan.0", "+inf.0", "-inf.0");
  const complex = choice(
    real,
    seq(real, "@", real),
    seq(optional(real), /[+-]/, imag)
  );

  return seq(prefix, complex);
}
