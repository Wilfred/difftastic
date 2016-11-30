const PREC = {
  COMMENT: -2,
  AND: -2,
  OR: -2,
  NOT: 5,
  DEFINED: 10,
  ALIAS: 11,
  ASSIGN: 15,
  RESCUE: 16,
  CONDITIONAL: 20,
  RANGE: 25,
  BOOLEAN_OR: 30,
  BOOLEAN_AND: 35,
  RELATIONAL: 40,
  COMPARISON: 45,
  BITWISE_OR: 50,
  BITWISE_AND: 55,
  SHIFT: 60,
  ADDITIVE: 65,
  MULTIPLICATIVE: 70,
  UNARY_MINUS: 75,
  EXPONENTIAL: 80,
  COMPLEMENT: 85,
  UNARY_PLUS: 85,
  REGEX: 100
};

const identifierPattern = /[a-zA-Z_][a-zA-Z0-9_]*(\?|\!)?/;
const operators = ['..', '|', '^', '&', '<=>', '==', '===', '=~', '>', '>=', '<', '<=', '+', '-', '*', '/', '%', '**', '<<', '>>', '~', '+@', '-@', '[]', '[]='];

module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [
    [$._lhs, $.function_call, $.function_call_with_do_block],
    [$._lhs, $.function_call],
    [$._lhs, $.function_call_with_do_block],
    [$.yield]
  ],

  rules: {
    program: $ => seq(optional($._statements), optional(seq('\n__END__', $.uninterpreted))),
    uninterpreted: $ => (/.*/),

    _statements: $ => sepTrailing($._statements, $._statement, $._terminator),

    _statement: $ => choice(
      $._declaration,
      $.undef,
      $.alias,
      $.while_statement,
      $.until_statement,
      $.if_statement,
      $.unless_statement,
      $.for_statement,
      $.begin_statement,
      $.return_statement,
      $.if_modifier,
      $.unless_modifier,
      $.while_modifier,
      $.until_modifier,
      $.rescue_modifier,
      expression($)
    ),

    _declaration: $ => choice(
      $.method_declaration,
      $.class_declaration,
      $.singleton_class_declaration,
      $.module_declaration
    ),

    method_declaration: $ => seq(
      "def",
      optional(seq($.identifier,'.')),
      $._function_name,
      choice(seq("(", optional($.formal_parameters), ")"), seq(optional($.formal_parameters), $._terminator)),
      optional($._statements),
      "end"
    ),

    formal_parameters: $ => commaSep1(choice(
      $.identifier,
      $.splat_parameter,
      $.hash_splat_parameter,
      $.block_parameter,
      $.keyword_parameter,
      $.optional_parameter
    )),

    splat_parameter: $ => seq("*", optional($.identifier)),
    hash_splat_parameter: $ => seq("**", optional($.identifier)),
    block_parameter: $ => seq("&", $.identifier),
    keyword_parameter: $ => seq($.identifier, ":", optional($._simple_expression)),
    optional_parameter: $ => seq($.identifier, "=", $._simple_expression),

    class_declaration: $ => seq("class", $.identifier, optional(seq("<", sep1($.identifier, "::"))), $._terminator, optional($._statements), "end"),

    singleton_class_declaration: $ => seq("class", "<<", $.identifier, $._terminator, optional($._statements), "end"),

    module_declaration: $ => seq("module", $.identifier, $._terminator, optional($._statements), "end"),

    while_statement: $ => seq("while", expression($), $._statement_block),
    until_statement: $ => seq("until", expression($), $._statement_block),
    if_statement: $ => seq("if", expression($), $._then_elsif_else_block),
    unless_statement: $ => seq("unless", expression($), $._then_else_block),
    for_statement: $ => seq("for", $._lhs, "in", expression($), $._statement_block),
    begin_statement: $ => seq(
      "begin",
      optional($._statements),
      repeat($.rescue_block),
      optional($.else_block),
      optional($.ensure_block),
      "end"
    ),

    return_statement: $ => seq("return", optional(expression($))),

    case_expression: $ => seq(
      "case", $._simple_expression, $._terminator,
      repeat($.when_block),
      optional($.else_block),
      "end"
    ),
    when_block: $ => seq("when", commaSep1($.pattern), $._then_block),
    pattern: $ => $._statement,

    if_modifier: $ => seq($._statement, "if", expression($)),
    unless_modifier: $ => seq($._statement, "unless", expression($)),
    while_modifier: $ => seq($._statement, "while", expression($)),
    until_modifier: $ => seq($._statement, "until", expression($)),
    rescue_modifier: $ => prec(PREC.RESCUE, seq($._statement, "rescue", expression($))),

    _statement_block: $ => choice(
      seq("do", optional($._statements), "end"),
      seq($._terminator, optional($._statements), "end")
    ),

    _then_block: $ => seq(choice("then", $._terminator), optional($._statements)),
    elsif_block: $ => seq("elsif", expression($), $._then_block),
    else_block: $ => seq("else", optional($._statements)),
    ensure_block: $ => seq("ensure", optional($._statements)),

    rescue_block: $ => seq(
      "rescue",
      optional($.rescue_arguments),
      optional(seq("=>", $.rescued_exception)),
      $._then_block
    ),

    rescue_arguments: $ => commaSep1($._simple_expression),
    rescued_exception: $ => (identifierPattern),

    _then_else_block: $ => seq($._then_block, optional($.else_block), "end"),
    _then_elsif_else_block: $ => seq(
      $._then_block,
      repeat($.elsif_block),
      optional($.else_block),
      "end"
    ),

    _simple_expression: $ => choice(
      $._primary,
      $.yield,
      $.and,
      $.or,
      $.not,
      $.defined,
      $.assignment,
      $.math_assignment,
      $.conditional_assignment,
      $.conditional,
      $.range,
      $.boolean_or,
      $.boolean_and,
      $.case_expression,
      $.relational,
      $.comparison,
      $.bitwise_or,
      $.bitwise_and,
      $.shift,
      $.additive,
      $.multiplicative,
      $.unary_minus,
      $.exponential,
      $.complement,
      $.symbol,
      $.integer,
      $.float,
      $.boolean,
      $.nil,
      $.string,
      $.subshell,
      $.hash,
      $.regex,
      $.lambda_literal,
      $.lambda_expression
    ),

    _primary: $ => choice(
      seq("(", optional($._statements), ")"),
      $._lhs,
      $.array
    ),

    scope_resolution_expression: $ => prec.left(1, seq(optional($._primary), '::', $.identifier)),
    element_reference: $ => prec.left(1, seq($._primary, "[", $._argument_list, "]")),
    member_access: $ => prec.left(1, seq($._primary, ".", $.identifier)),

    function_call_with_do_block: $ => prec.left(seq(
      choice($._variable, $.scope_resolution_expression, $.member_access),
      choice(
        seq($.argument_list, $.do_block),
        $.do_block
      )
    )),

    function_call: $ => prec.left(seq(
      choice($._variable, $.scope_resolution_expression, $.member_access),
      choice(
        seq($.argument_list, $.block),
        $.argument_list,
        $.block
      )
    )),

    argument_list: $ => prec.left(1, choice(
      seq("(", optional($._argument_list), optional($.block_argument), ")"),
      seq($._argument_list, optional($.block_argument))
    )),

    _argument_list: $ => prec.left(1, commaSep1(choice(
      $._simple_expression,
      $.argument_pair
    ))),

    argument_pair: $ => prec.left(1, seq(choice(
      seq($.symbol, '=>'),
      seq($.identifier, ':')
    ), $._simple_expression)),

    block_argument: $ => seq("&", $._simple_expression),

    do_block: $ => $._do_block,
    _do_block: $ => seq(
      "do",
      optional(seq("|", optional($.formal_parameters), "|")),
      optional($._statements),
      "end"
    ),

    block: $ => $._block,
    _block: $ => seq(
      "{",
      optional(seq("|", optional($.formal_parameters), "|")),
      optional($._statements),
      "}"
    ),

    yield: $ => seq("yield", optional($.argument_list)),

    and: $ => prec.left(PREC.AND, seq(expression($), "and", expression($))),
    or: $ => prec.left(PREC.OR, seq(expression($), "or", expression($))),
    not: $ => prec.right(PREC.NOT, seq("not", expression($))),
    defined: $ => prec(PREC.DEFINED, seq("defined?", expression($))),
    assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, '=', expression($))),
    math_assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, choice('+=', '-=', '*=', '**=', '/='), expression($))),
    conditional_assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, choice('||=', '&&='), expression($))),

    conditional: $ => prec.right(PREC.CONDITIONAL, seq(expression($), '?', expression($), ':', expression($))),
    range: $ => prec.right(PREC.RANGE, seq(expression($), choice('..', '...'), expression($))),

    boolean_or: $ => prec.left(PREC.BOOLEAN_OR, seq(expression($), '||', expression($))),
    boolean_and: $ => prec.left(PREC.BOOLEAN_OR, seq(expression($), '&&', expression($))),

    relational: $ => prec.right(PREC.RELATIONAL, seq(expression($), choice('==', '!=', '===', '<=>', '=~', '!~'), expression($))),
    comparison: $ => prec.left(PREC.COMPARISON, seq(expression($), choice('<', '<=', '>', '>='), expression($))),

    bitwise_or: $ => prec.left(PREC.BITWISE_OR, seq(expression($), choice('^', '|'), expression($))),
    bitwise_and: $ => prec.left(PREC.BITWISE_AND, seq(expression($), '&', expression($))),
    shift: $ => prec.left(PREC.SHIFT, seq(expression($), choice('<<', '>>'), expression($))),

    additive: $ => prec.left(PREC.ADDITIVE, seq(expression($), choice('-', '+'), expression($))),
    multiplicative: $ => prec.left(PREC.MULTIPLICATIVE, seq(expression($), choice('*', '/', '%'), expression($))),

    unary_minus: $ => prec.right(PREC.UNARY_MINUS, seq('-', expression($))),

    exponential: $ => prec.right(PREC.EXPONENTIAL, seq(expression($), '**', expression($))),

    unary_plus: $ => prec.right(PREC.UNARY_PLUS, seq('+', expression($))),
    complement: $ => prec.right(PREC.COMPLEMENT, seq(choice('!', '~'), expression($))),

    _lhs: $ => choice(
      $._variable,
      $.scope_resolution_expression,
      $.element_reference,
      $.member_access,
      $.function_call
    ),
    _variable: $ => choice($.identifier, 'self'),

    identifier: $ => token(seq(repeat(choice('@', '$')), identifierPattern)),

    undef: $ => seq("undef", $._name_symbol_or_operator),
    alias: $ => seq("alias", $._name_symbol_or_operator, $._name_symbol_or_operator),
    _name_symbol_or_operator: $ => prec(PREC.ALIAS, choice($.identifier, $.symbol, $.operator)),
    operator: $ => choice(...operators),

    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('#', /.*/),
      seq(
        '=begin\n',
        repeat(choice(
          /[^=]/,
          /=[^e]/,
          /=e[^n]/,
          /=en[^d]/
        )),
        '=end\n'
      )
    ))),

    symbol: $ => choice(
      token(seq(':', choice(identifierPattern, choice.apply(null, operators)))),
      seq(":'", $._single_quoted_continuation),
      seq(':"', $._double_quoted_continuation),
      seq('%s', choice(
        $._uninterpolated_paren
      ))
    ),

    integer: $ => (/0b[01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0d)?\d(_?\d)*|0x[0-9a-fA-F](_?[0-9a-fA-F])*/),
    float: $ => (/\d(_?\d)*\.\d(_?\d)*([eE]\d(_?\d)*)?/),
    boolean: $ => token(choice('true', 'false', 'TRUE', 'FALSE')),
    nil: $ => token(choice('nil', 'NIL')),

    string: $ => seq(choice(
      $._quoted_string,
      seq(/%Q?/, choice(
        $._interpolated_paren
      )),
      seq(/%q/, choice(
        $._uninterpolated_paren
      ))
    ), repeat($._quoted_string)),

    _quoted_string: $ => choice(
      seq("'", $._single_quoted_continuation),
      seq('"', $._double_quoted_continuation)
    ),
    _single_quoted_continuation: $ => stringBody(blank(), "'"),
    _double_quoted_continuation: $ => stringBody(blank(), '"', $.interpolation),

    _interpolated_paren: $ => stringBody('(', ')', $.interpolation, $._interpolated_paren),
    _uninterpolated_paren: $ => stringBody('(', ')', null, $._uninterpolated_paren),
    interpolation: $ => seq('#{', expression($), '}'),

    subshell: $ => choice(
      stringBody('`', '`'),
      seq('%x', choice(
        $._interpolated_paren
      ))
    ),

    array: $ => choice(
      seq('[', $._array_items, ']'),
      seq(/%[wi]/, choice(
        $._uninterpolated_paren
      )),
      seq(/%[WI]/, choice(
        $._interpolated_paren
      ))
    ),

    _array_items: $ => optional(seq(expression($), optional(seq(',', $._array_items)))),

    hash: $ => prec(1, seq('{', optional($._hash_items), '}')),
    _hash_items: $ => seq($.pair, optional(seq(',', optional($._hash_items)))),

    pair: $ => prec(-1, seq(choice(
      seq(expression($), '=>'),
      seq($.identifier, ':')
    ), expression($))),

    regex: $ => prec(PREC.REGEX, choice(
      regexBody('/', '/', $.interpolation),
      seq('%r', choice(
        $._regex_interpolated_paren
      ))
    )),

    _regex_interpolated_paren: $ => regexBody('(', ')', $.interpolation, $._regex_interpolated_paren),

    lambda_literal: $ => seq(
      '->',
      optional(choice(
        seq('(', optional($.formal_parameters), ')'),
        $.identifier
      )),
      choice($._lambda_block, $._lambda_do_block)
    ),

    _lambda_block: $ => seq("{", optional($._statements), "}"),
    _lambda_do_block: $ => seq("do", optional($._statements), "end"),

    lambda_expression: $ => seq(
      'lambda',
      choice($._block, $._do_block)
    ),

    _function_name: $ => choice($.identifier, choice(...operators)),

    _line_break: $ => '\n',
    _terminator: $ => choice($._line_break, ';'),
  }
});

// Describes the body of a string literal.
// open          - String opening character delimiter (e.g. '/', or '{').
// close         - String closing character delimiter (e.g. '/', or '}').
// interpolation - $.interpolation (optional, potentially recursive).
// self          - Recursive stringBody (optional).
//
// Returns a sequence.
function stringBody (open, close, interpolation, self) {
  var disallowedContentChars = [close, '\\', '\n']
  var contentPatterns = []
  var contents = []

  // If the string is delimited by `\`, don't allow `\` as an escape character.
  // E.g %q\abc\
  if (close != '\\') {
    contentPatterns.push('\\\\.')
  }

  // If the string is delimited by `#`, interpolation isn't allowed.
  if (close == '#') {
    interpolation = null
  }

  if (interpolation) {
    contents.push(interpolation)
    disallowedContentChars.push('#')
    contents.push(/#[^{}]/)
  }

  if (self) {
    contents.push(self)
    disallowedContentChars.push(open)
  }

  contentPatterns.push(noneOf(disallowedContentChars))
  contents.push(RegExp(contentPatterns.join('|')))

  return seq(
    open,
    repeat(choice(...contents)),
    close
  )
}

// Describes the body of a regex.
// open          - String opening character delimiter (e.g. '/', or '{').
// close         - String closing character delimiter (e.g. '/', or '}').
// interpolation - $.interpolation (optional).
// self          - Recursive regexBody (optional).
//
// Returns a sequence.
function regexBody (open, close, interpolation, self) {
  var disallowedContentChars = [open, close, '[', '\\', '\n']
  var contentPatterns = ['\\[[^\\]\\n]*\\]']
  var contents = []

  // If the regex is delimited by `\`, don't allow `\` as an escape character.
  // E.g. %r\abc\
  if (close != '\\') {
    contentPatterns.push('\\\\.')
  }

  // If the regex is delimited by `#`, interpolation isn't allowed.
  // E.g. %r#abc#
  if (close == '#') {
    interpolation = null
  }

  if (interpolation) {
    contents.push(interpolation)
    disallowedContentChars.push('#')
    contents.push(/#[^{}]/)
  }

  if (self) {
    contents.push(self)
  }

  contentPatterns.push(noneOf(disallowedContentChars))
  contents.push(RegExp(contentPatterns.join('|')))

  return seq(
    open,
    repeat(choice(...contents)),
    RegExp('\\' + close + '[a-z]*')
  )
}

function expression ($) {
  return choice(
    $._simple_expression,
    $.function_call_with_do_block
  )
}

function sepTrailing (self, rule, separator) {
  return choice(rule, seq(rule, separator, optional(self)))
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}

function noneOf (characterArray) {
  var pattern = '[^'
  for (let character of characterArray) {
    pattern += '\\' + character;
  }
  return pattern + ']'
}
