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
      @if_statement)

    expression_statement: -> seq(
      @expression, ";")

    if_statement: -> seq(
      keyword("if"),
      "(", @expression, ")",
      @statement)

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
      @subscript_access)

    member_access: -> seq(
      @expression,
      ".",
      @identifier)

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
