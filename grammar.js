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

const integerPattern = /0b[01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0d)?\d(_?\d)*|0x[0-9a-fA-F](_?[0-9a-fA-F])*/;
const floatPattern = /\d(_?\d)*([eE][-+]?\d(_?\d)*)?/;
const identifierPattern = /[a-zA-Z_][a-zA-Z0-9_]*(\?|\!)?/;
// Global variables start with $ and can be:
// - Regex back references (e.g. $$, $&, $`, $', and $+)
// - Number global references (e.g. $1)
// - User defined (e.g. $FOO)
const globalVariablePattern = /\$-?(([!@&`'+~=/\\,;.<>*$?:"])|([0-9]*)|([a-zA-Z_][a-zA-Z0-9_]*))/;
const instanceVariablePattern = /@[a-zA-Z_][a-zA-Z0-9_]*/; // (e.g. @foo)
const classVariablePattern = /@@[a-zA-Z_][a-zA-Z0-9_]*/; // (e.g. @@foo)

module.exports = grammar({
  name: 'ruby',

  externals: $ => [
    $._simple_string,
    $._simple_symbol,
    $._simple_subshell,
    $._simple_regex,
    $._simple_word_list,
    $._simple_heredoc_body,
    $._string_beginning,
    $._symbol_beginning,
    $._subshell_beginning,
    $._regex_beginning,
    $._word_list_beginning,
    $._heredoc_body_beginning,
    $._string_middle,
    $._heredoc_body_middle,
    $._string_end,
    $._heredoc_body_end,
    $.heredoc_beginning,
    $._line_break,
    $._forward_slash,
    $._element_reference_left_bracket,
    $._block_ampersand,
    $._splat_star,
    $._argument_list_left_paren,
    $._scope_double_colon,
    $._keyword_colon,
    $._unary_minus,
    $._binary_minus,
    $._binary_star
  ],

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  conflicts: $ => [
    // Temporary fix until we can backtrack to parse things like `3.times`
    [$.integer, $.float],
  ],

  rules: {
    program: $ => seq(optional($._statements), optional(seq('__END__', $.uninterpreted))),
    uninterpreted: $ => (/.*/),

    _statements: $ => sepTrailing(
      $._statements,
      $._top_level_statement,
      $._terminator
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
      $._arg
    ),

    method: $ => seq(
      'def',
      optional(seq(
        choice($._variable, seq('(', $._arg, ')')),
        choice('.', '::')
      )),
      $._method_name,
      choice($.method_parameters, $._terminator),
      optional($._body_statement),
      'end'
    ),

    method_parameters: $ => choice(
      seq('(', commaSep($._formal_parameter), ')', optional($._terminator)),
      seq($._simple_formal_parameter, $._terminator),
      seq($._simple_formal_parameter, ',', commaSep1($._formal_parameter), $._terminator)
    ),

    lambda_parameters: $ => choice(
      seq('(', commaSep($._formal_parameter), ')'),
      $._simple_formal_parameter
    ),

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
    block_parameter: $ => seq('&', $.identifier),
    keyword_parameter: $ => prec.right(PREC.BITWISE_OR + 1, seq($.identifier, $._keyword_colon, optional($._arg))),
    optional_parameter: $ => prec(PREC.BITWISE_OR + 1, seq($.identifier, '=', $._arg)),

    class: $ => seq(
      'class',
      $.constant,
      optional($.superclass),
      optional($._terminator),
      optional($._body_statement),
      'end'
    ),
    constant: $ => prec.right(seq(optional('::'), sep1($.identifier, '::'))),
    superclass: $ => seq('<', $._arg, $._terminator),

    singleton_class: $ => seq(
      'class',
      '<<',
      $._arg,
      $._terminator,
      optional($._body_statement),
      'end'
    ),

    module: $ => seq(
      'module',
      $.constant,
      $._terminator,
      optional($._body_statement),
      'end'
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
    for: $ => seq('for', choice($._mlhs, seq('(', $._mlhs, ')')), 'in', $._arg, $._do, optional($._statements), 'end'),
    _do: $ => choice('do', $._terminator),

    case: $ => seq(
      'case',
      optional($._arg),
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
    pattern: $ => choice($._arg, $.splat_argument),

    if: $ => seq(
      'if',
      $._statement,
      $._then,
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

    begin: $ => seq('begin', optional($._terminator), optional($._body_statement), 'end'),
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

    _body_statement: $ => choice(
      seq(
        $._statements,
        optional($.rescue),
        optional($.else),
        optional($.ensure)
      ),
      seq(
        $.rescue,
        optional($.else),
        optional($.ensure)
      ),
      seq(
        $.else,
        optional($.ensure)
      ),
      $.ensure
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
      seq('(', optional($._statements), ')'),
      $._lhs,
      $.array,
      $.hash,
      $.subshell,
      $.symbol,
      $.integer,
      $.float,
      $.string,
      $.chained_string,
      $.keyword__FILE__,
      $.keyword__LINE__,
      $.keyword__ENCODING__,
      $.regex,
      $.lambda,
      $.method,
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

    element_reference: $ => prec.left(1, seq(
      $._primary,
      $._element_reference_left_bracket,
      optional($._argument_list_with_trailing_comma),
      optional($.heredoc_end),
      ']'
    )),
    scope_resolution: $ => prec.left(1, choice(
      seq('::', $.identifier),
      seq($._primary, $._scope_double_colon, $.identifier)
    )),
    call: $ => prec.left(PREC.BITWISE_AND + 1, seq($._primary, choice('.', '&.'), $.identifier)),

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
        seq(
          $._argument_list_left_paren,
          optional($._argument_list_with_trailing_comma),
          optional($.heredoc_end),
          ')'
        ),
        sep1($._argument, seq(',', optional($.heredoc_end)))
      ),
      repeat($.heredoc_end)
    )),

    _argument_list_with_trailing_comma: $ => sepTrailing(
      $._argument_list_with_trailing_comma,
      $._argument,
      prec.right(seq(',', optional($.heredoc_end)))
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

    do_block: $ => $._do_block,
    _do_block: $ => seq(
      'do',
      optional($.block_parameters),
      optional($._terminator),
      optional($._statements),
      'end'
    ),

    block: $ => $._block,
    _block: $ => seq(
      '{',
      optional($.block_parameters),
      optional($._statements),
      '}'
    ),

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
      prec.left(PREC.ADDITIVE, seq($._arg, choice($._binary_minus, '+'), $._arg)),
      prec.left(PREC.MULTIPLICATIVE, seq($._arg, choice($._binary_star, $._forward_slash, '%'), $._arg)),
      prec.right(PREC.EXPONENTIAL, seq($._arg, '**', $._arg))
    ),

    unary: $ => choice(
      prec(PREC.DEFINED, seq('defined?', $._arg)),
      prec.right(PREC.NOT, seq('not', $._arg)),
      prec.right(PREC.UNARY_MINUS, seq(choice($._unary_minus, '+'), $._arg)),
      prec.right(PREC.COMPLEMENT, seq(choice('!', '~'), $._arg))
    ),

    right_assignment_list: $ => prec(-1, commaSep1($._arg_or_splat_arg)),
    _arg_or_splat_arg: $ => choice($._arg, $.splat_argument),

    left_assignment_list: $ => choice(
      $._mlhs,
      seq('(', $._mlhs, ')')
    ),
    _mlhs: $ => prec.left(-1, sepTrailing(
      $._mlhs,
      choice(
        $._lhs,
        $.rest_assignment
      ),
      ','
    )),
    // TODO: should be *, _lhs for rest_assignment.
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
    _variable: $ => choice(
      $.self,
      $.super,
      $.instance_variable,
      $.class_variable,
      $.global_variable,
      $.identifier
    ),

    instance_variable: $ => instanceVariablePattern,
    class_variable: $ => classVariablePattern,
    global_variable: $ => globalVariablePattern,
    identifier: $ => identifierPattern,
    reserved_identifier: $ => choice(
      'alias', 'and', 'begin', 'break', 'case', 'class', 'def', 'defined', 'do',
      'else', 'elsif', 'end', 'ensure', 'false', 'for', 'in', 'module', 'next',
      'nil', 'not', 'or', 'redo', 'rescue', 'retry', 'return', 'self', 'super',
      'then', 'true', 'undef', 'when', 'yield', 'if', 'unless', 'while', 'until'
    ),
    operator: $ => choice(
      $._forward_slash,
      '..', '|', '^', '&', '<=>', '==', '===', '=~', '>', '>=', '<', '<=', '+',
      '-', '*', '%', '!', '**', '<<', '>>', '~', '+@', '-@', '[]', '[]=', '`'
    ),

    _method_name: $ => choice(
      $.identifier,
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

    symbol: $ => choice(
      $._simple_symbol,
      seq(
        $._symbol_beginning,
        repeat(seq($._statement, $._string_middle)),
        $._statement,
        $._string_end
      )
    ),

    // Fallback to catch :name
    _simple_symbol: $ => token(seq(
      ':',
      choice(
        identifierPattern,
        instanceVariablePattern,
        classVariablePattern,
        globalVariablePattern
      )
    )),

    integer: $ => integerPattern,
    // TODO: When we can backtrack, redefine float as regex instead of seq.
    // float: $ => (/\d(_?\d)*(\.\d)?(_?\d)*([eE]\d(_?\d)*)?/),
    float: $ => choice(
      seq(integerPattern, '.', floatPattern),
      floatPattern
    ),
    super: $ => 'super',
    true: $ => choice('true', 'TRUE'),
    false: $ => choice('false', 'FALSE'),
    self: $ => 'self',
    nil: $ => choice('nil', 'NIL'),
    keyword__FILE__: $ => '__FILE__',
    keyword__LINE__: $ => '__LINE__',
    keyword__ENCODING__: $ => '__ENCODING__',

    chained_string: $ => seq($.string, repeat1($.string)),

    _character_literal: $ => /\?(\\\S({[0-9]*}|-\S([MC]-\S)?)?|\S)/,

    string: $ => choice(
      $._simple_string,
      $._character_literal,
      seq(
        $._string_beginning,
        repeat(seq($._statement, $._string_middle)),
        $._statement,
        $._string_end
      )
    ),

    subshell: $ => choice(
      $._simple_subshell,
      seq(
        $._subshell_beginning,
        repeat(seq($._statement, $._string_middle)),
        $._statement,
        $._string_end
      )
    ),

    heredoc_end: $ => choice(
      $._simple_heredoc_body,
      seq(
        $._heredoc_body_beginning,
        repeat(seq($._statement, $._heredoc_body_middle)),
        $._statement,
        $._heredoc_body_end
      )
    ),

    array: $ => choice(
      seq('[', optional($._argument_list_with_trailing_comma), optional($.heredoc_end), ']'),
      $._simple_word_list,
      seq(
        $._word_list_beginning,
        repeat(seq($._statement, $._string_middle)),
        $._statement,
        $._string_end
      )
    ),

    hash: $ => prec(1, seq(
      '{',
      optional($._hash_items),
      optional($.heredoc_end),
      '}'
    )),
    _hash_items: $ => seq(
      $.pair,
      optional(prec.right(seq(',', optional($.heredoc_end), optional($._hash_items))))
    ),

    pair: $ => prec(-1, seq(choice(
      seq($._arg, '=>'),
      seq(choice($.identifier, $.reserved_identifier, $.string), $._keyword_colon)
    ), $._arg)),

    regex: $ => choice(
      $._simple_regex,
      seq(
        $._regex_beginning,
        repeat(seq($._statement, $._string_middle)),
        $._statement,
        $._string_end
      )
    ),

    lambda: $ => choice(
      seq(
        '->',
        optional($.lambda_parameters),
        choice(
          seq('{', optional($._statements), '}'),
          seq('do', optional($._terminator), optional($._statements), 'end')
        )
      ),
      seq('lambda', choice($._block, $._do_block))
    ),

    _forward_slash: $ => '/',
    _terminator: $ => choice(
      $._line_break,
      $.heredoc_end,
      ';'
    ),
  }
});

function sepTrailing (self, rule, separator) {
  return choice(rule, seq(rule, separator, optional(self)));
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
