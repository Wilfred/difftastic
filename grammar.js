function ws($) {
  return repeat(choice($._space_expr, $.comment));
}
function ws1($) {
  return repeat1(choice($._space_expr, $.comment));
}
module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  conflicts: $ => [
    [$._code],
    [$.let],
    [$.import],
    // [$.group],
    [$.tagged, $._expr],
    [$._item, $._expr],
  ],
  // word: $ => $._token_else,
  rules: {
    source_file: $ => repeat($._markup),

    _token_dlim: $ => /[ ]*(\n|;)/,
    break: $ => /\n([ \t]*\n)+/,
    escape: $ => /\\[^\nu]|\\u\{[0-9a-fA-F]*\}/,
    comment: $ => choice(
      seq('//', /[^\n]*\n?/),
      // comments can be nested
      seq('/*', repeat(choice(/[^\*\/]|\*[^\/]|\/[^\/\*]/, $.comment)), '*/'),
    ),
    _space_expr: $ => /[ \n]+/,
    _space_text: $ => /[ \n]+/,
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
      $._space_text,
      $.comment,
    ),

    text: $ => prec.right(repeat1(choice(
      $._anti_else,
      $._char_any,
      $.escape,
    ))),

    strong: $ => prec.left(seq('*', repeat($._markup), '*')),
    emph: $ => prec.left(seq('_', repeat($._markup), '_')),

    _code: $ => seq($._token_numsign, choice($._item, $._stmt), optional($._token_dlim)),

    _item: $ => prec(1, choice(
      $.auto,
      $.none,
      $.builtin,
      $.ident,
      $.number,
      $.string,
      $.branch,
      $.field,
      $.block,
      $.group,
      $.call,
      $.content,
    )),

    _stmt: $ => choice(
      $.let,
      $.set,
      $.import,
    ),

    _expr: $ => choice(
      $.auto,
      $.none,
      $.builtin,
      $.ident,
      $.number,
      $.string,
      $.branch,
      $.field,
      $.block,
      $.group,
      $.add,
      $.mul,
      $.call,
      $.content,
      $.let,
      $.set,
      $.import,
    ),

    _pattern: $ => choice(
      $.ident,
      $.group,
    ),

    ident: $ => /[a-z]+/,
    unit: $ => choice('cm', 'mm', 'em', '%', 'fr', 'pt', 'in'),
    number: $ => seq(/[0-9]+(\.[0-9]+)?/, optional($.unit)),
    string: $ => seq('"', repeat(choice(/[^\"\\]/, $.escape)), '"'),
    add: $ => prec.left(2, seq($._expr, $._token_plus, ws($), $._expr)),
    mul: $ => prec.left(3, seq($._expr, $._token_star, ws($), $._expr)),
    call: $ => seq(field('item', $._item), choice($.content, $.group)),
    field: $ => seq($._item, '.', field('field', $.ident)),
    tagged: $ => seq(field('field', $.ident), ws($), ':', ws($), $._expr),
    content: $ => seq('[', repeat($._markup), ']'),
    // group: $ => seq(
    //   '(',
    //   repeat(choice(ws1($), $._expr, $.tagged, ',')),
    //   ')'
    // ),
    group: $ => seq(
      '(',
      repeat(seq(ws($), choice($.tagged, $._expr), ws($), ',')),
      ws($),
      optional(seq(choice($.tagged, $._expr), ws($))),
      ')'
    ),
    block: $ => seq(
      '{',
      repeat(choice(
        /[ \t\n;]+/,
        $._expr,
      )),
      '}'
    ),
    branch: $ => prec.left(2, seq(
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
    set: $ => prec(0, seq(
      'set',
      ws($),
      $.call,
    )),
    import: $ => prec(0, seq(
      'import',
      ws($),
      $.string,
      optional(seq(
        ws($),
        ':',
        repeat(seq(ws($), $.ident, ws($), ',')),
        optional(seq(ws($), $.ident)),
      )),
    )),
    auto: $ => 'auto',
    none: $ => 'none',
    builtin: $ => choice(
      'align',
      'black',
      'blue',
      'bottom',
      'box',
      'center',
      'cmyk',
      'emph',
      'gray',
      'green',
      'grid',
      'h',
      'heading',
      'horizon',
      'image',
      'left',
      'link',
      'list',
      'luma',
      'max',
      'min',
      'navy',
      'par',
      'parbreak',
      'purple',
      'rect',
      'red',
      'regex',
      'rgb',
      'right',
      'scale',
      'strong',
      'text',
      'top',
      'v',
      'white',
    ),
  },
});

