const PREC = {
  comment: 1,
  using_directive: 2,
  control: 1,
  stable_type_id: 2,
  while: 2,
  assign: 3,
  case: 3,
  stable_id: 4,
  unit: 4,
  ascription: 4,
  postfix: 5,
  colon_call: 5,
  infix: 6,
  constructor_app: 7,
  prefix: 7,
  compound: 7,
  call: 8,
  field: 8,
  macro: 10,
  binding: 10,
};

module.exports = grammar({
  name: "scala",

  extras: $ => [/\s/, $.comment, $.block_comment],

  supertypes: $ => [$.expression, $._definition, $._pattern],

  externals: $ => [
    $._automatic_semicolon,
    $._indent,
    $._interpolated_string_middle,
    $._interpolated_string_end,
    $._interpolated_multiline_string_middle,
    $._interpolated_multiline_string_end,
    $._outdent,
    $._simple_multiline_string,
    $._simple_string,
    "else",
    "catch",
    "finally",
    "extends",
    "with",
  ],

  inline: $ => [
    $._pattern,
    $._semicolon,
    $._definition,
    $._param_type,
    $._identifier,
    $.literal,
  ],

  // Doc: https://tree-sitter.github.io/tree-sitter/creating-parsers, search "precedences"
  // These names can be used in the prec functions to define precedence relative only to other names in the array, rather than globally.
  precedences: $ => [
    ["mod", "soft_id"],
    ["end", "soft_id"],
    ["new", "structural_type"],
  ],

  conflicts: $ => [
    [$.tuple_type, $.parameter_types],
    [$.binding, $._simple_expression],
    [$.binding, $._type_identifier],
    [$.while_expression, $._simple_expression],
    [$.if_expression],
    [$.match_expression],
    [$._function_constructor, $._type_identifier],
    [$._given_constructor, $._type_identifier],
    [$.instance_expression],
    // In case of: 'extension'  _indent  '{'  'case'  operator_identifier  'if'  operator_identifier  •  '=>'  …
    // we treat `operator_identifier` as `simple_expression`
    [$._simple_expression, $.lambda_expression],
    // 'package'  package_identifier  '{'  operator_identifier  •  ':'  …
    [$.self_type, $._simple_expression],
    // 'package'  package_identifier  '{'  operator_identifier  '=>'  •  'enum'  …
    [$.self_type, $.lambda_expression],
    // 'class'  _class_constructor  •  _automatic_semicolon  …
    [$._class_definition],
    // 'class'  operator_identifier  •  _automatic_semicolon  …
    [$._class_constructor],
    // 'enum'  _class_constructor  '{'  'case'  operator_identifier  _full_enum_def_repeat1  •  _automatic_semicolon  …
    [$._full_enum_def],
    // _start_val  identifier  ','  identifier  •  ':'  …
    [$.identifiers, $.val_declaration],
    // 'enum'  operator_identifier  _automatic_semicolon  '('  ')'  •  ':'  …
    [$.class_parameters],
    // 'for'  operator_identifier  ':'  _annotated_type  •  ':'  …
    [$._type, $.compound_type],
    [$.lambda_expression, $.modifiers],
    // 'if'  parenthesized_expression  •  '{'  …
    [$._if_condition, $._simple_expression],
    // _postfix_expression_choice  ':'  '('  wildcard  •  ':'  …
    [$.binding, $._simple_type],
  ],

  word: $ => $._alpha_identifier,

  rules: {
    // TopStats          ::=  TopStat {semi TopStat}
    compilation_unit: $ =>
      optional(trailingSep1($._semicolon, $._top_level_definition)),

    _top_level_definition: $ =>
      choice(
        $.package_clause,
        $.package_object,
        $._definition,
        $._end_marker,
        $.expression,
      ),

    _definition: $ =>
      choice(
        $.given_definition,
        $.extension_definition,
        $.class_definition,
        $.import_declaration,
        $.export_declaration,
        $.object_definition,
        $.enum_definition,
        $.trait_definition,
        $.val_definition,
        $.val_declaration,
        $.var_definition,
        $.var_declaration,
        $.type_definition,
        $.function_definition,
        $.function_declaration,
      ),

    enum_definition: $ =>
      seq(
        repeat($.annotation),
        "enum",
        $._class_constructor,
        field("extend", optional($.extends_clause)),
        field("derive", optional($.derives_clause)),
        field("body", $.enum_body),
      ),

    _enum_block: $ =>
      prec.left(
        seq(
          sep1(
            $._semicolon,
            choice($.enum_case_definitions, $.expression, $._definition),
          ),
          optional($._semicolon),
        ),
      ),

    enum_body: $ =>
      choice(
        prec.left(PREC.control, seq(":", $._indent, $._enum_block, $._outdent)),
        seq(
          "{",
          // TODO: self type
          optional($._enum_block),
          "}",
        ),
      ),

    enum_case_definitions: $ =>
      seq(
        repeat($.annotation),
        "case",
        choice(commaSep1($.simple_enum_case), $.full_enum_case),
      ),

    simple_enum_case: $ =>
      prec.left(
        seq(
          field("name", $._identifier),
          field("extend", optional($.extends_clause)),
        ),
      ),

    full_enum_case: $ => seq(field("name", $._identifier), $._full_enum_def),

    _full_enum_def: $ =>
      seq(
        field("type_parameters", optional($.type_parameters)),
        field("class_parameters", repeat1($.class_parameters)),
        field("extend", optional($.extends_clause)),
      ),

    package_clause: $ =>
      prec.right(
        seq(
          "package",
          field("name", $.package_identifier),
          // This is slightly more permissive than the EBNF in that it allows any
          // kind of delcaration inside of the package blocks. As we're more
          // concerned with the structure rather than the validity of the program
          // we'll allow it.
          field("body", optional($.template_body)),
        ),
      ),

    package_identifier: $ => prec.right(sep1(".", $._identifier)),

    package_object: $ => seq("package", "object", $._object_definition),

    import_declaration: $ =>
      prec.left(seq("import", sep1(",", $._namespace_expression))),

    export_declaration: $ =>
      prec.left(seq("export", sep1(",", $._namespace_expression))),

    _namespace_expression: $ =>
      prec.left(
        seq(
          field("path", sep1(".", $._identifier)),
          optional(
            seq(
              ".",
              choice(
                $.namespace_wildcard,
                $.namespace_selectors,
                // Only allowed in Scala 3
                // ImportExpr        ::=
                //    SimpleRef {‘.’ id} ‘.’ ImportSpec |  SimpleRef ‘as’ id
                $.as_renamed_identifier,
              ),
            ),
          ),
        ),
      ),

    namespace_wildcard: $ => prec.left(1, choice("*", "_", "given")),

    _namespace_given_by_type: $ => seq("given", $._type),

    namespace_selectors: $ =>
      seq(
        "{",
        trailingCommaSep1(
          choice(
            $._namespace_given_by_type,
            $.namespace_wildcard,
            $._identifier,
            $.arrow_renamed_identifier,
            $.as_renamed_identifier,
          ),
        ),
        "}",
      ),

    // deprecated: Remove when highlight query is updated for Neovim
    _import_selectors: $ => alias($.namespace_selectors, $.import_selectors),

    arrow_renamed_identifier: $ =>
      seq(
        field("name", $._identifier),
        "=>",
        field("alias", choice($._identifier, $.wildcard)),
      ),

    as_renamed_identifier: $ =>
      seq(
        field("name", $._identifier),
        "as",
        field("alias", choice($._identifier, $.wildcard)),
      ),

    object_definition: $ =>
      seq(
        repeat($.annotation),
        optional($.modifiers),
        optional("case"),
        "object",
        $._object_definition,
      ),

    _object_definition: $ =>
      prec.left(
        seq(
          field("name", $._identifier),
          field("extend", optional($.extends_clause)),
          field("derive", optional($.derives_clause)),
          field("body", optional($._definition_body)),
        ),
      ),

    class_definition: $ =>
      seq(
        repeat($.annotation),
        optional($.modifiers),
        optional("case"),
        "class",
        $._class_definition,
      ),

    _class_definition: $ =>
      seq(
        $._class_constructor,
        field("extend", optional($.extends_clause)),
        field("derive", optional($.derives_clause)),
        field("body", optional($._definition_body)),
      ),

    _definition_body: $ =>
      seq(optional($._automatic_semicolon), field("body", $.template_body)),

    /**
     * ClassConstr       ::=  [ClsTypeParamClause] [ConstrMods] ClsParamClauses
     * ConstrMods        ::=  {Annotation} [AccessModifier]
     */
    _class_constructor: $ =>
      seq(
        field("name", $._identifier),
        field("type_parameters", optional($.type_parameters)),
        optional($.annotation),
        optional($.access_modifier),
        field(
          "class_parameters",
          repeat(seq(optional($._automatic_semicolon), $.class_parameters)),
        ),
      ),

    trait_definition: $ =>
      prec.left(
        seq(
          repeat($.annotation),
          optional($.modifiers),
          "trait",
          $._class_definition,
        ),
      ),

    // The EBNF makes a distinction between function type parameters and other
    // type parameters as you can't specify variance on function type
    // parameters. This isn't important to the structure of the AST so we don't
    // make that distinction.
    type_parameters: $ =>
      seq("[", trailingCommaSep1($._variant_type_parameter), "]"),

    _variant_type_parameter: $ =>
      seq(
        repeat($.annotation),
        choice(
          $.covariant_type_parameter,
          $.contravariant_type_parameter,
          $._type_parameter, // invariant type parameter
          $.type_lambda,
        ),
      ),

    covariant_type_parameter: $ => seq("+", $._type_parameter),

    contravariant_type_parameter: $ => seq("-", $._type_parameter),

    _type_parameter: $ =>
      seq(
        field("name", choice($.wildcard, $._identifier)),
        field("type_parameters", optional($.type_parameters)),
        field("bound", optional($.lower_bound)),
        field("bound", optional($.upper_bound)),
        field("bound", optional(repeat($.view_bound))),
        field("bound", optional(repeat($.context_bound))),
      ),

    upper_bound: $ => seq("<:", field("type", $._type)),

    lower_bound: $ => seq(">:", field("type", $._type)),

    view_bound: $ => seq("<%", field("type", $._type)),

    context_bound: $ => seq(":", field("type", $._type)),

    /*
     * TemplateBody      ::=  :<<< [SelfType] TemplateStat {semi TemplateStat} >>>
     */
    template_body: $ =>
      choice($._indented_template_body, $._braced_template_body),

    _indented_template_body: $ =>
      prec.left(
        PREC.control,
        seq(":", $._indent, optional($.self_type), $._block, $._outdent),
      ),

    _braced_template_body: $ =>
      prec.left(
        PREC.control,
        seq(
          "{",
          optional(choice($._braced_template_body1, $._braced_template_body2)),
          "}",
        ),
      ),

    _braced_template_body1: $ => seq(optional($.self_type), $._block),
    _braced_template_body2: $ =>
      seq(
        choice(
          seq($._indent, optional($.self_type)),
          seq(optional($.self_type), $._indent),
        ),
        optional($._block),
        $._outdent,
      ),

    /*
     * WithTemplateBody  ::=  <<< [SelfType] TemplateStat {semi TemplateStat} >>>
     */
    with_template_body: $ =>
      prec.left(
        PREC.control,
        seq($._indent, optional($.self_type), $._block, $._outdent),
      ),

    _extension_template_body: $ =>
      choice(
        prec.left(PREC.control, seq($._indent, $._block, $._outdent)),
        seq("{", optional($._block), "}"),
      ),

    _end_marker: $ =>
      prec.left(
        "end",
        seq(
          "end",
          choice(
            "if",
            "while",
            "for",
            "match",
            "try",
            "new",
            "this",
            "given",
            "extension",
            "val",
            alias($._identifier, "_end_ident"),
          ),
        ),
      ),

    // Dynamic precedences added here to win over $.call_expression
    self_type: $ =>
      prec.dynamic(
        1,
        seq($._identifier, optional($._self_type_ascription), "=>"),
      ),

    _self_type_ascription: $ => seq(":", $._type),

    annotation: $ =>
      prec.right(
        seq(
          "@",
          field("name", $._simple_type),
          field("arguments", repeat($.arguments)),
        ),
      ),

    val_definition: $ =>
      seq(
        $._start_val,
        field("pattern", choice($._pattern, $.identifiers)),
        optional(seq(":", field("type", $._type))),
        "=",
        field("value", $._indentable_expression),
      ),

    val_declaration: $ =>
      seq(
        $._start_val,
        commaSep1(field("name", $._identifier)),
        ":",
        field("type", $._type),
      ),

    _start_val: $ => seq(repeat($.annotation), optional($.modifiers), "val"),

    var_declaration: $ =>
      seq(
        $._start_var,
        commaSep1(field("name", $._identifier)),
        ":",
        field("type", $._type),
      ),

    var_definition: $ =>
      seq(
        $._start_var,
        field("pattern", choice($._pattern, $.identifiers)),
        optional(seq(":", field("type", $._type))),
        "=",
        field("value", $._indentable_expression),
      ),

    _start_var: $ => seq(repeat($.annotation), optional($.modifiers), "var"),

    type_definition: $ =>
      prec.left(
        seq(
          repeat($.annotation),
          optional($.modifiers),
          optional($.opaque_modifier),
          "type",
          $._type_constructor,
          optional(seq("=", field("type", $._type))),
        ),
      ),

    // Created for memory-usage optimization during codegen.
    _type_constructor: $ =>
      prec.left(
        seq(
          field("name", $._type_identifier),
          field("type_parameters", optional($.type_parameters)),
          field("bound", optional($.lower_bound)),
          field("bound", optional($.upper_bound)),
        ),
      ),

    function_definition: $ =>
      seq(
        $._function_declaration,
        choice(
          seq("=", field("body", $._indentable_expression)),
          field("body", $.block),
        ),
      ),

    function_declaration: $ => $._function_declaration,

    _function_declaration: $ =>
      prec.left(
        seq(
          repeat($.annotation),
          optional($.modifiers),
          "def",
          $._function_constructor,
          optional(seq(":", field("return_type", $._type))),
        ),
      ),

    // Created for memory-usage optimization during codegen.
    _function_constructor: $ =>
      prec.right(
        seq(
          field("name", $._identifier),
          field("type_parameters", optional($.type_parameters)),
          field(
            "parameters",
            repeat(seq(optional($._automatic_semicolon), $.parameters)),
          ),
          optional($._automatic_semicolon),
        ),
      ),

    opaque_modifier: $ => prec("mod", "opaque"),

    /**
     *   Extension         ::=  'extension' [DefTypeParamClause] {UsingParamClause}
     *                          '(' DefParam ')' {UsingParamClause} ExtMethods
     */
    extension_definition: $ =>
      prec.left(
        seq(
          "extension",
          field("type_parameters", optional($.type_parameters)),
          field("parameters", repeat($.parameters)),
          field(
            "body",
            choice($._extension_template_body, $.function_definition),
          ),
        ),
      ),

    /**
     * GivenDef          ::=  [GivenSig] (AnnotType ['=' Expr] | StructuralInstance)
     * GivenSig          ::=  [id] [DefTypeParamClause] {UsingParamClause} ':'
     */
    given_definition: $ =>
      prec.left(
        seq(
          repeat($.annotation),
          optional($.modifiers),
          "given",
          optional($._given_constructor),
          choice(
            field("return_type", $._structural_instance),
            seq(
              field("return_type", $._annotated_type),
              "=",
              field("body", $._indentable_expression),
            ),
          ),
        ),
      ),

    _given_constructor: $ =>
      prec.right(
        seq(
          field("name", optional($._identifier)),
          field("type_parameters", optional($.type_parameters)),
          field(
            "parameters",
            repeat(seq(optional($._automatic_semicolon), $.parameters)),
          ),
          optional($._automatic_semicolon),
          ":",
        ),
      ),

    /**
     * StructuralInstance ::=  ConstrApp {'with' ConstrApp} ['with' WithTemplateBody]
     */
    _structural_instance: $ =>
      prec.left(
        PREC.compound,
        seq(
          $._constructor_application,
          "with",
          field("body", $.with_template_body),
        ),
      ),

    /**
     * ConstrApp         ::=  SimpleType1 {Annotation} {ParArgumentExprs}
     *
     * Note: It would look more elegant if we could make seq(choice(), optional(arguments)),
     * but that doesn't seem to work.
     */
    _constructor_application: $ =>
      prec.left(
        PREC.constructor_app,
        choice(
          $._annotated_type,
          $.compound_type,
          // In theory structural_type should just be added to simple_type,
          // but doing so increases the state of template_body to 4000
          $._structural_type,
          // This adds _simple_type, but not the above intentionall/y.
          seq($._simple_type, field("arguments", $.arguments)),
          seq($._annotated_type, field("arguments", $.arguments)),
          seq($.compound_type, field("arguments", $.arguments)),
        ),
      ),

    _constructor_applications: $ =>
      prec.left(
        choice(
          commaSep1($._constructor_application),
          sep1("with", $._constructor_application),
        ),
      ),

    modifiers: $ =>
      prec.left(
        repeat1(
          choice(
            "abstract",
            "final",
            "sealed",
            "implicit",
            "lazy",
            "override",
            $.access_modifier,
            $.inline_modifier,
            $.infix_modifier,
            $.open_modifier,
            $.transparent_modifier,
          ),
        ),
      ),

    access_modifier: $ =>
      prec.left(
        seq(choice("private", "protected"), optional($.access_qualifier)),
      ),

    access_qualifier: $ => seq("[", $._identifier, "]"),

    inline_modifier: $ => prec("mod", "inline"),
    infix_modifier: $ => prec("mod", "infix"),
    open_modifier: $ => prec("mod", "open"),
    transparent_modifier: $ => prec("mod", "transparent"),

    /**
     * InheritClauses    ::=  ['extends' ConstrApps] ['derives' QualId {',' QualId}]
     */
    extends_clause: $ =>
      prec.left(
        seq(
          "extends",
          field("type", $._constructor_applications),
          optional($.arguments),
        ),
      ),

    derives_clause: $ =>
      prec.left(
        seq(
          "derives",
          commaSep1(
            field("type", choice($._type_identifier, $.stable_type_identifier)),
          ),
        ),
      ),

    class_parameters: $ =>
      prec(
        1,
        seq(
          optional($._automatic_semicolon),
          "(",
          optional(choice("implicit", "using")),
          trailingCommaSep($.class_parameter),
          ")",
        ),
      ),

    /*
     * DefParamClauses   ::=  {DefParamClause} [[nl] ‘(’ [‘implicit’] DefParams ‘)’]
     * DefParamClause    ::=  [nl] ‘(’ DefParams ‘)’ | UsingParamClause
     * DefParams         ::=  DefParam {‘,’ DefParam}
     */
    parameters: $ =>
      choice(
        seq("(", optional("implicit"), trailingCommaSep($.parameter), ")"),
        $._using_parameters_clause,
      ),

    /*
     * UsingParamClause  ::=  [nl] ‘(’ ‘using’ (DefParams | FunArgTypes) ‘)’
     * DefParams         ::=  DefParam {‘,’ DefParam}
     * FunArgTypes       ::=  FunArgType { ‘,’ FunArgType }
     */
    _using_parameters_clause: $ =>
      seq(
        "(",
        "using",
        choice(
          trailingCommaSep1($.parameter),
          trailingCommaSep1($._param_type),
        ),
        ")",
      ),

    class_parameter: $ =>
      seq(
        repeat($.annotation),
        optional($.modifiers),
        optional(choice("val", "var")),
        field("name", $._identifier),
        optional(seq(":", field("type", $._param_type))),
        optional(seq("=", field("default_value", $.expression))),
      ),

    /*
     * DefParam          ::=  {Annotation} [‘inline’] Param
     * Param             ::=  id ‘:’ ParamType [‘=’ Expr]
     */
    parameter: $ =>
      prec.left(
        PREC.control,
        seq(
          repeat($.annotation),
          optional($.inline_modifier),
          field("name", $._identifier),
          ":",
          field("type", $._param_type),
          optional(seq("=", field("default_value", $.expression))),
        ),
      ),

    _block: $ =>
      prec.left(
        seq(
          sep1(
            $._semicolon,
            choice($.expression, $._definition, $._end_marker),
          ),
          optional($._semicolon),
        ),
      ),

    _indentable_expression: $ =>
      choice($.indented_block, $.indented_cases, $.expression),

    block: $ => seq("{", optional($._block), "}"),

    indented_block: $ =>
      prec.left(
        PREC.control,
        seq($._indent, $._block, $._outdent, optional($._end_marker)),
      ),

    indented_cases: $ =>
      prec.left(seq($._indent, repeat1($.case_clause), $._outdent)),

    _indented_type_cases: $ =>
      prec.left(seq($._indent, repeat1($.type_case_clause), $._outdent)),

    // ---------------------------------------------------------------
    // Types

    _type: $ =>
      choice(
        $.function_type,
        $.compound_type,
        $.infix_type,
        $.match_type,
        $._annotated_type,
        $.literal_type,
        $._structural_type,
        $.type_lambda,
      ),

    _annotated_type: $ => prec.right(choice($.annotated_type, $._simple_type)),

    annotated_type: $ => prec.right(seq($._simple_type, repeat1($.annotation))),

    _simple_type: $ =>
      choice(
        $.generic_type,
        $.projected_type,
        $.tuple_type,
        $.singleton_type,
        $.stable_type_identifier,
        $._type_identifier,
        $.wildcard,
      ),

    compound_type: $ =>
      choice(
        prec.left(
          PREC.compound,
          seq(
            field("base", $._annotated_type),
            repeat1(seq("with", field("extra", $._annotated_type))),
          ),
        ),
        prec.left(seq(field("base", $._annotated_type), $._refinement)),
        prec.left(
          -1,
          seq(
            prec.left(
              PREC.compound,
              seq(
                field("base", $._annotated_type),
                repeat1(seq("with", field("extra", $._annotated_type))),
              ),
            ),
            $._refinement,
          ),
        ),
      ),

    _structural_type: $ =>
      prec("structural_type", alias($.template_body, $.structural_type)),

    _refinement: $ => alias($.template_body, $.refinement),

    // This does not include _simple_type since _annotated_type covers it.
    _infix_type_choice: $ =>
      prec.left(
        PREC.infix,
        choice($.compound_type, $.infix_type, $._annotated_type),
      ),

    infix_type: $ =>
      prec.left(
        PREC.infix,
        seq(
          field("left", $._infix_type_choice),
          field("operator", $._identifier),
          field("right", $._infix_type_choice),
        ),
      ),

    tuple_type: $ => seq("(", trailingCommaSep1($._type), ")"),

    singleton_type: $ =>
      prec.left(
        PREC.stable_type_id,
        seq(choice($._identifier, $.stable_identifier), ".", "type"),
      ),

    stable_type_identifier: $ =>
      prec.left(
        PREC.stable_type_id,
        seq(
          choice($._identifier, $.stable_identifier),
          ".",
          $._type_identifier,
        ),
      ),

    stable_identifier: $ =>
      prec.left(
        PREC.stable_id,
        seq(choice($._identifier, $.stable_identifier), ".", $._identifier),
      ),

    generic_type: $ =>
      seq(
        field("type", $._simple_type),
        field("type_arguments", $.type_arguments),
      ),

    projected_type: $ =>
      seq(
        field("type", $._simple_type),
        "#",
        field("selector", $._type_identifier),
      ),

    match_type: $ =>
      prec.left(seq($._infix_type_choice, "match", $._indented_type_cases)),

    type_case_clause: $ =>
      prec.left(
        PREC.control,
        seq("case", $._infix_type_choice, field("body", $._arrow_then_type)),
      ),

    function_type: $ =>
      prec.left(
        seq(field("parameter_types", $.parameter_types), $._arrow_then_type),
      ),

    _arrow_then_type: $ =>
      prec.right(seq(choice("=>", "?=>"), field("return_type", $._type))),

    // Deprioritize against typed_pattern._type.
    parameter_types: $ =>
      prec(
        -1,
        choice(
          $._annotated_type,
          // Prioritize a parenthesized param list over a single tuple_type.
          prec.dynamic(1, seq("(", trailingCommaSep($._param_type), ")")),
          $.compound_type,
          $.infix_type,
        ),
      ),

    _param_type: $ =>
      choice($._type, $.lazy_parameter_type, $.repeated_parameter_type),

    lazy_parameter_type: $ => seq("=>", field("type", $._type)),

    repeated_parameter_type: $ =>
      prec.left(PREC.postfix, seq(field("type", $._type), "*")),

    _type_identifier: $ => alias($._identifier, $.type_identifier),

    type_lambda: $ =>
      seq(
        "[",
        trailingCommaSep1($._type_parameter),
        "]",
        "=>>",
        field("return_type", $._type),
      ),

    // ---------------------------------------------------------------
    // Patterns

    _pattern: $ =>
      choice(
        $._identifier,
        $.stable_identifier,
        $.interpolated_string_expression,
        $.capture_pattern,
        $.tuple_pattern,
        $.case_class_pattern,
        $.infix_pattern,
        $.alternative_pattern,
        $.typed_pattern,
        $.given_pattern,
        $.quote_expression,
        $.literal,
        $.wildcard,
        $.repeat_pattern,
      ),

    case_class_pattern: $ =>
      seq(
        field("type", choice($._type_identifier, $.stable_type_identifier)),
        "(",
        field("pattern", trailingCommaSep($._pattern)),
        ")",
      ),

    infix_pattern: $ =>
      prec.left(
        PREC.infix,
        seq(
          field("left", $._pattern),
          field("operator", $._identifier),
          field("right", $._pattern),
        ),
      ),

    capture_pattern: $ =>
      prec.right(
        PREC.field,
        seq(
          field("name", choice($._identifier, $.wildcard)),
          "@",
          field("pattern", $._pattern),
        ),
      ),

    repeat_pattern: $ => prec.right(seq(field("pattern", $._pattern), "*")),

    typed_pattern: $ =>
      prec.right(
        seq(field("pattern", $._pattern), ":", field("type", $._type)),
      ),

    given_pattern: $ => seq("given", field("type", $._type)),

    // TODO: Flatten this.
    alternative_pattern: $ => prec.left(-1, seq($._pattern, "|", $._pattern)),

    tuple_pattern: $ => seq("(", $._pattern, repeat(seq(",", $._pattern)), ")"),

    // ---------------------------------------------------------------
    // Expressions

    expression: $ =>
      choice(
        $.if_expression,
        $.match_expression,
        $.try_expression,
        $.assignment_expression,
        $.lambda_expression,
        $.postfix_expression,
        $.ascription_expression,
        $.infix_expression,
        $.prefix_expression,
        $.return_expression,
        $.throw_expression,
        $.while_expression,
        $.do_while_expression,
        $.for_expression,
        $.macro_body,
        $._simple_expression,
      ),

    /**
     *  SimpleExpr        ::=  SimpleRef
     *                      |  Literal
     *                      |  '_'
     *                      |  BlockExpr
     *                      |  ExprSplice
     *                      |  Quoted
     *                      |  quoteId
     *                      |  'new' ConstrApp {'with' ConstrApp} [TemplateBody]
     *                      |  'new' TemplateBody
     *                      |  '(' ExprsInParens ')'
     *                      |  SimpleExpr '.' id
     *                      |  SimpleExpr '.' MatchClause
     *                      |  SimpleExpr TypeArgs
     *                      |  SimpleExpr ArgumentExprs
     *                      |  SimpleExpr ColonArgument
     * TODO: ColonArgument
     */
    _simple_expression: $ =>
      choice(
        $.identifier,
        $.operator_identifier,
        $.literal,
        $.interpolated_string_expression,
        $.unit,
        $.tuple_expression,
        $.wildcard,
        $.block,
        $.splice_expression,
        $.case_block,
        $.quote_expression,
        $.instance_expression,
        $.parenthesized_expression,
        $.field_expression,
        $.generic_function,
        $.call_expression,
      ),

    lambda_expression: $ =>
      prec.right(
        seq(
          field(
            "parameters",
            choice(
              $.bindings,
              seq(optional("implicit"), $._identifier),
              $.wildcard,
            ),
          ),
          choice("=>", "?=>"),
          $._indentable_expression,
        ),
      ),

    if_expression: $ =>
      prec.right(
        PREC.control,
        seq(
          optional($.inline_modifier),
          "if",
          field("condition", $._if_condition),
          field("consequence", $._indentable_expression),
          optional(seq("else", field("alternative", $._indentable_expression))),
        ),
      ),

    // NOTE(susliko): _if_condition and its magic dynamic precedence were introduced as a fix to
    // https://github.com/tree-sitter/tree-sitter-scala/issues/263 and
    // https://github.com/tree-sitter/tree-sitter-scala/issues/342
    // Neither do I understand why this works, nor have I found a better solution
    _if_condition: $ =>
      prec.dynamic(
        4,
        choice(
          $.parenthesized_expression,
          seq($._indentable_expression, "then"),
        ),
      ),

    /*
     *   MatchClause       ::=  'match' <<< CaseClauses >>>
     */
    match_expression: $ =>
      prec.left(
        PREC.postfix,
        seq(
          optional($.inline_modifier),
          field("value", $.expression),
          "match",
          field("body", choice($.case_block, $.indented_cases)),
        ),
      ),

    try_expression: $ =>
      prec.right(
        PREC.control,
        seq(
          "try",
          field("body", $._indentable_expression),
          optional($.catch_clause),
          optional($.finally_clause),
        ),
      ),

    /*
     *   Catches           ::=  'catch' (Expr | ExprCaseClause)
     */
    catch_clause: $ =>
      prec.right(
        seq("catch", choice($._indentable_expression, $._expr_case_clause)),
      ),

    _expr_case_clause: $ =>
      prec.left(seq("case", $._case_pattern, field("body", $.expression))),

    finally_clause: $ => prec.right(seq("finally", $._indentable_expression)),

    /*
     * Binding           ::=  (id | ‘_’) [‘:’ Type]
     */
    binding: $ =>
      prec.dynamic(
        PREC.binding,
        seq(
          choice(field("name", $._identifier), $.wildcard),
          optional(seq(":", field("type", $._param_type))),
        ),
      ),

    bindings: $ => seq("(", trailingCommaSep($.binding), ")"),

    case_block: $ =>
      choice(prec(-1, seq("{", "}")), seq("{", repeat1($.case_clause), "}")),

    case_clause: $ =>
      prec.left(
        seq("case", $._case_pattern, field("body", optional($._block))),
      ),

    // This is created to capture guard from the right
    _case_pattern: $ =>
      prec.right(
        10,
        seq(field("pattern", $._pattern), optional($.guard), "=>"),
      ),

    guard: $ =>
      prec.left(
        PREC.control,
        seq("if", field("condition", $._postfix_expression_choice)),
      ),

    assignment_expression: $ =>
      prec.right(
        PREC.assign,
        seq(
          field("left", choice($.prefix_expression, $._simple_expression)),
          "=",
          field("right", $.expression),
        ),
      ),

    generic_function: $ =>
      prec(
        PREC.call,
        seq(
          field("function", $.expression),
          field("type_arguments", $.type_arguments),
        ),
      ),

    call_expression: $ =>
      choice(
        prec.left(
          PREC.call,
          seq(
            field("function", $._simple_expression),
            field("arguments", choice($.arguments, $.case_block, $.block)),
          ),
        ),
        prec.right(
          PREC.colon_call,
          seq(
            field("function", $._postfix_expression_choice),
            ":",
            field("arguments", $.colon_argument),
          ),
        ),
      ),

    /**
     *   ColonArgument     ::=  colon [LambdaStart]
     *                          (CaseClauses | Block)
     */
    colon_argument: $ =>
      prec.left(
        PREC.colon_call,
        seq(
          optional(
            field(
              "lambda_start",
              seq(choice($.bindings, $._identifier, $.wildcard), "=>"),
            ),
          ),
          choice($.indented_block, $.indented_cases),
        ),
      ),

    field_expression: $ =>
      prec.left(
        PREC.field,
        seq(
          field("value", $._simple_expression),
          ".",
          field("field", $._identifier),
        ),
      ),

    /**
     *   SimpleExpr        ::=  SimpleRef
     *                      |  'new' ConstrApp {'with' ConstrApp} [TemplateBody]
     *                      |  'new' TemplateBody
     */
    instance_expression: $ =>
      choice(
        // This is weakened so ascription wins for new Array: Array
        prec.dynamic(
          0,
          seq("new", $._constructor_application, $.template_body),
        ),
        prec("new", seq("new", $.template_body)),
        seq("new", $._constructor_application),
      ),

    /**
     * PostfixExpr [Ascription]
     */
    ascription_expression: $ =>
      prec.dynamic(
        PREC.ascription,
        seq(
          $._postfix_expression_choice,
          ":",
          choice($._param_type, $.annotation),
        ),
      ),

    infix_expression: $ =>
      prec.left(
        PREC.infix,
        seq(
          field(
            "left",
            choice(
              $.infix_expression,
              $.prefix_expression,
              $._simple_expression,
            ),
          ),
          field("operator", $._identifier),
          field(
            "right",
            choice(
              $.prefix_expression,
              $._simple_expression,
              seq(":", $.colon_argument),
            ),
          ),
        ),
      ),

    /**
     * PostfixExpr       ::=  InfixExpr [id]
     */
    postfix_expression: $ =>
      prec.left(
        PREC.postfix,
        seq(
          choice($.infix_expression, $.prefix_expression, $._simple_expression),
          $._identifier,
        ),
      ),

    _postfix_expression_choice: $ =>
      prec.left(
        PREC.postfix,
        choice(
          $.postfix_expression,
          $.infix_expression,
          $.prefix_expression,
          $._simple_expression,
        ),
      ),

    macro_body: $ =>
      prec.left(
        PREC.macro,
        seq(
          "macro",
          choice($.infix_expression, $.prefix_expression, $._simple_expression),
        ),
      ),

    /**
     * PrefixExpr        ::=  [PrefixOperator] SimpleExpr
     */
    prefix_expression: $ =>
      prec(PREC.prefix, seq(choice("+", "-", "!", "~"), $._simple_expression)),

    tuple_expression: $ =>
      seq(
        "(",
        $.expression,
        repeat1(seq(",", $.expression)),
        optional(","),
        ")",
      ),

    parenthesized_expression: $ => seq("(", $.expression, ")"),

    type_arguments: $ => seq("[", trailingCommaSep1($._type), "]"),

    arguments: $ =>
      seq(
        "(",
        choice(optional($._exprs_in_parens), seq("using", $._exprs_in_parens)),
        ")",
      ),

    // ExprsInParens     ::=  ExprInParens {‘,’ ExprInParens}
    _exprs_in_parens: $ => trailingCommaSep1($.expression),

    splice_expression: $ =>
      prec.left(
        PREC.macro,
        seq(
          "$",
          choice(
            seq("{", $._block, "}"),
            seq("[", $._type, "]"),
            // TODO: This would never hit, since identifier permits $ sign
            $.identifier,
          ),
        ),
      ),

    quote_expression: $ =>
      prec.left(
        PREC.macro,
        seq(
          "'",
          choice(seq("{", $._block, "}"), seq("[", $._type, "]"), $.identifier),
        ),
      ),

    symbol_literal: $ => "__no_longer_used_symbol_literal_",

    /**
     * id               ::=  plainid
     *                       |  ‘`’ { charNoBackQuoteOrNewline | UnicodeEscape | charEscapeSeq
     */
    identifier: $ =>
      prec.left(
        choice($._alpha_identifier, $._backquoted_id, $._soft_identifier),
      ),

    // https://docs.scala-lang.org/scala3/reference/soft-modifier.html
    _soft_identifier: $ =>
      prec(
        "soft_id",
        choice("infix", "inline", "opaque", "open", "transparent", "end"),
      ),

    /**
     * alphaid          ::=  upper idrest
     *                       |  varid
     * We approximate the above as:
     * /[A-Za-z\$_][A-Z\$_a-z0-9]*(_[\-!#%&*+\/\\:<=>?@\u005e\u007c~]+)?/,
     *
     * The following is more accurate, but the state count goes over the unsigned short int, and should be comparable.
     * /([\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$][\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F0-9]*(_[\-!#%&*+\/\\:<=>?@\u005e\u007c~]+)?|[\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F_][\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F0-9]*(_[\-!#%&*+/\\:<=>?@\u005e\u007c~]+)?|[\-!#%&*+\/\\:<=>?@\u005e\u007c~]+)|[\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F_][\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F0-9]*(_[\-!#%&*+\/\\:<=>?@\u005e\u007c~]+)?/,
     */
    _alpha_identifier: $ =>
      /[\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F\$][\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\$\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F0-9\$_\p{Ll}]*(_[\-!#%&*+\/\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]+)?/,

    /**
     * Despite what the lexical syntax suggests, the alphaid rule doesn't apply
     * to identifiers that aren't in blocks in interpolated strings (e.g. $foo).
     * A more accurate description is given in
     * https://www.scala-lang.org/files/archive/spec/2.13/01-lexical-syntax.html
     * where it states (regarding dollar sign escapes in interpolated strings) that
     * """
     * The simpler form consists of a ‘$’-sign followed by an identifier starting
     * with a letter and followed only by letters, digits, and underscore characters
     * """
     * where "letters" does not include the $ character.
     *
     * This rule is similar to the _alpha_identifier rule, with the differences
     * being that the $ character is excluded, along with the _(operator_chars)
     * suffix and can be approximated as
     * /[A-Za-z_][A-Z_a-z0-9]/;
     */
    _interpolation_identifier: $ =>
      /[\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F][\p{Lu}\p{Lt}\p{Nl}\p{Lo}\p{Lm}\p{Ll}_\u00AA\u00BB\u02B0-\u02B8\u02C0-\u02C1\u02E0-\u02E4\u037A\u1D78\u1D9B-\u1DBF\u2071\u207F\u2090-\u209C\u2C7C-\u2C7D\uA69C-\uA69D\uA770\uA7F8-\uA7F9\uAB5C-\uAB5F0-9_\p{Ll}]*/,

    _backquoted_id: $ => /`[^\n`]+`/,

    _identifier: $ => choice($.identifier, $.operator_identifier),

    identifiers: $ => seq($.identifier, ",", commaSep1($.identifier)),

    wildcard: $ => "_",

    /**
     * Regex patterns created to avoid matching // comments and /* comment starts.
     * This could technically match illeagal tokens such as val ?// = 1
     */
    operator_identifier: $ =>
      token(
        choice(
          // single opchar
          /[\-!#%&*+\/\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/,
          seq(
            // opchar minus slash
            /[\-!#%&*+\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/,
            // opchar*
            repeat1(/[\-!#%&*+\/\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/),
          ),
          seq(
            // opchar
            /[\-!#%&*+\/\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/,
            // opchar minus slash and asterisk
            /[\-!#%&+\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/,
            // opchar*
            repeat(/[\-!#%&*+\/\\:<=>?@\u005e\u007c~\p{Sm}\p{So}]/),
          ),
        ),
      ),

    _non_null_literal: $ =>
      choice(
        $.integer_literal,
        $.floating_point_literal,
        $.boolean_literal,
        $.character_literal,
        $.string,
      ),

    literal_type: $ => $._non_null_literal,

    literal: $ => choice($._non_null_literal, $.null_literal),

    integer_literal: $ =>
      token(
        seq(
          optional(/[-]/),
          choice(/[\d](_?\d)*/, /0[xX][\da-fA-F](_?[\da-fA-F])*/),
          optional(/[lL]/),
        ),
      ),

    floating_point_literal: $ =>
      token(
        seq(
          optional(/[-]/),
          choice(
            // digit {digit} ‘.’ digit {digit} [exponentPart] [floatType]
            seq(/[\d]+\.[\d]+/, optional(/[eE][+-]?[\d]+/), optional(/[dfDF]/)),
            // ‘.’ digit {digit} [exponentPart] [floatType]
            seq(/\.[\d]+/, optional(/[eE][+-]?[\d]+/), optional(/[dfDF]/)),
            // digit {digit} exponentPart [floatType]
            seq(/[\d]+/, /[eE][+-]?[\d]+/, optional(/[dfDF]/)),
            // digit {digit} [exponentPart] floatType
            seq(/[\d]+/, optional(/[eE][+-]?[\d]+/), /[dfDF]/),
          ),
        ),
      ),

    boolean_literal: $ => choice("true", "false"),

    character_literal: $ =>
      token(
        seq(
          "'",
          optional(
            choice(
              seq(
                "\\",
                choice(
                  /[^xu]/,
                  /u[0-9a-fA-F]{4}/,
                  /u{[0-9a-fA-F]+}/,
                  /x[0-9a-fA-F]{2}/,
                ),
              ),
              /[^\\'\n]/,
            ),
          ),
          "'",
        ),
      ),

    interpolated_string_expression: $ =>
      seq(field("interpolator", $.identifier), $.interpolated_string),

    _interpolated_string_start: $ => '"',

    _interpolated_multiline_string_start: $ => '"""',

    _dollar_escape: $ => seq("$", choice("$", '"')),

    _aliased_interpolation_identifier: $ =>
      alias($._interpolation_identifier, $.identifier),

    interpolation: $ =>
      seq("$", choice($._aliased_interpolation_identifier, $.block)),

    interpolated_string: $ =>
      choice(
        seq(
          $._interpolated_string_start,
          repeat(
            seq(
              $._interpolated_string_middle,
              choice($._dollar_escape, $.interpolation),
            ),
          ),
          $._interpolated_string_end,
        ),
        seq(
          $._interpolated_multiline_string_start,
          repeat(
            seq(
              $._interpolated_multiline_string_middle,
              choice($._dollar_escape, $.interpolation),
            ),
          ),
          $._interpolated_multiline_string_end,
        ),
      ),

    string: $ => choice($._simple_string, $._simple_multiline_string),

    _semicolon: $ => choice(";", $._automatic_semicolon),

    null_literal: $ => "null",

    unit: $ => prec(PREC.unit, seq("(", ")")),

    return_expression: $ => prec.left(seq("return", optional($.expression))),

    throw_expression: $ => prec.left(seq("throw", $.expression)),

    /*
     *   Expr1             ::=  'while' '(' Expr ')' {nl} Expr
     *                       |  'while' Expr 'do' Expr
     */
    while_expression: $ =>
      prec(
        PREC.while,
        choice(
          prec.right(
            seq(
              "while",
              field("condition", $.parenthesized_expression),
              field("body", $.expression),
            ),
          ),
          prec.right(
            seq(
              "while",
              field("condition", seq($._indentable_expression, "do")),
              field("body", $._indentable_expression),
            ),
          ),
        ),
      ),

    do_while_expression: $ =>
      prec.right(
        seq(
          "do",
          field("body", $.expression),
          "while",
          field("condition", $.parenthesized_expression),
        ),
      ),

    /*
     *  ForExpr           ::=  'for' '(' Enumerators0 ')' {nl} ['do' | 'yield'] Expr
     *                      |  'for' '{' Enumerators0 '}' {nl} ['do' | 'yield'] Expr
     *                      |  'for'     Enumerators0          ('do' | 'yield') Expr
     */
    for_expression: $ =>
      choice(
        prec.right(
          PREC.control,
          seq(
            "for",
            field(
              "enumerators",
              choice(
                seq("(", $.enumerators, ")"),
                seq("{", $.enumerators, "}"),
              ),
            ),
            choice(
              seq(field("body", $.expression)),
              seq("yield", field("body", $._indentable_expression)),
            ),
          ),
        ),
        prec.right(
          PREC.control,
          seq(
            "for",
            field("enumerators", $.enumerators),
            choice(
              seq("do", field("body", $._indentable_expression)),
              seq("yield", field("body", $._indentable_expression)),
            ),
          ),
        ),
      ),

    enumerators: $ =>
      choice(
        seq(sep1($._semicolon, $.enumerator), optional($._automatic_semicolon)),
        seq(
          $._indent,
          sep1($._semicolon, $.enumerator),
          optional($._automatic_semicolon),
          $._outdent,
        ),
      ),

    /**
     *   Enumerator        ::=  Generator
     *                       |  Guard {Guard}
     *                       |  Pattern1 '=' Expr
     */
    enumerator: $ =>
      choice(
        seq(
          optional("case"),
          $._pattern,
          choice("<-", "="),
          $.expression,
          optional($.guard),
        ),
        repeat1($.guard),
      ),

    comment: $ => seq(token("//"), choice($.using_directive, $._comment_text)),
    _comment_text: $ => token(prec(PREC.comment, /.*/)),

    using_directive: $ =>
      seq(
        token.immediate(prec(PREC.using_directive, ">")),
        token("using"),
        $.using_directive_key,
        $.using_directive_value,
      ),
    using_directive_key: $ => token(/[^\s]+/),
    using_directive_value: $ => token(/.*/),

    block_comment: $ =>
      seq(token("/*"), repeat(choice(token(/./), token("//"))), token("*/")),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return sep1(",", rule);
}

function trailingCommaSep(rule) {
  return optional(trailingCommaSep1(rule));
}

function trailingCommaSep1(rule) {
  return trailingSep1(",", rule);
}

function trailingSep1(delimiter, rule) {
  return seq(sep1(delimiter, rule), optional(delimiter));
}

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
