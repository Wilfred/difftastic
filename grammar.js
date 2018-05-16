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

  PREC = {
    FUNCTION_DECLARATION: 3,
    NEGATIVE_LITERAL: 1,
    TUPLE_INSTANCE: 1,
    LIST_INSTANCE: 1,
    INSTANCE_DECLARATION: 1,
    FUNCTION_TYPE_INSTANCE: 1,
    KIND_SIGNATURE: 1,
    TYPE_CONSTRUCTOR_OPERATOR_PATTERN: 1,
    RECORD_DATA_CONSTRUCTOR: 1,
    NEW_CONSTRUCTOR: 1,
    CONJUNCTION: 2,
    DISJUNCTION: 1,
    AS_PATTERN: 3
  }

  symbol = choice(
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
    '_',
    '|',
    '~'
  ),

module.exports = grammar({
  name: 'haskell',

  inline: $ => [
    $._infix_expression
  ],

  extras: $ => [
    $.comment,
    $.cpp,
    /\s|\\n/
  ],

  externals: $ => [
    $._layout_semicolon,
    $._layout_open_brace,
    $._layout_close_brace,
    '->',
    $._qualified_module_dot,
    $._initialize_layout
  ],

  conflicts: $ => [
    [$.quasi_quotation, $.variable_identifier],
    [$._lexp, $._a_expression],
    [$._lexp, $.function_application],
    [$._a_pattern, $._a_expression],
    [$._import, $._qualified_type_constructor_identifier],
    [$._import, $._qualified_constructor_identifier, $._qualified_type_constructor_identifier],
    [$._qualified_constructor_identifier, $._qualified_type_constructor_identifier],
    [$._qualified_type_constructor_identifier, $._qualified_type_class_identifier],
    [$.qualified_type_constructor_identifier, $.qualified_type_class_identifier],
    [$.qualified_type_constructor_identifier, $.qualified_constructor_identifier],
    [$._qualified_module_identifier, $.qualified_module_identifier],
    [$.qualified_module_identifier],
    [$._a_expression, $.constructor_pattern],
    [$.constructor_pattern, $._a_pattern],
    [$.labeled_pattern, $.labeled_construction],
    [$._atype, $._qualified_constructor_identifier],
    [$.qualified_type_constructor_identifier, $.qualified_type_class_identifier, $.qualified_constructor_identifier],
    [$._qualified_type_constructor_identifier, $._qualified_type_class_identifier, $._qualified_constructor_identifier],
    [$._a_pattern, $._lexp],
    [$.variable_identifier, $.type_variable_identifier],
    [$.type_family_declaration],
    [$._atype, $._context_lpat],
    [$.kind_function_type, $.function_type],
    [$._general_constructor, $._context_lpat],
    [$._type_signature, $.infix_operator_pattern],
    [$.expression_type_signature, $.infix_operator_pattern],
    [$.equality_constraint],

    // These conflicts are necessary to help disambiguate between the type class identifier for class (type class constraints) vs instance type class identifier, and the stand alone deriving instance class identifier.
    [$.type_class_declaration, $._qualified_type_class_identifier],
    [$._simple_type, $._context_lpat],

    // These conflicts support repeat1 for _general_type_constructor (and prevent errors when parsing `Foo a (Bar ...)`)
    [$._context_lpat],
    [$._general_constructor],

    // These conflicts support implicit parameter contexts (e.g. a :: (?b :: c -> c -> Bool) => d) and implicit parameter identifiers in function bodies (e.g. a = b ?c)
    [$._a_expression, $._type_signature],
    [$._a_expression, $._atype],
    [$._a_expression, $._type_signature, $._atype],

    // These conflicts support strict types (!a or !Int) within a variety of syntaxes
    [$._atype, $.field],
    [$._atype, $.data_constructor],
    [$._type, $.infix_data_constructor],

    // These conflicts allow reuse of type_pattern within contexts (type class constraints)
    [$._type_pattern, $.class],

    // These conflicts allow strict_type and promoted_type_constructor to match against atype without going through _type_pattern -> _type. This is because strict_type and promoted_type_constructor need to bind tighter than other rules (like context).
    [$._type],
    [$._type_pattern, $.strict_type],
    [$.strict_type],
    [$.promoted_type_constructor, $._type_pattern],
    [$.promoted_type_constructor],

    // These conflicts allow for top level function application (to support template haskell)
    [$._a_pattern, $.constructor_pattern, $._a_expression],
    [$._top_declaration, $.function_application],
    [$._declaration, $._a_expression],

    // These conflicts allow for contexts within scoped type variables (which are optional), while providing flexibility for non context patterns.
    [$.context_pattern],
    [$.scoped_type_variables, $._qualified_variable_identifier],
    [$.scoped_type_variables]
  ],

  rules: {
    module: $ => choice(
      seq(
        repeat($._file_header_pragma),
        'module',
        $._qualified_module_identifier,
        optional(choice($.warning_pragma, $.deprecated_pragma)),
        optional($.module_exports),
        alias($._top_where, $.where)
      ),
      seq(
        repeat($._file_header_pragma),
        $._initialize_layout,
        repeat(seq($._top_declaration, choice($._terminal, $._layout_semicolon)))
      )
    ),

    _top_declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._top_declaration, optional($._terminal))),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(seq($._top_declaration, choice($._terminal, $._layout_semicolon))),
        $._layout_close_brace
      )
    ),

    _statements: $ => choice(
      seq(
        '{',
        repeat(seq($._statement, optional($.where), optional($._terminal))),
        optional($.where),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(
          seq(
            $._statement,
            optional($.where),
            choice($._terminal, $._layout_semicolon)
          )
        ),
        optional($.where),
        $._layout_close_brace
      )
    ),

    _declarations: $ => choice(
      seq(
        '{',
        repeat(seq($._declaration, optional($._terminal))),
        '}'
      ),
      seq(
        $._layout_open_brace,
        repeat(
          seq(
            $._declaration,
            choice($._terminal, $._layout_semicolon)
          )
        ),
        $._layout_close_brace
      )
    ),

    module_exports: $ => seq(
      '(',
      optional(sep1(',', $.export)),
      optional(','), // for trailing commas at the end of an export list
      ')'
    ),

    // TODO: Check if ambiguity between type class and type constructor identifiers can be resolved through associativity or precedence.
    export: $ => seq(
      optional(alias('type', $.type)),
      choice(
        $.module_export,
        $._variable,
        $._qualified_constructor,
        seq(
          $._qualified_type_constructor_identifier,
          optional(choice(
            optional($.all_constructors),
            seq(
              '(',
              optional(sep1(',', choice($._variable, $._qualified_constructor))),
              ')'
            )
          ))
        ),
        seq(
          $._qualified_type_class_identifier,
          optional(choice(
            $.all_constructors,
            seq(
              '(',
              optional(sep1(',', $._variable)),
              ')'
            )
          ))
        )
      )
    ),

    module_export: $ => seq(
      'module',
      $._qualified_module_identifier
    ),

    all_constructors: $ => '(..)',

    qualified_import_declaration: $ => seq(
      'import',
      'qualified',
      $._import_declaration
    ),

    import_declaration: $ => seq(
      'import',
      optional(alias($.string, $.package_qualified_import)),
      optional($.source_pragma),
      $._import_declaration
    ),

    _import_declaration: $ => prec.right(seq(
      choice(
        $.import_alias,
        $._qualified_module_identifier
      ),
      optional(choice($.import_spec, $.hidden_import_spec))
    )),

    import_alias: $ => seq(
      $._qualified_module_identifier,
      'as',
      $._qualified_module_identifier
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
      $._qualified_constructor,
      seq(
        $._qualified_type_constructor_identifier,
        optional(choice(
          $.all_constructors,
          seq(
            '(',
            optional(sep1(',', choice($._variable, $._qualified_constructor))),
            ')'
          )
        ))
      ),
      seq(
        alias($._constructor_identifier, $.type_class_identifier),
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
      $._pragma,
      $.quasi_quotation,
      $.type_family_declaration,
      $.pattern_type_signature,
      $.bidirectional_pattern_synonym,
      $.unidirectional_pattern_synonym,
      $.default_signature,
      $.type_synonym_declaration,
      $.type_instance_declaration
    ),

    bidirectional_pattern_synonym: $ => seq(
      'pattern',
      $.constructor_pattern,
      $.function_body
    ),

    unidirectional_pattern_synonym: $ => seq(
      'pattern',
      $.constructor_pattern,
      '<-',
      alias($._function_body, $.function_body)
    ),

    _top_declaration: $ => choice(
      $.import_declaration,
      $.qualified_import_declaration,
      $.gadt_declaration,
      $.algebraic_datatype_declaration,
      $.newtype_declaration,
      $.type_class_declaration,
      $.type_class_instance_declaration,
      $.default_declaration,
      $.foreign_import_declaration,
      $.foreign_export_declaration,
      $.standalone_deriving_declaration,
      $._declaration,
      prec.dynamic(-2, $.function_application)
    ),

    standalone_deriving_declaration: $ => seq(
      'deriving',
      'instance',
      optional(choice(
        $.overlaps_pragma,
        $.overlapping_pragma,
        $.overlappable_pragma,
        $.incoherent_pragma
      )),
      optional($.context),
      choice($._qualified_type_class_identifier, $._qualified_variable_identifier),
      alias($._type_pattern, $.instance)
    ),

    type_synonym_declaration: $ => seq(
      'type',
      choice($._simple_type, $.parenthesized_type_pattern),
      choice(
        $.type_signature,
        $.kind_signature,
        $.type_synonym_body
      )
    ),

    type_synonym_body: $ => seq(
      '=',
      optional($.scoped_type_variables),
      optional($.context),
      choice(
        alias($._type_pattern, $.type_pattern),
        $._expression
      )
    ),

    type_family_declaration: $ => seq(
      'type',
      'family',
      $._simple_type,
      optional(choice($.kind_signature, $.type_signature)),
      optional($.where)
    ),

    function_declaration: $ => prec(PREC.FUNCTION_DECLARATION, seq(
      $._funlhs,
      $.function_body
    )),

    type_instance_declaration: $ => seq(
      'type',
      'instance',
      $._simple_type,
      $.type_instance_body
    ),

    type_instance_body: $ => seq(
      '=',
      choice(
        alias($._type_pattern, $.type_pattern),
        $._expression
      )
    ),

    _funlhs: $ => choice(
      repeat1($._a_pattern),
      prec.dynamic(3, seq($._pattern, $._op, $._pattern)),
    ),

    _a_pattern: $ => choice(
      $.constructor_pattern,
      $.tuple_pattern,
      $._variable,
      prec.dynamic(1, $.as_pattern),
      $.implicit_parameter_identifier,
      $._general_constructor,
      $.labeled_pattern,
      $._literal,
      $.wildcard,
      prec.dynamic(1, $.parenthesized_pattern),
      $.list_pattern,
      $.irrefutable_pattern,
      alias($._strict_a_pattern, $.strict_pattern),
      $.view_pattern
    ),

    implicit_parameter_identifier: $ => /\?[_a-z](\w|')*/,

    view_pattern: $ => seq(
      '(',
      $._expression,
      '->',
      $._a_pattern,
      ')'
    ),

    _strict_a_pattern: $ => seq(
      '!',
      $._a_pattern
    ),

    as_pattern: $ => prec.right(PREC.AS_PATTERN, seq(
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
      $.negative_literal
    ),

    constructor_pattern: $ => prec.right(seq(
      $._general_constructor,
      repeat1($._a_pattern),
    )),

    labeled_pattern: $ => seq(
      $._qualified_constructor,
      '{',
      optional(sep1(',', choice($.field_pattern, $.named_field_pun, $.record_wild_cards))),
      '}'
    ),

    field_pattern: $ => seq(
      $._variable,
      '=',
      $._pattern
    ),

    named_field_pun: $ => $._variable,

    record_wild_cards: $ => '..',

    promoted_type_operator: $ => seq(
      '\'',
      $._qualified_operator
    ),

    promoted_type_constructor: $ => prec.left(seq(
      '\'',
      choice(
        $._atype,
        $.infix_operator_pattern
      )
    )),

    _general_constructor: $ => choice(
      $._qualified_constructor,
      $.unit_constructor,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor,
      $.promoted_type_constructor,
    ),

    _general_type_constructor: $ => prec.left(repeat1(choice(
      $._qualified_type_constructor_identifier,
      $.unit_constructor,
      $.list_constructor,
      $.function_constructor,
      $.tupling_constructor,
      $.promoted_type_constructor
    ))),

    unit_constructor: $ => seq('(', ')'),
    list_constructor: $ => seq('[', ']'),
    function_constructor: $ => seq('(', '->', ')'),
    tupling_constructor: $ => seq('(', ',', repeat(','), ')'),

    _statement: $ => choice(
      $._expression,
      $.bind_pattern,
      $.let_statement
    ),

    bind_pattern: $ => seq(
      $._pattern,
      '<-',
      $._expression
    ),

    let_statement: $ => seq(
      'let',
      $._declarations
    ),

    _expression: $ => prec.right(choice(
      $._infix_expression,
      $.expression_type_signature
    )),

    expression_type_signature: $ => seq(
      $._infix_expression,
      alias('::', $.annotation),
      optional($.context),
      $._type_pattern
    ),

    _infix_expression: $ => choice(
      $._lexp,
      $.prefix_negation,
      $.infix_operator_application
    ),

    infix_operator_application: $ => prec.right(seq(
      $._lexp,
      choice($._qualified_operator, $.promoted_type_operator),
      optional($._infix_expression)
    )),

    _lexp: $ => choice(
      $.lambda,
      $.let_expression,
      $.conditional_expression,
      $.case_expression,
      $.do,
      $.function_application,
      $._a_expression,
      $.quasi_quotation,
      $.splice,
      $.wildcard
    ),

    type_application: $ => seq(
      '@',
      choice($._pattern, $.parenthesized_expression)
    ),

    lambda: $ => seq(
      $.lambda_head,
      '->',
      alias($._expression, $.lambda_body)
    ),

    lambda_head: $ => seq(
      '\\',
      repeat1($._a_pattern)
    ),

    prefix_negation: $ => prec(2, seq(
      '-',
      $._infix_expression
    )),

    left_operator_section: $ => seq(
      '(',
      $._infix_expression,
      $._qualified_operator,
      ')'
    ),

    right_operator_section: $ => seq(
      '(',
      $._qualified_operator,
      $._infix_expression,
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
      sep1(',', choice(prec.dynamic(1, $.generator), $._expression)),
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

    function_body: $ => choice(
      seq(
        '=',
        $._function_body,
        optional($.where)
      ),
      seq(
        repeat1($.function_guard_pattern),
        optional($.where)
      )
    ),

    _function_body: $ => seq(
      $._expression
    ),

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

    case_expression: $ => prec.right(seq(
      'case',
      $._expression,
      'of',
      choice(
        seq(
          '{',
          sep1($._terminal, $.alternative),
          optional($._terminal),
          optional($.where),
          '}'
        ),
        seq(
          $._layout_open_brace,
          repeat(seq($.alternative, $._layout_semicolon)),
          optional($.where),
          $._layout_close_brace
        )
      ),
    )),

    alternative: $ => prec.right(choice(
      seq(
        $._pattern,
        '->',
        $._expression,
        optional($.where)
      ),
      seq(
        $._pattern,
        repeat1($.case_guard_pattern),
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

    negative_literal: $ => prec(PREC.NEGATIVE_LITERAL, seq('-', '(', choice($.integer, $.float), ')')),

    field_update: $ => seq(
      choice($._variable, $.quasi_quotation),
      $.fields
    ),

    fields: $ => seq(
      '{',
      sep1(',', choice($.field, $.field_label)),
      '}'
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

    _a_expression: $ => seq(
      choice(
        prec.dynamic(-1, $._general_constructor),
        $.implicit_parameter_identifier,
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
        $.labeled_update,
        prec.dynamic(1, $.quasi_quotation)
      ),
      optional($.type_application)
    ),

    labeled_update: $ => seq(
      choice(
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
        $.labeled_update,
        $.quasi_quotation
      ),
      '{',
      sep1(',', $.field_bind),
      '}'
    ),

    labeled_construction: $ => seq(
      $._qualified_constructor,
      '{',
      optional(sep1(',', $.field_bind)),
      '}'
    ),

    field_bind: $ => seq(
      $._variable,
      '=',
      $._expression
    ),

    list_expression: $ => seq(
      '[',
      sep1(',', alias($._expression, $.expression)),
      ']'
    ),

    tuple_expression: $ => seq(
      '(',
      alias($._expression, $.expression),
      ',',
      optional(sep1(',', alias($._expression, $.expression))),
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
      optional(sep1(',', $._type_pattern)),
      ')'
    ),

    do: $ => seq(
      'do',
      $._statements
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
      optional($.context),
      seq(
        alias($._constructor_identifier, $.type_class_identifier),
        repeat(
          choice(
            $.type_variable_identifier,
            $.annotated_type_variable
          )
        )
      ),
      optional($.functional_dependency),
      $.where
    ),

    functional_dependency: $ => seq(
      '|',
      sep1(',', $.function_type)
    ),

    annotated_type_variable: $ => seq(
      '(',
      $.type_variable_identifier,
      alias('::', $.annotation),
      choice(
        $._type_pattern,
        prec.dynamic(-1, $._kind_pattern)
      ),
      ')'
    ),

    type_class_instance_declaration: $ => prec(PREC.INSTANCE_DECLARATION, seq(
      'instance',
      optional(choice(
        $.overlaps_pragma,
        $.overlapping_pragma,
        $.overlappable_pragma,
        $.incoherent_pragma
      )),
      optional($.scoped_type_variables),
      optional($.context),
      choice($._qualified_type_class_identifier, $._qualified_variable_identifier),
      alias($._type_pattern, $.instance),
      optional($.where),
    )),

    kind_function_type_instance: $ => seq(
      '(',
      sep1('->', $._kind_pattern),
      ')'
    ),

    function_type_instance: $ => prec(PREC.FUNCTION_TYPE_INSTANCE, seq(
      '(',
      sep1('->', $.type_variable_identifier),
      ')'
    )),

    fixity_declaration: $ => seq(
      choice('infixl', 'infixr', 'infix'),
      optional($.integer),
      sep1(',', $._op)
    ),

    _op: $ => choice(
      $.variable_operator,
      $.constructor_operator,
      $.type_operator
    ),

    type_signature: $ => $._type_signature,

    _type_signature: $ => seq(
      optional(sep1(',', choice($._variable, $.implicit_parameter_identifier))),
      alias('::', $.annotation),
      optional($.scoped_type_variables),
      repeat($.context),
      $._type_pattern
    ),

    default_signature: $ => seq(
      'default',
      $._type_signature
    ),

    kind_signature: $ => prec(PREC.KIND_SIGNATURE, seq(
      alias('::', $.annotation),
      $._kind_pattern
    )),

    _kind: $ => prec.left(repeat1($._akind)),

    _kind_pattern: $ => prec.left(choice(
      $._kind,
      $.kind_function_type
    )),

    _akind: $ => choice(
      alias('*', $.star),
      $.kind_tuple_type,
      $.kind_list_type,
      $.kind_parenthesized_constructor
    ),

    kind_function_type: $ => prec.right(seq(
      choice(
        alias($._kind, $.kind),
        $._type
      ),
      '->',
      choice(
        alias($._kind, $.kind),
        $._type,
        $.kind_function_type
      )
    )),

    pattern_type_signature: $ => seq(
      'pattern',
      $._qualified_constructor,
      alias('::', $.annotation),
      $._type_pattern
    ),

    scoped_type_variables: $ => seq(
      'forall',
      $._type_pattern,
      alias('.', ($.dot)),
      optional(
        seq(
          repeat1($.variable_identifier),
          '=>'
        )
      )
    ),

    _type_pattern: $ => prec.left(choice(
      $._type,
      $.function_type,
      $.infix_operator_pattern
    )),

    infix_operator_pattern: $ => prec.right(seq(
      alias($._type_pattern, $.type),
      choice($.type_operator, $.constructor_operator),
      alias($._type_pattern, $.type)
    )),

    _type: $ => repeat1($._atype),

    function_type: $ => prec.right(seq(
      alias($._type, $.type),
      '->',
      choice(
        alias($._type, $.type),
        $.function_type
      )
    )),

    parenthesized_type_pattern: $ => seq(
      '(',
      optional($.scoped_type_variables),
      optional($.context),
      $._type_pattern,
      ')'
    ),

    _atype: $ => prec.right(choice(
      $._general_type_constructor,
      $.primitive_constructor_identifier,
      $.type_variable_identifier,
      $.implicit_parameter_identifier,
      $.tuple_type,
      $.list_type,
      $.fields,
      $.parenthesized_type_pattern,
      $.scoped_type_variables,
      $.annotated_type_variable,
      $.strict_type
    )),

    tuple_type: $ => seq(
      '(',
      alias($._type_pattern, $.type),
      ',',
      sep1(',', alias($._type_pattern, $.type)),
      ')'
    ),

    kind_tuple_type: $ => seq(
      '(',
      $._kind_pattern,
      ',',
      sep1(',', $._kind_pattern),
      ')'
    ),

    list_type: $ => seq(
      '[',
      sep1(',', alias($._type_pattern, $.type)),
      ']'
    ),

    kind_list_type: $ => seq(
      '[',
      $._kind_pattern,
      ']'
    ),

    kind_parenthesized_constructor: $ => seq(
      '(',
      $._kind_pattern,
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

    algebraic_datatype_declaration: $ => prec.left(seq(
      'data',
      optional($.context),
      $._simple_type,
      optional(
        seq(
          '=',
          optional($.scoped_type_variables),
          optional($.context),
          $.constructors,
          optional($.deriving)
        )
      )
    )),

    gadt_declaration: $ => seq(
      'data',
      optional($.scoped_type_variables),
      optional($.context),
      $._simple_type,
      optional(choice($.kind_signature, $.type_signature)),
      alias($._gadt_where, $.where)
    ),

    _gadt_where: $ => seq(
      'where',
      choice(
        seq(
          '{',
          repeat(seq($.gadt_constructor, optional($._terminal))),
          '}'
        ),
        seq(
          $._layout_open_brace,
          repeat(seq($.gadt_constructor, choice($._terminal, $._layout_semicolon))),
          $._layout_close_brace
        )
      )
    ),

    gadt_constructor: $ => seq(
      choice(
        $._simple_type,
        $.parenthesized_constructor_operator
      ),
      alias('::', $.annotation),
      optional($._pragma),
      optional($.scoped_type_variables),
      repeat($.context),
      $._type_pattern
    ),

    parenthesized_constructor_operator: $ => seq(
      '(',
      choice($.type_operator, $.constructor_operator),
      ')'
    ),

    _simple_type: $ => prec.right(seq(
      $._qualified_type_constructor_identifier,
      repeat($._type_pattern),
    )),

    context_pattern: $ => choice(
      seq(
        $._context_lpat,
        choice($._qualified_operator, $.type_operator),
        $._context_lpat
      ),
      $._context_lpat
    ),

    _context_lpat: $ => choice(
      $.class,
      $.equality_constraint,
      $.type_variable_identifier,
      $._qualified_type_constructor_identifier,
      $.promoted_type_constructor,
      $.type_signature
    ),

    context: $ => seq(
      choice(
        $.context_pattern,
        seq(
          '(',
          sep1(',', $.context_pattern),
          ')'
        )
      ),
      '=>'
    ),

    equality_constraint: $ => seq(
      alias($._context_lpat, $.equality_lhs),
      '~',
      alias($._context_lpat, $.equality_rhs)
    ),

    type_constructor_operator_pattern: $ => prec(PREC.TYPE_CONSTRUCTOR_OPERATOR_PATTERN, seq(
      $._qualified_type_constructor_identifier,
      $.constructor_operator,
      $.type_variable_identifier
    )),

    class: $ => seq(
      $._qualified_type_class_identifier,
      choice(
        $._type,
        $.infix_operator_pattern
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

    data_constructor: $ => prec.left(seq(
      $._qualified_constructor,
      repeat(
        seq(
          optional(
            choice(
              $.unpack_pragma,
              $.no_unpack_pragma
            )
          ),
          choice(
            $.strict_type,
            $._atype
          )
        )
      )
    )),

    strict_type: $ => prec.left(seq(
      '!',
      choice(
        $._atype,
        $.infix_operator_pattern
      )
    )),

    infix_data_constructor: $ => prec.left(seq(
      optional('!'),
      repeat1($._atype),
      $.constructor_operator,
      optional('!'),
      repeat1($._atype)
    )),

    record_data_constructor: $ => prec(PREC.RECORD_DATA_CONSTRUCTOR, seq($._qualified_constructor, $.fields)),

    deriving: $ => seq(
      'deriving',
      choice(
        $._qualified_type_class_identifier,
        seq(
          '(',
          optional(sep1(',', $._qualified_type_class_identifier)),
          ')'
        )
      )
    ),

    newtype_declaration: $ => prec.left(seq(
      'newtype',
      optional($.context),
      $._simple_type,
      '=',
      $.new_constructor,
      optional($.deriving)
    )),

    new_constructor: $ => prec(PREC.NEW_CONSTRUCTOR, choice(
      seq(
        $._qualified_constructor,
        $._atype
      ),
      seq(
        $._qualified_constructor,
        $.fields
      )
    )),

    field: $ => prec.left(seq(
      sep1(',', $._variable),
      alias('::', $.annotation),
      optional($._pragma),
      choice(
        $.strict_type,
        $._type_pattern
      )
    )),

    _literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    _variable: $ => choice(
      $._qualified_variable_identifier,
      seq(
        '(',
        $._qualified_variable_operator,
        ')'
      )
    ),

    _variable_without_primitive_identifier: $ => choice(
      $.qualified_variable_identifier,
      $.variable_identifier,
      seq(
        '(',
        $._qualified_variable_operator,
        ')'
      )
    ),

    _qualified_constructor: $ => choice(
      $._qualified_constructor_identifier,
      seq(
        '(',
        $._qualified_constructor_operator,
        ')'
      )
    ),

    _qualified_module_identifier: $ => choice(
      $.qualified_module_identifier,
      $.module_identifier
    ),

    qualified_module_identifier: $ => seq(
      sep1($._qualified_module_dot, $.module_identifier),
      $._qualified_module_dot,
      $.module_identifier
    ),

    _qualified_type_constructor_identifier: $ => choice(
      $.qualified_type_constructor_identifier,
      alias($._constructor_identifier, $.type_constructor_identifier)
    ),

    qualified_type_constructor_identifier: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      alias($._constructor_identifier, $.type_constructor_identifier)
    ),

    _qualified_type_class_identifier: $ => choice(
      $.qualified_type_class_identifier,
      alias($._constructor_identifier, $.type_class_identifier)
    ),

    qualified_type_class_identifier: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      alias($._constructor_identifier, $.type_class_identifier)
    ),

    _qualified_constructor_identifier: $ => choice(
      $.qualified_constructor_identifier,
      alias($._constructor_identifier, $.constructor_identifier),
      $.primitive_constructor_identifier
    ),

    qualified_constructor_identifier: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      alias($._constructor_identifier, $.constructor_identifier)
    ),

    _qualified_constructor_operator: $ => choice(
      $.qualified_constructor_operator,
      $.constructor_operator
    ),

    qualified_constructor_operator: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      $.constructor_operator
    ),

    _qualified_variable_identifier: $ => choice(
      $.qualified_variable_identifier,
      $.variable_identifier,
      $.primitive_variable_identifier
    ),

    qualified_variable_identifier: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      $.variable_identifier
    ),

    _qualified_variable_operator: $ => choice(
      $.qualified_variable_operator,
      $.variable_operator
    ),

    qualified_variable_operator: $ => seq(
      $._qualified_module_identifier,
      $._qualified_module_dot,
      $.variable_operator
    ),

    variable_operator: $ => choice(
      alias('-', $.variable_symbol),
      $.variable_symbol,
      $.infix_variable_identifier,
      $.qualified_infix_variable_identifier
    ),

    _variable_identifier: $ => /[_a-z](\w|')*/,

    _constructor_identifier: $ => /[A-Z](\w|')*/,

    primitive_constructor_identifier: $ => /[A-Z]\w*#/,

    primitive_variable_identifier: $ => /[_a-z]\w*#/,

    module_identifier: $ => /[A-Z](\w|')*/,

    variable_identifier: $ => $._variable_identifier,

    type_variable_identifier: $ => $._variable_identifier,

    infix_variable_identifier: $ => seq(
      '`',
      $._variable_identifier,
      '`'
    ),

    qualified_infix_variable_identifier: $ => seq(
      '`',
      $.qualified_variable_identifier,
      '`'
    ),

    type_operator: $ => token(seq(
      '\'',
      repeat1(choice(symbol, ':'))
    )),

    constructor_symbol: $ => token(
      choice(
        /:[!#$%&⋆*+\./<=>?@\\^|\-~]+[!#$%&⋆*+\./<=>?@\\^|\-~:]*/,
        /:[!#$%&⋆*+\./<=>?@\\^|\-~]*/
      )
    ),

    infix_constructor_identifier: $ => seq(
      '`',
      $._constructor_identifier,
      '`'
    ),

    qualified_infix_constructor_identifier: $ => seq(
      '`',
      $._qualified_constructor_identifier,
      '`'
    ),

    constructor_operator: $ => choice(
      $.constructor_symbol,
      $.infix_constructor_identifier
    ),

    _qualified_operator: $ => prec.left(choice(
      $._qualified_variable_operator,
      $._qualified_constructor_operator
    )),

    variable_symbol: $ => token(choice(
      /=>[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                            // prevents matching `=>`
      /\.\.[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                          // prevents matching `..`
      /\\[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                            // prevents matching `\`
      /\|[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                            // prevents matching `|`
      /<\-[!#$%&⋆*+\./<=>?@\\^|\-~:]+/,                            // prevents matching `<-`
      /->[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                            // prevents matching `->`
      /@[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                             // prevents matching `@`
      /~[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/,                             // prevents matching `~`
      /-[!#$%&⋆*+\./<=>?@\\\^|\-~:]+[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/, // prevents matching `->`
      /-[!#$%&⋆*+\./<=?@\\\^|\-~:]*/,                              // prevents matching `->` and allows `-`
      /<[!#$%&⋆*+\./<=>?@\\\^|\-~:]+[!#$%&⋆*+\./<=>?@\\\^|\-~:]+/, // prevents matching `<-`
      /<[!#$%&⋆*+\./<=>?@\\\^|~:]*/,                               // prevents matching `<-`
      /\./,                                                        // matches composition operator `.`
      /=[!#$%&⋆*+\./<=?@\\\^|\-~:]+[!#$%&⋆*+\./<=>?@\\^|\-~:]?/,   // prevents matching `=`
      /[!#$%&⋆*+/>?\^]+[!#$%&⋆*+\./<=>?@\\^|\-~:]*/,              // matches variable symbols but prevents `=`
      /\.[!#$%&⋆*+/<=>?@\\\^|\-~:]+[!#$%&⋆*+\./<=?@\\\^|\-~:]*/,   // prevents matching `..`
    )),

    comment: $ => token(choice(
      seq('--', /.*\n?\r?/),
      seq(
        '{-',
        /[^#]/,
        repeat(choice(
          /[^-]/,
          /-[^}]/
        )),
        /-}/
      )
    )),

    cpp: $ => token(
      seq(
        '#ifdef',
        repeat(choice(
          /[^#]/,
          /#[^e]/,
          /#e[^n]/,
          /#en[^d]/,
          /#end[^i]/,
          /#endi[^f]/,
        )),
        /#endif/
      )
    ),

    integer: $ => choice(
      $._integer_literal,
      $._octal_literal,
      $._hexidecimal_literal
    ),

    float: $ => token(floatLiteral),

    char: $ => /'([A-Za-z0-9();\[\]`{}_!#$%&⋆+,./<=>?@^" |\-~:\\*]|\\[a-zA-Z0-9\\"'&]*|\\\^[0-9A-Z@\[\]\\\^_])'/,

    string: $ => token(seq(
      '"',
      repeat(
        choice(
          /[^\\"\n]/,
          /\\(\^)?(.|\n)/
        )
      ),
      '"'
    )),

    _integer_literal: $ => token(decimalLiteral),
    _octal_literal:   $ => token(octalLiteral),
    _hexidecimal_literal: $ => token(hexLiteral),

    quasi_quotation: $ => seq(
      choice(
        seq(
          '[',
          choice(
            alias('p', $.pattern),
            alias('d', $.declaration),
            alias('t', $.type),
            alias('e', $.expression),
            alias($._variable_identifier, $.quoter)
          ),
          '|'
        ),
        alias($._empty_quasi_pattern, $.expression),
      ),
      $.quasi_quotation_expression
    ),

    splice: $ => seq(
      '$',
      $._expression
    ),

    _empty_quasi_pattern: $ => seq('[', '|'),

    quasi_quotation_expression: $ => seq(
      repeat(/[^|]/),
      /.*\|\s*\]/
    ),

    // TODO: restore at a later date (commenting out for improving generation / compile times)
    _file_header_pragma: $ => choice(
      $.include_pragma,
      $.language_pragma,
      $.options_ghc_pragma
    ),

    _pragma_start: $ => prec(3, token(seq("{-#"))),

    _pragma_end: $ => prec(3, token(seq("#-}"))),

    _pragma: $ => choice(
      $.annotation_pragma,
      $.inline_pragma,
      $.inlinable_pragma,
      $.no_inline_pragma,
      $.specialization_pragma,
      $.source_pragma,
      $.warning_pragma,
      $.deprecated_pragma,
      $.line_pragma,
      $.column_pragma,
      $.minimal_pragma,
      $.unpack_pragma,
      $.no_unpack_pragma,
      $.complete_pragma,
      $.overlapping_pragma,
      $.overlappable_pragma,
      $.overlaps_pragma,
      $.incoherent_pragma,
      $.rules_pragma
    ),

    annotation_pragma: $ => seq(
      $._pragma_start,
      /ANN/,
      choice(
        seq(
          alias('module', $.module),
          $._expression
        ),
        seq(
          alias('type', $.type),
          $._type_pattern,
          $._expression
        ),
        seq(
          $._qualified_variable_identifier,
          choice(
            $._expression,
            $._pattern
          )
        )
      ),
      $._pragma_end
    ),

    inline_pragma: $ => seq(
      $._pragma_start,
      'INLINE',
      optional(alias('CONLIKE', $.constructor_like)),
      optional(choice($.phase_control, $.eager_phase_control)),
      $._variable_without_primitive_identifier,
      $._pragma_end
    ),

    inlinable_pragma: $ => seq(
      $._pragma_start,
      /INLINEABLE|INLINABLE/,
      optional(choice($.phase_control, $.eager_phase_control)),
      $._variable_without_primitive_identifier,
      $._pragma_end
    ),

    no_inline_pragma: $ => seq(
      $._pragma_start,
      /NOINLINE/,
      optional(alias('CONLIKE', $.constructor_like)),
      optional(choice($.phase_control, $.eager_phase_control)),
      $._variable_without_primitive_identifier,
      $._pragma_end
    ),

    specialization_pragma: $ => seq(
      $._pragma_start,
      /SPECIALIZE|SPECIALISE/,
      optional(
        choice(
          alias('INLINE', $.inline),
          alias('NOINLINE', $.noinline)
        )
      ),
      optional($.phase_control),
      choice(
        sep1(',', $.spec),
        $.instance_spec
      ),
      $._pragma_end
    ),

    options_ghc_pragma: $ => seq(
      $._pragma_start,
      /OPTIONS_GHC/,
      repeat($.option),
      $._pragma_end
    ),

    source_pragma: $ => seq(
      $._pragma_start,
      /SOURCE/,
      $._pragma_end
    ),

    include_pragma: $ => seq(
      $._pragma_start,
      /INCLUDE/,
      $.header_file,
      $._pragma_end
    ),

    warning_pragma: $ => seq(
      $._pragma_start,
      /WARNING/,
      optional(sep1(',', $.variable_identifier)),
      choice(
        alias($.string, $.warning_message),
        $.warning_message_list
      ),
      $._pragma_end
    ),

    deprecated_pragma: $ => seq(
      $._pragma_start,
      /DEPRECATED/,
      optional(sep1(',', $.variable_identifier)),
      choice(
        alias($.string, $.deprecated_message),
        $.deprecated_message_list
      ),
      $._pragma_end
    ),

    deprecated_message_list: $ => seq(
      '[',
      sep1(',', alias($.string, $.deprecated_message)),
      ']'
    ),

    warning_message_list: $ => seq(
      '[',
      sep1(',', alias($.string, $.warning_message)),
      ']'
    ),

    line_pragma: $ => seq(
      $._pragma_start,
      /LINE/,
      alias($.integer, $.line_number),
      alias($.string, $.file_name),
      $._pragma_end
    ),

    column_pragma: $ => seq(
      $._pragma_start,
      /COLUMN/,
      alias($.integer, $.column_number),
      $._pragma_end
    ),

    minimal_pragma: $ => seq(
      $._pragma_start,
      /MINIMAL/,
      repeat(
        choice(
          $._variable_without_primitive_identifier,
          $._qualified_constructor,
          $.conjunction,
          $.disjunction
        )
      ),
      $._pragma_end
    ),

    unpack_pragma: $ => seq(
      $._pragma_start,
      /UNPACK/,
      $._pragma_end
    ),

    no_unpack_pragma: $ => seq(
      $._pragma_start,
      /NOUNPACK/,
      $._pragma_end
    ),

    complete_pragma: $ => seq(
      $._pragma_start,
      /COMPLETE/,
      sep1(',', $._a_expression),
      $._pragma_end
    ),

    overlapping_pragma: $ => seq(
      $._pragma_start,
      /OVERLAPPING/,
      $._pragma_end
    ),

    overlappable_pragma: $ => seq(
      $._pragma_start,
      /OVERLAPPABLE/,
      $._pragma_end
    ),

    overlaps_pragma: $ => seq(
      $._pragma_start,
      /OVERLAPS/,
      $._pragma_end
    ),

    incoherent_pragma: $ => seq(
      $._pragma_start,
      /INCOHERENT/,
      $._pragma_end
    ),

    rules_pragma: $ => seq(
      $._pragma_start,
      /RULES/,
      $._layout_open_brace,
      repeat(seq($.rule, choice($._terminal, $._layout_semicolon))),
      $._layout_close_brace,
      $._pragma_end
    ),

    rule: $ => seq(
      alias($.string, $.name),
      optional($.phase_control),
      $.scoped_type_variables,
      alias($._expression, $.rule_lhs),
      '=',
      alias($._expression, $.rule_rhs)
    ),

    // In this context, conjunction means both sides are required (AND).
    conjunction: $ => prec.left(PREC.CONJUNCTION, seq(
      choice($._variable, $._qualified_constructor),
      ',',
      sep1(',', choice($._variable, $._qualified_constructor))
    )),

    // In this context, disjunction means only one side is required (OR).
    disjunction: $ => prec.left(PREC.DISJUNCTION, seq(
      choice($._variable, $._qualified_constructor, $.conjunction),
      '|',
      sep1('|', choice($._variable, $._qualified_constructor, $.conjunction))
    )),

    phase_control: $ => seq(
      '[',
      $.integer,
      ']'
    ),

    eager_phase_control: $ => seq(
      '[',
      '~',
      $.integer,
      ']'
    ),

    header_file: $ => /("|<)[a-z].*\.h("|>)/,

    option: $ => /\-(\w|\-)*/,

    spec: $ => seq(
      sep1(',', $._variable),
      alias('::', $.annotation),
      $._type_pattern
    ),

    instance_spec: $ => seq(
      'instance',
      $._qualified_type_class_identifier,
      $._a_pattern
    ),

    language_pragma: $ => seq(
      $._pragma_start,
      /LANGUAGE/,
      sep1(',', $.language_name),
      $._pragma_end
    ),

    language_name: $ => /[A-Z](\w|')*/,

  }
})

function sep1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}
