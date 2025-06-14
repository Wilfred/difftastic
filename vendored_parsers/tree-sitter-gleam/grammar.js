const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gleam",
  externals: ($) => [$.quoted_content],
  extras: ($) => [
    NEWLINE,
    /\s/,
    $.module_comment,
    $.statement_comment,
    $.comment,
  ],
  conflicts: ($) => [
    [$._maybe_record_expression, $._maybe_tuple_expression],
    [
      $._maybe_record_expression,
      $._maybe_tuple_expression,
      $.remote_constructor_name,
    ],
    [$.case_subjects],
    [$.source_file],
    [$._constant_value, $._case_clause_guard_unit],
    [$.integer],
    [$.echo],
  ],
  rules: {
    /* General rules */
    source_file: ($) =>
      repeat(choice($.target_group, $._module_statement, $._statement_seq)),

    _module_statement: ($) =>
      choice(
        $.import,
        $.constant,
        $.external_type,
        $.external_function,
        $.function,
        $.type_definition,
        $.type_alias,
        $.attribute
      ),

    /* Comments */
    module_comment: ($) => token(seq("////", /.*/)),
    statement_comment: ($) => token(seq("///", /.*/)),
    comment: ($) => token(seq("//", /.*/)),

    /* Target groups
     * DEPRECATED: This syntax was replaced with attributes in v0.30.
     */
    target_group: ($) =>
      seq(
        "if",
        field("target", $.target),
        "{",
        repeat($._module_statement),
        "}"
      ),
    target: ($) => choice("erlang", "javascript"),

    /* Attributes */
    attribute: ($) =>
      seq(
        "@",
        field("name", $.identifier),
        optional(field("arguments", alias($._attribute_arguments, $.arguments)))
      ),

    _attribute_arguments: ($) =>
      seq("(", series_of($.attribute_value, ","), ")"),

    attribute_value: ($) =>
      choice(
        $._constant_value,
        seq(field("label", $.label), ":", field("value", $._constant_value))
      ),

    /* Import statements */
    import: ($) =>
      seq(
        "import",
        field("module", $.module),
        optional(seq(".", field("imports", $.unqualified_imports))),
        optional(seq("as", field("alias", choice($.identifier, $.discard))))
      ),
    module: ($) => seq($._name, repeat(seq("/", $._name))),
    unqualified_imports: ($) =>
      seq("{", optional(series_of($.unqualified_import, ",")), "}"),
    unqualified_import: ($) =>
      choice(
        seq(
          field("name", $.identifier),
          optional(seq("as", field("alias", $.identifier)))
        ),
        seq(
          "type",
          field("name", $.type_identifier),
          optional(seq("as", field("alias", $.type_identifier)))
        ),
        seq(
          field("name", $.constructor_name),
          optional(seq("as", field("alias", $.constructor_name)))
        )
      ),

    /* Constant statements */
    constant: ($) =>
      seq(
        optional($.visibility_modifier),
        "const",
        field("name", $.identifier),
        optional($._constant_type_annotation),
        "=",
        field("value", $._constant_value)
      ),
    _constant_value: ($) =>
      choice(
        $.string,
        $.float,
        $.integer,
        alias($.constant_tuple, $.tuple),
        alias($.constant_list, $.list),
        alias($._constant_bit_string, $.bit_string),
        alias($.constant_record, $.record),
        $.identifier,
        alias($.constant_field_access, $.field_access)
      ),
    constant_tuple: ($) =>
      seq("#", "(", optional(series_of($._constant_value, ",")), ")"),
    constant_list: ($) =>
      seq("[", optional(series_of($._constant_value, ",")), "]"),
    ...bit_string_rules("constant", "_constant_value", "integer"),
    constant_record: ($) =>
      seq(
        field("name", choice($.constructor_name, $.remote_constructor_name)),
        optional(
          field("arguments", alias($.constant_record_arguments, $.arguments))
        )
      ),
    constant_record_arguments: ($) =>
      seq(
        "(",
        optional(series_of(alias($.constant_record_argument, $.argument), ",")),
        ")"
      ),
    constant_record_argument: ($) =>
      choice(
        seq(
          optional(seq(field("label", $.label), ":")),
          field("value", $._constant_value)
        ),
        seq(field("label", $.label), ":")
      ),
    // This rule exists to parse remote function references which are generally
    // indistinguishable from field accesses and so share an AST node.
    constant_field_access: ($) =>
      seq(field("record", $.identifier), ".", field("field", $.label)),

    /* Special constant types */
    // Versions of $._type, $._type_annotation, etc, that have constraints
    // specific to constants.
    _constant_type: ($) =>
      choice(
        $.type_hole,
        alias($.constant_tuple_type, $.tuple_type),
        alias($.constant_function_type, $.function_type),
        alias($.constant_type, $.type)
      ),
    _constant_type_annotation: ($) => seq(":", field("type", $._constant_type)),
    constant_tuple_type: ($) =>
      seq("#", "(", optional(series_of($._constant_type, ",")), ")"),
    constant_function_type: ($) =>
      seq(
        "fn",
        optional(
          field(
            "parameter_types",
            alias(
              $.constant_function_parameter_types,
              $.function_parameter_types
            )
          )
        ),
        "->",
        field("return_type", $._constant_type)
      ),
    constant_function_parameter_types: ($) =>
      seq("(", optional(series_of($._constant_type, ",")), ")"),
    constant_type: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
        optional(
          field("arguments", alias($.constant_type_arguments, $.type_arguments))
        )
      ),
    constant_type_arguments: ($) =>
      seq(
        "(",
        optional(
          series_of(alias($.constant_type_argument, $.type_argument), ",")
        ),
        ")"
      ),
    constant_type_argument: ($) => $._constant_type,

    external_type: ($) =>
      prec.right(
        seq(
          optional($.visibility_modifier),
          // DEPRECATED: the external token was removed in v0.30.
          optional("external"),
          "type",
          $.type_name
        )
      ),

    /* External function */
    external_function: ($) =>
      seq(
        optional($.visibility_modifier),
        "external",
        "fn",
        field("name", $.identifier),
        field(
          "parameters",
          alias($.external_function_parameters, $.function_parameters)
        ),
        "->",
        field("return_type", $._type),
        "=",
        field("body", $.external_function_body)
      ),
    // Different from module function parameters in that module function
    // parameters may be labeled whereas external function parameters cannot.
    external_function_parameters: ($) =>
      seq(
        "(",
        optional(
          series_of(
            alias($.external_function_parameter, $.function_parameter),
            ","
          )
        ),
        ")"
      ),
    external_function_parameter: ($) =>
      seq(
        optional(seq(field("name", $.identifier), ":")),
        field("type", $._type)
      ),
    external_function_body: ($) => seq($.string, $.string),

    /* Functions */
    function: ($) =>
      prec.right(
        seq(
          optional($.visibility_modifier),
          "fn",
          field("name", $.identifier),
          field("parameters", $.function_parameters),
          optional(seq("->", field("return_type", $._type))),
          optional(field("body", $.block))
        )
      ),
    function_parameters: ($) =>
      seq("(", optional(series_of($.function_parameter, ",")), ")"),
    function_parameter: ($) =>
      seq(
        choice(
          $._labeled_discard_param,
          $._discard_param,
          $._labeled_name_param,
          $._name_param
        ),
        optional($._type_annotation)
      ),
    _labeled_discard_param: ($) =>
      seq(field("label", $.label), field("name", $.discard)),
    _discard_param: ($) => field("name", $.discard),
    _labeled_name_param: ($) =>
      seq(field("label", $.label), field("name", $.identifier)),
    _name_param: ($) => field("name", $.identifier),
    _statement_seq: ($) => repeat1($._statement),
    _statement: ($) =>
      choice($._expression, $.let, $.let_assert, $.use, $.assert),
    _expression: ($) => choice($._expression_unit, $.binary_expression),
    binary_expression: ($) =>
      choice(
        binaryExpr(prec.left, 1, "||", $._expression),
        binaryExpr(prec.left, 2, "&&", $._expression),
        binaryExpr(prec.left, 3, "==", $._expression),
        binaryExpr(prec.left, 3, "!=", $._expression),
        binaryExpr(prec.left, 4, "<", $._expression),
        binaryExpr(prec.left, 4, "<=", $._expression),
        binaryExpr(prec.left, 4, "<.", $._expression),
        binaryExpr(prec.left, 4, "<=.", $._expression),
        binaryExpr(prec.left, 4, ">", $._expression),
        binaryExpr(prec.left, 4, ">=", $._expression),
        binaryExpr(prec.left, 4, ">.", $._expression),
        binaryExpr(prec.left, 4, ">=.", $._expression),
        binaryExpr(
          prec.left,
          5,
          "|>",
          $._expression,
          choice($.pipeline_echo, $._expression)
        ),
        binaryExpr(prec.left, 6, "+", $._expression),
        binaryExpr(prec.left, 6, "+.", $._expression),
        binaryExpr(prec.left, 6, "-", $._expression),
        binaryExpr(prec.left, 6, "-.", $._expression),
        binaryExpr(prec.left, 7, "*", $._expression),
        binaryExpr(prec.left, 7, "*.", $._expression),
        binaryExpr(prec.left, 7, "/", $._expression),
        binaryExpr(prec.left, 7, "/.", $._expression),
        binaryExpr(prec.left, 7, "%", $._expression),
        binaryExpr(prec.left, 7, "<>", $._expression)
      ),
    // The way that this function is written in the Gleam parser is essentially
    // incompatible with tree-sitter. It first parses some base expression,
    // then potentially parses tuple access, field access, record updates, or
    // function calls as an extension of that base expression that was
    // previously parsed. tree-sitter provides no facility to amend a node that
    // was already successfully parsed. Therefore, tuple access, field access,
    // record updates, and function calls must be parsed as alternatives to the
    // expressions they build upon rather than extensions thereof.
    _expression_unit: ($) =>
      choice(
        $.string,
        $.integer,
        $.float,
        // If we decide that record constructors (value constructors) are
        // actually functions, this will require a refactor.
        $.record,
        $.identifier,
        $.todo,
        $.panic,
        $.tuple,
        $.echo,
        $.list,
        alias($._expression_bit_string, $.bit_string),
        $.anonymous_function,
        $.block,
        $.case,
        $.boolean_negation,
        $.integer_negation,
        $.record_update,
        $.tuple_access,
        $.field_access,
        $.function_call
      ),
    record: ($) =>
      seq(
        field("name", choice($.constructor_name, $.remote_constructor_name)),
        optional(field("arguments", $.arguments))
      ),
    todo: ($) =>
      prec.left(
        seq(
          "todo",
          optional(
            choice(
              // DEPRECATED: The 'as' syntax was introduced in v0.30.
              seq("(", field("message", $.string), ")"),
              seq("as", field("message", $._expression))
            )
          )
        )
      ),
    panic: ($) =>
      prec.left(
        seq(
          "panic",
          optional(
            choice(
              seq("(", field("message", $.string), ")"),
              seq("as", field("message", $._expression))
            )
          )
        )
      ),
    pipeline_echo: (_$) => prec.left("echo"),
    echo: ($) => seq("echo", $._expression),
    tuple: ($) => seq("#", "(", optional(series_of($._expression, ",")), ")"),
    list: ($) =>
      seq(
        "[",
        optional(
          seq(
            $._expression,
            optional(repeat(seq(",", $._expression))),
            optional(","),
            optional(seq("..", field("spread", $._expression)))
          )
        ),
        "]"
      ),
    ...bit_string_rules("expression", "_expression_unit", "_expression"),
    anonymous_function: ($) =>
      seq(
        "fn",
        field(
          "parameters",
          alias($.anonymous_function_parameters, $.function_parameters)
        ),
        optional(seq("->", field("return_type", $._type))),
        field("body", $.block)
      ),
    anonymous_function_parameters: ($) =>
      seq(
        "(",
        optional(
          series_of(
            alias($.anonymous_function_parameter, $.function_parameter),
            ","
          )
        ),
        ")"
      ),
    anonymous_function_parameter: ($) =>
      seq(
        choice($._discard_param, $._name_param),
        optional($._type_annotation)
      ),
    block: ($) => seq("{", optional($._statement_seq), "}"),
    case: ($) =>
      seq(
        "case",
        field("subjects", $.case_subjects),
        "{",
        optional(field("clauses", $.case_clauses)),
        "}"
      ),
    case_subjects: ($) => seq(series_of($._expression, ",")),
    case_clauses: ($) => repeat1($.case_clause),
    case_clause: ($) =>
      seq(
        field("patterns", $.case_clause_patterns),
        optional(field("guard", $.case_clause_guard)),
        "->",
        field("value", $._expression)
      ),
    // Technically the Gleam parser does support something like this:
    //   1 | | 5 -> True
    // However, that will cause an error further into the compiler. That format
    // is not supported by this function.
    case_clause_patterns: ($) => seq(series_of($.case_clause_pattern, "|")),
    // The issue above comes from the fact that the parser equivalent of this
    // function supports 0 patterns. This function does not.
    case_clause_pattern: ($) => series_of($._pattern, ","),
    case_clause_guard: ($) => seq("if", $._case_clause_guard_expression),
    _case_clause_guard_expression: ($) =>
      choice(
        $._case_clause_guard_unit,
        alias($._case_clause_guard_binary_expression, $.binary_expression),
        $.boolean_negation
      ),
    _case_clause_guard_binary_expression: ($) =>
      choice(
        binaryExpr(prec.left, 1, "||", $._case_clause_guard_expression),
        binaryExpr(prec.left, 2, "&&", $._case_clause_guard_expression),
        binaryExpr(prec.left, 3, "==", $._case_clause_guard_expression),
        binaryExpr(prec.left, 3, "!=", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, "<", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, "<=", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, "<.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, "<=.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, ">", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, ">=", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, ">.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 4, ">=.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 5, "+", $._case_clause_guard_expression),
        binaryExpr(prec.left, 5, "+.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 5, "-", $._case_clause_guard_expression),
        binaryExpr(prec.left, 5, "-.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 6, "*", $._case_clause_guard_expression),
        binaryExpr(prec.left, 6, "*.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 6, "/", $._case_clause_guard_expression),
        binaryExpr(prec.left, 6, "/.", $._case_clause_guard_expression),
        binaryExpr(prec.left, 6, "%", $._case_clause_guard_expression)
      ),
    _case_clause_guard_unit: ($) =>
      choice(
        $.identifier,
        prec(1, alias($._case_clause_tuple_access, $.tuple_access)),
        seq("{", $._case_clause_guard_expression, "}"),
        $._constant_value
      ),
    _case_clause_tuple_access: ($) =>
      seq(field("tuple", $.identifier), ".", field("index", $.integer)),
    let_assert: ($) =>
      seq(
        "let",
        "assert",
        $._assignment,
        optional(seq("as", field("message", $._expression)))
      ),
    assert: ($) =>
      seq(
        "assert",
        field("value", $._expression),
        optional(seq("as", field("message", $._expression)))
      ),
    let: ($) => seq("let", $._assignment),
    use: ($) =>
      seq(
        "use",
        optional(field("assignments", $.use_assignments)),
        "<-",
        field("value", $._expression)
      ),
    use_assignments: ($) => series_of($.use_assignment, ","),
    use_assignment: ($) => seq($._pattern, optional($._type_annotation)),
    boolean_negation: ($) => seq("!", $._expression_unit),
    integer_negation: ($) => seq("-", $._expression_unit),
    _assignment: ($) =>
      seq(
        field("pattern", $._pattern),
        optional($._type_annotation),
        "=",
        field("value", $._expression)
      ),
    record_update: ($) =>
      seq(
        field(
          "constructor",
          choice($.constructor_name, $.remote_constructor_name)
        ),
        "(",
        "..",
        field("spread", $._expression),
        ",",
        field("arguments", $.record_update_arguments),
        ")"
      ),
    record_update_arguments: ($) => series_of($.record_update_argument, ","),
    record_update_argument: ($) =>
      choice(
        seq(field("label", $.label), ":", field("value", $._expression)),
        seq(field("label", $.label), ":")
      ),
    // As with other AST nodes in this section, `_maybe_record_expression`,
    // `_maybe_tuple_expression`, and `_maybe_function_expresssion` have no
    // corollaries in the Gleam parser. These anonymous AST node denote any
    // expression whose return type could be a record, tuple, or function,
    // respectively.
    //
    // `let` and `assert` are exempted because in order to parse correctly,
    // they would have to be wrapped in an expression group anyways.
    _maybe_tuple_expression: ($) =>
      choice(
        $.identifier,
        $.function_call,
        $.tuple,
        $.block,
        $.case,
        $.field_access,
        $.tuple_access
      ),
    tuple_access: ($) =>
      prec.left(
        seq(
          field("tuple", $._maybe_tuple_expression),
          ".",
          field("index", $.integer)
        )
      ),
    _maybe_record_expression: ($) =>
      choice(
        $.record,
        $.identifier,
        $.function_call,
        $.block,
        $.case,
        $.record_update,
        $.field_access,
        $.tuple_access
      ),
    field_access: ($) =>
      prec.left(
        seq(
          field("record", $._maybe_record_expression),
          ".",
          field("field", $.label)
        )
      ),
    // Remote functions (e.g. int.to_string) is parsed as a field access
    // (accessing field to_string on record int) as it is impossible for the
    // parser to determine with int is a module (and thus to_string a member
    // function) or a local variable containing a record (and thus to_string is
    // a field of that record).
    // Similarly, the function name in local function calls (e.g. foo(arg)) is
    // parsed as an $.identifier which is used to refer to both local variables
    // and module functions, embodying the same ambiguity.
    _maybe_function_expression: ($) =>
      choice(
        $.identifier,
        $.anonymous_function,
        $.block,
        $.case,
        $.tuple_access,
        $.field_access,
        $.function_call
      ),
    // Interestingly, the code that parses function arguments also parses
    // record arguments, hence the ambiguous name.
    arguments: ($) => seq("(", optional(series_of($.argument, ",")), ")"),
    argument: ($) =>
      choice(
        seq(
          optional(seq(field("label", $.label), ":")),
          field("value", choice($.hole, $._expression))
        ),
        seq(field("label", $.label), ":")
      ),
    hole: ($) => $._discard_name,
    function_call: ($) =>
      seq(
        field("function", $._maybe_function_expression),
        field("arguments", $.arguments)
      ),
    _pattern_expression: ($) =>
      choice(
        $.identifier,
        $.discard,
        $.record_pattern,
        $.string,
        $.integer,
        $.float,
        $.tuple_pattern,
        alias($._pattern_bit_string, $.bit_string_pattern),
        $.list_pattern,
        alias($._pattern_binary_expression, $.binary_expression)
      ),
    _pattern_binary_expression: ($) =>
      choice(
        binaryExpr(prec.left, 1, "<>", $._pattern_expression),
        binaryExpr(prec.left, 1, "as", $.string, $.identifier)
      ),
    _pattern: ($) =>
      seq(
        $._pattern_expression,
        optional(field("assign", seq("as", $.identifier)))
      ),
    record_pattern: ($) =>
      seq(
        field("name", choice($.constructor_name, $.remote_constructor_name)),
        optional(field("arguments", $.record_pattern_arguments))
      ),
    record_pattern_arguments: ($) =>
      seq(
        "(",
        optional(series_of($.record_pattern_argument, ",")),
        optional($.pattern_spread),
        ")"
      ),
    record_pattern_argument: ($) =>
      choice(
        seq(
          optional(seq(field("label", $.label), ":")),
          field("pattern", $._pattern)
        ),
        seq(field("label", $.label), ":")
      ),
    pattern_spread: ($) => seq("..", optional(",")),
    tuple_pattern: ($) =>
      seq("#", "(", optional(series_of($._pattern, ",")), ")"),
    // The Gleam parser has a special catch for nested bitstrings here, which
    // is interesting as the same error does not exist on constants. Anyhow, I
    // wasn't really sure how to implement that easily here, and so didn't.
    ...bit_string_rules(
      "pattern",
      "_pattern",
      "_pattern_bit_string_segment_argument"
    ),
    _pattern_bit_string_segment_argument: ($) =>
      choice($.identifier, $.integer),
    list_pattern: ($) =>
      seq(
        "[",
        optional(series_of($._pattern, ",")),
        optional($.list_pattern_tail),
        "]"
      ),
    list_pattern_tail: ($) =>
      seq("..", optional(choice($.identifier, $.discard))),

    visibility_modifier: ($) => "pub",
    opacity_modifier: ($) => "opaque",

    /* Custom type definitions */
    type_definition: ($) =>
      seq(
        optional($.visibility_modifier),
        optional($.opacity_modifier),
        "type",
        $.type_name,
        "{",
        $.data_constructors,
        "}"
      ),
    data_constructors: ($) => repeat1($.data_constructor),
    data_constructor: ($) =>
      seq(
        optional($.attribute),
        field("name", $.constructor_name),
        optional(field("arguments", $.data_constructor_arguments))
      ),
    data_constructor_arguments: ($) =>
      seq("(", optional(series_of($.data_constructor_argument, ",")), ")"),
    data_constructor_argument: ($) =>
      seq(optional(seq(field("label", $.label), ":")), field("value", $._type)),

    /* Type aliases */
    type_alias: ($) =>
      seq(
        optional($.visibility_modifier),
        optional($.opacity_modifier),
        "type",
        $.type_name,
        "=",
        $._type
      ),

    /* Literals */
    string: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, $.quoted_content)),
        token.immediate('"')
      ),
    escape_sequence: ($) =>
      choice(
        token.immediate(/\\[efnrt\"\\]/),
        token.immediate(/\\u\{[0-9a-fA-F]{1,6}\}/)
      ),
    float: ($) => /-?[0-9_]+\.[0-9_]*(e-?[0-9_]+)?/,
    integer: ($) =>
      seq(optional("-"), choice($._hex, $._decimal, $._octal, $._binary)),
    _hex: ($) => /0[xX][0-9a-fA-F_]+/,
    _decimal: ($) => /[0-9][0-9_]*/,
    _octal: ($) => /0[oO][0-7_]+/,
    _binary: ($) => /0[bB][0-1_]+/,
    _bit_string_segment_option: ($) =>
      choice(
        "binary",
        "bytes",
        "int",
        "float",
        "bit_string",
        "bits",
        "utf8",
        "utf16",
        "utf32",
        "utf8_codepoint",
        "utf16_codepoint",
        "utf32_codepoint",
        "signed",
        "unsigned",
        "big",
        "little",
        "native",
        seq("unit", "(", $.integer, ")")
      ),

    /* Types */
    _type: ($) =>
      choice($.type_hole, $.tuple_type, $.function_type, $.type, $.type_var),
    _type_annotation: ($) => seq(":", field("type", $._type)),
    type_hole: ($) => $._discard_name,
    // If you're wondering why there isn't a `list_type` here, the answer is
    // that the "type" form for lists is `List`, which is identical to
    // user-defined types etc and thus is not parsed specially.
    tuple_type: ($) => seq("#", "(", optional(series_of($._type, ",")), ")"),
    function_type: ($) =>
      seq(
        "fn",
        optional(field("parameter_types", $.function_parameter_types)),
        "->",
        field("return_type", $._type)
      ),
    function_parameter_types: ($) =>
      seq("(", optional(series_of($._type, ",")), ")"),
    // "type" is a somewhat ambiguous name, but it refers to a concrete type
    // such as `Bool` or `List(Int)` or even `result.Result(#(Int, Int), Nil)`.
    type: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
        optional(field("arguments", $.type_arguments))
      ),
    type_arguments: ($) =>
      seq("(", optional(series_of($.type_argument, ",")), ")"),
    type_argument: ($) => $._type,
    type_var: ($) => $._name,

    // "type_name" essentially refers to the declaration of a type. The type
    // parameters are part of the "name." Bit odd, but 🤷
    // e.g. MyType(a, b)
    type_name: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
        optional(field("parameters", $.type_parameters))
      ),
    type_parameters: ($) =>
      seq("(", optional(series_of($.type_parameter, ",")), ")"),
    type_parameter: ($) => $._name,

    /* Shared AST nodes */
    identifier: ($) => $._name,
    label: ($) => $._name,
    discard: ($) => $._discard_name,
    type_identifier: ($) => $._upname,
    remote_type_identifier: ($) =>
      seq(field("module", $.identifier), ".", field("name", $.type_identifier)),
    constructor_name: ($) => $._upname,
    remote_constructor_name: ($) =>
      seq(
        field("module", $.identifier),
        ".",
        field("name", $.constructor_name)
      ),

    /* Reused types from the Gleam lexer */
    _discard_name: ($) => /_[_0-9a-z]*/,
    _name: ($) => /[_a-z][_0-9a-z]*/,
    _upname: ($) => /[A-Z][0-9a-zA-Z]*/,
  },
});

// This function and the following function are vaguely congruent with the
// `parse_bit_string_segment` function of the Gleam parser.
function bit_string_rules(name, value_parser, arg_parser) {
  return {
    [`_${name}_bit_string`]: ($) =>
      seq(
        "<<",
        optional(
          series_of(
            alias($[`${name}_bit_string_segment`], $.bit_string_segment),
            ","
          )
        ),
        ">>"
      ),
    [`${name}_bit_string_segment`]: ($) =>
      seq(
        field("value", $[value_parser]),
        optional(
          field(
            "options",
            seq(
              ":",
              alias(
                $[`${name}_bit_string_segment_options`],
                $.bit_string_segment_options
              )
            )
          )
        )
      ),
    ...bit_string_segment_options(name, arg_parser),
  };
}

function bit_string_segment_options(name, arg_parser) {
  return {
    [`${name}_bit_string_segment_options`]: ($) =>
      series_of($[`_${name}_bit_string_segment_option`], "-"),
    [`_${name}_bit_string_segment_option`]: ($) =>
      choice($[`_${name}_bit_string_named_segment_option`], $.integer),
    [`_${name}_bit_string_named_segment_option`]: ($) =>
      alias(
        choice(
          $._bit_string_segment_option,
          $[`_${name}_bit_string_segment_option_size`]
        ),
        $.bit_string_segment_option
      ),
    [`_${name}_bit_string_segment_option_size`]: ($) =>
      seq("size", "(", $[arg_parser], ")"),
  };
}

// Shamelessly stolen "sep1" from tree-sitter-elixir, renamed to match a similar
// function in the Gleam parser.
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de3ec57591aebf451e710fc9c984cf601258baf5/grammar.js#L817-L819
function series_of(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}

// A binary expression with a left-hand side, infix operator, and then right-hand-side
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de20391afe5cb03ef1e8a8e43167e7b58cc52869/grammar.js#L850-L859
function binaryExpr(assoc, precedence, operator, left, right = null) {
  return assoc(
    precedence,
    seq(
      field("left", left),
      field("operator", operator),
      field("right", right || left)
    )
  );
}
