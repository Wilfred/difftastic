const PREC = {
  COMMENT: -1,
  AND: -1,
  OR: -1,
  NOT: 5,
  DEFINED: 10,
  ASSIGN: 15,
  RESCUE: 16,
  KW_ARG: 17,
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
  REGEX: 100,
};

// TODO: Enable rest of unbalanced delimiters. These are rarely used in real
// Ruby code and cause an explosion of lex and parse states along with 20+ min
// generate/build times.
// const unbalancedDelimiters = '!@#$%^&*)]}>|\\=/+-~`\'",.?:;_'.split('');
const unbalancedDelimiters = '#/\\'.split('');
const identifierPattern = /[a-zA-Z_][a-zA-Z0-9_]*(\?|\!)?/;
const operators = ['..', '|', '^', '&', '<=>', '==', '===', '=~', '>', '>=', '<', '<=', '+', '-', '*', '/', '%', '**', '<<', '>>', '~', '+@', '-@', '[]', '[]='];

module.exports = grammar({
  name: 'ruby',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [
    [$.function_call, $._lhs],
    [$.argument_list, $._primary],
    [$.argument_list, $._statement],
    [$.argument_list],
    [$._argument_list],
    [$._argument_list, $._statement],
    // [$.function_call, $.scope_resolution_expression],
  ],

  rules: {
    program: $ => seq(optional($._statements), optional(seq('\n__END__', $.uninterpreted))),
    uninterpreted: $ => (/.*/),

    _statements: $ => sepTrailing($._statements, $._statement, $._terminator),

    _statement: $ => choice(
      $._declaration,
      // seq($._call, "do", optional("|", commaSep($._block_variable), "|"), optional($._statements), "end"),
      seq("undef", $._function_name),
      seq("alias", $._function_name, $._function_name),
      $.while_statement,
      $.until_statement,
      $.if_statement,
      $.unless_statement,
      $.for_statement,
      $.begin_statement,
      $.return_statement,
      $.case_statement,
      $.if_modifier,
      $.unless_modifier,
      $.while_modifier,
      $.until_modifier,
      $.rescue_modifier,
      $._expression
    ),

    _declaration: $ => choice(
      $.method_declaration,
      $.class_declaration,
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
      $.keyword_parameter,
      $._positional_parameter
    )),

    keyword_parameter: $ => seq($.identifier, ":", optional($._literal)),
    positional_parameter: $ => choice(
      "*",
      "**",
      seq($.identifier, "=", $._literal)
    ),
    _positional_parameter: $ => choice(
      seq(optional(choice("*", "**", "&")), $.identifier),
      $.positional_parameter
    ),

    class_declaration: $ => seq("class", $.identifier, optional(seq("<", sep1($.identifier, "::"))), $._terminator, optional($._statements), "end"),

    module_declaration: $ => seq("module", $.identifier, $._terminator, optional($._statements), "end"),

    while_statement: $ => seq("while", $._expression, $._statement_block),
    until_statement: $ => seq("until", $._expression, $._statement_block),
    if_statement: $ => seq("if", $._expression, $._then_elsif_else_block),
    unless_statement: $ => seq("unless", $._expression, $._then_else_block),
    for_statement: $ => seq("for", $._lhs, "in", $._expression, $._statement_block),
    begin_statement: $ => seq(
      "begin",
      optional($._statements),
      repeat($.rescue_block),
      optional($.else_block),
      optional($.ensure_block),
      "end"
    ),

    return_statement: $ => seq("return", optional($._expression)),

    case_statement: $ => seq(
      "case", $._statement, $._line_break,
      repeat($.when_block),
      optional($.else_block),
      "end"
    ),
    when_block: $ => seq("when", $.pattern, $._then_block),

    pattern: $ => $._statement,

    if_modifier: $ => seq($._statement, "if", $._expression),
    unless_modifier: $ => seq($._statement, "unless", $._expression),
    while_modifier: $ => seq($._statement, "while", $._expression),
    until_modifier: $ => seq($._statement, "until", $._expression),
    rescue_modifier: $ => prec(PREC.RESCUE, seq($._statement, "rescue", $._expression)),

    _statement_block: $ => choice(
      $._do_block,
      seq($._terminator, optional($._statements), "end")
    ),
    _do_block: $ => seq("do", optional($._statements), "end"),

    _then_block: $ => seq(choice("then", $._terminator), optional($._statements)),
    elsif_block: $ => seq("elsif", $._expression, $._then_block),
    else_block: $ => seq("else", optional($._statements)),
    ensure_block: $ => seq("ensure", optional($._statements)),

    rescue_block: $ => seq(
      "rescue",
      optional($.rescue_arguments),
      optional(seq("=>", $.rescued_exception)),
      $._then_block
    ),

    rescue_arguments: $ => commaSep1($._expression),
    rescued_exception: $ => (identifierPattern),

    _then_else_block: $ => seq($._then_block, optional($.else_block), "end"),
    _then_elsif_else_block: $ => seq(
      $._then_block,
      repeat($.elsif_block),
      optional($.else_block),
      "end"
    ),

    _expression: $ => choice(
      $._primary,
      $.function_call,
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
      $._literal
    ),

    _primary: $ => choice(
      seq("(", optional($._statements), ")"),
      $._lhs
    ),

    scope_resolution_expression: $ => prec.left(seq(optional($._primary), '::', $.identifier)),
    element_reference: $ => prec.left(seq($._primary, "[", $._argument_list, "]")),
    member_access: $ => prec.left(seq($._primary, ".", $.identifier)),

    function_call: $ => prec.left(-1, seq(
      choice($._variable, $.scope_resolution_expression, $.member_access),
      $.argument_list
    )),

    argument_list: $ => prec.left(choice(
      seq("(", optional($._argument_list), ")"),
      $._argument_list
    )),

    _argument_list: $ => prec.left(commaSep1(choice(
      $._expression,
      $.argument_pair
    ))),

    argument_pair: $ => prec(PREC.KW_ARG, seq(choice(
      seq($.symbol, '=>'),
      seq($.identifier, ':')
    ), $._expression)),

    yield: $ => seq("yield", optional($._expression)),

    and: $ => prec.left(PREC.AND, seq($._expression, "and", $._expression)),
    or: $ => prec.left(PREC.OR, seq($._expression, "or", $._expression)),
    not: $ => prec.right(PREC.NOT, seq("not", $._expression)),
    defined: $ => prec(PREC.DEFINED, seq("defined?", $._expression)),
    assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, '=', $._expression)),
    math_assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, choice('+=', '-=', '*=', '**=', '/='), $._expression)),
    conditional_assignment: $ => prec.right(PREC.ASSIGN, seq($._lhs, choice('||=', '&&='), $._expression)),

    conditional: $ => prec.right(PREC.CONDITIONAL, seq($._expression, '?', $._expression, ':', $._expression)),
    range: $ => prec.right(PREC.RANGE, seq($._expression, choice('..', '...'), $._expression)),

    boolean_or: $ => prec.left(PREC.BOOLEAN_OR, seq($._expression, '||', $._expression)),
    boolean_and: $ => prec.left(PREC.BOOLEAN_OR, seq($._expression, '&&', $._expression)),

    relational: $ => prec.right(PREC.RELATIONAL, seq($._expression, choice('==', '!=', '===', '<=>', '=~', '!~'), $._expression)),
    comparison: $ => prec.left(PREC.COMPARISON, seq($._expression, choice('<', '<=', '>', '>='), $._expression)),

    bitwise_or: $ => prec.left(PREC.BITWISE_OR, seq($._expression, choice('^', '|'), $._expression)),
    bitwise_and: $ => prec.left(PREC.BITWISE_AND, seq($._expression, '&', $._expression)),
    shift: $ => prec.left(PREC.SHIFT, seq($._expression, choice('<<', '>>'), $._expression)),

    additive: $ => prec.left(PREC.ADDITIVE, seq($._expression, choice('-', '+'), $._expression)),
    multiplicative: $ => prec.left(PREC.MULTIPLICATIVE, seq($._expression, choice('*', '/', '%'), $._expression)),

    unary_minus: $ => prec.right(PREC.UNARY_MINUS, seq('-', $._expression)),

    exponential: $ => prec.right(PREC.EXPONENTIAL, seq($._expression, '**', $._expression)),

    unary_plus: $ => prec.right(PREC.UNARY_PLUS, seq('+', $._expression)),
    complement: $ => prec.right(PREC.COMPLEMENT, seq(choice('!', '~'), $._expression)),

    _block_variable: $ => choice($._lhs, $._mlhs),
    _mlhs: $ => choice(
      seq(commaSep1($._mlhs_item), optional(seq("*", optional($._lhs)))),
      seq("*", optional($._lhs))
    ),
    _mlhs_item: $ => choice($._lhs, seq("(", $._mlhs, ")")),
    _lhs: $ => choice(
      $._variable,
      $.scope_resolution_expression,
      $.element_reference,
      $.member_access
    ),
    _variable: $ => choice($.identifier, 'self'),

    identifier: $ => token(seq(repeat(choice('@', '$')), identifierPattern)),

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

    _literal: $ => choice(
      $.symbol,
      $.integer,
      $.float,
      $.boolean,
      $.nil,
      $.string,
      $.subshell,
      $.array,
      $.hash,
      $.regex,
      $.lambda_literal,
      $.lambda_expression
    ),

    symbol: $ => choice(
      token(seq(':', choice(identifierPattern, choice.apply(null, operators)))),
      seq(":'", $._single_quoted_continuation),
      seq(':"', $._double_quoted_continuation),
      seq('%s', choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d))),
        $._uninterpolated_angle,
        $._uninterpolated_bracket,
        $._uninterpolated_paren,
        $._uninterpolated_brace
      ))
    ),

    integer: $ => (/0b[01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0d)?\d(_?\d)*|0x[0-9a-fA-F](_?[0-9a-fA-F])*/),
    float: $ => (/\d(_?\d)*\.\d(_?\d)*([eE]\d(_?\d)*)?/),
    boolean: $ => token(choice('true', 'false', 'TRUE', 'FALSE')),
    nil: $ => token(choice('nil', 'NIL')),

    string: $ => seq(choice(
      $._quoted_string,
      seq(/%Q?/, choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d, $.interpolation))),
        $._interpolated_angle,
        $._interpolated_bracket,
        $._interpolated_paren,
        $._interpolated_brace
      )),
      seq(/%q/, choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d))),
        $._uninterpolated_angle,
        $._uninterpolated_bracket,
        $._uninterpolated_paren,
        $._uninterpolated_brace
      ))
    ), repeat($._quoted_string)),

    _quoted_string: $ => choice(
      seq("'", $._single_quoted_continuation),
      seq('"', $._double_quoted_continuation)
    ),
    _single_quoted_continuation: $ => stringBody(blank(), "'"),
    _double_quoted_continuation: $ => stringBody(blank(), '"', $.interpolation),

    _interpolated_angle: $ => stringBody('<', '>', $.interpolation, $._interpolated_angle),
    _interpolated_bracket: $ => stringBody('[', ']', $.interpolation, $._interpolated_bracket),
    _interpolated_paren: $ => stringBody('(', ')', $.interpolation, $._interpolated_paren),
    _interpolated_brace: $ => stringBody('{', '}', $.interpolation, $._interpolated_brace),
    _uninterpolated_angle: $ => stringBody('<', '>', null, $._uninterpolated_angle),
    _uninterpolated_bracket: $ => stringBody('[', ']', null, $._uninterpolated_bracket),
    _uninterpolated_paren: $ => stringBody('(', ')', null, $._uninterpolated_paren),
    _uninterpolated_brace: $ => stringBody('{', '}', null, $._uninterpolated_brace),
    interpolation: $ => seq('#{', $._expression, '}'),

    subshell: $ => choice(
      stringBody('`', '`'),
      seq('%x', choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d, $.interpolation))),
        $._interpolated_angle,
        $._interpolated_bracket,
        $._interpolated_paren,
        $._interpolated_brace
      ))
    ),

    array: $ => choice(
      seq('[', $._array_items, ']'),
      seq(/%[wi]/, choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d))),
        $._uninterpolated_angle,
        $._uninterpolated_bracket,
        $._uninterpolated_paren,
        $._uninterpolated_brace
      )),
      seq(/%[WI]/, choice(
        choice.apply(null, unbalancedDelimiters.map(d => stringBody(d, d, $.interpolation))),
        $._interpolated_angle,
        $._interpolated_bracket,
        $._interpolated_paren,
        $._interpolated_brace
      ))
    ),

    _array_items: $ => optional(seq($._expression, optional(seq(',', $._array_items)))),

    hash: $ => seq('{', $._hash_items, '}'),
    _hash_items: $ => optional(seq($.pair, optional(seq(',', $._hash_items)))),

    pair: $ => seq(choice(
      seq($._expression, '=>'),
      seq($.identifier, ':')
    ), $._expression),

    regex: $ => prec(PREC.REGEX, choice(
      regexBody('/', '/', $.interpolation),
      seq('%r', choice(
        choice.apply(null, unbalancedDelimiters.map(d => regexBody(d, d, $.interpolation))),
        $._regex_interpolated_angle,
        $._regex_interpolated_bracket,
        $._regex_interpolated_paren,
        $._regex_interpolated_brace
      ))
    )),

    _regex_interpolated_angle: $ => regexBody('<', '>', $.interpolation, $._regex_interpolated_angle),
    _regex_interpolated_bracket: $ => regexBody('[', ']', $.interpolation, $._regex_interpolated_bracket),
    _regex_interpolated_paren: $ => regexBody('(', ')', $.interpolation, $._regex_interpolated_paren),
    _regex_interpolated_brace: $ => regexBody('{', '}', $.interpolation, $._regex_interpolated_brace),

    lambda_literal: $ => seq(
      '->',
      optional(choice(
        seq('(', optional($.formal_parameters), ')'),
        $.identifier
      )),
      '{',
      optional($._statements),
      '}'
    ),

    lambda_expression: $ => seq(
      'lambda',
      '{',
      optional(seq('|', optional($.formal_parameters), '|')),
      optional($._statements),
      '}'
    ),

    _function_name: $ => choice($.identifier, choice.apply(null, operators)),

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
