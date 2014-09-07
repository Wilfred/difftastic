compiler = require("tree-sitter-compiler")
{ choice, err, repeat, seq, keyword, optional, token } = compiler.rules

commaSep = (rule) ->
  optional(commaSep1(rule))

commaSep1 = (rule) ->
  seq(rule, repeat(seq(",", rule)))

module.exports = compiler.grammar
  name: 'c',

  separators: [' ', '\t', '\r', '\n']

  ubiquitous: ["comment"]

  rules:
    program: -> repeat(choice(
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
      /.+/)

    preproc_call: -> choice(
      seq(@preproc_directive, /.*/))

    preproc_directive: -> /#\a\w+/

    typedef: -> seq(
      keyword("typedef"),
      @type,
      @identifier,
      ";")

    var_declaration: -> seq(
      @type,
      commaSep1(@type_expression),
      ";")

    function_declaration: -> seq(
      @type,
      @identifier,
      "(", @formal_parameters, ")",
      ";")

    type: -> seq(
      optional(keyword("const")),
      choice(
        @identifier,
        @struct_type,
        @enum_type,
        @union_type))

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
      @identifier, optional(seq("=", @number)))

    field: -> seq(@type, @type_expression)

    type_modifier: -> choice(
      keyword("const"))

    number: -> /\d+(\.\d+)?/

    string: -> token(seq(
      '"', repeat(choice(/[^"]/, '\\"')), '"'))

    system_lib_string: -> token(seq(
      '<', repeat(choice(/[^>]/, '\\>')), '>'))

    identifier: -> /\a\w*/

    comment: -> token(choice(
      seq("//", /.*/),
      seq("/*", repeat(choice(/[^\*]/, /\*[^/]/)), "*/")))
