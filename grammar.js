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
    [$.mul, $.add],
  ],
  rules: {
    source_file: $ => optional(choice(
      $._tail_init_space,
      $._tail_init_text,
      $._tail_init_ident,
      $._tail_init_call,
      $._tail_init_group,
      $._tail_init_content,
    )),

    // TAIL INIT
    _tail_init_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_init_text: $ => seq(alias($.text_next_space, $.text), optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_init_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_text,
      $._tail_ident_space,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_init_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_text,
      $._tail_call_space,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_init_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_text,
      $._tail_group_space,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_init_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_text,
      $._tail_content_space,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL SPACE
    _tail_space_text: $ => seq(alias($.text_next_space, $.text), optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_space_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_space_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_space_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_space_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL TEXT
    _tail_text_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_text_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_text_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_text_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_text_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL IDENT
    _tail_ident_text: $ => seq(alias($.text_next_ident, $.text), optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_ident_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_ident_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_ident_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_ident_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_ident_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL CALL
    _tail_call_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_call_text: $ => seq(alias($.text_next_call, $.text), optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_call_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_call_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_call_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_call_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL GROUP
    _tail_group_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_group_text: $ => seq($.text_next_group, optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_group_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_group_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_group_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_group_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    // TAIL CONTENT
    _tail_content_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._tail_space_ident,
      $._tail_space_call,
      $._tail_space_group,
      $._tail_space_content,
    ))),
    _tail_content_text: $ => seq($.text_next_content, optional(choice(
      $._tail_text_space,
      $._tail_text_ident,
      $._tail_text_call,
      $._tail_text_group,
      $._tail_text_content,
    ))),
    _tail_content_ident: $ => seq($._escape_ident, optional(choice(
      $._tail_ident_space,
      $._tail_ident_text,
      $._tail_ident_ident,
      $._tail_ident_call,
      $._tail_ident_group,
      $._tail_ident_content,
    ))),
    _tail_content_call: $ => seq($._escape_call, optional(choice(
      $._tail_call_space,
      $._tail_call_text,
      $._tail_call_ident,
      $._tail_call_call,
      $._tail_call_group,
      $._tail_call_content,
    ))),
    _tail_content_group: $ => seq($._escape_group, optional(choice(
      $._tail_group_space,
      $._tail_group_text,
      $._tail_group_ident,
      $._tail_group_call,
      $._tail_group_group,
      $._tail_group_content,
    ))),
    _tail_content_content: $ => seq($._escape_content, optional(choice(
      $._tail_content_space,
      $._tail_content_text,
      $._tail_content_ident,
      $._tail_content_call,
      $._tail_content_group,
      $._tail_content_content,
    ))),

    _escape_ident: $ => seq('#', $.ident),
    _escape_call: $ => seq('#', $.call),
    _escape_group: $ => seq('#', $.group),
    _escape_content: $ => seq('#', $.content),

    text: $ => /.+/,
    text_next_space: $ => /[^# \t\n\]]+/,
    text_next_ident: $ => /[^# \t\n\]\(a-zA-Z][^# \t\n\]]*/,
    text_next_call: $ => /[^# \t\n\(\]][^# \t\n\]]*/,
    text_next_group: $ => /[^# \t\n\(\]][^# \t\n\]]*/,
    text_next_content: $ => /[^# \t\n\(\]][^# \t\n\]]*/,
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

    // EXPRETIONS
    group: $ => seq(
      '(',
      optional($._space),
      optional(seq($._3, optional($._space))),
      ')'
    ),
    content: $ => seq(
      '[',
      optional(choice(
        $._tail_init_space,
        $._tail_init_text,
        $._tail_init_ident,
        $._tail_init_call,
        $._tail_init_group,
      )),
      ']',
    ),
    add: $ => seq($._3, optional($._space), '+', optional($._space), $._2),
    mul: $ => seq($._2, optional($._space), '*', optional($._space), $._1),
    call: $ => seq(field('item', $._1), $.group),
    ident: $ => /[a-zA-Z]+/,
  }
});

