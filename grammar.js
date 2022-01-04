const modifiers = [
  "public",
  "private",
  "protected",
  "static",
  "final",
  "synchronized",
  "volatile",
  "transient",
  "native",
  "interface",
  "abstract",
  "bridge",
  "synthetic",
  "enum",
  "constructor",
  "varargs",
  "declared-synchronized",
];

const primitives = ["V", "Z", "B", "S", "C", "I", "J", "F", "D"];

const opcodes = [
  "nop",
  "move",
  "move/from16",
  "move/16",
  "move-wide",
  "move-wide/from16",
  "move-wide/16",
  "move-object",
  "move-object/from16",
  "move-object/16",
  "move-result",
  "move-result-wide",
  "move-result-object",
  "move-exception",
  "return-void",
  "return",
  "return-wide",
  "return-object",
  "const/4",
  "const/16",
  "const",
  "const/high16",
  "const-wide/16",
  "const-wide/32",
  "const-wide",
  "const-wide/high16",
  "const-string",
  "const-string-jumbo",
  "const-class",
  "monitor-enter",
  "monitor-exit",
  "check-cast",
  "instance-of",
  "array-length",
  "new-instance",
  "new-array",
  "filled-new-array",
  "filled-new-array-range",
  "fill-array-data",
  "throw",
  "goto",
  "goto/16",
  "goto/32",
  "packed-switch",
  "sparse-switch",
  "cmpl-float",
  "cmpg-float",
  "cmpl-double",
  "cmpg-double",
  "cmp-long",
  "if-eq",
  "if-ne",
  "if-lt",
  "if-ge",
  "if-gt",
  "if-le",
  "if-eqz",
  "if-nez",
  "if-ltz",
  "if-gez",
  "if-gtz",
  "if-lez",
  "aget",
  "aget-wide",
  "aget-object",
  "aget-boolean",
  "aget-byte",
  "aget-char",
  "aget-short",
  "aput",
  "aput-wide",
  "aput-object",
  "aput-boolean",
  "aput-byte",
  "aput-char",
  "aput-short",
  "iget",
  "iget-wide",
  "iget-object",
  "iget-boolean",
  "iget-byte",
  "iget-char",
  "iget-short",
  "iput",
  "iput-wide",
  "iput-object",
  "iput-boolean",
  "iput-byte",
  "iput-char",
  "iput-short",
  "sget",
  "sget-wide",
  "sget-object",
  "sget-boolean",
  "sget-byte",
  "sget-char",
  "sget-short",
  "sput",
  "sput-wide",
  "sput-object",
  "sput-boolean",
  "sput-byte",
  "sput-char",
  "sput-short",
  "invoke-virtual",
  "invoke-super",
  "invoke-direct",
  "invoke-static",
  "invoke-interface",
  "invoke-virtual/range",
  "invoke-super/range",
  "invoke-direct/range",
  "invoke-static/range",
  "invoke-interface-range",
  "neg-int",
  "not-int",
  "neg-long",
  "not-long",
  "neg-float",
  "neg-double",
  "int-to-long",
  "int-to-float",
  "int-to-double",
  "long-to-int",
  "long-to-float",
  "long-to-double",
  "float-to-int",
  "float-to-long",
  "float-to-double",
  "double-to-int",
  "double-to-long",
  "double-to-float",
  "int-to-byte",
  "int-to-char",
  "int-to-short",
  "add-int",
  "sub-int",
  "mul-int",
  "div-int",
  "rem-int",
  "and-int",
  "or-int",
  "xor-int",
  "shl-int",
  "shr-int",
  "ushr-int",
  "add-long",
  "sub-long",
  "mul-long",
  "div-long",
  "rem-long",
  "and-long",
  "or-long",
  "xor-long",
  "shl-long",
  "shr-long",
  "ushr-long",
  "add-float",
  "sub-float",
  "mul-float",
  "div-float",
  "rem-float",
  "add-double",
  "sub-double",
  "mul-double",
  "div-double",
  "rem-double",
  "add-int/2addr",
  "sub-int/2addr",
  "mul-int/2addr",
  "div-int/2addr",
  "rem-int/2addr",
  "and-int/2addr",
  "or-int/2addr",
  "xor-int/2addr",
  "shl-int/2addr",
  "shr-int/2addr",
  "ushr-int/2addr",
  "add-long/2addr",
  "sub-long/2addr",
  "mul-long/2addr",
  "div-long/2addr",
  "rem-long/2addr",
  "and-long/2addr",
  "or-long/2addr",
  "xor-long/2addr",
  "shl-long/2addr",
  "shr-long/2addr",
  "ushr-long/2addr",
  "add-float/2addr",
  "sub-float/2addr",
  "mul-float/2addr",
  "div-float/2addr",
  "rem-float/2addr",
  "add-double/2addr",
  "sub-double/2addr",
  "mul-double/2addr",
  "div-double/2addr",
  "rem-double/2addr",
  "add-int/lit16",
  "sub-int/lit16",
  "mul-int/lit16",
  "div-int/lit16",
  "rem-int/lit16",
  "and-int/lit16",
  "or-int/lit16",
  "xor-int/lit16",
  "add-int/lit8",
  "sub-int/lit8",
  "mul-int/lit8",
  "div-int/lit8",
  "rem-int/lit8",
  "and-int/lit8",
  "or-int/lit8",
  "xor-int/lit8",
  "shl-int/lit8",
  "shr-int/lit8",
  "ushr-int/lit8",
  "execute-inline",
  "invoke-direct-empty",
  "iget-quick",
  "iget-wide-quick",
  "iget-object-quick",
  "iput-quick",
  "iput-wide-quick",
  "iput-object-quick",
  "invoke-virtual-quick",
  "invoke-virtual-quick/range",
  "invoke-super-quick",
  "invoke-super-quick/range",
];

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

module.exports = grammar({
  name: "smali",

  extras: $ => [$.comment, /\s/],

  rules: {
    class_definition: $ =>
      seq(
        $.class_declaration,
        $.super_declaration,
        optional($.source_declaration),
        repeat($.implements_declaration),
        repeat($.annotation_definition),
        repeat(choice($.field_declaration, $.field_definition)),
        repeat($.method_definition)
      ),

    // class related
    class_declaration: $ =>
      seq(".class", $.access_modifiers, $.class_identifier),
    super_declaration: $ => seq(".super", $.class_identifier),
    source_declaration: $ => seq(".source", $.string_literal),
    implements_declaration: $ => seq(".implements", $.class_identifier),

    field_definition: $ =>
      seq($.field_declaration, optional($.annotation_definition), $.end_field),
    field_declaration: $ =>
      seq(".field", $.access_modifiers, $.field_identifier),
    end_field: _ => ".end field",

    // method related
    method_definition: $ =>
      seq(
        $.method_declaration,
        alias(repeat($._code_line), $.code_block),
        $.end_method
      ),
    method_declaration: $ =>
      seq(".method", $.access_modifiers, $.method_identifier),
    end_method: _ => ".end method",

    // annotation related
    annotation_definition: $ =>
      seq(
        $.annotation_declaration,
        repeat($.annotation_property),
        $.end_annotation
      ),
    annotation_declaration: $ =>
      seq(
        ".annotation",
        choice("system", "build", "runtime"),
        $.class_identifier
      ),
    annotation_property: $ =>
      seq(
        field("key", $.annotation_key),
        "=",
        field("value", $.annotation_value)
      ),
    annotation_key: _ => /\w+/,
    annotation_value: $ =>
      choice(
        $.number_literal,
        $.string_literal,
        $.null_literal,
        $.class_identifier,
        $.list,
        $.enum_reference
      ),
    end_annotation: _ => ".end annotation",

    // code lines
    _code_line: $ =>
      choice($.label, $._declaration, $.annotation_definition, $.statement),
    label: _ => /:[\w\d]+/,

    // statement
    statement: $ => seq($.opcode, commaSep($._statement_argument), "\n"),
    opcode: _ => choice(...opcodes),
    _statement_argument: $ =>
      choice(
        $.list,
        $.label,
        $.range,
        $.variable,
        $.parameter,
        $.array_type,
        $._identifier,
        $.string_literal,
        $.number_literal
      ),

    // code declarations
    _declaration: $ =>
      choice(
        $.line_declaration,
        $.locals_declaration,
        $.param_declaration,
        $.catch_declaration,
        $.catchall_declaration,
        $.packed_switch_declaration,
        $.sparse_switch_declaration,
        $.array_data_declaration
      ),
    line_declaration: $ => seq(".line", $.number_literal),
    locals_declaration: $ => seq(".locals", $.number_literal),
    param_declaration: $ => seq(".param", $.parameter),
    catch_declaration: $ =>
      seq(
        ".catch",
        $.class_identifier,
        "{",
        $.label,
        "..",
        $.label,
        "}",
        $.label
      ),
    catchall_declaration: $ =>
      seq(".catchall", "{", $.label, "..", $.label, "}", $.label),
    packed_switch_declaration: $ =>
      seq(
        ".packed-switch",
        $.number_literal,
        repeat($.label),
        ".end packed-switch"
      ),
    sparse_switch_declaration: $ =>
      seq(
        ".sparse-switch",
        repeat(seq($.number_literal, "->", $.label)),
        ".end sparse-switch"
      ),
    array_data_declaration: $ =>
      seq(
        ".array-data",
        $.number_literal,
        repeat($.number_literal),
        ".end array-data"
      ),

    // identifiers
    _identifier: $ =>
      choice(
        $.class_identifier,
        $.field_identifier,
        $.full_field_identifier,
        $.method_identifier,
        $.full_method_identifier
      ),
    class_identifier: _ => /L[\w\d\/\$]+;/,
    field_identifier: $ => seq(/[\w\d]+:/, $._type),
    method_identifier: $ =>
      seq(
        choice("<clinit>(", "<init>(", /[\w\d]+\(/),
        field("parameters", alias(repeat($._type), $.parameters)),
        ")",
        field("return_type", $._type)
      ),
    full_field_identifier: $ =>
      seq(choice($.class_identifier, $.array_type), "->", $.field_identifier),
    full_method_identifier: $ =>
      seq(choice($.class_identifier, $.array_type), "->", $.method_identifier),

    // types
    _type: $ => choice($.primitive_type, $.class_identifier, $.array_type),
    array_type: $ => seq("[", field("element_type", $._type)),
    primitive_type: _ => choice(...primitives),

    access_modifiers: _ => repeat1(choice(...modifiers)),
    comment: _ => token(seq("#", /.*/)),
    enum_reference: $ => seq(".enum", $.field_identifier),

    variable: _ => /v\d+/,
    parameter: _ => /p\d+/,
    list: $ =>
      seq(
        "{",
        commaSep(
          choice(
            $.number_literal,
            $.string_literal,
            $._identifier,
            $.variable,
            $.parameter
          )
        ),
        "}"
      ),
    range: $ =>
      seq(
        "{",
        choice($.variable, $.parameter, $.number_literal),
        "..",
        choice($.variable, $.parameter, $.number_literal),
        "}"
      ),

    // literals
    number_literal: _ => choice(/-?0x[\da-f]+/, /-?\d+/),
    string_literal: _ => /".*"/,
    null_literal: _ => "null",
  },
});
