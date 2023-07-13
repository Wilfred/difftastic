// Adapted from https://github.com/tree-sitter/tree-sitter-java/blob/master/grammar.js
const {
  ci,
  commaJoined,
  commaJoined1,
  joined,
} = require("../common/common.js");

const LANG = "apex";

// SOSL includes SOQL as a sub-type
const soslGrammar = require("../common/sosl-grammar.js")(LANG);

const DIGITS = token(joined(/_+/, /[0-9]+/));
const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT: 0, // //  /*  */
  ASSIGN: 1, // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
  SWITCH_EXP: 1, // always prefer to parse switch as expression over statement
  DECL: 2,
  ELEMENT_VAL: 2,
  TERNARY: 3, // ?:
  OR: 4, // ||
  AND: 5, // &&
  BIT_OR: 6, // |
  BIT_XOR: 7, // ^
  BIT_AND: 8, // &
  EQUALITY: 9, // ==  != <>
  GENERIC: 10,
  REL: 10, // <  <=  >  >=  instanceof
  SHIFT: 11, // <<  >>  >>>
  ADD: 12, // +  -
  MULT: 13, // *  /  %
  CAST: 14, // (Type)
  OBJ_INST: 14, // new
  UNARY: 15, // ++a  --a  a++  a--  +  -  !  ~
  ARRAY: 16, // [Index]
  OBJ_ACCESS: 16, // .
  PARENS: 16, // (Expression)
};

module.exports = grammar({
  name: LANG,

  extras: ($) => [$.line_comment, $.block_comment, /\s/],

  supertypes: ($) => [
    $.expression,
    $.declaration,
    $.statement,
    $.primary_expression,
    $._literal,
    $._type,
    $._simple_type,
    $._unannotated_type,
    $.comment,
  ],

  inline: ($) => [
    $._name,
    $._simple_type,
    $._class_body_declaration,
    $._variable_initializer,
  ],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$._unannotated_type, $.primary_expression],
    [$._unannotated_type, $.primary_expression, $.scoped_type_identifier],
    [$._unannotated_type, $.scoped_type_identifier],
    [$._unannotated_type, $.generic_type],
    [$._unannotated_type, $.type_parameter],
    [$.generic_type, $.primary_expression],
    [$._property_navigation, $.explicit_constructor_invocation],
    [$.field_access, $.method_invocation, $.expression],
    [$.map_initializer, $.array_initializer],
    [$.function_name, $.count_expression],
    [$.switch_label, $.primary_expression],
  ],

  rules: {
    //////////////////////////
    parser_output: ($) => repeat($.statement),

    // Expressions

    expression: ($) =>
      choice(
        $.assignment_expression,
        $.binary_expression,
        $.instanceof_expression,
        $.ternary_expression,
        $.update_expression,
        $.primary_expression,
        $.unary_expression,
        $.cast_expression,
        $.dml_expression,
        prec(PREC.SWITCH_EXP, $.switch_expression)
      ),

    soql_query: ($) => seq($.soql_query_body),
    sosl_query: ($) => seq($.sosl_query_body),

    query_expression: ($) => seq("[", choice($.soql_query, $.sosl_query), "]"),
    dml_expression: ($) =>
      prec.right(
        choice(
          seq($.dml_type, $.expression),
          seq(
            alias(ci("upsert"), $.dml_type),
            $.expression,
            optional($._unannotated_type)
          ),
          seq(alias(ci("merge"), $.dml_type), $.expression, " ", $.expression)
        )
      ),
    dml_type: ($) =>
      choice(ci("insert"), ci("update"), ci("delete"), ci("undelete")),
    cast_expression: ($) =>
      prec(
        PREC.CAST,
        seq("(", field("type", $._type), ")", field("value", $.expression))
      ),

    assignment_expression: ($) =>
      prec.right(
        PREC.ASSIGN,
        seq(
          field("left", choice($.identifier, $.field_access, $.array_access)),
          field(
            "operator",
            alias(
              choice(
                "=",
                "+=",
                "-=",
                "*=",
                "/=",
                "&=",
                "|=",
                "^=",
                "%=",
                "<<=",
                ">>=",
                ">>>="
              ),
              $.assignment_operator
            )
          ),
          field("right", $.expression)
        )
      ),

    binary_expression: ($) =>
      choice(
        ...[
          [">", PREC.REL],
          ["<", PREC.REL],
          [">=", PREC.REL],
          ["<=", PREC.REL],
          ["==", PREC.EQUALITY],
          ["===", PREC.EQUALITY],
          ["!=", PREC.EQUALITY],
          ["<>", PREC.EQUALITY],
          ["!==", PREC.EQUALITY],
          ["&&", PREC.AND],
          ["||", PREC.OR],
          ["+", PREC.ADD],
          ["-", PREC.ADD],
          ["*", PREC.MULT],
          ["/", PREC.MULT],
          ["&", PREC.BIT_AND],
          ["|", PREC.BIT_OR],
          ["^", PREC.BIT_XOR],
          ["%", PREC.MULT],
          ["<<", PREC.SHIFT],
          [">>", PREC.SHIFT],
          [">>>", PREC.SHIFT],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.expression),
              field("operator", operator),
              field("right", $.expression)
            )
          )
        )
      ),

    instanceof_expression: ($) =>
      prec(
        PREC.REL,
        seq(
          field("left", $.expression),
          ci("instanceof"),
          field("right", $._type)
        )
      ),

    inferred_parameters: ($) => seq("(", commaJoined1($.identifier), ")"),

    ternary_expression: ($) =>
      prec.right(
        PREC.TERNARY,
        seq(
          field("condition", $.expression),
          "?",
          field("consequence", $.expression),
          ":",
          field("alternative", $.expression)
        )
      ),

    unary_expression: ($) =>
      choice(
        ...[
          ["+", PREC.UNARY],
          ["-", PREC.UNARY],
          ["!", PREC.UNARY],
          ["~", PREC.UNARY],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(field("operator", operator), field("operand", $.expression))
          )
        )
      ),

    update_expression: ($) =>
      prec.left(
        PREC.UNARY,
        choice(
          // Post (in|de)crement is evaluated before pre (in|de)crement
          seq($.expression, "++"),
          seq($.expression, "--"),
          seq("++", $.expression),
          seq("--", $.expression)
        )
      ),

    primary_expression: ($) =>
      choice(
        $._literal,
        $.class_literal,
        $.this,
        $.identifier,
        $.parenthesized_expression,
        $.object_creation_expression,
        $.field_access,
        $.array_access,
        $.method_invocation,
        $.array_creation_expression,
        $.map_creation_expression,
        $.query_expression
      ),

    array_creation_expression: ($) =>
      prec.right(
        seq(
          ci("new"),
          field("type", $._simple_type),
          choice(
            seq(
              field("dimensions", repeat1($.dimensions_expr)),
              field("dimensions", optional($.dimensions))
            ),
            seq(
              field("dimensions", $.dimensions),
              field("value", $.array_initializer)
            ),
            seq(field("value", $.array_initializer))
          )
        )
      ),

    map_creation_expression: ($) =>
      prec.right(
        seq(
          ci("new"),
          field("type", $._simple_type),
          seq(field("value", $.map_initializer))
        )
      ),

    dimensions_expr: ($) => seq("[", $.expression, "]"),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    class_literal: ($) => seq($._unannotated_type, ".", ci("class")),

    object_creation_expression: ($) =>
      $._unqualified_object_creation_expression,

    _unqualified_object_creation_expression: ($) =>
      prec.right(
        seq(
          ci("new"),
          field("type_arguments", optional($.type_arguments)),
          field("type", $._simple_type),
          field("arguments", $.argument_list),
          optional($.class_body)
        )
      ),

    field_access: ($) =>
      seq(
        field("object", choice($.primary_expression, $.super)),
        optional(seq($._property_navigation, $.super)),
        $._property_navigation,
        field("field", choice($.identifier, $.this))
      ),

    _property_navigation: ($) => seq(optional("?"), "."),

    array_access: ($) =>
      seq(
        field("array", $.primary_expression),
        "[",
        field("index", $.expression),
        "]"
      ),

    method_invocation: ($) =>
      seq(
        choice(
          field("name", $.identifier),
          seq(
            field("object", choice($.primary_expression, $.super)),
            $._property_navigation,
            optional(seq($.super, $._property_navigation)),
            field("type_arguments", optional($.type_arguments)),
            field("name", $.identifier)
          )
        ),
        field("arguments", $.argument_list)
      ),

    argument_list: ($) => seq("(", commaJoined($.expression), ")"),

    type_arguments: ($) => seq("<", commaJoined($._type), ">"),

    dimensions: ($) => prec.right(repeat1(seq("[", "]"))),

    switch_expression: ($) =>
      seq(
        ci("switch"),
        ci("on"),
        field("condition", $.expression),
        field("body", $.switch_block)
      ),

    switch_block: ($) => seq("{", repeat1($.switch_rule), "}"),

    switch_rule: ($) => seq($.switch_label, $.block),

    switch_label: ($) =>
      seq(
        ci("when"),
        choice(
          // SObject type var syntax
          prec.right(
            commaJoined1(seq(optional($._unannotated_type), $.identifier))
          ),
          commaJoined1($.expression),
          ci("else")
        )
      ),

    // Statements

    statement: ($) =>
      choice(
        $.declaration,
        $.expression_statement,
        $.labeled_statement,
        $.if_statement,
        $.while_statement,
        $.for_statement,
        $.enhanced_for_statement,
        $.block,
        ";",
        $.do_statement,
        $.break_statement,
        $.continue_statement,
        $.return_statement,
        $.switch_expression, //switch statements and expressions are identical
        $.local_variable_declaration,
        $.throw_statement,
        $.try_statement,
        $.run_as_statement
      ),

    block: ($) => seq("{", repeat($.statement), "}"),

    expression_statement: ($) => seq($.expression, ";"),

    labeled_statement: ($) => seq($.identifier, ":", $.statement),

    do_statement: ($) =>
      seq(
        ci("do"),
        field("body", $.statement),
        ci("while"),
        field("condition", $.parenthesized_expression),
        ";"
      ),

    break_statement: ($) => seq(ci("break"), optional($.identifier), ";"),

    continue_statement: ($) => seq(ci("continue"), optional($.identifier), ";"),

    return_statement: ($) => seq(ci("return"), optional($.expression), ";"),

    throw_statement: ($) => seq(ci("throw"), $.expression, ";"),

    try_statement: ($) =>
      seq(
        ci("try"),
        field("body", $.block),
        choice(
          repeat1($.catch_clause),
          seq(repeat($.catch_clause), $.finally_clause)
        )
      ),

    catch_clause: ($) =>
      seq(
        ci("catch"),
        "(",
        $.catch_formal_parameter,
        ")",
        field("body", $.block)
      ),

    catch_formal_parameter: ($) =>
      seq(
        optional($.modifiers),
        $._unannotated_type,
        $._variable_declarator_id
      ),

    finally_clause: ($) => seq(ci("finally"), $.block),

    if_statement: ($) =>
      prec.right(
        seq(
          ci("if"),
          field("condition", $.parenthesized_expression),
          field("consequence", $.statement),
          optional(seq(ci("else"), field("alternative", $.statement)))
        )
      ),

    while_statement: ($) =>
      seq(
        ci("while"),
        field("condition", $.parenthesized_expression),
        field("body", $.statement)
      ),

    for_statement: ($) =>
      seq(
        ci("for"),
        "(",
        choice(
          field("init", $.local_variable_declaration),
          seq(commaJoined(field("init", $.expression)), ";")
        ),
        field("condition", optional($.expression)),
        ";",
        commaJoined(field("update", $.expression)),
        ")",
        field("body", $.statement)
      ),

    enhanced_for_statement: ($) =>
      seq(
        ci("for"),
        "(",
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_id,
        ":",
        field("value", $.expression),
        ")",
        field("body", $.statement)
      ),

    run_as_statement: ($) =>
      // TODO: there might be a better generic way to express this
      seq(
        ci("System.runAs"),
        field("user", $.parenthesized_expression),
        $.block
      ),

    annotation: ($) =>
      seq(
        "@",
        field("name", $._name),
        optional(field("arguments", $.annotation_argument_list))
      ),

    annotation_argument_list: ($) =>
      seq(
        "(",
        choice(
          field("value", $._element_value),
          joined(optional(","), $.annotation_key_value)
        ),
        ")"
      ),
    annotation_key_value: ($) =>
      seq(
        field("key", $.identifier),
        alias("=", $.assignment_operator),
        field("value", $._element_value)
      ),

    _element_value: ($) =>
      prec(
        PREC.ELEMENT_VAL,
        choice($.expression, $.element_value_array_initializer, $.annotation)
      ),

    element_value_array_initializer: ($) =>
      seq("{", commaJoined($._element_value), optional(","), "}"),

    // Declarations

    declaration: ($) =>
      prec(
        PREC.DECL,
        choice(
          $.class_declaration,
          $.trigger_declaration,
          $.interface_declaration,
          $.enum_declaration,
          $.method_declaration
        )
      ),

    enum_declaration: ($) =>
      seq(
        optional($.modifiers),
        ci("enum"),
        field("name", $.identifier),
        field("interfaces", optional($.interfaces)),
        field("body", $.enum_body)
      ),

    enum_body: ($) => seq("{", commaJoined($.enum_constant), "}"),

    enum_constant: ($) =>
      seq(optional($.modifiers), field("name", $.identifier)),

    class_declaration: ($) =>
      seq(
        optional($.modifiers),
        ci("class"),
        field("name", $.identifier),
        optional(field("type_parameters", $.type_parameters)),
        optional(field("superclass", $.superclass)),
        optional(field("interfaces", $.interfaces)),
        field("body", $.class_body)
      ),

    trigger_declaration: ($) =>
      seq(
        ci("trigger"),
        field("name", $.identifier),
        ci("on"),
        field("object", $.identifier),
        "(",
        field("events", commaJoined1($.trigger_event)),
        ")",
        field("body", $.trigger_body)
      ),

    trigger_event: ($) =>
      choice(
        seq(ci("before"), ci("insert")),
        seq(ci("before"), ci("update")),
        seq(ci("before"), ci("delete")),
        seq(ci("after"), ci("insert")),
        seq(ci("after"), ci("update")),
        seq(ci("after"), ci("delete")),
        seq(ci("after"), ci("undelete"))
      ),

    trigger_body: ($) => $.block,

    modifiers: ($) => repeat1(choice($.annotation, $.modifier)),

    modifier: ($) =>
      choice(
        ci("global"),
        ci("public"),
        ci("testMethod"),
        ci("protected"),
        ci("override"),
        ci("private"),
        ci("virtual"),
        ci("abstract"),
        ci("static"),
        ci("final"),
        ci("transient"),
        ci("with sharing"),
        ci("without sharing"),
        ci("inherited sharing")
      ),

    type_parameters: ($) => seq("<", commaJoined1($.type_parameter), ">"),

    type_parameter: ($) =>
      seq(
        repeat($.annotation),
        alias($.identifier, $.type_identifier),
        optional($.type_bound)
      ),

    // TODO: do we need this?
    type_bound: ($) => seq(ci("extends"), $._type, repeat(seq("&", $._type))),

    superclass: ($) => seq(ci("extends"), $._type),

    interfaces: ($) => seq(ci("implements"), $.type_list),

    type_list: ($) => seq($._type, repeat(seq(",", $._type))),

    class_body: ($) => seq("{", repeat($._class_body_declaration), "}"),

    _class_body_declaration: ($) =>
      choice(
        $.field_declaration,
        $.method_declaration,
        $.class_declaration,
        $.interface_declaration,
        $.enum_declaration,
        $.block,
        $.static_initializer,
        $.constructor_declaration,
        ";"
      ),

    static_initializer: ($) => seq(ci("static"), $.block),

    constructor_declaration: ($) =>
      seq(
        optional($.modifiers),
        $._constructor_declarator,
        field("body", $.constructor_body)
      ),

    _constructor_declarator: ($) =>
      seq(
        field("type_parameters", optional($.type_parameters)),
        field("name", $.identifier),
        field("parameters", $.formal_parameters)
      ),

    constructor_body: ($) =>
      seq(
        "{",
        optional($.explicit_constructor_invocation),
        repeat($.statement),
        "}"
      ),

    explicit_constructor_invocation: ($) =>
      seq(
        choice(
          seq(
            field("type_arguments", optional($.type_arguments)),
            field("constructor", choice($.this, $.super))
          ),
          seq(
            field("object", choice($.primary_expression)),
            ".",
            field("type_arguments", optional($.type_arguments)),
            field("constructor", $.super)
          )
        ),
        field("arguments", $.argument_list),
        ";"
      ),

    _name: ($) => choice($.identifier, $.scoped_identifier),

    scoped_identifier: ($) =>
      seq(field("scope", $._name), ".", field("name", $.identifier)),

    field_declaration: ($) =>
      seq(
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_list,
        choice($.accessor_list, ";")
      ),

    _default_value: ($) => seq("default", field("value", $._element_value)),

    interface_declaration: ($) =>
      seq(
        optional($.modifiers),
        ci("interface"),
        field("name", $.identifier),
        field("type_parameters", optional($.type_parameters)),
        optional($.extends_interfaces),
        field("body", $.interface_body)
      ),

    extends_interfaces: ($) => seq(ci("extends"), $.type_list),

    interface_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $.constant_declaration,
            $.enum_declaration,
            $.method_declaration,
            $.class_declaration,
            $.interface_declaration,
            ";"
          )
        ),
        "}"
      ),

    constant_declaration: ($) =>
      seq(
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_list,
        ";"
      ),

    _variable_declarator_list: ($) =>
      commaJoined1(field("declarator", $.variable_declarator)),

    variable_declarator: ($) =>
      seq(
        $._variable_declarator_id,
        optional(
          seq(
            alias("=", $.assignment_operator),
            field("value", $._variable_initializer)
          )
        )
      ),

    _variable_declarator_id: ($) =>
      seq(
        field("name", $.identifier),
        field("dimensions", optional($.dimensions))
      ),

    _variable_initializer: ($) => choice($.expression, $.array_initializer),

    _map_initializer: ($) => seq($.expression, "=>", $.expression),

    array_initializer: ($) =>
      seq("{", commaJoined($._variable_initializer), "}"),

    map_initializer: ($) => seq("{", commaJoined($._map_initializer), "}"),

    // Types

    _type: ($) => choice($._unannotated_type, $.annotated_type),

    _unannotated_type: ($) => choice($._simple_type, $.array_type),

    void_type: ($) => ci("void"),
    _simple_type: ($) =>
      choice(
        $.void_type,
        $.boolean_type,
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier,
        $.generic_type
      ),

    annotated_type: ($) => seq(repeat1($.annotation), $._unannotated_type),

    scoped_type_identifier: ($) =>
      seq(
        choice(
          alias($.identifier, $.type_identifier),
          $.scoped_type_identifier,
          $.generic_type
        ),
        ".",
        repeat($.annotation),
        alias($.identifier, $.type_identifier)
      ),

    generic_type: ($) =>
      prec.dynamic(
        PREC.GENERIC,
        seq(
          choice(
            alias($.identifier, $.type_identifier),
            $.scoped_type_identifier
          ),
          $.type_arguments
        )
      ),

    array_type: ($) =>
      seq(
        field("element", $._unannotated_type),
        field("dimensions", $.dimensions)
      ),

    boolean_type: ($) => "boolean",

    _method_header: ($) =>
      seq(
        optional(
          seq(field("type_parameters", $.type_parameters), repeat($.annotation))
        ),
        field("type", $._unannotated_type),
        $._method_declarator
      ),

    _method_declarator: ($) =>
      seq(
        field("name", $.identifier),
        field("parameters", $.formal_parameters),
        field("dimensions", optional($.dimensions))
      ),

    formal_parameters: ($) => seq("(", commaJoined($.formal_parameter), ")"),

    formal_parameter: ($) =>
      seq(
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_id
      ),

    local_variable_declaration: ($) =>
      seq(
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_list,
        ";"
      ),

    method_declaration: ($) =>
      seq(
        optional($.modifiers),
        $._method_header,
        choice(field("body", $.block), ";")
      ),

    this: ($) => ci("this"),

    super: ($) => ci("super"),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) => choice($.line_comment, $.block_comment),

    line_comment: ($) => token(prec(PREC.COMMENT, seq("//", /[^\n]*/))),

    block_comment: ($) =>
      token(prec(PREC.COMMENT, seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),

    accessor_list: ($) => seq("{", repeat1($.accessor_declaration), "}"),

    accessor_declaration: ($) =>
      seq(
        optional($.modifiers),
        choice(ci("get"), ci("set")),
        choice($.block, ";")
      ),

    ...soslGrammar.rules,
    // https://docs.oracle.com/javase/specs/jls/se8/html/jls-3.html#jls-IdentifierChars
    identifier: ($) => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

    // Literals

    _literal: ($) =>
      choice(
        $.int,
        $.decimal_floating_point_literal,
        $.boolean,
        $.string_literal,
        $.null_literal
      ),

    int: ($) => token(seq(DIGITS, optional(choice("l", "L")))),

    decimal_floating_point_literal: ($) =>
      token(
        choice(
          seq(
            DIGITS,
            ".",
            optional(DIGITS),
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            optional(/[fFdD]/)
          ),
          seq(
            ".",
            DIGITS,
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            optional(/[fFdD]/)
          ),
          seq(
            DIGITS,
            /[eEpP]/,
            optional(choice("-", "+")),
            DIGITS,
            optional(/[fFdD]/)
          ),
          seq(
            DIGITS,
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            /[fFdD]/
          )
        )
      ),

    string_literal: ($) => /'(\\[nNrRtTbBfFuU"'_%\\]|[^\\'])*'/,
  },
});
