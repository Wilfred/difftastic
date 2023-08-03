function zebra(zeb, ra) {
  return seq(optional(ra), (repeat(seq(zeb, ra))), optional(zeb));
}
module.exports = grammar({
  name: 'typst',
  extras: $ => [$.comment],
  conflicts: $ => [
    [$._5, $.mul],
    [$._5, $.mul, $.div],
    [$._instr, $.add],
    [$._instr, $.sub],
    [$._instr, $.add, $.sub],
    [$._instr, $.add, $.mul],
    [$.add, $.mul],
    [$.sub, $.mul, $.div],
    [$.sub, $.mul],
    [$.add, $.mul, $.div],
    [$.add, $.let],
    [$.add, $.sub, $.let],
    [$.add, $.sub, $.cmp, $._6],
    [$.add, $.sub, $.cmp],
    [$.add, $.sub, $.in],
    [$.branch, $.condition],
    [$._normal_tail_any_line],
    [$.let],
    [$.let, $.in],
    [$.import],
    [$._instr, $.in],
    [$._7, $.in],
    [$.and, $.in],
    [$.and, $.or],
    [$._8, $.and],
    [$.not, $.and],
    [$._expr, $.or],
    [$.assign, $.or],
    [$._expr, $.assign],
    [$._9, $.or],
  ],
  rules: {
    source_file: $ => optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_text,
      $._any_normal,
    )),

    comment: $ => choice(
      seq('//', /[^\n]*\n?/),
      seq('/*', /([^\*]|\*[^\/])*/, '*/'),
    ),
    escape: $ => /\\./,
    text: $ => /.+/,
    _text_any: $ => choice(
      /[^# \t\n\]\*_\\]/,
      $.escape,
    ),
    _text_next_space: $ => repeat1($._text_any),
    _text_next_item: $ => seq(/(\.[^a-zA-Z])|[^\.# \t\n\[\*\]\(_;]/, repeat($._text_any)),
    _text_next_condition: $ => seq(/(\.[^a-zA-Z]|else[^ \t\n\*\+\!\(\{;]|els[^e]|el[^s]|e[^l]|[^e# \t\n\(\[\*\]\.])/, repeat($._text_any)),
    // _space: $ => /[ \t]+/,
    _space: $ => repeat1(/[ \t]/),
    _line: $ => '\n',
    break: $ => repeat1($._line),

    _any_normal: $ => choice(
      $._normal_tail_any_line,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    ),
    _any_strong: $ => choice(
      $._strong_tail_any_line,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
    ),
    _any_emph: $ => choice(
      $._emph_tail_any_line,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
    ),
    _any_normal_space: $ => choice(
      $._normal_tail_any_space,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    ),
    _any_strong_space: $ => choice(
      $._strong_tail_any_space,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
    ),
    _any_emph_space: $ => choice(
      $._emph_tail_any_space,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
    ),

    // TAIL ANY
    _normal_tail_any_space: $ => seq($._space, optional(choice(
      $._normal_tail_any_text,
      $._any_normal,
   ))),
    _normal_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _normal_tail_any_strong: $ => seq($.strong, optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _strong_tail_any_space: $ => seq($._space, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
   ))),
    _strong_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_any_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
   ))),
    _emph_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL LINE
    _normal_tail_any_line: $ => seq($._line, repeat($._space), optional(choice(
      $._normal_tail_any_text,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      seq($.break, optional(choice(
        $._normal_tail_any_text,
        $._any_normal_space,
      ))),
    ))),
    _strong_tail_any_line: $ => seq($._line, optional(choice(
      $._strong_tail_any_text,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
    ))),
    _emph_tail_any_line: $ => seq($._line, optional(choice(
      $._emph_tail_any_text,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
    ))),

    // TAIL ITEM
    _normal_tail_item_text: $ => seq(alias($._text_next_item, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_item_text: $ => seq(alias($._text_next_item, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_item_text: $ => seq(alias($._text_next_item, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL CONDITION
    _normal_tail_condition_space: $ => seq($._space, optional(choice(
      $._normal_tail_condition_text,
      $._any_normal,
    ))),
    _normal_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_condition_space: $ => seq($._space, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _strong_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_condition_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _emph_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // STRONG
    strong: $ => seq('*', choice(
      $._strong_tail_any_space,
      $._strong_tail_any_text,
      $._any_strong,
    ), '*'),
    _normal_tail_any_strong: $ => seq($.strong, optional(choice(
      $._normal_tail_any_text,
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _emph_tail_any_strong: $ => seq($.strong, optional(choice(
      $._emph_tail_any_text,
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // EMPH
    emph: $ => seq('_', choice(
      $._emph_tail_any_space,
      $._emph_tail_any_text,
      $._any_emph,
    ), '_'),
    _normal_tail_any_emph: $ => seq($.emph, optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _strong_tail_any_emph: $ => seq($.emph, optional(choice(
      $._strong_tail_any_text,
      $._strong_tail_any_space,
      $._any_strong,
    ))),

    // CODE
    _normal_tail_any_code: $ => seq('#', choice(
      seq($._item, choice(
        $._normal_tail_item_text,
        $._any_normal_space,
      )),
      seq($.condition, choice(
        $._normal_tail_condition_text,
        $._any_normal_space,
      )),
      seq($._terminated, optional(choice(
        $._normal_tail_any_line,
        seq(';', optional(choice(
          $._normal_tail_any_text,
          $._normal_tail_any_space,
          $._any_normal,
        ))),
      ))),
    )),
    _strong_tail_any_code: $ => seq('#', choice(
      seq($._item, choice(
        $._strong_tail_item_text,
        $._any_strong_space,
      )),
      seq($.condition, choice(
        $._strong_tail_condition_text,
        $._any_strong_space,
      )),
      seq($._terminated, optional(choice(
        $._strong_tail_any_line,
        seq(';', optional(choice(
          $._strong_tail_any_text,
          $._strong_tail_any_space,
          $._any_strong,
        ))),
      ))),
    )),
    _emph_tail_any_code: $ => seq('#', choice(
      seq($._item, choice(
        $._emph_tail_item_text,
        $._any_emph_space,
      )),
      seq($.condition, choice(
        $._emph_tail_condition_text,
        $._any_emph_space,
      )),
      seq($._terminated, optional(choice(
        $._emph_tail_any_line,
        seq(';', optional(choice(
          $._emph_tail_any_text,
          $._emph_tail_any_space,
          $._any_emph,
        ))),
      ))),
    )),

    _terminated: $ => choice(
      $.let,
      $.set,
      $.import,
      $.int,
      $.float,
      $.string,
      $.ident,
      $.field,
      $.call,
      $.branch,
      $.condition,
      $.group,
      $.content,
      $.block
    ),

    _item: $ => choice(
      $.ident,
      $.int,
      $.float,
      $.string,
      $.field,
      $.group,
      $.content,
      $.branch,
      $.call,
    ),

    // PRECEDENCES
    _0: $ => choice(
      $.ident,
      $.int,
      $.float,
      $.string,
      $.group,
      $.content,
    ),
    _1: $ => choice(
      $._0,
      $.branch,
      $.condition,
      $.field,
    ),
    _2: $ => choice(
      $._1,
      $.call,
    ),
    _3: $ => choice(
      $._2,
      $.positif,
      $.negatif,
    ),
    _4: $ => choice(
      $._3,
      $.mul,
      $.div,
    ),
    _5: $ => choice(
      $._4,
      $.add,
      $.sub,
    ),
    _6: $ => choice(
      $._5,
      $.cmp,
      $.in,
    ),
    _7: $ => choice(
      $._6,
      $.not,
      $.and,
    ),
    _8: $ => choice(
      $._7,
      $.or,
    ),
    _9: $ => choice(
      $._8,
      $.assign,
    ),
    _expr: $ => $._9,
    _instr: $ => choice(
      $._expr,
      $.let,
      $.set,
      $.import,
    ),

    // for optimization when there is no ambiguity with $._space or $._line
    // it replaces `zebra(repeat1($._line), $._space)`
    _wsl: $ => /[ \t\n]+/,

    // EXPRETIONS
    _list_elem: $ => choice(
      $._expr,
      $.tagged,
    ),
    group: $ => seq(
      '(',
      seq(
        repeat(seq(optional($._wsl), $._list_elem, optional($._wsl), ',')),
        optional($._wsl),
        optional(seq($._list_elem, optional($._wsl))),
      ),
      ')'
    ),
    block: $ => seq(
      '{',
      zebra(seq(optional($._space), $._instr, optional($._space)), repeat1(choice($._line, ';'))),
      '}'
    ),
    content: $ => seq(
      '[',
      optional(choice(
        $._normal_tail_any_space,
        $._normal_tail_any_text,
        $._any_normal,
      )),
      ']',
    ),
    ident: $ => /[a-zA-Z]+/,
    unit: $ => choice('cm', 'mm', 'em', '%', 'fr', 'pt'),
    int: $ => seq(/[0-9]+/, optional($.unit)),
    float: $ => seq(/[0-9]+\.[0-9]+/, optional($.unit)),
    string: $ => seq('"', repeat(choice(/[^\"\\]/, $.escape)), '"'),
    tagged: $ => seq(field('field', $.ident), ':', optional($._space), $._expr),
    assign: $ => seq($._9, optional($._space), choice('=', '+=', '-=', '*=', '/='), optional($._space), $._8),
    not: $ => seq('not', optional($._space), $._7),
    and: $ => seq($._7, optional($._space), 'and', optional($._space), $._6),
    or: $ => seq($._8, optional($._space), 'or', optional($._space), $._7),
    in: $ => seq($._6, optional($._space), optional(seq('not', $._space)), 'in', optional($._space), $._5),
    cmp: $ => seq($._5, optional($._space), choice('<', '<=', '==', '>=', '>', '!='), optional($._space), $._5),
    add: $ => seq($._5, optional($._space), '+', optional($._space), $._4),
    sub: $ => seq($._5, optional($._space), '-', optional($._space), $._4),
    mul: $ => seq($._4, optional($._space), '*', optional($._space), $._3),
    div: $ => seq($._4, optional($._space), '/', optional($._space), $._3),
    positif: $ => seq('+', optional($._space), $._3),
    negatif: $ => seq('-', optional($._space), $._3),
    call: $ => seq(field('item', $._2), choice($.group, $.content)),
    field: $ => seq($._1, '.', field('field', $.ident)),
    branch: $ => seq(
      'if',
      optional($._space),
      field('test', $._expr),
      choice(
        seq($._space, choice($.block, $.content)),
        $.block,
      ),
      zebra($._space, repeat1($._line)),
      'else',
      optional($._space),
      choice($.block, $.content),
    ),
    condition: $ => seq(
      'if',
      optional($._space),
      field('test', $._expr),
      choice(
        seq($._space, choice($.block, $.content)),
        $.block,
      ),
    ),
    let: $ => seq(
      'let',
      optional($._space),
      field('pattern', $._2),
      optional($._space),
      '=',
      optional($._space),
      field('value', $._expr),
      optional($._space),
    ),
    set: $ => seq(
      'set',
      optional($._space),
      $.call,
    ),
    import: $ => seq(
      choice('import', 'include'),
      optional($._space),
      $.string,
      optional($._space),
      optional(seq(
        ':',
        seq(
          repeat(seq(optional($._space), $.ident, optional($._space), ',')),
          optional(seq(optional($._space), $.ident))
        ),
      )),
    ),
  }
});

