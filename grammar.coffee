commaSep = (rule) ->
  optional(commaSep1(rule))

commaSep1 = (rule) ->
  seq(rule, repeat(prec.left(0, seq(",", rule))))

PREC =
  assignment: -1
  conditional: -2
  default: 0
  logical_or: 1
  logical_and: 2
  inclusive_or: 3
  exclusive_or: 4
  bitwise_and: 5
  equal: 6
  relational: 7
  sizeof: 8
  shift: 9
  add: 10
  multiply: 11
  call: 12
  cast: 13
  unary: 14
  field: 15
  subscript: 16

module.exports = grammar
  name: 'c'

  ubiquitous: -> [@comment, /\s/]

  expectedConflicts: -> [
    [@_type_specifier, @_expression]
    [@_type_specifier, @direct_declarator]
    [@sizeof_expression, @cast_expression]
  ]

  rules:
    translation_unit: -> repeat(choice(
      @_preproc_statement,
      @function_definition,
      @declaration))

    # Section - Preprocesser

    _preproc_statement: -> choice(
      @preproc_ifdef,
      @preproc_ifndef,
      @preproc_endif,
      @preproc_else,
      @preproc_include,
      @preproc_define,
      @preproc_call)

    preproc_include: -> seq(
      "#include",
      choice(@string_literal, @system_lib_string))

    preproc_define: -> seq(
      "#define",
      @identifier,
      token(seq(/.+/, repeat(seq("\\\n", /.+/)))))

    preproc_call: -> choice(
      seq(@preproc_directive, /.*/))

    preproc_ifdef: -> seq("#ifdef", @identifier)
    preproc_ifndef: -> seq("#ifndef", @identifier)
    preproc_else: -> "#else"
    preproc_endif: -> "#endif"
    preproc_directive: -> /#\a\w+/

    # Section - Main Grammar

    function_definition: -> seq(
      optional(@_declaration_specifiers),
      @_type_specifier,
      @_declarator,
      optional(repeat(@declaration)),
      @compound_statement)

    declaration: -> seq(
      optional(@_declaration_specifiers),
      @_type_specifier,
      commaSep(choice(
        @_declarator
        @init_declarator)),
      ";")

    _declaration_specifiers: -> repeat1(choice(
      @storage_class_specifier,
      @type_qualifier,
      @function_specifier))

    _declarator: -> choice(
      @pointer_declarator,
      @function_declarator,
      @array_declarator,
      seq('(', @_declarator, ')'),
      @identifier,
    )

    _abstract_declarator: -> choice(
      @abstract_pointer_declarator,
      @abstract_function_declarator,
      @abstract_array_declarator,
      prec(1, seq('(', @_abstract_declarator, ')')),
    )

    pointer_declarator: -> seq('*', @_declarator)

    abstract_pointer_declarator: -> seq('*', optional(@_abstract_declarator))

    function_declarator: -> prec(1, seq(
      @_declarator,
      '(',
      optional(@parameter_type_list),
      ')'))

    abstract_function_declarator: -> prec(1, seq(
      @_abstract_declarator,
      '(',
      optional(@parameter_type_list),
      ')'))

    array_declarator: -> prec(1, seq(
      @_declarator,
      '[',
      choice(
        seq(optional("static"), repeat(@type_qualifier), optional(@_expression)),
        seq(repeat(@type_qualifier), "static", @_expression))
      ']'))

    abstract_array_declarator: -> prec(1, seq(
      optional(@_abstract_declarator),
      '[',
      choice(
        seq(optional("static"), repeat(@type_qualifier), optional(@_expression)),
        seq(repeat(@type_qualifier), "static", @_expression))
      ']'))

    init_declarator: -> seq(
      @_declarator,
      "=",
      choice(@initializer_list, @_expression))

    compound_statement: -> seq(
      "{",
      repeat(choice(@declaration, @_statement)),
      "}")

    storage_class_specifier: -> choice(
      "typedef",
      "extern",
      "static" ,
      "auto",
      "register")

    type_qualifier: -> choice(
      "const",
      "restrict",
      "volatile")

    function_specifier: -> "inline"

    _type_specifier: -> choice(
      @struct_specifier,
      @union_specifier,
      @enum_specifier,
      @sized_type_specifier,
      @identifier)

    sized_type_specifier: -> seq(
      repeat1(choice(
        "unsigned",
        "long",
        "short")),
      @identifier)

    enum_specifier: -> seq(
      "enum",
      choice(
        @identifier,
        seq(
          optional(@identifier),
          "{", commaSep(@enumerator), "}")))

    struct_specifier: -> seq(
      "struct",
      choice(
        @identifier,
        seq(
          optional(@identifier),
          "{", repeat(@struct_declaration), "}")))

    union_specifier: -> seq(
      "union",
      choice(
        @identifier,
        seq(
          optional(@identifier),
          "{", repeat(@struct_declaration), "}")))

    struct_declaration: -> seq(
      repeat(@type_qualifier),
      @_type_specifier,
      commaSep(@_declarator),
      optional(seq(':', @_expression))
      ";")

    enumerator: -> choice(
      @identifier,
      seq(@identifier, "=", @_expression))

    parameter_type_list: -> commaSep1(@parameter_declaration)

    parameter_declaration: -> seq(
      optional(@_declaration_specifiers),
      @_type_specifier,
      optional(choice(@_declarator, @_abstract_declarator)))

    # Statements

    _statement: -> choice(
      @labeled_statement,
      @compound_statement,
      @expression_statement,
      @if_statement,
      @switch_statement,
      @case_statement,
      @do_statement,
      @while_statement,
      @for_statement,
      @return_statement,
      @break_statement,
      @continue_statement,
      @goto_statement)

    labeled_statement: -> seq(
      @identifier,
      ":",
      @_statement)

    expression_statement: -> seq(
      optional(@_expression), ";")

    if_statement: -> prec.right(seq(
      "if",
      "(", @_expression, ")",
      @_statement,
      optional(seq(
        "else",
        @_statement))))

    switch_statement: -> seq(
      "switch",
      "(", @_expression, ")",
      @_statement)

    case_statement: -> seq(
      choice(
        seq("case", @_expression),
        "default"),
      ":",
      @_statement)

    while_statement: -> seq(
      "while",
      "(", @_expression, ")",
      @_statement)

    do_statement: -> seq(
      "do",
      @_statement,
      "while",
      "(", @_expression, ")")

    for_statement: -> seq(
      "for",
      "(",
      choice(
        @declaration,
        seq(optional(@_expression), ";")),
      optional(@_expression), ";"
      commaSep(@_expression),
      ")",
      @_statement)

    return_statement: -> seq(
      "return",
      optional(@_expression)
      ";")

    break_statement: -> seq(
      "break", ";")

    continue_statement: -> seq(
      "continue", ";")

    goto_statement: -> seq(
      "goto", @identifier, ";")

    # Expressions

    _expression: -> choice(
      @conditional_expression,
      @assignment_expression,
      @logical_expression,
      @bitwise_expression,
      @equality_expression,
      @relational_expression,
      @shift_expression,
      @math_expression,
      @cast_expression,
      @pointer_expression,
      @sizeof_expression,
      @subscript_expression,
      @call_expression,
      @field_expression,
      @compound_literal_expression,
      @identifier,
      @number_literal,
      @string_literal,
      @char_literal,
      seq("(", @_expression, ")"))

    conditional_expression: -> prec.right(PREC.conditional, seq(
      @_expression,
      "?",
      @_expression,
      ":",
      @_expression))

    assignment_expression: ->
      prec.right(PREC.assignment, seq(
        @_expression,
        choice(
          "=",
          "*=",
          "/=",
          "%=",
          "+=",
          "-=",
          "<<=",
          ">>=",
          "&=",
          "^=",
          "|="),
        @_expression))

    pointer_expression: -> choice(
      prec.left(PREC.unary, seq("*", @_expression)),
      prec.left(PREC.unary, seq("&", @_expression)))

    logical_expression: -> choice(
      prec.left(PREC.logical_or, seq(@_expression, "||", @_expression)),
      prec.left(PREC.logical_and, seq(@_expression, "&&", @_expression)),
      prec.left(PREC.unary, seq("!", @_expression)))

    bitwise_expression: -> choice(
      prec.left(PREC.inclusive_or, seq(@_expression, "|", @_expression)),
      prec.left(PREC.exclusive_or, seq(@_expression, "^", @_expression)),
      prec.left(PREC.bitwise_and, seq(@_expression, "&", @_expression)),
      prec.left(PREC.unary, seq("~", @_expression)))

    equality_expression: ->
      prec.left(PREC.equal, seq(@_expression, choice("==", "!="), @_expression))

    relational_expression: ->
      prec.left(PREC.relational, seq(@_expression, choice("<", ">", "<=", ">="), @_expression))

    shift_expression: ->
      prec.left(PREC.shift, seq(@_expression, choice("<<", ">>"), @_expression))

    math_expression: -> choice(
      prec.left(PREC.add, seq(@_expression, "+", @_expression)),
      prec.left(PREC.add, seq(@_expression, "-", @_expression)),
      prec.left(PREC.multiply, seq(@_expression, "*", @_expression)),
      prec.left(PREC.multiply, seq(@_expression, "/", @_expression)),
      prec.left(PREC.multiply, seq(@_expression, "%", @_expression)),
      prec.right(PREC.unary, seq("-", @_expression)),
      prec.right(PREC.unary, seq("+", @_expression)),
      prec.right(PREC.unary, seq(choice("--", "++"), @_expression)),
      prec.right(PREC.unary, seq(@_expression, choice("++", "--"))))

    cast_expression: ->
      prec(PREC.cast, seq("(", @type_name, ")", @_expression))

    sizeof_expression: -> choice(
      prec(PREC.sizeof, seq("sizeof", @_expression)),
      prec(PREC.sizeof, seq("sizeof", "(", @type_name, ")")))

    subscript_expression: ->
      prec(PREC.subscript, seq(@_expression, "[", @_expression, "]"))

    call_expression: ->
      prec(PREC.call, seq(@_expression, "(", commaSep(@_expression), ")"))

    field_expression: -> choice(
      prec.left(PREC.field, seq(@_expression, ".", @_expression)),
      prec.left(PREC.field, seq(@_expression, "->", @_expression)))

    compound_literal_expression: -> seq(
      prec(PREC.cast, seq("(", @type_name, ")")),
      @initializer_list)

    type_name: -> seq(
      repeat(@type_qualifier),
      @_type_specifier,
      optional(@_abstract_declarator))

    initializer_list: -> seq(
      "{",
      @_initializer_list_contents,
      optional(",")
      "}")

    _initializer_list_contents: -> choice(
      seq(
        optional(seq(repeat1(@designator), "=")),
        choice(@_expression, @initializer_list)),
      seq(
        @_initializer_list_contents,
        ","
        seq(
          optional(seq(repeat1(@designator), "=")),
          choice(@_expression, @initializer_list))))

    designator: -> choice(
      seq("[", @_expression, "]"),
      seq(".", @identifier))

    initializer: -> choice(
      @_expression,
      @initializer_list)

    number_literal: -> /\d+(\.\d+)?/

    char_literal: -> token(seq(
      "'",
      choice(
        seq(optional("\\"), /[^']/),
        seq("\\", "'")),
      "'"))

    string_literal: -> token(seq(
      '"', repeat(choice(/[^"]/, '\\"')), '"'))

    system_lib_string: -> token(seq(
      '<', repeat(choice(/[^>]/, '\\>')), '>'))

    identifier: -> /[\a_][\a\d_]*/

    comment: -> token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))
