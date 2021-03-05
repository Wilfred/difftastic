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

function atleastOnce (rule) {
  return seq(rule, repeat(rule));
}

function binaryOp($, assoc, precedence, operator) {
  return assoc(precedence, seq($.expr, operator, $.expr));
}

const PREC = {
  COMMENT: -2,
};

module.exports = grammar({
  name: 'elixir',

  externals: $ => [
    $.heredoc_start,
    $.heredoc_content,
    $.heredoc_end,
    $.sigil_start,
    $.sigil_content,
    $.sigil_end,
  ],

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  conflicts: $ => [
    [$.inline_fn]
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.bare_call,
      $.expr,
    ),

    expr: $ => choice(
      $.module_attr,
      $.integer,
      $.float,
      $.module,
      $.atom,
      $.list,
      $.map,
      $.keyword_list,
      $.string,
      $.sigil,
      $.heredoc,
      $.tuple,
      $.identifier,
      $.binary_op,
      $.dot_call,
      $.call,
      $.inline_fn
    ),

    bare_call: $ => prec.right(5, seq(
      field('name', choice($.identifier, $.module_attr)),
      choice(
        prec.right(5, field('args', $.statement)),
        seq(commaSep1($.expr), optional(seq(',', $.bare_keyword_list)), optional($.block)),
        $.bare_keyword_list
      )
    )),

    call: $ => prec.right(4, seq(
      field('name', $.identifier),
      field('args', $.args)
    )),

    binary_op: $ => choice(
      binaryOp($, prec.left, 40, choice('\\\\', '<-')),
      binaryOp($, prec.right, 60, '::'),
      binaryOp($, prec.right, 70, '|'),
      binaryOp($, prec.right, 100, '='),
      binaryOp($, prec.left, 130, choice('||', '|||', 'or')),
      binaryOp($, prec.left, 150, choice('==', '!=', '=~', '===', '!==')),
      binaryOp($, prec.left, 190, '|>'),
    ),

    dot_call: $ => seq(
      field('object', choice($.module, $.identifier, $.atom, $.dot_call)),
      '.',
      choice(
        seq(field('function', $.func_name_identifier), $.args),
        $.module
      )
    ),

    block: $ => seq(
      'do',
      repeat($.statement),
      'end'
    ),

    inline_fn: $ => seq(
      'fn',
      choice(
        seq(optional(choice($.args, $.bare_args)),
            '->',
            atleastOnce($.statement)),
        atleastOnce(
          seq(choice($.args, $.bare_args),
              '->',
              atleastOnce($.statement)))
      ),
      'end'
    ),

    args: $ => choice(
      seq(
        '(',
        choice(
          seq(commaSep($.expr), optional(seq(',', $.bare_keyword_list))),
          $.bare_keyword_list
        ),
        ')'
      ),
    ),

    bare_args: $ => choice(
      seq(commaSep1($.expr), optional(seq(',', $.bare_keyword_list)), optional($.when)),
    ),

    when: $ => seq(
      'when',
      $.expr
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

    heredoc: $ => seq(
      $.heredoc_start,
      repeat(choice(
        $.heredoc_content,
        $.interpolation
      )),
      $.heredoc_end
    ),

    sigil: $ => seq(
      $.sigil_start,
      repeat(choice(
        $.sigil_content,
        $.interpolation
      )),
      $.sigil_end
    ),

    interpolation: $ => seq(
      '#{', optional($.statement), '}'
    ),

    integer: $ => /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
    float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    atom: $ => /:[_a-z!][?!_a-zA-Z0-9]*/,
    module_attr: $ => /@[_a-z][_a-zA-Z0-9]*/,
    keyword: $ => /[_a-z!][?!_a-zA-Z0-9]*:/,
    string: $ => /"[^"]*"/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    identifier: $ => /[_a-z][_a-zA-Z0-9]*/,
    func_name_identifier: $ => /[_a-z!][?!_a-zA-Z0-9]*/,
    comment: $ => token(prec(PREC.COMMENT, seq('#', /.*/))),
  }
})
