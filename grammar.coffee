module.exports =
({choice, err, repeat, seq, sym, token, optional, prec}) ->

  commaSep1 = (rule) ->
    seq(rule, repeat(seq(",", rule)))

  commaSep = (rule) ->
    optional(commaSep1(rule))

  terminator = ->
    choice(";", sym("_line_break"))

  PREC =
    COMMA: -1,
    ASSIGN: 0,
    BLOCK: 1,
    TERNARY: 1,
    OR: 2,
    AND: 3,
    PLUS: 4,
    REL: 5,
    TIMES: 6,
    TYPEOF: 7,
    NOT: 8,
    NEG: 9,
    INC: 10,
    NEW: 11,
    CALL: 12,
    MEMBER: 13

  {
    name: 'javascript'

    ubiquitous: -> [
      @comment,
      @_line_break,
      /[ \t\r]/
    ]

    rules:
      program: -> repeat(@statement)

      #
      # Statements
      #

      statement: -> choice(
        @expression_statement,
        @var_declaration,
        @statement_block,

        @if_statement,
        @switch_statement,
        @for_statement,
        @for_in_statement,
        @while_statement,
        @do_statement,
        @try_statement,

        @break_statement,
        @return_statement,
        @throw_statement,
        @delete_statement,
      )

      expression_statement: -> seq(
        err(@expressions), terminator())

      var_declaration: -> seq(
        "var",
        commaSep1(err(choice(
          @identifier,
          @var_assignment))),
        terminator())

      statement_block: -> prec(PREC.BLOCK, seq(
        "{", err(repeat(@statement)), "}"))

      if_statement: -> prec.right(0, seq(
        "if",
        @_paren_expression,
        @statement,
        optional(seq(
          "else",
          @statement
        ))))

      switch_statement: -> seq(
        "switch",
        "(", @expression, ")",
        "{", repeat(choice(@case, @default)), "}")

      for_statement: -> seq(
        "for",
        "(",
        choice(
          @var_declaration,
          seq(err(@expressions), ";"),
          ";"),
        optional(err(@expressions)), ";"
        optional(err(@expressions)),
        ")",
        @statement)

      for_in_statement: -> seq(
        "for",
        "(",
        optional("var"),
        @expression,
        "in",
        @expression,
        ")",
        @statement)

      while_statement: -> seq(
        "while",
        @_paren_expression,
        @statement)

      do_statement: -> seq(
        "do",
        @statement_block,
        "while",
        @_paren_expression)

      try_statement: -> seq(
        "try",
        @statement_block,
        optional(@catch),
        optional(@finally))

      break_statement: -> seq(
        "break",
        terminator())

      return_statement: -> seq(
        "return",
        optional(@expressions),
        terminator())

      throw_statement: -> seq(
        "throw",
        @expression,
        terminator())

      delete_statement: -> seq(
        "delete",
        choice(@member_access, @subscript_access),
        terminator())

      #
      # Statement components
      #

      case: -> seq(
        "case",
        @expression,
        ":",
        repeat(@statement))

      default: -> seq(
        "default",
        ":",
        repeat(@statement))

      catch: -> seq(
        "catch",
        optional(seq("(", @identifier, ")"))
        @statement_block)

      finally: -> seq(
        "finally",
        @statement_block)

      var_assignment: -> seq(
        @identifier,
        "=",
        @expression)

      _paren_expression: -> seq(
        "(", err(@expression), ")")

      #
      # Expressions
      #

      expressions: -> commaSep1(@expression)

      expression: -> choice(
        @object,
        @array,
        @function,
        @function_call,
        @new_expression,
        @member_access,
        @subscript_access,
        @assignment,
        @math_assignment,
        @ternary,
        @bool_op,
        @math_op,
        @bitwise_op,
        @rel_op,
        @type_op,
        @_paren_expression,

        @identifier,
        @number,
        @string,
        @regex,
        @true,
        @false,
        @null,
        @undefined,
      )

      object: -> seq(
        "{", commaSep(err(@pair)), "}")

      array: -> seq(
        "[", commaSep(err(@expression)), "]")

      function: -> seq(
        "function",
        optional(@identifier),
        "(", optional(@formal_parameters), ")",
        @statement_block)

      function_call: -> prec(PREC.CALL, seq(
        @expression,
        "(", err(optional(@arguments)), ")"))

      new_expression: -> prec(PREC.NEW, seq(
        "new",
        @expression))

      member_access: -> prec(PREC.MEMBER, seq(
        @expression,
        ".",
        @identifier))

      subscript_access: -> prec.right(PREC.MEMBER, seq(
        @expression,
        "[", err(@expression), "]"))

      assignment: -> prec(PREC.ASSIGN, seq(
        choice(
          @identifier,
          @member_access,
          @subscript_access)
        "=",
        @expression))

      math_assignment: -> prec(PREC.ASSIGN, seq(
        choice(
          @identifier,
          @member_access,
          @subscript_access)
        choice("+=", "-=", "*=", "/="),
        @expression))

      ternary: -> prec(PREC.TERNARY, seq(
        @expression, "?", @expression, ":", @expression))

      bool_op: -> choice(
        prec(PREC.NOT, seq("!", @expression)),
        prec(PREC.AND, seq(@expression, "&&", @expression)),
        prec(PREC.OR, seq(@expression, "||", @expression)))

      bitwise_op: -> choice(
        prec(PREC.TIMES, seq(@expression, ">>", @expression)),
        prec(PREC.TIMES, seq(@expression, "<<", @expression)),
        prec(PREC.AND, seq(@expression, "&", @expression)),
        prec(PREC.OR, seq(@expression, "|", @expression)))

      math_op: -> choice(
        prec(PREC.NEG, seq("-", @expression)),
        prec(PREC.NEG, seq("+", @expression)),
        prec(PREC.INC, seq(@expression, "++")),
        prec(PREC.INC, seq(@expression, "--")),
        prec(PREC.PLUS, seq(@expression, "+", @expression)),
        prec(PREC.PLUS, seq(@expression, "-", @expression)),
        prec(PREC.TIMES, seq(@expression, "*", @expression)),
        prec(PREC.TIMES, seq(@expression, "/", @expression)))

      rel_op: -> choice(
        prec(PREC.REL, seq(@expression, "<", @expression)),
        prec(PREC.REL, seq(@expression, "<=", @expression)),
        prec(PREC.REL, seq(@expression, "==", @expression)),
        prec(PREC.REL, seq(@expression, "===", @expression)),
        prec(PREC.REL, seq(@expression, "!=", @expression)),
        prec(PREC.REL, seq(@expression, "!==", @expression)),
        prec(PREC.REL, seq(@expression, ">=", @expression)),
        prec(PREC.REL, seq(@expression, ">", @expression)))

      type_op: -> choice(
        prec(PREC.TYPEOF, seq("typeof", @expression)),
        prec(PREC.REL, seq(@expression, "instanceof", @expression)),
        prec(PREC.REL, seq(@expression, "in", @expression)))

      #
      # Primitives
      #

      comment: -> token(choice(
        seq("//", /.*/),
        seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))

      string: -> token(choice(
        seq('"', repeat(choice(/[^\\"\n]/, /\\./)), '"'),
        seq("'", repeat(choice(/[^\\'\n]/, /\\./)), "'")))

      regex: -> token(seq(
        '/', repeat(choice(/[^\\/\n]/, /\\./)), '/',
        repeat(choice('i', 'g'))))

      number: -> token(choice(
        seq(
          "0x",
          /[\da-fA-F]+/),
        seq(
          /\d+/,
          optional(seq(".", /\d*/)))))

      identifier: -> /[\a_$][\a\d_$]*/

      true: -> "true"
      false: -> "false"
      null: -> "null"
      undefined: -> "undefined"
      _line_break: -> "\n"

      #
      # Expression components
      #

      arguments: ->
        commaSep1(err(@expression))

      formal_parameters: ->
        commaSep1(@identifier)

      pair: -> seq(
        choice(@identifier, @string),
        ":",
        @expression)
  }
