const
  digit = /[0-9]/,
  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimals = repeat1(digit),

  hexidecimal = seq(choice('x', 'X'), repeat1(hexDigit)),
  octadecimal = seq(choice('o', 'O'), repeat1(octalDigit)),

  decimalLiteral = seq(digit, repeat(digit)),
  hexLiteral     = seq('0', hexidecimal),
  octalLiteral   = seq('0', octadecimal),

  exponent = seq(
    choice('e', 'E'),
    optional(choice('+', '-')),
    repeat1(decimalLiteral)
  ),

  floatLiteral = choice(
    seq(decimals, '.', decimals, optional(exponent)),
    seq(decimals, exponent)
  ),

  variable_symbol = choice(
    '!',
    '#',
    '$',
    '%',
    '&',
    '⋆',
    '+',
    '.',
    '/',
    '<',
    '>',
    '?',
    '^',
    '-',
    '*'
  ),

  restricted_variable_symbol = choice(
    '!',
    '#',
    '$',
    '%',
    '&',
    '⋆',
    '+',
    '.',
    '/',
    '<',
    '>',
    '?',
    '^',
    '-',
    '*',
    '=',
    ':'
  ),

  constructor_symbol = choice(
    '!',
    '#',
    '$',
    '%',
    '&',
    '⋆',
    '+',
    '.',
    '/',
    '<',
    '>',
    '?',
    '^',
    '-',
    ':'
  )

module.exports = grammar({
  name: 'haskell',

  inline: $ => [
    $._general_constructor,
    $._infix_expression
  ],

  extras: $ => [
    $.comment,
    /\s|\\n/
  ],

  externals: $ => [
    $._layout_semicolon,
    $._layout_open_brace,
    $._layout_close_brace,
    '->'
  ],

  conflicts: $ => [
    [$._a_pattern, $._statement],
    [$.constructor_identifier, $.type_constructor_identifier],
    [$.qualified_type_constructor_identifier, $.qualified_type_class_identifier],
    [$.qualified_constructor_identifier, $.qualified_type_constructor_identifier],
    [$.type_constructor_identifier, $.type_class_identifier],
    [$._lpat, $._a_expression],
    [$._a_pattern, $._a_expression],
    [$._lexp, $.function_application],
    [$.labeled_pattern, $._a_expression, $.labeled_construction],
    [$._infix_expression, $.infix_operator_application],
    [$._a_expression, $.labeled_construction],
    [$._expression, $.expression_type_signature],
    [$.expression_type_signature, $.function_type],
    [$._lexp, $.list_comprehension],
    [$._lpat],
    [$._constructor_identifier, $._module_identifier],
    [$.module_identifier, $.qualified_module_identifier],
    [$.constructor_identifier, $.type_constructor_identifier, $.type_class_identifier],
    [$._expression, $.infix_operator_application],
    [$.constructor_pattern, $._a_expression]
  ],

  rules: {
    module: $ => choice(
      seq(
        repeat($.language_pragma),
        'module',
        choice($.qualified_module_identifier, $.module_identifier),
        optional($.module_exports),
        alias($._top_where, $.where)
      ),
      seq(
        repeat($.language_pragma),
        repeat(seq($._top_declaration, choice(';', $._layout_semicolon)))
      )
    ),

    _top_declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._top_declaration, $._terminal)),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(seq($._top_declaration, choice($._terminal, $._layout_semicolon))),
        $._layout_close_brace
      )
    ),

    _declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._declaration, $._terminal)),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(seq($._declaration, choice($._terminal, $._layout_semicolon))),
        $._layout_close_brace
      )
    ),

    module_exports: $ => seq(
      '(',
      optional(sep1(',', $.export)),
      ')'
    ),

    export: $ => choice(
      choice($._qualified_variable, $._variable),
      $.module_export,
      seq(
        choice($.qualified_type_constructor_identifier, $.type_constructor_identifier),
        optional(choice(
          optional($.all_constructors),
          seq(
            '(',
            optional(sep1(',', choice($._variable, $._constructor))),
            ')'
          )
        ))
      ),
      seq(
        choice($.qualified_type_class_identifier, $.type_class_identifier),
        optional(choice(
          $.all_constructors,
          seq(
            '(',
            optional(sep1(',', choice($._qualified_variable, $._variable))),
            ')'
          )
        ))
      )
    ),

    module_export: $ => seq(
      'module',
      choice($.qualified_module_identifier, $.module_identifier)
    ),

    all_constructors: $ => '(..)',

    qualified_import_declaration: $ => seq(
      'import',
      'qualified',
      $._import_declaration
    ),

    import_declaration: $ => seq(
      'import',
      $._import_declaration
    ),

    _import_declaration: $ => seq(
      choice(
        $.import_alias,
        $.qualified_module_identifier,
        $.module_identifier
      ),
      optional(choice($.import_spec, $.hidden_import_spec))
    ),

    import_alias: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      'as',
      choice($.qualified_module_identifier, $.module_identifier)
    ),

    import_spec: $ => seq(
      '(',
      optional(sep1(',', alias($._import, $.import))),
      ')'
    ),

    hidden_import_spec: $ => seq(
      'hiding',
      '(',
      optional(sep1(',', alias($._import, $.hidden_import))),
      ')'
    ),

    _import: $ => choice(
      $._variable,
      $._constructor,
      seq(
        $.type_constructor_identifier,
        optional(choice(
          $.all_constructors,
          seq(
            '(',
            optional(sep1(',', choice($._variable, $._constructor))),
            ')'
          )
        ))
      ),
      seq(
        $.type_class_identifier,
        optional(choice(
          $.all_constructors,
          seq(
            '(',
            optional(sep1(',', $._variable)),
            ')'
          )
        ))
      )
    ),

    _empty_import_spec: $ => seq('(',')'),

    _general_declaration: $ => choice(
      $.type_signature,
      $.fixity_declaration
    ),

    _declaration: $ => choice(
      $._general_declaration,
      $.function_declaration,
      $._pragma
    ),

    _top_declaration: $ => choice(
      $.import_declaration,
      $.qualified_import_declaration,
      $.type_synonym_declaration,
      $.algebraic_datatype_declaration,
      $.newtype_declaration,
      $.type_class_declaration,
      $.type_class_instance_declaration,
      $.default_declaration,
      $.foreign_import_declaration,
      $.foreign_export_declaration,
      $._declaration
    ),

    type_synonym_declaration: $ => seq(
      'type',
      $._simple_type,
      '=',
      alias($._type, $.type)
    ),

    function_declaration: $ => seq(
      $._funlhs,
      choice(
        repeat1($.function_guard_pattern),
        seq('=', $.function_body)
      )
    ),

    _funlhs: $ => prec.left(choice(
      seq($._variable, repeat($._a_pattern)),
      seq($._pattern, $._op, $._pattern),
      seq($._funlhs, $._a_pattern, repeat($._a_pattern))
    )),

    _a_pattern: $ => prec.left(choice(
      $._variable,
      $.as_pattern,
      $._general_constructor,
      $.labeled_pattern,
      $._literal,
      $.wildcard,
      $.parenthesized_pattern,
      $.tuple_pattern,
      $.list_pattern,
      $.irrefutable_pattern
    )),

    as_pattern: $ => prec.right(1, seq(
      $._variable,
      '@',
      $._a_pattern
    )),

    tuple_pattern: $ => seq(
      '(',
      alias($._pattern, $.pattern),
      ',',
      sep1(',', alias($._pattern, $.pattern)),
      ')'
    ),

    list_pattern: $ => seq(
      '[',
      sep1(',', alias($._pattern, $.pattern)),
      ']'
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._pattern,
      ')'
    ),

    irrefutable_pattern: $ => seq(
      '~',
      $._a_pattern
    ),

    _pattern: $ => prec.left(choice(
      seq($._lpat, $._op, $._pattern),
      $._lpat
    )),

    _lpat: $ => choice(
      $._a_pattern,
      $.negative_literal,
      $.constructor_pattern
    ),

    constructor_pattern: $ => prec.left(seq(
      $._general_constructor,
      repeat1($._a_pattern),
    )),

    labeled_pattern: $ => seq(
      choice($._qualified_constructor, $._constructor),
      '{',
      sep1(',', $.field_pattern),
      '}'
    ),

    field_pattern: $ => seq(
      choice($._qualified_variable, $._variable),
      '=',
      $._pattern
    ),

    _general_constructor: $ => choice(
      $._constructor,
      $._qualified_constructor,
      $.unit_constructor,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor
    ),

    _general_type_constructor: $ => choice(
      $.type_constructor_identifier,
      $.qualified_type_constructor_identifier,
      $.unit_constructor,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor
    ),

    unit_constructor: $ => seq('(', ')'),
    list_constructor: $ => seq('[', ']'),
    function_constructor: $ => seq('(', '->', ')'),
    tupling_constructor: $ => seq('(', ',', repeat(','), ')'),

    _statement: $ => choice(
      seq(
        $._expression,
        choice($._terminal, $._layout_semicolon)
      ),
      $.bind_pattern,
      $.let_statement
    ),

    bind_pattern: $ => seq(
      $._pattern,
      '<-',
      $._expression,
      choice($._terminal, $._layout_semicolon)
    ),

    let_statement: $ => seq(
      'let',
      $._declarations
    ),

    _expression: $ => choice(
      $._infix_expression,
      $.expression_type_signature,
    ),

    expression_type_signature: $ => seq(
      $._infix_expression,
      alias('::', $.annotation),
      optional($.context),
      choice($._type, $.function_type)
    ),

    _infix_expression: $ => choice(
      $._lexp,
      $.prefix_negation,
      $.infix_operator_application
    ),

    infix_operator_application: $ => prec.left(seq(
      $._lexp,
      $._qualified_operator,
      $._infix_expression
    )),

    _lexp: $ => choice(
      $.lambda,
      $.let_expression,
      $.conditional_expression,
      $.case_expression,
      $.do,
      $.function_application,
      $._a_expression
    ),

    lambda: $ => seq(
      '\\',
      $.lambda_head,
      '->',
      alias($._expression, $.lambda_body)
    ),

    lambda_head: $ => repeat1($._a_pattern),

    prefix_negation: $ => prec.left(seq(
      '-',
      $._infix_expression
    )),

    left_operator_section: $ => seq(
      '(',
      $._expression,
      $._op,
      ')'
    ),

    right_operator_section: $ => seq(
      '(',
      $._op,
      $._expression,
      ')'
    ),

    arithmetic_sequence: $ => seq(
      '[',
      choice(
        $.enum_from,
        $.enum_from_then,
        $.enum_from_to,
        $.enum_from_then_to
      ),
      ']'
    ),

    list_comprehension: $ => seq(
      '[',
      $._expression,
      '|',
      sep1(',', choice(prec.dynamic(1, $.generator), $._expression, $.let_expression)),
      ']'
    ),

    generator: $ => seq(
      $._pattern,
      '<-',
      $._expression
    ),

    enum_from: $ => seq(
      $._expression,
      '..'
    ),

    enum_from_then: $ => seq(
      $._expression,
      ',',
      $._expression,
      '..'
    ),

    enum_from_to: $ => seq(
      $._expression,
      '..',
      $._expression
    ),

    enum_from_then_to: $ => seq(
      $._expression,
      ',',
      $._expression,
      '..',
      $._expression
    ),

    function_body: $ => prec.left(choice(
      seq(
        $._expression,
        optional($.where)
      ),
      seq(
        $.function_guard_pattern,
        optional($.where)
      )
    )),

    _top_where: $ => seq(
      'where',
      $._top_declarations
    ),

    where: $ => seq(
      'where',
      $._declarations
    ),

    let_expression: $ => seq(
      'let',
      $._declarations,
      $.in_clause
    ),

    in_clause: $ => seq(
      'in',
      $._expression
    ),

    case_expression: $ => seq(
      'case',
      $._expression,
      'of',
      choice(
        seq(
          '{',
          sep1($._terminal, $.alternative),
          optional($._terminal),
          '}'
        ),
        seq(
          $._layout_open_brace,
          repeat(seq($.alternative, $._layout_semicolon)),
          $._layout_close_brace
        )
      )
    ),

    alternative: $ => prec.right(choice(
      seq(
        $._pattern,
        '->',
        $._expression,
        optional($.where)
      ),
      seq(
        $._pattern,
        $.case_guard_pattern,
        optional($.where)
      )
    )),

    case_guard_pattern: $ => seq(
      $._guards,
      '->',
      $._expression
    ),

    _guards: $ => seq(
      '|',
      sep1(',', $.guard),
    ),

    function_guard_pattern: $ => seq(
      $._guards,
      '=',
      $._expression
    ),

    guard: $ => choice(
      seq(
        $._pattern,
        '<-',
        $._expression
      ),
      $.let_statement,
      $._expression
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    negative_literal: $ => prec(1, seq('-', '(', choice($.integer, $.float), ')')),

    field_update: $ => seq(
      $._variable,
      $.fields
    ),

    field_label: $ => seq(
      $._variable,
      '=',
      $._expression
    ),

    wildcard: $ => '_',

    function_application: $ => prec.left(seq(
      choice($.function_application, $._a_expression),
      choice($.function_application, $._a_expression)
    )),

    _a_expression: $ => choice(
      $._general_constructor,
      $._qualified_variable,
      $._variable,
      $._literal,
      $.parenthesized_expression,
      $.tuple_expression,
      $.list_expression,
      $.arithmetic_sequence,
      $.list_comprehension,
      $.left_operator_section,
      $.right_operator_section,
      $.labeled_construction,
      $.labeled_update
    ),

    labeled_update: $ => seq(
      $._a_expression,
      '{',
      sep1(',', $.field_bind),
      '}'
    ),

    labeled_construction: $ => seq(
      choice($._qualified_constructor, $._constructor),
      '{',
      optional(sep1(',', $.field_bind)),
      '}'
    ),

    field_bind: $ => seq(
      choice($._qualified_variable, $._variable),
      '=',
      $._expression
    ),

    list_expression: $ => seq(
      '[',
      sep1(',', $._expression),
      ']'
    ),

    tuple_expression: $ => seq(
      '(',
      $._expression,
      ',',
      sep1(',', $._expression),
      ')'
    ),

    _function_application_statements: $ => choice(
      $._variable,
      $._literal,
      $.list,
      $.list_comprehension
    ),

    _terminal: $ => ';',

    foreign_import_declaration: $ => seq(
      'foreign',
      'import',
      $._foreign_declaration
    ),

    foreign_export_declaration: $ => seq(
      'foreign',
      'export',
      $._foreign_declaration
    ),

    _foreign_declaration: $ => seq(
      $.calling_convention,
      optional($.safety),
      optional($.string),
      $.type_signature
    ),

    calling_convention: $ => choice(
      'ccall',
      'stdcall',
      'cplusplus',
      'jvm',
      'dotnet'
    ),

    safety: $ => choice(
      'unsafe',
      'safe'
    ),

    default_declaration: $ => seq(
      'default',
      '(',
      optional(sep1(',', $._type)),
      ')'
    ),

    do: $ => seq(
      'do',
      choice(
        seq(
          '{',
          repeat($._statement),
          '}'
        ),
        seq(
          $._layout_open_brace,
          repeat($._statement),
          $._layout_close_brace
        )
      )
    ),

    conditional_expression: $ => seq(
      'if',
      $._expression,
      optional($._terminal),
      'then',
      $._expression,
      optional($._terminal),
      'else',
      $._expression
    ),

    type_class_declaration: $ => seq(
      'class',
      optional($.scontext),
      seq(
        $.type_class_identifier,
        repeat($.type_variable_identifier)
      ),
      $.where
    ),

    type_class_instance_declaration: $ => seq(
      'instance',
      optional($.scontext),
      choice($.qualified_type_class_identifier, $.type_class_identifier),
      $.instance,
      $.where
    ),

    instance: $ => choice(
      $._general_type_constructor,
      $.parenthesized_instance,
      $.tuple_instance,
      $.list_instance,
      $.function_type_instance
    ),

    parenthesized_instance: $ => seq(
      '(',
      $._general_type_constructor,
      optional(sep1(',', $.type_variable_identifier)),
      ')'
    ),

    tuple_instance: $ => seq(
      '(',
      $.type_variable_identifier,
      ',',
      sep1(',', $.type_variable_identifier),
      ')'
    ),

    list_instance: $ => seq(
      '[',
      $.type_variable_identifier,
      ']'
    ),

    function_type_instance: $ => seq(
      '(',
      $.type_variable_identifier,
      '->',
      $.type_variable_identifier,
      ')'
    ),

    fixity_declaration: $ => seq(
      choice('infixl', 'infixr', 'infix'),
      optional($.integer),
      sep1(',', $._op)
    ),

    _op: $ => choice(
      $.variable_operator,
      $.constructor_operator
    ),

    type_signature: $ => seq(
      sep1(',', $._variable),
      alias('::', $.annotation),
      optional($.context),
      choice($._type, $.function_type)
    ),

    _type: $ => prec.left(
      repeat1($._atype)
    ),

    function_type: $ => prec.right(seq(
      alias($._type, $.type),
      '->',
      choice(alias($._type, $.type), $.function_type)
    )),

    _atype: $ => choice(
      $._general_type_constructor,
      $.type_variable_identifier,
      $.tuple_type,
      $.list_type,
      $.parenthesized_constructor
    ),

    tuple_type: $ => seq(
      '(',
      $._type,
      ',',
      sep1(',', $._type),
      ')'
    ),

    list_type: $ => seq(
      '[',
      $._type,
      ']'
    ),

    parenthesized_constructor: $ => seq(
      '(',
      $._type,
      ')'
    ),

    function_identifier: $ => sep1(',', $._variable),

    tuple: $ => seq(
      '(',
      $._pattern,
      ',',
      sep1(',', $._pattern),
      ')'
    ),

    list: $ => seq(
      '[',
      sep1(',', choice($._expression)),
      ']'
    ),

    algebraic_datatype_declaration: $ => seq(
      'data',
      optional($.context),
      $._simple_type,
      optional(
        seq(
          '=',
          $.constructors,
          optional($.deriving)
        )
      )
    ),

    _simple_type: $ => seq(
      $.type_constructor_identifier,
      repeat($.type_variable_identifier)
    ),

    scontext: $ => prec.left(seq(
      choice(
        $.simple_class,
        seq(
          '(',
          optional(sep1(',', $.simple_class)),
          ')'
        ),
      ),
      '=>'
    )),

    context: $ => prec(1, seq(
      choice(
        $.class,
        seq(
          '(',
          optional(sep1(',', $.class)),
          ')'
        ),
      ),
      '=>'
    )),

    simple_class: $ => seq(
      choice($.qualified_type_class_identifier, $.type_class_identifier),
      $.type_variable_identifier
    ),

    class: $ => choice(
      seq(
        choice(
          $.constructor_identifier,
          $.qualified_constructor_identifier
        ),
        $.type_variable_identifier
      ),
      seq(
        choice(
          $.constructor_identifier,
          $.qualified_constructor_identifier
        ),
        '(',
        $.type_variable_identifier,
        repeat1($._atype),
        ')'
      )
    ),

    constructors: $ => sep1(
      '|',
      choice(
        $.data_constructor,
        $.infix_data_constructor,
        $.record_data_constructor
      )
    ),

    data_constructor: $ => seq(
      $._constructor,
      repeat(
        choice(
          $.strict_type,
          $._atype
        )
      )
    ),

    strict_type: $ => seq(
      '!',
      $._type
    ),

    infix_data_constructor: $ => seq(
      optional('!'),
      repeat1($._atype),
      $.constructor_operator,
      optional('!'),
      repeat1($._atype)
    ),

    record_data_constructor: $ => seq($._constructor, $.fields),

    deriving: $ => seq(
      'deriving',
      choice(
        choice($.qualified_type_class_identifier, $.type_class_identifier),
        seq(
          '(',
          optional(sep1(',', choice($.qualified_type_class_identifier, $.type_class_identifier))),
          ')'
        )
      )
    ),

    newtype_declaration: $ => seq(
      'newtype',
      optional($.context),
      $._simple_type,
      '=',
      $.new_constructor,
      optional($.deriving)
    ),

    new_constructor: $ => choice(
      seq(
        $._constructor,
        $._atype
      ),
      seq(
        $._constructor,
        $.fields
      )
    ),

    field: $ => prec.left(seq(
      sep1(',', $._variable),
      alias('::', $.annotation),
      choice(
        $.strict_type,
        $._type
      )
    )),

    _literal: $ => choice(
      $._primary_literal
    ),

    _primary_literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    _variable: $ => choice(
      $.variable_identifier,
      seq(
        '(',
        $.variable_operator,
        ')'
      )
    ),

    _qualified_variable: $ => choice(
      $.qualified_variable_identifier,
      seq(
        '(',
        $.qualified_variable_operator,
        ')'
      )
    ),

    _constructor: $ => choice(
      $.constructor_identifier,
      seq(
        '(',
        $.constructor_operator,
        ')'
      )
    ),

    _qualified_constructor: $ => choice(
      $.qualified_constructor_identifier,
      seq(
        '(',
        $.qualified_constructor_operator,
        ')'
      )
    ),

    module_identifier: $ => $._module_identifier,

    qualified_module_identifier: $ => prec.right(seq(
      alias($._module_identifier, $.module_identifier),
      optional(seq('.', sep1('.', alias($._module_identifier, $.module_identifier)))),
    )),

    constructor_identifier: $ => $._constructor_identifier,

    type_constructor_identifier: $ => $._constructor_identifier,

    // Higher precedence here to disambiguate scontext
    type_class_identifier: $ => $._constructor_identifier,

    qualified_constructor_identifier: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.constructor_identifier
    ),

    qualified_constructor_operator: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.constructor_operator
    ),

    qualified_type_constructor_identifier: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.constructor_identifier
    ),

    qualified_type_class_identifier: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.constructor_identifier
    ),

    _constructor_identifier: $ => /[A-Z](\w|')*/,

    _module_identifier: $ => /[A-Z](\w|')*/,

    variable_identifier: $ => $._variable_identifier,

    type_variable_identifier: $ => $._variable_identifier,

    qualified_variable_identifier: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.variable_identifier
    ),

    qualified_variable_operator: $ => seq(
      choice($.qualified_module_identifier, $.module_identifier),
      '.',
      $.variable_operator
    ),

    variable_symbol: $ => token(
      seq(
        variable_symbol,
        repeat(restricted_variable_symbol)
      )
    ),

    infix_variable_identifier: $ => seq(
      '`',
      $._variable_identifier,
      '`'
    ),

    variable_operator: $ => choice(
      $.variable_symbol,
      $.infix_variable_identifier
    ),

    constructor_symbol: $ => token(
      seq(
        ':',
        repeat(constructor_symbol)
      )
    ),

    infix_constructor_identifier: $ => seq(
      '`',
      $._constructor_identifier,
      '`'
    ),

    constructor_operator: $ => choice(
      $.constructor_symbol,
      $.infix_constructor_identifier
    ),

    _qualified_operator: $ => choice(
      $.qualified_variable_operator,
      $.variable_operator,
      $.qualified_constructor_operator,
      $.constructor_operator
    ),

    _variable_identifier: $ => /[_a-z](\w|')*/,

    _pragma: $ => choice(
      $.inline_pragma,
      $.no_inline_pragma,
      $.specialization_pragma
    ),

    inline_pragma: $ => seq(
      '{-#',
      'INLINE',
      choice($._qualified_variable, $._variable),
      '#-}'
    ),

    no_inline_pragma: $ => seq(
      '{-#',
      'NOINLINE',
      choice($._qualified_variable, $._variable),
      '#-}'
    ),

    specialization_pragma: $ => seq(
      '{-#',
      'SPECIALIZE',
      sep1(',', $.spec),
      '#-}'
    ),

    spec: $ => seq(
      sep1(',', $._variable),
      alias('::', $.annotation),
      choice($._type, $.function_type)
    ),

    language_pragma: $ => seq(
      seq('{-#'),
      'LANGUAGE',
      sep1(',', $.language_name),
      seq('#-}')
    ),

    language_name: $ => /[A-Z](\w|')*/,

    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        '{-',
        /[^#].*\r?\n/,
        repeat(choice(
          /[^-]/,
          /-[^}]/
        )),
        /-}\r?\n/
      )
    )),

    integer: $ => choice(
      $._integer_literal,
      $._octal_literal,
      $._hexidecimal_literal
    ),

    float: $ => token(floatLiteral),

    char: $ => seq(
      "'",
      choice(
        $._graphic,
        $._space,
        $._escape,
        '"',
        '\''
      ),
      "'"
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        $._graphic,
        $._escape,
        $._gap,
        "'"
      )),
      '"'
    ),

    // TODO: add any unicode character defined as whitespace
    _gap: $ => choice(
      $._space,
      $._newline,
      $._tab,
      $._vertical_tab
    ),

    _graphic: $ => choice(
      $._small,
      $._large,
      $._symbol,
      digit,
      $._special
    ),

    // TODO: any lowercase unicode letter
    _small: $ => choice(
      /[a-z]/,
      '_'
    ),

    // TODO: any uppercase or titlecase unicode letter
    _large: $ => choice(
      $._ascii_large
    ),

    _ascii_large: $ => /[A-Z]/,

    // TODO: any Unicode symol or punctuation
    _symbol: $ => choice(
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '=',
      '>',
      '?',
      '@',
      '^',
      '|',
      '-',
      '~',
      ':',
      '\\'
    ),

    _variable_symbol: $ => choice(
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '>',
      '?',
      '^',
      '-',
      '*'
    ),

    _restricted_variable_symbol: $ => choice(
      '!',
      '#',
      '$',
      '%',
      '&',
      '⋆',
      '+',
      '.',
      '/',
      '<',
      '?',
      '^',
      '-',
      '*',
      '=',
      ':'
    ),

    _special: $ => choice(
      '(',
      ')',
      ';',
      '[',
      ']',
      '`',
      '{',
      '}'
    ),

    _space: $ => ' ',

    _newline: $ => '\n',

    _tab: $ => '\t',

    _vertical_tab: $ => '\v',

    _escape: $ => prec(1, seq(
      '\\',
      choice(
        $._char_escape,
        $._ascii,
        digit,
        hexidecimal,
        octadecimal
      )
    )),

    _char_escape: $ => choice(
      'a',
      'b',
      'f',
      'n',
      'r',
      't',
      'v',
      '\\',
      '"',
      "'",
      '&'
    ),

    _ascii: $ => choice(
      seq('^', $._cntrl),
      'NUL',
      'SOH',
      'STX',
      'ETX',
      'EOT',
      'ENQ',
      'ACK',
      'BEL',
      'BS',
      'HT',
      'LF',
      'VT',
      'FF',
      'CR',
      'SO',
      'SI',
      'DLE',
      'DC1',
      'DC2',
      'DC3',
      'DC4',
      'NAK',
      'SYN',
      'ETB',
      'CAN',
      'EM',
      'SUB',
      'ESC',
      'FS',
      'GS',
      'RS',
      'US',
      'SP',
      'DEL'
    ),

    _cntrl: $ => choice(
      $._ascii_large,
      '@',
      '[',
      ']',
      '\\',
      '^',
      '_'
    ),

    _integer_literal: $ => token(decimalLiteral),
    _octal_literal:   $ => token(octalLiteral),
    _hexidecimal_literal: $ => token(hexLiteral),

    fields: $ => seq(
      '{',
      sep1(',', choice($.field, $.field_label)),
      '}'
    )
  }
})

function sep1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}
