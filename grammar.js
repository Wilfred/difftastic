const PREC = {
  first: $ => prec(100, $),
  last: $ => prec(-1, $),
};

const LEAF = {
  // https://en.wikipedia.org/wiki/Unicode_character_property#Whitespace
  whitespace: /[ \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}]+/u,
  newline: /[\r\n\u{85}\u{2028}\u{2029}]/,
  delimiter: /[ \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}\u{FEFF}(){}",'`;\[\]]/u,
  non_delimiter: /[^ \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}\u{FEFF}(){}",'`;\[\]]/u,

  // first character of symbol
  symbol_start:
    choice(
      /[^# \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}\u{FEFF}(){}",'`;\[\]\|\\]/u,
      "#%",
      /\|[^|]*\|/,
      /\\./),
  symbol_remain:
    choice(
      /[^ \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}\u{FEFF}(){}",'`;\[\]\|\\]/u,
      /\|[^|]*\|/,
      /\\./),

  any_char: /.|[\r\n\u{85}\u{2028}\u{2029}]/,
};

function paren(tok) {
  return choice(
    seq("(", tok, ")"),
    seq("[", tok, "]"),
    seq("{", tok, "}"));
}

module.exports = grammar({
  name: 'racket',

  extras: _ => [],

  externals: $ => [
    $._here_string_body,
  ],

  rules: {
    program: $ => repeat($._token),

    _token: $ =>
      choice(
        $._skip,
        $.extension,
        $._datum),

    _skip: $ =>
      choice(
        LEAF.whitespace,
        $.comment,
        $.sexp_comment,
        $.block_comment),

    dot: _ => ".",

    // comment {{{

    comment: $ =>
      choice(
        token(
          seq(/;.*/)),
        $._line_comment),

    block_comment: $ =>
      seq("#|",
        repeat(
          choice(
            PREC.first($.block_comment),
            LEAF.any_char)),
        PREC.first("|#")),

    sexp_comment: $ =>
      seq("#;",
        repeat($._skip),
        $._datum),

    _line_comment: _ =>
      token(
        seq(
          choice("#! ", "#!/"),
          repeat(seq(/.*/, "\\", LEAF.newline)),
          /.*/)),

    // comment }}}

    _datum: $ =>
      choice(
        $.boolean,
        $.string,
        $.here_string,
        $.byte_string,
        $.character,

        // number/symbol precedence
        // for same length token, prefer number
        // otherwise, prefer symbol which is also longer
        $.number,
        $.symbol,

        $.keyword,
        $.regex,
        $.box,
        $.graph,
        $.structure,
        $.hash,

        $.quote,
        $.quasiquote,
        $.syntax,
        $.quasisyntax,
        $.unquote,
        $.unquote_splicing,
        $.unsyntax,
        $.unsyntax_splicing,

        $.list,
        $.vector),

    boolean: _ => token(choice("#true", "#t", "#T", "#false", "#f", "#F")),

    // string {{{

    string: $ => $._real_string,

    byte_string: $ =>
      seq("#", $._real_string),

    here_string: $ =>
      seq("#<<", $._here_string_body),

    regex: $ =>
      seq(
        token(choice("#rx", "#px", "#rx#", "#px#")),
        $._real_string),

    _real_string: $ =>
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
          "\\a", "\\b", "\\t", "\\n", "\\v", "\\f", "\\r", "\\e",
          '\\"', "\\'", "\\\\",
          seq("\\", /[0-7]{1,3}/),
          seq("\\x", /[0-9a-fA-F]{1,2}/),
          seq("\\u", /[0-9a-fA-F]{1,4}/),
          seq("\\u", /[0-9a-fA-F]{4,4}/),
          seq("\\U", /[0-9a-fA-F]{1,8}/),
          seq("\\", /[\r\n]|(\r\n)/))),

    // string }}}

    number: _ =>
      token(
        choice(
          extflonum(2),
          extflonum(8),
          extflonum(10),
          extflonum(16),
          number_base(2),
          number_base(8),
          number_base(10),
          number_base(16))),

    decimal: _ => /[0-9]+/,

    character: _ =>
      token(
        seq(
          "#\\",
          choice(
            "nul", "null", "backspace",
            "tab", "newline", "linefeed",
            "vtab", "page", "return",
            "space", "rubout",
            /[0-7]{3,3}/, /u[0-9a-fA-F]{1,4}/, /U[0-9a-fA-F]{1,8}/,
            /./))),

    symbol: _ =>
      token(
        choice(
          /#[cC][iIsS]/, // read-case-sensitive parameter
          seq(
            LEAF.symbol_start,
            repeat(LEAF.symbol_remain)))),

    keyword: _ =>
      token(
        seq(
          "#:",
          repeat1(LEAF.symbol_remain))),

    box: $ =>
      seq(
        "#&",
        repeat($._skip),
        $._datum),

    list: $ =>
      paren(
        repeat(
          choice(
            $._token,
            $.dot))),

    vector: $ =>
      seq(
        choice("#", "#fl", "#fx"),
        optional($.decimal),
        $.list),

    structure: $ =>
      seq(
        "#s",
        $.list),

    hash: $ =>
      seq(
        choice("#hash", "#hasheq", "#hasheqv"),
        $.list),

    graph: $ =>
      seq(
        "#",
        $.decimal,
        choice(
          "#",
          seq(
            "=",
            repeat($._skip),
            $._datum))),

    quote: $ =>
      seq(
        "'",
        repeat($._skip),
        $._datum),

    quasiquote: $ =>
      seq(
        "`",
        repeat($._skip),
        $._datum),

    syntax: $ =>
      seq(
        "#'",
        repeat($._skip),
        $._datum),

    quasisyntax: $ =>
      seq(
        "#`",
        repeat($._skip),
        $._datum),

    unquote: $ =>
      seq(
        ",",
        repeat($._skip),
        $._datum),

    unquote_splicing: $ =>
      seq(
        ",@",
        repeat($._skip),
        $._datum),

    unsyntax: $ =>
      seq(
        "#,",
        repeat($._skip),
        $._datum),

    unsyntax_splicing: $ =>
      seq(
        "#,@",
        repeat($._skip),
        $._datum),

    extension: $ =>
      choice(
        seq(
          "#reader",
          repeat($._skip),
          $._datum),
        seq(
          choice("#lang ", "#!"),
          $.lang_name)),

    lang_name: _ => /[a-zA-Z0-9+_/-]+/,

  }
})

// number {{{

function number_base(n) {
  const digit = {
    2: /[01]/,
    8: /[0-7]/,
    10: /[0-9]/,
    16: /[0-9a-fA-F]/,
  }[n];

  const exp_mark = {
    2: /[sldefSLDEF]/,
    8: /[sldefSLDEF]/,
    10: /[sldefSLDEF]/,
    16: /[slSL]/,
  }[n];

  const prefix = {
    2: /#[bB]/,
    8: /#[oO]/,
    10: optional(/#[dD]/),
    16: /#[xX]/,
  }[n];

  const exactness =
    /#[eiEI]/;

  const sign = /[+-]/;

  const digits_hash =
    seq(
      repeat1(digit),
      repeat("#"));

  const unsigned_integer =
    repeat1(digit);

  // exact

  const exact_integer =
    seq(
      optional(sign),
      unsigned_integer);

  const unsigned_rational =
    choice(
      unsigned_integer,
      seq(unsigned_integer, "/", unsigned_integer));

  const exact_rational =
    seq(
      optional(sign),
      unsigned_rational);

  const exact_complex =
    seq(
      optional(exact_rational),
      sign,
      optional(unsigned_rational),
      /[iI]/);

  const exact =
    choice(exact_rational, exact_complex);

  // inexact

  const inexact_special =
    choice(
      /[iI][nN][fF]\.[0fF]/,
      /[nN][aA][nN]\.[0fF]/);

  const inexact_simple =
    choice(
      seq(
        digits_hash,
        optional("."),
        repeat("#")),
      seq(
        optional(unsigned_integer),
        ".",
        digits_hash),
      seq(
        digits_hash,
        "/",
        digits_hash));

  const inexact_normal =
    seq(
      inexact_simple,
      optional(
        seq(
          exp_mark,
          exact_integer)));

  const inexact_unsigned =
    choice(inexact_normal, inexact_special);

  const inexact_real =
    choice(
      seq(
        optional(sign),
        inexact_normal),
      seq(
        sign,
        inexact_special));

  const inexact_complex =
    choice(
      seq(
        optional(inexact_real),
        sign,
        optional(inexact_unsigned),
        /[iI]/),
      seq(
        inexact_real,
        "@",
        inexact_real));

  const inexact =
    choice(inexact_real, inexact_complex);

  const number =
    choice(exact, inexact);

  const general_number =
    seq(
      choice(
        seq(
          optional(exactness),
          prefix),
        seq(
          prefix,
          optional(exactness))),
      number);

  return general_number;
}

function extflonum(n) {
  const digit = {
    2: /[01]/,
    8: /[0-7]/,
    10: /[0-9]/,
    16: /[0-9a-fA-F]/,
  }[n];

  const exp_mark = /[tT]/;

  const prefix = {
    2: /#[bB]/,
    8: /#[oO]/,
    10: optional(/#[dD]/),
    16: /#[xX]/,
  }[n];

  const sign = /[+-]/;

  const digits_hash =
    seq(
      repeat1(digit),
      repeat("#"));

  const unsigned_integer =
    repeat1(digit);

  // exact

  const exact_integer =
    seq(
      optional(sign),
      unsigned_integer);

  // inexact

  const inexact_special =
    choice(
      /[iI][nN][fF]\.[0fFtT]/,
      /[nN][aA][nN]\.[0fFtT]/);

  const inexact_simple =
    choice(
      seq(
        digits_hash,
        optional("."),
        repeat("#")),
      seq(
        optional(unsigned_integer),
        ".",
        digits_hash),
      seq(
        digits_hash,
        "/",
        digits_hash));

  const inexact_normal =
    seq(
      inexact_simple,
      optional(
        seq(
          exp_mark,
          exact_integer)));

  const inexact_real =
    choice(
      seq(
        optional(sign),
        inexact_normal),
      seq(
        sign,
        inexact_special));

  return seq(prefix, inexact_real);
}

// number }}}
