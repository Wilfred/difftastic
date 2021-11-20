module.exports = grammar({
  name: 'javascript',

  externals: $ => [
    $._automatic_semicolon,
    $._template_chars,
    $._ternary_qmark,
  ],

  extras: $ => [
    $.comment,
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  supertypes: $ => [
    $.statement,
    $.declaration,
    $.expression,
    $.primary_expression,
    $.pattern,
  ],

  inline: $ => [
    $._call_signature,
    $._formal_parameter,
    $.statement,
    $._expressions,
    $._semicolon,
    $._identifier,
    $._reserved_identifier,
    $._jsx_attribute,
    $._jsx_element_name,
    $._jsx_child,
    $._jsx_element,
    $._jsx_attribute_name,
    $._jsx_attribute_value,
    $._jsx_identifier,
    $._lhs_expression,
  ],

  precedences: $ => [
    [
      'member',
      'call',
      $.update_expression,
      'unary_void',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_shift',
      'binary_compare',
      'binary_relation',
      'binary_equality',
      'bitwise_and',
      'bitwise_xor',
      'bitwise_or',
      'logical_and',
      'logical_or',
      'ternary',
      $.sequence_expression,
      $.arrow_function
    ],
    ['assign', $.primary_expression],
    ['member', 'new', 'call', $.expression],
    ['declaration', 'literal'],
    [$.primary_expression, $.statement_block, 'object'],
    [$.import_statement, $.import],
    [$.export_statement, $.primary_expression],
  ],

  conflicts: $ => [
    [$.primary_expression, $._property_name],
    [$.primary_expression, $._property_name, $.arrow_function],
    [$.primary_expression, $.arrow_function],
    [$.primary_expression, $.method_definition],
    [$.primary_expression, $.rest_pattern],
    [$.primary_expression, $.pattern],
    [$.primary_expression, $._for_header],
    [$.array, $.array_pattern],
    [$.object, $.object_pattern],
    [$.assignment_expression, $.pattern],
    [$.assignment_expression, $.object_assignment_pattern],
    [$.labeled_statement, $._property_name],
    [$.computed_property_name, $.array],
    [$.binary_expression, $._initializer],
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => seq(
      optional($.hash_bang_line),
      repeat($.statement)
    ),

    hash_bang_line: $ => /#!.*/,

    //
    // Export declarations
    //

    export_statement: $ => choice(
      seq(
        'export',
        choice(
          seq('*', $._from_clause, $._semicolon),
          seq(alias($.namespace_import_export, $.namespace_export), $._from_clause, $._semicolon),
          seq($.export_clause, $._from_clause, $._semicolon),
          seq($.export_clause, $._semicolon)
        )
      ),
      seq(
        repeat(field('decorator', $.decorator)),
        'export',
        choice(
          field('declaration', $.declaration),
          seq(
            'default',
            choice(
              field('declaration', $.declaration),
              seq(
                field('value', $.expression),
                $._semicolon
              )
            )
          )
        )
      )
    ),

    export_clause: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.export_specifier)),
      optional(','),
      '}'
    ),

    _import_export_specifier: $ => seq(
      field('name', $.identifier),
      optional(seq(
        'as',
        field('alias', $.identifier)
      ))
    ),

    declaration: $ => choice(
      $.function_declaration,
      $.generator_function_declaration,
      $.class_declaration,
      $.lexical_declaration,
      $.variable_declaration
    ),

    //
    // Import declarations
    //

    import: $ => token('import'),

    import_statement: $ => seq(
      'import',
      choice(
        seq($.import_clause, $._from_clause),
        field('source', $.string)
      ),
      $._semicolon
    ),

    import_clause: $ => choice(
      alias($.namespace_import_export, $.namespace_import),
      $.named_imports,
      seq(
        $.identifier,
        optional(seq(
          ',',
          choice(
            alias($.namespace_import_export, $.namespace_import),
            $.named_imports
          )
        ))
      )
    ),

    _from_clause: $ => seq(
      "from", field('source', $.string)
    ),

    namespace_import_export: $ => seq(
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

    statement: $ => choice(
      $.export_statement,
      $.import_statement,
      $.debugger_statement,
      $.expression_statement,
      $.declaration,
      $.statement_block,

      $.if_statement,
      $.switch_statement,
      $.for_statement,
      $.for_in_statement,
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
      field('kind', choice('let', 'const')),
      commaSep1($.variable_declarator),
      $._semicolon
    ),

    variable_declarator: $ => seq(
      field('name', choice($.identifier, $._destructuring_pattern)),
      optional($._initializer)
    ),

    statement_block: $ => prec.right(seq(
      '{',
      repeat($.statement),
      '}',
      optional($._automatic_semicolon)
    )),

    else_clause: $ => seq('else', $.statement),

    if_statement: $ => prec.right(seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.statement),
      optional(field('alternative', $.else_clause))
    )),

    switch_statement: $ => seq(
      'switch',
      field('value', $.parenthesized_expression),
      field('body', $.switch_body)
    ),

    for_statement: $ => seq(
      'for',
      '(',
      field('initializer', choice(
        $.lexical_declaration,
        $.variable_declaration,
        $.expression_statement,
        $.empty_statement
      )),
      field('condition', choice(
        $.expression_statement,
        $.empty_statement
      )),
      field('increment', optional($._expressions)),
      ')',
      field('body', $.statement)
    ),

    for_in_statement: $ => seq(
      'for',
      optional('await'),
      $._for_header,
      field('body', $.statement)
    ),

    _for_header: $ => seq(
      '(',
      choice(
        field('left', choice(
          $._lhs_expression,
          $.parenthesized_expression,
        )),
        seq(
          field('kind', 'var'),
          field('left', choice(
            $.identifier,
            $._destructuring_pattern
          )),
          optional($._initializer)
        ),
        seq(
          field('kind', choice('let', 'const')),
          field('left', choice(
            $.identifier,
            $._destructuring_pattern
          ))
        )
      ),
      field('operator', choice('in', 'of')),
      field('right', $._expressions),
      ')',
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $.parenthesized_expression),
      field('body', $.statement)
    ),

    do_statement: $ => seq(
      'do',
      field('body', $.statement),
      'while',
      field('condition', $.parenthesized_expression),
      $._semicolon
    ),

    try_statement: $ => seq(
      'try',
      field('body', $.statement_block),
      optional(field('handler', $.catch_clause)),
      optional(field('finalizer', $.finally_clause))
    ),

    with_statement: $ => seq(
      'with',
      field('object', $.parenthesized_expression),
      field('body', $.statement)
    ),

    break_statement: $ => seq(
      'break',
      field('label', optional(alias($.identifier, $.statement_identifier))),
      $._semicolon
    ),

    continue_statement: $ => seq(
      'continue',
      field('label', optional(alias($.identifier, $.statement_identifier))),
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
      field('label', alias(choice($.identifier, $._reserved_identifier), $.statement_identifier)),
      ':',
      field('body', $.statement)
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
      field('value', $._expressions),
      ':',
      field('body', repeat($.statement))
    ),

    switch_default: $ => seq(
      'default',
      ':',
      field('body', repeat($.statement))
    ),

    catch_clause: $ => seq(
      'catch',
      optional(seq('(', field('parameter', choice($.identifier, $._destructuring_pattern)), ')')),
      field('body', $.statement_block)
    ),

    finally_clause: $ => seq(
      'finally',
      field('body', $.statement_block)
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
      $.expression,
      $.sequence_expression
    ),

    expression: $ => choice(
      $.primary_expression,
      $._jsx_element,
      $.jsx_fragment,
      $.assignment_expression,
      $.augmented_assignment_expression,
      $.await_expression,
      $.unary_expression,
      $.binary_expression,
      $.ternary_expression,
      $.update_expression,
      $.new_expression,
      $.yield_expression,
    ),

    primary_expression: $ => choice(
      $.subscript_expression,
      $.member_expression,
      $.parenthesized_expression,
      $._identifier,
      alias($._reserved_identifier, $.identifier),
      $.this,
      $.super,
      $.number,
      $.string,
      $.template_string,
      $.regex,
      $.true,
      $.false,
      $.null,
      $.import,
      $.object,
      $.array,
      $.function,
      $.arrow_function,
      $.generator_function,
      $.class,
      $.meta_property,
      $.call_expression,
    ),

    yield_expression: $ => prec.right(seq(
      'yield',
      choice(
        seq('*', $.expression),
        optional($.expression)
      ))),

    object: $ => prec('object', seq(
      '{',
      commaSep(optional(choice(
        $.pair,
        $.spread_element,
        $.method_definition,
        alias(
          choice($.identifier, $._reserved_identifier),
          $.shorthand_property_identifier
        )
      ))),
      '}'
    )),

    object_pattern: $ => prec('object', seq(
      '{',
      commaSep(optional(choice(
        $.pair_pattern,
        $.rest_pattern,
        $.object_assignment_pattern,
        alias(
          choice($.identifier, $._reserved_identifier),
          $.shorthand_property_identifier_pattern
        )
      ))),
      '}'
    )),

    assignment_pattern: $ => seq(
      field('left', $.pattern),
      '=',
      field('right', $.expression)
    ),

    object_assignment_pattern: $ => seq(
      field('left', choice(
        alias(choice($._reserved_identifier, $.identifier), $.shorthand_property_identifier_pattern),
        $._destructuring_pattern
      )),
      '=',
      field('right', $.expression)
    ),

    array: $ => seq(
      '[',
      commaSep(optional(choice(
        $.expression,
        $.spread_element
      ))),
      ']'
    ),

    array_pattern: $ => seq(
      '[',
      commaSep(optional(choice(
        $.pattern,
        $.assignment_pattern,
      ))),
      ']'
    ),

    _jsx_element: $ => choice($.jsx_element, $.jsx_self_closing_element),

    jsx_element: $ => seq(
      field('open_tag', $.jsx_opening_element),
      repeat($._jsx_child),
      field('close_tag', $.jsx_closing_element)
    ),

    jsx_fragment: $ => seq('<', '>', repeat($._jsx_child), '<', '/', '>'),

    jsx_text: $ => /[^{}<>]+/,

    jsx_expression: $ => seq(
      '{',
      optional(choice(
        $.expression,
        $.sequence_expression,
        $.spread_element
      )),
      '}'
    ),

    _jsx_child: $ => choice(
      $.jsx_text,
      $._jsx_element,
      $.jsx_fragment,
      $.jsx_expression
    ),

    jsx_opening_element: $ => prec.dynamic(-1, seq(
      '<',
      field('name', $._jsx_element_name),
      repeat(field('attribute', $._jsx_attribute)),
      '>'
    )),

    jsx_identifier: $ => /[a-zA-Z_$][a-zA-Z\d_$]*-[a-zA-Z\d_$\-]*/,

    _jsx_identifier: $ => choice(
      alias($.jsx_identifier, $.identifier),
      $.identifier
    ),

    nested_identifier: $ => prec('member', seq(
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
      field('name', $._jsx_element_name),
      '>'
    ),

    jsx_self_closing_element: $ => seq(
      '<',
      field('name', $._jsx_element_name),
      repeat(field('attribute', $._jsx_attribute)),
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

    class: $ => prec('literal', seq(
      repeat(field('decorator', $.decorator)),
      'class',
      field('name', optional($.identifier)),
      optional($.class_heritage),
      field('body', $.class_body)
    )),

    class_declaration: $ => prec('declaration', seq(
      repeat(field('decorator', $.decorator)),
      'class',
      field('name', $.identifier),
      optional($.class_heritage),
      field('body', $.class_body),
      optional($._automatic_semicolon)
    )),

    class_heritage: $ => seq('extends', $.expression),

    function: $ => prec('literal', seq(
      optional('async'),
      'function',
      field('name', optional($.identifier)),
      $._call_signature,
      field('body', $.statement_block)
    )),

    function_declaration: $ => prec.right('declaration', seq(
      optional('async'),
      'function',
      field('name', $.identifier),
      $._call_signature,
      field('body', $.statement_block),
      optional($._automatic_semicolon)
    )),

    generator_function: $ => prec('literal', seq(
      optional('async'),
      'function',
      '*',
      field('name', optional($.identifier)),
      $._call_signature,
      field('body', $.statement_block)
    )),

    generator_function_declaration: $ => prec.right('declaration', seq(
      optional('async'),
      'function',
      '*',
      field('name', $.identifier),
      $._call_signature,
      field('body', $.statement_block),
      optional($._automatic_semicolon)
    )),

    arrow_function: $ => seq(
      optional('async'),
      choice(
        field('parameter', choice(
          alias($._reserved_identifier, $.identifier),
          $.identifier,
        )),
        $._call_signature
      ),
      '=>',
      field('body', choice(
        $.expression,
        $.statement_block
      ))
    ),

    // Override
    _call_signature: $ => field('parameters', $.formal_parameters),
    _formal_parameter: $ => choice($.pattern, $.assignment_pattern),

    call_expression: $ => choice(
      prec('call', seq(
        field('function', $.expression),
        field('arguments', choice($.arguments, $.template_string))
      )),
      prec('member', seq(
        field('function', $.primary_expression),
        '?.',
        field('arguments', $.arguments)
      ))
    ),

    new_expression: $ => prec.right('new', seq(
      'new',
      field('constructor', choice($.primary_expression, $.new_expression)),
      field('arguments', optional(prec.dynamic(1, $.arguments)))
    )),

    await_expression: $ => prec('unary_void', seq(
      'await',
      $.expression
    )),

    member_expression: $ => prec('member', seq(
      field('object', choice($.expression, $.primary_expression)),
      choice('.', '?.'),
      field('property', choice(
        $.private_property_identifier,
        alias($.identifier, $.property_identifier)))
    )),

    subscript_expression: $ => prec.right('member', seq(
      field('object', choice($.expression, $.primary_expression)),
      optional('?.'),
      '[', field('index', $._expressions), ']'
    )),

    _lhs_expression: $ => choice(
      $.member_expression,
      $.subscript_expression,
      $._identifier,
      alias($._reserved_identifier, $.identifier),
      $._destructuring_pattern
    ),

    assignment_expression: $ => prec.right('assign', seq(
      field('left', choice($.parenthesized_expression, $._lhs_expression)),
      '=',
      field('right', $.expression)
    )),

    _augmented_assignment_lhs: $ => choice(
      $.member_expression,
      $.subscript_expression,
      alias($._reserved_identifier, $.identifier),
      $.identifier,
      $.parenthesized_expression,
    ),

    augmented_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._augmented_assignment_lhs),
      field('operator', choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|=', '>>=', '>>>=',
                               '<<=', '**=', '&&=', '||=', '??=')),
      field('right', $.expression)
    )),

    _initializer: $ => seq(
      '=',
      field('value', $.expression)
    ),

    _destructuring_pattern: $ => choice(
      $.object_pattern,
      $.array_pattern
    ),

    spread_element: $ => seq('...', $.expression),

    ternary_expression: $ => prec.right('ternary', seq(
      field('condition', $.expression),
      alias($._ternary_qmark, '?'),
      field('consequence', $.expression),
      ':',
      field('alternative', $.expression)
    )),

    binary_expression: $ => choice(
      ...[
        ['&&', 'logical_and'],
        ['||', 'logical_or'],
        ['>>', 'binary_shift'],
        ['>>>', 'binary_shift'],
        ['<<', 'binary_shift'],
        ['&', 'bitwise_and'],
        ['^', 'bitwise_xor'],
        ['|', 'bitwise_or'],
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['**', 'binary_exp'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['==', 'binary_equality'],
        ['===', 'binary_equality'],
        ['!=', 'binary_equality'],
        ['!==', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        ['??', 'ternary'],
        ['instanceof', 'binary_relation'],
        ['in', 'binary_relation'],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $.expression),
          field('operator', operator),
          field('right', $.expression)
        ))
      )
    ),

    unary_expression: $ => prec.left('unary_void', seq(
      field('operator', choice('!', '~', '-', '+', 'typeof', 'void', 'delete')),
      field('argument', $.expression)
    )),

    update_expression: $ => prec.left(choice(
      seq(
        field('argument', $.expression),
        field('operator', choice('++', '--'))
      ),
      seq(
        field('operator', choice('++', '--')),
        field('argument', $.expression)
      ),
    )),

    sequence_expression: $ => seq(
      field('left', $.expression),
      ',',
      field('right', choice($.sequence_expression, $.expression))
    ),

    //
    // Primitives
    //

    // Here we tolerate unescaped newlines in double-quoted and
    // single-quoted string literals.
    // This is legal in typescript as jsx/tsx attribute values (as of
    // 2020), and perhaps will be valid in javascript as well in the
    // future.
    //
    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          alias($.unescaped_double_string_fragment, $.string_fragment),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          alias($.unescaped_single_string_fragment, $.string_fragment),
          $.escape_sequence
        )),
        "'"
      )
    ),

    // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
    // We give names to the token() constructs containing a regexp
    // so as to obtain a node in the CST.
    //
    unescaped_double_string_fragment: $ =>
      token.immediate(prec(1, /[^"\\]+/)),

    // same here
    unescaped_single_string_fragment: $ =>
      token.immediate(prec(1, /[^'\\]+/)),

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
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

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
      field('pattern', $.regex_pattern),
      token.immediate('/'),
      optional(field('flags', $.regex_flags))
    ),

    regex_pattern: $ => token.immediate(prec(-1,
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
    )),

    regex_flags: $ => token.immediate(/[a-z]+/),

    number: $ => {
      const hex_literal = seq(
        choice('0x', '0X'),
        /[\da-fA-F](_?[\da-fA-F])*/
      )

      const decimal_digits = /\d(_?\d)*/
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const binary_literal = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/)

      const octal_literal = seq(choice('0o', '0O'), /[0-7](_?[0-7])*/)

      const bigint_literal = seq(choice(hex_literal, binary_literal, octal_literal, decimal_digits), 'n')

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal_digits)))
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, exponent_part),
        seq(decimal_digits),
      )

      return token(choice(
        hex_literal,
        decimal_literal,
        binary_literal,
        octal_literal,
        bigint_literal,
      ))
    },

    // 'undefined' is syntactically a regular identifier in JavaScript.
    // However, its main use is as the read-only global variable whose
    // value is [undefined], for which there's no literal representation
    // unlike 'null'. We gave it its own rule so it's easy to
    // highlight in text editors and other applications.
    _identifier: $ => choice(
      $.undefined,
      $.identifier
    ),

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    private_property_identifier: $ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq('#', alpha, repeat(alphanumeric)))
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

    arguments: $ => seq(
      '(',
      commaSep(optional(choice($.expression, $.spread_element))),
      ')'
    ),

    decorator: $ => seq(
      '@',
      choice(
        $.identifier,
        alias($.decorator_member_expression, $.member_expression),
        alias($.decorator_call_expression, $.call_expression)
      )
    ),

    decorator_member_expression: $ => prec('member', seq(
      field('object', choice(
        $.identifier,
        alias($.decorator_member_expression, $.member_expression)
      )),
      '.',
      field('property', alias($.identifier, $.property_identifier))
    )),

    decorator_call_expression: $ => prec('call', seq(
      field('function', choice(
        $.identifier,
        alias($.decorator_member_expression, $.member_expression)
      )),
      field('arguments', $.arguments)
    )),

    class_body: $ => seq(
      '{',
      repeat(choice(
        seq(field('member', $.method_definition), optional(';')),
        seq(field('member', $.field_definition), $._semicolon)
      )),
      '}'
    ),

    field_definition: $ => seq(
      repeat(field('decorator', $.decorator)),
      optional('static'),
      field('property', $._property_name),
      optional($._initializer)
    ),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        commaSep1($._formal_parameter),
        optional(',')
      )),
      ')'
    ),

    // This negative dynamic precedence ensures that during error recovery,
    // unfinished constructs are generally treated as literal expressions,
    // not patterns.
    pattern: $ => prec.dynamic(-1, choice(
      $._lhs_expression,
      $.rest_pattern
    )),

    rest_pattern: $ => prec.right(seq(
      '...',
      $._lhs_expression
    )),

    method_definition: $ => seq(
      repeat(field('decorator', $.decorator)),
      optional('static'),
      optional('async'),
      optional(choice('get', 'set', '*')),
      field('name', $._property_name),
      field('parameters', $.formal_parameters),
      field('body', $.statement_block)
    ),

    pair: $ => seq(
      field('key', $._property_name),
      ':',
      field('value', $.expression)
    ),

    pair_pattern: $ => seq(
      field('key', $._property_name),
      ':',
      field('value', choice($.pattern, $.assignment_pattern))
    ),

    _property_name: $ => choice(
      alias(choice(
        $.identifier,
        $._reserved_identifier
      ), $.property_identifier),
      $.private_property_identifier,
      $.string,
      $.number,
      $.computed_property_name
    ),

    computed_property_name: $ => seq(
      '[',
      $.expression,
      ']'
    ),

    _reserved_identifier: $ => choice(
      'get',
      'set',
      'async',
      'static',
      'export'
    ),

    _semicolon: $ => choice($._automatic_semicolon, ';')
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
