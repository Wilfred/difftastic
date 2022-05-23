const PREC = {
  first: $ => prec(100, $),
  last: $ => prec(-1, $),
  left: prec.left,
  right: prec.right,
};

module.exports = grammar({
  name: 'racket',

  extras: _ => [],

  externals: _ => [
    // TODO: $.here_string,
  ],

  rules: {
    program: $ => repeat($._token),

    _token: $ =>
      choice(
        $._whitespace,
        $.comment,
        $._datum),

    _skip: $ => choice($._whitespace, $.comment),
    _whitespace: _ => /[\r\n\t\f\v ]|\p{Zs}|\p{Zl}|\p{Zp}|\u{FEFF}/,
    _newline: _ => /[\r\n]|\u{85}|\u{2028}|\u{2029}/,

    // comment {{{

    comment: $ =>
      choice(
        seq(/;.*/),
        $._block_comment,
        seq("#;",
          repeat($._skip),
          $._datum),
        seq(
          choice("#! ", "#!/"),
          repeat(seq(/.*/, "\\", $._newline)),
          /.*/)),

    _block_comment: $ =>
      seq("#|",
        repeat(
          choice(
            PREC.first($._block_comment),
            /./)),
        PREC.first("|#")),

    // comment }}}

    _datum: $ => choice($._simple_datum, $._compound_datum),

    _simple_datum: $ =>
      choice(
        $.boolean,
        $.string,
        $.byte_string,
        $.number),

    boolean: _ => choice("#true", "#t", "#T", "#false", "#f", "#F"),

    // string {{{

    string: $ => $._real_string,

    byte_string: $ =>
      seq("#", $._real_string),

    _real_string: $ =>
      seq(
        '"',
        repeat(
          choice(
            $.escape_sequence,
            /[^"\\]/)),
        '"'),

    escape_sequence: $ =>
      choice(
        "\\a", "\\b", "\\t", "\\n", "\\v", "\\f", "\\r", "\\e",
        '\\"', "\\'", "\\\\",
        seq("\\", /[0-7]{1,3}/),
        seq("\\x", /[0-9a-fA-F]{1,2}/),
        seq("\\u", /[0-9a-fA-F]{1,4}/),
        seq("\\u", /[0-9a-fA-F]{4,4}/),
        seq("\\U", /[0-9a-fA-F]{1,8}/),
        seq("\\", $._newline)),

    // string }}}

    number: _ =>
      choice(
        _number_base(2),
        _number_base(8),
        _number_base(10),
        _number_base(16)),

    _compound_datum: _ => "()",
  }
})

// number {{{

function _number_base(n) {
  number = _ =>
    seq(
      choice(
        seq(_n_radix(), optional(_n_exactness())),
        seq(optional(_n_exactness()), _n_radix()),
      ),
      choice(
        // Inexact number pattern already contains exact pattern.
        // So we don't need to parse exact number explicitly
        _n_inexact()));

  _n_sign = _ => /[+-]/;

  _n_digit = _ => {
    return {
      2: /[01]/,
      8: /[0-7]/,
      10: /[0-9]/,
      16: /[0-9a-fA-F]/,
    }[n];
  };

  _n_radix = _ => {
    return {
      2: /#[bB]/,
      8: /#[oO]/,
      10: optional(/#[dD]/),
      16: /#[xX]/,
    }[n];
  };

  _n_exactness = _ =>
    choice("#e", "#E", "#i", "#I");

  _n_exp_mark = _ => /[sldeftSLDEFT]/;

  _n_unsigned_integer = _ =>
    repeat1(_n_digit());

  _n_inexact = _ =>
    choice(
      _n_inexact_real(),
      _n_inexact_complex());

  _n_inexact_real = _ =>
    choice(
      seq(
        optional(_n_sign()),
        _n_inexact_normal()),
      seq(
        _n_sign(),
        _n_inexact_special()));

  _n_inexact_complex = _ =>
    choice(
      seq(
        optional(_n_inexact_real()),
        _n_sign(),
        _n_inexact_unsigned(),
        /[iI]/),
      seq(
        _n_inexact_real(),
        "@",
        _n_inexact_real()));

  _n_inexact_unsigned = _ =>
    choice(
      _n_inexact_normal(),
      _n_inexact_special());

  _n_inexact_normal = _ =>
    seq(
      _n_inexact_simple(),
      optional(
        seq(
          _n_exp_mark(),
          optional(_n_sign()),
          _n_unsigned_integer())));

  _n_inexact_special = _ =>
    choice(
      /[iI][nN][fF]\.0/,
      /[nN][aA][nN]\.0/,
      /[iI][nN][fF]\.[fFtT]/,
      /[nN][aA][nN]\.[fFtT]/,
    );

  _n_inexact_simple = _ =>
    choice(
      seq(
        _n_digits(),
        optional("."),
        repeat("#")),
      seq(
        optional(_n_unsigned_integer()),
        ".",
        _n_digits()),
      seq(
        _n_digits(),
        "/",
        _n_digits()));

  _n_digits = _ =>
    seq(
      _n_unsigned_integer(),
      repeat("#"));

  return token(number());
}

// number }}}
