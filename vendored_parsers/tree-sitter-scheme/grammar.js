// r5rs: case insensitive
//       comment: only line comment
// r6rs: case sensitive except boolean, number, unicode hex literals
//       comment: all
// r7rs: case insensitive except letters, character names, mnemonic escapes.
//       comment: all

const PREC = {
  first: $ => prec(100, $),
  last: $ => prec(-100, $),
};

const common = {
  whitespace: /[ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}]/,
  intra_whitespace: /[\t\p{Zs}]/,
  line_ending: /[\n\r\u{2028}\u{0085}]|(\r\n)|(\r\u{0085})/,
  any_char: /.|[\r\n\u{85}\u{2028}\u{2029}]/,

  symbol_element: /[^ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}#;"'`,(){}\[\]\\|]/,
};

const r5rs = {
  boolean: seq("#", /[tTfF]/),
  number:
    choice(
      r5rs_number_base(2),
      r5rs_number_base(8),
      r5rs_number_base(10),
      r5rs_number_base(16)),
  character:
    seq(
      "#\\",
      choice(
        /[sS][pP][aA][cC][eE]/,
        /[nN][eE][wW][lL][iI][nN][eE]/,
        common.any_char)),
  escape_sequence:
    choice(
      "\\\"",
      "\\\\"),
};

const r6rs = {
  boolean: seq("#", /[tTfF]/),
  number:
    choice(
      r6rs_number_base(2),
      r6rs_number_base(8),
      r6rs_number_base(10),
      r6rs_number_base(16)),
  character:
    seq(
      "#\\",
      choice(
        "nul", "alarm", "backspace", "tab",
        "linefeed", "newline", "vtab", "page",
        "return", "esc", "space", "delete",
        /x[0-9a-fA-F]+/,
        common.any_char)),
  escape_sequence:
    choice(
      /\\[abtnvfr"\\]/,
      /\\x[0-9a-fA-F]+;/,
      seq(
        "\\",
        common.intra_whitespace,
        common.line_ending,
        common.intra_whitespace)),
};

const r7rs = {
  boolean:
    seq(
      "#",
      choice(
        /[tTfF]/,
        /[tT][rR][uU][eE]/,
        /[fF][aA][lL][sS][eE]/)),
  number:
    choice(
      r7rs_number_base(2),
      r7rs_number_base(8),
      r7rs_number_base(10),
      r7rs_number_base(16)),
  character:
    seq(
      "#\\",
      choice(
        "alarm", "backspace", "delete",
        "escape", "newline", "null",
        "return", "space", "tab",
        /[xX][0-9a-fA-F]+/,
        common.any_char)),
  escape_sequence:
    seq(
      "\\",
      choice(
        /[abtnr"\\]/,
        seq(
          repeat(common.intra_whitespace),
          common.line_ending,
          repeat(common.intra_whitespace)),
        /[xX][0-9a-fA-F]+;/)),
  symbol:
    seq(
      "|",
      repeat(
        choice(
          /[^|\\]+/,
          /\\[xX][0-9a-fA-F]+;/,
          /\\[abtnr]/,
          "\\|")),
      "|")
};

const extension = {
  escape_sequence: /\\./,
  character:
    seq(
      "#\\",
      choice("bel", "ls", "nel", "rubout", "vt")),
};

const hidden_node = {
  symbol:
    token(
      choice(
        repeat1(common.symbol_element),
        r7rs.symbol)),
};

module.exports = grammar({
  name: "scheme",

  extras: _ => [],

  rules: {
    program: $ => repeat($._token),

    _token: $ =>
      choice(
        $._intertoken,
        $._datum),

    _intertoken: $ =>
      choice(
        // NOTE: `repeat1` here can significantly reduce code size than `repeat`
        token(repeat1(common.whitespace)),
        $.directive,
        $.comment,
        $.block_comment),

    comment: $ =>
      choice(
        /;.*/,
        seq("#;", repeat($._intertoken), $._datum)),

    directive: $ =>
      seq("#!", repeat($._intertoken), hidden_node.symbol),

    block_comment: $ =>
      seq("#|",
        repeat(
          choice(
            PREC.first($.block_comment),
            common.any_char)),
        PREC.first("|#")),

    _datum: $ => choice(
      $.boolean,
      $.character,
      $.string,

      // number/symbol precedence
      // for same length token, prefer number
      // otherwise, prefer symbol which is also longer
      $.number,
      $.symbol,

      $.vector,
      $.byte_vector,
      $.list,

      $.quote,
      $.quasiquote,
      $.unquote,
      $.unquote_splicing,
      $.syntax,
      $.quasisyntax,
      $.unsyntax,
      $.unsyntax_splicing,

      $.keyword),

    // simple datum {{{

    boolean: _ =>
      token(
        choice(
          r5rs.boolean,
          r6rs.boolean,
          r7rs.boolean)),

    number: _ =>
      token(
        choice(
          r5rs.number,
          r6rs.number,
          r7rs.number)),

    character: _ =>
      token(
        choice(
          r5rs.character,
          r6rs.character,
          r7rs.character,
          extension.character)),

    string: $ =>
      seq(
        '"',
        repeat(
          choice(
            $.escape_sequence,
            /[^"\\]+/)),
        '"'),

    escape_sequence: _ =>
      token(
        choice(
          r5rs.escape_sequence,
          r6rs.escape_sequence,
          r7rs.escape_sequence,
          extension.escape_sequence)),

    symbol: _ => token(hidden_node.symbol),

    keyword: _ =>
      token(
        seq(
          "#:",
          hidden_node.symbol)),

    // simple datum }}}

    // compound datum {{{

    list: $ =>
      choice(
        seq("(", repeat($._token), ")"),
        seq("[", repeat($._token), "]"),
        seq("{", repeat($._token), "}")),

    quote: $ =>
      seq(
        "'",
        repeat($._intertoken),
        $._datum),

    quasiquote: $ =>
      seq(
        "`",
        repeat($._intertoken),
        $._datum),

    syntax: $ =>
      seq(
        "#'",
        repeat($._intertoken),
        $._datum),

    quasisyntax: $ =>
      seq(
        "#`",
        repeat($._intertoken),
        $._datum),

    unquote: $ =>
      seq(
        ",",
        repeat($._intertoken),
        $._datum),

    unquote_splicing: $ =>
      seq(
        ",@",
        repeat($._intertoken),
        $._datum),

    unsyntax: $ =>
      seq(
        "#,",
        repeat($._intertoken),
        $._datum),

    unsyntax_splicing: $ =>
      seq(
        "#,@",
        repeat($._intertoken),
        $._datum),

    vector: $ => seq("#(", repeat($._token), ")"),

    byte_vector: $ => seq("#vu8(", repeat($._token), ")"),
    // compound datum }}}
  },
});

// number {{{

function r5rs_number_base(n) {
  const radixn = {
    2: choice("#b", "#B"),
    8: choice("#o", "#O"),
    10: optional(choice("#d", "#D")),
    16: choice("#x", "#X"),
  };
  const digitsn = {
    2: /[01]/,
    8: /[0-7]/,
    10: /[0-9]/,
    16: /[0-9a-fA-F]/,
  };

  const exactness =
    optional(
      choice("#i", "#e", "#I", "#E"));
  const radix = radixn[n];
  const prefix =
    choice(
      seq(radix, exactness),
      seq(exactness, radix));

  const sign = optional(/[+-]/);
  const digits = digitsn[n];

  const exponent = /[eEsSfFdDlL]/;
  const suffix =
    optional(
      seq(
        exponent,
        sign,
        repeat1(digitsn[10])));

  const uinteger =
    seq(
      repeat1(digits),
      repeat("#"));
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
  }[n];

  const ureal =
    choice(
      uinteger,
      seq(uinteger, "/", uinteger),
      decimal);
  const real = seq(sign, ureal);
  const complex = choice(
    real,
    seq(real, "@", real),
    seq(optional(real), /[+-]/, optional(ureal), "i")
  );

  return seq(prefix, complex);
}

function r6rs_number_base(n) {
  const radixn = {
    2: choice("#b", "#B"),
    8: choice("#o", "#O"),
    10: optional(choice("#d", "#D")),
    16: choice("#x", "#X"),
  };
  const digitsn = {
    2: /[01]/,
    8: /[0-7]/,
    10: /[0-9]/,
    16: /[0-9a-fA-F]/,
  };

  const exactness =
    optional(
      choice("#i", "#e", "#I", "#E"));
  const radix = radixn[n];
  const prefix =
    choice(
      seq(radix, exactness),
      seq(exactness, radix));

  const sign = optional(/[+-]/);
  const digits = digitsn[n];
  const digits10 = digitsn[10];

  const exponent = /[eEsSfFdDlL]/;
  const suffix =
    optional(
      seq(
        exponent,
        sign,
        repeat1(digits10)));

  const uinteger = repeat1(digits);
  const decimal10 =
    choice(
      seq(uinteger, suffix),
      seq(".", repeat1(digits), suffix),
      seq(repeat1(digits), ".", repeat(digits), suffix),
      seq(repeat1(digits), ".", suffix));
  const decimal = {
    2: "",
    8: "",
    10: decimal10,
    16: "",
  }[n];

  const mantissa_width =
    optional(
      seq("|", repeat1(digits10)));

  const naninf = choice("nan.0", "inf.0");

  const ureal =
    seq(
      choice(
        uinteger,
        seq(uinteger, "/", uinteger),
        seq(decimal, mantissa_width)));
  const real =
    choice(
      seq(sign, ureal),
      seq(/[+-]/, naninf));
  const complex =
    choice(
      real,
      seq(real, "@", real),
      seq(
        optional(real),
        /[+-]/,
        optional(choice(ureal, naninf)),
        "i"));

  return seq(prefix, complex);
}

function r7rs_number_base(n) {
  const infnan =
    choice(
      /[+-][iI][nN][fF]\.0/,
      /[+-][nN][aA][nN]\.0/);

  const exponent_marker = /[eE]/;
  const sign = optional(/[+-]/);
  const exactness = optional(/#[ieIE]/);
  const radix =
    {
      2: /#[bB]/,
      8: /#[oO]/,
      10: optional(/#[dD]/),
      16: /#[xX]/,
    }[n];
  const digit =
    {
      2: /[01]/,
      8: /[0-7]/,
      10: /[0-9]/,
      16: /[0-9a-fA-F]/,
    }[n];

  const suffix =
    optional(
      seq(exponent_marker, sign, repeat1(digit)));

  const prefix =
    choice(
      seq(radix, exactness),
      seq(exactness, radix));

  const uinteger = repeat1(digit);

  const decimal =
    {
      2: "",
      8: "",
      10:
        choice(
          seq(uinteger, suffix),
          seq(".", repeat1(digit), suffix),
          seq(repeat1(digit), ".", repeat(digit), suffix)),
      16: "",
    }[n];

  const ureal =
    choice(
      uinteger,
      seq(uinteger, "/", uinteger),
      decimal);

  const real =
    choice(
      seq(sign, ureal),
      infnan);

  const complex =
    choice(
      real,
      seq(real, "@", real),
      seq(real, /[+-]/, ureal, "i"),
      seq(real, /[+-]/, "i"),
      seq(real, infnan, "i"),
      seq(/[+-]/, ureal, "i"),
      seq(infnan, "i"),
      seq(/[+-]/, "i"));

  const num =
    seq(
      prefix,
      complex);

  return num;
}

// number }}}
