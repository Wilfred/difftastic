compiler = require("tree-sitter-compiler")
{ blank, choice, repeat, seq, sym, keyword, token, optional } = compiler.rules

commaSep = (rule) ->
  choice(blank(), seq(rule, repeat(seq(",", rule))))

terminator = ->
  choice(";", sym("_line_break"))

module.exports = compiler.grammar
  name: 'javascript',

  ubiquitous: ["comment", "_line_break"]

  rules:
    program: -> repeat(@statement)

    statement: -> choice(
      @expression_statement,
      @if_statement,
      @switch_statement,
      @for_statement,
      @break_statement,
      @statement_block,
      @return_statement,
      @var_declaration)

    expression_statement: -> seq(
      optional(@expression), terminator())

    if_statement: -> seq(
      keyword("if"),
      "(", @expression, ")",
      @statement)

    switch_statement: -> seq(
      keyword("switch"),
      "(",
      @expression,
      ")",
      "{",
      repeat(choice(@case, @default))
      "}")

    case: -> seq(
      keyword("case"),
      @expression,
      ":",
      repeat(@statement))

    default: -> seq(
      keyword("default"),
      ":",
      repeat(@statement))

    break_statement: -> seq(
      keyword("break"),
      terminator())

    for_statement: -> seq(
      keyword("for"),
      "(",
      @expression_statement,
      @expression_statement,
      optional(@expression),
      ")",
      @statement)

    return_statement: -> seq(
      keyword("return"),
      optional(@expression),
      terminator())

    var_declaration: -> seq(
      keyword("var"),
      commaSep(choice(
        @identifier,
        seq(
          @identifier,
          "=",
          @expression))),
      terminator())

    expression: -> choice(
      @identifier,
      @number,
      @string,
      @regex,
      @true,
      @true,
      @false,
      @null,
      @undefined,
      @object,
      @array,
      @function,
      @member_access,
      @subscript_access,
      @function_call,
      @math_op,
      @rel_op,
      @assignment,
      seq("(", @expression, ")"))

    member_access: -> seq(
      @expression,
      ".",
      @identifier)

    function_call: -> seq(
      @expression,
      "(",
      commaSep(@expression),
      ")")

    assignment: -> seq(
      choice(
        @identifier,
        @member_access,
        @subscript_access),
      "=",
      @expression)

    subscript_access: -> seq(
      @expression,
      "[",
      @expression,
      "]")

    object: -> seq(
      "{",
      commaSep(seq(
        choice(@identifier, @string),
        ":",
        @expression))
      "}")

    function: -> seq(
      keyword("function"),
      @formal_parameters,
      @statement_block)

    formal_parameters: -> seq(
      "(",
      commaSep(@identifier),
      ")")

    statement_block: -> seq(
      "{",
      repeat(@statement),
      "}")

    array: -> seq(
      "[",
      commaSep(@expression)
      "]")

    identifier: -> /\a+\d*/

    number: -> token(seq(
      /\d+/,
      optional(seq(".", /\d+/))))

    math_op: -> choice(
      seq(@expression, "++"),
      seq(@expression, "--"),
      seq(@expression, "+", @expression),
      seq(@expression, "-", @expression))

    rel_op: -> choice(
      seq(@expression, "<", @expression),
      seq(@expression, "<=", @expression),
      seq(@expression, "==", @expression),
      seq(@expression, "===", @expression),
      seq(@expression, "!=", @expression),
      seq(@expression, "!==", @expression),
      seq(@expression, ">=", @expression),
      seq(@expression, ">", @expression))

    string: -> token(choice(
      seq('"', repeat(choice(/[^"]/, '\\"')), '"'),
      seq("'", repeat(choice(/[^']/, "\\'")), "'")))

    comment: -> token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))

    regex: -> token(seq(
      '/', repeat(choice(/[^/\n]/, '\\/')), '/',
      repeat(choice('i', 'g'))))

    true: -> keyword("true")
    false: -> keyword("false")
    null: -> keyword("null")
    undefined: -> keyword("undefined")

    _line_break: -> "\n"
