{ grammar, rules } = require("tree-sitter-compiler")
{ choice, err, repeat, seq, sym, keyword, token, optional, prec } = rules

commaSep1 = (rule) ->
  seq(rule, repeat(seq(",", rule)))

commaSep = (rule) ->
  optional(commaSep1(rule))

terminator = ->
  choice(";", sym("_line_break"))

module.exports = grammar
  name: 'javascript',

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
      err(@expression), terminator())

    var_declaration: -> seq(
      keyword("var"),
      commaSep1(err(choice(
        @identifier,
        @var_assignment))),
      terminator())

    statement_block: -> seq(
      "{", err(repeat(@statement)), "}")

    if_statement: -> seq(
      keyword("if"),
      @_paren_expression,
      @statement,
      optional(seq(
        keyword("else"),
        @statement
      )))

    switch_statement: -> seq(
      keyword("switch"),
      "(", @expression, ")",
      "{", repeat(choice(@case, @default)), "}")

    for_statement: -> seq(
      keyword("for"),
      "(",
      choice(
        @var_declaration,
        seq(err(@expression), ";"),
        ";"),
      optional(err(@expression)), ";"
      optional(err(@expression)),
      ")",
      @statement)

    for_in_statement: -> seq(
      keyword("for"),
      "(",
      optional(keyword("var")),
      @identifier,
      keyword("in"),
      @expression,
      ")",
      @statement)

    while_statement: -> seq(
      keyword("while"),
      @_paren_expression,
      @statement)

    do_statement: -> seq(
      keyword("do"),
      @statement_block,
      keyword("while"),
      @_paren_expression)

    try_statement: -> seq(
      keyword("try"),
      @statement_block,
      optional(@catch),
      optional(@finally))

    break_statement: -> seq(
      keyword("break"),
      terminator())

    return_statement: -> seq(
      keyword("return"),
      optional(@expression),
      terminator())

    throw_statement: -> seq(
      keyword("throw"),
      @expression,
      terminator())

    delete_statement: -> seq(
      keyword("delete"),
      choice(@member_access, @subscript_access),
      terminator())

    #
    # Statement components
    #

    case: -> seq(
      keyword("case"),
      @expression,
      ":",
      repeat(@statement))

    default: -> seq(
      keyword("default"),
      ":",
      repeat(@statement))

    catch: -> seq(
      keyword("catch"),
      optional(seq("(", @identifier, ")"))
      @statement_block)

    finally: -> seq(
      keyword("finally"),
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

    expression: -> choice(
      @object,
      @array,
      @function,
      @function_call,
      @constructor_call,
      @member_access,
      @subscript_access,
      @assignment,
      @math_assignment,
      @ternary,
      @bool_op,
      @math_op,
      @comma_op,
      @bitwise_op,
      @rel_op,
      @type_op,
      @_paren_expression,

      @identifier,
      @number,
      @string,
      @regex,
      @true,
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
      keyword("function"),
      optional(@identifier),
      "(", optional(@formal_parameters), ")",
      @statement_block)

    function_call: -> prec(20, seq(
      @expression,
      "(", err(optional(@arguments)), ")"))

    constructor_call: -> prec(21, seq(
      keyword("new"),
      @expression,
      optional(seq(
        "(", err(optional(@arguments)), ")"))))

    member_access: -> prec(31, seq(
      @expression,
      ".",
      @identifier))

    subscript_access: -> prec(10, seq(
      @expression,
      "[", err(@expression), "]"))

    assignment: -> prec(-2, seq(
      choice(
        @identifier,
        @member_access,
        @subscript_access)
      "=",
      @expression))

    math_assignment: -> prec(-2, seq(
      choice(
        @identifier,
        @member_access,
        @subscript_access)
      choice("+=", "-=", "*=", "/="),
      @expression))

    ternary: -> prec(-1, seq(
      @expression, "?", @expression, ":", @expression))

    bool_op: -> choice(
      prec(4, seq("!", @expression)),
      prec(2, seq(@expression, "&&", @expression)),
      prec(1, seq(@expression, "||", @expression)))

    bitwise_op: -> choice(
      prec(13, seq(@expression, ">>", @expression)),
      prec(13, seq(@expression, "<<", @expression)),
      prec(12, seq(@expression, "&", @expression)),
      prec(11, seq(@expression, "|", @expression)))

    comma_op: -> prec(-3, seq(
      @expression, ",", @expression))

    math_op: -> choice(
      prec(14, seq("-", @expression)),
      prec(14, seq("+", @expression)),
      prec(14, seq(@expression, "++")),
      prec(14, seq(@expression, "--")),
      prec(11, seq(@expression, "+", @expression)),
      prec(11, seq(@expression, "-", @expression)),
      prec(12, seq(@expression, "*", @expression)),
      prec(12, seq(@expression, "/", @expression)))

    rel_op: -> choice(
      prec(10, seq(@expression, "<", @expression)),
      prec(10, seq(@expression, "<=", @expression)),
      prec(10, seq(@expression, "==", @expression)),
      prec(10, seq(@expression, "===", @expression)),
      prec(10, seq(@expression, "!=", @expression)),
      prec(10, seq(@expression, "!==", @expression)),
      prec(10, seq(@expression, ">=", @expression)),
      prec(10, seq(@expression, ">", @expression)))

    type_op: -> choice(
      prec(14, seq(keyword("typeof"), @expression)),
      prec(12, seq(@expression, keyword("instanceof"), @expression)),
      prec(12, seq(@expression, keyword("in"), @expression)))

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

    true: -> keyword("true")
    false: -> keyword("false")
    null: -> keyword("null")
    undefined: -> keyword("undefined")
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

