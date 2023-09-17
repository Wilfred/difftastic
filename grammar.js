// abreviations:
//   LB  = line breack character
//   SP  = space only character
//   WS  = LB+SP

const LB = /([\n\v\f\x85\u2028\u2029]|\r\n?)/;
const WS = /([\f\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]|\r\n?)/;
const NOT_WS = /[^\f\r\n\t\v\x20\x85\xa0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000]/;
const SP = /[\t\x20\xa0\u1680\u2000-\u200a\u202f\u205f\u3000]/;
const ALPHANUM = /[\p{Alphabetic}\p{Nd}\p{Nl}\p{No}]/;

// document as a whole, or what is inside content delimiter
function content($) {
  const elem = $._theline_content;
  return seq(
    optional(elem),
    repeat(seq($._content_lb, optional(elem)))
  );
}

// content inside emph or strong delimiters
function inside($) {
  return seq(
    // the first line can't contain headings or items
    repeat($._markup),
    repeat(seq($._content_lb, optional($._theline_content))),
  );
}

module.exports = grammar({
  name: 'typst',
  extras: $ => [$.comment, $._sp, $._lb],
  inline: $ => [$._pattern],
  word: $ => $._identifier,
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

    $._token_inlined_item_end,
    $._token_inlined_stmt_end,
    $._token_blocked_expr_end,
    $._token_math_letter,
    $._token_math_ident,
    $._token_math_group_end,
    $._token_else,
    $._token_unit,
    $._token_url,
    $._token_item,
    $._token_term,
    $._token_head,
    $._token_string_blob,

    $.comment,
    $._sp,

    // immediate
    $._immediate,
    $._immediate_paren,
    $._immediate_brack,
    $._immediate_ident,
    $._immediate_math_call,
    $._immediate_math_apply,
    $._immediate_math_field,
    $._immediate_math_prime,

    $._recovery,
  ],
  conflicts: $ => [
    [$._math_attach_sup, $._math_attach_sub],
  ],
  rules: {
    source_file: $ => content($),

    _theline_content: $ => choice(
      $.heading,
      $.item,
      $.term,
      repeat1($._markup),
    ),

    parbreak: $ => token(seq(LB, repeat1(seq(repeat(SP), LB)))),
    escape: $ => seq(token(choice(
      seq(/\\u/, /\{[0-9a-fA-F]*\}/),
      seq(/\\/, NOT_WS),
    )), $._immediate),
    url: $ => seq(/http(s?):\/\//, $._token_url),

    _lb: $ => LB,
    // a line break in a content context
    _content_lb: $ => seq(optional($._redent), choice($.parbreak, $._lb)),

    // this token matches `_`, `*` and `"` when they are between alphanumeric
    // characters because, in that case, they do not count as markup
    _anti_markup: $ => token(seq(ALPHANUM, /[_*"]/, ALPHANUM)),

    linebreak: $ => /\\/,
    quote: $ => /"|'/,

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
      $.shorthand,
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
      alias($._token_item, 'item'),
      $._barrier,
      repeat($._markup),
      $._termination,
      optional($._indented),
    )),
    term: $ => prec.right(1, seq(
      alias($._token_term, 'item'),
      field('term', repeat($._markup)),
      ':',
      $._barrier,
      repeat($._markup),
      $._termination,
      optional($._indented)
    )),

    heading: $ => prec.right(1, seq(
      $._token_head,
      $._barrier,
      repeat($._markup),
      $._termination,
    )),
    strong: $ => prec.left(seq(alias($._token_strong, '*'), inside($), alias($._termination, '*'))),
    emph: $ => prec.left(seq(alias($._token_emph, '_'), inside($), alias($._termination, '_'))),
    raw_blck: $ => seq(
      '```',
      $._immediate,
      optional(seq($._immediate_ident, field('lang', $.ident))),
      alias(/(``[^`]|`[^`]|[^`])*/, $.blob),
      '```',
      $._immediate,
    ),
    raw_span: $ => seq('`', alias(/[^`]*/, $.blob), '`', $._immediate),
    shorthand: $ => token(prec(1, choice('--', '---', '-?', '~', '...'))),

    math: $ => seq('$', optional($.formula), '$'),

    formula: $ => repeat1($._math_expr),
    _math_expr: $ => choice(
      $._code,
      alias($._math_group, $.group),
      alias($._token_math_letter, $.letter),
      alias($._math_number, $.number),
      alias($._math_symbol, $.symbol),
      alias($._math_symbol, $.symbol),
      alias($._math_fac, $.fac),
      alias($._math_call, $.call),
      alias($._math_apply, $.apply),
      alias($._math_shorthand, $.shorthand),
      $._math_item,
      $.escape,
      $.string,
      $.linebreak,
      alias($._math_div, $.fraction),
      alias($._math_root, $.root),
      alias($._math_prime, $.prime),
      alias($._math_attach_sup, $.attach),
      alias($._math_attach_sub, $.attach),
      alias($._math_token_align, $.align),
    ),

    _math_token_align: $ => '&',
    _math_token_colon: $ => ':',
    _math_token_rpar:  $ => token(prec(2, ')')),
    _math_token_lpar:  $ => token(prec(1, '(')),
    _math_token_ldlm:  $ => token(prec(0, choice('(', '[', '{', '[|'))),
    _math_token_orph:  $ => token(prec(0, choice(')', ']', '}', '|]', '||', '|'))),

    _math_group: $ => prec(1, seq(
      $._math_token_ldlm,
      optional($.formula),
      $._token_math_group_end
    )),
    _math_item: $ => prec(8, choice(
      alias($._token_math_ident, $.ident),
      alias($._math_field, $.field),
    )),
    _math_number: $ => /[0-9]+(\.[0-9]+)?/,
    _math_div:    $ => prec.left(3, seq($._math_expr, '/', $._math_expr)),
    _math_root:   $ => prec.left(4, seq(/√|∛|∜/, $._math_expr)),
    _math_fac:    $ => prec.left(6, seq($._math_expr, '!')),
    _math_prime:  $ => prec.left(6, seq($._math_expr, $._immediate_math_prime)),
    _math_attach_sup: $ => prec.right(5, seq(
      $._math_expr,
      '^',
      field('sup', $._math_expr),
      optional(seq('_', field('sub', $._math_expr)))
    )),
    _math_attach_sub: $ => prec.right(5, seq(
      $._math_expr,
      '_',
      field('sub', $._math_expr),
      optional(seq('^', field('sup', $._math_expr)))
    )),
    _math_field: $ => prec.left(9, seq(
      $._math_item,
      $._immediate_math_field,
      field('field', alias($._token_math_ident, $.ident))
    )),
    _math_call: $ => prec(8, seq(
      field('item', $._math_item),
      $._immediate_math_call,
      $._math_token_lpar,
      repeat(seq(
        choice(alias($._math_tagged, $.tagged), optional($.formula)),
        choice(',', ';')
      )),
      choice(alias($._math_tagged, $.tagged), optional($.formula)),
      $._math_token_rpar,
    )),
    _math_tag: $ =>prec(9, choice(
      alias($._token_math_ident, $.ident),
      alias($._token_math_letter, $.ident),
    )),
    _math_tagged: $ => prec(9, seq(
      field('field', $._math_tag),
      $._math_token_colon,
      $.formula,
    )),
    _math_apply: $ => prec(7, seq(
      field('item', choice(
        alias($._token_math_letter, $.letter),
        alias($._math_shorthand, $.shorthand),
        $.escape,
        $.string,
        $._math_item,
      )),
      $._immediate_math_apply,
      $._math_group
    )),
    _math_shorthand: $ => seq(token(prec(1, choice(
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
    ))), $._immediate),
    _math_symbol: $ => choice(
      $._math_token_colon,
      $._math_token_orph,
      token(prec(-1, /./)),
    ),

    _code: $ => seq('#', choice(
      seq($._item, alias($._token_inlined_item_end, 'end')),
      seq($._stmt, alias($._token_inlined_stmt_end, 'end')),
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
      $.include,
      $.for,
      $.while,
      $.show,
      $.return,
    ),

    _expr: $ => choice(
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
    ),

    _pattern: $ => choice($.ident, $.group),
    _identifier: $ => /[\p{XID_Start}_][\p{XID_Continue}\-]*/,
    ident:  $ => seq($._identifier, $._immediate),
    unit:   $ => $._token_unit,
    bool:   $ => choice('true', 'false'),
    number: $ => prec.right(seq(
      token(choice(
        /0x[0-9a-fA-F]+/,
        /0o[0-7]+/,
        /0b[01]+/,
        /[0-9]+(\.[0-9]+)?(e[+-]?[0-9]+)?/,
      )),
      $._immediate,
      optional(seq($.unit, $._immediate))
    )),
    string: $ => seq('"', repeat(choice($._token_string_blob, $.escape)), '"', $._immediate),
    elude:  $ => prec.left(  2, seq('..', optional($._expr))),
    assign: $ => prec.right( 4, seq(field('pattern', $._expr), alias(token(choice('=', '+=', '-=', '*=', '/=')), "assign"), field('value', $._expr))),
    lambda: $ => prec.right( 5, seq(field('pattern', $._expr), '=>', field('value', $._expr))),
    or:     $ => prec.left(  6, seq($._expr, 'or', $._expr)),
    not:    $ => prec.left(  7, seq('not', $._expr)),
    and:    $ => prec.left(  7, seq($._expr, 'and', $._expr)),
    cmp:    $ => prec.left(  8, seq($._expr, choice('<', '>', '<=', '>=', '==', '!='), $._expr)),
    in:     $ => prec.left(  9, seq($._expr, optional('not'), 'in', $._expr)), 
    add:    $ => prec.left( 10, seq($._expr, '+', $._expr)),
    sub:    $ => prec.left( 10, seq($._expr, '-', $._expr)),
    mul:    $ => prec.left( 11, seq($._expr, '*', $._expr)),
    div:    $ => prec.left( 11, seq($._expr, '/', $._expr)),
    sign:   $ =>      prec( 12, seq(choice('+', '-'), $._expr)),

    call:   $ => prec(13, seq(field('item', $._expr), choice(
      seq($._immediate_brack, $.content),
      seq($._immediate_paren, $.group)
    ))),
    field:  $ => prec(13, seq($._expr, '.', field('field', $.ident))),
    tagged: $ => prec.left(1, seq(field('field', $._expr), ':', $._expr)),
    label: $ => seq('<', /[\p{XID_Start}\-_][\p{XID_Continue}\-_\.]*/, '>'),
    ref: $ => seq('@', /[\p{XID_Start}\-_][\p{XID_Continue}\-_\.]*/, $._immediate, optional(seq($._immediate_brack, $.content))),
    content: $ => seq(
      alias($._token_content, '['),
      content($),
      alias($._termination, ']'),
      $._immediate,
    ),
    group: $ => seq(
      '(',
      repeat(seq($._expr, ',')),
      optional($._expr),
      ')',
      $._immediate,
    ),
    block: $ => seq(
      '{',
      repeat(seq($._expr, alias($._token_blocked_expr_end, 'sep'))),
      '}',
      $._immediate,
    ),
    branch: $ => prec.right(2, seq(
      'if',
      field('condition', $._expr),
      choice($.block, $.content),
      optional(seq(
        alias($._token_else, 'else'),
        choice($.block, $.content, $.branch)
      )),
    )),
    let: $ => prec.right(3, seq(
      'let',
      field('pattern', $._expr),
      optional(seq(
        token(prec(1, '=')),
        field('value', $._expr)
      )),
    )),
    set: $ => prec.right(1, seq(
      'set',
      $.call,
      optional(seq(
        'if',
        field('condition', $._expr),
      )),
    )),
    as: $ => seq('as', $.ident),
    import: $ => prec.right(1, seq(
      'import',
      field('import', $._expr),
      optional($.as),
      optional(seq(
        token(prec(10, ':')),
        choice(
          alias('*', $.wildcard),
          seq(
            repeat(seq($.ident, optional($.as), token(prec(1, ',')))),
            optional(seq($.ident, optional($.as))),
          ),
        ),
      )),
    )),
    include: $ => prec(0, seq(
      'include',
      $._expr,
    )),
    for: $ => seq(
      'for',
      field('pattern', $._pattern),
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
      optional(field('pattern', $._expr)),
      ':',
      field('value', $._expr),
    ),
    return: $ => prec.right(seq('return', optional($._expr))),
    flow: $ => choice('break', 'continue'),
    auto: $ => 'auto',
    none: $ => 'none',
    builtin: $ => seq(token(prec(1, choice(
      'align',
      'alignement',
      'angle',
      'aqua',
      'array',
      'assert',
      'bibliography',
      'black',
      'blue',
      'block',
      'bool',
      'bottom',
      'box',
      'btt',
      'bytes',
      'calc',
      'cbor',
      'center',
      'circle',
      'cite',
      'cmyk',
      'color',
      'content',
      'counter',
      'datetime',
      'dictionary',
      'direction',
      'document',
      'duration',
      'eastern',
      'ellipse',
      'emoji',
      'emph',
      'enum',
      'eval',
      'figure',
      'float',
      'footnote',
      'fraction',
      'fuchsia',
      'function',
      'gray',
      'green',
      'grid',
      'h',
      'heading',
      'highlight',
      'horizon',
      'image',
      'int',
      'json',
      'label',
      'layout',
      'left',
      'length',
      'lime',
      'line',
      'link',
      'list',
      'locate',
      'location',
      'lorem',
      'lower',
      'ltr',
      'luma',
      'maroon',
      'math',
      'max',
      'measure',
      'metadata',
      'min',
      'move',
      'navy',
      'numbering',
      'olive',
      'orange',
      'outline',
      'overline',
      'page',
      'pagebreak',
      'panic',
      'par',
      'parbreak',
      'path',
      'plugin',
      'polygon',
      'purple',
      'query',
      'range',
      'ratio',
      'raw',
      'read',
      'rect',
      'red',
      'ref',
      'regex',
      'relative',
      'repeat',
      'repr',
      'rgb',
      'right',
      'rotate',
      'rtl',
      'scale',
      'selector',
      'silver',
      'smallcaps',
      'smartquote',
      'square',
      'stack',
      'state',
      'str',
      'strike',
      'stroke',
      'strong',
      'style',
      'sub',
      'super',
      'sym',
      'table',
      'teal',
      'terms',
      'text',
      'toml',
      'top',
      'ttb',
      'type',
      'underline',
      'upper',
      'v',
      'white',
      'xml',
      'yaml',
      'yellow',
    ))), $._immediate),
  },
});

