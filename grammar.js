/* Copyright 2023 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />

const DecimalLiteral = /[0-9](_?[0-9])*/;
const DecimalFloatLiteral = token(
  seq(
    optional("-"),
    choice(
      seq(DecimalLiteral, ".", DecimalLiteral),
      seq(DecimalLiteral, /[eE][+-]?/, DecimalLiteral),
      seq(DecimalLiteral, ".", DecimalLiteral, /[eE][+-]?/, DecimalLiteral)
    )
  )
);
const NumericLiteral = token(
  seq(
    optional("-"),
    choice(
      DecimalLiteral,
      /0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/,
      /0[oO][0-7](_?[0-7])*/,
      /0[bB][01](_?[01])*/
    )
  )
);
const Identifier = /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/;
const CharEscapeSequence = /[rRcCnNlLfFtTvV\\"'aAbBeE]|\d+|[xX][0-9a-fA-F]{2}/;

const Templates = {
  /**
   * @template T
   * @param {GrammarSymbols<T>} $
   * @param {RuleOrLiteral} argument_list */
  call: ($, argument_list) =>
    seq(
      field("function", $._basic_expression),
      field("arguments", alias(argument_list, $.argument_list))
    ),
  /**
   * @template T
   * @param {GrammarSymbols<T>} $
   * @param {RuleOrLiteral} keyword */
  if: ($, keyword) =>
    seq(keyword, field("condition", $._expression), $._if_body),

  /**
   * @template T
   * @param {GrammarSymbols<T>} $
   * @param {RuleOrLiteral} keyword */
  proc_type: ($, keyword) =>
    prec.right(seq(keyword, Templates.proc_type_tail($))),

  /**
   * @template T
   * @param {GrammarSymbols<T>} $ */
  proc_type_tail: $ =>
    seq(
      field("parameters", optional($.parameter_declaration_list)),
      field("return_type", optional(seq(":", $.type_expression))),
      field("pragmas", optional($.pragma_list))
    ),

  /**
   * @template T
   * @param {GrammarSymbols<T>} $
   * @param {RuleOrLiteral} keyword */
  import: ($, keyword) => prec.right(seq(keyword, $._import_body)),

  /**
   * @template T
   * @param {GrammarSymbols<T>} $
   * @param {RuleOrLiteral} keyword */
  return_like: ($, keyword) =>
    prec.right(seq(keyword, optional($._expression_with_post_block))),
};
const WordOperators = {
  9: ["div", "mod", "shl", "shr"],
  5: ["in", "notin", "is", "isnot", "not", "of", "as", "from"],
  4: ["and"],
  3: ["or", "xor"],
};
const Operators = [
  "=",
  "+",
  "-",
  "*",
  "/",
  "<",
  ">",
  "@",
  "$",
  "~",
  "&",
  "%",
  "|",
  "!",
  "?",
  "^",
  ".",
  ":",
  "\\",
  // "∙",
  // "∘",
  // "×",
  // "★",
  // "⊗",
  // "⊘",
  // "⊙",
  // "⊛",
  // "⊠",
  // "⊡",
  // "∩",
  // "∧",
  // "⊓",
  // "±",
  // "⊕",
  // "⊖",
  // "⊞",
  // "⊟",
  // "∪",
  // "∨",
  // "⊔",
];
const InfixOperators = {
  R10: token(seq("^", repeat(choice(...Operators)))),
  L10: token(seq("$", repeat(choice(...Operators)))),
  L9: token(
    seq(
      choice(
        "%",
        "\\",
        "/"
        // "∙",
        // "∘",
        // "×",
        // "★",
        // "⊗",
        // "⊘",
        // "⊙",
        // "⊛",
        // "⊠",
        // "⊡",
        // "∩",
        // "∧",
        // "⊓"
      ),
      repeat(choice(...Operators))
    )
  ),
  L9Star: token(seq("*", repeat(choice(...Operators.filter(x => x != ":"))))),
  L8: token(
    seq(
      choice(
        "+",
        "-",
        "~",
        "|"
        // "±", "⊕", "⊖", "⊞", "⊟", "∪", "∨", "⊔"
      ),
      repeat(choice(...Operators))
    )
  ),
  L7: token(seq("&", repeat(choice(...Operators)))),
  L6: token(seq(".", repeat1(choice(...Operators)))),
  L5: token(
    choice(
      seq("=", repeat1(choice(...Operators))),
      seq(choice("<", ">", "!"), repeat(choice(...Operators)))
    )
  ),
  L2: token(
    choice(
      seq(":", repeat1(choice(...Operators))),
      seq(choice("@", "?"), repeat(choice(...Operators)))
    )
  ),
  L1: token(
    seq(
      repeat1(
        choice(
          ...Operators.filter(x => !["<", ">", "!", "=", "~", "?"].includes(x))
        )
      ),
      "="
    )
  ),
  L0: token(seq(repeat(choice(...Operators)), choice("=", "-", "~"), ">")),
};

module.exports = grammar({
  name: "nim",

  externals: $ => [
    $._block_comment_content,
    $._block_documentation_comment_content,
    $._long_string_quote,
    $._layout_start,
    $._layout_end,
    $._layout_terminator,
    $._layout_empty,
    // @ts-ignore: DSL not updated for literals
    ",",
    $._synchronize,
    $._invalid_layout,
    $._sigil_operator,
    $._prefix_operator,
    $._symbol_export_marker,
    $._case_of,
  ],

  extras: $ => [
    /[\n\r ]+/,
    $._synchronize,
    $.comment,
    $.documentation_comment,
    $.block_comment,
    $.block_documentation_comment,
  ],
  conflicts: $ => [
    // Conflict:
    // 'var' _symbol . ':'
    //
    // _symbol -> symbol_declaration -> var_section
    // _symbol -> _basic_expression -> var_type
    //
    // While symbol_declaration should be preferred here,
    // it gets complicated when parenthesized and tuple_construction
    // clashes, say:
    //
    //    (var x,
    //
    // Is this a tuple or an unfinished var_section?
    //
    // The solution is in the context: in type expressions,
    // this should be a tuple. In any other context, this
    // is a var section.
    //
    // Solving it using the grammar would require an another factor
    // of basic_expression into smaller parts, which is undesirable.
    [$.symbol_declaration, $._basic_expression],
  ],
  precedences: $ => [
    [
      "sigil",
      "suffix",
      "unary",
      "type_modifiers",
      "binary_10",
      "binary_9",
      "binary_8",
      "binary_7",
      "binary_6",
      "binary_5",
      "binary_4",
      "binary_3",
      "binary_2",
      "binary_1",
      "binary_0",
      $._expression,
      $._simple_expression_command_start,
      $.type_expression,
      $.pragma_expression,
    ],
    ["proc_type"],
    ["post_expr", $._basic_expression],
    ["post_expr", $._simple_expression_command_start],
    ["post_expr", $._simple_expression],
    ["post_expr", $._expression_statement],
    [$.enum_declaration, $.enum_type],
    [$.object_declaration, $.object_type],
    [$._prefix_expression, $._simple_expression_command_start],
    [$._simple_expression, $._command_expression],
    [$._expression_with_call_do, $.equal_expression],
    [$._expression, $._command_expression],
    [$._left_hand_side, $._expression],

    // Conflict:
    // _basic_expression (_simple_expression_command_start) . 'of'
    //
    // _simple_expression_command_start -> _command_expression_argument_list
    // _simple_expression_command_start -> _simple_expression
    //
    // Prefer the latter so the _simple_expression . 'of' become an infix
    [$._simple_expression, $._command_expression_argument_list],

    // Conflict:
    // _basic_expression . 'on'
    //
    // _basic_expression -> _command_expression
    // _basic_expression -> _simple_expression_command_start
    //
    // Prefer the latter to facilitate infix
    [$._simple_expression_command_start, $._command_expression],

    // Conflict:
    // discard _basic_expression _call_arrgument_list . 'do'
    //
    // -> _call_expression
    // -> _call_do_argument_list
    //
    // Prefer the latter
    [$._call_do_argument_list, $._call_expression],

    // Conflict:
    // infix_expression ':' discard _basic_expression . 'do'
    //
    // -> _simple_expression_command_start . 'do'
    // -> _call_do
    //
    // Prefer latter
    [$._call_do, $._simple_expression_command_start],

    // Conflict
    // discard _basic_expression do_block
    //
    // do_block -> _call_do_argument_list
    // do_block -> _post_expression_block
    //
    // Either works, but prefer former as it is more specific.
    [$._call_do_argument_list, $._post_expression_block],

    // Conflict
    // discard _basic_expression _call_argument_list ':'
    //
    // -> _call_expression ':'
    // -> _call_block_argument_list
    //
    // Need less to say, prefer latter
    [$._call_block_argument_list, $._call_expression],

    // Conflict
    // discard _basic_expression ':'
    //
    // -> _simple_expression_command_start ':'
    // -> _call_block
    //
    // Need less to say, prefer latter
    [$._call_block, $._simple_expression_command_start],

    // Conflict
    // when proc = discard _basic_expression _command_expression_argument_list . ':'
    //
    // -> _command_expression . ':'
    // -> _basic_expression _command_block_argument_list
    //
    // Prefer latter
    [$._command_block_argument_list, $._command_expression],

    // Conflict:
    // type type_symbol_declaration '=' _type_modifier _basic_expression . 'func'
    //
    // _basic_expression . 'func' -> _command_statement
    // _basic_expression . 'func' -> _simple_expression_command_start . 'func'
    //
    // Prefer latter
    [$._simple_expression_command_start, $._command_statement],
    [$._simple_expression_command_start, $._command_complex_expression],

    // Conflict:
    // _basic_expression _expression_with_call_do . ';'
    //
    // -> _command_complex_expression_argument_list
    // -> _equal_expression_list
    //
    // Prefer latter since it's more flexible
    [$._equal_expression_list, $._command_complex_expression_argument_list],

    // Conflict:
    // _proc_type . '='
    //
    // -> (_basic_expression _proc_type) . '='
    // -> (proc_expression _proc_type) . '=' statement_list
    //
    // Prefer latter
    ["proc_expr", $._basic_expression],

    // Conflict:
    // 'type' type_symbol_declaration '=' 'distinct' type_expression
    //
    // type_expression -> _type_definition
    // 'distinct' type_expression -> distinct_type
    //
    // Prefer former since it's more flexible
    [$._type_definition, "type_modifiers"],
  ],
  // supertypes: $ => [$._statement, $._expression],
  word: $ => $.identifier,

  rules: {
    source_file: $ => optional($._semi_statement_list),
    statement_list: $ =>
      choice($._block_statement_list, $._line_statement_list, $._layout_empty),

    _line_statement_list: $ => prec.right(sep1($._simple_statement, ";")),
    _block_statement_list: $ =>
      seq($._layout_start, optional($._semi_statement_list), $._layout_end),

    _semi_statement_list: $ =>
      repeat1(seq($._statement, choice(";", $._layout_terminator))),

    _statement: $ => choice($._simple_statement, $._complex_statement),
    _complex_statement: $ =>
      choice($.while, $.static_statement, $.defer, $._declaration),
    _simple_statement: $ =>
      choice($._expression_statement, $._simple_statement_no_expression),
    _simple_statement_no_expression: $ =>
      choice(
        $.import_statement,
        $.import_from_statement,
        $.export_statement,
        $.include_statement,
        $.discard_statement,
        $.return_statement,
        $.raise_statement,
        $.yield_statement,
        $.break_statement,
        $.continue_statement,
        $.assembly_statement,
        $.bind_statement,
        $.mixin_statement,
        $.pragma_statement
      ),
    _expression_statement: $ =>
      choice(
        $._expression,
        $.assignment,
        alias($._call_extended, $.call),
        alias($._infix_extended, $.infix_expression),
        alias($._prefix_extended, $.prefix_expression)
      ),

    import_statement: $ => Templates.import($, keyword("import")),
    export_statement: $ => Templates.import($, keyword("export")),
    _import_body: $ => choice($.expression_list, $._import_except),
    _import_except: $ => seq($._expression, $.except_clause),
    except_clause: $ => seq(keyword("except"), $.expression_list),

    include_statement: $ => seq(keyword("include"), $.expression_list),
    discard_statement: $ => Templates.return_like($, keyword("discard")),
    return_statement: $ => Templates.return_like($, keyword("return")),
    raise_statement: $ => Templates.return_like($, keyword("raise")),
    yield_statement: $ => Templates.return_like($, keyword("yield")),
    break_statement: $ => Templates.return_like($, keyword("break")),
    continue_statement: $ => Templates.return_like($, keyword("continue")),
    assembly_statement: $ =>
      seq(
        keyword("asm"),
        optional(field("pragma", $.pragma_list)),
        $.string_literal
      ),
    bind_statement: $ => seq(keyword("bind"), $.expression_list),
    mixin_statement: $ => seq(keyword("mixin"), $.expression_list),
    import_from_statement: $ =>
      seq(
        // Don't ask me why, but lowering the precedence makes it
        // matches correctly.
        keyword("from", 0),
        field("module", $._expression),
        keyword("import"),
        $.expression_list
      ),

    while: $ =>
      seq(
        keyword("while"),
        field("condition", $._simple_expression),
        ":",
        field("body", $.statement_list)
      ),
    static_statement: $ =>
      seq(keyword("static"), ":", field("body", $.statement_list)),
    pragma_statement: $ =>
      prec.right(
        seq($.pragma_list, optional(seq(":", field("body", $.statement_list))))
      ),
    defer: $ => seq(keyword("defer"), ":", field("body", $.statement_list)),

    _declaration: $ =>
      choice(
        $.proc_declaration,
        $.func_declaration,
        $.method_declaration,
        $.iterator_declaration,
        $.macro_declaration,
        $.template_declaration,
        $.converter_declaration,
        $.using_section,
        $.const_section,
        $.let_section,
        $.var_section,
        $.type_section
      ),

    proc_declaration: $ => seq(keyword("proc"), $._routine_declaration),
    func_declaration: $ => seq(keyword("func"), $._routine_declaration),
    method_declaration: $ => seq(keyword("method"), $._routine_declaration),
    iterator_declaration: $ => seq(keyword("iterator"), $._routine_declaration),
    macro_declaration: $ => seq(keyword("macro"), $._routine_declaration),
    template_declaration: $ => seq(keyword("template"), $._routine_declaration),
    converter_declaration: $ =>
      seq(keyword("converter"), $._routine_declaration),

    _routine_declaration: $ =>
      seq(
        field("name", choice($._symbol, $.exported_symbol)),
        field("rewrite_pattern", optional($.term_rewriting_pattern)),
        field("generic_parameters", optional($.generic_parameter_list)),
        Templates.proc_type_tail($),
        field("body", optional(seq("=", $.statement_list)))
      ),
    generic_parameter_list: $ => seq("[", $._parameter_declaration_list, "]"),
    term_rewriting_pattern: $ => seq("{", $._statement, "}"),

    using_section: $ => seq(keyword("using"), $._variable_declaration_section),
    const_section: $ => seq(keyword("const"), $._variable_declaration_section),
    let_section: $ => seq(keyword("let"), $._variable_declaration_section),
    var_section: $ =>
      // Prefer the interpretation of var section over var_type
      prec.dynamic(1, seq(keyword("var"), $._variable_declaration_section)),
    _variable_declaration_section: $ => section($, $.variable_declaration),
    variable_declaration: $ =>
      choice(
        seq(
          $.symbol_declaration_list,
          field("type", seq(":", $.type_expression)),
          field("value", optional(seq("=", $._expression_with_post_block)))
        ),
        seq(
          $.symbol_declaration_list,
          field("value", seq("=", $._expression_with_post_block))
        )
      ),

    type_section: $ => seq(keyword("type"), section($, $.type_declaration)),
    type_declaration: $ =>
      seq($.type_symbol_declaration, "=", $._type_definition),
    type_symbol_declaration: $ =>
      seq(
        field("name", choice($._symbol, $.exported_symbol)),
        optional($.generic_parameter_list),
        optional(field("pragma", $.pragma_list))
      ),
    _type_definition: $ =>
      choice(
        $.type_expression,
        $.enum_declaration,
        $.object_declaration,
        $.concept_declaration,
        alias($._distinct_declaration, $.distinct_type),
        alias($._ref_declaration, $.ref_type),
        alias($._pointer_declaration, $.pointer_type),
        alias($._tuple_declaration, $.tuple_type),
        alias($._call_extended, $.call)
      ),

    _distinct_declaration: $ => seq(keyword("distinct"), $._type_definition),
    _ref_declaration: $ => seq(keyword("ref"), $._type_definition),
    _pointer_declaration: $ => seq(keyword("ptr"), $._type_definition),

    enum_declaration: $ =>
      seq(
        keyword("enum"),
        section($, repeat1(seq($.enum_field_declaration, optional(","))))
      ),
    enum_field_declaration: $ =>
      prec.right(
        seq(
          $.symbol_declaration,
          // This should be _expression proper, but doing so inflates
          // the parser states to unusable.
          optional(seq("=", field("value", $._expression)))
        )
      ),
    _tuple_declaration: $ =>
      seq(
        keyword("tuple"),
        seq(
          $._layout_start,
          repeat1(
            seq(
              alias($._identifier_declaration, $.field_declaration),
              $._layout_terminator
            )
          ),
          $._layout_end
        )
      ),
    object_declaration: $ =>
      seq(
        keyword("object"),
        optional(field("pragma", $.pragma_list)),
        optional(seq(keyword("of"), field("inherits", $.type_expression))),
        optional(
          alias($._object_field_declaration_list, $.field_declaration_list)
        )
      ),

    _object_field_declaration_branch_list: $ =>
      choice(
        $._object_field_declaration,
        $._object_field_declaration_list,
        $._layout_empty
      ),
    _object_field_declaration_list: $ =>
      seq(
        $._layout_start,
        repeat1(seq($._object_field_declaration, $._layout_terminator)),
        $._layout_end
      ),
    _object_field_declaration: $ =>
      choice(
        alias($._identifier_declaration, $.field_declaration),
        $.conditional_declaration,
        $.variant_declaration,
        $.nil_literal,
        alias(keyword("discard"), $.discard_statement)
      ),

    conditional_declaration: $ =>
      prec.right(
        seq(
          keyword("when"),
          field("condition", $._expression),
          ":",
          field(
            "consequence",
            alias(
              $._object_field_declaration_branch_list,
              $.field_declaration_list
            )
          ),
          repeat(
            field(
              "alternative",
              choice(
                alias($._elif_declaration_branch, $.elif_branch),
                alias($._else_declaration_branch, $.else_branch)
              )
            )
          )
        )
      ),
    _elif_declaration_branch: $ =>
      seq(
        keyword("elif"),
        field("condition", $._expression),
        ":",
        field(
          "consequence",
          alias(
            $._object_field_declaration_branch_list,
            $.field_declaration_list
          )
        )
      ),
    variant_declaration: $ => seq(keyword("case"), $._variant_declaration_body),
    _variant_declaration_body: $ =>
      prec.right(
        seq(
          $.variant_discriminator_declaration,
          optional(":"),
          repeat(alias($._of_declaration_branch, $.of_branch)),
          optional(alias($._else_declaration_branch, $.else_branch))
        )
      ),
    variant_discriminator_declaration: $ => $._identifier_declaration,
    _of_declaration_branch: $ =>
      seq(
        alias($._case_of, "of"),
        field("values", $.expression_list),
        ":",
        alias($._object_field_declaration_branch_list, $.field_declaration_list)
      ),
    _else_declaration_branch: $ =>
      seq(
        keyword("else"),
        ":",
        alias($._object_field_declaration_branch_list, $.field_declaration_list)
      ),

    concept_declaration: $ =>
      seq(
        keyword("concept"),
        field(
          "parameters",
          optional(alias($._concept_parameter_list, $.parameter_list))
        ),
        optional(seq(keyword("of"), field("refines", $.refinement_list))),
        field("body", alias($._block_statement_list, $.statement_list))
      ),
    refinement_list: $ => sep1($.type_expression, ","),
    _concept_parameter_list: $ => sep1($._concept_parameter, ","),
    _concept_parameter: $ =>
      choice(
        $._symbol,
        alias($._concept_pointer_parameter, $.pointer_parameter),
        alias($._concept_ref_parameter, $.ref_parameter),
        alias($._concept_static_parameter, $.static_parameter),
        alias($._concept_type_parameter, $.type_parameter),
        alias($._concept_var_parameter, $.var_parameter)
      ),
    _concept_pointer_parameter: $ => seq(keyword("ptr"), $._symbol),
    _concept_ref_parameter: $ => seq(keyword("ref"), $._symbol),
    _concept_static_parameter: $ => seq(keyword("static"), $._symbol),
    _concept_type_parameter: $ => seq(keyword("type"), $._symbol),
    _concept_var_parameter: $ => seq(keyword("var"), $._symbol),

    _expression_with_post_block: $ =>
      choice(
        $._expression_with_call_do,
        alias($._call_block, $.call),
        alias($._command_block, $.call),
        alias($._dot_generic_call_block, $.dot_generic_call),
        alias($._infix_extended, $.infix_expression),
        alias($._prefix_extended, $.prefix_expression)
      ),
    _expression_with_call_do: $ =>
      choice(
        $._expression,
        alias($._call_do, $.call),
        alias($._command_complex_expression, $.call),
        alias($._dot_generic_call_do, $.dot_generic_call)
      ),
    _expression: $ =>
      choice(
        $._simple_expression,
        $.proc_expression,
        $.func_expression,
        $.iterator_expression,
        $.block,
        $.if,
        $.when,
        $.case,
        $.try,
        $.for
      ),
    _simple_expression: $ =>
      choice(
        $._simple_expression_command_start,
        alias($._prefix_expression, $.prefix_expression)
      ),
    _simple_expression_command_start: $ =>
      choice(
        $._basic_expression,
        alias($._command_expression, $.call),
        alias($._infix_expression, $.infix_expression),
        alias($._prefix_expression_command_start, $.prefix_expression)
      ),
    _basic_expression: $ =>
      choice(
        $._literal,
        $._symbol,
        $.array_construction,
        $.curly_construction,
        $.tuple_construction,
        $.cast,
        $.parenthesized,
        $.dot_expression,
        $.bracket_expression,
        $.curly_expression,
        $.generalized_string,
        $.pragma_expression,
        $.object_type,
        $.tuple_type,
        $.enum_type,
        $.var_type,
        $.out_type,
        $.distinct_type,
        $.ref_type,
        $.pointer_type,
        $.dot_generic_call,
        alias($._proc_type, $.proc_type),
        alias($._iterator_type, $.iterator_type),
        alias($._call_expression, $.call),
        alias($._sigil_expression, $.prefix_expression)
      ),

    /* Structural */
    for: $ =>
      seq(
        keyword("for"),
        field("left", $.symbol_declaration_list),
        keyword("in"),
        field("right", $._expression),
        ":",
        field("body", $.statement_list)
      ),
    block: $ =>
      seq(
        keyword("block"),
        optional(field("label", $._symbol)),
        ":",
        field("body", $.statement_list)
      ),
    if: $ => Templates.if($, keyword("if")),
    when: $ => Templates.if($, keyword("when")),
    _if_body: $ =>
      prec.right(
        seq(
          ":",
          field("consequence", $.statement_list),
          field("alternative", repeat($._if_branch))
        )
      ),
    _if_branch: $ => choice($.elif_branch, $.else_branch),

    case: $ => seq(keyword("case"), $._case_body),
    _case_body: $ =>
      prec.right(
        seq(
          field("value", $._expression),
          optional(":"),
          repeat($.of_branch),
          repeat($.elif_branch),
          optional($.else_branch)
        )
      ),

    try: $ =>
      seq(keyword("try"), ":", field("body", $.statement_list), $._try_tail),
    _try_tail: $ => prec.right(repeat1($._try_branch)),
    _try_branch: $ => choice($.except_branch, $.finally_branch),

    of_branch: $ =>
      seq(
        alias($._case_of, "of"),
        field("values", $.expression_list),
        ":",
        $.statement_list
      ),
    elif_branch: $ =>
      seq(
        keyword("elif"),
        field("condition", $._expression),
        ":",
        field("consequence", $.statement_list)
      ),
    else_branch: $ => seq(keyword("else"), ":", $.statement_list),
    except_branch: $ =>
      seq(
        keyword("except"),
        optional(field("values", $.expression_list)),
        ":",
        $.statement_list
      ),
    finally_branch: $ => seq(keyword("finally"), ":", $.statement_list),
    do_block: $ =>
      seq(
        keyword("do"),
        field("parameters", optional($.parameter_declaration_list)),
        field("return_type", optional(seq("->", $.type_expression))),
        field("pragmas", optional($.pragma_list)),
        ":",
        field("body", $.statement_list)
      ),

    /* Call expressions */
    _call_extended: $ =>
      choice($._command_statement, $._call_block, $._dot_generic_call_block),
    _command_statement: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._command_statement_argument_list, $.argument_list)
      ),
    _command_statement_argument_list: $ =>
      prec.right(
        seq(
          $._equal_expression_list,
          optional(
            seq(":", $.statement_list, optional($._post_expression_block_tail))
          )
        )
      ),
    _command_block: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._command_block_argument_list, $.argument_list)
      ),
    _command_block_argument_list: $ =>
      prec.right(
        seq(
          $._command_expression_argument_list,
          ":",
          $.statement_list,
          optional($._post_expression_block_tail)
        )
      ),
    _dot_generic_call_block: $ =>
      seq(
        $._dot_generic_head,
        alias($._call_block_argument_list, $.argument_list)
      ),
    _call_block: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._call_block_argument_list, $.argument_list)
      ),
    _call_block_argument_list: $ =>
      seq(optional($._call_argument_list), $._post_expression_block),
    _dot_generic_call_do: $ =>
      seq(
        $._dot_generic_head,
        alias($._call_do_argument_list, $.argument_list)
      ),
    _call_do: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._call_do_argument_list, $.argument_list)
      ),
    _call_do_argument_list: $ =>
      prec.right(
        seq(
          optional($._call_argument_list),
          $.do_block,
          optional($._post_expression_block_tail)
        )
      ),
    _call_expression: $ =>
      prec(
        "suffix",
        seq(
          field("function", $._basic_expression),
          alias($._call_argument_list, $.argument_list)
        )
      ),
    _call_argument_list: $ =>
      seq(token.immediate("("), optional($._colon_equal_expression_list), ")"),
    _command_complex_expression: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._command_complex_expression_argument_list, $.argument_list)
      ),
    _command_complex_expression_argument_list: $ => $._expression_with_call_do,
    _command_expression: $ =>
      seq(
        field("function", $._basic_expression),
        alias($._command_expression_argument_list, $.argument_list)
      ),
    _command_expression_argument_list: $ =>
      choice($._simple_expression_command_start),
    dot_generic_call: $ =>
      prec.right(
        seq(
          $._dot_generic_head,
          optional(alias($._call_argument_list, $.argument_list))
        )
      ),
    _dot_generic_head: $ =>
      prec(
        "suffix",
        seq(
          field("first_argument", $._basic_expression),
          ".",
          field("function", $._symbol),
          field(
            "generic_arguments",
            alias($._dot_generic_argument_list, $.generic_argument_list)
          )
        )
      ),
    _dot_generic_argument_list: $ =>
      seq(token.immediate("[:"), sep1($._expression, ","), "]"),
    _post_expression_block: $ =>
      prec.right(
        seq(
          choice(seq(":", $.statement_list), $.do_block),
          optional($._post_expression_block_tail)
        )
      ),
    _post_expression_block_tail: $ =>
      repeat1(
        seq(choice($._if_branch, $.of_branch, $._try_branch, $.do_block))
      ),

    /* Routine expressions */
    proc_expression: $ =>
      prec(
        "proc_expr",
        seq($._proc_type, "=", field("body", $.statement_list))
      ),
    func_expression: $ =>
      prec(
        "proc_expr",
        seq($._func_type, "=", field("body", $.statement_list))
      ),
    iterator_expression: $ =>
      prec(
        "proc_expr",
        seq($._iterator_type, "=", field("body", $.statement_list))
      ),

    /* Type expressions */
    type_expression: $ => choice($._simple_expression),
    object_type: () => keyword("object"),
    enum_type: () => keyword("enum"),
    tuple_type: $ =>
      prec.right(
        seq(
          keyword("tuple"),
          optional(
            alias($._tuple_field_declaration_list, $.field_declaration_list)
          )
        )
      ),
    var_type: $ =>
      prec.right(
        "type_modifiers",
        seq(keyword("var"), optional($.type_expression))
      ),
    out_type: $ =>
      prec.right(
        "type_modifiers",
        seq(keyword("out"), optional($.type_expression))
      ),
    distinct_type: $ =>
      prec.right(
        "type_modifiers",
        seq(keyword("distinct"), optional($.type_expression))
      ),
    ref_type: $ =>
      prec.right(
        "type_modifiers",
        seq(keyword("ref"), optional($.type_expression))
      ),
    pointer_type: $ =>
      prec.right(
        "type_modifiers",
        seq(keyword("ptr"), optional($.type_expression))
      ),
    _tuple_field_declaration_list: $ =>
      seq(choice("[", token.immediate("[")), $._field_declaration_list, "]"),

    _proc_type: $ => Templates.proc_type($, keyword("proc")),
    _iterator_type: $ => Templates.proc_type($, keyword("iterator")),
    // Only used to make func_expression
    _func_type: $ => Templates.proc_type($, keyword("func")),

    _infix_extended: $ =>
      prec("post_expr", seq($._infix_expression, $._post_expression_block)),
    _infix_expression: $ =>
      choice(
        .../** @type {[Rule, string, Function][]} */ ([
          [$._infix_operator_10r, "binary_10", prec.right],
          [$._infix_operator_10l, "binary_10", prec.left],
          [$._infix_operator_9, "binary_9", prec.left],
          [$._infix_operator_9_star, "binary_9", prec.left],
          [
            choice(...WordOperators[9].map(x => keyword(x))),
            "binary_9",
            prec.left,
          ],
          [$._infix_operator_8, "binary_8", prec.left],
          [$._infix_operator_7, "binary_7", prec.left],
          [$._infix_operator_6, "binary_6", prec.left],
          [$._infix_operator_5, "binary_5", prec.left],
          [
            choice(
              ...WordOperators[5].filter(x => x != "not").map(x => keyword(x))
            ),
            "binary_5",
            prec.left,
          ],
          [
            choice(...WordOperators[4].map(x => keyword(x))),
            "binary_4",
            prec.left,
          ],
          [
            choice(...WordOperators[3].map(x => keyword(x))),
            "binary_3",
            prec.left,
          ],
          [$._infix_operator_2, "binary_2", prec.left],
          [$._infix_operator_1, "binary_1", prec.left],
          [$._infix_operator_0, "binary_0", prec.left],
        ]).map(([operator, precedence, precFn]) =>
          precFn(
            precedence,
            seq(
              field("left", $._simple_expression),
              field("operator", operator),
              field("right", $._simple_expression)
            )
          )
        )
      ),
    _infix_operator_0: $ => alias(InfixOperators.L0, $.operator),
    _infix_operator_1: $ => alias(InfixOperators.L1, $.operator),
    _infix_operator_10r: $ => alias(InfixOperators.R10, $.operator),
    _infix_operator_10l: $ => alias(InfixOperators.L10, $.operator),
    _infix_operator_9: $ => alias(InfixOperators.L9, $.operator),
    _infix_operator_9_star: $ => alias(InfixOperators.L9Star, $.operator),
    _infix_operator_8: $ => alias(InfixOperators.L8, $.operator),
    _infix_operator_7: $ => alias(InfixOperators.L7, $.operator),
    _infix_operator_6: $ => alias(InfixOperators.L6, $.operator),
    _infix_operator_5: $ => alias(InfixOperators.L5, $.operator),
    _infix_operator_2: $ => alias(InfixOperators.L2, $.operator),

    _prefix_extended: $ =>
      prec("post_expr", seq($._prefix_expression, $._post_expression_block)),
    _prefix_expression: $ =>
      choice($._prefix_expression_command_start, $._prefix_expression_word),
    _prefix_expression_word: $ =>
      prec.left(
        "unary",
        seq(
          field(
            "operator",
            choice(
              ...Object.values(WordOperators)
                .flat()
                .filter(x => x !== "not")
                .map(x => keyword(x))
            )
          ),
          $._simple_expression
        )
      ),
    _prefix_expression_command_start: $ =>
      choice(
        .../** @type {[Rule, string][]} */ ([
          [alias($._prefix_operator, $.operator), "unary"],
          [keyword("not"), "unary"],
          [alias($._sigil_operator, $.operator), "sigil"],
        ]).map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(field("operator", operator), $._simple_expression)
          )
        )
      ),
    _sigil_expression: $ =>
      prec.left(
        "sigil",
        seq(
          field("operator", alias($._sigil_operator, $.operator)),
          $._basic_expression
        )
      ),
    // Prefix operators are intentionally defined with lower lexical priority.
    // When lexed within a prefix-only context, these will always match.
    // When lexed in a context where infix and prefix might conflict, infix
    // always take priority unless the external scanner override this.
    //
    // This allows us to disambiguate these scenarios:
    //   foo+bar as infix
    //   foo +bar as (command (prefix))
    _sigil_operator: () => token(seq("@", repeat(choice(...Operators)))),
    _prefix_operator: () =>
      token(prec(-1, choice(...Object.values(InfixOperators)))),

    /* Primitive expressions */
    cast: $ =>
      seq(
        keyword("cast"),
        field("type", optional(seq("[", $.type_expression, "]"))),
        field("value", seq("(", choice($._expression, $.colon_expression), ")"))
      ),
    parenthesized: $ =>
      choice(
        seq(
          "(",
          choice(
            $._expression_with_call_do,
            $._simple_statement_no_expression,
            $.assignment,
            $.const_section,
            $.var_section,
            $.let_section,
            $.while
          ),
          repeat(seq(";", $._statement)),
          optional(";"),
          ")"
        ),
        seq("(", ";", sep1($._statement, ";"), optional(";"), ")")
      ),
    dot_expression: $ =>
      prec(
        "suffix",
        seq(field("left", $._basic_expression), ".", field("right", $._symbol))
      ),
    bracket_expression: $ =>
      prec(
        "suffix",
        seq(
          field("left", $._basic_expression),
          token.immediate("["),
          field(
            "right",
            optional(alias($._colon_equal_expression_list, $.argument_list))
          ),
          "]"
        )
      ),
    curly_expression: $ =>
      prec(
        "suffix",
        seq(
          field("left", $._basic_expression),
          token.immediate("{"),
          field(
            "right",
            optional(alias($._colon_equal_expression_list, $.argument_list))
          ),
          "}"
        )
      ),
    pragma_expression: $ =>
      seq(field("left", $._basic_expression), field("right", $.pragma_list)),

    /* Literal construction */
    array_construction: $ =>
      seq("[", optional($._colon_equal_expression_list), "]"),
    curly_construction: $ =>
      choice(
        seq("{", $._colon_equal_expression_list, "}"),
        seq("{", optional(":"), "}")
      ),
    tuple_construction: $ =>
      choice(seq("(", optional($._colon_equal_expression_list), ")")),
    generalized_string: $ =>
      seq(
        choice($.identifier, $.dot_expression),
        alias($._generalized_string_literal, $.string_literal)
      ),
    _generalized_string_literal: $ =>
      choice(
        seq(
          token.immediate('"""'),
          optional(alias($._long_string_body, $.string_content)),
          token.immediate('"""')
        ),
        seq(
          token.immediate('"'),
          optional(alias($._raw_string_body, $.string_content)),
          token.immediate('"')
        )
      ),

    /* Supporting expressions */
    pragma_list: $ =>
      seq("{.", optional($._colon_equal_expression_list), choice(".}", "}")),
    expression_list: $ => prec.right(sep1(choice($._expression), ",")),
    _equal_expression_list: $ =>
      prec.right(
        sep1(choice($._expression_with_call_do, $.equal_expression), ",")
      ),
    _colon_equal_expression_list: $ =>
      prec.right(
        seq(
          sep1(
            choice(
              $._expression_with_call_do,
              $.colon_expression,
              $.equal_expression
            ),
            ","
          ),
          optional(",")
        )
      ),
    colon_expression: $ =>
      seq(field("left", $._left_hand_side), ":", field("right", $._expression)),
    equal_expression: $ =>
      seq(field("left", $._left_hand_side), "=", field("right", $._expression)),
    assignment: $ =>
      seq(
        field("left", $._left_hand_side),
        "=",
        field("right", $._expression_with_post_block)
      ),
    _left_hand_side: $ => $._simple_expression,

    /* Symbol/identifier declaration */
    parameter_declaration_list: $ =>
      seq(
        choice("(", token.immediate("(")),
        optional($._parameter_declaration_list),
        ")"
      ),
    _parameter_declaration_list: $ =>
      seq(
        sep1(
          alias($._identifier_declaration, $.parameter_declaration),
          choice(",", ";")
        ),
        optional(choice(",", ";"))
      ),
    _field_declaration_list: $ =>
      seq(
        sep1(
          alias($._identifier_declaration, $.field_declaration),
          choice(",", ";")
        ),
        optional(choice(",", ";"))
      ),
    _identifier_declaration: $ =>
      prec.right(
        seq(
          $.symbol_declaration_list,
          field("type", optional(seq(":", $.type_expression))),
          field("value", optional(seq("=", $._expression_with_post_block)))
        )
      ),
    symbol_declaration_list: $ =>
      prec.right(
        seq(
          sep1(
            choice($.symbol_declaration, $.tuple_deconstruct_declaration),
            ","
          ),
          optional(",")
        )
      ),
    tuple_deconstruct_declaration: $ =>
      seq(
        "(",
        sep1(
          choice($.symbol_declaration, $.tuple_deconstruct_declaration),
          ","
        ),
        optional(","),
        ")"
      ),
    symbol_declaration: $ =>
      seq(
        field("name", choice($._symbol, $.exported_symbol)),
        optional($.pragma_list)
      ),
    exported_symbol: $ => seq($._symbol, alias($._symbol_export_marker, "*")),
    _symbol_export_marker: () => "*",

    /* Literals */
    _literal: $ =>
      choice(
        $.nil_literal,
        $.integer_literal,
        $.float_literal,
        $.custom_numeric_literal,
        $.char_literal,
        $.string_literal
      ),

    nil_literal: () => keyword("nil"),

    integer_literal: () =>
      token(seq(NumericLiteral, optional(/'?[iIuU](8|16|32|64)|[uU]/))),

    float_literal: () => {
      const FloatSuffix = /'?[fFdD](32|64|128)?/;

      return token(
        choice(
          seq(NumericLiteral, FloatSuffix),
          seq(DecimalFloatLiteral, optional(FloatSuffix))
        )
      );
    },

    custom_numeric_literal: () =>
      token(seq(choice(NumericLiteral, DecimalFloatLiteral), "'", Identifier)),

    char_literal: $ =>
      seq(
        "'",
        choice(
          token.immediate(prec(2, /[^\\\n\r']/)),
          alias($._char_escape_sequence, $.escape_sequence)
        ),
        token.immediate("'")
      ),
    _char_escape_sequence: () => token.immediate(seq("\\", CharEscapeSequence)),

    string_literal: $ =>
      choice(
        $._interpreted_string_literal,
        $._raw_string_literal,
        $._long_string_literal
      ),

    _interpreted_string_literal: $ =>
      seq(
        '"',
        optional(alias($._interpreted_string_body, $.string_content)),
        token.immediate('"')
      ),
    _interpreted_string_body: $ =>
      repeat1(
        choice(token.immediate(prec(2, /[^\n\r"\\]+/)), $.escape_sequence)
      ),

    escape_sequence: () =>
      token.immediate(
        seq(
          "\\",
          choice(
            CharEscapeSequence,
            /[pP]/,
            /[uU]([0-9a-fA-F]{4}|\{[0-9a-fA-F]+\})/
          )
        )
      ),

    _raw_string_literal: $ =>
      seq(
        choice('r"', 'R"'),
        optional(alias($._raw_string_body, $.string_content)),
        token.immediate('"')
      ),

    _raw_string_body: $ =>
      repeat1(
        choice(
          token.immediate(prec(2, /[^\n\r"]/)),
          alias($._raw_string_escape, $.escape_sequence)
        )
      ),
    _raw_string_escape: () => token.immediate('""'),

    _long_string_literal: $ =>
      seq(
        choice('"""', 'r"""', 'R"""'),
        optional(alias($._long_string_body, $.string_content)),
        token.immediate('"""')
      ),
    _long_string_body: $ =>
      repeat1(choice(token.immediate(prec(2, /[^"]+/)), $._long_string_quote)),

    /* Identifiers and related shenanigans */
    _symbol: $ => choice($.accent_quoted, $.identifier, $.blank_identifier),
    accent_quoted: $ =>
      seq("`", repeat1(alias($._accent_quoted_identifier, $.identifier)), "`"),
    /* eslint-disable-next-line no-control-regex */
    _accent_quoted_identifier: () => /[^\x00-\x1f\r\n\t` ]+/,
    blank_identifier: () => "_",
    identifier: () => Identifier,

    block_documentation_comment: $ =>
      seq(token(prec(1, "##[")), $._block_documentation_comment_content, "]##"),
    block_comment: $ =>
      seq(token(prec(1, "#[")), $._block_comment_content, "]#"),
    documentation_comment: () => /##[^\n\r]*/,
    comment: () => /#[^\n\r]*/,
  },
});

/**
 * Produce a regex to match nim-style style insensitive identifiers
 *
 * @param {string} ident - The string to match style-insensitively.
 */
function keyword_regex(ident) {
  const regex = ident
    .split("")
    .map((letter, idx) =>
      idx > 0 ? `[${letter.toLowerCase()}${letter.toUpperCase()}]` : letter
    )
    .join("_?");

  return new RegExp(regex);
}

/**
 * Produce a rule to match nim-style style insensitive identifiers
 *
 * @param {string} ident - The string to match style-insensitively.
 * @param {number} [p] - The token precedence.
 */
function keyword(ident, p) {
  return alias(token(prec(p ?? 1, keyword_regex(ident))), ident);
}

/**
 * Produce a rule that matches one or more occurance of a given rule.
 * Each of the rules are separated by the given separator.
 * @param {RuleOrLiteral} rule - The rule to be matched.
 * @param {RuleOrLiteral} sep - The matched separator.
 */
function sep1(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Produce a rule that matches either in a section or inline.
 *
 * @param {RuleOrLiteral} rule - The rule to be matched.
 */
function section($, rule) {
  return choice(
    rule,
    seq(
      $._layout_start,
      repeat1(seq(rule, $._layout_terminator)),
      $._layout_end
    )
  );
}
