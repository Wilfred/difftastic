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

function binaryOp($, assoc, precedence, operator) {
  return assoc(precedence, seq($.expr, operator, $.expr));
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
      $.bare_call,
      seq($.expr, "\n")
    ),

    expr: $ => choice(
      $.integer,
      $.float,
      $.module,
      $.atom,
      $.module_attr,
      $.list,
      $.map,
      $.keyword_list,
      $.string,
      $.here_string,
      $.tuple,
      $.identifier,
      $.binary_op,
      $.dot_call,
      $.call,
    ),

    bare_call: $ => prec.right(5, seq(
      field('name', $.identifier),
      choice(
        prec.right(5, field('args', $.statement)),
        seq(commaSep1($.expr), optional(seq(',', $.bare_keyword_list)), optional($.block)),
      )
    )),

    call: $ => prec.right(4, seq(
      field('name', $.identifier),
      field('args', $.args)
    )),

    binary_op: $ => choice(
      binaryOp($, prec.left, 40, choice('\\\\', '<-')),
      binaryOp($, prec.right, 70, '|'),
      binaryOp($, prec.right, 100, '='),
      binaryOp($, prec.left, 150, choice('==', '!=', '=~', '===', '!==')),
      binaryOp($, prec.left, 190, '|>'),
    ),

    dot_call: $ => seq(
      field('object', choice($.module, $.identifier, $.atom)),
      '.',
      field('function', $.func_name_identifier),
      $.args
    ),

    block: $ => seq(
      'do',
      repeat($.statement),
      'end'
    ),

    args: $ => choice(
      seq('(', $.expr, ',', $.bare_keyword_list, ')'),
      seq('(', commaSep($.expr), ')'),
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

    integer: $ => /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
    float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    atom: $ => /:[_a-z!][?!_a-zA-Z0-9]*/,
    module_attr: $ => /@[_a-z][_a-zA-Z0-9]*/,
    keyword: $ => /[_a-z!][?!_a-zA-Z0-9]*:/,
    string: $ => /"[^"]*"/,
    here_string: $ => /"""\n.*\n[\s]*"""/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    identifier: $ => /[_a-z][_a-zA-Z0-9]*/,
    func_name_identifier: $ => /[_a-z!][?!_a-zA-Z0-9]*/,
    comment: $ => /#[^\n]*/,
  }
})
