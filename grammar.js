const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gleam",
  extras: ($) => [";", NEWLINE, /\s/],
  rules: {
    /* General rules */
    source_file: ($) =>
      optional(
        seq(
          series_of(choice($.target_group, $._statement), NEWLINE),
          optional(NEWLINE)
        )
      ),
    _statement: ($) =>
      choice(
        $.import,
        $.constant,
        $.public_constant,
        $.external_type,
        $.public_external_type,
        $.external_function,
        $.public_external_function,
        $.function
        /* $.public_function, */
        /* $.type, */
        /* $.public_opaque_type, */
        /* $.public_type */
      ),

    /* Target groups */
    target_group: ($) =>
      seq(
        "if",
        field("target", $.target),
        "{",
        optional(seq(series_of($._statement, NEWLINE), optional(NEWLINE))),
        "}"
      ),
    target: ($) => choice("erlang", "javascript"),

    /* Import statements */
    import: ($) =>
      seq(
        "import",
        field("module", $.module),
        optional(
          seq(
            ".",
            "{",
            $.unqualified_import,
            repeat(seq(",", $.unqualified_import)),
            "}"
          )
        ),
        optional(seq("as", field("alias", $.alias)))
      ),
    module: ($) => seq($._name, repeat(seq("/", $._name))),
    unqualified_import: ($) =>
      choice(
        seq(
          $._name,
          optional(seq("as", field("alias", alias($._name, $.alias))))
        ),
        seq(
          $._upname,
          optional(seq("as", field("alias", alias($._upname, $.alias))))
        )
      ),
    alias: ($) => $._name,

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
        alias($._constant_tuple, $.tuple),
        alias($._constant_list, $.list),
        alias($._constant_bit_string, $.bit_string),
        alias($._constant_record, $.record),
        alias($._constant_remote_record, $.remote_record)
      ),
    _constant_tuple: ($) =>
      seq("#", "(", optional(series_of($._constant_value, ",")), ")"),
    _constant_list: ($) =>
      seq("[", optional(series_of($._constant_value, ",")), "]"),
    ...bit_string_rules("constant", "_constant_value", "integer"),
    _constant_record: ($) =>
      seq(
        $._upname,
        optional(
          seq(
            "(",
            optional(
              series_of(alias($._constant_record_arg, $.record_arg), ",")
            ),
            ")"
          )
        )
      ),
    _constant_record_arg: ($) =>
      seq($._name, optional(seq(":", $._constant_value))),
    _constant_remote_record: ($) => seq($._name, ".", $._constant_record),

    /* Special constant types */
    _constant_type_annotation: ($) => seq(":", field("type", $._constant_type)),
    _constant_type: ($) =>
      choice(
        $.type_hole,
        alias($.constant_tuple_type, $.tuple_type),
        $._constant_type_name,
        $._constant_remote_type_name
      ),
    constant_tuple_type: ($) =>
      seq("#", "(", optional(series_of($._constant_type, ",")), ")"),
    _constant_type_name: ($) =>
      choice(
        alias($.constant_type_constructor, $.type_constructor),
        alias($.constant_type, $.type)
      ),
    _constant_remote_type_name: ($) =>
      seq(
        $._name,
        ".",
        choice(
          alias($.constant_type_constructor, $.remote_type_constructor),
          alias($.constant_type, $.remote_type)
        )
      ),
    constant_type_constructor: ($) =>
      seq($._upname, "(", optional(series_of($._constant_type, ",")), ")"),
    constant_type: ($) => $._upname,

    /* External types */
    public_external_type: ($) => seq("pub", $._external_type),
    external_type: ($) => $._external_type,
    _external_type: ($) =>
      seq(
        "external",
        "type",
        choice($.type, alias($.external_type_constructor, $.type_constructor))
      ),
    // TODO: Is this actually any different from the module type constructors?
    external_type_constructor: ($) =>
      seq(
        $._upname,
        seq(
          "(",
          optional(
            series_of(alias($.external_type_argument, $.type_argument), ",")
          ),
          ")"
        )
      ),
    external_type_argument: ($) => $._name,

    /* External functions */
    public_external_function: ($) => seq("pub", $._external_function),
    external_function: ($) => $._external_function,
    _external_function: ($) =>
      seq(
        "external",
        "fn",
        field("name", alias($._name, $.function_name)),
        field(
          "parameters",
          alias($.external_function_parameters, $.function_parameters)
        ),
        "->",
        field("return_type", $._type),
        "=",
        field("body", $.external_function_body)
      ),
    // TODO: Different from module function parameters?
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
      seq(
        "fn",
        field("name", $.identifier),
        optional(field("parameters", $.function_parameters)),
        optional(seq("->", field("return_type", $._type))),
        "{",
        alias($._expression_seq, $.function_body),
        "}"
      ),
    function_parameters: ($) =>
      seq("(", optional(series_of($.function_parameter, ",")), ")"),
    function_parameter: ($) =>
      seq(
        choice(
          $._labelled_discard_param,
          $._discard_param,
          $._labelled_name_param,
          $._name_param
        ),
        optional($._type_annotation)
      ),
    _labelled_discard_param: ($) =>
      seq(field("label", $.identifier), $._discard_name),
    _discard_param: ($) => $._discard_name,
    _labelled_name_param: ($) =>
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
    //     then: (type_constructor (...))))
    //
    // This makes sense for the parser, but (IMO) would be more confusing for
    // users and tooling which don't think about `try`s as having a "then". Thus,
    // `try`s are essentially treated the same as any other expression.
    _expression_seq: ($) => repeat1(choice($.try, $._expression)),
    try: ($) =>
      seq(
        "try",
        field("pattern", $._pattern),
        optional($._type_annotation),
        "=",
        field("value", $._expression)
      ),
    _pattern: ($) =>
      seq(
        choice(
          $.var,
          $.discard_var,
          $.remote_constructor_pattern,
          $.constructor_pattern,
          $.string,
          $.integer,
          $.float,
          $.tuple_pattern,
          alias($._pattern_bit_string, $.bit_string_pattern),
          $.list_pattern
        ),
        optional(field("assign", seq("as", alias($._name, $.pattern_assign))))
      ),
    _expression: ($) => "todo",
    // The way that this function is written in the Gleam parser is essentially
    // incompatible with tree-sitter. It first parses some base expression,
    // then potentially parses field access, record updates, or function calls
    // as an extension of that base expression that was previously parsed.
    // tree-sitter provides no facility to amend a node that was already
    // successfully parsed.
    //
    // Also, I was surprised to learn that "." isn't treated as an operator by
    // the parser. I believe that treating "." as a high-precedence,
    // left-associative operator will allow me to chain together tuple
    // accesses, field accesses, etc in the desirable fashion.
    //
    // Also, this new approach featuring explicit rules for tuple access, etc
    // opens the door to more strict parser checks, e.g. ensuring we're not
    // performing tuple access on an integer. It would be more work, though, so
    // we'll see how I'm feeling tomorrow.
    _expression_unit: ($) =>
      choice(
        $.string,
        $.integer,
        $.float,
        $.var,
        alias($._upname, $.record)
        // TODO: Finish base expression parsing*
        //       * Considering record update and function call as base exprs
        // TODO: Consider "." a high-precedence, left-associative operator used
        //       for tuple access, field access, constructor access, record
        //       update, and function call.
      ),
    var: ($) => $._name,
    discard_var: ($) => $._discard_name,
    remote_constructor_pattern: ($) =>
      seq($._name, ".", $._constructor_pattern),
    constructor_pattern: ($) => $._constructor_pattern,
    _constructor_pattern: ($) =>
      seq($._upname, optional($.pattern_constructor_args)),
    pattern_constructor_args: ($) =>
      seq(
        "(",
        optional(series_of($._pattern_constructor_arg, ",")),
        optional($.pattern_spread),
        ")"
      ),
    _pattern_constructor_arg: ($) =>
      choice(
        $.pattern_constructor_named_arg,
        alias($.constructor_pattern, $.pattern_constructor_unnamed_arg)
      ),
    pattern_constructor_named_arg: ($) =>
      seq($._name, ":", $.constructor_pattern),
    pattern_spread: ($) => seq("..", optional(",")),
    tuple_pattern: ($) =>
      seq("#", "(", optional(series_of($._pattern, ",")), ")"),
    // The Gleam parser has a special catch for nested bitstrings here, which
    // is interesting as the same error does not exist on constants. Anyhow, I
    // wasn't really sure how to implement that easily here, and so didn't.
    ...bit_string_rules(
      "pattern",
      "_pattern",
      "_pattern_bit_string_segment_arg"
    ),
    _pattern_bit_string_segment_arg: ($) => choice($.var, $.integer),
    list_pattern: ($) =>
      seq(
        "[",
        optional(series_of($._pattern, ",")),
        optional($.list_pattern_tail),
        "]"
      ),
    list_pattern_tail: ($) => seq("..", choice($.var, $.discard_var)),

    /* Literals */
    string: ($) => /\"(?:\\[efnrt\"\\]|[^\"])*\"/,
    float: ($) => /-?[0-9_]+\.[0-9_]+/,
    integer: ($) => /-?[0-9_]+/,
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
      choice(
        $.type_hole,
        $.tuple_type,
        $.function_type,
        $._type_name,
        $._remote_type_name,
        $.type_var
      ),
    _type_annotation: ($) => seq(":", field("type", $._type)),
    type_hole: ($) => $._discard_name,
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
    _type_name: ($) => choice($.type_constructor, $.type),
    _remote_type_name: ($) =>
      seq(
        $._name,
        ".",
        choice(
          alias($.type_constructor, $.remote_type_constructor),
          alias($.type, $.remote_type)
        )
      ),
    type_constructor: ($) =>
      seq($._upname, seq("(", optional(series_of($._type, ",")), ")")),
    type: ($) => $._upname,
    type_var: ($) => $._name,

    /* Common alias becomes a real boy */
    identifier: ($) => $._name,
    /* Reused types from the Gleam lexer */
    _discard_name: ($) => /_[_0-9a-z]*/,
    _name: ($) => /[_a-z][_0-9a-z]*/,
    _upname: ($) => /[A-Z][0-9a-zA-Z]*/,
  },
});

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
  return seq(rule, repeat(seq(separator, rule)));
}
