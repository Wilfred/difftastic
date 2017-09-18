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
    $._reserved_identifier,
  ],

  conflicts: $ => [
    [$._expression, $._property_name],
    [$._expression, $._property_name, $.arrow_function],
    [$._expression, $.arrow_function],
    [$._expression, $.method_definition],
    [$._expression, $.formal_parameters],
    [$.labeled_statement, $._property_name],
    [$.assignment_pattern, $.assignment_expression],
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
      seq('export', 'default', $._expression, $._semicolon)
    ),

    export_clause: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.export_specifier)),
      '}'
    ),

    _import_export_specifier: $ => seq(
      $.identifier,
      optional(seq(
        'as',
        $.identifier
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
        $.identifier,
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
      "*", "as", $.identifier
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
      choice($._expression, $.sequence_expression),
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

    variable_declarator: $ => seq(
      choice($.identifier, $._destructuring_pattern),
      optional($._initializer)
    ),

    statement_block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    if_statement: $ => prec.right(seq(
      'if',
      $.parenthesized_expression,
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
      $.parenthesized_expression,
      $.switch_body
    ),

    for_statement: $ => seq(
      'for',
      '(',
      choice(
        $.lexical_declaration,
        $.variable_declaration,
        $.expression_statement,
        $.empty_statement
      ),
      choice(
        $.expression_statement,
        $.empty_statement
      ),
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
      $.parenthesized_expression,
      $._statement
    ),

    do_statement: $ => seq(
      'do',
      $.statement_block,
      'while',
      $.parenthesized_expression,
      $._semicolon
    ),

    try_statement: $ => seq(
      'try',
      $.statement_block,
      optional($.catch_clause),
      optional($.finally_clause)
    ),

    with_statement: $ => seq(
      'with',
      $.parenthesized_expression,
      $._statement
    ),

    break_statement: $ => seq(
      'break',
      optional(alias($.identifier, $.statement_identifier)),
      $._semicolon
    ),

    continue_statement: $ => seq(
      'continue',
      optional(alias($.identifier, $.statement_identifier)),
      $._semicolon
    ),

    debugger_statement: $ => seq(
      'debugger',
      $._semicolon
    ),

    return_statement: $ => seq(
      'return',
      optional(choice($._expression, $.sequence_expression)),
      $._semicolon
    ),

    throw_statement: $ => seq(
      'throw',
      choice($._expression, $.sequence_expression),
      $._semicolon
    ),

    empty_statement: $ => ';',

    labeled_statement: $ => seq(
      alias($.identifier, $.statement_identifier),
      ':',
      $._statement
    ),

    //
    // Statement components
    //

    switch_body: $ => seq(
      '{',
      repeat(choice($.switch_case, $.switch_default)),
      '}'
    ),

    switch_case: $ => seq(
      'case',
      $._expression,
      ':',
      repeat($._statement)
    ),

    switch_default: $ => seq(
      'default',
      ':',
      repeat($._statement)
    ),

    catch_clause: $ => seq(
      'catch',
      optional(seq('(', $.identifier, ')')),
      $.statement_block
    ),

    finally_clause: $ => seq(
      'finally',
      $.statement_block
    ),

    parenthesized_expression: $ => seq(
      '(',
      choice($._expression, $.sequence_expression),
      ')'
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
      $.anonymous_class,
      $.function,
      $.arrow_function,
      $.generator_function,

      $.assignment_expression,
      $.augmented_assignment_expression,
      $.await_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
      $.update_expression,
      $.call_expression,
      $.member_expression,
      $.new_expression,
      $.parenthesized_expression,
      $.subscript_expression,
      $.yield_expression,
      $.this_expression,

      $.number,
      $.string,
      $.template_string,
      $.regex,
      $.true,
      $.false,
      $.null,
      $.undefined,
      $.identifier,
      alias($._reserved_identifier, $.identifier)
    ),

    yield_expression: $ => prec.right(seq(
      'yield',
      optional($._expression)
    )),

    object: $ => prec(PREC.OBJECT, seq(
      '{',
      commaSep(optional(choice(
        $.pair,
        $.spread_element,
        $.method_definition,
        $.assignment_pattern,
        alias(choice($.identifier, $._reserved_identifier), $.shorthand_property_identifier)
      ))),
      '}'
    )),

    assignment_pattern: $ => seq(
      alias($.identifier, $.shorthand_property_identifier),
      $._initializer
    ),

    array: $ => seq(
      '[',
      commaSep(optional(choice(
        $._expression,
        $.spread_element
      ))),
      ']'
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
      choice($._expression, $.sequence_expression, $.spread_element),
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
      alias($.identifier, $.property_identifier),
      optional(seq(
        '=',
        choice(
          $.number,
          $.string,
          $.jsx_expression
        )
      ))
    ),

    anonymous_class: $ => seq(
      'class',
      optional($.class_heritage),
      $.class_body
    ),

    class: $ => seq(
      'class',
      $.identifier,
      optional($.class_heritage),
      $.class_body
    ),

    class_heritage: $ => seq('extends', $._expression),

    function: $ => seq(
      optional('async'),
      'function',
      optional($.identifier),
      $.formal_parameters,
      $.statement_block
    ),

    arrow_function: $ => seq(
      optional('async'),
      choice(
        optional($.identifier),
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
      optional($.identifier),
      $.formal_parameters,
      $.statement_block
    ),

    call_expression: $ => prec(PREC.CALL, seq(
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

    member_expression: $ => prec(PREC.MEMBER, seq(
      choice(
        $._expression,
        $.identifier,
        alias($._reserved_identifier, $.identifier)
      ),
      '.',
      alias($.identifier, $.property_identifier)
    )),

    subscript_expression: $ => prec.right(PREC.MEMBER, seq(
      $._expression,
      '[', $._expression, ']'
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.member_expression,
        $.subscript_expression,
        $.identifier,
        $._destructuring_pattern
      ),
      $._initializer
    )),

    augmented_assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.member_expression,
        $.subscript_expression,
        $.identifier
      ),
      choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|='),
      $._expression
    )),

    _initializer: $ => seq(
      '=', $._expression
    ),

    _destructuring_pattern: $ => choice(
      alias($.object, $.object_pattern),
      alias($.array, $.array_pattern)
    ),

    spread_element: $ => seq('...', $._expression),

    ternary_expression: $ => prec.right(PREC.TERNARY, seq(
      $._expression, '?', $._expression, ':', $._expression
    )),

    binary_expression: $ => choice(...[
      ['&&', PREC.AND],
      ['||', PREC.OR],
      ['>>', PREC.TIMES],
      ['>>=', PREC.TIMES],
      ['>>>', PREC.TIMES],
      ['>>>=', PREC.TIMES],
      ['<<', PREC.TIMES],
      ['<<=', PREC.TIMES],
      ['&', PREC.AND],
      ['^', PREC.OR],
      ['|', PREC.OR],
      ['+', PREC.PLUS],
      ['-', PREC.PLUS],
      ['*', PREC.TIMES],
      ['/', PREC.TIMES],
      ['%', PREC.TIMES],
      ['<', PREC.REL],
      ['<=', PREC.REL],
      ['==', PREC.REL],
      ['===', PREC.REL],
      ['!=', PREC.REL],
      ['!==', PREC.REL],
      ['>=', PREC.REL],
      ['>', PREC.REL],
      ['instanceof', PREC.REL],
      ['in', PREC.REL],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq($._expression, operator, $._expression))
    )),

    unary_expression: $ => choice(...[
      ['!', PREC.NOT],
      ['~', PREC.NOT],
      ['-', PREC.NEG],
      ['+', PREC.NEG],
      ['typeof', PREC.TYPEOF],
      ['void', PREC.VOID],
      ['delete', PREC.DELETE],
    ].map(([operator, precedence]) =>
      prec.left(precedence, seq(operator, $._expression))
    )),

    update_expression: $ => prec.left(PREC.INC, choice(
      seq($._expression, '++'),
      seq($._expression, '--'),
      seq('++', $._expression),
      seq('--', $._expression)
    )),

    sequence_expression: $ => prec(PREC.COMMA, seq(
      $._expression, ',', choice($.sequence_expression, $._expression))
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
      choice($._expression, $.sequence_expression),
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
      commaSep(optional(choice($._expression, $.spread_element))),
      ')'
    )),

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
        $.identifier,
        $._destructuring_pattern
      )),
      ')'
    ),

    method_definition: $ => seq(
      optional('async'),
      optional(choice('get', 'set', '*')),
      $._property_name,
      $.formal_parameters,
      $.statement_block
    ),

    pair: $ => seq(
      $._property_name,
      ':',
      $._expression
    ),

    _property_name: $ => choice(
      alias(choice(
        $.identifier,
        $._reserved_identifier
      ), $.property_identifier),
      $.string,
      $.number
    ),

    _reserved_identifier: $ => choice(
      'get',
      'set',
      'async'
    ),

    _semicolon: $ => choice($._automatic_semicolon, ';')
  }
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
