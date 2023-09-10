// abreviations:
//   LB                  line breack character
//   SP                  space only character
//   WS  = LB+SP         line break and space combined
//   CSP = SP+comments
//   CWS = WS+comments

const LB = /([\n\v\f\x85\u2028\u2029]|\r\n?)/;
const NOT_LB = /[^\r\n\v\f\x85\u2028\u2029]/;
const WS = /([\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]|\r\n?)/;
const NOT_WS = /[^\f\r\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]/;
const SP = /[\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000]/;
const NOT_SP = /[^\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000]/;
const ALPHANUM = /[\p{Alphabetic}\p{Nd}\p{Nl}\p{No}]/;

// extras
function ws($) {
  return optional($._cws);
}

// a line break in a content context
function content_lb($) {
  return seq(optional($._redent), choice($.parbreak, LB));
}

// document as a whole, or what is inside content delimiter
function content($) {
  const elem = choice($._line_content, $._indented);
  const sep = content_lb($);
  return seq(optional(sep), repeat(seq(elem, sep)), optional(elem));
}

// content inside emph or strong delimiters
function inside($) {
  return seq(
    // the first line can't contain markup like headings or items
    repeat(choice($._sp, $.comment, $._markup)),
    optional(seq(
      content_lb($),
      // after the first new line, it is just regular content
      content($),
    ))
  );
}

module.exports = grammar({
  name: 'typst',
  extras: $ => [],
  word: $ => $.ident,
  externals: $ => [
    // identation
    $._indent,
    $._dedent,
    $._redent,

    // delimited contexts
    $._token_content,
    $._token_strong,
    $._token_emph,
    $._barrier,
    $._termination,

    $._token_inlined_else,
    $._token_inlined_item_end,
    $._token_inlined_stmt_end,
    $._token_blocked_expr_end,
    $._token_math_bar_end,
    $._token_math_letter,
    $._token_math_ident,
    $._token_ws_greedy,
    $._token_unit,
    $._token_url,
    $._token_item,
    $._token_head,

    $._recovery,
  ],
  conflicts: $ => [
    [$._math_attach_sup, $._math_attach_sub],
    [$._math_bar],
    [$.return],
  ],
  rules: {
    source_file: $ => content($),

    _line_content: $ => choice(
      seq($._csp, optional($._theline_content)),
      $._theline_content
    ),
    _theline_content: $ => choice(
      $.heading,
      $.item,
      $.term,
      seq($._markup, repeat(choice($._sp, $.comment, $._markup))),
    ),

    parbreak: $ => token(seq(LB, repeat1(seq(repeat(SP), LB)))),
    escape: $ => choice(
      seq(/\\u/, /\{[0-9a-fA-F]*\}/),
      token(seq(/\\/, NOT_WS)),
    ),
    comment: $ => choice(
      seq('//', token(seq(repeat(NOT_LB), optional(LB)))),
      seq('/*', repeat(choice(/[^\*\/]|\*[^\/]|\/[^\/\*]/, $.comment)), '*/'),
    ),
    url: $ => seq(/http(s?):\/\//, $._token_url),

    _ws: $ => token(repeat1(WS)),
    _sp: $ => token(repeat1(SP)),

    // this token mathes `_` and `*` when they are between alphanumeric characters
    // because, in that case, the do not count as delimiters
    _anti_markup: $ => token(seq(ALPHANUM, /[_*"]/, ALPHANUM)),

    _token_term: $ => token(seq('/', SP)),
    linebreak: $ => /\\/,
    quote: $ => /"|'/,
    _cws: $ => prec(40, repeat1(choice($.comment, $._ws))),
    _csp: $ => prec(40, repeat1(choice($.comment, $._sp))),

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
      $.escape,
      /./,
    ))),

    _indented: $ => seq($._indent, content($), $._dedent),
    item: $ => prec.right(1, seq(
      $._token_item,
      $._barrier,
      repeat(choice($._markup, $.comment, $._sp)),
      $._termination,
      optional($._indented),
    )),
    term: $ => prec.right(1, seq(
      $._token_term,
      field('term', repeat($._markup)),
      ':',
      $._barrier,
      repeat(choice($._markup, $.comment, $._sp)),
      $._termination,
      optional($._indented)
    )),

    heading: $ => prec.right(1, seq(
      $._token_head,
      $._barrier,
      repeat(choice($._markup, $.comment, $._sp)),
      $._termination,
    )),
    strong: $ => prec.left(seq($._token_strong, inside($), $._termination)),
    emph: $ => prec.left(seq($._token_emph, inside($), $._termination)),
    raw_blck: $ => seq(
      '```',
      field('lang', optional($.ident)),
      alias(/[^`a-zA-Z](``[^`]|`[^`]|[^`])*/, $.blob),
      '```'
    ),
    raw_span: $ => seq('`', alias(/[^`]*/, $.blob), '`'),
    symbol: $ => token(choice('--', '---', '-?', '~', '...')),

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
      alias($._math_symbol, $.symbol),
      alias($._math_fac, $.fac),
      alias($._math_call, $.call),
      alias($._math_apply, $.apply),
      $._math_item,
      $.escape,
      $.string,
    ),
    _math_expr: $ => choice(
      $._math_atom,
      $.linebreak,
      alias($._math_group_open, $.group),
      alias($._math_div, $.fraction),
      alias($._math_root, $.root),
      alias($._math_prime, $.prime),
      alias($._math_attach_sup, $.attach),
      alias($._math_attach_sub, $.attach),
      $._math_ws_prefix,
      $._math_ws_suffix,
      alias($._math_token_align, $.align),
    ),
    _math_ws_prefix:   $ => prec(8, seq($._cws, $._math_expr)),
    _math_ws_suffix:   $ => prec(7, seq($._math_expr, $._cws)),

    _math_token_align: $ => '&',
    _math_token_colon: $ => ':',
    _math_token_sub:   $ => '_',
    _math_token_sup:   $ => '^',
    _math_token_rpar:  $ => token(prec(2, ')')),
    _math_token_lpar:  $ => token(prec(1, '(')),
    _math_token_rdlm:  $ => token(prec(1, choice(')', ']', '}', '|]'))),
    _math_token_ldlm:  $ => token(prec(0, choice('(', '[', '{', '[|'))),
    _math_token_orph:  $ => token(prec(0, choice(')', ']', '}', '|]'))),
    _math_token_lbar:  $ => token(prec(0, choice('||', '|'))),

    _math_group:       $ => prec(1, seq($._math_token_ldlm, repeat($._math_expr), ws($), $._math_token_rdlm)),
    _math_group_open:  $ => prec.right(0, seq($._math_token_ldlm, repeat($._math_expr), ws($))),
    _math_bar:         $ => prec(-1, seq($._math_token_lbar, repeat($._math_expr), ws($), $._token_math_bar_end)),
    _math_item:        $ => prec(8, choice(
      alias($._token_math_ident, $.ident),
      alias($._math_field, $.field),
    )),
    _math_number: $ => /[0-9]+(\.[0-9]+)?/,
    _math_fac:    $ => prec.left(6, seq($._math_expr, '!')),
    _math_prime:  $ => prec.left(6, seq($._math_atom, /'+/)),
    _math_div:    $ => prec.left(3, seq($._math_expr, '/', $._math_expr)),
    _math_attach_sup: $ => prec.right(5, seq(
      $._math_expr,
      $._math_token_sup,
      field('sup', $._math_expr),
      optional(seq($._math_token_sub, field('sub', $._math_expr)))
    )),
    _math_attach_sub: $ => prec.right(5, seq(
      $._math_expr,
      $._math_token_sub,
      field('sub', $._math_expr),
      optional(seq($._math_token_sup, field('sup', $._math_expr)))
    )),
    _math_root: $ => prec.left(4, seq(/√|∛|∜/, $._math_expr)),
    _math_field: $ => prec.left(9, seq($._math_item, '.', field('field', alias($._token_math_ident, $.ident)))),
    _math_call: $ => prec(8, seq(
      field('item', $._math_item),
      $._math_token_lpar,
      repeat(seq(
        choice(alias($._math_tagged, $.tagged), repeat($._math_expr), ws($)),
        token(choice(',', ';'))
      )),
      choice(alias($._math_tagged, $.tagged), repeat($._math_expr), ws($)),
      $._math_token_rpar,
    )),
    _math_tag: $ =>prec(9, choice(
      alias($._token_math_ident, $.ident),
      alias($._token_math_letter, $.ident),
      seq($._cws, $._math_tag),
    )),
    _math_tagged: $ => prec(9, seq(field('field', $._math_tag), $._math_token_colon, repeat1($._math_expr))),
    _math_apply: $ => prec(7, seq(choice(alias($._token_math_letter, $.letter), $.escape, $.string, $._math_item), $._math_group)),
    _math_shorthand: $ => token(prec(1, choice(
      // arrow right
      '=>', '->', '|->', '->>', '-->', '~>', '~~>',
      // arrow left
      '<==', '<-', '<<-', '<--',
      // arrow both
      '<->', '<-->', '<=>', '<==>',
      // cmp eq
      ':=', '::=', '=:', '!=',
      // cmp less
      '<=', '<<', '<<<',
      // cmp greater
      '>=', '>>', '>>>',
      // other
      '...',
    ))),
    _math_symbol: $ => choice(
      alias($._math_shorthand, $.shorthand),
      $._math_token_colon,
      $._math_token_orph,
      token(prec(-1, /./)),
    ),

    _code: $ => seq('#', choice(
      seq($._item, $._token_inlined_item_end),
      seq($._stmt, $._token_inlined_stmt_end),
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
      alias($.branch_inlined, $.branch),
      alias($.field_inlined, $.field),
      $.block,
      $.group,
      alias($.call_inlined, $.call),
      $.content,
    )),

    _stmt: $ => choice(
      $.let,
      $.set,
      alias($.import_inlined, $.import),
      $.include,
      $.for,
      $.while,
      $.show,
      $.return,
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

    _expr_ws_prefix: $ => prec(14, seq($._cws, $._expr)),
    _expr_ws_suffix: $ => prec(13, seq($._expr, $._cws)),
    ident:  $ => /[\p{XID_Start}_][\p{XID_Continue}\-]*/,
    unit:   $ => $._token_unit,
    bool:   $ => choice('true', 'false'),
    number: $ => prec.right(seq(
      token(choice(
        /0x[0-9a-fA-F]+/,
        /0o[0-7]+/,
        /0b[01]+/,
        /[0-9]+(\.[0-9]+)?(e[+-]?[0-9]+)?/,
      )),
      optional($.unit))
    ),
    string: $ => seq('"', repeat(choice(/[^\"\\]/, $.escape)), '"'),
    elude:  $ => prec.left(2, seq('..', optional($._expr), ws($))),
    assign: $ => prec.right(4, seq(field('pattern', $._expr), token(choice('=', '+=', '-=', '*=', '/=')), field('value', $._expr))),
    lambda: $ => prec.right(5, seq(field('pattern', $._expr), '=>', field('value', $._expr))),
    or:     $ => prec.left(6, seq($._expr, 'or', $._expr)),
    not:    $ => prec.left(7, seq('not', $._expr)),
    and:    $ => prec.left(7, seq($._expr, 'and', $._expr)),
    cmp:    $ => prec.left(8, seq($._expr, token(choice('<', '>', '<=', '>=', '==', '!=')), $._expr)),
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
    content: $ => seq($._token_content, content($), $._termination),
    group: $ => seq(
      '(',
      repeat(seq($._expr, ',')),
      ws($),
      optional($._expr),
      ')'
    ),
    block: $ => seq(
      '{',
      repeat(choice($._cws, seq($._expr, $._token_blocked_expr_end))),
      '}'
    ),
    branch: $ => prec.right(2, seq(
      'if',
      field('condition', $._expr),
      choice($.block, $.content),
      ws($),
      $._token_ws_greedy,
      optional(seq(
        'else',
        ws($),
        choice($.block, $.content, $.branch)
      )),
    )),
    branch_inlined: $ => prec.right(2, seq(
      'if',
      field('condition', $._expr), 
      choice($.block, $.content),
      ws($),
      optional(seq(
        alias($._token_inlined_else, 'else'),
        ws($),
        choice($.block, $.content, alias($.branch_inlined, $.branch))
      )),
    )),
    let: $ => prec.right(3, seq(
      'let',
      field('pattern', $._expr),
      optional(seq(
        ws($),
        token(prec(1, /=/)),
        field('value', $._expr)
      )),
      ws($),
    )),
    set: $ => prec.right(0, seq(
      'set',
      ws($),
      alias($.call_inlined, $.call),
      ws($),
      optional(seq(
        'if',
        field('condition', $._expr),
      )),
    )),
    import: $ => prec.right(1, seq(
      'import',
      $._expr,
      ws($),
      optional(seq(
        token(prec(10, ':')),
        repeat(seq($._expr, token(prec(1, ',')), ws($), $._token_ws_greedy)),
        optional($._expr),
      )),
    )),
    import_inlined: $ => prec.right(1, seq(
      'import',
      $._expr,
      ws($),
      optional(seq(
        token(prec(10, ':')),
        repeat(seq($._expr, token(prec(1, ',')))),
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
      field('condition', $._expr),
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
    flow: $ => token(choice('break', 'continue')),
    auto: $ => 'auto',
    none: $ => 'none',
    builtin: $ => token(prec(1, choice(
      'align',
      'aqua',
      'array',
      'assert',
      'black',
      'blue',
      'block',
      'bottom',
      'box',
      'btt',
      'bytes',
      'calc',
      'center',
      'circle',
      'cmyk',
      'counter',
      'datetime',
      'eastern',
      'ellipse',
      'emoji',
      'emph',
      'enum',
      'eval',
      'fuchsia',
      'gray',
      'green',
      'grid',
      'h',
      'heading',
      'horizon',
      'image',
      'left',
      'lime',
      'line',
      'link',
      'list',
      'locate',
      'lorem',
      'lower',
      'ltr',
      'luma',
      'maroon',
      'max',
      'metadata',
      'min',
      'navy',
      'olive',
      'orange',
      'overline',
      'page',
      'pagebreak',
      'panic',
      'par',
      'parbreak',
      'path',
      'polygon',
      'purple',
      'query',
      'raw',
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
      'silver',
      'smallcaps',
      'smartquote',
      'square',
      'stack',
      'str',
      'strike',
      'strong',
      'sub',
      'super',
      'sym',
      'table',
      'teal',
      'text',
      'top',
      'ttb',
      'type',
      'underline',
      'upper',
      'v',
      'white',
      'yellow',
    ))),
  },
});

