const new_line_regex = /([\n\v\f\x85\u2028\u2029]|\r\n?)/;
const white_space_regex = /([\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]|\r\n?)/;
const only_space_regex = /([\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000])/;

// any sequence alternating `zeb` and `ra`, like the black and white of a zebra
// in theory, `zeb` and `ra` are interchangeable, in practice, the order matters
// for instance, in a math group, the `zeb` must be `expr` and `ra` must be `ws`
// the reason why it behaves this way is unclear, although I suspect the `ws` in
// math operators to mislead the parser when a `ws` is found after an `expr`
function zebra(zeb, ra) {
  return seq(optional(ra), repeat(seq(zeb, ra)), optional(zeb));
}
// a list
function joined(elem, sep) {
  return seq(repeat(seq(elem, sep)), elem);
}
// extras
function ws($) {
  return optional($._ws);
}
function new_line($) {
  return seq(optional($._redent), choice($.parbreak, $._new_line));
}

function content($) {
  return zebra(
    choice($._line_content, $._indented),
    new_line($),
  );
}

function inside($) {
  return seq(
    repeat(choice($._space, $.comment, $._markup)),
    optional(seq(
      new_line($),
      zebra(
        choice($._line_content, $._indented),
        new_line($),
      ),
    ))
  );
}

module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  externals: $ => [
    // identation
    $._indent,
    $._dedent,
    $._redent,

    // other
    $._url_token,
    // $._token_dlim,
    // $._token_else,

    // barrier
    // $._barrier_in,
    // $._barrier_out,
    $._barrier_in,
    // $._heading_out,

    // delimited contexts
    $._content_token,
    $._strong_token,
    $._emph_token,
    // $._head_token,
    // $._math_group_token,
    // $._math_bar_token,
    $._termination,

    $._token_inlined_else,
    $._token_inlined_item_end,
    $._token_inlined_stmt_end,
    $._token_blocked_expr_end,
    $._token_math_letter,
    $._token_math_ident,

    $._recovery,
  ],
  conflicts: $ => [
    [$.strong],
    [$.emph],
    [$._math_group, $._math_item_call],
    [$._math_group, $._math_call],
    [$._math_attach_sup, $._math_attach_sub],
    [$.math],
    [$.math, $._math_ws_prefix],
    [$._math_group, $._math_ws_prefix],
    [$._math_bar, $._math_ws_prefix],
    [$._math_group],
    [$._math_bar],
    [$.item],
    [$._code],
    [$.let],
    [$.elude],
    [$.return],
    [$.return_inline],
    [$._code, $.field_inlined],
  ],
  rules: {
    source_file: $ => content($),

    // TODO: check if still necessary (because of barrier)
    _preline: $ => repeat1(choice($._space, $.comment)),

    _line_content: $ => choice(
      seq($._preline, optional($._theline_content)),
      $._theline_content
    ),

    _theline_content: $ => choice(
      $.heading,
      $.item,
      $.term,
      seq($._markup, repeat(choice($._space, $.comment, $._markup))),
    ),

    parbreak: $ => /([\n\v\f\x85\u2028\u2029]|\r\n?)(([\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000])*([\n\v\f\x85\u2028\u2029]|\r\n?))+/,
    escape: $ => /\\[^u\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]|\\u\{[0-9a-fA-F]*\}/,
    comment: $ => choice(
      seq('//', /[^\n\v\f\x85\u2028\u2029]*([\n\v\f\x85\u2028\u2029]|\r\n?)?/),
      seq('/*', repeat(choice(/[^\*\/]|\*[^\/]|\/[^\/\*]/, $.comment)), '*/'),
    ),
    url: $ => seq(/http(s?):\/\//, $._url_token),

    _space_expr: $ => /([\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]|\r\n?)+/,
    _new_line: $ => /([\n\v\f\x85\u2028\u2029]|\r\n?)/,
    _space: $ => /[\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000]+/,
    _token_eq: $ => token(prec(1, /=/)),

    // those are used to avoid matching the wrong input
    _anti_markup: $ => /[\p{Alphabetic}\p{Nd}\p{Nl}\p{No}][_\*\"][\p{Alphabetic}\p{Nd}\p{Nl}\p{No}]/,
    _anti_item: $ => prec(1, /(-|\+|[0-9]+\.)[^\r\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]/),
    _anti_head: $ => /=+[^=\r\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]/,

    _token_item: $ => prec(1, /-|\+|[0-9]+\./),
    _token_term: $ => prec(1, /\/[\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000]+/),
    _token_head: $ => /=+/,
    linebreak: $ => /\\/,
    quote: $ => choice('"', '\''),
    _ws: $ => prec(40, repeat1(choice($.comment, $._space_expr))),

    // this regex is placed at the end to let all the previous ones match in priority
    _char_any: $ => /./,

    _markup: $ => choice(
      $._code,
      $.text,
      $.strong,
      $.emph,
      $.raw_blck,
      $.raw_span,
      $.math,
      $.url,
      $.label,
      $.ref,
      $.symbol,
      $.quote,
      $.linebreak,
    ),

    text: $ => prec.right(repeat1(choice(
      $._anti_markup,
      $._anti_item,
      $._anti_head,
      $._char_any,
      $.escape,
    ))),

    _indented: $ => seq($._indent, content($), $._dedent),
    item: $ => prec.right(1, seq(
      $._token_item,
      $._barrier_in,
      repeat(choice($._markup, $.comment, $._space)),
      $._termination,
      optional($._indented),
    )),
    term: $ => prec.right(1, seq(
      $._token_term,
      field('term', repeat($._markup)),
      ':',
      $._barrier_in,
      repeat(choice($._markup, $.comment, $._space)),
      $._termination,
      optional($._indented)
    )),

    heading: $ => prec.right(1, seq(
      $._token_head,
      $._barrier_in,
      repeat(choice($._markup, $.comment, $._space)),
      $._termination,
    )),
    strong: $ => prec.left(seq($._strong_token, inside($), $._termination)),
    emph: $ => prec.left(seq($._emph_token, inside($), $._termination)),
    raw_blck: $ => seq('```', field('lang', optional($.ident)), alias(/[^`a-zA-Z](``[^`]|`[^`]|[^`])*/, $.blob), '```'),
    raw_span: $ => seq('`', alias(/[^`]*/, $.blob), '`'),
    symbol: $ => choice('--', '---', '-?', '~', '...'),

    math: $ => seq('$', ws($), repeat($._math_expr), '$'),
    _math_code: $ => prec(8, seq('#', choice(
      seq($._item, $._token_inlined_item_end),
      seq($._stmt, $._token_inlined_stmt_end)
    ))),
    _math_atom: $ => choice(
      $._math_code,
      alias($._math_group, $.group),
      alias($._math_bar, $.group),
      alias($._token_math_letter, $.letter),
      alias($._math_number, $.number),
      alias($._math_symbol, $.symbol),
      alias($._math_token_colon, $.symbol),
      alias($._math_symbol, $.symbol),
      alias($._math_fac, $.fac),
      alias($._math_item_call, $.item_call),
      alias($._math_call, $.call),
      $._math_item,
      $.escape,
      $.string,
    ),
    _math_expr: $ => choice(
      $._math_atom,
      $.linebreak,
      alias($._math_group_open, $.group),
      alias($._math_mul, $.mul),
      alias($._math_div, $.div),
      alias($._math_add, $.add),
      alias($._math_sub, $.sub),
      alias($._math_root, $.root),
      alias($._math_prime, $.prime),
      alias($._math_attach_sup, $.attach),
      alias($._math_attach_sub, $.attach),
      $._math_ws_prefix,
      $._math_ws_suffix,
      alias($._math_align, $.align),
    ),
    _math_align:       $ => '&',
    _math_token_colon: $ => token(prec(-2, ':')),
    _math_ws_prefix:   $ => prec(8, seq($._ws, $._math_expr)),
    _math_ws_suffix:   $ => prec(7, seq($._math_expr, $._ws)),
    _math_group:       $ => prec(1, seq(choice('(', '[', '{', '[|'), repeat($._math_expr), ws($), choice(')', ']', '}', '|]'))),
    _math_group_open:  $ => prec.right(0, seq(choice('(', '[', '{', '[|'), repeat($._math_expr), ws($))),
    _math_bar:         $ => prec(-1, seq(choice('||', '|'), repeat($._math_expr), ws($), optional(token(prec(1, choice('||', '|')))))),
    _math_item:        $ => prec(8, choice(
      alias($._token_math_ident, $.ident),
      alias($._math_field, $.field),
    )),
    _math_token_sub: $ => token(prec(1, '_')),
    _math_number: $ => /[0-9]+(\.[0-9]+)?/,
    _math_fac:    $ => prec.left(6, seq($._math_expr, '!')),
    _math_prime:  $ => prec.left(6, seq($._math_atom, /'+/)),
    _math_mul:    $ => prec.left(3, seq($._math_expr, '*', $._math_expr)),
    _math_div:    $ => prec.left(3, seq($._math_expr, '/', $._math_expr)),
    _math_add:    $ => prec.left(2, seq($._math_expr, '+', $._math_expr)),
    _math_sub:    $ => prec.left(2, seq($._math_expr, '-', $._math_expr)),
    _math_attach_sup: $ => prec.right(5,
      seq($._math_expr, '^', field('sup', $._math_expr), optional(seq($._math_token_sub, field('sub', $._math_expr))))
    ),
    _math_attach_sub: $ => prec.right(5,
      seq($._math_expr, $._math_token_sub, field('sub', $._math_expr), optional(seq('^', field('sup', $._math_expr))))
    ),
    _math_root: $ => prec.left(4, seq(/√|∛|∜/, $._math_expr)),
    _math_field: $ => prec.left(9, seq($._math_item, '.', field('field', alias($._token_math_ident, $.ident)))),
    _math_item_call: $ => prec(8, seq(
      field('item', $._math_item),
      '(',
      repeat(seq(
        choice(alias($._math_tagged, $.tagged), repeat($._math_expr), ws($)),
        choice(',', ';')
      )),
      choice(alias($._math_tagged, $.tagged), repeat($._math_expr), ws($)),
      ')'
    )),
    _math_tag: $ =>prec(9, choice(
      alias($._token_math_ident, $.ident),
      alias($._token_math_letter, $.ident),
      seq($._ws, $._math_tag),
    )),
    _math_tagged: $ => prec(9, seq(field('field', $._math_tag), $._math_token_colon, repeat1($._math_expr))),
    _math_call: $ => prec(7, seq(choice(alias($._token_math_letter, $.letter), $.escape, $.string, $._math_item), $._math_group)),
    _math_shorthand: $ => token(prec(-1, choice(
      // arrow
      //   right
      '=>', '->', '|->', '->>', '-->', '~>', '~~>',
      //   left
      '<==', '<-', '<<-', '<--',
      //   both
      '<->', '<-->', '<=>', '<==>',
      // cmp
      //   eq
      ':=', '::=', '=:', '!=',
      //   less
      '<=', '<<', '<<<',
      //   greater
      '>=', '>>', '>>>',
      // group
      '|]', '||',
      // other
      '...',
    ))),
    _math_symbol: $ => choice(alias($._math_shorthand, $.shorthand), token(prec(-2, /./))),

    _code: $ => seq('#', choice(
      seq($._item, $._token_inlined_item_end),
      seq($._stmt, $._token_inlined_stmt_end)
    )),

    _item: $ => prec(1, choice(
      $.auto,
      $.none,
      $.raw_span,
      $.raw_blck,
      $.flow,
      $.builtin,
      $.ident,
      $.label,
      $.bool,
      $.number,
      $.string,
      $.branch,
      alias($.field_inlined, $.field),
      $.block,
      $.group,
      alias($.call_inlined, $.call),
      $.content,
    )),

    _stmt: $ => choice(
      $.let,
      $.set,
      $.import,
      $.include,
      $.for,
      $.while,
      $.show,
      alias($.return_inline, $.return),
    ),

    _atom: $ => choice(
      $.auto,
      $.none,
      $.raw_span,
      $.raw_blck,
      $.flow,
      $.builtin,
      $.ident,
      $.label,
      $.bool,
      $.number,
      $.string,
      $.branch,
      $.field,
      $.block,
      $.group,
      $.call,
      $.content,
    ),
    _expr: $ => choice(
      $._atom,
      $.elude,
      $.assign,
      $.lambda,
      $.not,
      $.or,
      $.and,
      $.cmp,
      $.in,
      $.add,
      $.sub,
      $.mul,
      $.div,
      $.sign,
      $.let,
      $.set,
      $.import,
      $.include,
      $.for,
      $.while,
      $.show,
      $.return,
      $.tagged,
      $._expr_ws_prefix,
      $._expr_ws_suffix,
    ),

    _expr_ws_prefix: $ => prec(14, seq($._ws, $._expr)),
    _expr_ws_suffix: $ => prec(13, seq($._expr, $._ws)),
    ident: $ => /[\p{XID_Start}_][\p{XID_Continue}\-]*/,
    unit: $ => choice('cm', 'mm', 'em', '%', 'fr', 'pt', 'in', 'deg', 'rad'),
    bool: $ => choice('true', 'false'),
    number: $ => prec.right(seq(/[0-9]+(\.[0-9]+)?/, optional($.unit))),
    string: $ => seq('"', repeat(choice(/[^\"\\]/, $.escape)), '"'),
    elude:  $ =>      prec(2, seq('..', optional($._expr), ws($))),
    assign: $ => prec.right(4, seq(field('pattern', $._expr), choice('=', '+=', '-=', '*=', '/='), field('value', $._expr))),
    lambda: $ => prec.right(5, seq(field('pattern', $._expr), '=>', field('value', $._expr))),
    or:     $ => prec.left(6, seq($._expr, 'or', $._expr)),
    not:    $ => prec.left(7, seq('not', $._expr)),
    and:    $ => prec.left(7, seq($._expr, 'and', $._expr)),
    cmp:    $ => prec.left(8, seq($._expr, choice('<', '>', '<=', '>=', '==', '!='), $._expr)),
    in:     $ => prec.left(9, seq($._expr, optional(seq('not', ws($))), 'in', $._expr)), 
    add:    $ => prec.left(10, seq($._expr, '+', $._expr)),
    sub:    $ => prec.left(10, seq($._expr, '-', $._expr)),
    mul:    $ => prec.left(11, seq($._expr, '*', $._expr)),
    div:    $ => prec.left(11, seq($._expr, '/', $._expr)),
    sign:   $ =>      prec(12, seq(choice('+', '-'), $._expr)),

    call_inlined:  $ => seq(field('item', $._item), choice($.content, $.group)),
    call:   $ => prec(13, seq(field('item', $._atom), choice($.content, $.group))),
    field_inlined: $ => seq($._item, '.', field('field', $.ident)),
    field:  $ => prec(13, seq($._expr, '.', ws($), field('field', $.ident))),
    tagged: $ => prec.left(1, seq(field('field', $._expr), ':', $._expr)),
    label: $ => seq('<', /[\p{XID_Start}\-_][\p{XID_Continue}\-_]*/, '>'),
    ref: $ => seq('@', /[\p{XID_Start}\-_][\p{XID_Continue}\-_]*/),
    content: $ => seq($._content_token, content($), $._termination),
    group: $ => seq(
      '(',
      repeat(seq($._expr, ',')),
      ws($),
      optional($._expr),
      ')'
    ),
    block: $ => seq(
      '{',
      repeat(choice($._ws, seq($._expr, $._token_blocked_expr_end))),
      '}'
    ),
    branch: $ => prec.left(2, seq(
      'if',
      field('test', $._expr), 
      choice($.block, $.content),
      optional(seq(alias($._token_inlined_else, 'else'),
        ws($),
        choice($.block, $.content, $.branch)
      )),
    )),
    let: $ => prec.right(3, seq(
      'let',
      field('pattern', $._expr),
      optional(seq(
        ws($),
        $._token_eq,
        field('value', $._expr)
      )),
      ws($),
    )),
    set: $ => prec(0, seq(
      'set',
      ws($),
      alias($.call_inlined, $.call),
    )),
    import: $ => prec.right(1, seq(
      'import',
      $._expr,
      ws($),
      optional(seq(
        token(prec(10, ':')),
        repeat(seq($._expr, ',')),
        optional($._expr),
      )),
    )),
    include: $ => prec(0, seq(
      'include',
      $._expr,
    )),
    for: $ => seq(
      'for',
      field('pattern', $._expr),
      'in',
      field('value', $._expr),
      choice($.block, $.content),
    ),
    while: $ => seq(
      'while',
      field('test', $._expr),
      choice($.block, $.content),
    ),
    show: $ => seq(
      'show',
      ws($),
      optional(field('pattern', $._expr)),
      ':',
      field('value', $._expr),
    ),
    return: $ => seq('return', optional($._expr)),
    return_inline: $ => prec(-1, seq('return', optional(seq(ws($), choice($._stmt, $._item))))),
    flow: $ => choice('break', 'continue'),
    auto: $ => 'auto',
    none: $ => 'none',
    builtin: $ => choice(
      'align',
      'array',
      'assert',
      'black',
      'blue',
      'bottom',
      'box',
      'btt',
      'bytes',
      'calc',
      'center',
      'circle',
      'cmyk',
      'datetime',
      'emoji',
      'emph',
      'enum',
      'eval',
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
      'locate',
      'ltr',
      'luma',
      'max',
      'metadata',
      'min',
      'navy',
      'page',
      'pagebreak',
      'panic',
      'par',
      'parbreak',
      'purple',
      'query',
      'read',
      'rect',
      'red',
      'regex',
      'repr',
      'rgb',
      'right',
      'rotate',
      'rtl',
      'scale',
      'squate',
      'stack',
      'str',
      'strong',
      'sym',
      'table',
      'text',
      'top',
      'ttb',
      'type',
      'v',
      'white',
    ),
  },
});

