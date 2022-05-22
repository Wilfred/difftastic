const PREC = {
  first: $ => prec(100, $),
};

module.exports = grammar({
  name: 'racket',

  extras: _ => [],

  rules: {
    program: $ => repeat(choice($._datum, $._skip)),

    _datum: $ => choice($._simple_datum, $._compound_datum),

    _skip: $ => choice($._whitespace, $.comment),
    _whitespace: _ => /[\r\n\t\f\v ]|\p{Zs}|\p{Zl}|\p{Zp}|\u{FEFF}/,

    _newline: _ => /[\r\n]|\u{85}|\u{2028}|\u{2029}/,

    comment: $ =>
      choice(
        seq(/;.*/),
        $._block_comment,
        seq("#;", repeat($._skip), $._datum),
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

    _simple_datum: $ => "1",

    _compound_datum: $ => "()",
  }
})
