const PREC = {
  primary: 12,
  unary: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  range: 1,
  assign: 0
};

const integer_type = choice('u8', 'i8', 'u16', 'i16', 'u32', 'i32', 'u64', 'i64', 'isize', 'usize')
const float_type = choice('f32', 'f64')

module.exports = grammar({
  name: 'rust',

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  rules: {
    source_file: $ => repeat($._statement_list),

    _statement_list: $ => prec.left(sepTrailing(choice('\n', ';'), $._statement_list, $._statement)),

    _statement: $ => choice(
      $._declaration_statement,
      $._expression_statement,
      $._control_flow_statement,
      $.macro_invocation,
      $.empty_statement
    ),

    macro_invocation: $ => prec.right(seq(
      $.identifier,
      '!',
      $.macro_arguments,
      optional(';')
    )),

    macro_arguments: $ => {
      const args = choice(
        sepBy(',', $._expression),
        sepBy(';', $._expression)
      )

      return choice(
        seq('{', args, '}'),
        seq('(', args, ')'),
        seq('[', args, ']')
      )
    },

    _declaration_statement: $ => choice(
      $._item,
      $.let_declaration
    ),

    _control_flow_statement: $ => choice(
      $.if_expression,
      $.if_let_expression,
      $.match_expression,
      $.while_expression,
      $.loop_expression,
      $.for_expression
    ),

    _item: $ => choice(
      $.function_item
    ),

    function_item: $ => seq(
      'fn',
      $.identifier,
      $.parameters,
      optional(choice
        (seq('->', $.type_expression)),
        '!'
      ),
      $.block
    ),

    let_declaration: $ => seq(
      'let',
      optional($.mutable_specifier),
      $._pattern,
      optional(seq(
        ':',
        $.type_expression
      )),
      optional(seq(
        '=',
        $._expression
      )),
      ';'
    ),

    _pattern: $ => choice(
      $._literal,
      $.identifier,
      seq(
        '(',
        sepBy(',', choice($._literal, $.identifier)),
        ')'
      ),
      '_'
    ),

    type_expression: $ => choice(
      $.boolean_literal,
      integer_type,
      float_type,
      $.identifier
    ),

    mutable_specifier: $ => 'mut',

    _expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    _expression: $ => prec(PREC.primary, choice(
      $.unary_expression,
      $.binary_expression,
      $.range_expression,
      $.call_expression,
      $.return_expression,
      $._literal,
      $.identifier,
      $.method_call_expression,
      $._field_expression,
      $.array_expression,
      $.if_expression,
      $.if_let_expression,
      $.match_expression,
      $.while_expression,
      $.loop_expression,
      $.for_expression,
      $.break_expression,
      $.continue_expression,
      seq('(', $._expression, ')')
    )),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, '..', $._expression),
      seq($._expression, '..'),
      seq('..', $._expression),
      '..'
    )),

    unary_expression: $ => prec(PREC.unary, seq(
      choice('-', '*', '!'),
      $._expression
    )),

    binary_expression: $ => choice(
      prec.left(PREC.multiplicative, seq($._expression, choice('*', '/', '%'), $._expression)),
      prec.left(PREC.additive, seq($._expression, choice('+', '-'), $._expression)),
      prec.left(PREC.comparative, seq($._expression,  choice('==', '!=', '<', '<=', '>', '>='), $._expression)),
      prec.left(PREC.shift, seq($._expression, choice('<<', '>>'), $._expression)),
      prec.left(PREC.and, seq($._expression, '&&', $._expression)),
      prec.left(PREC.or, seq($._expression, '||', $._expression)),
      prec.left(PREC.bitor, seq($._expression, '|', $._expression)),
      prec.left(PREC.bitand, seq($._expression, '&', $._expression)),
      prec.left(PREC.bitxor, seq($._expression, '^', $._expression)),
      $.assignment_expression,
      $.compound_assignment_expr
    ),

    assignment_expression: $ => prec.left(PREC.assign, seq($._expression, '=', $._expression)),

    compound_assignment_expr: $ => prec.left(seq(
      $._expression,
      choice('+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>='),
      $._expression
    )),

    return_expression: $ => prec.left(seq(
      'return', optional($._expression))
    ),

    call_expression: $ => seq(
      $._expression,
      $.arguments
    ),

    arguments: $ => seq(
      '(',
      sepBy(',', $._expression),
      ')'
    ),

    array_expression: $ => seq(
      '[',
      choice(
        seq($._expression, ';', $._expression),
        sepBy(',' ,$._expression)
      ),
      ']'
    ),

    if_expression: $ => seq(
      'if',
      $._expression,
      $.block,
      optional($.else_tail)
    ),

    if_let_expression: $ => seq(
      'if',
      'let',
      $._pattern,
      '=',
      $._expression,
      $.block,
      optional($.else_tail)
    ),

    else_tail: $ => seq(
      'else',
      choice($.block, $.if_expression, $.if_let_expression)
    ),

    match_expression: $ => seq(
      'match',
      $._expression,
      '{',
      optional(repeat($.match_arm)),
      '}'
    ),

    match_arm: $ => seq(
      $.match_pattern,
      '=>',
      choice(
        seq($._expression, ','),
        $.block
      )
    ),

    match_pattern: $ => seq(
      $._pattern,
      optional(repeat(seq('|', $._pattern))),
      optional(seq('if', $._expression))
    ),

    while_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'while',
      $._expression,
      $.block
    ),

    loop_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'loop',
      $.block
    ),

    for_expression: $ => seq(
      optional(seq($.loop_label, ':')),
      'for',
      $._pattern,
      'in',
      $._expression,
      $.block
    ),

    loop_label: $ => seq('\'', $.identifier),

    break_expression: $ => seq('break', optional($.loop_label)),

    continue_expression: $ => seq('continue', optional($.loop_label)),

    _literal: $ => choice(
      $.string_literal,
      $.raw_string_literal,
      $.char_literal,
      $.boolean_literal,
      $.number_literal
    ),

    number_literal: $ => {
      const decimal_digit = /[0-9]/
      const decimal_literal = seq(decimal_digit, repeat(choice(decimal_digit, '_')))

      const hex_literal = seq('0x', repeat(choice(/[0-9a-fA-F]/, '_')))
      const binary_literal = seq('0b', repeat(choice(/[01]/, '_')))
      const octal_literal = seq('0o', repeat(choice(/[0-7]/, '_')))

      const integer_literal = seq(
        choice(
          decimal_literal,
          hex_literal,
          binary_literal,
          octal_literal
        ),
        optional(integer_type)
      )

      const exponent = seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        repeat(choice(decimal_digit, '_'))
      )
      const floating_point_literal = seq(
        decimal_literal,
        choice(exponent, seq('.', optional(decimal_literal, optional(exponent)))),
        optional(float_type)
      )

      return prec.right(choice(
        integer_literal,
        floating_point_literal
      ))
    },

    string_literal: $ => seq(
      '"',
      optional(repeat(choice(
        $.byte_escape,
        '\\"',
        '\\\n',
        /[^"]/
      ))),
      '"'
    ),

    raw_string_literal: $ => token(choice(
      seq('r#"', repeat(/.*/), '"#'),
      seq('r##"', repeat(/.*/), '"##'),
      seq('r###"', repeat(/.*/), '"###')
    )),

    char_literal: $ => seq(
      '\'',
      optional(choice(
        $.byte_escape,
        '\\\'',
        /[^\\']/
      )),
      '\''
    ),

    byte_escape: $ => {
      const hex_digit = /[0-9a-fA-F]/;

      return seq(
        '\\', choice('n', 'r', 't', '0', '\\', seq('x', hex_digit, hex_digit))
      )
    },

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    // Regex to match a C-style multiline comment
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    block_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),

    identifier: $ => {
      const letter = /[a-zA-Z_]/
      const digit = /[0-9]/

      return token(seq(
        letter,
        optional(repeat(choice(letter, digit)))
      ))
    },

    _field_expression: $ => prec.right(seq($._expression, '.', $._expression)),

    method_call_expression: $ => seq($._expression, '.', $.identifier, $.arguments),

    parameters: $ => seq(
      '(',
      sepBy(',', seq($.identifier, ':', $.type_expression)),
      ')'
    ),

    block: $ => seq(
      '{',
      choice(
        optional($._statement_list),
        optional($._expression)
      ),
      '}'
    ),

    empty_statement: $ => ';'
  }
});

function sepTrailing (separator, recurSymbol, rule) {
  return choice(rule, seq(rule, separator, optional(recurSymbol)))
}

function sepBy1 (sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy (sep, rule) {
  return optional(sepBy1(sep, rule));
}
