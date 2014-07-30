compiler = require("tree-sitter-compiler")
{ choice, repeat, seq, keyword, token, optional } = compiler.rules

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
      @variable,
      @number,
      @string)

    variable: -> /\a+\d*/,

    number: -> token(seq(
      /\d+/,
      optional(seq(".", /\d+/))))

    string: -> token(choice(
      seq('"', repeat(choice(/[^"]/, '\\"')), '"'),
      seq("'", repeat(choice(/[^']/, "\\'")), "'")))
