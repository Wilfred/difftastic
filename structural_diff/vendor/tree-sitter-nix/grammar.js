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

  supertypes: $ => [
    $._expression
  ],

  inline: $ => [
  ],

  externals: $ => [
    $.string_fragment,
    $._indented_string_fragment,
    $._path_start,
    $.path_fragment,
  ],

  word: $ => $.keyword,

  conflicts: $ => [
  ],

  rules: {
    source_code: $ => optional(field('expression', $._expression)),
    _expression: $ => $._expr_function_expression,

    // Keywords go before identifiers to let them take precedence when both are expected.
    // Workaround before https://github.com/tree-sitter/tree-sitter/pull/246
    keyword: $ => /if|then|else|let|inherit|in|rec|with|assert/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,

    variable_expression: $ => field('name', $.identifier),
    integer_expression: $ => /[0-9]+/,
    float_expression: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,

    path_expression: $=>  seq(
      alias($._path_start, $.path_fragment),
      repeat(
        choice(
          $.path_fragment,
          alias($._immediate_interpolation, $.interpolation),
        )
      ),
    ),

    _hpath_start: $ => /\~\/[a-zA-Z0-9\._\-\+\/]+/,
    hpath_expression: $=>  seq(
      alias($._hpath_start, $.path_fragment),
      repeat(
        choice(
          $.path_fragment,
          alias($._immediate_interpolation, $.interpolation),
        )
      ),
    ),

    spath_expression: $ => /<[a-zA-Z0-9\._\-\+]+(\/[a-zA-Z0-9\._\-\+]+)*>/,
    uri_expression: $ => /[a-zA-Z][a-zA-Z0-9\+\-\.]*:[a-zA-Z0-9%\/\?:@\&=\+\$,\-_\.\!\~\*\']+/,

    _expr_function_expression: $ => choice(
      $.function_expression,
      $.assert_expression,
      $.with_expression,
      $.let_expression,
      $._expr_if
    ),

    function_expression: $ => choice(
      seq(field('universal', $.identifier), ':', field('body', $._expr_function_expression)),
      seq(field('formals', $.formals), ":", field('body', $._expr_function_expression)),
      seq(field('formals', $.formals), '@', field('universal', $.identifier), ':', field('body', $._expr_function_expression)),
      seq(field('universal', $.identifier), '@', field('formals', $.formals), ':', field('body', $._expr_function_expression)),
    ),

    formals: $ => choice(
      seq('{', '}'),
      seq('{', commaSep1(field('formal', $.formal)), '}'),
      seq('{', commaSep1(field('formal', $.formal)), ',', field('ellipses', $.ellipses), '}'),
      seq('{', field('ellipses', $.ellipses), '}'),
    ),
    formal: $ => seq(field("name", $.identifier), optional(seq('?', field('default', $._expression)))),
    ellipses: $ => '...',

    assert_expression: $ => seq('assert', field('condition', $._expression), ';', field('body', $._expr_function_expression)),
    with_expression: $ => seq('with', field('environment', $._expression), ';', field('body', $._expr_function_expression)),
    let_expression: $ => seq('let', optional($.binding_set), 'in', field('body', $._expr_function_expression)),

    _expr_if: $ => choice(
      $.if_expression,
      $._expr_op
    ),

    if_expression: $ => seq('if', field('condition', $._expression), 'then', field('consequence', $._expression), 'else', field('alternative', $._expression)),

    _expr_op: $ => choice(
      $.has_attr_expression,
      $.unary_expression,
      $.binary_expression,
      $._expr_apply_expression
    ),

    // I choose to *not* have this among the binary operators because
    // this is the sole exception that takes an attrpath (instead of expression)
    // as its right operand.
    // My gut feeling is that this is:
    //   1) better in theory, and
    //   2) will be easier to work with in practice.
    has_attr_expression: $ => prec(PREC['?'],
      seq(
        field('expression', $._expr_op),
        field('operator', '?'),
        field('attrpath', $.attrpath)
      )
    ),

    unary_expression: $ => choice(
      ...[
        ['!', PREC.not],
        ['-', PREC.negate],
      ].map(([operator, precedence]) =>
        prec(precedence, seq(
          field('operator', operator),
          field('argument', $._expr_op)
        ))
      )
    ),

    binary_expression: $ => choice(
      // left assoc.
      ...[
        ['==', PREC.eq],
        ['!=', PREC.neq],
        ['<', PREC['<']],
        ['<=', PREC.leq],
        ['>', PREC['>']],
        ['>=', PREC.geq],
        ['&&', PREC.and],
        ['||', PREC.or],
        ['+', PREC['+']],
        ['-', PREC['-']],
        ['*', PREC['*']],
        ['/', PREC['/']],
      ].map(([operator, precedence]) =>
      prec.left(precedence, seq(
        field('left', $._expr_op),
        field('operator', operator),
        field('right', $._expr_op)
      ))),
      // right assoc.
      ...[
        ['->', PREC.impl],
        ['//', PREC.update],
        ['++', PREC.concat],
      ].map(([operator, precedence]) =>
      prec.right(precedence, seq(
        field('left', $._expr_op),
        field('operator', operator),
        field('right', $._expr_op)
      )))
    ),

    _expr_apply_expression: $ => choice(
      $.apply_expression,
      $._expr_select_expression
    ),

    apply_expression: $ => seq(field('function', $._expr_apply_expression), field('argument', $._expr_select_expression)),

    _expr_select_expression: $ => choice(
      $.select_expression,
      $._expr_simple
    ),

    select_expression: $ => choice(
      seq(field('expression', $._expr_simple), '.', field('attrpath', $.attrpath)),
      seq(field('expression', $._expr_simple), '.', field('attrpath', $.attrpath), 'or', field('default', $._expr_select_expression)),
    ),

    _expr_simple: $ => choice(
      $.variable_expression,
      $.integer_expression,
      $.float_expression,
      $.string_expression,
      $.indented_string_expression,
      $.path_expression,
      $.hpath_expression,
      $.spath_expression,
      $.uri_expression,
      $.parenthesized_expression,
      $.attrset_expression,
      $.let_attrset_expression,
      $.rec_attrset_expression,
      $.list_expression
    ),

    parenthesized_expression: $ => seq('(', field('expression', $._expression), ')'),

    attrset_expression: $ => seq('{', optional($.binding_set), '}'),
    let_attrset_expression: $ => seq('let', '{', optional($.binding_set), '}'),
    rec_attrset_expression: $ => seq('rec', '{', optional($.binding_set), '}'),

    string_expression: $ => seq(
      '"',
      repeat(choice(
        $.string_fragment,
        $.interpolation,
        $.escape_sequence
      )),
      '"'
    ),
    escape_sequence: $ => token.immediate(/\\(.|\s)/), // Can also escape newline.

    indented_string_expression: $ => seq(
      "''",
      repeat(choice(
        alias($._indented_string_fragment, $.string_fragment),
        $.interpolation,
        alias($._indented_escape_sequence, $.escape_sequence),
      )),
      "''"
    ),
    _indented_escape_sequence: $ => token.immediate(/'''|''\$|''\\(.|\s)/), // Can also escape newline.

    binding_set: $ => repeat1(field('binding', choice($.binding, $.inherit, $.inherit_from))),
    binding: $ => seq(field('attrpath', $.attrpath), '=', field('expression', $._expression), ';'),
    inherit: $ => seq('inherit', field('attrs', $.inherited_attrs), ';'),
    inherit_from: $ =>
      seq('inherit', '(', field('expression', $._expression), ')', field('attrs', $.inherited_attrs), ';'),

    attrpath: $ => sep1(field('attr', choice(
      $.identifier,
      $.string_expression,
      $.interpolation,
    )), "."),

    inherited_attrs: $ => repeat1(field('attr', choice(
      $.identifier,
      $.string_expression,
      $.interpolation,
    ))),

    _immediate_interpolation: $ => seq(token.immediate('${'), field('expression', $._expression), '}'),
    interpolation: $ => seq('${', field('expression', $._expression), '}'),

    list_expression: $ => seq('[', repeat(field('element', $._expr_select_expression)), ']'),

    comment: $ => token(choice(
      seq('#', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
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
