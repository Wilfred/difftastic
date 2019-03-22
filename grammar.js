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
    $.str_content,
    $.ind_str_content,
  ],

  word: $ => $.id,

  conflicts: $ => [
    [$.attrpath, $.attrs],
  ],

  rules: {
    expr: $ => $.expr_function,

    id: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,
    int: $ => /[0-9]+/,
    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,
    path: $ => /[a-zA-Z0-9\._\-\+]*(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    hpath: $ => /\~(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    spath: $ => /<[a-zA-Z0-9\._\-\+]+(\/[a-zA-Z0-9\._\-\+]+)*>/,
    uri: $ => /[a-zA-Z][a-zA-Z0-9\+\-\.]*:[a-zA-Z0-9%\/\?:@\&=\+\$,\-_\.\!\~\*\']+/,

    expr_function: $ => choice(
      seq($.id, ':', $.expr_function),
      seq('{', optional($.formals), '}', ":", $.expr_function),
      seq('{', optional($.formals), '}', '@', $.id, ':', $.expr_function),
      seq($.id, '@', '{', optional($.formals), '}', ':', $.expr_function),
      seq('assert', $.expr, ';', $.expr_function),
      seq('with', $.expr, ';', $.expr_function),
      seq('let', optional($.binds), 'in', $.expr_function),
      $.expr_if
    ),

    expr_if: $ => choice(
      seq('if', $.expr, 'then', $.expr, 'else', $.expr),
      $.expr_op
    ),

    expr_op: $ => choice(
      prec.left(PREC.not, seq('!', $.expr_op)),
      prec.left(PREC.negate, seq('-', $.expr_op)),
      prec.left(PREC.eq, seq($.expr_op, '==', $.expr_op)),
      prec.left(PREC.neq, seq($.expr_op, '!=', $.expr_op)),
      prec.left(PREC['<'], seq($.expr_op, '<', $.expr_op)),
      prec.left(PREC.leq, seq($.expr_op, '<=', $.expr_op)),
      prec.left(PREC['>'], seq($.expr_op, '>', $.expr_op)),
      prec.left(PREC.geq, seq($.expr_op, '>=', $.expr_op)),
      prec.left(PREC.and, seq($.expr_op, '&&', $.expr_op)),
      prec.left(PREC.or, seq($.expr_op, '||', $.expr_op)),
      prec.left(PREC.impl, seq($.expr_op, '->', $.expr_op)),
      prec.right(PREC.update, seq($.expr_op, '//', $.expr_op)),
      prec.left(PREC['?'], seq($.expr_op, '?', $.expr_op)),
      prec.left(PREC['+'], seq($.expr_op, '+', $.expr_op)),
      prec.left(PREC['-'], seq($.expr_op, '-', $.expr_op)),
      prec.left(PREC['*'], seq($.expr_op, '*', $.expr_op)),
      prec.left(PREC['/'], seq($.expr_op, '/', $.expr_op)),
      prec.right(PREC.concat, seq($.expr_op, '++', $.expr_op)),
      $.expr_app
    ),

    expr_app: $ => choice(
      (seq($.expr_app, $.expr_select)),
      $.expr_select
    ),

    expr_select: $ => choice(
      seq($.expr_simple, '.', $.attrpath),
      seq($.expr_simple, '.', $.attrpath, 'or', $.expr_select),
      $.expr_simple
    ),

    expr_simple: $ => choice(
      $.id,
      $.int,
      $.float,
      seq('"', optional($.string_parts), '"'),
      seq("''", optional($.ind_string_parts), "''"),
      $.path,
      $.hpath,
      $.spath,
      $.uri,
      seq('(', $.expr, ')'),
      seq('let', '{', optional($.binds), '}'),
      seq('rec', '{', optional($.binds), '}'),
      seq('{', optional($.binds), '}'),
      $.expr_list
    ),

    string_parts: $ => repeat1(
      choice(
        $.str_content,
        seq('${', $.expr, "}")
      )
    ),

    ind_string_parts: $ => repeat1(
      choice(
        $.ind_str_content,
        seq('${', $.expr, "}")
      )
    ),

    binds: $ => repeat1(
      choice(
        seq("inherit", $.attrpath, $.attrs, ';'),
        seq("inherit", $.attrs, ';'),
        seq("inherit", '(', $.expr, ')', $.attrs, ';'),
      ),
    ),

    attrpath: $ => choice(
      seq($.attrpath, '.', choice($.attr, $.string_attr)),
      $.attr,
      $.string_attr
    ),

    attrs: $ => repeat1(choice($.string_attr, $.attr)),

    string_attr: $ => choice(
      seq('"', $.string_parts, '"'),
      seq('${', $.expr, '}'),
    ),

    attr: $ => (
      $.id,
      'or'
    ),

    expr_list: $ => seq('[', repeat($.expr_select), ']'),

    formals: $ => commaSep1(choice($.formal, '...')),

    formal: $ => seq($.id, optional(seq('?', $.expr))),

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