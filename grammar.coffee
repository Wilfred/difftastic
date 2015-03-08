module.exports =
({choice, err, repeat, seq, keyword, optional, token, prec}) ->

  commaSep = (rule) ->
    optional(commaSep1(rule))

  commaSep1 = (rule) ->
    seq(rule, repeat(seq(",", rule)))

  {
    name: 'c'

    ubiquitous: -> [@comment, /\s/]

    rules:
      program: -> repeat(choice(
        @preproc_ifdef,
        @preproc_ifndef,
        @preproc_endif,
        @preproc_else,
        @preproc_include,
        @preproc_define,
        @preproc_call,

        # declarations
        @struct_declaration,
        @union_declaration,
        @enum_declaration,
        @function_declaration,
        @var_declaration,

        @typedef,
      ))

      preproc_include: -> seq(
        keyword("#include"),
        choice(@string, @system_lib_string))

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

      typedef: -> seq(
        keyword("typedef"),
        @type,
        @type_expression,
        ";")

      var_declaration: -> seq(
        optional(@storage_class),
        @type,
        commaSep1(choice(
          @type_expression,
          @var_assignment)),
        ";")

      function_declaration: -> seq(
        optional(@storage_class),
        @type,
        @type_expression,
        "(", @formal_parameters, ")",
        choice(";", @statement_block))

      statement_block: -> seq(
        "{", err(repeat(@statement)), "}")

      statement: -> choice(
        @var_declaration,
        @return_statement,
        @if_statement,
        @for_statement,
        @while_statement,
        @expression_statement,
        @statement_block),

      return_statement: -> seq(
        keyword("return"), @expression, ";")

      expression_statement: -> seq(
        @expression, ";")

      if_statement: -> seq(
        keyword("if"), "(", err(@expression), ")",
        @statement,
        optional(seq(
          keyword("else"),
          @statement)))

      for_statement: -> seq(
        keyword("for"),
        "(",
        choice(
          @var_declaration,
          seq(optional(@expression), ";")),
        optional(@expression), ";",
        optional(@expression),
        ")",
        @statement)

      while_statement: -> seq(
        keyword("while"),
        "(", @expression, ")",
        @statement)

      type: -> seq(
        optional(keyword("const")),
        choice(
          @primitive_type,
          @struct_type,
          @enum_type,
          @union_type))

      primitive_type: -> seq(
        repeat(choice(
          keyword("unsigned"),
          keyword("short"),
          keyword("long"))),
        @identifier)

      formal_parameters: ->
        err(commaSep(@field))

      type_expression: -> choice(
        @identifier,
        @pointer_type)

      pointer_type: -> seq(
        "*", @type_expression)

      struct_declaration: -> seq(
        @struct_type, ";")

      struct_type: -> seq(
        keyword("struct"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", err(repeat(seq(@field, ";"))), "}")))

      union_declaration: -> seq(
        @union_type, ";")

      union_type: -> seq(
        keyword("union"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", err(repeat(seq(@field, ";"))), "}")))

      enum_declaration: -> seq(
        @enum_type, ";")

      enum_type: -> seq(
        keyword("enum"),
        choice(
          @identifier,
          seq(
            optional(@identifier),
            "{", err(commaSep(@enum_value)), "}")))

      enum_value: -> seq(
        @identifier, optional(seq("=", @expression)))

      storage_class: -> choice(
        keyword("extern"),
        keyword("static"),
        keyword("auto"),
        keyword("register"))

      field: -> seq(@type, @type_expression)

      var_assignment: -> seq(@type_expression, "=", @expression)

      expression: -> choice(
        @bool_op,
        @math_op,
        @rel_op,
        @function_call,
        @compound_literal,
        @number,
        @char,
        @string,
        @deref,
        @address_of,
        @identifier,
        @assignment,
        @field_access,
        @deref_field_access,
        @subscript_access)

      deref: -> prec(10, seq("*", @expression))
      address_of: -> prec(10, seq("&", @expression))

      field_access: -> seq(
        @expression, ".", @identifier)

      deref_field_access: -> seq(
        @expression, "->", @identifier)

      subscript_access: -> seq(
        @expression, "[", @expression, "]")

      function_call: -> seq(
        @expression, "(", err(commaSep(@expression)), ")")

      math_op: -> choice(
        prec(6, seq(@expression, "++")),
        prec(6, seq(@expression, "--")),
        prec(6, seq("++", @expression)),
        prec(6, seq("--", @expression)),
        prec(6, seq("-", @expression)),
        prec(5, seq(@expression, "*", @expression)),
        prec(2, seq(@expression, "/", @expression)),
        prec(1, seq(@expression, "+", @expression)),
        prec(1, seq(@expression, "-", @expression)))

      bool_op: -> choice(
        prec(3, seq("!", @expression)),
        prec(2, seq(@expression, "&&", @expression)),
        prec(1, seq(@expression, "||", @expression)))

      rel_op: -> choice(
        prec(1, seq(@expression, "<", @expression)),
        prec(1, seq(@expression, "<=", @expression)),
        prec(1, seq(@expression, "==", @expression)),
        prec(1, seq(@expression, "!=", @expression)),
        prec(1, seq(@expression, ">=", @expression)),
        prec(1, seq(@expression, ">", @expression)))

      assignment: -> prec(-1, seq(
        choice(
          @deref,
          @identifier,
          @field_access,
          @deref_field_access,
          @subscript_access),
        choice(
          "=",
          "+=",
          "-=",
          "*=",
          "/="),
        @expression))

      compound_literal: -> seq(
        "(", @type, ")",
        "{", commaSep(choice(@struct_literal_field, @expression)), optional(","), "}")

      struct_literal_field: -> seq(
        ".", @identifier,
        "=",
        @expression)

      number: -> /\d+(\.\d+)?/

      char: -> token(seq(
        "'",
        choice(
          seq(optional("\\"), /[^']/),
          seq("\\", "'")),
        "'"))

      string: -> token(seq(
        '"', repeat(choice(/[^"]/, '\\"')), '"'))

      system_lib_string: -> token(seq(
        '<', repeat(choice(/[^>]/, '\\>')), '>'))

      identifier: -> /[\a_][\a\d_]*/

      comment: -> token(choice(
        seq("//", /.*/),
        seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))
  }
