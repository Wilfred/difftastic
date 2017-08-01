const PREC = {
  COMMA: -1,
  DECLARATION: 1,
  ASSIGN: 0,
  OBJECT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  PLUS: 4,
  REL: 5,
  TIMES: 6,
  TYPEOF: 7,
  DELETE: 7,
  VOID: 7,
  NOT: 8,
  NEG: 9,
  INC: 10,
  NEW: 11,
  CALL: 12,
  MEMBER: 13
};

module.exports = grammar({
  name: 'javascript',

  externals: $ => [
    $._automatic_semicolon
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B]/
  ],

  inline: $ => [
    $._statement,
    $._semicolon,
    $._destructuring_pattern,
  ],

  conflicts: $ => [
    [$._expression, $._property_name],
    [$._expression, $._property_name, $.arrow_function],
    [$._expression, $.arrow_function],
    [$._expression, $.method_definition],
    [$._expression, $.formal_parameters],
    [$._expression, $._property_definition_list],
    [$.labeled_statement, $._property_name],
    [$.assignment_pattern, $.assignment],
  ],

  rules: {
    program: $ => repeat($._statement),

    //
    // Export declarations
    //

    export_statement: $ => choice(
      seq('export', '*', $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._semicolon),
      seq('export', $._declaration),
      seq('export', 'default', $.anonymous_class),
      seq('export', 'default', $._expression, $._semicolon)
    ),

    export_clause: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.export_specifier)),
      '}'
    ),

    _import_export_specifier: $ => seq(
      alias($.identifier, $.variable_name),
      optional(seq(
        'as',
        alias($.identifier, $.variable_name)
      ))
    ),

    _declaration: $ => prec(PREC.DECLARATION, choice(
      seq(
        choice(
          $.function,
          $.generator_function,
          $.class
        ),
        optional($._automatic_semicolon)
      ),
      $.lexical_declaration,
      $.variable_declaration
    )),

    //
    // Import declarations
    //

    import_statement: $ => seq(
      'import',
      choice(
        seq($.import_clause, $._from_clause),
        $.string
      ),
      $._semicolon
    ),

    import_clause: $ => choice(
      $.namespace_import,
      $.named_imports,
      seq(
        alias($.identifier, $.variable_name),
        optional(seq(
          ',',
          choice(
            $.namespace_import,
            $.named_imports
          )
        ))
      )
    ),

    _from_clause: $ => seq(
      "from", $.string
    ),

    namespace_import: $ => seq(
      "*", "as", alias($.identifier, $.variable_name)
    ),

    named_imports: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.import_specifier)),
      optional(','),
      '}'
    ),

    //
    // Statements
    //

    _statement: $ => choice(
      $.export_statement,
      $.import_statement,
      $.debugger_statement,
      $.expression_statement,
      $._declaration,
      $.statement_block,

      $.if_statement,
      $.switch_statement,
      $.for_statement,
      $.for_in_statement,
      $.for_of_statement,
      $.while_statement,
      $.do_statement,
      $.try_statement,
      $.with_statement,

      $.break_statement,
      $.continue_statement,
      $.return_statement,
      $.throw_statement,
      $.empty_statement,
      $.labeled_statement
    ),

    expression_statement: $ => seq(
      choice($._expression, $.comma_op),
      $._semicolon
    ),

    variable_declaration: $ => seq(
      'var',
      commaSep1($.variable_declarator),
      $._semicolon
    ),

    lexical_declaration: $ => seq(
      choice('let', 'const'),
      commaSep1($.variable_declarator),
      $._semicolon
    ),

    variable_declarator: $ => choice(
      seq(
        alias($.identifier, $.variable_name),
        optional($._initializer)
      ),
      seq(
        $._destructuring_pattern,
        $._initializer
      )
    ),

    statement_block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    if_statement: $ => prec.right(seq(
      'if',
      $._paren_expression,
      choice(
        $._statement,
        seq(
          $._statement,
          'else',
          $._statement
        )
      )
    )),

    switch_statement: $ => seq(
      'switch',
      '(', $._expression, ')',
      '{', repeat(choice($.case, $.default)), '}'
    ),

    _for_declaration: $ => choice(
      $.lexical_declaration,
      $.variable_declaration
    ),

    for_statement: $ => seq(
      'for',
      '(',
      choice(
        $._for_declaration,
        seq(commaSep1($._expression), ';'),
        ';'
      ),
      optional($._expression), ';',
      optional($._expression),
      ')',
      $._statement
    ),

    for_in_statement: $ => seq(
      'for',
      '(',
      optional(choice('var', 'let', 'const')),
      $._expression,
      'in',
      $._expression,
      ')',
      $._statement
    ),

    for_of_statement: $ => seq(
      'for',
      '(',
      optional(choice('var', 'let', 'const')),
      $._expression,
      'of',
      $._expression,
      ')',
      $._statement
    ),

    while_statement: $ => seq(
      'while',
      $._paren_expression,
      $._statement
    ),

    do_statement: $ => seq(
      'do',
      $.statement_block,
      'while',
      $._paren_expression,
      $._semicolon
    ),

    try_statement: $ => seq(
      'try',
      $.statement_block,
      optional($.catch),
      optional($.finally)
    ),

    with_statement: $ => seq(
      'with',
      optional(seq('(', $._expression, ')')),
      $.statement_block,
      $._semicolon
    ),

    break_statement: $ => seq(
      'break',
      optional(alias($.identifier, $.label_name)),
      $._semicolon
    ),

    continue_statement: $ => seq(
      'continue',
      optional(alias($.identifier, $.label_name)),
      $._semicolon
    ),

    debugger_statement: $ => seq(
      'debugger',
      $._semicolon
    ),

    return_statement: $ => seq(
      'return',
      optional(choice($._expression, $.comma_op)),
      $._semicolon
    ),

    throw_statement: $ => seq(
      'throw',
      choice($._expression, $.comma_op),
      $._semicolon
    ),

    empty_statement: $ => ';',

    labeled_statement: $ => seq(
      alias($.identifier, $.label_name),
      ':',
      $._statement
    ),

    //
    // Statement components
    //

    case: $ => seq(
      'case',
      $._expression,
      ':',
      repeat($._statement)
    ),

    default: $ => seq(
      'default',
      ':',
      repeat($._statement)
    ),

    catch: $ => seq(
      'catch',
      optional(seq('(', alias($.identifier, $.variable_name), ')')),
      $.statement_block
    ),

    finally: $ => seq(
      'finally',
      $.statement_block
    ),

    _paren_expression: $ => seq(
      '(', choice($._expression, $.comma_op), ')'
    ),

    //
    // Expressions
    //

    _expression: $ => choice(
      $.object,
      $.array,
      $.jsx_element,
      $.jsx_self_closing_element,
      $.class,
      $.function,
      $.arrow_function,
      $.generator_function,
      $.function_call,
      $.new_expression,
      $.await_expression,
      $.member_access,
      $.subscript_access,
      $.assignment,
      $.math_assignment,
      $.ternary,
      $.bool_op,
      $.math_op,
      $.bitwise_op,
      $.rel_op,
      $.type_op,
      $.delete_op,
      $.void_op,
      $._paren_expression,

      $.this_expression,
      $.number,
      $.string,
      $.template_string,
      $.regex,
      $.true,
      $.false,
      $.null,
      $.undefined,
      $.yield_expression,
      alias(choice(
        $.identifier,
        'get',
        'set',
        'async'
      ), $.variable_name)
    ),

    yield_expression: $ => prec.right(seq(
      'yield',
      optional($._expression)
    )),

    object: $ => prec(PREC.OBJECT, seq(
      '{',
      optional($._property_definition_list),
      '}'
    )),

    _property_definition_list: $ => commaSep1Trailing($._property_definition_list, choice(
      $.pair,
      $.method_definition,
      alias(choice(
        $.identifier,
        'get',
        'set',
        'async'
      ), $.shorthand_property_name),
      $.spread_element,
      $.assignment_pattern
    )),

    assignment_pattern: $ => seq(
      alias($.identifier, $.shorthand_property_name),
      $._initializer
    ),

    array: $ => seq(
      '[', optional($._element_list), ']'
    ),

    jsx_element: $ => seq(
      $.jsx_opening_element,
      repeat(choice(
        $.jsx_element,
        $.jsx_self_closing_element,
        $.jsx_expression,
        $.jsx_text
      )),
      $.jsx_closing_element
    ),

    jsx_text: $ => /[^{}<>]+/,

    jsx_expression: $ => seq(
      '{',
      choice($._expression, $.comma_op, $.spread_element),
      '}'
    ),

    jsx_opening_element: $ => seq(
      '<',
      $.identifier,
      repeat($.jsx_attribute),
      '>'
    ),

    jsx_closing_element: $ => seq(
      '<',
      '/',
      $.identifier,
      '>'
    ),

    jsx_self_closing_element: $ => seq(
      '<',
      $.identifier,
      repeat($.jsx_attribute),
      '/',
      '>'
    ),

    jsx_attribute: $ => seq(
      $.identifier,
      optional(seq(
        '=',
        choice(
          $.number,
          $.string,
          $.jsx_expression
        )
      ))
    ),

    _element_list: $ => seq(
      optional(','),
      commaSep1Trailing($._element_list, choice(
        $._expression,
        $.spread_element
      ))),

    anonymous_class: $ => choice(
      seq('class', $._class_tail)
    ),

    class: $ => seq(
      'class',
      alias($.identifier, $.variable_name),
      $._class_tail
    ),

    _class_tail: $ => seq(
      optional($.class_heritage),
      $.class_body
    ),

    class_heritage: $ => seq('extends', $._expression),

    function: $ => seq(
      optional('async'),
      'function',
      optional(alias($.identifier, $.variable_name)),
      $.formal_parameters,
      $.statement_block
    ),

    arrow_function: $ => seq(
      optional('async'),
      choice(
        optional(alias($.identifier, $.variable_name)),
        $.formal_parameters
      ),
      '=>',
      choice(
        $._expression,
        $.statement_block
      )
    ),

    generator_function: $ => seq(
      'function',
      '*',
      optional(alias($.identifier, $.variable_name)),
      $.formal_parameters,
      $.statement_block
    ),

    function_call: $ => prec(PREC.CALL, seq(
      choice($._expression, $.super, $.function),
      choice($.arguments, $.template_string)
    )),

    new_expression: $ => prec(PREC.NEW, seq(
      'new',
      $._expression
    )),

    await_expression: $ => seq(
      'await',
      $._expression
    ),

    member_access: $ => prec(PREC.MEMBER, seq(
      $._expression,
      '.',
      alias($.identifier, $.property_name)
    )),

    subscript_access: $ => prec.right(PREC.MEMBER, seq(
      $._expression,
      '[', $._expression, ']'
    )),

    assignment: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.member_access,
        $.subscript_access,
        alias($.identifier, $.variable_name),
        $._destructuring_pattern
      ),
      $._initializer
    )),

    _initializer: $ => seq(
      '=', $._expression
    ),

    math_assignment: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        alias($.identifier, $.variable_name),
        $.member_access,
        $.subscript_access
      ),
      choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|='),
      $._expression
    )),

    _destructuring_pattern: $ => choice(
      alias($.object, $.object_pattern),
      alias($.array, $.array_pattern)
    ),

    spread_element: $ => seq('...', $._expression),

    ternary: $ => prec.right(PREC.TERNARY, seq(
      $._expression, '?', $._expression, ':', $._expression
    )),

    bool_op: $ => choice(
      prec.left(PREC.NOT, seq('!', $._expression)),
      prec.left(PREC.AND, seq($._expression, '&&', $._expression)),
      prec.left(PREC.OR, seq($._expression, '||', $._expression))
    ),

    bitwise_op: $ => choice(
      prec.left(PREC.NOT, seq('~', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '>>', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '>>=', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '>>>', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '>>>=', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '<<', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '<<=', $._expression)),
      prec.left(PREC.AND, seq($._expression, '&', $._expression)),
      prec.left(PREC.OR, seq($._expression, '^', $._expression)),
      prec.left(PREC.OR, seq($._expression, '|', $._expression))
    ),

    math_op: $ => choice(
      prec.left(PREC.NEG, seq('-', $._expression)),
      prec.left(PREC.NEG, seq('+', $._expression)),
      prec.left(PREC.INC, seq($._expression, '++')),
      prec.left(PREC.INC, seq($._expression, '--')),
      prec.left(PREC.INC, seq('++', $._expression)),
      prec.left(PREC.INC, seq('--', $._expression)),
      prec.left(PREC.PLUS, seq($._expression, '+', $._expression)),
      prec.left(PREC.PLUS, seq($._expression, '-', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '*', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '/', $._expression)),
      prec.left(PREC.TIMES, seq($._expression, '%', $._expression))
    ),

    delete_op: $ => prec(PREC.DELETE, seq(
      'delete',
      choice($.member_access, $.subscript_access))
    ),

    void_op: $ => prec(PREC.VOID, seq(
      'void', $._expression)
    ),

    comma_op: $ => prec(PREC.COMMA, seq(
      $._expression, ',', choice($.comma_op, $._expression))
    ),

    rel_op: $ => choice(
      prec.left(PREC.REL, seq($._expression, '<', $._expression)),
      prec.left(PREC.REL, seq($._expression, '<=', $._expression)),
      prec.left(PREC.REL, seq($._expression, '==', $._expression)),
      prec.left(PREC.REL, seq($._expression, '===', $._expression)),
      prec.left(PREC.REL, seq($._expression, '!=', $._expression)),
      prec.left(PREC.REL, seq($._expression, '!==', $._expression)),
      prec.left(PREC.REL, seq($._expression, '>=', $._expression)),
      prec.left(PREC.REL, seq($._expression, '>', $._expression))
    ),

    type_op: $ => choice(
      prec(PREC.TYPEOF, seq('typeof', $._expression)),
      prec.left(PREC.REL, seq($._expression, 'instanceof', $._expression)),
      prec.left(PREC.REL, seq($._expression, 'in', $._expression))
    ),

    //
    // Primitives
    //

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    string: $ => token(choice(
      seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'")
    )),

    template_string: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        $.template_substitution
      )),
      '`'
    ),

    _template_chars: $ => token(repeat1(choice(
      /[^`\$]/,
      /\$[^{]/,
      /\\`/
    ))),

    template_substitution: $ => seq(
      '${',
      choice($._expression, $.comma_op),
      '}'
    ),

    regex: $ => token(seq(
      '/',
      repeat(choice(
        seq('[', /[^\]\n]*/, ']'), // square-bracket-delimited character class
        seq('\\', /./),            // escaped character
        /[^/\\\[\n]/               // any character besides '[', '\', '/', '\n'
      )),
      '/',
      repeat(/a-z/)
    )),

    number: $ => {
      const hex_literal = seq(
        choice('0x', '0X'),
        /[\da-fA-F]+/
      )

      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-','+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

      const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)

      const decimal_integer_literal = choice(
        '0',
        seq(/[1-9]/, optional(decimal_digits))
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      )

      return token(choice(
        hex_literal,
        decimal_literal,
        binary_literal,
        octal_literal
      ))
    },

    identifier: $ => /[\a_$][\a\d_$]*/,

    this_expression: $ => 'this',
    super: $ => 'super',
    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',
    undefined: $ => 'undefined',

    //
    // Expression components
    //

    arguments: $ => prec(PREC.CALL, seq(
      '(',
      commaSep(choice($._expression, $.rest_argument)),
      ')'
    )),

    rest_argument: $ => seq('...', $._expression),

    class_body: $ => seq(
      '{',
      repeat(seq(
        optional('static'),
        choice(
          seq($.method_definition, optional(';')),
          seq($.public_field_definition, $._semicolon)
        )
      )),
      '}'
    ),

    public_field_definition: $ => seq($._property_name, optional($._initializer)),

    formal_parameters: $ => seq(
      '(',
      commaSep(choice(
        alias($.identifier, $.variable_name),
        $._destructuring_pattern
      )),
      ')'
    ),

    method_definition: $ => choice(
      seq(
        optional('async'),
        optional(choice('get', 'set', '*')),
        $._property_name,
        $.formal_parameters,
        $.statement_block
      ),
      seq(
        optional('async'),
        optional(choice('get', 'set', '*')),
        $._property_name,
        $.formal_parameters
      )
    ),

    pair: $ => seq(
      $._property_name,
      ':',
      $._expression
    ),

    _property_name: $ => choice(
      alias(choice(
        $.identifier,
        'get',
        'set',
        'async'
      ), $.property_name),
      $.string,
      $.number
    ),

    _semicolon: $ => choice($._automatic_semicolon, ';')
  }
});

function commaSep1Trailing(recurSymbol, rule) {
  return seq(rule, optional(seq(',', optional(recurSymbol))))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
