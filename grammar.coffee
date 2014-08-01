compiler = require("tree-sitter-compiler")
{ blank, choice, repeat, seq, keyword, token, optional } = compiler.rules

commaSep = (rule) ->
  choice(blank(), seq(rule, repeat(seq(",", rule))))

module.exports = compiler.grammar
  name: 'javascript',

  rules:
    program: -> repeat(@statement)

    statement: -> choice(
      @expression_statement,
      @if_statement,
      @for_statement,
      @statement_block,
      @return_statement)

    expression_statement: -> seq(
      optional(@expression), ";")

    if_statement: -> seq(
      keyword("if"),
      "(", @expression, ")",
      @statement)

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
      ";")

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

    regex: -> token(seq(
      '/', repeat(choice(/[^/]/, '\\/')), '/',
      repeat(choice('i', 'g'))))

    true: -> keyword("true")
    false: -> keyword("false")
    null: -> keyword("null")
    undefined: -> keyword("undefined")
