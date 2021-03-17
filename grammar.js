function sep (rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1 ($, rule) {
  return sep1(rule, prec.left(20, seq(',', optional($._terminator))));
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
  return assoc(precedence, seq(field('operator', operator), $.expr));
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

const OPERATORS = ['@', '.', '+', '-', '!', '^', '~~~', '*', '/', '+', '-', '++', '--', '..', '<>', '+++', '---', '^^^', '|>', '<<<', '>>>', '<<~', '~>>', '<~', '~>', '<~>', '<|>', '<', '>', '<=', '>=', '==', '!=', '=~', '===', '!==', '&&', '&&&', '||', '|||', '=', '&', '=>', '|', '::', '<-', '\\\\'];

const PREC = {
  COMMENT: -2,
  CALL: -1,
  DOT_CALL: 310,
  ACCESS_CALL: 8,
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
    $.string_start,
    $.string_content,
    $.string_end,
    $.identifier,
    $._keyword_literal,
    $._atom_literal,
    $.atom_start,
    $.atom_content,
    $.atom_end,
    $.true,
    $.false,
    $.nil,
    $._when,
    $._and,
    $._or,
    $._not,
    $._in,
    $._not_in,
    $._fn,
    $._do,
    $._end,
    $._catch,
    $._rescue,
    $._after,
    $._else,
  ],

  extras: $ => [
    $.comment,
    /\s/,
    $._escaped_newline
  ],

  conflicts: $ => [
    [$.call],
    [$._bare_args],
    [$._clause_body],
    [$.bare_keyword_list],
    [$.block, $._bare_args],
    [$.block, $.paren_expr, $._bare_args],
    [$.block, $.stab_expr],
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => seq(repeat($._statement), optional($._terminator)),

    _statement: $ => seq(
      optional($._terminator), $.expr, $._terminator
    ),

    expr: $ => choice(
      $.binary_op,
      $.unary_op,
      $.capture_op,
      $.block,
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
      $._literal,
      $.char,
      $.identifier,
    ),

    block: $ => seq(
      '(', optional($._terminator), sep(choice($.stab_expr, $.expr), $._terminator), optional($._terminator), ')'
    ),

    paren_expr: $ => seq(
      '(', optional($._terminator), $.expr, optional($._terminator), ')'
    ),

    qualified_call: $ => seq(
      field('name', $.identifier),
      $.args
    ),

    call: $ => prec(PREC.CALL, choice(
      seq(
        field('name', choice($.identifier, $.dot_call, $.qualified_call)),
        choice(
          $._bare_args,
          $.args,
        ),
        optional($._terminator),
        optional($.do_block)
      ),
      seq(
        field('name', choice($.identifier, $.dot_call, $.qualified_call)),
        $.do_block
      )
    )),


    binary_op: $ => choice(
      binaryOp($, prec.left, 40, choice('\\\\', '<-')),
      binaryOp($, prec.right, 50, alias(alias($._when, "when"), 'when'), true),
      binaryOp($, prec.right, 60, '::'),
      binaryOp($, prec.right, 70, '|', true),
      binaryOp($, prec.right, 80, '=>'),
      binaryOp($, prec.right, 100, '='),
      binaryOp($, prec.left, 130, choice('||', '|||', alias($._or, "or"))),
      binaryOp($, prec.left, 140, choice('&&', '&&&', alias($._and, "and"))),
      binaryOp($, prec.left, 150, choice('==', '!=', '=~', '===', '!==')),
      binaryOp($, prec.left, 160, choice('<', '>', '<=', '>=')),
      binaryOp($, prec.left, 170, choice('|>', '<<<', '>>>', '<<~', '~>>', '<~', '~>', '<~>', '<|>')),
      binaryOp($, prec.left, 180, choice(alias($._in, "in"), alias($._not_in, "not in"))),
      binaryOp($, prec.left, 190, choice('^^^')),
      binaryOp($, prec.right, 200, choice('++', '--', '..', '<>', '+++', '---')),
      binaryOp($, prec.left, 210, choice('+', '-')),
      binaryOp($, prec.left, 220, choice('*', '/')),
      $._op_capture,
    ),

    unary_op: $ => choice(
      unaryOp($, prec, 90, '&'),
      unaryOp($, prec, 300, choice('+', '-', '!', '^', '~~~', alias($._not, "not"))),
      unaryOp($, prec, 320, '@'),
    ),

    _op_capture: $ => prec.left(220, seq(choice(alias($._and, "and"), alias($._or, "or"), alias($._not, "not"), alias($._when, 'when'), alias($._in, "in"), ...OPERATORS), optional($._terminator), '/', optional($._terminator), $.integer)),

    capture_op: $ => prec(
      320,
      seq(
        '&',
        optional($._terminator),
        choice($.integer)
      )
    ),

    _dot_call_function_args: $ => choice(
      prec.right(seq(field('function', choice(alias($._and, "and"), alias($._or, "or"), alias($._not, "not"), alias($._when, "when"), alias($._in, "in"), ...OPERATORS)), optional($.args))),
      prec.right(seq(field('function', $.string), optional($.args))),
      prec.right(seq(field('function', choice($.identifier, $.true, $.false, $.nil, alias($._when, "when"), alias($._and, "and"), alias($._or, "or"), alias($._not, "not"), alias($._in, "in"), alias($._fn, "fn"), alias($._do, "do"), alias($._end, "end"), alias($._catch, "catch"), alias($._rescue, "rescue"), alias($._after, "after"), alias($._else, "else"))), optional($.args))),
      $.module,
      $.args,
      $.tuple
    ),

    _simple_dot_call: $ => prec.left(PREC.DOT_CALL, seq(
      field('object', choice($.module, $.identifier, $.atom, alias($._simple_dot_call, $.dot_call), $.qualified_call, $.capture_op, $.integer)),
      '.',
      $._dot_call_function_args
    )),

    _complex_dot_call: $ => prec.left(PREC.DOT_CALL, seq(
      field('object', choice($.dot_call, $.access_call, $.paren_expr, $.map, $.anonymous_function)),
      '.',
      $._dot_call_function_args
    )),

    dot_call: $ => choice(
      $._simple_dot_call,
      $._complex_dot_call
    ),

    access_call: $ => prec.left(PREC.ACCESS_CALL, seq(
      $.expr,
      token.immediate('['),
      $.expr,
      ']'
    )),

    after_block: $ => blockExpression($, alias($._after, "after")),
    rescue_block: $ => blockExpression($, alias($._rescue, "rescue")),
    catch_block: $ => blockExpression($, alias($._catch, "catch")),
    else_block: $ => blockExpression($, alias($._else, "else")),

    do_block: $ => prec.left(5, seq(
      blockExpression($, alias($._do, 'do')),
      repeat(choice($.after_block, $.rescue_block, $.catch_block, $.else_block)),
      optional($._terminator),
      alias($._end, "end")
    )),

    anonymous_function: $ => seq(
      alias($._fn, "fn"),
      optional($._terminator),
      sep1($.stab_expr, $._terminator),
      optional($._terminator),
      alias($._end, "end")
    ),

    args: $ => seq(
      token.immediate('('),
      optional($._terminator),
      optional(choice(
        seq(commaSep($, $.expr), optional(seq(',', optional($._terminator), $.bare_keyword_list))),
        $.bare_keyword_list
      )),
      optional($._terminator),
      ')'
    ),

    _bare_args: $ => choice(
      seq(commaSep1($, $.expr), optional(seq(',', optional($._terminator), $.bare_keyword_list))),
      $.bare_keyword_list
    ),

    map: $ => seq(
      '%{',
      optional($._terminator),
      optional($._bare_args),
      optional(','),
      optional($._terminator),
      '}'
    ),

    struct: $ => seq(
      '%',
      choice($.module, $.identifier, $.atom, alias($._simple_dot_call, $.dot_call), $.qualified_call, seq('^', $.identifier)),
      '{',
      optional($._terminator),
      optional($._bare_args),
      optional(','),
      optional($._terminator),
      '}'
    ),

    list: $ => seq(
      '[',
      optional($._terminator),
      optional($._bare_args),
      optional(','),
      optional($._terminator),
      ']'
    ),

    binary: $ => seq(
      '<<',
      optional($._terminator),
      optional($._bare_args),
      optional(','),
      optional($._terminator),
      '>>'
    ),

    bare_keyword_list: $ => commaSep1($, seq($.keyword, optional($._terminator), $.expr)),

    tuple: $ => seq(
      '{',
      optional($._terminator),
      optional($._bare_args),
      optional(','),
      optional($._terminator),
      '}'
    ),

    stab_expr: $ => seq(
      optional(choice(seq('(', optional($._terminator), optional($._bare_args), optional($._terminator), ')'),
                      $._bare_args)),
      '->',
      optional($._terminator),
      $._clause_body
    ),

    _clause_body: $ => seq($.expr, optional(seq($._terminator, $._clause_body))),

    heredoc: $ => seq(
      $.heredoc_start,
      repeat(choice(
        $.heredoc_content,
        $.escape_sequence,
        $.interpolation
      )),
      $.heredoc_end
    ),

    sigil: $ => seq(
      $.sigil_start,
      repeat(choice(
        $.sigil_content,
        $.escape_sequence,
        $.interpolation
      )),
      $.sigil_end
    ),

    string: $ => seq(
      $.string_start,
      repeat(choice(
        $.string_content,
        $.escape_sequence,
        $.interpolation
      )),
      $.string_end
    ),

    atom: $ => choice(
      $._atom_literal,
      seq(
        $.atom_start,
        repeat(choice(
          $.atom_content,
          $.escape_sequence,
          $.interpolation
        )),
        $.atom_end
      )
    ),

    keyword: $ => choice(
      $._keyword_literal,
      seq($.string, token.immediate(":"), /[\s]+/)
    ),

    interpolation: $ => seq(
      '#{', optional($._terminator), sep($.expr, $._terminator), optional($._terminator), '}'
    ),

    // https://hexdocs.pm/elixir/master/String.html#module-escape-characters
    escape_sequence: $ => token(seq(
      '\\',
      choice(
        /[^ux]/,             // single character
        /x[0-9a-fA-F]{1,2}/, // hex code
        /u[0-9a-fA-F]{4}/,   // single unicode
        /u{[0-9a-fA-F ]+}/,  // multiple unicode
      )
    )),

    integer: $ => /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
    float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    module: $ => /[A-Z][_a-zA-Z0-9]*(\.[A-Z][_a-zA-Z0-9]*)*/,
    comment: $ => token(prec(PREC.COMMENT, seq('#', /.*/))),
    _terminator: $ => prec.right(atleastOnce(choice($._line_break, ';'))),
    _literal: $ => choice($.true, $.false, $.nil, '...'),
    char: $ => /\?(.|\\.)/,
    _escaped_newline: $ => /\\\n/
  }
});
