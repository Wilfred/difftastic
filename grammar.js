// function join(elem, sep) {
//   return seq(elem, repeat(seq(sep, elem)));
// }
function zebra(zeb, ra) {
  return seq(optional(ra), (repeat(seq(zeb, ra))), optional(zeb));
}
// function list(elem, sep) {
//   return seq(
//       repeat(seq(elem, sep)),
//       optional(elem),
//   );
// }
module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  conflicts: $ => [
    [$._4, $.mul],
    [$._5, $.add],
    [$._7, $.add],
    [$.field, $.add],
    [$.add, $.mul],
    [$.add, $.let],
    [$.branch, $.condition],
  ],
  rules: {
    source_file: $ => optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_line,
      $._normal_tail_any_text,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    )),

    break: $ => repeat1($._line),

    _any_normal: $ => choice(
      $._normal_tail_any_line,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    ),
    _any_strong: $ => choice(
      $._strong_tail_any_line,
      $._strong_tail_any_escape,
      $._strong_tail_any_emph,
    ),
    _any_emph: $ => choice(
      $._emph_tail_any_line,
      $._emph_tail_any_escape,
      $._emph_tail_any_strong,
    ),
    _any_normal_space: $ => choice(
      $._normal_tail_any_space,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    ),
    _any_strong_space: $ => choice(
      $._strong_tail_any_space,
      $._strong_tail_any_escape,
      $._strong_tail_any_emph,
    ),
    _any_emph_space: $ => choice(
      $._emph_tail_any_space,
      $._emph_tail_any_escape,
      $._emph_tail_any_strong,
    ),

    // TAIL ANY
    _normal_tail_any_space: $ => seq($._space, optional(choice(
      $._normal_tail_any_text,
      $._any_normal,
   ))),
    _normal_tail_any_text: $ => seq($._text_next_space, optional(choice(
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
    _strong_tail_any_text: $ => seq($._text_next_space, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_any_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
   ))),
    _emph_tail_any_text: $ => seq($._text_next_space, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL LINE
    _normal_tail_any_line: $ => seq($._line, optional(choice(
      $._normal_tail_any_text,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      seq($.break, choice(
        $._normal_tail_any_space,
        $._normal_tail_any_text,
        $._normal_tail_any_escape,
        $._normal_tail_any_strong,
        $._normal_tail_any_emph,
      )),
    ))),
    _strong_tail_any_line: $ => seq($._line, optional(choice(
      $._strong_tail_any_text,
      $._strong_tail_any_escape,
      $._strong_tail_any_emph,
    ))),
    _emph_tail_any_line: $ => seq($._line, optional(choice(
      $._emph_tail_any_text,
      $._emph_tail_any_escape,
      $._emph_tail_any_strong,
    ))),

    // TAIL ITEM
    _normal_tail_item_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_item_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_item_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL IDENT
    _normal_tail_ident_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_ident_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_ident_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL CALL
    _normal_tail_call_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_call_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_call_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL GROUP
    _normal_tail_group_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_group_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_group_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL CONTENT
    _normal_tail_content_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_content_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_content_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL BLOCK
    _normal_tail_block_space: $ => seq($._space, optional(choice(
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _normal_tail_block_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_block_space: $ => seq($._space, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _strong_tail_block_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_block_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _emph_tail_block_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL BRANCH
    _normal_tail_branch_space: $ => seq($._space, optional(choice(
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _normal_tail_branch_text: $ => seq($._text_next_item, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_branch_space: $ => seq($._space, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _strong_tail_branch_text: $ => seq($._text_next_item, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_branch_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _emph_tail_branch_text: $ => seq($._text_next_item, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL CONDITION
    _normal_tail_condition_space: $ => seq($._space, optional(choice(
      $._normal_tail_condition_text,
      $._any_normal,
    ))),
    _normal_tail_condition_text: $ => seq($._text_next_condition, optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_condition_space: $ => seq($._space, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _strong_tail_condition_text: $ => seq($._text_next_condition, optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_condition_space: $ => seq($._space, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _emph_tail_condition_text: $ => seq($._text_next_condition, optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL STATEMENT
    // TODO: check paragraph break
    // _normal_tail_let_line: $ => seq($._line, optional(choice(
    //   $._normal_tail_any_text,
    //   $._normal_tail_any_space,
    // ))),

    // STRONG
    strong: $ => seq('*', choice(
      $._strong_tail_any_text,
      $._strong_tail_any_space,
      $._strong_tail_any_line,
      $._strong_tail_any_escape,
    ), '*'),
    _normal_tail_any_strong: $ => seq($.strong, optional(choice(
      $._normal_tail_any_text,
      $._normal_tail_any_space,
      $._normal_tail_any_line,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
    ))),
    _emph_tail_any_strong: $ => seq($.strong, optional(choice(
      $._emph_tail_any_text,
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // EMPH
    emph: $ => seq('_', choice(
      $._emph_tail_any_text,
      $._emph_tail_any_space,
      $._emph_tail_any_line,
      $._emph_tail_any_escape,
    ), '_'),
    _normal_tail_any_emph: $ => seq($.emph, optional(choice(
      $._normal_tail_any_text,
      $._normal_tail_any_space,
      $._normal_tail_any_line,
      $._normal_tail_any_escape,
      $._normal_tail_any_strong,
    ))),
    _strong_tail_any_emph: $ => seq($.emph, optional(choice(
      $._strong_tail_any_text,
      $._strong_tail_any_space,
      $._any_strong,
    ))),

    // ESCAPE
    _normal_tail_any_escape: $ => seq('#', choice(
      seq($._item, choice(
        $._normal_tail_item_text,
        $._any_normal_space,
      )),
      seq($.group, choice(
        $._normal_tail_group_text,
        $._any_normal_space,
      )),
      seq($.content, choice(
        $._normal_tail_content_text,
        $._any_normal_space,
      )),
      seq($.block, choice(
        $._normal_tail_block_text,
        $._any_normal_space,
      )),
      seq($.call, choice(
        $._normal_tail_call_text,
        $._any_normal_space,
      )),
      seq($.branch, choice(
        $._normal_tail_branch_text,
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
    _strong_tail_any_escape: $ => seq('#', choice(
      seq($._item, choice(
        $._strong_tail_item_text,
        $._any_strong_space,
      )),
      seq($.group, choice(
        $._strong_tail_group_text,
        $._any_strong_space,
      )),
      seq($.content, choice(
        $._strong_tail_content_text,
        $._any_strong_space,
      )),
      seq($.block, choice(
        $._strong_tail_block_text,
        $._any_strong_space,
      )),
      seq($.call, choice(
        $._strong_tail_call_text,
        $._any_strong_space,
      )),
      seq($.branch, choice(
        $._strong_tail_branch_text,
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
    _emph_tail_any_escape: $ => seq('#', choice(
      seq($._item, choice(
        $._emph_tail_item_text,
        $._any_emph_space,
      )),
      seq($.group, choice(
        $._emph_tail_group_text,
        $._any_emph_space,
      )),
      seq($.content, choice(
        $._emph_tail_content_text,
        $._any_emph_space,
      )),
      seq($.block, choice(
        $._emph_tail_block_text,
        $._any_emph_space,
      )),
      seq($.call, choice(
        $._emph_tail_call_text,
        $._any_emph_space,
      )),
      seq($.branch, choice(
        $._emph_tail_branch_text,
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


    text: $ => /.+/,
    _text_next_space: $ => alias(/[^# \t\n\]\*_]+/, $.text),
    _text_next_item: $ => alias(/[^# \t\n\[\*\]\(_;][^# \t\n\]\*_]*/, $.text),
    // _text_next_ident: $ => alias(/[^# \t\n\[\*\]\(_][^# \t\n\]\*_]*/, $.text),
    // _text_next_call: $ => alias(/[^# \t\n\(\[\*\]_][^# \t\n\]\*_]*/, $.text),
    // _text_next_group: $ => alias(/[^# \t\n\(\[\*\]_][^# \t\n\]\*_]*/, $.text),
    // _text_next_content: $ => alias(/[^# \t\n\[\*\(\]_][^# \t\n\]\*_]*/, $.text),
    // _text_next_block: $ => alias(/[^# \t\n\(\[\*\]_][^# \t\n\]\*_]*/, $.text),
    // _text_next_branch: $ => alias(/[^# \t\n\(\[\*\]_][^# \t\n\]\*_]*/, $.text),
    _text_next_condition: $ => alias(/(else[^ \t\n\*\+\!\(\{;]|els[^e]|el[^s]|e[^l]|[^e# \t\n\(\[\*\]])[^# \t\n\]\*_]*/, $.text),
    _space: $ => /[ \t]+/,
    _line: $ => '\n',

    _item: $ => choice(
      $.ident,
      $.int,
      $.float,
    ),

    // PRECEDENCES
    _0: $ => choice(
      $.ident,
      $.int,
      $.float,
      $.group,
      $.content,
    ),
    _1: $ => choice(
      $._0,
      $.branch,
      $.condition,
    ),
    _2: $ => choice(
      $._1,
      $.call,
    ),
    _3: $ => choice(
      $._2,
      $.mul,
    ),
    _4: $ => choice(
      $._3,
      $.add,
    ),
    _5: $ => choice(
      $._4,
      $.field,
    ),
    _6: $ => choice(
      $._5,
      $._list,
    ),
    _7: $ => choice(
      $._4,
      $.let,
    ),
    // _8: $ => choice(
    //   $._7,
    //   $.sep,
    // ),

    // EXPRETIONS
    group: $ => seq(
      '(',
      optional($._space),
      optional(seq($._6, optional($._space))),
      ')'
    ),
    block: $ => seq(
      '{',
      zebra(seq(optional($._space), $._7, optional($._space)), repeat1(choice($._line, ';'))),
      '}'
    ),
    content: $ => seq(
      '[',
      optional(choice(
        $._normal_tail_any_space,
        $._normal_tail_any_text,
        $._normal_tail_any_escape,
        $._normal_tail_any_strong,
        $._normal_tail_any_emph,
      )),
      ']',
    ),
    ident: $ => /[a-zA-Z]+/,
    unit: $ => choice('cm', 'mm', 'em', '%', 'fr', 'pt'),
    int: $ => seq(/[0-9]+/, optional($.unit)),
    float: $ => seq(/[0-9]+\.[0-9]+/, optional($.unit)),
    _list: $ => seq($._6, optional($._space), ',', optional($._space), $._5),
    field: $ => seq(field('field', $.ident), ':', optional($._space), $._4),
    add: $ => seq($._4, optional($._space), '+', optional($._space), $._3),
    mul: $ => seq($._3, optional($._space), '*', optional($._space), $._2),
    call: $ => seq(field('item', $._2), choice($.group, $.content)),
    branch: $ => seq(
      'if',
      optional($._space),
      field('test', $._4),
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
      field('test', $._4),
      choice(
        seq($._space, choice($.block, $.content)),
        $.block,
      ),
    ),
    _terminated: $ => choice(
      $.let,
      $.int,
      $.float,
      $.ident,
      $.call,
      $.branch,
      $.condition,
      $.group,
      $.content,
      $.block
    ),
    let: $ => seq(
      'let',
      optional($._space),
      field('pattern', $._2),
      optional($._space),
      '=',
      optional($._space),
      $._4,
      optional($._space),
    ),
    // sep: $ => seq($._8, optional($._space), ';', optional($._space), $._7),
  }
});

