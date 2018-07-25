const PREC = {
  COMMENT: -2,
  CURLY_BLOCK: 1,
  DO_BLOCK: -1,

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
};

const IDENTIFIER_CHARS = /[^\s:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]*/;
const LOWER_ALPHA_CHAR = /[^\sA-Z0-9:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]/;
const ALPHA_CHAR = /[^\s0-9:;`"'@$#.,|^&<=>+\-*/\\%?!~()\[\]{}]/;

module.exports = grammar({
  name: 'ruby',

  externals: $ => [
    $._line_break,

    // Delimited literals
    $._simple_symbol,
    $._string_start,
    $._symbol_start,
    $._subshell_start,
    $._regex_start,
    $._string_array_start,
    $._symbol_array_start,
    $._heredoc_body_start,
    $._string_content,
    $._heredoc_content,
    $._string_end,
    $.heredoc_end,
    $.heredoc_beginning,

    // Whitespace-sensitive tokens
    '/',
    $._element_reference_left_bracket,
    $._block_ampersand,
    $._splat_star,
    $._argument_list_left_paren,
    $._infix_scope_colons,
    $._keyword_colon,
    $._unary_minus,
    $._binary_minus,
    $._binary_star,
    $._singleton_class_left_angle_left_langle,
    $._identifier_hash_key
  ],

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => seq(
      optional($._statements),
      optional(seq(
        '__END__',
        $._line_break,
        $.uninterpreted)
      )
    ),

    uninterpreted: $ => /(.|\s)*/,

    _statements: $ => seq(
      sep1($._top_level_statement, $._terminator),
      optional($._terminator)
    ),

    _top_level_statement: $ => choice(
      $._statement,
      $.begin_block,
      $.end_block
    ),

    begin_block: $ => seq("BEGIN", "{", optional($._statements), "}"),
    end_block: $ => seq("END", "{", optional($._statements), "}"),

    _statement: $ => choice(
      $.undef,
      $.alias,
      $.if_modifier,
      $.unless_modifier,
      $.while_modifier,
      $.until_modifier,
      $.rescue_modifier,
      $.empty_statement,
      $._arg
    ),

    method: $ => seq('def', $._method_rest),

    singleton_method: $ => seq(
      'def',
      seq(
        choice($._variable, seq('(', $._arg, ')')),
        choice('.', '::')
      ),
      $._method_rest
    ),

    _method_rest: $ => seq(
      $._method_name,
      choice($.method_parameters, $._terminator),
      $._body_statement
    ),

    method_parameters: $ => prec.right(choice(
      seq('(', commaSep($._formal_parameter), ')', optional($._terminator)),
      seq($._simple_formal_parameter, $._terminator),
      seq($._simple_formal_parameter, ',', commaSep1($._formal_parameter), $._terminator)
    )),

    lambda_parameters: $ => prec.right(choice(
      seq('(', commaSep($._formal_parameter), ')'),
      commaSep1($._simple_formal_parameter)
    )),

    block_parameters: $ => seq(
      '|',
      seq(commaSep($._formal_parameter), optional(',')),
      optional(seq(';', sep1($.identifier, ','))), // Block shadow args e.g. {|; a, b| ...}
      '|'
    ),

    _formal_parameter: $ => choice($._simple_formal_parameter, $.destructured_parameter),

    _simple_formal_parameter: $ => choice(
      $.identifier,
      $.splat_parameter,
      $.hash_splat_parameter,
      $.block_parameter,
      $.keyword_parameter,
      $.optional_parameter
    ),

    destructured_parameter: $ => seq('(', commaSep1($._formal_parameter), ')'),
    splat_parameter: $ => seq('*', optional($.identifier)),
    hash_splat_parameter: $ => seq('**', optional($.identifier)),
    block_parameter: $ => seq('&', choice($.identifier, $.lambda)),
    keyword_parameter: $ => prec.right(PREC.BITWISE_OR + 1, seq($.identifier, $._keyword_colon, optional($._arg))),
    optional_parameter: $ => prec(PREC.BITWISE_OR + 1, seq($.identifier, '=', $._arg)),

    class: $ => seq(
      'class',
      choice($.constant, $.scope_resolution),
      optional($.superclass),
      $._terminator,
      $._body_statement
    ),

    superclass: $ => seq('<', $._arg),

    singleton_class: $ => seq(
      'class',
      alias($._singleton_class_left_angle_left_langle, '<<'),
      $._arg,
      $._terminator,
      $._body_statement
    ),

    module: $ => seq(
      'module',
      choice($.constant, $.scope_resolution),
      choice(
        seq($._terminator, $._body_statement),
        'end'
      )
    ),

    return: $ => prec.left(seq('return', optional($.argument_list))),
    yield: $ => prec.left(seq('yield', optional($.argument_list))),
    break: $ => prec.left(seq('break', optional($.argument_list))),
    next: $ => prec.left(seq('next', optional($.argument_list))),
    redo: $ => 'redo',
    retry: $ => 'retry',

    if_modifier: $ => prec(PREC.RESCUE, seq($._statement, 'if', $._arg)),
    unless_modifier: $ => prec(PREC.RESCUE, seq($._statement, 'unless', $._arg)),
    while_modifier: $ => prec(PREC.RESCUE, seq($._statement, 'while', $._arg)),
    until_modifier: $ => prec(PREC.RESCUE, seq($._statement, 'until', $._arg)),
    rescue_modifier: $ => prec(PREC.RESCUE, seq($._statement, 'rescue', $._arg)),

    while: $ => seq('while', $._arg, $._do, optional($._statements), 'end'),
    until: $ => seq('until', $._arg, $._do, optional($._statements), 'end'),
    for: $ => seq('for', $._mlhs, $.in, $._do, optional($._statements), 'end'),
    in: $ => seq('in', $._arg),
    _do: $ => choice('do', $._terminator),

    case: $ => seq(
      'case',
      optional($._arg),
      $._terminator,
      repeat(';'),
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
    pattern: $ => choice($._arg, $.splat_argument),

    if: $ => seq(
      'if',
      $._statement,
      $._then,
      optional($._terminator),
      optional($._statements),
      optional($._if_tail),
      'end'
    ),

    unless: $ => seq(
      'unless',
      $._statement,
      $._then,
      optional($._statements),
      optional($.else),
      'end'
    ),

    elsif: $ => seq(
      'elsif',
      $._statement,
      $._then,
      optional($._statements),
      optional($._if_tail)
    ),

    else: $ => seq('else', optional($._terminator), optional($._statements)),

    _then: $ => choice($._terminator, 'then', seq($._terminator, 'then')),

    _if_tail: $ => choice(
      $.else,
      $.elsif
    ),

    begin: $ => seq('begin', optional($._terminator), $._body_statement),
    ensure: $ => seq('ensure', optional($._statements)),
    rescue: $ => seq(
      'rescue',
      optional($.exceptions),
      optional($.exception_variable),
      $._then,
      optional($._statements),
      optional($.rescue)
    ),
    exceptions: $ => commaSep1($._arg_or_splat_arg),
    exception_variable: $ => seq('=>', $._lhs),

    _body_statement: $ => seq(
      optional($._statements),
      optional($.rescue),
      optional($.else),
      optional($.ensure),
      'end'
    ),

    _arg: $ => choice(
      $._primary,
      $.assignment,
      $.operator_assignment,
      $.conditional,
      $.range,
      $.binary,
      $.unary
    ),

    _primary: $ => choice(
      $.parenthesized_statements,
      $._lhs,
      $.array,
      $.string_array,
      $.symbol_array,
      $.hash,
      $.subshell,
      $.symbol,
      $.integer,
      $.float,
      $.complex,
      $.rational,
      $.string,
      $.character,
      $.chained_string,
      $.regex,
      $.lambda,
      $.method,
      $.singleton_method,
      $.class,
      $.singleton_class,
      $.module,
      $.begin,
      $.while,
      $.until,
      $.if,
      $.unless,
      $.for,
      $.case,
      $.return,
      $.yield,
      $.break,
      $.next,
      $.redo,
      $.retry,
      $.heredoc_beginning
    ),

    parenthesized_statements: $ => seq('(', optional($._statements), ')'),

    element_reference: $ => prec.left(1, seq(
      $._primary,
      alias($._element_reference_left_bracket, '['),
      optional($._argument_list_with_trailing_comma),
      optional($.heredoc_body),
      ']'
    )),

    scope_resolution: $ => prec.left(1, seq(
      choice(
        '::',
        seq($._primary, alias($._infix_scope_colons, '::'))
      ),
      choice($.identifier, $.constant)
    )),

    call: $ => prec.left(PREC.BITWISE_AND + 1, seq(
      $._primary,
      choice('.', '&.'),
      repeat($.heredoc_body),
      choice($.identifier, $.operator, $.constant, $.argument_list_with_parens)
    )),

    method_call: $ => {
      const receiver = choice($._variable, $.scope_resolution, $.call)

      return choice(
        seq(receiver, $.argument_list),
        seq(receiver, prec(PREC.CURLY_BLOCK, seq($.argument_list, $.block))),
        seq(receiver, prec(PREC.DO_BLOCK, seq($.argument_list, $.do_block))),
        prec(PREC.CURLY_BLOCK, seq(receiver, $.block)),
        prec(PREC.DO_BLOCK, seq(receiver, $.do_block))
      )
    },

    argument_list: $ => prec.right(seq(
      choice(
        $._argument_list_with_parens,
        sep1($._argument, seq(',', optional($.heredoc_body)))
      ),
      repeat($.heredoc_body)
    )),

    argument_list_with_parens: $ => $._argument_list_with_parens,

    _argument_list_with_parens: $ => seq(
      alias($._argument_list_left_paren, '('),
      optional($._argument_list_with_trailing_comma),
      optional($.heredoc_body),
      ')'
    ),

    _argument_list_with_trailing_comma: $ => sepTrailing(
      $._argument_list_with_trailing_comma,
      $._argument,
      prec.right(seq(',', optional($.heredoc_body)))
    ),

    _argument: $ => choice(
      $._arg,
      $.splat_argument,
      $.hash_splat_argument,
      $.block_argument,
      $.pair
    ),

    splat_argument: $ => seq($._splat_star, $._arg),
    hash_splat_argument: $ => seq('**', $._arg),
    block_argument: $ => seq($._block_ampersand, $._arg),

    do_block: $ => seq(
      'do',
      optional($._terminator),
      optional(seq($.block_parameters, optional($._terminator))),
      optional($._statements),
      'end'
    ),

    block: $ => prec(PREC.CURLY_BLOCK, seq(
      '{',
      optional($.block_parameters),
      optional($._statements),
      '}'
    )),

    assignment: $ => choice(
      prec(1, seq($._lhs, '=', $._arg_or_splat_arg)),
      seq($._lhs, '=', $.right_assignment_list),
      seq($.left_assignment_list, '=', choice($._arg_or_splat_arg, $.right_assignment_list))
    ),

    operator_assignment: $ => prec.right(PREC.ASSIGN, seq(
      $._lhs,
      choice('+=', '-=', '*=', '**=', '/=', '||=', '|=', '&&=', '&=', '%=', '>>=', '<<=', '^='),
      $._arg)
    ),

    conditional: $ => prec.right(PREC.CONDITIONAL, seq($._arg, '?', $._arg, ':', $._arg)),

    range: $ => prec.right(PREC.RANGE, seq($._arg, choice('..', '...'), $._arg)),

    binary: $ => choice(
      prec.left(PREC.AND, seq($._arg, 'and', $._arg)),
      prec.left(PREC.OR, seq($._arg, 'or', $._arg)),
      prec.left(PREC.BOOLEAN_OR, seq($._arg, '||', $._arg)),
      prec.left(PREC.BOOLEAN_OR, seq($._arg, '&&', $._arg)),
      prec.left(PREC.SHIFT, seq($._arg, choice('<<', '>>'), $._arg)),
      prec.right(PREC.RELATIONAL, seq($._arg, choice('==', '!=', '===', '<=>', '=~', '!~'), $._arg)),
      prec.left(PREC.COMPARISON, seq($._arg, choice('<', '<=', '>', '>='), $._arg)),
      prec.left(PREC.BITWISE_AND, seq($._arg, '&', $._arg)),
      prec.left(PREC.BITWISE_OR, seq($._arg, choice('^', '|'), $._arg)),
      prec.left(PREC.ADDITIVE, seq(
        $._arg,
        choice('+', alias($._binary_minus, '-')),
        $._arg
      )),
      prec.left(PREC.MULTIPLICATIVE, seq(
        $._arg,
        choice('/', '%', alias($._binary_star, '*')),
        $._arg
      )),
      prec.right(PREC.EXPONENTIAL, seq($._arg, '**', $._arg))
    ),

    unary: $ => choice(
      prec(PREC.DEFINED, seq('defined?', $._arg)),
      prec.right(PREC.NOT, seq('not', $._arg)),
      prec.right(PREC.UNARY_MINUS, seq(choice(alias($._unary_minus, '-'), '+'), $._arg)),
      prec.right(PREC.COMPLEMENT, seq(choice('!', '~'), $._arg))
    ),

    right_assignment_list: $ => prec(-1, commaSep1($._arg_or_splat_arg)),
    _arg_or_splat_arg: $ => choice($._arg, $.splat_argument),

    left_assignment_list: $ => $._mlhs,
    _mlhs: $ => prec.left(-1, sepTrailing($._mlhs, choice($._simple_mlhs, $.destructured_left_assignment), ',')),
    _simple_mlhs: $ => prec(-1, choice($._lhs, $.rest_assignment)),
    destructured_left_assignment: $ => prec(-1, seq('(', $._mlhs, ')')),

    rest_assignment: $ => prec(-1, seq('*', optional($._lhs))),

    _lhs: $ => prec.left(choice(
      $._variable,
      $.true,
      $.false,
      $.nil,
      $.scope_resolution,
      $.element_reference,
      $.call,
      $.method_call
    )),

    _variable: $ => prec.right(choice(
      $.self,
      $.super,
      $.instance_variable,
      $.class_variable,
      $.global_variable,
      $.identifier,
      $.constant
    )),

    constant: $ => token(seq(/[A-Z]/, IDENTIFIER_CHARS, /(\?|\!)?/)),

    identifier: $ => token(seq(LOWER_ALPHA_CHAR, IDENTIFIER_CHARS, /(\?|\!)?/)),

    instance_variable: $ => token(seq('@', ALPHA_CHAR, IDENTIFIER_CHARS)),

    class_variable: $ => token(seq('@@', ALPHA_CHAR, IDENTIFIER_CHARS)),

    global_variable: $ => /\$-?(([!@&`'+~=/\\,;.<>*$?:"])|([0-9]*)|([a-zA-Z_][a-zA-Z0-9_]*))/,

    operator: $ => choice(
      '..', '|', '^', '&', '<=>', '==', '===', '=~', '>', '>=', '<', '<=', '+',
      '-', '*', '/', '%', '!', '!~', '**', '<<', '>>', '~', '+@', '-@', '[]', '[]=', '`'
    ),

    _method_name: $ => choice(
      $.identifier,
      $.constant,
      $.setter,
      $.symbol,
      $.operator,
      $.instance_variable,
      $.class_variable,
      $.global_variable
    ),
    setter: $ => seq($.identifier, '='),

    undef: $ => seq('undef', commaSep1($._method_name)),
    alias: $ => seq('alias', $._method_name, $._method_name),

    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('#', /.*/),
      seq(
        /=begin.*\r?\n/,
        repeat(choice(
          /[^=]/,
          /=[^e]/,
          /=e[^n]/,
          /=en[^d]/
        )),
        /=end\r?\n/
      )
    ))),

    integer: $ => /0b[01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0d)?\d(_?\d)*|0x[0-9a-fA-F](_?[0-9a-fA-F])*/,

    float: $ => /\d(_?\d)*(\.\d)?(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    complex: $ => /(\d+)?(\+|-)?(\d+)i/,
    rational: $ => seq($.integer, 'r'),
    super: $ => 'super',
    true: $ => choice('true', 'TRUE'),
    false: $ => choice('false', 'FALSE'),
    self: $ => 'self',
    nil: $ => choice('nil', 'NIL'),

    chained_string: $ => seq($.string, repeat1($.string)),

    character: $ => /\?(\\\S({[0-9]*}|[0-9]*|-\S([MC]-\S)?)?|\S)/,

    interpolation: $ => seq(
      '#{', $._statement, '}'
    ),

    string: $ => seq(
      alias($._string_start, '"'),
      optional($._literal_contents),
      alias($._string_end, '"')
    ),

    subshell: $ => seq(
      alias($._subshell_start, '`'),
      optional($._literal_contents),
      alias($._string_end, '`')
    ),

    string_array: $ => seq(
      alias($._string_array_start, '%w('),
      optional(/\s+/),
      sep(alias($._literal_contents, $.bare_string), /\s+/),
      optional(/\s+/),
      alias($._string_end, ')')
    ),

    symbol_array: $ => seq(
      alias($._symbol_array_start, '%i('),
      optional(/\s+/),
      sep(alias($._literal_contents, $.bare_symbol), /\s+/),
      optional(/\s+/),
      alias($._string_end, ')')
    ),

    symbol: $ => choice($._simple_symbol, seq(
      alias($._symbol_start, ':"'),
      optional($._literal_contents),
      alias($._string_end, '"')
    )),

    regex: $ => seq(
      alias($._regex_start, '/'),
      optional($._literal_contents),
      alias($._string_end, '/')
    ),

    heredoc_body: $ => seq(
      $._heredoc_body_start,
      repeat(choice(
        $._heredoc_content,
        $.interpolation,
        $.escape_sequence
      )),
      $.heredoc_end
    ),

    _literal_contents: $ => repeat1(choice(
      $._string_content,
      $.interpolation,
      $.escape_sequence
    )),

    // https://ruby-doc.org/core-2.5.0/doc/syntax/literals_rdoc.html#label-Strings
    escape_sequence: $ => token(seq(
      '\\',
      choice(
        /[^ux0-7]/,          // single character
        /x[0-9a-fA-F]{1,2}/, // hex code
        /[0-7]{1,3}/,        // octal
        /u[0-9a-fA-F]{4}/,   // single unicode
        /u{[0-9a-fA-F ]+}/,  // multiple unicode
      )
    )),

    array: $ => seq(
      '[',
      optional($._argument_list_with_trailing_comma),
      optional($.heredoc_body),
      ']'
    ),

    hash: $ => seq(
      '{',
      optional($._hash_items),
      optional($.heredoc_body),
      '}'
    ),

    _hash_items: $ => seq(
      $.pair,
      optional(prec.right(seq(',', optional($.heredoc_body), optional($._hash_items))))
    ),

    pair: $ => prec(-1, choice(
      seq($._arg, '=>', $._arg),
      seq(
        choice(
          alias($._identifier_hash_key, $.symbol),
          alias($.identifier, $.symbol),
          alias($.constant, $.symbol),
          $.string
        ),
        alias($._keyword_colon, ':'),
        $._arg
      ),
      $.hash_splat_argument
    )),

    lambda: $ => seq('->', optional($.lambda_parameters), choice($.block, $.do_block)),

    empty_statement: $ => prec(-1, ';'),

    _terminator: $ => choice(
      $._line_break,
      $.heredoc_body,
      ';'
    ),
  }
});

function sepTrailing (self, rule, separator) {
  return choice(rule, seq(rule, separator, optional(self)));
}

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
