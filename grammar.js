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
      seq("#", "(", series_of($._constant_value, ","), ")"),
    _constant_list: ($) => seq("[", series_of($._constant_value, ","), "]"),
    _constant_bit_string: ($) =>
      seq(
        "<<",
        optional(
          series_of(
            alias($._constant_bit_string_segment, $.bit_string_segment),
            ","
          )
        ),
        ">>"
      ),
    _constant_bit_string_segment: ($) =>
      seq(
        field("value", $._constant_value),
        optional(
          field(
            "options",
            seq(
              ":",
              alias(
                $._constant_bit_string_segment_options,
                $.bit_string_segment_options
              )
            )
          )
        )
      ),
    // This is not an actual node in the Gleam AST. It only exists to allow me
    // to group the segment options together into their own list.
    _constant_bit_string_segment_options: ($) =>
      series_of($._constant_bit_string_segment_option, "-"),
    _constant_bit_string_segment_option: ($) =>
      choice(
        $._constant_bit_string_named_segment_option,
        alias($.integer, $.constant_int)
      ),
    _constant_bit_string_named_segment_option: ($) =>
      choice(
        $._bit_string_segment_option_unit,
        $._constant_bit_string_segment_option_size,
        $._bit_string_segment_option_literal
      ),
    _constant_bit_string_segment_option_size: ($) =>
      seq("size", "(", alias($.integer, $.bit_string_segment_option_size), ")"),
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
        field("name", alias($._upname, $.type_name)),
        optional(
          field("arguments", seq("(", optional($.external_type_arguments), ")"))
        )
      ),
    external_type_arguments: ($) =>
      series_of(alias($._name, $.external_type_argument), ","),

    /* External functions */
    public_external_function: ($) => seq("pub", $._external_function),
    external_function: ($) => $._external_function,
    _external_function: ($) =>
      seq(
        "external",
        "fn",
        field("name", alias($._name, $.function_name)),
        "(",
        optional(field("parameters", $.external_function_parameters)),
        ")",
        "->",
        field("return_type", $._type),
        "=",
        field("body", $.external_function_body)
      ),
    external_function_parameters: ($) =>
      series_of($.external_function_parameter, ","),
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
        "(",
        optional(field("parameters", $.function_parameters)),
        ")",
        optional(seq("->", field("return_type", $._type))),
        "{",
        "}"
      ),
    function_parameters: ($) => series_of($.function_parameter, ","),
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

    /* Literals */
    _literal: ($) =>
      choice(
        $.string,
        $.float,
        $.integer,
        $.tuple,
        $.list
        // $.bit_string,
        // $.record,
        // $.remote_record
      ),
    string: ($) => /\"(?:\\[efnrt\"\\]|[^\"])*\"/,
    float: ($) => /-?[0-9_]+\.[0-9_]+/,
    integer: ($) => /-?[0-9_]+/,
    tuple: ($) => seq("#", "(", series_of($._literal, ","), ")"),
    list: ($) => seq("[", series_of($._literal, ","), "]"),
    bit_string: ($) =>
      seq("<<", optional(series_of($.bit_string_segment, ",")), ">>"),
    bit_string_segment: ($) =>
      seq(
        $._literal,
        optional(seq(":", series_of($._bit_string_segment_option, "-")))
      ),
    _bit_string_segment_option: ($) =>
      choice($.bit_string_named_segment_option, alias($.integer, $.size)),
    bit_string_named_segment_option: ($) =>
      choice(
        $._bit_string_segment_option_unit,
        $._bit_string_segment_option_size,
        $._bit_string_segment_option_literal
      ),
    _bit_string_segment_option_unit: ($) =>
      seq("unit", "(", alias($.integer, $.bit_string_segment_option_unit), ")"),
    _bit_string_segment_option_size: ($) => seq("size", "(", $.integer, ")"),
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
        "(",
        optional(field("parameter_types", $.function_parameter_types)),
        ")",
        "->",
        field("return_type", $._type)
      ),
    function_parameter_types: ($) => series_of($._type, ","),
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

// Shamelessly stolen "sep1" from tree-sitter-elixir, renamed to match a similar
// function in the Gleam parser.
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de3ec57591aebf451e710fc9c984cf601258baf5/grammar.js#L817-L819
function series_of(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
