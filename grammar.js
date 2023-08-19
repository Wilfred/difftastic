function ws($) {
  return optional($._space_la);
}
module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  conflicts: $ => [
    [$._code],
    [$.let],
    [$.tagged, $._expr],
    [$._item, $._expr],
  ],
  // word: $ => $._token_else,
  rules: {
    source_file: $ => repeat($._markup),

    _token_dlim: $ => /[ ]*(\n|;)/,
    break: $ => /\n([ \t]*\n)+/,
    _space_la: $ => /[ \n]+/,
    _anti_else: $ => /[ \n]*else[^ \t\{\[]/,

    _token_numsign: $ => '#',
    _token_else: $ => /[ \n]*else/,
    _token_plus: $ => /[ \n]*\+/,
    _token_star: $ => /[ \n]*\*/,
    _token_assign: $ => /[ \n]*\*/,

    _char_any: $ => /./,

    _markup: $ => choice(
      $._code,
      $.text,
      $.break,
      $.strong,
      $.emph,
      $._space_la,
    ),

    text: $ => prec.right(repeat1(choice(
      $._anti_else,
      $._char_any,
    ))),

    strong: $ => prec.left(seq('*', repeat($._markup), '*')),
    emph: $ => prec.left(seq('_', repeat($._markup), '_')),

    _code: $ => seq($._token_numsign, choice($._item, $._stmt), optional($._token_dlim)),

    _item: $ => choice(
      $.ident,
      $.branch,
      $.block,
      $.group,
      $.call,
      $.content,
    ),

    _stmt: $ => choice(
      $.let,
    ),

    _expr: $ => choice(
      $.ident,
      $.branch,
      $.block,
      $.group,
      $.add,
      $.mul,
      $.call,
      $.content,
      $.let,
    ),

    _pattern: $ => choice(
      $.ident,
      $.group,
    ),

    ident: $ => /[a-z]+/,
    add: $ => prec.left(1, seq($._expr, $._token_plus, ws($), $._expr)),
    mul: $ => prec.left(2, seq($._expr, $._token_star, ws($), $._expr)),
    call: $ => seq(field('item', $._item), choice($.content, $.group)),
    tagged: $ => seq(field('field', $.ident), ws($), ':', ws($), $._expr),
    content: $ => seq('[', repeat($._markup), ']'),
    group: $ => seq(
      '(',
      repeat(seq(ws($), choice($.tagged, $._expr), ws($), ',')),
      ws($),
      optional(seq(choice($.tagged, $._expr), ws($))),
      ')'
    ),
    block: $ => seq(
      '{',
      repeat(seq(
        optional(seq(ws($), $._expr)),
        choice($._token_dlim, $._space_la),
      )),
      optional($._expr),
      '}'
    ),
    branch: $ => prec.left(1, seq(
      'if',
      ws($), 
      field('test', $._expr), 
      ws($),
      choice($.block, $.content),
      optional(seq($._token_else,
        ws($),
        choice($.block, $.content)
      )),
    )),
    let: $ => prec(0, seq(
      'let',
      ws($),
      field('pattern', $._pattern),
      optional(seq(
        ws($),
        '=',
        ws($),
        field('value', $._expr)
      ))
    )),
  },
});

