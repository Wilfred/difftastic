function sep (rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1 ($, rule) {
  return prec.left(20, sep1(rule, seq(',', optional($._terminator))));
}

function commaSep($, rule) {
  return optional(commaSep1($, rule));
}

function atleastOnce (rule) {
  return seq(rule, repeat(rule));
}

function binaryOp($, assoc, precedence, operator, bare_keyword) {
  const right = bare_keyword ? choice($.expr, $.bare_keyword_list) : $.expr;
  return assoc(precedence,
               seq(field('left', $.expr),
                   field('operator', operator),
                   optional($._terminator), field('right', right)));
}

function unaryOp($, assoc, precedence, operator) {
  return assoc(precedence, seq(operator, $.expr));
}

function blockExpression($, name) {
  return prec.right(seq(
    name,
    optional($._terminator),
    choice(
      sep($.stab_expr, $._terminator),
      sep($.expr, $._terminator),
    ),
    optional($._terminator),
  ));
}

const PREC = {
  COMMENT: -2,
  CALL: -1,
  DOT_CALL: 310,
  ACCESS_CALL: 8,
  CALL_NAME: 6,
  MAP: 5,
  LIST: 4,
  BARE_KW: 6,
  ANONYMOUSE_FN: 10,
  BARE_ARGS: 20,
  STAB_EXPR: 15
};

module.exports = grammar({
  name: 'elixir',

  externals: $ => [
    $._line_break,
    $.heredoc_start,
    $.heredoc_content,
    $.heredoc_end,
    $.sigil_start,
    $.sigil_content,
    $.sigil_end,
    $.identifier,
    $.keyword,
    $._atom_literal,
  ],

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  conflicts: $ => [
    [$.call],
    [$._bare_args],
    [$._clause_body],
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(repeat($.statement), optional($._terminator)),

    statement: $ => seq(
      optional($._terminator), $.expr, $._terminator
    ),

    expr: $ => choice(
      $.binary_op,
      $.unary_op,
      $.paren_expr,
      $.qualified_call,
      $.call,
      $.dot_call,
      $.access_call,
      $.anonymous_function,
      $.sigil,
      $.heredoc,
      $.integer,
      $.float,
      $.module,
      $.atom,
      $.list,
      $.binary,
      $.map,
      $.struct,
      $.string,
      $.tuple,
      $.literal,
      $.identifier,
    ),

    paren_expr: $ => seq(
      '(', choice($.stab_expr, $.expr), ')'
    ),

    qualified_call: $ => seq(
      field('name', choice($.identifier, $.dot_call)),
      optional('.'),
      $.args
    ),

    call: $ => prec(PREC.CALL, choice(
      seq(
        field('name', choice($.identifier, $.dot_call, $.qualified_call)),
        choice(
          $._bare_args,
          seq(optional('.'), $.args),
        ),
        optional($.block)
      ),
      seq(
        field('name', choice($.identifier, $.dot_call, $.qualified_call)),
        $.block
      )
    )),


    binary_op: $ => choice(
      binaryOp($, prec.left, 40, choice('\\\\', '<-')),
      binaryOp($, prec.right, 50, 'when', true),
      binaryOp($, prec.right, 60, '::'),
      binaryOp($, prec.right, 70, '|', true),
      binaryOp($, prec.right, 80, '=>'),
      binaryOp($, prec.right, 100, '='),
      binaryOp($, prec.left, 130, choice('||', '|||', 'or')),
      binaryOp($, prec.left, 140, choice('&&', '&&&', 'and')),
      binaryOp($, prec.left, 150, choice('==', '!=', '=~', '===', '!==')),
      binaryOp($, prec.left, 160, choice('<', '>', '<=', '>=')),
      binaryOp($, prec.left, 170, choice('|>', '<<<', '>>>', '<<~', '~>>', '<~', '~>', '<~>', '<|>')),
      binaryOp($, prec.left, 180, choice('in', seq('not', 'in'))),
      binaryOp($, prec.left, 190, choice('^^^')),
      binaryOp($, prec.right, 200, choice('++', '--', '..', '<>', '+++', '---')),
      binaryOp($, prec.left, 210, choice('+', '-')),
      binaryOp($, prec.left, 220, choice('*', '/')),
    ),

    unary_op: $ => choice(
      unaryOp($, prec, 90, '&'),
      unaryOp($, prec, 300, choice('+', '-', '!', '^', '~~~', 'not')),
      unaryOp($, prec, 320, '@'),
    ),

    dot_call: $ => prec.left(PREC.DOT_CALL, seq(
      field('object', choice($.module, $.identifier, $.atom, $.dot_call)),
      '.',
      choice(
        prec.right(seq(field('function', $.identifier), optional($.args))),
        $.module
      )
    )),

    access_call: $ => prec.left(PREC.ACCESS_CALL, seq(
      $.expr,
      token.immediate('['),
      $.expr,
      ']'
    )),

    after_block: $ => blockExpression($, 'after'),
    rescue_block: $ => blockExpression($, 'rescue'),
    catch_block: $ => blockExpression($, 'catch'),
    else_block: $ => blockExpression($, 'else'),

    block: $ => prec.left(5, seq(
      blockExpression($, 'do'),
      repeat(choice($.after_block, $.rescue_block, $.catch_block, $.else_block)),
      optional($._terminator),
      'end'
    )),

    anonymous_function: $ => prec(PREC.ANONYMOUSE_FN, seq(
      'fn',
      optional($._terminator),
      sep1($.stab_expr, $._terminator),
      optional($._terminator),
      'end'
    )),

    args: $ => prec(1, seq(
      '(',
      optional($._terminator),
      optional(choice(
        seq(commaSep($, $.expr), optional(seq(',', optional($._terminator), $.bare_keyword_list))),
        $.bare_keyword_list
      )),
      optional($._terminator),
      ')'
    )),

    _bare_args: $ => choice(
      seq(commaSep1($, $.expr), optional(seq(',', optional($._terminator), $.bare_keyword_list))),
      $.bare_keyword_list
    ),

    map: $ => seq(
      '%{',
      optional($._terminator),
      optional($._bare_args),
      '}'
    ),

    struct: $ => seq(
      '%',
      choice($.module, $.identifier),
      '{',
      optional($._terminator),
      optional($._bare_args),
      '}'
    ),

    list: $ => prec.left(PREC.LIST, seq(
      '[',
      optional($._terminator),
      optional($._bare_args),
      ']'
    )),

    binary: $ => seq(
      '<<',
      optional($._terminator),
      optional($._bare_args),
      '>>'
    ),

    bare_keyword_list: $ => prec.right(PREC.BARE_KW, commaSep1($, seq($.keyword, optional($._terminator), $.expr))),

    tuple: $ => seq(
      '{',
      optional($._terminator),
      optional($._bare_args),
      '}'
    ),

    stab_expr: $ => prec.right(PREC.STAB_EXPR,
                               seq(
                                 optional(choice($.args, $._bare_args)),
                                 '->',
                                 optional($._terminator),
                                 $._clause_body
                               )
                              ),

    _clause_body: $ => seq($.expr, optional(seq($._terminator, $._clause_body))),

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
      '#{', sep($.expr, $._terminator), '}'
    ),

    integer: $ => /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
    float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    atom: $ => choice($._atom_literal),
    string: $ => /"[^"]*"/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    comment: $ => token(prec(PREC.COMMENT, seq('#', /.*/))),
    _terminator: $ => prec.right(atleastOnce(choice($._line_break, ';'))),
    literal: $ => choice('true', 'false', 'nil')
  }
})
