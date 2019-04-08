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

  inline: $ => [
  ],

  externals: $ => [
    $._str_content,
    $._ind_str_content,
    $.escape_sequence,
    $.ind_escape_sequence,
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.attrpath, $.attrs],
    [$.formals],
  ],

  rules: {
    expression: $ => $._expr,
    _expr: $ => $._expr_function,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,
    integer: $ => /[0-9]+/,
    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,
    path: $ => /[a-zA-Z0-9\._\-\+]*(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    hpath: $ => /\~(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
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
      seq($.identifier, ':', $._expr_function),

      seq('{', '}', ":", $._expr_function),
      seq('{', $.formals, '}', ":", $._expr_function),
      seq('{', $.formals, ',', $.ellipses, '}', ":", $._expr_function),
      seq('{', $.ellipses, '}', ":", $._expr_function),

      seq('{', '}', '@', $.identifier, ':', $._expr_function),
      seq('{', $.formals, '}', '@', $.identifier, ':', $._expr_function),
      seq('{', $.formals, ',', $.ellipses, '}', '@', $.identifier, ':', $._expr_function),
      seq('{', $.ellipses, '}', '@', $.identifier, ':', $._expr_function),

      seq($.identifier, '@', '{', '}', ':', $._expr_function),
      seq($.identifier, '@', '{', $.formals, '}', ':', $._expr_function),
      seq($.identifier, '@', '{', $.formals, ',', $.ellipses, '}', ':', $._expr_function),
      seq($.identifier, '@', '{', $.ellipses, '}', ':', $._expr_function),
    ),

    formals: $ => commaSep1($.formal),
    formal: $ => seq($.identifier, optional(seq('?', $._expr))),
    ellipses: $ => '...',

    assert: $ => seq('assert', $._expr, ';', $._expr_function),
    with: $ => seq('with', $._expr, ';', $._expr_function),
    let: $ => seq('let', optional($.binds), 'in', $._expr_function),

    _expr_if: $ => choice(
      $.if,
      $._expr_op
    ),

    if: $ => seq('if', $._expr, 'then', $._expr, 'else', $._expr),

    _expr_op: $ => choice(
      $.unary,
      $.binary,
      $._expr_app
    ),

    unary: $ => choice(
      prec(PREC.not, seq('!', $._expr_op)),
      prec(PREC.negate, seq('-', $._expr_op)),

    ),

    binary: $ => choice(
      prec.left(PREC.eq, seq($._expr_op, '==', $._expr_op)),
      prec.left(PREC.neq, seq($._expr_op, '!=', $._expr_op)),
      prec.left(PREC['<'], seq($._expr_op, '<', $._expr_op)),
      prec.left(PREC.leq, seq($._expr_op, '<=', $._expr_op)),
      prec.left(PREC['>'], seq($._expr_op, '>', $._expr_op)),
      prec.left(PREC.geq, seq($._expr_op, '>=', $._expr_op)),
      prec.left(PREC.and, seq($._expr_op, '&&', $._expr_op)),
      prec.left(PREC.or, seq($._expr_op, '||', $._expr_op)),
      prec.right(PREC.impl, seq($._expr_op, '->', $._expr_op)),
      prec.right(PREC.update, seq($._expr_op, '//', $._expr_op)),
      prec.left(PREC['?'], seq($._expr_op, '?', $._expr_op)),
      prec.left(PREC['+'], seq($._expr_op, '+', $._expr_op)),
      prec.left(PREC['-'], seq($._expr_op, '-', $._expr_op)),
      prec.left(PREC['*'], seq($._expr_op, '*', $._expr_op)),
      prec.left(PREC['/'], seq($._expr_op, '/', $._expr_op)),
      prec.right(PREC.concat, seq($._expr_op, '++', $._expr_op)),
    ),

    _expr_app: $ => choice(
      $.app,
      $._expr_select
    ),

    app: $ => (seq($._expr_app, $._expr_select)),

    _expr_select: $ => choice(
      $.select,
      $._expr_simple
    ),

    select: $ => choice(
      seq($._expr_simple, '.', $.attrpath),
      seq($._expr_simple, '.', $.attrpath, 'or', $._expr_select),
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

    parenthesized: $ => seq('(', $._expr, ')'),

    attrset: $ => seq('{', optional($._binds), '}'),
    let_attrset: $ => seq('let', '{', optional($._binds), '}'),
    rec_attrset: $ => seq('rec', '{', optional($._binds), '}'),

    string: $ => seq('"', optional($._string_parts), '"'),
    indented_string: $ => seq("''", optional($._ind_string_parts), "''"),

    _string_parts: $ => repeat1(
      choice(
        $._str_content,
        $.interpolation,
        $.escape_sequence,
      )
    ),

    _ind_string_parts: $ => repeat1(
      choice(
        $._ind_str_content,
        $.interpolation,
        alias($.ind_escape_sequence, $.escape_sequence),
      )
    ),

    binds: $ => $._binds,
    _binds: $ => repeat1(choice($.bind, $.inherit)),
    bind: $ => seq($.attrpath, '=', $._expr, ';'),
    inherit: $ => choice(
      seq("inherit", $.attrs, ';'),
      seq("inherit", $.parenthesized, $.attrs, ';'),
    ),

    attrpath: $ => sep1($._attr, "."),

    attrs: $ => repeat1($._attr),

    _attr: $ => choice(
      $.identifier,
      $.string,
      $.interpolation,
    ),

    interpolation: $ => seq('${', $._expr, '}'),

    list: $ => seq('[', repeat($._expr_select), ']'),

    comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        "/*",
        repeat(choice(
          /[^*]/,
          /\*[^/]/,
        )),
        "*/"
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
