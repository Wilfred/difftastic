// function join(elem, sep) {
//   return seq(elem, repeat(seq(sep, elem)));
// }
// function zebra(zeb, ra) {
//   return seq(optional(ra), (repeat(seq(zeb, ra))), optional(zeb));
// }
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
    [$.mul, $._3],
    [$._4, $.add],
    [$._list, $.add],
    [$.mul, $.add],
    [$.field, $.add],
  ],
  rules: {
    source_file: $ => optional(choice(
      $._tail_init_space,
      $._tail_init_text,
      $._escape,
    )),

    // TAIL INIT
    _tail_init_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_init_text: $ => seq(alias($.text_next_space, $.text), optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL SPACE
    _tail_space_text: $ => seq(alias($.text_next_space, $.text), optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL TEXT
    _tail_text_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),

    // TAIL IDENT
    _tail_ident_text: $ => seq(alias($.text_next_ident, $.text), optional(choice(
      $._tail_text_space,
      $._escape,
    ))),
    _tail_ident_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),

    // TAIL CALL
    _tail_call_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_call_text: $ => seq(alias($.text_next_call, $.text), optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL GROUP
    _tail_group_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_group_text: $ => seq($.text_next_group, optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL CONTENT
    _tail_content_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_content_text: $ => seq($.text_next_content, optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL BLOCK
    _tail_block_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_block_text: $ => seq($.text_next_block, optional(choice(
      $._tail_text_space,
      $._escape,
    ))),


    // ESCAPE
    _escape: $ => seq('#', choice(
      seq($.ident, optional(choice(
        $._tail_ident_text,
        $._tail_ident_space,
        $._escape,
      ))),
      seq($.group, optional(choice(
        $._tail_group_text,
        $._tail_group_space,
        $._escape,
      ))),
      seq($.content, optional(choice(
        $._tail_content_text,
        $._tail_content_space,
        $._escape,
      ))),
      seq($.block, optional(choice(
        $._tail_block_text,
        $._tail_block_space,
        $._escape,
      ))),
      seq($.call, optional(choice(
        $._tail_call_text,
        $._tail_call_space,
        $._escape,
      ))),
    )),


    text: $ => /.+/,
    text_next_space: $ => /[^# \t\n\]]+/,
    text_next_ident: $ => /[^# \t\n\[\]\(a-zA-Z][^# \t\n\]]*/,
    text_next_call: $ => /[^# \t\n\(\[\]][^# \t\n\]]*/,
    text_next_group: $ => /[^# \t\n\(\[\]][^# \t\n\]]*/,
    text_next_content: $ => /[^# \t\n\[\(\]][^# \t\n\]]*/,
    text_next_block: $ => /[^# \t\n\(\[\]][^# \t\n\]]*/,
    _space: $ => /[ \t\n]+/,

    // PRECEDENCES
    _0: $ => choice(
      $.ident,
      $.group,
      $.content,
    ),
    _1: $ => choice(
      $._0,
      $.call,
    ),
    _2: $ => choice(
      $._1,
      $.mul,
    ),
    _3: $ => choice(
      $._2,
      $.add,
    ),
    _4: $ => choice(
      $._3,
      $.field,
    ),
    _5: $ => choice(
      $._4,
      $._list,
    ),

    // EXPRETIONS
    group: $ => seq(
      '(',
      optional($._space),
      optional(seq($._5, optional($._space))),
      ')'
    ),
    block: $ => seq(
      '{',
      optional($._space),
      optional(seq($._5, optional($._space))),
      '}'
    ),
    content: $ => seq(
      '[',
      optional(choice(
        $._tail_init_space,
        $._tail_init_text,
        $._escape,
      )),
      ']',
    ),
    _list: $ => seq($._5, optional($._space), ',', optional($._space), $._4),
    field: $ => seq(field('field', $.ident), ':', optional($._space), $._3),
    add: $ => seq($._3, optional($._space), '+', optional($._space), $._2),
    mul: $ => seq($._2, optional($._space), '*', optional($._space), $._1),
    call: $ => seq(field('item', $._1), choice($.group, $.content)),
    ident: $ => /[a-zA-Z]+/,
  }
});

