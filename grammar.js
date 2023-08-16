module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  inline: $ => [],
  conflicts: $ => [],
  rules: {
    source_file: $ => optional($._content),
    _content: $ => repeat1(choice(
      $._code,
      $.text,
      $._space_la,
    )),

    _token_dot: $ => '.',

    // this rule matches exactly 1 symbol
    _text_any: $ => choice(

      // text matches only non-markup simbols and exclude spaces
      /[^# \t\n\]]/,

      $._token_dot,
    ),

    // next to a space, no restriction for text
    text: $ => prec.right(repeat1($._text_any)),

    // contains 0 line
    _space_l0: $ => /[ \t]+/,
    // contains exactly 1 line
    _space_l1: $ => /\n/,
    // contains any combination of spaces and lines
    // TODO: check with `prec.right`
    _space_la: $ => prec.right(repeat1(choice($._space_l0, $._space_l1))),

    _code: $ => seq('#', $._expr),

    _expr: $ => choice(
      $.ident,
    ),

    ident: $ => /[a-z]+/,
  },
});

