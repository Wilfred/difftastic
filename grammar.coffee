module.exports =
({choice, err, repeat, seq, keyword, optional, token, prec, precedenceValues}) ->

  precedenceValues = (names) ->
    result = {}
    startValue = -1 * names.indexOf('default')
    for name in names
      result[name] = startValue++
    result

  commaSep = (rule) ->
    optional(commaSep1(rule))

  commaSep1 = (rule) ->
    seq(rule, repeat(seq(",", rule)))

  prefix = (precedence, operand, operator) ->
    prec(precedence, seq(operator, operand))

  postfix = (precedence, operand, operator) ->
    prec(precedence, seq(operand, operator))

  infix = (precedence, operand, operator) ->
    prec(precedence, seq(operand, operator, operand))

  PREC = precedenceValues [
    'assignment'
    'conditional'
    'default'
    'logical_or'
    'logical_and'
    'inclusive_or'
    'exclusive_or'
    'bitwise_and'
    'equal'
    'relational'
    'sizeof'
    'shift'
    'add'
    'multiply'
    'call'
    'cast'
    'unary'
    'field'
    'subscript'
  ]

  {
    name: 'c'

    ubiquitous: -> [@comment, /\s/]

    rules:
      translation_unit: -> repeat(choice(
        @preproc_statement,
        @function_definition,
        @declaration))

      # Section - Preprocesser

      preproc_statement: -> choice(
        @preproc_ifdef,
        @preproc_ifndef,
        @preproc_endif,
        @preproc_else,
        @preproc_include,
        @preproc_define,
        @preproc_call)

      preproc_include: -> seq(
        keyword("#include"),
        choice(@string_literal, @system_lib_string))

      preproc_define: -> seq(
        keyword("#define"),
        @identifier,
        token(seq(/.+/, repeat(seq("\\\n", /.+/)))))

      preproc_call: -> choice(
        seq(@preproc_directive, /.*/))

      preproc_ifdef: -> seq(keyword("#ifdef"), @identifier)
      preproc_ifndef: -> seq(keyword("#ifndef"), @identifier)
      preproc_else: -> keyword("#else")
      preproc_endif: -> keyword("#endif")
      preproc_directive: -> /#\a\w+/

      # Section - Main Grammar

      function_definition: -> seq(
        optional(@declaration_specifiers),
        @type_specifier,
        @declarator,
        optional(repeat(@declaration)),
        @compound_statement)

      declaration: -> seq(
        optional(@declaration_specifiers),
        @type_specifier,
        commaSep(@init_declarator),
        ";")

      declaration_specifiers: -> repeat(choice(
        @storage_class_specifier,
        @type_qualifier,
        @function_specifier))

      declarator: ->
        seq(repeat(@pointer), @direct_declarator)

      abstract_declarator: -> choice(
        @pointer,
        seq(repeat(@pointer), @direct_abstract_declarator))

      init_declarator: -> choice(
        @declarator,
        seq(@declarator, "=", @initializer))

      compound_statement: -> seq(
        "{",
        repeat(choice(@declaration, @statement)),
        "}")

      storage_class_specifier: -> choice(
        keyword("typedef"),
        keyword("extern"),
        keyword("static") ,
        keyword("auto"),
        keyword("register"))

      type_qualifier: -> choice(
        keyword("const"),
        keyword("restrict"),
        keyword("volatile"))

      function_specifier: -> keyword("inline")

      type_specifier: -> choice(
        @struct_specifier,
        @union_specifier,
        @enum_specifier,
        seq(
          repeat(choice(
            keyword("unsigned"),
            keyword("long"),
            keyword("short"))),
          @identifier))

      enum_specifier: -> seq(
        keyword("enum"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", commaSep(@enumerator), "}")))

      struct_specifier: -> seq(
        keyword("struct"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", repeat(@struct_declaration), "}")))

      union_specifier: -> seq(
        keyword("union"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", repeat(@struct_declaration), "}")))

      struct_declaration: -> seq(
        repeat(choice(
          @type_specifier,
          @type_qualifier)),
        commaSep(@struct_declarator),
        ";")

      enumerator: -> choice(
        @identifier,
        seq(@identifier, "=", @expression))

      struct_declarator: -> choice(
        @declarator,
        seq(optional(@declarator), ":", @expression))

      pointer: -> seq(
        "*",
        repeat(@type_qualifier))

      direct_declarator: -> choice(
        @identifier,

        # TODO - is this needed? Currently, it creates ambiguity w/
        # call expressions
        #
        # seq("(", @declarator, ")"),

        seq(
          @direct_declarator,
          choice(
            seq("[", repeat(@type_qualifier), optional(@expression), "]"),
            seq("[", keyword("static"), repeat(@type_qualifier), @expression, "]"),
            seq("[", repeat(@type_qualifier), keyword("static"), @expression, "]"),
            seq("[", repeat(@type_qualifier), "*", "]"),
            seq("(", optional(@parameter_type_list), ")"),
            seq("(", commaSep(@identifier), ")"))))

      direct_abstract_declarator: -> choice(
        seq("(", @abstract_declarator, ")"),
        seq(
          @direct_abstract_declarator,
          choice(
            seq("[", repeat(@type_qualifier), optional(@expression), "]"),
            seq("[", keyword("static"), repeat(@type_qualifier), @expression, "]"),
            seq("[", repeat(@type_qualifier), keyword("static"), @expression, "]"),
            seq("[", "*", "]"),
            seq("(", optional(@parameter_type_list), ")"))))

      parameter_type_list: -> seq(
        commaSep(@parameter_declaration),
        optional(seq(",", "...")))

      parameter_declaration: -> seq(
        optional(@declaration_specifiers),
        @type_specifier,
        optional(choice(@declarator, @abstract_declarator)))

      # Statements

      statement: -> choice(
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
        @statement)

      expression_statement: -> seq(
        optional(@expression), ";")

      if_statement: -> seq(
        keyword("if"),
        "(", @expression, ")",
        @statement,
        optional(seq(
          keyword("else"),
          @statement)))

      switch_statement: -> seq(
        keyword("switch"),
        "(", @expression, ")",
        @statement)

      case_statement: -> seq(
        choice(
          seq(keyword("case"), @expression),
          keyword("default")),
        ":",
        @statement)

      while_statement: -> seq(
        keyword("while"),
        "(", @expression, ")",
        @statement)

      do_statement: -> seq(
        keyword("do"),
        @statement,
        keyword("while"),
        "(", @expression, ")")

      for_statement: -> seq(
        keyword("for"),
        "(",
        choice(
          @declaration,
          seq(optional(@expression), ";")),
        optional(@expression), ";"
        optional(@expression),
        ")",
        @statement)

      return_statement: -> seq(
        keyword("return"),
        optional(@expression)
        ";")

      break_statement: -> seq(
        keyword("break"), ";")

      continue_statement: -> seq(
        keyword("continue"), ";")

      goto_statement: -> seq(
        keyword("goto"), @identifier, ";")

      # Expressions

      expression: -> choice(
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
        seq("(", @expression, ")"))

      conditional_expression: -> prec(PREC.conditional, seq(
        @expression,
        "?",
        @expression,
        ":",
        @expression))

      assignment_expression: ->
        infix(PREC.assignment, @expression, choice(
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
          "|="))

      pointer_expression: -> choice(
        prefix(PREC.unary, @expression, "*"),
        prefix(PREC.unary, @expression, "&"))

      logical_expression: -> choice(
        infix(PREC.logical_or, @expression, "||"),
        infix(PREC.logical_and, @expression, "&&"),
        prefix(PREC.unary, @expression, "!"))

      bitwise_expression: -> choice(
        infix(PREC.inclusive_or, @expression, "|"),
        infix(PREC.exclusive_or, @expression, "^"),
        infix(PREC.bitwise_and, @expression, "&"),
        prefix(PREC.unary, @expression, "~"))

      equality_expression: ->
        infix(PREC.equal, @expression, choice("==", "!="))

      relational_expression: ->
        infix(PREC.relational, @expression, choice("<", ">", "<=", ">="))

      shift_expression: ->
        infix(PREC.shift, @expression, choice("<<", ">>"))

      math_expression: -> choice(
        infix(PREC.add, @expression, "+"),
        infix(PREC.add, @expression, "-"),
        infix(PREC.multiply, @expression, "*"),
        infix(PREC.multiply, @expression, "/"),
        infix(PREC.multiply, @expression, "%"),
        prefix(PREC.unary, @expression, "-"),
        prefix(PREC.unary, @expression, "+"),
        prefix(PREC.unary, @expression, choice("++", "--")),
        postfix(PREC.unary, @expression, choice("++", "--")))

      cast_expression: ->
        prec(PREC.cast, seq("(", @type_name, ")", @expression))

      sizeof_expression: -> choice(
        prefix(PREC.sizeof, @expression, keyword("sizeof"))
        prefix(PREC.sizeof, seq("(", @type_name, ")"), keyword("sizeof")))

      subscript_expression: ->
        prec(PREC.subscript, seq(@expression, "[", @expression, "]"))

      call_expression: ->
        prec(PREC.call, seq(@expression, "(", commaSep(@expression), ")"))

      field_expression: -> choice(
        infix(PREC.field, @expression, "."),
        infix(PREC.field, @expression, "->"))

      compound_literal_expression: -> seq(
        "(", @type_name, ")",
        @initializer_list)

      type_name: -> seq(
        repeat(choice(
          @type_specifier,
          @type_qualifier)),
        optional(@abstract_declarator))

      initializer_list: -> seq(
        "{",
        commaSep(seq(
          optional(seq(repeat(@designator), "=")),
          @initializer)),
        optional(",")
        "}")

      designator: -> choice(
        seq("[", @expression, "]"),
        seq(".", @identifier))

      initializer: -> choice(
        @expression,
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
  }
