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
  )

module.exports = grammar({
  name: 'haskell',

  inline: $ => [
    $._function_application_statements
  ],

  extras: $ => [
    $.comment,
    /\s|\\n/
  ],

  externals: $ => [
    $._layout_semicolon,
    $._layout_open_brace,
    $._layout_close_brace,
  ],

  conflicts: $ => [
    [$._parenthesized_variable_symbol, $._variable],
    [$.list_constructor, $.list],
    [$._constructed_value, $.type_constructor],
    [$._expression, $._statement],
    [$._expression, $.list_constructor],
    [$._statement, $._lhs],
    [$.function_head, $._expression],
    [$._variable, $._op],
    [$._expression, $.function_application],
    [$.type_signature],
    [$.function_body, $.function_application],
    [$.data_constructor],
    [$.statement_list, $.function_application],
    [$._parenthesized_variable_symbol, $._variable, $._op]
  ],

  rules: {
    module: $ => choice(
      seq(
        'module',
        $.identifier,
        optional($.module_exports),
        $.where
      ),
      repeat(seq($._declaration, choice(';', $._layout_semicolon)))
    ),

    _declarations: $ => prec.right(choice(
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
    )),

    module_exports: $ => seq(
      '(',
      optional(sep1(',', choice($.type_constructor, $._variable))),
      ')'
    ),

    all_constructors: $ => '..',

    import: $ => prec.right(seq(
      'import',
      alias(optional('qualified'), $.qualified),
      choice(
        $.identifier,
        $.import_alias
      ),
      optional(
        choice(
          $._empty_import_spec,
          $.import_spec,
          $.hidden_import
        )
      )
    )),

    import_spec: $ => $._import_spec,

    _import_spec: $ => seq(
      '(',
      sep1(',', choice($.type_constructor, $.variable)),
      ')'
    ),

    _empty_import_spec: $ => seq('(',')'),

    import_alias: $ => seq(
      $.identifier,
      'as',
      $.identifier
    ),

    hidden_import: $ => seq(
      'hiding',
      choice($._import_spec, $._empty_import_spec)
    ),

    _declaration: $ => choice(
      $.import,
      $.type_synonym,
      $.newtype,
      $.algebraic_datatype,
      $.type_class,
      $.type_class_instance,
      $.default,
      $.foreign,
      $.type_signature,
      $.fixity,
      $.function_declaration,
      $._statement
    ),

    _parenthesized_variable_symbol: $ => seq(
      '(',
      repeat1(choice($.variable_symbol, $._extra_variable_symbol)),
      ')'
    ),

    function_declaration: $ => seq(
      $.function_head,
      choice(
        repeat1($._rhs_guards),
        seq('=', $.function_body)
      )
    ),

    _statement: $ => choice(
      $.do,
      $.let,
      $.if_statement,
      $._expression,
      $.case
    ),

    _expression: $ => choice(
      $.type_constructor,
      $._variable,
      $.type_constructor,
      $.tuple,
      $._literal,
      $.parenthesized_expression,
      $.list,
      $._variable,
      $.binary,
      $.arithmetic_sequence,
      $.list_comprehension,
      $.otherwise,
      $.left_section,
      $.right_section
    ),

    left_section: $ => seq(
      '(',
      $._expression,
      $._op,
      ')'
    ),

    right_section: $ => seq(
      '(',
      $._op,
      $._expression,
      ')'
    ),

    otherwise: $ => 'otherwise',

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

    list_comprehension: $ => prec.right(seq(
      '[',
      $._expression,
      '|',
      sep1(',', choice($.generator, $._expression)),
      ']'
    )),

    generator: $ => seq(
      $._lhs,
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

    _lhs: $ => choice(
      $.as,
      $.wildcard,
      $.irrefutable,
      alias($._parenthesized, $.parenthesized_expression),
      alias($._constructed_value, $.type_constructor),
      $._expression
    ),

    function_head: $ => seq(
      alias($._variable, $.function_identifier),
      repeat($._lhs)
    ),

    function_body: $ => seq(
      choice($._statement, $.function_application),
      optional($.where)
    ),

    where: $ => seq(
      'where',
      $._declarations
  ),

    let: $ => seq(
      'let',
      choice(
        seq(
          '{',
          repeat(seq($._declaration, $._terminal)),
          '}'
        ),
        repeat1($._declaration)
      ),
      $.in_clause
    ),

    in_clause: $ => seq(
      'in',
      $._expression
    ),

    case: $ => prec.right(seq(
      'case',
      $._expression,
      'of',
      repeat1($.alternative)
    )),

    alternative: $ => prec.right(
      seq(
        $._lhs,
        optional($._guards),
        '->',
        $._expression,
        optional($.where)
      )
    ),

    _guards: $ => seq(
      '|',
      sep1(',', $.guard),
    ),

    _rhs_guards: $ => seq(
      $._guards,
      '=',
      $.function_body
    ),

    guard: $ => choice(
      seq(
        $._lhs,
        '<-',
        $._expression
      ),
      alias($._guard_let, $.let),
      $._expression
    ),

    _guard_let: $ => seq(
      'let',
      $.function_declaration
    ),

    field_labels: $ => seq(
      '{',
      optional(sep1(',', $.field_label)),
      '}'
    ),

    irrefutable: $ => seq(
      '~',
      $._lhs
    ),

    _parenthesized: $ => seq(
      '(',
      $._lhs,
      ')'
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._statement,
      ')'
    ),

    negative_literal: $ => prec(1, seq('-', '(', $._literal, ')')),

    as: $ => prec.right(1, seq(
      choice($._variable),
      '@',
      choice($._variable, $.type_constructor)
    )),

    field_label: $ => seq(
      $._variable,
      '=',
      $._literal
    ),

    wildcard: $ => '_',

    _variable: $ => choice(
      $.variable,
      $.qualified_variable,
      $.variable_symbol,
      $.qualified_variable_symbol,
      $._parenthesized_variable_symbol
    ),

    qualified_variable: $ => seq(
      $._constructor_pattern,
      $._variable_pattern
    ),

    qualified_variable_symbol: $ => seq(
      $._constructor_pattern,
      $._variable_symbol
    ),

    function_application: $ => prec.left(choice(
      seq(
        choice($._function_application_statements, $.function_application),
        choice($._function_application_statements, $.function_application)
      ),
      seq(
        choice($._function_application_statements, $.function_application),
        '(',
        choice($._function_application_statements, $.function_application),
        ')'
      )
    )),

    _function_application_statements: $ => choice(
      $._variable,
      $.type_constructor,
      $._literal,
      $.tuple,
      $.list,
      $.list_comprehension
    ),

    _terminal: $ => ';',

    binary: $ => prec.left(1, seq(
      $._expression,
      $._op,
      $._expression
    )),

    foreign: $ => seq(
      'foreign',
      choice($.foreign_export, $.foreign_import),
      $.calling_convention,
      optional($.safety),
      optional($.string),
      $.type_signature
    ),

    foreign_import: $ => 'import',
    foreign_export: $ => 'export',

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

    default: $ => seq(
      'default',
      '(',
      optional(sep1(',', $.type_constructor)),
      ')'
    ),

    do: $ => seq(
      'do',
      $.statement_list
    ),

    statement_list: $ => choice(
      seq('{', repeat(seq(choice($._statement, $.function_application, alias($._guard_let, $.let)), $._terminal)), '}'),
      seq($._layout_open_brace, repeat(seq(choice($._statement, $.function_application, alias($._guard_let, $.let)), $._layout_semicolon)), $._layout_close_brace)
    ),

    if_statement: $ => seq(
      'if',
      alias($._statement, $.condition),
      optional(choice($._terminal, $._layout_semicolon)),
      'then',
      alias($._statement, $.then_clause),
      optional(choice($._terminal, $._layout_semicolon)),
      'else',
      alias($._statement, $.else_clause)
    ),

    _type_constructor_alias: $ => alias($._constructed_value, $.type_constructor),


    type_class: $ => seq(
      'class',
      optional($.context),
      choice($.type_constructor, $._type_constructor_alias),
      $.where
    ),

    type_class_instance: $ => seq(
      'instance',
      optional($.context),
      choice($.type_constructor, $._type_constructor_alias),
      $.where
    ),

    fixity: $ => seq(
      choice('infixl', 'infixr', 'infix'),
      optional($.integer),
      sep1(',', $._op)
    ),

    _op: $ => choice(
      $.variable_symbol,
      $.constructor_symbol,
      seq(
        '`',
        $._variable,
        '`'
      )
    ),

    variable_symbol: $ => prec.right(choice(
      repeat1($._variable_symbol)
    )),

    constructor_symbol: $ => prec.right(seq(':', repeat($._constructor_symbol))),

    type_signature: $ => seq(
      $.signature_identifier,
      optional($.context),
      optional(sep1('->', choice($.type_constructor, $.variable, $._type_constructor_alias)))
    ),

    signature_identifier: $ => seq(
      sep1(',', $._variable),
      '::'
    ),

    function_identifier: $ => sep1(',', $.variable),

    unit_constructor: $ => '()',
    list_constructor: $ => seq(
      '[',
      optional(choice($.type_constructor, $._type_constructor_alias)),
      ']'
    ),
    function_constructor: $ => '(->)',
    tupling_constructor: $ => seq('(', ',', repeat(','), ')'),

    tuple: $ => seq(
      '(',
      $._lhs,
      ',',
      sep1(',', $._lhs),
      ')'
    ),

    list: $ => seq(
      '[',
      sep1(',', choice($._expression)),
      ']'
    ),

    algebraic_datatype: $ => seq(
      'data',
      optional($.context),
      choice($.type_constructor, alias($._constructed_value, $.type_constructor)),
      optional(
        seq(
          '=',
          $.data_constructors,
          optional($.deriving)
        )
      )
    ),

    type_constructor: $ => prec.right(
      choice(
        $._type_constructors,
        seq(
          $._type_constructors,
          choice(
            seq(
              '(',
              sep1(optional(','), choice($.type_constructor, $.variable, $.all_constructors, $._type_constructor_alias)),
              ')'
            ),
            $.fields
          )
        )
      )
    ),

    _type_constructors: $ => choice(
      $.identifier,
      $.list_constructor,
      $.tupling_constructor,
      $.function_constructor,
      $.unit_constructor
    ),

    _constructed_value: $ => prec.right(seq(
      $._type_constructors,
      repeat(choice($.variable, $._type_constructors, $._literal, $.wildcard))
    )),

    context: $ => seq(
      choice(
        $.type_constructor,
        alias($._constructed_value, $.type_constructor),
        seq(
          '(',
          sep1(',', choice($.type_constructor, $._type_constructor_alias)),
          ')'
        )
      ),
      '=>'
    ),

    data_constructor: $ => seq(
      choice(
        $.identifier,
        $.list_constructor,
        $.tupling_constructor,
        $.function_constructor
      ),
      repeat(choice($.variable, $.strict, $.fields, alias($._constructed_value, $.type)))
    ),

    data_constructors: $ => sep1('|', $.data_constructor),

    deriving: $ => seq(
      'deriving',
      choice(
        alias($.type_constructor, $.type),
        seq(
          '(',
          sep1(',', alias($.type_constructor, $.type)),
          ')'
        )
      )
    ),

    newtype: $ => seq(
      'newtype',
      optional($.context),
      $.type_constructor,
      '=',
      $.data_constructor,
      optional($.deriving)
    ),

    field: $ => seq(
      sep1(',', $.variable),
      '::',
      choice(
        $.strict,
        $.variable,
        alias($.type_constructor, $.type)
      )
    ),

    strict: $ => prec(1, seq(
      '!',
      choice(alias($.type_constructor, $.type), $.variable)
    )),

    type_synonym: $ => seq(
      'type',
      choice($.type_constructor, alias($._constructed_value, $.type_constructor)),
      '=',
      choice($.type_constructor, alias($._constructed_value, $.type_constructor)),
    ),

    _literal: $ => choice(
      $._primary_literal,
      $.negative_literal
    ),

    _primary_literal: $ => choice(
      $.integer,
      $.float,
      $.string,
      $.char
    ),

    variable: $ => $._variable_pattern,
    _variable_pattern: $ => /[_a-z](\w|')*/,

    identifier: $ => prec.left($._constructor_pattern),
    _constructor_pattern: $ => /[A-Z](\w|'|\.)*/,

    qualified_type_constructor: $ => prec.right(seq(
      optional('.'),
      $.identifier,
      repeat($.variable)
    )),

    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        /{-.*\r?\n/,
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
      '-'
    ),

    _extra_variable_symbol: $ => choice(
      '='
    ),

    _constructor_symbol: $ => prec(1, choice(
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
    )),

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
