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

const OPERATORS = ['@', '.', '+', '-', '!', '^', '~~~', '*', '/', '+', '-', '++', '--', '..', '<>', '+++', '---', '^^^', '|>', '<<<', '>>>', '<<~', '~>>', '<~', '~>', '<~>', '<|>', '<', '>', '<=', '>=', '==', '!=', '=~', '===', '!==', '&&', '&&&', '||', '|||', '=', '&', '=>', '|', '::', '<-', '\\'];

const RESERVED = ['true', 'false', 'nil', 'when', 'and', 'or', 'not', 'in', 'fn', 'do', 'end', 'catch', 'rescue', 'after', 'else'];

const PREC = {
  COMMENT: -2,
  CALL: -1,
  DOT_CALL: 310,
  ACCESS_CALL: 8,
  CALL_NAME: 6,
  MAP: 5,
  LIST: 4,
  ANONYMOUSE_FN: 10
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
  ],

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  conflicts: $ => [
    [$.call],
    [$._bare_args],
    [$._clause_body],
    [$.bare_keyword_list],
    [$.block, $._bare_args],
    [$.block, $.stab_expr],
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
      $.literal,
      $.char,
      $.identifier,
    ),

    block: $ => seq(
      '(', optional($._terminator), sep(choice($.stab_expr, $.expr), $._terminator), optional($._terminator), ')'
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
          seq(optional('.'), $.args),
        ),
        optional($.do_block)
      ),
      seq(
        field('name', choice($.identifier, $.dot_call, $.qualified_call)),
        $.do_block
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
      binaryOp($, prec.left, 180, choice('in', seq(/not[\s+]in/))),
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

    capture_op: $ => prec.right(
      90,
      seq(
        '&',
        optional($._terminator),
        choice($.integer,
               seq($.module, optional($._terminator), '.', optional($._terminator), $.identifier, optional($._terminator), '/', $.integer),
               seq($.identifier, optional($._terminator), '/', $.integer),
               seq(choice(...OPERATORS), optional($._terminator), '/', $.integer))
      )
    ),

    dot_call: $ => prec.left(PREC.DOT_CALL, seq(
      field('object', choice($.module, $.identifier, $.atom, $.capture_op, $.dot_call, $.access_call, $.qualified_call)),
      '.',
      choice(
        prec.right(seq(field('function', choice(...OPERATORS)), $.args)),
        prec.right(seq(field('function', $.string, $.args))),
        prec.right(seq(field('function', choice($.identifier, ...RESERVED)), optional($.args))),
        $.module,
        $.args,
        $.tuple
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

    do_block: $ => prec.left(5, seq(
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

    bare_keyword_list: $ => commaSep1($, seq($.keyword, optional($._terminator), $.expr)),

    tuple: $ => seq(
      '{',
      optional($._terminator),
      optional($._bare_args),
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
      '#{', sep($.expr, $._terminator), '}'
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
    literal: $ => choice('true', 'false', 'nil', '...'),
    char: $ => /\?(.|\\.)/,
  }
})
