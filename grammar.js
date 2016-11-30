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
};

const identifierPattern = /[a-zA-Z_][a-zA-Z0-9_]*(\?|\!)?/;
const constantPattern = /[A-Z_][a-zA-Z0-9_]*/; // (e.g. FOO)
// Global variables start with $ and can be:
// - Regex back references (e.g. $&, $', $', and $+)
// - Number global references (e.g. $1)
// - User defined (e.g. $FOO)
const globalVariablePattern = /\$(([&`'+])|([1-9][0-9]*)|([a-zA-Z_][a-zA-Z0-9_]*))/;
const instanceVariablePattern = /@[a-zA-Z_][a-zA-Z0-9_]*/; // (e.g. @foo)
const classVariablePattern = /@@[a-zA-Z_][a-zA-Z0-9_]*/; // (e.g. @@foo)
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
    [$._lhs, $.function_call_with_do_block]
  ],

  rules: {
    program: $ => seq(optional($._statements), optional(seq('\n__END__', $.uninterpreted))),
    uninterpreted: $ => (/.*/),

    _statements: $ => sepTrailing($._statements, $._statement, $._terminator),

    _statement: $ => choice(
      $.method_declaration,
      $.class_declaration,
      $.singleton_class_declaration,
      $.module_declaration,
      $.undef,
      $.alias,
      $.if_modifier,
      $.unless_modifier,
      $.while_modifier,
      $.until_modifier,
      $.rescue_modifier,
      expression($)
    ),

    method_declaration: $ => seq(
      "def",
      optional(seq($._identifier,'.')),
      $._function_name,
      choice(seq("(", optional($.formal_parameters), ")"), seq(optional($.formal_parameters), $._terminator)),
      optional($._statements),
      "end"
    ),

    formal_parameters: $ => commaSep1($._formal_parameter),
    _formal_parameter: $ => choice(
      $._identifier,
      $.splat_parameter,
      $.hash_splat_parameter,
      $.block_parameter,
      $.keyword_parameter,
      $.optional_parameter
    ),

    splat_parameter: $ => seq("*", optional($._identifier)),
    hash_splat_parameter: $ => seq("**", optional($._identifier)),
    block_parameter: $ => seq("&", $._identifier),
    keyword_parameter: $ => seq($._identifier, ":", optional($._simple_expression)),
    optional_parameter: $ => seq($._identifier, "=", $._simple_expression),

    class_declaration: $ => seq("class", $._identifier, optional(seq("<", sep1($._identifier, "::"))), $._terminator, optional($._statements), "end"),

    singleton_class_declaration: $ => seq("class", "<<", $._identifier, $._terminator, optional($._statements), "end"),

    module_declaration: $ => seq("module", $._identifier, $._terminator, optional($._statements), "end"),

    return: $ => prec.right(seq('return', optional($.argument_list))),
    yield: $ => prec.right(seq('yield', optional($.argument_list))),

    if_modifier: $ => seq($._statement, "if", expression($)),
    unless_modifier: $ => seq($._statement, "unless", expression($)),
    while_modifier: $ => seq($._statement, "while", expression($)),
    until_modifier: $ => seq($._statement, "until", expression($)),
    rescue_modifier: $ => prec(PREC.RESCUE, seq($._statement, "rescue", expression($))),

    while: $ => seq('while', expression($), $._do, optional($._statements), 'end'),
    until: $ => seq('until', expression($), $._do, optional($._statements), 'end'),
    for: $ => seq('for', $._lhs, 'in', expression($), $._do, optional($._statements), 'end'),
    _do: $ => choice('do', $._terminator),

    case: $ => seq(
      'case',
      optional($._simple_expression),
      repeat($._terminator),
      $.when,
      'end'
    ),
    when: $ => seq(
      'when',
      commaSep1($.pattern),
      $._then,
      optional($._statements),
      choice(optional($.else), $.when)
    ),
    pattern: $ => $._statement,

    if: $ => seq(
      'if',
      expression($),
      $._then,
      optional($._statements),
      optional($._if_tail),
      'end'
    ),
    unless: $ => seq(
      'unless',
      expression($),
      $._then,
      optional($._statements),
      optional($.else),
      'end'
    ),
    elsif: $ => seq(
      'elsif',
      expression($),
      $._then,
      optional($._statements),
      optional($._if_tail)
    ),
    else: $ => seq('else', optional($._statements)),
    _then: $ => choice($._terminator, 'then', seq($._terminator, 'then')),
    _if_tail: $ => choice(
      $.else,
      $.elsif
    ),

    begin: $ => seq('begin', bodyStatement($), 'end'),
    ensure: $ => seq('ensure', optional($._statements)),
    rescue: $ => seq(
      'rescue',
      optional($.rescue_arguments),
      optional(seq('=>', $.rescued_exception)),
      $._then,
      optional($._statements),
      optional($.rescue)
    ),
    rescue_arguments: $ => commaSep1($._simple_expression),
    rescued_exception: $ => (identifierPattern),

    // TODO: Make this look a little more like arg
    _simple_expression: $ => choice(
      $._primary,
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
      $.symbol,
      $.integer,
      $.float,
      $.string,
      $.subshell,
      $.hash,
      $.regex
    ),

    // TODO: Make this look a little more like primary
    _primary: $ => choice(
      seq("(", optional($._statements), ")"),
      $._lhs,
      $.lambda,
      $.array,
      $.begin,
      $.while,
      $.until,
      $.if,
      $.unless,
      $.for,
      $.case,
      $.return,
      $.yield
    ),

    scope_resolution_expression: $ => prec.left(1, seq(optional($._primary), '::', $._identifier)),
    element_reference: $ => prec.left(1, seq($._primary, "[", $._argument_list, "]")),

    // TODO: Needs a new name. send? but then you'd want to include args
    member_access: $ => prec.left(1, seq($._primary, ".", $._identifier)),

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
      seq($._identifier, ':')
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
    _variable: $ => choice(
      $._identifier,
      $.nil,
      $.self,
      $.boolean,
      $.keyword__FILE__,
      $.keyword__LINE__,
      $.keyword__ENCODING__
    ),

    instance_variable: $ => (instanceVariablePattern),
    class_variable: $ => (classVariablePattern),
    global_variable: $ => (globalVariablePattern),
    constant: $ => (constantPattern),
    identifier: $ => (identifierPattern),
    operator: $ => choice(...operators),
    _identifier: $ => choice(
      $.instance_variable,
      $.class_variable,
      $.global_variable,
      $.identifier,
      $.constant
    ),

    _function_name: $ => choice($._identifier, $.symbol, $.operator),
    _undef_list: $ => choice($._function_name, prec(1, seq($._undef_list, ',', $._function_name))),
    undef: $ => seq("undef", $._undef_list),
    alias: $ => seq("alias", $._function_name, $._function_name),

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
    self: $ => 'self',
    nil: $ => token(choice('nil', 'NIL')),
    keyword__FILE__: $ => '__FILE__',
    keyword__LINE__: $ => '__LINE__',
    keyword__ENCODING__: $ => '__ENCODING__',

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
      seq('[', $._array_function_names, ']'),
      seq(/%[wi]/, choice(
        $._uninterpolated_paren
      )),
      seq(/%[WI]/, choice(
        $._interpolated_paren
      ))
    ),

    _array_function_names: $ => optional(seq(expression($), optional(seq(',', $._array_function_names)))),

    hash: $ => prec(1, seq('{', optional($._hash_function_names), '}')),
    _hash_function_names: $ => seq($.pair, optional(seq(',', optional($._hash_function_names)))),

    pair: $ => prec(-1, seq(choice(
      seq(expression($), '=>'),
      seq($._identifier, ':')
    ), expression($))),

    regex: $ => choice(
      regexBody('/', '/', $.interpolation),
      seq('%r', choice(
        $._regex_interpolated_paren
      ))
    ),

    _regex_interpolated_paren: $ => regexBody('(', ')', $.interpolation, $._regex_interpolated_paren),

    lambda: $ => choice(
      seq(
        '->',
        optional(choice(
          seq('(', optional($.formal_parameters), ')'),
          $._identifier
          // TODO: can be any single formal_parameter
          // $._formal_parameter
        )),
        choice(
          seq("{", optional($._statements), "}"),
          seq("do", optional($._statements), "end")
        )
      ),
      seq('lambda', choice($._block, $._do_block))
    ),

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

function bodyStatement($) {
  return seq(
    optional($._statements),
    optional($.rescue),
    optional($.else),
    optional($.ensure)
  )
}
