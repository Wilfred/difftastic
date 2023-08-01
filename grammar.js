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
    [$.mul, $._4],
    [$._5, $.add],
    [$._list, $.add],
    [$.mul, $.add],
    [$.field, $.add],
    [$.branch],
    [$.branch, $.condition],
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

    // TAIL BRANCH
    _tail_branch_space: $ => seq($._space, optional(choice(
      $._tail_space_text,
      $._escape,
    ))),
    _tail_branch_text: $ => seq($.text_next_branch, optional(choice(
      $._tail_text_space,
      $._escape,
    ))),

    // TAIL CONDITION
    _tail_condition_space: $ => seq($._space, optional(choice(
      $._tail_condition_text,
      $._escape,
    ))),
    _tail_condition_text: $ => seq(alias($.text_next_condition, $.text), optional(choice(
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
      seq($.branch, optional(choice(
        $._tail_branch_text,
        $._tail_branch_space,
        $._escape,
      ))),
      seq($.condition, optional(choice(
        $._tail_condition_text,
        $._tail_condition_space,
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
    text_next_branch: $ => /[^# \t\n\(\[\]][^# \t\n\]]*/,
    text_next_condition: $ => /(else[^ \t\n]|els[^e]|el[^s]|e[^l]|[^e# \t\n\(\[\]])[^# \t\n\]]*/,
    _space: $ => /[ \t\n]+/,

    // PRECEDENCES
    _0: $ => choice(
      $.ident,
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

    // EXPRETIONS
    group: $ => seq(
      '(',
      optional($._space),
      optional(seq($._6, optional($._space))),
      ')'
    ),
    block: $ => seq(
      '{',
      optional($._space),
      optional(seq($._6, optional($._space))),
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
    _list: $ => seq($._6, optional($._space), ',', optional($._space), $._5),
    field: $ => seq(field('field', $.ident), ':', optional($._space), $._4),
    add: $ => seq($._4, optional($._space), '+', optional($._space), $._3),
    mul: $ => seq($._3, optional($._space), '*', optional($._space), $._2),
    call: $ => seq(field('item', $._2), choice($.group, $.content)),
    branch: $ => seq(
      'if',
      $._space,
      field('test', $._4),
      $._space,
      choice($.block, $.content),
      $._space,
      'else',
      $._space,
      choice($.block, $.content),
    ),
    condition: $ => seq(
      'if',
      $._space,
      field('test', $._4),
      $._space,
      choice($.block, $.content),
    ),
    ident: $ => /[a-zA-Z]+/,
  }
});

