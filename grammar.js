const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  COMMA: -1,
  DECLARATION: 1,
  ASSIGN: 0,
  OBJECT: 1,
  TERNARY: 1,
  OR: 2,
  AND: 3,
  REL: 4,
  PLUS: 5,
  TIMES: 6,
  EXP: 7,
  TYPEOF: 8,
  DELETE: 8,
  VOID: 8,
  NOT: 9,
  NEG: 10,
  INC: 11,
  CALL: 12,
  NEW: 13,
  MEMBER: 14
};

module.exports = grammar({
  name: 'javascript',

  externals: $ => [
    $._automatic_semicolon,
    $._template_chars
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  inline: $ => [
    $._constructable_expression,
    $._statement,
    $._expressions,
    $._semicolon,
    $._formal_parameter,
    $._destructuring_pattern,
    $._reserved_identifier,
    $._jsx_attribute,
    $._jsx_element_name,
    $._jsx_child,
    $._jsx_element,
    $._jsx_attribute_name,
    $._jsx_attribute_value,
    $._jsx_identifier,
  ],

  conflicts: $ => [
    [$._expression, $._property_name],
    [$._expression, $._property_name, $.arrow_function],
    [$._expression, $.arrow_function],
    [$._expression, $.method_definition],
    [$._expression, $.formal_parameters],
    [$._expression, $.rest_parameter],
    [$.labeled_statement, $._property_name],
    [$.assignment_pattern, $.assignment_expression],
    [$.computed_property_name, $.array],
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => seq(
      optional($.hash_bang_line),
      repeat($._statement)
    ),

    hash_bang_line: $ => /#!.*/,

    //
    // Export declarations
    //

    export_statement: $ => choice(
      seq('export', '*', $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._from_clause, $._semicolon),
      seq('export', $.export_clause, $._semicolon),
      seq(repeat($.decorator), 'export', $._declaration),
      seq(repeat($.decorator), 'export', 'default', $._expression, $._semicolon)
    ),

    export_clause: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.export_specifier)),
      optional(','),
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
      $._expressions,
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
      optional($._expressions),
      ')',
      $._statement
    ),

    for_in_statement: $ => seq(
      'for',
      '(',
      optional(choice('var', 'let', 'const')),
      choice($.identifier, $._destructuring_pattern),
      'in',
      $._expressions,
      ')',
      $._statement
    ),

    for_of_statement: $ => seq(
      'for',
      optional('await'),
      '(',
      optional(choice('var', 'let', 'const')),
      choice($.identifier, $._destructuring_pattern),
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
      $._statement,
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
      optional($._expressions),
      $._semicolon
    ),

    throw_statement: $ => seq(
      'throw',
      $._expressions,
      $._semicolon
    ),

    empty_statement: $ => ';',

    labeled_statement: $ => prec.dynamic(-1, seq(
      alias($.identifier, $.statement_identifier),
      ':',
      $._statement
    )),

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
      $._expressions,
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
      $._expressions,
      ')'
    ),

    //
    // Expressions
    //
    _expressions: $ => choice(
      $._expression,
      $.sequence_expression
    ),

    _expression: $ => choice(
      $._constructable_expression,
      $._jsx_element,
      $.jsx_fragment,

      $.assignment_expression,
      $.augmented_assignment_expression,
      $.await_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
      $.update_expression,
      $.call_expression,
      $.yield_expression,
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
        seq(repeat($.decorator), $.method_definition),
        $.assignment_pattern,
        alias(choice($.identifier, $._reserved_identifier), $.shorthand_property_identifier)
      ))),
      '}'
    )),

    assignment_pattern: $ => seq(
      choice(
        alias($.identifier, $.shorthand_property_identifier),
        $._destructuring_pattern
      ),
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

    _jsx_element: $ => choice($.jsx_element, $.jsx_self_closing_element),

    jsx_element: $ => seq(
      $.jsx_opening_element,
      repeat($._jsx_child),
      $.jsx_closing_element
    ),

    jsx_fragment: $ => seq('<', '>', repeat($._jsx_child), '<','/','>'),

    jsx_text: $ => /[^{}<>]+/,

    jsx_expression: $ => seq('{', optional(choice($._expression, $.sequence_expression, $.spread_element)), '}'),

    _jsx_child: $ => choice($.jsx_text, $._jsx_element, $.jsx_expression),

    jsx_opening_element: $ => prec.dynamic(-1, seq(
      '<',
      $._jsx_element_name,
      repeat($._jsx_attribute),
      '>'
    )),

    jsx_identifier: $ => /[a-zA-Z_$][a-zA-Z\d_$]*-[a-zA-Z\d_$\-]*/,

    _jsx_identifier: $ => choice(
      alias($.jsx_identifier, $.identifier),
      $.identifier
    ),

    nested_identifier: $ => prec(PREC.MEMBER, seq(
      choice($.identifier, $.nested_identifier),
      '.',
      $.identifier
    )),

    jsx_namespace_name: $ => seq($._jsx_identifier, ':', $._jsx_identifier),

    _jsx_element_name: $ => choice(
      $._jsx_identifier,
      $.nested_identifier,
      $.jsx_namespace_name,
    ),

    jsx_closing_element: $ => seq(
      '<',
      '/',
      $._jsx_element_name,
      '>'
    ),

    jsx_self_closing_element: $ => seq(
      '<',
      $._jsx_element_name,
      repeat($._jsx_attribute),
      '/',
      '>'
    ),

    _jsx_attribute: $ => choice($.jsx_attribute, $.jsx_expression),

    _jsx_attribute_name: $ => choice(alias($._jsx_identifier, $.property_identifier), $.jsx_namespace_name),

    jsx_attribute: $ => seq(
      $._jsx_attribute_name,
      optional(seq(
        '=',
        $._jsx_attribute_value
      ))
    ),

    _jsx_attribute_value: $ => choice(
      $.string,
      $.jsx_expression,
      $._jsx_element,
      $.jsx_fragment
    ),

    anonymous_class: $ => seq(
      repeat($.decorator),
      'class',
      optional($.class_heritage),
      $.class_body
    ),

    class: $ => seq(
      repeat($.decorator),
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

    new_expression: $ => prec.right(PREC.NEW, seq(
      'new',
      $._constructable_expression,
      optional($.arguments)
    )),

    _constructable_expression: $ => choice(
      // Primary Expression
      $.this,
      $.identifier,
      alias($._reserved_identifier, $.identifier),
      $.number,
      $.string,
      $.template_string,
      $.regex,
      $.true,
      $.false,
      $.null,
      $.undefined,
      $.object,
      $.array,
      $.function,
      $.arrow_function,
      $.generator_function,
      $.class,
      $.anonymous_class,
      $.parenthesized_expression,

      $.subscript_expression,
      $.member_expression,
      $.meta_property,
      $.new_expression,
    ),


    await_expression: $ => seq(
      'await',
      $._expression
    ),

    member_expression: $ => prec(PREC.MEMBER, seq(
      choice(
        $._expression,
        $.identifier,
        $.super,
        alias($._reserved_identifier, $.identifier)
      ),
      '.',
      alias($.identifier, $.property_identifier)
    )),

    subscript_expression: $ => prec.right(PREC.MEMBER, seq(
      choice($._expression, $.super),
      '[', $._expressions , ']'
    )),

    assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.member_expression,
        $.subscript_expression,
        $.identifier,
        alias($._reserved_identifier, $.identifier),
        $._destructuring_pattern
      ),
      $._initializer
    )),

    augmented_assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
      choice(
        $.member_expression,
        $.subscript_expression,
        alias($._reserved_identifier, $.identifier),
        $.identifier
      ),
      choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|=', '>>=', '>>>=', '<<=', '**='),
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

    binary_expression: $ => choice(
      // Avoid a conflict between `for_in_statement` and the `in` operator
      prec.left(PREC.REL, seq(
        choice($.identifier, $.object, $.array),
        'in',
        $._expression
      )),

      ...[
        ['&&', PREC.AND],
        ['||', PREC.OR],
        ['>>', PREC.TIMES],
        ['>>>', PREC.TIMES],
        ['<<', PREC.TIMES],
        ['&', PREC.AND],
        ['^', PREC.OR],
        ['|', PREC.OR],
        ['+', PREC.PLUS],
        ['-', PREC.PLUS],
        ['*', PREC.TIMES],
        ['/', PREC.TIMES],
        ['%', PREC.TIMES],
        ['**', PREC.EXP],
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
      )
    ),

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

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^"\\\n]+/)),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^'\\\n]+/)),
          $.escape_sequence
        )),
        "'"
      )
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))),

    template_string: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        $.escape_sequence,
        $.template_substitution
      )),
      '`'
    ),

    template_substitution: $ => seq(
      '${',
      $._expressions,
      '}'
    ),

    regex: $ => seq(
      '/',
      $.regex_pattern,
      token.immediate('/'),
      optional($.regex_flags)
    ),

    regex_pattern: $ => token.immediate(
      repeat1(choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./), // escaped character
            /[^\]\n\\]/       // any character besides ']' or '\n'
          )),
          ']'
        ),              // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/    // any character besides '[', '\', '/', '\n'
      ))
    ),

    regex_flags: $ => token.immediate(/[a-z]+/),

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

      const bigint_literal = seq(decimal_digits, 'n')

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/, optional(decimal_digits))
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
        octal_literal,
        bigint_literal,
      ))
    },

    identifier: $ => {
      const alpha = /[^\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/
      const alpha_numeric = /[^\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/

      return token(seq(alpha, repeat(alpha_numeric)))
    },

    meta_property: $ => seq('new', '.', 'target'),

    this: $ => 'this',
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

    decorator: $ => seq(
      '@',
      choice(
        $._identifier_reference,
        alias($.decorator_member_expression, $.member_expression),
        alias($.decorator_call_expression, $.call_expression))
    ),

    _identifier_reference: $ => choice(
      $.identifier,
      alias($._reserved_identifier, $.identifier)
    ),

    decorator_member_expression: $ => prec(PREC.MEMBER, seq(
      seq(
        choice($._identifier_reference, alias($.decorator_member_expression, $.member_expression)),
        '.',
        alias($.identifier, $.property_identifier))
    )),

    decorator_call_expression: $ => prec(PREC.CALL, seq(
      choice($._identifier_reference, alias($.decorator_member_expression, $.member_expression)),
      $.arguments
    )),

    class_body: $ => seq(
      '{',
      repeat(seq(
        repeat($.decorator),
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
      optional(seq(
        commaSep1($._formal_parameter),
        optional(',')
      )),
      ')'
    ),

    _formal_parameter: $ => choice(
      $.identifier,
      alias($._reserved_identifier, $.identifier),
      $._destructuring_pattern,
      $.assignment_pattern,
      $.rest_parameter
    ),

    rest_parameter: $ => seq(
      '...',
      $.identifier
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
      $.number,
      $.computed_property_name
    ),

    computed_property_name: $ => seq(
      '[',
      $._expression,
      ']'
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
