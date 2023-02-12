const PREC = {
  first: $ => prec(100, $),
  last: $ => prec(-1, $),
  left: prec.left,
  right: prec.right,
};

const LEAF = {
  // https://en.wikipedia.org/wiki/Unicode_character_property#Whitespace
  whitespace: /[ \t\n\v\f\r\u{0085}\u{00A0}\u{1680}\u{2000}-\u{200A}\u{2028}\u{2029}\u{202F}\u{205F}\u{3000}]/u,
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
        token(repeat1(LEAF.whitespace)),
        $._all_comment,
        $.extension,
        $._datum),

    _skip: $ => choice(token(repeat1(LEAF.whitespace)), $._all_comment),

    dot: _ => ".",

    // comment {{{

    _all_comment: $ =>
      choice(
        $.comment,
        $.sexp_comment,
        $.block_comment),

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
        $.number,
        $.symbol,

        $.keyword,
        $.regex,
        $.box,
        $.graph,
        $.structure,
        $.hash,
        $._abbrev,

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
          _number_base(2),
          _number_base(8),
          _number_base(10),
          _number_base(16))),

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
      PREC.last(
        PREC.right(
          token(
            choice(
              /#[cC][iIsS]/, // read-case-sensitive parameter
              seq(
                LEAF.symbol_start,
                repeat(LEAF.symbol_remain)))))),

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

    _abbrev: $ =>
      choice(
        $.quote,
        $.quasiquote,
        $.syntax,
        $.quasisyntax,
        $.unquote,
        $.unquote_splicing,
        $.unsyntax,
        $.unsyntax_splicing),

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

function _number_base(n) {
  const number = _ =>
    seq(
      choice(
        seq(radix(), optional(exactness())),
        seq(optional(exactness()), radix()),
      ),
      choice(
        // Inexact number pattern already contains exact pattern.
        // So we don't need to parse exact number explicitly
        inexact()));

  const sign = _ => /[+-]/;

  const digit = _ => {
    return {
      2: /[01]/,
      8: /[0-7]/,
      10: /[0-9]/,
      16: /[0-9a-fA-F]/,
    }[n];
  };

  const radix = _ => {
    return {
      2: /#[bB]/,
      8: /#[oO]/,
      10: optional(/#[dD]/),
      16: /#[xX]/,
    }[n];
  };

  const exactness = _ =>
    choice("#e", "#E", "#i", "#I");

  const exp_mark = _ => /[sldeftSLDEFT]/;

  const unsigned_integer = _ =>
    repeat1(digit());

  const inexact = _ =>
    choice(
      inexact_real(),
      inexact_complex());

  const inexact_real = _ =>
    choice(
      seq(
        optional(sign()),
        inexact_normal()),
      seq(
        sign(),
        inexact_special()));

  const inexact_complex = _ =>
    choice(
      seq(
        optional(inexact_real()),
        sign(),
        inexact_unsigned(),
        /[iI]/),
      seq(
        inexact_real(),
        "@",
        inexact_real()));

  const inexact_unsigned = _ =>
    choice(
      inexact_normal(),
      inexact_special());

  const inexact_normal = _ =>
    seq(
      inexact_simple(),
      optional(
        seq(
          exp_mark(),
          optional(sign()),
          unsigned_integer())));

  const inexact_special = _ =>
    choice(
      /[iI][nN][fF]\.0/,
      /[nN][aA][nN]\.0/,
      /[iI][nN][fF]\.[fFtT]/,
      /[nN][aA][nN]\.[fFtT]/,
    );

  const inexact_simple = _ =>
    choice(
      seq(
        digits(),
        optional("."),
        repeat("#")),
      seq(
        optional(unsigned_integer()),
        ".",
        digits()),
      seq(
        digits(),
        "/",
        digits()));

  const digits = _ =>
    seq(
      unsigned_integer(),
      repeat("#"));

  return token(number());
}

// number }}}
