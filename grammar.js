const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gleam",
  extras: ($) => [
    ";",
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
      $.remote_type_identifier,
    ],
    [$.case_subjects],
  ],
  rules: {
    /* General rules */
    source_file: ($) => repeat(choice($.target_group, $._statement)),

    _statement: ($) =>
      choice(
        $.import,
        $.constant,
        $.public_constant,
        $.external_type,
        $.public_external_type,
        $.external_function,
        $.public_external_function,
        $.function,
        $.public_function,
        $.type_definition,
        $.public_type_definition,
        $.public_opaque_type_definition,
        $.type_alias,
        $.public_type_alias,
        $.public_opaque_type_alias
      ),

    /* Comments */
    module_comment: ($) => token(seq("////", /.*/)),
    statement_comment: ($) => token(seq("///", /.*/)),
    comment: ($) => token(seq("//", /.*/)),

    /* Target groups */
    target_group: ($) =>
      seq("if", field("target", $.target), "{", repeat($._statement), "}"),
    target: ($) => choice("erlang", "javascript"),

    /* Import statements */
    import: ($) =>
      seq(
        "import",
        field("module", $.module),
        optional(seq(".", field("imports", $.unqualified_imports))),
        optional(seq("as", field("alias", $.identifier)))
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
          field("name", $.type_identifier),
          optional(seq("as", field("alias", $.type_identifier)))
        )
      ),

    /* Constant statements */
    public_constant: ($) => seq("pub", $._constant),
    constant: ($) => $._constant,
    _constant: ($) =>
      seq(
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
        alias($.constant_record, $.record)
      ),
    constant_tuple: ($) =>
      seq("#", "(", optional(series_of($._constant_value, ",")), ")"),
    constant_list: ($) =>
      seq("[", optional(series_of($._constant_value, ",")), "]"),
    ...bit_string_rules("constant", "_constant_value", "integer"),
    constant_record: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
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
      seq(
        optional(seq(field("label", $.identifier), ":")),
        field("value", $._constant_value)
      ),

    /* Special constant types */
    // Versions of $._type, $._type_annotation, etc, that have constraints
    // specific to constants.
    _constant_type: ($) =>
      choice(
        $.type_hole,
        alias($.constant_tuple_type, $.tuple_type),
        alias($.constant_type, $.type)
      ),
    _constant_type_annotation: ($) => seq(":", field("type", $._constant_type)),
    constant_tuple_type: ($) =>
      seq("#", "(", optional(series_of($._constant_type, ",")), ")"),
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

    /* External types */
    public_external_type: ($) => seq("pub", $._external_type),
    external_type: ($) => $._external_type,
    _external_type: ($) => seq("external", "type", $.type_name),

    /* External functions */
    public_external_function: ($) => seq("pub", $._external_function),
    external_function: ($) => $._external_function,
    _external_function: ($) =>
      seq(
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
    function: ($) => $._function,
    _function: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        field("parameters", $.function_parameters),
        optional(seq("->", field("return_type", $._type))),
        "{",
        field("body", alias($._expression_seq, $.function_body)),
        "}"
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
      seq(field("label", $.identifier), field("name", $.discard)),
    _discard_param: ($) => field("name", $.discard),
    _labeled_name_param: ($) =>
      seq(field("label", $.identifier), field("name", $.identifier)),
    _name_param: ($) => field("name", $.identifier),
    // This method diverges from the parser's `parse_expression_seq` somewhat.
    // The parser considers all expressions after a `try` to be part of its AST
    // node, namely the "then" section. Gleam code like this:
    //
    //    try int_a = parse(a)
    //    try int_b = parse(b)
    //    Ok(int_a + int_b)
    //
    // is parsed as:
    //
    // (try
    //   pattern: (pattern)
    //   value: (call (identifier))
    //   then: (try
    //     pattern: (pattern)
    //     value: (call (identifier))
    //     then: (record (...))))
    //
    // This makes sense for the parser, but (IMO) would be more confusing for
    // users and tooling which don't think about `try`s as having a "then". Thus,
    // `try`s are essentially treated the same as any other expression.
    _expression_seq: ($) => repeat1(choice($._expression, $.try)),
    try: ($) =>
      seq(
        "try",
        field("pattern", $._pattern),
        optional($._type_annotation),
        "=",
        field("value", $._expression)
      ),
    _expression: ($) => choice($._expression_unit, $.binary_expression),
    binary_expression: ($) =>
      choice(
        prec.left(1, seq($._expression, "||", $._expression)),
        prec.left(2, seq($._expression, "&&", $._expression)),
        prec.left(3, seq($._expression, "==", $._expression)),
        prec.left(3, seq($._expression, "!=", $._expression)),
        prec.left(4, seq($._expression, "<", $._expression)),
        prec.left(4, seq($._expression, "<=", $._expression)),
        prec.left(4, seq($._expression, "<.", $._expression)),
        prec.left(4, seq($._expression, "<=.", $._expression)),
        prec.left(4, seq($._expression, ">", $._expression)),
        prec.left(4, seq($._expression, ">=", $._expression)),
        prec.left(4, seq($._expression, ">.", $._expression)),
        prec.left(4, seq($._expression, ">=.", $._expression)),
        prec.left(5, seq($._expression, "|>", $._expression)),
        prec.left(6, seq($._expression, "+", $._expression)),
        prec.left(6, seq($._expression, "+.", $._expression)),
        prec.left(6, seq($._expression, "-", $._expression)),
        prec.left(6, seq($._expression, "-.", $._expression)),
        prec.left(7, seq($._expression, "*", $._expression)),
        prec.left(7, seq($._expression, "*.", $._expression)),
        prec.left(7, seq($._expression, "/", $._expression)),
        prec.left(7, seq($._expression, "/.", $._expression)),
        prec.left(7, seq($._expression, "%", $._expression))
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
        $.tuple,
        $.list,
        alias($._expression_bit_string, $.bit_string),
        $.anonymous_function,
        $.expression_group,
        $.case,
        $.let,
        $.assert,
        $.record_update,
        $.tuple_access,
        $.field_access,
        $.function_call
      ),
    record: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
        optional(field("arguments", $.arguments))
      ),
    todo: ($) =>
      seq("todo", optional(seq("(", field("message", $.string), ")"))),
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
        field("parameters", $.function_parameters),
        optional(seq("->", field("return_type", $._type))),
        "{",
        field("body", alias($._expression_seq, $.function_body)),
        "}"
      ),
    expression_group: ($) => seq("{", $._expression_seq, "}"),
    case: ($) =>
      seq(
        "case",
        field("subjects", $.case_subjects),
        "{",
        field("clauses", $.case_clauses),
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
        alias($._case_clause_guard_binary_expression, $.binary_expression)
      ),
    _case_clause_guard_binary_expression: ($) =>
      choice(
        prec.left(
          1,
          seq(
            $._case_clause_guard_expression,
            "||",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          2,
          seq(
            $._case_clause_guard_expression,
            "&&",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          3,
          seq(
            $._case_clause_guard_expression,
            "==",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          3,
          seq(
            $._case_clause_guard_expression,
            "!=",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            "<",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            "<=",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            "<.",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            "<=.",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            ">",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            ">=",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            ">.",
            $._case_clause_guard_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._case_clause_guard_expression,
            ">=.",
            $._case_clause_guard_expression
          )
        )
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
    let: ($) => seq("let", $._assignment),
    assert: ($) => seq("assert", $._assignment),
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
          choice($.type_identifier, $.remote_type_identifier)
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
      seq(field("label", $.identifier), ":", field("value", $._expression)),
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
        $.expression_group,
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
        $.expression_group,
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
          field("field", $.identifier)
        )
      ),
    // Local functions will be denoted as "var". There's certainly an academic
    // debate to be had as to whether local functions _are_ variables, but
    // from syntax alone it is impossible to know whether a given identifier is
    // a variable or a function.
    // For similar reasons, remote functions (e.g. int.to_string) is parsed as
    // a field access (accessing field to_string on record int).
    _maybe_function_expression: ($) =>
      choice(
        $.identifier,
        $.anonymous_function,
        $.expression_group,
        $.case,
        $.tuple_access,
        $.field_access,
        $.function_call
      ),
    // Interestingly, the code that parses function arguments also parses
    // record arguments, hence the ambiguous name.
    arguments: ($) => seq("(", optional(series_of($.argument, ",")), ")"),
    argument: ($) =>
      seq(
        optional(seq(field("label", $.identifier), ":")),
        field("value", choice($.hole, $._expression))
      ),
    hole: ($) => $._discard_name,
    function_call: ($) =>
      seq(
        field("function", $._maybe_function_expression),
        field("arguments", $.arguments)
      ),
    _pattern: ($) =>
      seq(
        choice(
          $.identifier,
          $.discard,
          $.record_pattern,
          $.string,
          $.integer,
          $.float,
          $.tuple_pattern,
          alias($._pattern_bit_string, $.bit_string_pattern),
          $.list_pattern
        ),
        optional(field("assign", seq("as", $.identifier)))
      ),
    record_pattern: ($) =>
      seq(
        field("name", choice($.type_identifier, $.remote_type_identifier)),
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
      seq(
        optional(seq(field("label", $.identifier), ":")),
        field("pattern", $._pattern)
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
    list_pattern_tail: ($) => seq("..", choice($.identifier, $.discard)),

    /* Public functions */
    public_function: ($) => seq("pub", $._function),

    /* Custom type definitions */
    type_definition: ($) => seq("type", $._custom_type_definition),
    public_type_definition: ($) =>
      seq("pub", "type", $._custom_type_definition),
    public_opaque_type_definition: ($) =>
      seq("pub", "opaque", "type", $._custom_type_definition),
    _custom_type_definition: ($) =>
      seq($.type_name, "{", $.type_constructors, "}"),
    type_constructors: ($) => repeat1($.type_constructor),
    type_constructor: ($) =>
      seq(
        field("name", $.type_identifier),
        optional(field("arguments", $.type_constructor_arguments))
      ),
    type_constructor_arguments: ($) =>
      seq("(", optional(series_of($.type_constructor_argument, ",")), ")"),
    type_constructor_argument: ($) =>
      seq(
        optional(seq(field("label", $.identifier), ":")),
        field("value", $._type)
      ),

    /* Type aliases */
    type_alias: ($) => seq("type", $._type_alias),
    public_type_alias: ($) => seq("pub", "type", $._type_alias),
    public_opaque_type_alias: ($) =>
      seq("pub", "opaque", "type", $._type_alias),
    _type_alias: ($) => seq($.type_name, "=", $._type),

    /* Literals */
    string: ($) => /\"(?:\\[efnrt\"\\]|[^\"])*\"/,
    float: ($) => /-?[0-9_]+\.[0-9_]+/,
    integer: ($) =>
      seq(optional("-"), choice($._hex, $._decimal, $._octal, $._binary)),
    _hex: ($) => /0[xX][0-9a-fA-F_]+/,
    _decimal: ($) => /[0-9][0-9_]*/,
    _octal: ($) => /0[oO][0-7_]+/,
    _binary: ($) => /0[bB][0-1_]+/,
    _bit_string_segment_option_unit: ($) =>
      seq("unit", "(", alias($.integer, $.bit_string_segment_option_unit), ")"),
    _bit_string_segment_option_literal: ($) =>
      choice(
        alias("binary", $.bit_string_segment_option_binary),
        alias("bytes", $.bit_string_segment_option_binary),
        alias("int", $.bit_string_segment_option_int),
        alias("float", $.bit_string_segment_option_float),
        alias("bit_string", $.bit_string_segment_option_bit_string),
        alias("bits", $.bit_string_segment_option_bit_string),
        alias("utf8", $.bit_string_segment_option_utf8),
        alias("utf16", $.bit_string_segment_option_utf16),
        alias("utf32", $.bit_string_segment_option_utf32),
        alias("utf8_codepoint", $.bit_string_segment_option_utf8_codepoint),
        alias("utf16_codepoint", $.bit_string_segment_option_utf16_codepoint),
        alias("utf32_codepoint", $.bit_string_segment_option_utf32_codepoint),
        alias("signed", $.bit_string_segment_option_signed),
        alias("unsigned", $.bit_string_segment_option_unsigned),
        alias("big", $.bit_string_segment_option_big),
        alias("little", $.bit_string_segment_option_little),
        alias("native", $.bit_string_segment_option_native)
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
    discard: ($) => $._discard_name,
    type_identifier: ($) => $._upname,
    remote_type_identifier: ($) =>
      seq(field("module", $.identifier), ".", field("name", $.type_identifier)),

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
      choice(
        $._bit_string_segment_option_unit,
        $[`_${name}_bit_string_segment_option_size`],
        $._bit_string_segment_option_literal
      ),
    [`_${name}_bit_string_segment_option_size`]: ($) =>
      seq(
        "size",
        "(",
        alias($[arg_parser], $.bit_string_segment_option_size),
        ")"
      ),
  };
}

// Shamelessly stolen "sep1" from tree-sitter-elixir, renamed to match a similar
// function in the Gleam parser.
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de3ec57591aebf451e710fc9c984cf601258baf5/grammar.js#L817-L819
function series_of(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}
