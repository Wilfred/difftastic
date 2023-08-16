// function zebra(zeb, ra) {
//   return seq(optional(ra), (repeat(seq(zeb, ra))), optional(zeb));
// }
// function optional_sandwich(cheese, bread) {
//   return seq(optional(bread), optional(seq(cheese, optional(bread))));
// }
// function joinned(elem, sep) {
//   return seq(repeat(seq(elem, sep)), optional(elem));
// }

const ml = true;
const sl = false;
function binop($, lines, op, lhs, rhs, field_lhs = undefined, field_rhs = undefined) {
  lhs = select_expr($, lines, lhs);
  rhs = select_expr($, lines, rhs);
  lhs = field_lhs === undefined ? lhs : field(field_lhs, lhs);
  rhs = field_rhs === undefined ? rhs : field(field_rhs, rhs);
  let space = lines ? $._space_la : $._space_l0;
  return seq(lhs, optional(space), op, optional(space), rhs);
}

function select_expr($, line, index) {
  if (line) {
    return [
      $._0,
      $._ml_1,
      $._ml_2,
      $._ml_3,
      $._ml_4,
      $._ml_5,
      $._ml_6,
      $._ml_7,
      $._ml_8,
      $._ml_9,
    ][index];
  } else {
    return [
      $._0,
      $._sl_1,
      $._sl_2,
      $._sl_3,
      $._sl_4,
      $._sl_5,
      $._sl_6,
      $._sl_7,
      $._sl_8,
      $._sl_9,
    ][index];
  }
}
module.exports = grammar({
  name: 'typst',
  // due to the nature of the language (sensible to white spaces),
  // the best approach remains to handle all extras manually
  extras: $ => [],
  inline: $ => [
    $._sl_expr,
    $._ml_expr,
    $._terminated,
    $._any_normal,
    $._any_strong,
    $._any_emph,
    $._element
  ],
  conflicts: $ => [
    [$._sl_5, $._sl_mul],
    [$._sl_5, $._sl_mul, $._sl_div],
    [$._sl_instr, $._sl_add],
    [$._sl_instr, $._sl_assign],
    [$._sl_instr, $._sl_sub],
    [$._sl_instr, $._sl_add, $._sl_sub],
    [$._sl_instr, $._sl_add, $._sl_mul],
    [$._sl_add, $._sl_mul],
    [$._sl_sub, $._sl_mul, $._sl_div],
    [$._sl_sub, $._sl_mul],
    [$._sl_add, $._sl_mul, $._sl_div],
    [$._sl_add, $._sl_let],
    [$._sl_add, $._sl_sub, $._sl_let],
    [$._sl_add, $._sl_sub, $._sl_cmp, $._sl_6],
    [$._sl_add, $._sl_sub, $._sl_cmp],
    [$._sl_add, $._sl_sub, $._sl_in],
    [$._sl_branch, $._sl_condition],
    [$._sl_let],
    [$._sl_set],
    [$._sl_let, $._sl_in],
    [$._sl_import],
    [$._sl_instr, $._sl_in],
    [$._sl_7, $._sl_in],
    [$._sl_and, $._sl_in],
    [$._sl_and, $._sl_or],
    [$._sl_8, $._sl_and],
    [$._sl_not, $._sl_and],
    [$._sl_expr, $._sl_or],
    [$._sl_assign, $._sl_or],
    [$._sl_assign, $._sl_let],
    [$._sl_expr, $._sl_assign],
    [$._sl_assign, $._sl_instr, $._sl_lambda],
    [$._sl_assign, $._sl_let, $._sl_lambda],
    [$._sl_lambda, $._sl_or],
    [$._sl_9, $._sl_or],
    [$._sl_elude],
    [$._sl_elude, $._sl_or],

    // token code/text conflict
    [$._normal_tail_any_code, $._sl_1],
    [$._strong_tail_any_code, $._sl_1],
    [$._emph_tail_any_code, $._sl_1],
    [$._heading_tail_any_code, $._sl_1],


    [$._ml_5, $._ml_mul],
    [$._ml_5, $._ml_mul, $._ml_div],
    [$._ml_instr, $._ml_add],
    [$._ml_instr, $._ml_sub],
    [$._ml_instr, $._ml_add, $._ml_sub],
    [$._ml_instr, $._ml_add, $._ml_mul],
    [$._ml_add, $._ml_mul],
    [$._ml_sub, $._ml_mul, $._ml_div],
    [$._ml_sub, $._ml_mul],
    [$._ml_add, $._ml_mul, $._ml_div],
    [$._ml_add, $._ml_let],
    [$._ml_add, $._ml_sub, $._ml_let],
    [$._ml_add, $._ml_sub, $._ml_cmp, $._ml_6],
    [$._ml_add, $._ml_sub, $._ml_cmp],
    [$._ml_add, $._ml_sub, $._ml_in],
    [$._ml_branch, $._ml_condition],
    [$._ml_let],
    [$._ml_let, $._ml_in],
    [$._ml_import],
    [$._ml_instr, $._ml_in],
    [$._ml_instr, $._ml_assign],
    [$._ml_7, $._ml_in],
    [$._ml_and, $._ml_in],
    [$._ml_and, $._ml_or],
    [$._ml_8, $._ml_and],
    [$._ml_not, $._ml_and],
    [$._ml_expr, $._ml_or],
    [$._ml_assign, $._ml_or],
    [$._ml_assign, $._list_elem],
    [$._ml_assign, $.tagged],
    [$._ml_assign, $._ml_let],
    [$._ml_assign, $._ml_instr, $._ml_lambda],
    [$._ml_assign, $._ml_let, $._ml_lambda],
    [$._ml_lambda, $._ml_or],
    [$._ml_expr, $._ml_assign],
    [$._ml_9, $._ml_or],
    [$._ml_elude],
    [$._ml_elude, $._ml_or],
    [$._ml_3, $._ml_field],
    [$._ml_2, $._ml_set],

    [$.tagged, $._0],
    [$._item, $._0],
    [$._item, $._sl_1],
    [$._item, $._sl_2],
    [$._space_lp],
    [$._space_lp, $._normal_tail_condition_line],
    [$._heading_tail_any_text],
    [$._heading_tail_any_element],
    [$._heading_tail_any_strong],
    [$._heading_tail_any_emph],
    [$._heading_tail_any_code],
    [$._heading_tail_any_space],
    [$._heading_tail_item_text],
    [$._heading_tail_condition_text],
    [$.int],
    [$.float],
  ],
  rules: {
    source_file: $ => optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_init_text,
      $._normal_tail_init_heading,
      $._any_normal,
    )),

    comment: $ => choice(
      seq('//', /[^\n]*\n?/),
      // comments can be nested
      seq('/*', repeat(choice(/[^\*\/]|\*[^\/]|\/[^\/\*]/, $.comment)), '*/'),
    ),

    // All escape sequences, not allowing LF escape
    escape: $ => /\\[^\nu]|\\u\{[0-9a-fA-F]*\}/,
    // As LF escape is not allowed, the `\` can be matched alone when present at the end of a line, which in Typst means a line-break
    line: $ => /\\/,

    _token_dot: $ => '.',
    _token_else: $ => 'else',

    // this rule matches exactly 1 symbol
    _text_any: $ => choice(

      // text matches only non-markup simbols and exclude spaces
      /[^# \t\n\]\*_\\\$\/\.]/,

      // the `/` is allowed if not followed by `*` or a second `/`
      /\/[^\/\* #\t\n\]\\\$\.]/,

      // the `_` is allowed only when joint with letters or digits
      /[\p{L}0-9][_\*][\p{L}0-9]/,

      $._token_dot,
      $._token_else,
      $.escape,
      $.line,
    ),

    // next to a space, no restriction for text
    _text_next_space: $ => repeat1($._text_any),

    // the text at the beginning of a line can't contains leading `=`
    _text_next_init: $ => seq(choice($.escape, /[^=# \t\n\]\*_\\\$]|=[^\t\n ]/), repeat($._text_any)),

    // the text following a code insert can't be the continuation of a code expression
    _text_next_item: $ => repeat1($._text_any),
    // _text_next_item: $ => choice('.', seq(/(\.[^a-zA-Z \t\n_\$])|[^\.# \t\n\[\*\]\(_;\$]/, repeat($._text_any))),

    // the text following a if statement can't be followed by `else` and by the usual potential code expression
    _text_next_condition: $ => repeat1($._text_any),
    // _text_next_condition: $ => seq(/(\.[^a-zA-Z]|else[^ \t\n\*\+\!\(\{;\$]|els[^e]|el[^s]|e[^l]|[^e# \t\n\(\[\*\]\.\$])/, repeat($._text_any)),

    // contains 0 line
    _space_l0: $ => repeat1(/[ \t]/),
    // contains exactly 1 line
    _space_l1: $ => /\n/,
    // contains more than 1 line
    _space_lp: $ => seq($._space_l1, repeat1(seq(optional($._space_l0), $._space_l1))),
    // contains any combination of spaces and lines
    _space_la: $ => prec.right(choice(
      seq($._space_l0, optional(seq(choice($._space_l1, $._space_lp), optional($._space_l0)))),
      seq(choice($._space_l1, $._space_lp), optional($._space_l0)),
    )),

    // shorthand
    _element: $ => choice($.raw, $.inline, $.math, $.comment),
    // block of raw text
    raw: $ => seq('```', field('lang', optional($.ident)), alias(/[^`a-zA-Z](``[^`]|`[^`]|[^`])*/, $.blob), '```'),
    // inlined raw text
    inline: $ => seq('`', alias(/[^`]*/, $.blob), '`'),
    // math context
    math: $ => seq('$', /[^\$]*/, '$'),

    // this grammar uses a state machine to handle transition between contextes
    // the following rules (starting by `_any_`) are just code factorisation

    _any_normal: $ => choice(
      $._normal_tail_any_line,
      $._normal_tail_any_break,
      $._normal_tail_any_code,
      $._normal_tail_any_element,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
    ),
    _any_strong: $ => choice(
      $._strong_tail_any_line,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
      $._strong_tail_any_element,
    ),
    _any_emph: $ => choice(
      $._emph_tail_any_line,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
      $._emph_tail_any_element,
    ),
    _any_heading: $ => choice(
      $._heading_tail_any_code,
      $._heading_tail_any_strong,
      $._heading_tail_any_emph,
      $._heading_tail_any_element,
    ),
    _any_normal_space: $ => choice(
      $._normal_tail_any_space,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ),
    _any_strong_space: $ => choice(
      $._strong_tail_any_space,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
      $._strong_tail_any_element,
    ),
    _any_emph_space: $ => choice(
      $._emph_tail_any_space,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
      $._emph_tail_any_element,
    ),
    _any_heading_space: $ => choice(
      $._heading_tail_any_space,
      $._heading_tail_any_code,
      $._heading_tail_any_strong,
      $._heading_tail_any_emph,
      $._heading_tail_any_element,
    ),


    // The states are named as follow:
    //     _MODE_tail_PREVIOUS_NEXT
    // Where MODE is the current state (like a stack), for the moment the is only 4 states:
    //   - normal: regular text mode
    //   - strong: text surronded by `*`
    //   - emph: text surronded by `_`
    //   - heading: text of a heading
    // Where PREVIOUS is the element parsed before
    // Where NEXT is the element that will be parsed

    // TAIL INIT
    // at beginning of line, not any text is allowed (because of heading)
    _normal_tail_init_text: $ => seq(alias($._text_next_init, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _strong_tail_init_text: $ => seq(alias($._text_next_init, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_init_text: $ => seq(alias($._text_next_init, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // TAIL ANY
    // many times, there are no particular restriction, this act as code factorisation
    _normal_tail_any_space: $ => seq($._space_l0, optional(choice(
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
    _normal_tail_any_emph: $ => seq($.emph, optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _normal_tail_any_element: $ => seq($._element, optional(choice(
      $._normal_tail_any_space,
      $._normal_tail_any_text,
      $._any_normal,
    ))),
    _strong_tail_any_space: $ => seq($._space_l0, optional(choice(
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _strong_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _strong_tail_any_element: $ => seq($._element, optional(choice(
      $._strong_tail_any_space,
      $._strong_tail_any_text,
      $._any_strong,
    ))),
    _emph_tail_any_space: $ => seq($._space_l0, optional(choice(
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _emph_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),
    _emph_tail_any_element: $ => seq($._element, optional(choice(
      $._emph_tail_any_space,
      $._emph_tail_any_text,
      $._any_emph,
    ))),
    _heading_tail_any_space: $ => seq($._space_l0, optional(choice(
      $._heading_tail_any_text,
      $._any_heading,
    ))),
    _heading_tail_any_text: $ => seq(alias($._text_next_space, $.text), optional(choice(
      $._heading_tail_any_space,
      $._any_heading,
    ))),
    _heading_tail_any_element: $ => seq($._element, optional(choice(
      $._heading_tail_any_space,
      $._heading_tail_any_text,
      $._any_heading,
    ))),
    _heading_tail_any_strong: $ => seq($.strong, optional(choice(
      $._heading_tail_any_space,
      $._heading_tail_any_text,
      $._any_heading,
    ))),
    _heading_tail_any_emph: $ => seq($.emph, optional(choice(
      $._heading_tail_any_space,
      $._heading_tail_any_text,
      $._any_heading,
    ))),

    // TAIL ANY LINE
    _normal_tail_any_line: $ => seq($._space_l1, optional($._space_l0), optional(choice(
      $._normal_tail_init_text,
      $._normal_tail_init_heading,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ))),
    _normal_tail_any_break: $ => seq(alias($._space_lp, $.break), optional($._space_l0), optional(choice(
      $._normal_tail_init_text,
      $._normal_tail_init_heading,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ))),
    _strong_tail_any_line: $ => seq($._space_l1, optional(choice(
      $._strong_tail_init_text,
      $._strong_tail_init_heading,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
      $._strong_tail_any_element,
    ))),
    _emph_tail_any_line: $ => seq($._space_l1, optional(choice(
      $._emph_tail_init_text,
      $._emph_tail_init_heading,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
      $._emph_tail_any_element,
    ))),

    // TAIL ITEM
    _normal_tail_item_text: $ => seq(alias($._text_next_item, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _heading_tail_item_text: $ => seq(alias($._text_next_item, $.text), optional(choice(
      $._heading_tail_any_space,
      $._any_heading,
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
    _normal_tail_condition_space: $ => seq($._space_l0, optional(choice(
      $._normal_tail_condition_line,
      $._normal_tail_condition_break,
      $._normal_tail_condition_text,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ))),
    _normal_tail_condition_break: $ => seq(alias($._space_lp, $.break), optional(choice(
      $._normal_tail_condition_space,
      $._normal_tail_condition_text,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ))),
    _normal_tail_condition_line: $ => seq($._space_l1, optional(choice(
      $._normal_tail_condition_space,
      $._normal_tail_condition_text,
      $._normal_tail_any_code,
      $._normal_tail_any_strong,
      $._normal_tail_any_emph,
      $._normal_tail_any_element,
    ))),
    _normal_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._normal_tail_any_space,
      $._any_normal,
    ))),
    _heading_tail_condition_space: $ => seq($._space_l0, optional(choice(
      $._heading_tail_condition_text,
      $._heading_tail_any_code,
      $._heading_tail_any_strong,
      $._heading_tail_any_emph,
    ))),
    _heading_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._heading_tail_any_space,
      $._any_heading,
    ))),
    _strong_tail_condition_space: $ => seq($._space_l0, optional(choice(
      $._strong_tail_condition_line,
      $._strong_tail_condition_text,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
    ))),
    _strong_tail_condition_line: $ => seq($._space_l1, optional(choice(
      $._strong_tail_condition_space,
      $._strong_tail_condition_text,
      $._strong_tail_any_code,
      $._strong_tail_any_emph,
    ))),
    _strong_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._strong_tail_any_space,
      $._any_strong,
    ))),
    _emph_tail_condition_space: $ => seq($._space_l0, optional(choice(
      $._emph_tail_condition_line,
      $._emph_tail_condition_text,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
    ))),
    _emph_tail_condition_line: $ => seq($._space_l1, optional(choice(
      $._emph_tail_condition_space,
      $._emph_tail_condition_text,
      $._emph_tail_any_code,
      $._emph_tail_any_strong,
    ))),
    _emph_tail_condition_text: $ => seq(alias($._text_next_condition, $.text), optional(choice(
      $._emph_tail_any_space,
      $._any_emph,
    ))),

    // STRONG
    strong: $ => seq('*', optional(choice(
      $._strong_tail_any_space,
      $._strong_tail_any_text,
      $._any_strong,
    )), '*'),
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
    emph: $ => seq('_', optional(choice(
      $._emph_tail_any_space,
      $._emph_tail_any_text,
      $._any_emph,
    )), '_'),
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

    // HEADING
    heading: $ => seq(choice(
      alias('=', $.level1),
      alias('==', $.level2),
      alias('===', $.level3),
      alias('====', $.level4),
      alias('=====', $.level5),
      alias(/======+/, $.level6p),
    ), $._space_l0, choice(
      $._heading_tail_any_text,
      $._any_heading,
    )),
    _normal_tail_init_heading: $ => seq($.heading, optional(choice(
      $._normal_tail_any_line,
      $._normal_tail_any_break,
    ))),
    _strong_tail_init_heading: $ => seq($.heading, optional(choice(
      $._strong_tail_any_line,
    ))),
    _emph_tail_init_heading: $ => seq($.heading, optional(choice(
      $._emph_tail_any_line,
    ))),

    // 

    // CODE
    _normal_tail_any_code: $ => seq('#', choice(
      seq($._item, optional(choice(
        seq(';', optional(choice(
          $._normal_tail_any_text,
          $._normal_tail_any_space,
          $._any_normal,
        ))),
        $._normal_tail_item_text,
        $._normal_tail_any_space,
        $._any_normal,
      ))),
      seq(alias($._sl_condition, $.condition), optional(choice(
        $._normal_tail_condition_space,
        $._normal_tail_condition_line,
        $._normal_tail_condition_break,
        $._normal_tail_condition_text,
        $._normal_tail_any_code,
        $._normal_tail_any_strong,
        $._normal_tail_any_emph,
      ))),
      seq($._terminated, optional(choice(
        $._normal_tail_any_line,
        $._normal_tail_any_break,
        seq(';', optional(choice(
          $._normal_tail_any_text,
          $._normal_tail_any_space,
          $._any_normal,
        ))),
      ))),
    )),
    _strong_tail_any_code: $ => seq('#', choice(
      seq($._item, optional(choice(
        seq(';', optional(choice(
          $._strong_tail_any_text,
          $._strong_tail_any_space,
          $._any_strong,
        ))),
        $._strong_tail_item_text,
        $._any_strong_space,
      ))),
      seq(alias($._sl_condition, $.condition), optional(choice(
        $._strong_tail_condition_text,
        $._any_strong_space,
      ))),
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
      seq($._item, optional(choice(
        seq(';', optional(choice(
          $._emph_tail_any_text,
          $._emph_tail_any_space,
          $._any_emph,
        ))),
        $._emph_tail_item_text,
        $._any_emph_space,
      ))),
      seq(alias($._sl_condition, $.condition), optional(choice(
        $._emph_tail_condition_text,
        $._any_emph_space,
      ))),
      seq($._terminated, optional(choice(
        $._emph_tail_any_line,
        seq(';', optional(choice(
          $._emph_tail_any_text,
          $._emph_tail_any_space,
          $._any_emph,
        ))),
      ))),
    )),
    _heading_tail_any_code: $ => seq('#', choice(
      seq($._item, optional(choice(
        seq(';', optional(choice(
          $._heading_tail_any_text,
          $._heading_tail_any_space,
          $._any_heading,
        ))),
        $._heading_tail_item_text,
        $._any_heading_space,
      ))),
      seq(alias($._sl_condition, $.condition), optional(choice(
        $._heading_tail_condition_text,
        $._any_heading_space,
      ))),
      seq($._terminated, optional(
        seq(';', optional(choice(
          $._heading_tail_any_text,
          $._heading_tail_any_space,
          $._any_heading,
        ))))),
    )),


    // the following instructions has to be terminated when inlined
    // the termination can be a `;` or the end of the line
    _terminated: $ => choice(
      alias($._sl_let, $.let),
      alias($._sl_set, $.set),
      alias($._sl_import, $.import),
      alias($._sl_show, $.show),
    ),

    // those expressions all have the same restriction regarding to following text
    _item: $ => choice(
      $.builtin,
      $.flow,
      $.return,
      $.bool,
      $.ident,
      $.int,
      $.float,
      $.string,
      alias($._sl_field, $.field),
      $.group,
      $.label,
      $.content,
      $.block,
      alias($._sl_branch, $.branch),
      alias($._sl_call, $.call),
      alias($._sl_for, $.for),
      alias($._sl_while, $.while),
    ),

    // PRECEDENCES (lowest index means strongest precedence)

    // this grammar does make use of of `prec` to avoid spaghetti nightmare
    // instead, a rule is declared for each precedence
    // operands in an operations are either of the same or inferior precedence

    // each expression has to exist in to version (two stack state, similar to the text modes)
    // either singlelined (`_sl_`), or multilined (`_ml_`),
    // because inlined code can't contains new lines in most places
    
    _0: $ => choice(
      $.builtin,
      $.bool,
      $.ident,
      $.int,
      $.float,
      $.string,
      $.group,
      $.label,
      $.content,
      $.block,
    ),
    _ml_1: $ => choice(
      $._0,
      alias($._ml_branch, $.branch),
      alias($._ml_condition, $.condition),
      alias($._ml_field, $.field),
      alias($._ml_for, $.for),
      alias($._ml_while, $.while),
    ),
    _sl_1: $ => choice(
      $._0,
      alias($._sl_branch, $.branch),
      alias($._sl_condition, $.condition),
      alias($._sl_field, $.field),
      alias($._sl_for, $.for),
      alias($._sl_while, $.while),
    ),
    _ml_2: $ => choice(
      $._ml_1,
      alias($._ml_call, $.call),
    ),
    _sl_2: $ => choice(
      $._sl_1,
      alias($._sl_call, $.call),
    ),
    _ml_3: $ => choice(
      $._ml_2,
      alias($._ml_sign, $.sign),
    ),
    _sl_3: $ => choice(
      $._sl_2,
      alias($._sl_sign, $.sign),
    ),
    _ml_4: $ => choice(
      $._ml_3,
      alias($._ml_mul, $.mul),
      alias($._ml_div, $.div),
    ),
    _sl_4: $ => choice(
      $._sl_3,
      alias($._sl_mul, $.mul),
      alias($._sl_div, $.div),
    ),
    _ml_5: $ => choice(
      $._ml_4,
      alias($._ml_add, $.add),
      alias($._ml_sub, $.sub),
    ),
    _sl_5: $ => choice(
      $._sl_4,
      alias($._sl_add, $.add),
      alias($._sl_sub, $.sub),
    ),
    _ml_6: $ => choice(
      $._ml_5,
      alias($._ml_cmp, $.cmp),
      alias($._ml_in, $.in),
    ),
    _sl_6: $ => choice(
      $._sl_5,
      alias($._sl_cmp, $.cmp),
      alias($._sl_in, $.in),
    ),
    _ml_7: $ => choice(
      $._ml_6,
      alias($._ml_not, $.not),
      alias($._ml_and, $.and),
    ),
    _sl_7: $ => choice(
      $._sl_6,
      alias($._sl_not, $.not),
      alias($._sl_and, $.and),
    ),
    _ml_8: $ => choice(
      $._ml_7,
      alias($._ml_or, $.or),
    ),
    _sl_8: $ => choice(
      $._sl_7,
      alias($._sl_or, $.or),
    ),
    _ml_9: $ => choice(
      $._ml_8,
      alias($._ml_elude, $.elude),
      alias($._ml_assign, $.assign),
      alias($._ml_lambda, $.lambda),
    ),
    _sl_9: $ => choice(
      $._sl_8,
      alias($._sl_elude, $.elude),
      alias($._sl_assign, $.assign),
      alias($._sl_lambda, $.lambda),
    ),

    // shorthand to the lowest precedence expression
    _ml_expr: $ => $._ml_9,
    _sl_expr: $ => $._sl_9,

    _ml_instr: $ => choice(
      $._ml_expr,
      $.flow,
      $.return,
      alias($._ml_let, $.let),
      alias($._ml_set, $.set),
      alias($._ml_import, $.import),
      alias($._ml_show, $.show),
    ),
    _sl_instr: $ => choice(
      $._sl_expr,
      $.flow,
      $.return,
      alias($._sl_let, $.let),
      alias($._sl_set, $.set),
      alias($._sl_import, $.import),
      alias($._sl_show, $.show),
    ),

    // EXPRESSIONS

    // what can appear inside parenthesis
    _list_elem: $ => choice(
      $._ml_instr,
      $.tagged,
    ),
    // parenthesis
    group: $ => seq(
      '(',
      repeat(seq(
        optional($._space_la),
        $._list_elem,
        optional($._space_la),
        ','
      )),
      optional($._space_la),
      optional(seq(
        $._list_elem,
        optional($._space_la)
      )),
      ')'
    ),

    block: $ => seq(
      '{',
      repeat(seq(
        optional($._space_l0),
        optional(seq($._sl_instr, optional($._space_l0))),
        choice($._space_l1, ';')
      )),
      optional($._space_l0),
      optional(seq(
        $._sl_instr,
        optional($._space_l0)
      )),
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

    // TODO: use the unicode property XID_Continue
    label: $ => /<([\-0-9_]|\p{L})+>/,
    ident: $ => /[\p{L}_][\p{L}0-9_\-]*/,

    flow: $ => choice('break', 'continue'),
    return: $ => seq(alias('return', $.flow), optional($._space_la), $._ml_instr),
    builtin: $ => choice(
      'auto',
      'none',
      // TODO: I don't know if all the builtin items shoud be considered as builtins
      // thus, it is an excellent indicator when typing
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
    bool: $ => choice('true', 'false'),
    unit: $ => choice('cm', 'mm', 'em', '%', 'fr', 'pt', 'in'),
    int: $ => seq(/[0-9]+/, optional($.unit)),
    float: $ => seq(/[0-9]+\.[0-9]+/, optional($.unit)),
    string: $ => seq('"', repeat(choice(/[^\"\\]/, $.escape)), '"'),
    tagged: $ => seq(field('field', $.ident), optional($._space_la), ':', optional($._space_la), $._ml_instr),

    _sl_assign: $ => binop($, sl, choice('=', '+=', '-=', '*=', '/='), 9, 8),
    _ml_assign: $ => binop($, ml, choice('=', '+=', '-=', '*=', '/='), 9, 8),

    _sl_lambda: $ => binop($, sl, '=>', 9, 8, 'pattern', 'value'),
    _ml_lambda: $ => binop($, ml, '=>', 9, 8, 'pattern', 'value'),

    _sl_not: $ => seq('not', optional($._space_l0), $._sl_7),
    _ml_not: $ => seq('not', optional($._space_la), $._ml_7),

    _sl_and: $ => binop($, sl, 'and', 7, 6),
    _ml_and: $ => binop($, ml, 'and', 7, 6),

    _sl_or: $ => binop($, sl, 'or', 8, 7),
    _ml_or: $ => binop($, ml, 'or', 8, 7),

    _sl_in: $ => binop($, sl, seq(optional(seq('not', $._space_l0)), 'in'), 6, 5),
    _ml_in: $ => binop($, ml, seq(optional(seq('not', $._space_la)), 'in'), 6, 5),

    _sl_cmp: $ => binop($, sl, choice('<', '<=', '==', '>=', '>', '!='), 5, 5),
    _ml_cmp: $ => binop($, ml, choice('<', '<=', '==', '>=', '>', '!='), 5, 5),

    _sl_add: $ => binop($, sl, '+', 5, 4),
    _ml_add: $ => binop($, ml, '+', 5, 4),

    _sl_sub: $ => binop($, sl, '-', 5, 4),
    _ml_sub: $ => binop($, ml, '-', 5, 4),

    _sl_mul: $ => binop($, sl, '*', 4, 3),
    _ml_mul: $ => binop($, ml, '*', 4, 3),

    _sl_div: $ => binop($, sl, '/', 4, 3),
    _ml_div: $ => binop($, ml, '/', 4, 3),

    _sl_sign: $ => seq(choice('+', '-'), optional($._space_l0), $._sl_3),
    _ml_sign: $ => seq(choice('+', '-'), optional($._space_la), $._ml_3),

    _sl_call: $ => seq(field('item', $._sl_2), choice($.group, $.content)),
    _ml_call: $ => seq(field('item', $._ml_2), choice($.group, $.content)),

    _sl_field: $ => seq($._sl_2, $._token_dot, field('field', $.ident)),
    _ml_field: $ => seq($._ml_2, $._token_dot, field('field', $.ident)),

    _sl_elude: $ => seq('..', optional($._space_l0), optional($._sl_8)),
    _ml_elude: $ => seq('..', optional($._space_la), optional($._ml_8)),

    _sl_for: $ => seq(
      'for',
      optional($._space_l0),
      field('pattern', $._0),
      optional($._space_l0),
      'in',
      optional($._space_l0),
      field('value', $._sl_expr),
      choice(
        seq($._space_l0, choice($.block, $.content)),
        $.block,
      ),
    ),
    _ml_for: $ => seq(
      'for',
      optional($._space_la),
      field('pattern', $._0),
      optional($._space_la),
      'in',
      optional($._space_la),
      field('value', $._ml_expr),
      choice(
        seq($._space_la, choice($.block, $.content)),
        $.block,
      ),
    ),

    _sl_while: $ => seq(
      'while',
      optional($._space_l0),
      field('test', $._sl_expr),
      choice(
        seq($._space_l0, choice($.block, $.content)),
        $.block,
      ),
    ),
    _ml_while: $ => seq(
      'while',
      optional($._space_la),
      field('test', $._ml_expr),
      choice(
        seq($._space_la, choice($.block, $.content)),
        $.block,
      ),
    ),

    _sl_branch: $ => seq(
      'if',
      optional($._space_l0),
      field('test', $._sl_expr),
      choice(
        seq($._space_l0, choice($.block, $.content)),
        $.block,
      ),
      optional($._space_la),
      'else',
      optional($._space_l0),
      choice($.block, $.content, $._sl_branch, $._sl_condition),
    ),
    _ml_branch: $ => seq(
      'if',
      optional($._space_la),
      field('test', $._ml_expr),
      choice(
        seq($._space_la, choice($.block, $.content)),
        $.block,
      ),
      optional($._space_la),
      'else',
      optional($._space_la),
      choice($.block, $.content, $._ml_branch, $._ml_condition),
    ),

    _sl_condition: $ => seq(
      'if',
      optional($._space_l0),
      field('test', $._sl_expr),
      choice(
        seq($._space_l0, choice($.block, $.content)),
        $.block,
      ),
    ),
    _ml_condition: $ => seq(
      'if',
      optional($._space_la),
      field('test', $._ml_expr),
      choice(
        seq($._space_la, choice($.block, $.content)),
        $.block,
      ),
    ),

    _sl_let: $ => seq(
      'let',
      optional($._space_l0),
      field('pattern', $._sl_2),
      optional($._space_l0),
      '=',
      optional($._space_l0),
      field('value', $._sl_expr),
      optional($._space_l0),
    ),
    _ml_let: $ => seq(
      'let',
      optional($._space_la),
      field('pattern', $._ml_2),
      optional($._space_la),
      '=',
      optional($._space_la),
      field('value', $._ml_expr),
    ),

    _sl_set: $ => seq(
      'set',
      optional($._space_l0),
      alias($._sl_call, $.call),
      optional($._space_l0),
    ),
    _ml_set: $ => seq(
      'set',
      optional($._space_la),
      alias($._ml_call, $.call),
    ),

    _sl_show: $ => seq(
      'show',
      optional($._space_l0),
      optional(seq(
        field('pattern', $._sl_2),
        optional($._space_l0),
      )),
      ':',
      optional($._space_l0),
      field('value', $._sl_instr),
    ),
    _ml_show: $ => seq(
      'show',
      optional($._space_la),
      optional(seq(
        field('pattern', $._ml_2),
        optional($._space_la),
      )),
      ':',
      optional($._space_la),
      field('value', $._ml_instr),
    ),

    _sl_import: $ => seq(
      choice('import', 'include'),
      optional($._space_l0),
      $.string,
      optional($._space_l0),
      optional(seq(
        ':',
        repeat(seq(optional($._space_l0), $.ident, optional($._space_l0), ',')),
        optional(seq(optional($._space_l0), $.ident)),
      )),
      optional($._space_l0),
    ),
    _ml_import: $ => seq(
      choice('import', 'include'),
      optional($._space_la),
      $.string,
      optional($._space_la),
      optional(seq(
        ':',
        repeat(seq(optional($._space_la), $.ident, optional($._space_la), ',')),
        optional(seq(optional($._space_la), $.ident)),
      )),
    ),
  }
});

