function sep (rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1 (rule) {
  return sep1(rule, ',');
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: 'elixir',

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      seq($.module, "\n"),
      seq($.atom, "\n"),
      seq($.list, "\n"),
      seq($.map, "\n"),
      seq($.keyword_list, "\n"),
      seq($.string, "\n"),
      seq($.tuple, "\n"),
      seq($.binary_op),
      $.bare_call,
      $.dot_call,
      $.call
    ),

    expr: $ => choice(
      $.module,
      $.atom,
      $.list,
      $.map,
      $.keyword_list,
      $.string,
      $.tuple,
      $.identifier,
      $.binary_op,
      $.dot_call,
      $.call,
    ),

    bare_call: $ => prec.right(5, seq(
      field('name', $.identifier),
      field('args', $.statement)
    )),

    call: $ => prec.right(5, seq(
      field('name', $.identifier),
      field('args', $.args)
    )),

    binary_op: $ => choice(
      $.comp_op,
      $.pipe_op
    ),

    comp_op: $ => prec.left(150, seq(
      $.expr,
      choice('=='),
      $.expr
    )),

    pipe_op: $ => prec.left(190, seq(
      $.expr,
      choice('|>'),
      $.expr
    )),

    dot_call: $ => seq(
      field('object', choice($.module, $.identifier)),
      '.',
      field('function', $.identifier),
      $.args
    ),

    block: $ => seq(
      'do',
      repeat($.statement),
      'end'
    ),

    args: $ => choice(
      seq('(', commaSep($.expr), ')'),
      seq(commaSep1($.expr), ',', $.bare_keyword_list),
      seq(commaSep1($.expr), $.block)
    ),

    map: $ => prec.left(5, seq(
      '%{',
      commaSep(choice(
        seq($.expr, '=>', $.expr),
        seq($.keyword, $.expr),
      )),
      '}'
    )),

    list: $ => prec.left(5, seq(
      '[',
      commaSep($.expr),
      ']'
    )),

    keyword_list: $ => prec.left(4, seq(
      '[',
      commaSep1(seq($.keyword, $.expr)),
      ']'
    )),

    bare_keyword_list: $ => prec.left(1, commaSep1(seq($.keyword, $.expr))),

    tuple: $ => seq(
      '{',
      commaSep(choice($.bare_keyword_list, $.expr)),
      '}'
    ),

    atom: $ => /:[_a-z][_a-zA-Z0-9]*/,
    keyword: $ => /[_a-z][_a-zA-Z0-9]*:/,
    string: $ => /"[^"]*"/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    identifier: $ => /[_a-z][_a-zA-Z0-9]*/,
    comment: $ => /#[^\n]*/,
  }
})
