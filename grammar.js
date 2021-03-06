function sep (rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1 (rule) {
  return sep1(rule, seq(',', optional(/[\n\r]+/)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function atleastOnce (rule) {
  return seq(rule, repeat(rule));
}

function binaryOp($, assoc, precedence, operator) {
  return assoc(precedence,
               seq(field('left', $.expr),
                   field('operator', operator),
                   optional($._newline), field('right', $.expr)));
}

function unaryOp($, assoc, precedence, operator) {
  return assoc(precedence, seq(operator, $.expr));
}

const PREC = {
  COMMENT: -2,
  CALL: 5,
  CALL_NAME: 6,
  GUARD: 6,
  MAP: 5,
  LIST: 5,
  KW: 4,
  BARE_KW: 1,
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
    /[ \t]/
  ],

  conflicts: $ => [
    [$.clause_body],
    [$.cond_body]
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(repeat($.statement), optional($._newline)),

    statement: $ => seq(
      optional($._newline), $.expr, $._newline
    ),

    expr: $ => choice(
      $.call,
      $.module_assign,
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
      $.binary_op,
      $.dot_call,
      $.anonymous_function,
      $.case,
      $.cond,
      $.identifier,
    ),

    call: $ => prec.left(PREC.CALL, seq(
      prec(PREC.CALL_NAME, field('name', $.identifier)),
      choice(
        prec.right(seq(choice($.expr), optional(seq(',', optional($._newline), $.bare_keyword_list)))),
        seq(optional('.'), $.args),
        $.bare_keyword_list
      ),
      optional($.when),
      optional($.block)
    )),

    module_assign: $ => prec(1, seq(
      $.module_attr,
      $.expr
    )),

    binary_op: $ => choice(
      binaryOp($, prec.left, 40, choice('\\\\', '<-')),
      binaryOp($, prec.right, 60, '::'),
      binaryOp($, prec.right, 70, '|'),
      unaryOp($, prec, 90, '&'),
      binaryOp($, prec.right, 100, '='),
      binaryOp($, prec.left, 130, choice('||', '|||', 'or')),
      binaryOp($, prec.left, 150, choice('==', '!=', '=~', '===', '!==')),
      binaryOp($, prec.left, 190, '|>'),
      binaryOp($, prec.right, 200, choice('++', '--', '..', '<>', '+++', '---')),
      binaryOp($, prec.left, 210, choice('+', '-')),
      binaryOp($, prec.left, 210, choice('*', '/')),
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

    anonymous_function: $ => seq(
      'fn',
      optional($._newline),
      atleastOnce(seq(
        choice($.args, optional($.bare_args)),
        '->',
        optional($._newline),
        prec.right(1, sep1($.expr, $._newline)))),
      optional($._newline),
      'end'
    ),

    args: $ => choice(
      seq(
        '(',
        optional(choice(
          seq(commaSep($.expr), optional(seq(',', $.bare_keyword_list))),
          $.bare_keyword_list
        )),
        ')'
      ),
    ),

    bare_args: $ => choice(
      seq(commaSep1($.expr), optional(seq(',', $.bare_keyword_list)), optional($.when)),
    ),

    when: $ => prec.left(PREC.GUARD, seq(
      'when',
      $.expr
    )),

    map: $ => prec.left(PREC.MAP, seq(
      '%{',
      commaSep(choice(
        seq($.expr, '=>', $.expr),
        seq($.keyword, $.expr),
      )),
      '}'
    )),

    list: $ => prec.left(PREC.LIST, seq(
      '[',
      commaSep($.expr),
      ']'
    )),

    keyword_list: $ => prec.left(PREC.KW, seq(
      '[',
      commaSep1(seq($.keyword, $.statement)),
      ']'
    )),

    bare_keyword_list: $ => prec.left(PREC.BARE_KW, commaSep1(seq($.keyword, optional($._newline), $.expr))),

    tuple: $ => seq(
      '{',
      commaSep(choice($.bare_keyword_list, $.expr)),
      '}'
    ),

    case: $ => seq(
      'case',
      $.expr,
      $._case_block,
    ),

    _case_block: $ => seq(
      'do',
      atleastOnce($.case_clause),
      optional($._newline),
      'end'
    ),

    case_clause: $ => seq(
      optional($._newline),
      $.expr,
      optional($.when),
      '->',
      optional($._newline),
      $.clause_body,
    ),

    clause_body: $ => seq($.expr, $._newline, optional($.clause_body)),

    cond: $ => seq(
      'cond',
      $._cond_block,
    ),

    _cond_block: $ => seq(
      'do',
      atleastOnce($.cond_clause),
      optional($._newline),
      'end'
    ),

    cond_clause: $ => seq(
      optional($._newline),
      $.expr,
      '->',
      optional($._newline),
      $.cond_body,
    ),

    cond_body: $ => seq($.expr, $._newline, optional($.cond_body)),

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
    atom: $ => /:[_a-z!.][?!_a-zA-Z0-9]*/,
    module_attr: $ => /@[_a-z][_a-zA-Z0-9]*/,
    keyword: $ => /[_a-z!][?!_a-zA-Z0-9]*:/,
    string: $ => /"[^"]*"/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    identifier: $ => /[_a-z][_a-zA-Z0-9]*/,
    func_name_identifier: $ => /[_a-z!][?!_a-zA-Z0-9]*/,
    comment: $ => token(prec(PREC.COMMENT, seq('#', /.*/))),
    _newline: $ => /[\n\r]+/
  }
})
