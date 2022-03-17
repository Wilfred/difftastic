const PREC = {
  impl: 1,
  or: 2,
  and: 3,
  eq: 4,
  neq: 4,
  '<': 5,
  '>': 5,
  leq: 5,
  geq: 5,
  update: 6,
  not: 7,
  '+': 8,
  '-': 8,
  '*': 9,
  '/': 9,
  concat: 10,
  '?': 11,
  negate: 12
}

module.exports = grammar({
  name: 'nix',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  supertypes: $ => [
    $._expression
  ],

  inline: $ => [
  ],

  externals: $ => [
    $._string_fragment,
    $._indented_string_fragment,
    $.path_start,
    $.path_fragment,
  ],

  word: $ => $.keyword,

  conflicts: $ => [
  ],

  rules: {
    source_expression: $ => field('expression', $._expression),
    _expression: $ => $._expr_function,

    // Keywords go before identifiers to let them take precedence when both are expected.
    // Test `let missing value (last)` would fail without this.
    // Workaround before https://github.com/tree-sitter/tree-sitter/pull/246
    keyword: $ => /if|then|else|let|inherit|in|rec|with|assert/,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,
    integer: $ => /[0-9]+/,
    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,

    path: $=>  seq(
      alias($.path_start, $.path_fragment),
      repeat(
        choice(
          ($.path_fragment),
          alias($.path_interpolation, $.interpolation),
        )
      ),
    ),

    hpath_start: $ => /\~\/[a-zA-Z0-9\._\-\+\/]+/,
    hpath: $=>  seq(
      alias($.hpath_start, $.path_fragment),
      repeat(
        choice(
          ($.path_fragment),
          alias($.path_interpolation, $.interpolation),
        )
      ),
    ),

    spath: $ => /<[a-zA-Z0-9\._\-\+]+(\/[a-zA-Z0-9\._\-\+]+)*>/,
    uri: $ => /[a-zA-Z][a-zA-Z0-9\+\-\.]*:[a-zA-Z0-9%\/\?:@\&=\+\$,\-_\.\!\~\*\']+/,

    _expr_function: $ => choice(
      $.function,
      $.assert,
      $.with,
      $.let,
      $._expr_if
    ),

    function: $ => choice(
      seq(field('universal', $.identifier), ':', field('body', $._expr_function)),
      seq(field('formals', $.formals), ":", field('body', $._expr_function)),
      seq(field('formals', $.formals), '@', field('universal', $.identifier), ':', field('body', $._expr_function)),
      seq(field('universal', $.identifier), '@', field('formals', $.formals), ':', field('body', $._expr_function)),
    ),

    formals: $ => choice(
      seq('{', '}'),
      seq('{', commaSep1(field('formal', $.formal)), '}'),
      seq('{', commaSep1(field('formal', $.formal)), ',', field('ellipses', $.ellipses), '}'),
      seq('{', field('ellipses', $.ellipses), '}'),
    ),
    formal: $ => seq(field("name", $.identifier), optional(seq('?', field('default', $._expression)))),
    ellipses: $ => '...',

    assert: $ => seq('assert', field('condition', $._expression), ';', field('body', $._expr_function)),
    with: $ => seq('with', field('environment', $._expression), ';', field('body', $._expr_function)),
    let: $ => seq('let', optional($._binds), 'in', field('body', $._expr_function)),

    _expr_if: $ => choice(
      $.if,
      $._expr_op
    ),

    if: $ => seq('if', field('condition', $._expression), 'then', field('consequence', $._expression), 'else', field('alternative', $._expression)),

    _expr_op: $ => choice(
      $.has_attr,
      $.unary,
      $.binary,
      $._expr_app
    ),

    has_attr: $ => prec(PREC['?'],
      seq(
        field('expression', $._expr_op),
        field('operator', '?'),
        field('attrpath', $.attrpath)
      )
    ),

    unary: $ => choice(
      ...[
        ['!', PREC.not],
        ['-', PREC.negate],
      ].map(([operator, precedence]) =>
        prec(precedence, seq(
          field('operator', operator),
          field('argument', $._expr_op)
        ))
      )
    ),

    binary: $ => choice(
      // left assoc.
      ...[
        ['==', PREC.eq],
        ['!=', PREC.neq],
        ['<', PREC['<']],
        ['<=', PREC.leq],
        ['>', PREC['>']],
        ['>=', PREC.geq],
        ['&&', PREC.and],
        ['||', PREC.or],
        ['+', PREC['+']],
        ['-', PREC['-']],
        ['*', PREC['*']],
        ['/', PREC['/']],
      ].map(([operator, precedence]) =>
      prec.left(precedence, seq(
        field('left', $._expr_op),
        field('operator', operator),
        field('right', $._expr_op)
      ))),
      // right assoc.
      ...[
        ['->', PREC.impl],
        ['//', PREC.update],
        ['++', PREC.concat],
      ].map(([operator, precedence]) =>
      prec.right(precedence, seq(
        field('left', $._expr_op),
        field('operator', operator),
        field('right', $._expr_op)
      )))
    ),

    _expr_app: $ => choice(
      $.app,
      $._expr_select
    ),

    app: $ => seq(field('function', $._expr_app), field('argument', $._expr_select)),

    _expr_select: $ => choice(
      $.select,
      $._expr_simple
    ),

    select: $ => choice(
      seq(field('expression', $._expr_simple), '.', field('attrpath', $.attrpath)),
      seq(field('expression', $._expr_simple), '.', field('attrpath', $.attrpath), 'or', field('default', $._expr_select)),
    ),

    _expr_simple: $ => choice(
      $.identifier,
      $.integer,
      $.float,
      $.string,
      $.indented_string,
      $.path,
      $.hpath,
      $.spath,
      $.uri,
      $.parenthesized,
      $.attrset,
      $.let_attrset,
      $.rec_attrset,
      $.list
    ),

    parenthesized: $ => seq('(', field('expression', $._expression), ')'),

    attrset: $ => seq('{', optional($._binds), '}'),
    let_attrset: $ => seq('let', '{', optional($._binds), '}'),
    rec_attrset: $ => seq('rec', '{', optional($._binds), '}'),

    string: $ => seq(
      '"',
      repeat(choice(
        $._string_fragment,
        $.interpolation,
        $.escape_sequence
      )),
      '"'
    ),
    escape_sequence: $ => token.immediate(/\\(.|\s)/), // Can also escape newline.

    indented_string: $ => seq(
      "''",
      repeat(choice(
        $._indented_string_fragment,
        $.interpolation,
        alias($.indented_escape_sequence, $.escape_sequence),
      )),
      "''"
    ),
    indented_escape_sequence: $ => token.immediate(/'''|''\$|''\\(.|\s)/), // Can also escape newline.

    _binds: $ => repeat1(field('bind', choice($.bind, $.inherit, $.inherit_from))),
    bind: $ => seq(field('attrpath', $.attrpath), '=', field('expression', $._expression), ';'),
    inherit: $ => seq('inherit', field('attrs', $.attrs_inherited), ';'),
    inherit_from: $ =>
      seq('inherit', '(', field('expression', $._expression), ')', field('attrs', $.attrs_inherited_from), ';'),

    attrpath: $ => sep1(field('attr', choice(
      alias($.identifier, $.attr_identifier),
      $.string,
      $.interpolation,
    )), "."),

    attrs_inherited: $ => repeat1(field('attr', choice(
      $.identifier,
      $.string,
      $.interpolation,
    ))),

    attrs_inherited_from: $ => repeat1(field('attr', choice(
      alias($.identifier, $.attr_identifier),
      $.string,
      $.interpolation,
    ))),

    path_interpolation: $ => seq(token.immediate('${'), field('expression', $._expression), '}'),
    interpolation: $ => seq('${', field('expression', $._expression), '}'),

    list: $ => seq('[', repeat(field('element', $._expr_select)), ']'),

    comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
  },
});


function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ',');
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
