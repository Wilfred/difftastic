/*
 * Grammar for D code for use by Tree-Sitter.
 *
 * Copyright 2024 Garrett D'Amore
 *
 * Distributed under the MIT License.
 * (See accompanying file LICENSE.txt or https://opensource.org/licenses/MIT)
 * SPDX-License-Identifier: MIT
 */

module.exports = grammar({
  name: "d",

  externals: ($) => [
    $.end_file,
    $.comment,
    $.directive,
    $.shebang,
    $.int_literal,
    $.float_literal,
    $._string,
    $.not_in,
    $.not_is,
  ],

  extras: ($) => [
    /[ \t\r\n\u2028\u2029]/,
    $.comment,
    $.directive,
    $.end_file, // forces stop of parse
  ],

  inline: ($) => [
    $._identifier_or_template_instance,
    $._for1,
    $._for2,
    $._for3,
    $._template_value_parameter,
    $._template_alias_parameter,
    $._template_sequence_parameter,
    $._template_type_parameter,
    $._declarator_identifier_list,
    $._non_void_initializer,
    $._parameter,
    $.body,
    $.consequence,
    $.alternative,
  ],

  precedences: (_$) => [
    // in expressions, we want to have the following
    [
      "unary",
      "power",
      "multiply",
      "add",
      "shift",
      "compare",
      "bitwise_and",
      "exclusive_or",
      "inclusive_or",
      "logical_or",
      "logical_and",
      "ternary",
      "assignment",
    ],
  ],

  word: ($) => $.identifier,

  // The order of these rules very roughly corresponds to the order
  // they are defined in the D grammar on the D website.

  rules: {
    /**************************************************
     *
     * 3.1 LEXER
     *
     * See also the scanner.c, for some external symbols.
     */

    source_file: ($) =>
      seq(
        optional(choice($._bom, $.shebang)),
        choice($.module_def, repeat($._declaration)),
      ),

    _bom: (_$) => "\uFEFF", // kind of like a special form of whitespace

    htmlentity: ($) => seq(/\\&[a-zA-Z_]+;/),

    escape_sequence: ($) =>
      choice(
        "\\'",
        '\\"',
        "\\?",
        "\\\\",
        "\\a",
        "\\b",
        "\\f",
        "\\n",
        "\\r",
        "\\t",
        "\\v",
        /\\x[0-9A-Fa-f][0-9A-Fa-f]/,
        /\\[0-7]{1,3}/,
        /\\u[0-9A-Fa-f]{4}/,
        /\\U[0-9A-Fa-f]{8}/,
        $.htmlentity,
      ),

    //
    // Identifier
    //
    identifier: (_$) => /[_\p{XID_Start}][\p{XID_Continue}]*/,

    //
    // Token String
    //
    token_string: ($) => seq("q{", optional($._token_string_tokens), "}"),

    // we aren't tokenizing this yet
    _token_string_tokens: ($) => repeat1($._token_string_token),

    _token_string_token: ($) =>
      choice(
        seq("{", optional($._token_string_tokens), "}"),
        $._token_no_braces,
      ),

    _token_no_braces: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.char_literal,
        $.int_literal,
        $.float_literal,
        $.keyword,
        "/",
        "/=",
        ".",
        "..",
        "...",
        "&",
        "&=",
        "&&",
        "|",
        "|=",
        "||",
        "-",
        "-=",
        "--",
        "+",
        "+=",
        "++",
        "<",
        "<=",
        "<<",
        "<<=",
        ">",
        ">=",
        ">>=",
        ">>>=",
        ">>",
        ">>>",
        "!",
        "!=",
        "(",
        ")",
        "[",
        "]",
        "?",
        ",",
        ";",
        ":",
        "$",
        "=",
        "==",
        "*",
        "*=",
        "%",
        "%=",
        "^",
        "^=",
        "^^",
        "^^=",
        "~",
        "~=",
        "@",
        "=>",
        "#",
      ),

    keyword: ($) =>
      choice(
        $.abstract,
        $.alias,
        $.align,
        $.asm,
        $.assert,
        $.auto,
        $.break,
        $.case,
        $.cast,
        $.catch,
        $.class,
        $.continue,
        $.debug,
        $.default,
        $.delegate,
        $.delete,
        $.deprecated,
        $.do,
        $.else,
        $.enum,
        $.export,
        $.extern,
        $.final,
        $.finally,
        $.for,
        $.foreach,
        $.foreach_reverse,
        $.function,
        $.goto,
        $.if,
        $.import,
        $.in,
        $.interface,
        $.invariant,
        $.is,
        $.lazy,
        $.mixin,
        $.module,
        $.new,
        $.nothrow,
        $.out,
        $.override,
        $.package,
        $.pragma,
        $.private,
        $.protected,
        $.public,
        $.pure,
        $.ref,
        $.return,
        $.scope,
        $.static,
        $.struct,
        $.super,
        $.switch,
        $.synchronized,
        $.template,
        $.this,
        $.throw,
        $.try,
        $.typeid,
        $.typeof,
        $.union,
        $.unittest,
        $.version,
        $.while,
        $.with,
        $.gshared,
        $.traits,
        $.vector,
        $.parameters_,
        $.special_keyword,
        $.false,
        $.true,
        $.null,
        $._builtin_type,
        $.void,
        $.type_ctor,
      ),

    //
    // builtin types
    //
    bool: (_$) => token("bool"),
    byte: (_$) => token("byte"),
    ubyte: (_$) => token("ubyte"),
    char: (_$) => token("char"),
    short: (_$) => token("short"),
    ushort: (_$) => token("ushort"),
    int: (_$) => token("int"),
    uint: (_$) => token("uint"),
    long: (_$) => token("long"),
    ulong: (_$) => token("ulong"),
    cent: (_$) => token("cent"),
    ucent: (_$) => token("ucent"),
    wchar: (_$) => token("wchar"),
    dchar: (_$) => token("dchar"),
    float: (_$) => token("float"),
    double: (_$) => token("double"),
    real: (_$) => token("real"),
    ifloat: (_$) => token("ifloat"),
    idouble: (_$) => token("idouble"),
    ireal: (_$) => token("ireal"),
    cfloat: (_$) => token("cfloat"),
    cdouble: (_$) => token("cdouble"),
    creal: (_$) => token("creal"),
    // builtin aliased types
    size_t: (_$) => token("size_t"),
    ptrdiff_t: (_$) => token("ptrdiff_t"),
    string: (_$) => token("string"),
    cstring: (_$) => token("cstring"),
    dstring: (_$) => token("dstring"),
    wstring: (_$) => token("wstring"),
    noreturn: (_$) => token("noreturn"),

    //
    // builtin constants
    //
    true: (_$) => token("true"),
    false: (_$) => token("false"),
    null: (_$) => token("null"),
    dollar: (_$) => "$",
    super: (_$) => token("super"),
    this: (_$) => token("this"),

    //
    // keywords
    //
    abstract: (_$) => token("abstract"),
    alias: (_$) => token("alias"),
    align: (_$) => token("align"),
    asm: (_$) => token("asm"),
    assert: (_$) => token("assert"),
    auto: (_$) => token("auto"),
    break: (_$) => token("break"),
    case: (_$) => token("case"),
    cast: (_$) => token("cast"),
    catch: (_$) => token("catch"),
    class: (_$) => token("class"),
    const: (_$) => token("const"),
    continue: (_$) => token("continue"),
    debug: (_$) => token("debug"),
    default: (_$) => token("default"),
    delegate: (_$) => token("delegate"),
    delete: (_$) => token("delete"),
    deprecated: (_$) => token("deprecated"),
    do: (_$) => "do",
    else: (_$) => "else",
    enum: (_$) => "enum",
    export: (_$) => "export",
    extern: (_$) => "extern",
    final: (_$) => token("final"),
    finally: (_$) => token("finally"),
    for: (_$) => token("for"),
    foreach: (_$) => token("foreach"),
    foreach_reverse: (_$) => token("foreach_reverse"),
    function: (_$) => token("function"),
    goto: (_$) => token("goto"),
    if: (_$) => token("if"),
    immutable: (_$) => token("immutable"),
    import: (_$) => token("import"),
    in: (_$) => token("in"),
    inout: (_$) => token("inout"),
    interface: (_$) => token("interface"),
    invariant: (_$) => token("invariant"),
    is: (_$) => token("is"),
    lazy: (_$) => token("lazy"),
    mixin: (_$) => token("mixin"),
    module: (_$) => token("module"),
    new: (_$) => token("new"),
    nothrow: (_$) => token("nothrow"),
    out: (_$) => token("out"),
    override: (_$) => token("override"),
    package: (_$) => token("package"),
    pragma: (_$) => token("pragma"),
    private: (_$) => token("private"),
    protected: (_$) => token("protected"),
    public: (_$) => token("public"),
    pure: (_$) => token("pure"),
    ref: (_$) => token("ref"),
    return: (_$) => token("return"),
    scope: (_$) => token("scope"),
    shared: (_$) => token("shared"),
    static: (_$) => token("static"),
    struct: (_$) => token("struct"),
    switch: (_$) => token("switch"),
    synchronized: (_$) => token("synchronized"),
    template: (_$) => token("template"),
    throw: (_$) => token("throw"),
    try: (_$) => token("try"),
    typeid: (_$) => token("typeid"),
    typeof: (_$) => token("typeof"),
    union: (_$) => token("union"),
    unittest: (_$) => token("unittest"),
    version: (_$) => token("version"),
    while: (_$) => token("while"),
    with: (_$) => token("with"),
    parameters_: (_$) => token("__parameters"),
    gshared: (_$) => token("__gshared"),
    traits: (_$) => token("__traits"),
    vector: (_$) => token("__vector"),

    /**************************************************
     *
     * 3.2 MODULES
     *
     */

    module_def: ($) => seq($.module_declaration, repeat($._declaration)),

    //
    // Module Declarations
    //
    module_declaration: ($) =>
      seq(
        // deprecated attribute can only appear once
        repeat($.at_attribute),
        optional(seq($.deprecated_attribute, repeat($.at_attribute))),
        $.module,
        $.module_fqn,
        ";",
      ),

    module_fqn: ($) => seq($.identifier, repeat(seq(".", $.identifier))),

    //
    // Import Declarations
    // Note that 'static import' is not provided for here, because it is
    // ambiguous with the attribute_specifiers. Technically we probably
    // prefer the static to be more tightly bound to the import, but for
    // syntax tree analysis it probably does not matter much.
    //
    import_declaration: ($) => seq($.import, $._import_list, ";"),

    _import_list: ($) =>
      choice(
        seq($.imported, optional(seq(",", $._import_list))),
        seq($.imported, ":", commaSep1($.import_bind)),
      ),

    // libdparse calls this single_import
    imported: ($) =>
      choice(
        $.module_fqn,
        seq(field("alias", $.identifier), "=", $.module_fqn),
      ),

    import_bind: ($) => seq($.identifier, optional(seq("=", $.identifier))),

    //
    // Mixin Declaration
    //
    mixin_declaration: ($) => seq($.mixin_expression, ";"),

    /**************************************************
     *
     * 3.3 DECLARATIONS
     *
     */

    _declaration: ($) =>
      choice(
        seq($._declaration2),
        seq(repeat1($._attribute), $._declaration2),
        seq(repeat1($._attribute), "{", repeat($._declaration), "}"),
      ),

    _declaration2: ($) =>
      prec.left(
        choice(
          $.alias_declaration,
          $.alias_this,
          $.anonymous_enum_declaration,
          $.attribute_declaration,
          $.class_declaration,
          $.conditional_declaration,
          $.constructor,
          $.debug_specification,
          $.destructor,
          $.postblit,
          $.function_declaration,
          $.enum_declaration,
          $.import_declaration,
          $.interface_declaration,
          $.invariant_declaration,
          $.mixin_declaration,
          $.mixin_template_declaration,
          $.pragma_declaration,
          $.struct_declaration,
          $.template_declaration,
          $.template_mixin,
          $.union_declaration,
          $.unittest_declaration,
          $.variable_declaration,
          $.manifest_constant,
          $.version_specification,
          $.static_assert,
          $.auto_declaration,
          $.static_foreach_declaration,
          $.alias_reassign, // only valid really inside a template declaration
          ";", // NB: this is deprecated, and is really an empty statement
        ),
      ),

    //
    // Variable Declarations
    //
    variable_declaration: ($) =>
      seq(
        repeat($.storage_class),
        $.type,
        commaSep1(choice($.declarator, $.bitfield_declarator)),
        ";",
      ),

    _declarator_identifier_list: ($) => prec.right(commaSep1($.identifier)),

    declarator: ($) =>
      prec.right(
        seq(
          $.identifier,
          optional(seq(optional($.template_parameters), "=", $._initializer)),
        ),
      ),

    bitfield_declarator: ($) =>
      prec.right(
        choice(
          seq(":", $._expr),
          seq($.identifier, ":", $._expr, optional(seq("=", $._initializer))),
        ),
      ),

    manifest_constant: ($) =>
      seq(
        repeat($.storage_class),
        $.enum,
        repeat($.storage_class),
        optional($.type),
        commaSep1($.manifest_declarator),
        ";",
      ),

    manifest_declarator: ($) =>
      choice(
        seq($.identifier, "=", $._initializer),
        seq($.identifier, $.template_parameters, "=", $._initializer),
      ),

    //
    // Storage Classes
    //
    storage_class: ($) =>
      choice(
        $.linkage_attribute,
        $.align_attribute,
        $.at_attribute,
        $.type_ctor,
        $.deprecated,
        $.static,
        $.extern,
        $.abstract,
        $.final,
        $.override,
        $.synchronized,
        $.auto,
        $.scope,
        $.gshared,
        $.ref,
        $._function_attribute_kwd,
      ),

    //
    // Initializers
    //
    _initializer: ($) => prec.left(choice($._non_void_initializer, $.void)),

    _non_void_initializer: ($) => choice($._expr, $.aggregate_initializer),

    //
    // Auto Declaration
    //
    auto_declaration: ($) =>
      prec.right(
        seq(repeat1($.storage_class), commaSep1($._auto_assignment), ";"),
      ),

    _auto_assignment: ($) =>
      seq(
        field("variable", $.identifier),
        optional($.template_parameters),
        "=",
        field("value", $._initializer),
      ),

    //
    // Alias Declaration
    //
    alias_declaration: ($) =>
      choice(
        seq($.alias, $.this, "=", $.identifier, ";"),
        seq($.alias, commaSep1($.alias_initializer), ";"),
        seq(
          $.alias,
          repeat($.storage_class),
          $.type,
          $._declarator_identifier_list,
          ";",
        ),
        seq(
          $.alias,
          repeat($.storage_class),
          $.type,
          $.identifier,
          optional($.template_parameters),
          $.parameters,
          repeat($.member_function_attribute),
          ";",
        ),
      ),

    alias_initializer: ($) =>
      choice(
        seq(
          $.identifier,
          optional($.template_parameters),
          "=",
          repeat($.storage_class),
          $.type,
        ),
        seq(
          $.identifier,
          optional($.template_parameters),
          "=",
          repeat($.storage_class),
          $.function_literal,
        ),
        seq(
          $.identifier,
          optional($.template_parameters),
          "=",
          repeat($.storage_class),
          $.type,
          $.parameters,
          repeat($.member_function_attribute),
        ),
      ),

    //
    // Alias Assign (type alias)
    //
    alias_assign: ($) => seq($.identifier, "=", $.type),

    //
    // Alias Reassignment (only in template declarations)
    //
    alias_reassign: ($) =>
      prec.dynamic(
        -1,
        choice(
          seq($.identifier, "=", repeat($.storage_class), $.type, ";"),
          seq($.identifier, "=", $.function_literal, ";"),
          seq(
            $.identifier,
            "=",
            repeat($.storage_class),
            $.type,
            $.parameters,
            repeat($.member_function_attribute),
            ";",
          ),
        ),
      ),

    /**************************************************
     *
     * 3.4 TYPES
     *
     */

    type: ($) =>
      prec.right(seq(repeat($.type_ctor), $._type2, repeat($._type_suffix))),

    type_ctor: ($) => choice($.const, $.immutable, $.inout, $.shared),

    _type2: ($) =>
      prec.right(
        choice(
          $.void,
          $._builtin_type,
          $._qualified_id,
          seq(".", $._qualified_id),
          $.typeof_expression,
          seq($.typeof_expression, ".", $._qualified_id),
          seq($.type_ctor, "(", $.type, ")"),
          $.vector_type,
          $.traits_expression,
          $.mixin_expression,
        ),
      ),

    // dparse says the type is optional, but that seems nonsensical.
    vector_type: ($) => seq($.vector, "(", $.type, ")"),

    // aka fundamental type
    _builtin_type: ($) =>
      choice(
        $.bool,
        $.byte,
        $.ubyte,
        $.char,
        $.short,
        $.ushort,
        $.int,
        $.uint,
        $.long,
        $.ulong,
        $.cent, // deprecated
        $.ucent, // deprecated
        $.wchar,
        $.dchar,
        $.float,
        $.double,
        $.real,
        $.ifloat, // deprecated
        $.idouble, // deprecated
        $.ireal, // deprecated
        $.cfloat, // deprecated
        $.cdouble, // deprecated
        $.creal, // deprecated
        $.size_t,
        $.ptrdiff_t,
        $.string,
        $.cstring,
        $.dstring,
        $.wstring,
        $.noreturn,
      ),

    // we call out void specially because it is not always a basic type
    void: (_$) => "void",

    _type_suffix: ($) =>
      prec.right(
        choice(
          "*",
          seq("[", "]"),
          seq("[", $.expression, "]"),
          seq("[", $.expression, "..", $.expression, "]"),
          seq("[", $.type, "]"),
          seq($.delegate, $.parameters, repeat($.member_function_attribute)),
          seq($.function, $.parameters, repeat($._function_attribute)),
        ),
      ),

    _identifier_or_template_instance: ($) =>
      choice($.identifier, $.template_instance),

    // NB: we have inlined some of the forms of the type suffixes
    // here, in order to avoid some of the problems that can occur
    // with conflicts between the suffix forms (always at the end)
    // and the intermediate forms.
    _qualified_id: ($) =>
      prec.right(
        choice(
          seq($.identifier),
          seq($.identifier, ".", $._qualified_id),
          seq($.identifier, "[", "]"),
          seq($.identifier, "[", $.expression, "..", $.expression, "]"),
          seq($.identifier, "[", $.type, "]"),
          seq($.identifier, "[", $.expression, "]"),
          seq($.identifier, "[", $.expression, "]", ".", $._qualified_id),
          seq($.template_instance),
          seq($.template_instance, ".", $._qualified_id),
        ),
      ),

    //
    // Typeof
    //
    typeof_expression: ($) =>
      seq($.typeof, "(", choice($.expression, $.return), ")"),

    // Mixin Type replaced by mixin_expression (evaluates identically)

    //
    // 3.5 ATTRIBUTES
    //

    attribute_declaration: ($) => seq($._attribute, ":"),

    align_attribute: ($) =>
      prec.right(seq($.align, optional(seq("(", $.expression, ")")))),

    deprecated_attribute: ($) =>
      prec.right(seq($.deprecated, optional(seq("(", $.expression, ")")))),

    _attribute: ($) =>
      prec.right(
        choice(
          $.linkage_attribute,
          $.align_attribute,
          $.deprecated_attribute,
          $.pragma_expression,
          $.type_ctor,
          $.private,
          $.package,
          seq($.package, "(", $.module_fqn, ")"),
          $.protected,
          $.public,
          $.export,
          $.static,
          $.extern,
          $.abstract,
          $.final,
          $.override,
          $.synchronized,
          $.auto,
          $.scope,
          $.gshared,
          $.at_attribute,
          $._function_attribute_kwd,
          $.ref,
          $.return,
        ),
      ),

    at_attribute: ($) =>
      prec.right(
        choice(
          seq("@", $.identifier),
          seq("@", $.identifier, $.arguments),
          seq("@", $.template_instance),
          seq("@", $.template_instance, $.arguments),
          seq("@", "(", $._argument_list, ")"),
        ),
      ),

    _function_attribute_kwd: ($) => choice($.nothrow, $.pure),

    linkage_attribute: ($) =>
      prec.right(
        seq(
          $.extern,
          "(",
          choice(
            "C",
            "D",
            "Windows",
            "System",
            seq("Objective", "-", "C"),
            seq("C", "++"),
            // this tecnically permits assignment operations, which is wrong, but simpler
            seq(
              "C",
              "++",
              ",",
              optional(alias($._argument_list, $.namespace_list)),
            ),
            seq("C", "++", ",", $.class),
            seq("C", "++", ",", $.struct),
          ),
          ")",
        ),
      ),

    _argument_list: ($) => prec.right(commaSep1Comma($.expression)),

    arguments: ($) => seq("(", optional($._argument_list), ")"),

    named_argument: ($) =>
      choice($.expression, seq($.identifier, ":", $.expression)),

    _named_argument_list: ($) => prec.right(commaSep1Comma($.named_argument)),

    named_arguments: ($) => seq("(", optional($._named_argument_list), ")"),

    //
    // 3.6 PRAGMAS
    //
    pragma_declaration: ($) =>
      choice(
        seq($.pragma_expression, ";"),
        seq($.pragma_expression, $._declaration),
        seq($.pragma_expression, "{", repeat($._declaration), "}"),
      ),

    pragma_statement: ($) =>
      choice(
        seq($.pragma_expression, $._statement), // covers block_statement as well
        seq($.pragma_expression, ";"),
      ),

    pragma_expression: ($) =>
      choice(
        seq($.pragma, "(", $.identifier, ")"),
        seq($.pragma, "(", $.identifier, ",", $._argument_list, ")"),
      ),

    //
    // 3.7 EXPRESSIONS
    //

    // in statements, most uses of expressions can use comma form
    expression_list: ($) => prec.right(commaSep1($._expr)),

    // formally this is AssignExpression, but we use a different
    // structure.  This is just a single expression term, and
    // cannot be used in a comma expression. Expression is
    // used where comma separated expressions are valid.
    //
    // The formal D grammar permits expression lists in many places,
    // but then the compiler rejects almost any attempt to use them.
    // We are electing to reject these in the syntax, rather than
    // in the semantic.  This makes our grammar simpler, and has
    // zero effect on any actual legal code.
    expression: ($) => $._expr,
    _expr: ($) =>
      prec.left(
        choice(
          $.assignment_expression,
          $.ternary_expression,
          $.binary_expression,
          $.ternary_expression,
          $._unary_expr,
        ),
      ),

    ternary_expression: ($) =>
      prec.right(
        "ternary",
        seq(
          field("condition", $._expr),
          "?",
          field("consequence", $.expression_list),
          ":",
          field("alternative", $._expr),
        ),
      ),

    call_expression: ($) =>
      prec.left(
        choice(
          seq($._unary_expr, $.named_arguments),
          seq($.type, $.named_arguments),
        ),
      ),

    primary_expression: ($) =>
      choice(
        seq("(", $.type, ")", ".", $.identifier),
        seq("(", $.type, ")", ".", $.template_instance),
        seq($._builtin_type, ".", $.identifier),
        seq($.void, ".", $.identifier),
        seq("(", $.expression_list, ")"),
        seq($.type_ctor, "(", $.type, ")", ".", $.identifier),
        seq($.vector_type, ".", $.identifier),
      ),

    _primary_expr: ($) =>
      choice(
        $._identifier_or_template_instance,
        seq(".", $._identifier_or_template_instance),
        $.primary_expression,
        $.typeof_expression,
        $.typeid_expression,
        $.array_literal,
        $.is_expression,
        $.function_literal,
        $.traits_expression,
        $.mixin_expression,
        $.import_expression,
        $.dollar,
        $.this,
        $.super,
        $.null,
        $.true,
        $.false,
        $.special_keyword,
        $.int_literal,
        $.float_literal,
        $.char_literal,
        $.string_literal,
      ),

    // also covers slicing (we renamed from slice,
    // and deleted the old index expression as it was redundant)
    index_expression: ($) =>
      choice(
        seq($._unary_expr, "[", "]"),
        seq($._unary_expr, "[", commaSep1Comma($.index), "]"),
      ),

    index: ($) => seq($.expression, optional(seq("..", $.expression))),

    assignment_expression: ($) =>
      prec.right(
        -1,
        binaryOp(
          $._expr,
          choice(
            "=",
            "+=",
            "-=",
            "*=",
            "/=",
            "%=",
            "&=",
            "|=",
            "^=",
            "~=",
            "<<=",
            ">>=",
            ">>>=",
            "^^=",
          ),
          $._expr,
        ),
      ),

    binary_expression: ($) =>
      choice(
        $.logical_or_expression,
        $.logical_and_expression,
        $.or_expression,
        $.xor_expression,
        $.and_expression,
        $.equal_expression,
        $.rel_expression,
        $.identity_expression,
        $.add_expression,
        $.mul_expression,
        $.shift_expression,
        $.power_expression,
      ),

    logical_or_expression: ($) =>
      prec.left("logical_or", binaryOp($._expr, "||", $._expr)),

    logical_and_expression: ($) =>
      prec.left("logical_and", binaryOp($._expr, "&&", $._expr)),

    or_expression: ($) =>
      prec.left("inclusive_or", binaryOp($._expr, "|", $._expr)),

    xor_expression: ($) =>
      prec.left("exclusive_or", binaryOp($._expr, "^", $._expr)),

    and_expression: ($) =>
      prec.left("bitwise_and", binaryOp($._expr, "&", $._expr)),

    equal_expression: ($) =>
      prec.left("compare", binaryOp($._expr, choice("==", "!="), $._expr)),

    rel_expression: ($) =>
      prec.left(
        "compare",
        binaryOp($._expr, choice("<=", "<", ">", ">="), $._expr),
      ),

    identity_expression: ($) =>
      prec.left(
        "compare",
        seq($._expr, choice($.not_is, $.not_in, $.in, $.is), $._expr),
      ),

    add_expression: ($) =>
      prec.left("add", binaryOp($._expr, choice("+", "-", "~"), $._expr)),

    mul_expression: ($) =>
      prec.left("multiply", binaryOp($._expr, choice("*", "/", "%"), $._expr)),

    shift_expression: ($) =>
      prec.left("shift", binaryOp($._expr, choice("<<", ">>", ">>>"), $._expr)),

    power_expression: ($) =>
      prec.left("power", binaryOp($._expr, "^^", $._unary_expr)),

    postfix_expression: ($) =>
      prec.left(seq($._unary_expr, field("operator", choice("++", "--")))),

    unary_expression: ($) =>
      prec.right(
        "unary",
        seq(
          field("operator", choice("~", "+", "-", "!", "*", "&", "++", "--")),
          $._unary_expr,
        ),
      ),

    _unary_expr: ($) =>
      choice(
        $._primary_expr,
        $.unary_expression,
        $.new_expression,
        $.delete_expression,
        $.assert_expression,
        $.cast_expression,
        $.throw_expression,
        $.call_expression,
        $.index_expression,
        $.postfix_expression,
        $.property_expression,
      ),

    property_expression: ($) =>
      choice(
        seq("(", $.type, ")", ".", $._identifier_or_template_instance),
        prec.left(seq($._unary_expr, ".", $._identifier_or_template_instance)),
        prec.left(seq($._unary_expr, ".", $.new_expression)),
      ),

    cast_expression: ($) =>
      prec.right(
        choice(
          seq($.cast, "(", ")", field("operand", $._unary_expr)),
          seq($.cast, "(", $.type, ")", field("operand", $._unary_expr)),
          seq($.cast, "(", $.cast_qualifier, ")", $._unary_expr),
        ),
      ),

    // these are only allowed in specific combinations
    cast_qualifier: ($) =>
      choice(
        $.const,
        seq($.const, $.shared),
        $.immutable,
        $.inout,
        seq($.inout, $.shared),
        $.shared,
        seq($.shared, $.const),
        seq($.shared, $.inout),
      ),

    delete_expression: ($) => prec.left(seq($.delete, $._unary_expr)),

    throw_expression: ($) => prec.left(seq($.throw, $._unary_expr)),

    //
    // Assert expression.
    //
    assert_expression: ($) => seq($.assert, "(", $.assert_arguments, ")"),

    assert_arguments: ($) =>
      seq(
        $.expression,
        optional(seq(",", commaSep1($.expression))),
        optional(","),
      ),

    //
    // Mixin expression.  The result may be an lvalue.
    //
    mixin_expression: ($) => seq($.mixin, "(", $._argument_list, ")"),

    //
    // Import expression - evaluates to a string literal.
    //
    import_expression: ($) => seq($.import, "(", $.expression, ")"),

    new_expression: ($) =>
      prec.left(
        choice(
          seq($.new, $.type),
          seq($.new, $.type, "[", $.expression, "]"),
          seq($.new, $.type, $.arguments),
          seq(
            $.new,
            $.class,
            optional($.arguments),
            optional($._base_class_list),
            $.aggregate_body,
          ),
        ),
      ),

    typeid_expression: ($) =>
      seq($.typeid, "(", choice($.type, $.expression), ")"),

    is_expression: ($) =>
      prec.right(
        seq(
          $.is,
          "(",
          $.type,
          optional($.identifier),
          optional(
            seq(
              choice("==", ":"),
              $.type_specialization,
              optional(seq(",", $._template_parameter_list)),
            ),
          ),
          ")",
        ),
      ),

    type_specialization: ($) =>
      choice(
        $.type,
        $.struct,
        $.union,
        $.class,
        $.interface,
        $.enum,
        $.vector,
        $.function,
        $.delegate,
        $.super,
        $.const,
        $.immutable,
        $.inout,
        $.shared,
        $.return,
        $.parameters_,
        $.module,
        $.package,
      ),

    raw_string: ($) =>
      choice(
        seq(
          "`",
          token.immediate(prec(1, /[^`]*/)),
          token.immediate(/`[cdw]?/),
        ),
        seq(
          'r"',
          token.immediate(prec(1, /[^"]*/)),
          token.immediate(/"[cdw]?/),
        ),
      ),

    hex_string: ($) =>
      seq(
        'x"',
        token.immediate(prec(1, /[0-9A-Fa-f\s]*/)),
        token.immediate(/"[cdw]?/),
      ),

    quoted_string: ($) =>
      seq(
        '"',
        repeat(choice(/[^"\\]+/, $.escape_sequence)),
        token.immediate(/"[cdw]?/),
      ),

    // string literal stuff
    string_literal: ($) =>
      choice(
        $._string,
        $.raw_string,
        $.hex_string,
        $.quoted_string,
        $.token_string,
      ),

    char_literal: ($) => choice(/'[^\\']'/, seq("'", $.escape_sequence, "'")),

    // NB: array_literals are a super set of associative array literals,
    // and grammatically the two are not distinguishable.
    array_literal: ($) =>
      seq("[", optional(commaSep1Comma($._array_member_init)), "]"),

    _array_member_init: ($) =>
      choice(
        seq(
          optional(seq(field("key", $.expression), ":")),
          field("value", $._non_void_initializer),
        ),
      ),

    //
    // Function Literal
    //
    function_literal: ($) =>
      prec.right(
        choice(
          seq(
            $.function,
            optional(seq(optional($.auto), $.ref)),
            optional($.type),
            optional($._parameter_with_attributes),
            $._specified_function_body,
          ),
          seq(
            $.function,
            optional(seq(optional($.auto), $.ref)),
            optional($.type),
            $._parameter_with_attributes,
            "=>",
            $._expr,
          ),
          seq(
            $.delegate,
            optional(seq(optional($.auto), $.ref)),
            optional($.type),
            optional($._parameter_with_member_attributes),
            $._specified_function_body,
          ),
          seq(
            $.delegate,
            optional(seq(optional($.auto), $.ref)),
            optional($.type),
            $._parameter_with_member_attributes,
            "=>",
            $._expr,
          ),
          seq(
            optional(seq(optional($.auto), $.ref)),
            $._parameter_with_member_attributes,
            $._specified_function_body,
          ),
          seq(
            optional(seq(optional($.auto), $.ref)),
            $._parameter_with_member_attributes,
            "=>",
            $._expr,
          ),
          $._specified_function_body,
          seq($.identifier, "=>", $._expr),
        ),
      ),

    _parameter_with_attributes: ($) =>
      seq($.parameters, repeat($._function_attribute)),

    _parameter_with_member_attributes: ($) =>
      seq($._parameters, repeat($.member_function_attribute)),

    special_keyword: (_$) =>
      choice(
        "__DATE__",
        "__FILE__",
        "__FILE_FULL_PATH__",
        "__FUNCTION__",
        "__LINE__",
        "__MODULE__",
        "__PRETTY_FUNCTION__",
        "__TIME__",
        "__TIMESTAMP__",
        "__VENDOR__",
        "__VERSION__",
      ),

    //
    // 3.8 Statements
    //

    // this does not include the empty statement - that usage is deprecated
    _statement: ($) =>
      choice($._statement_no_case_no_default, $.case_statement),

    _declarations_and_statements: ($) => repeat1($._declaration_or_statement),

    _declaration_or_statement: ($) => choice($._declaration, $._statement),

    scope_statement: ($) => $._declaration_or_statement,
    body: ($) => field("body", $.scope_statement),
    consequence: ($) => field("consequence", $.scope_statement),
    alternative: ($) => field("alternative", $.scope_statement),

    _statement_no_case_no_default: ($) =>
      choice(
        $.labeled_statement,
        $.expression_statement,
        $.block_statement,
        $.if_statement,
        $.while_statement,
        $.do_statement,
        $.for_statement,
        $.foreach_statement,
        $.switch_statement,
        $.final_switch_statement,
        $.continue_statement,
        $.break_statement,
        $.return_statement,
        $.goto_statement,
        $.with_statement,
        $.synchronized_statement,
        $.try_statement,
        $.scope_guard_statement,
        $.pragma_statement,
        $.asm_statement,
        $.conditional_statement,
        $.static_assert,
        $.static_foreach_statement,
        $.version_specification,
        $.debug_specification,
      ),

    labeled_statement: ($) => prec.left(seq($.label, $.body)),

    // a label can appear at the end of the a scope, otherwise  it must be followed by a decl or statement.
    label: ($) => seq($.identifier, ":"),

    block_statement: ($) =>
      seq(
        "{",
        optional($._declarations_and_statements),
        optional($.label),
        "}",
      ),

    expression_statement: ($) => seq($.expression_list, ";"),

    if_statement: ($) =>
      prec.right(
        seq(
          $.if,
          $.if_condition,
          $.consequence,
          optional(seq($.else, $.alternative)),
        ),
      ),

    if_condition: ($) =>
      seq(
        "(",
        choice(
          $._expr,
          seq($.auto, $.identifier, "=", $.expression),
          seq($.scope, $.identifier, "=", $.expression),
          seq(repeat1($.type_ctor), $.identifier, "=", $.expression),
          seq($.type, $.identifier, "=", $.expression), // type constructors already bound to type
        ),
        ")",
      ),

    while_statement: ($) => seq($.while, $.if_condition, $.body),

    do_statement: ($) =>
      seq($.do, $.body, $.while, "(", field("condition", $.expression), ")"),

    //
    // For Statement
    //
    for_statement: ($) =>
      seq(
        $.for,
        "(",
        $._for1,
        optional($._for2),
        optional(seq(";", optional($._for3))),
        ")",
        $.body,
      ),

    _for1: ($) =>
      choice(
        field("init", $._declaration2),
        field("init", $._statement_no_case_no_default),
        ";",
      ),
    _for2: ($) => field("test", $.expression),
    _for3: ($) => field("step", $.expression_list),

    //
    // Foreach Statement
    //

    _foreach: ($) => choice($.foreach, $.foreach_reverse),

    foreach_statement: ($) =>
      choice(
        seq(
          $._foreach,
          "(",
          commaSep1($.foreach_type),
          ";",
          $.expression,
          ")",
          $.body,
        ),
        seq(
          $._foreach,
          "(",
          $.foreach_type,
          ";",
          $.expression,
          "..",
          $.expression,
          ")",
          $.body,
        ),
      ),

    foreach_type: ($) =>
      seq(
        repeat(choice($.ref, $.alias, $.enum, $.scope, $.type_ctor)),
        optional($.type),
        $.identifier,
      ),

    //
    // Switch Statement
    //

    switch_statement: ($) => seq($.switch, "(", $.expression, ")", $.body),

    case_statement: ($) =>
      prec.right(
        choice(
          seq(
            $.case,
            $.expression_list,
            optional(","),
            ":",
            repeat(choice($._declaration, $._statement_no_case_no_default)),
          ),
          seq(
            $.case,
            $.expression,
            ":",
            "..",
            $.case,
            $.expression,
            ":",
            repeat(choice($._declaration, $._statement_no_case_no_default)),
          ),
          seq(
            $.default,
            ":",
            repeat(choice($._declaration, $._statement_no_case_no_default)),
          ),
        ),
      ),

    final_switch_statement: ($) => seq($.final, $.switch_statement),

    continue_statement: ($) => seq($.continue, optional($.identifier), ";"),

    break_statement: ($) => seq($.break, optional($.identifier), ";"),

    return_statement: ($) => seq($.return, optional($.expression), ";"),

    goto_statement: ($) =>
      choice(
        seq($.goto, $.identifier, ";"),
        seq($.goto, $.default, ";"),
        seq($.goto, $.case, ";"),
        seq($.goto, $.case, $.expression, ";"),
      ),

    with_statement: ($) =>
      seq($.with, "(", $.expression, ")", $.scope_statement),

    synchronized_statement: ($) =>
      prec.left(
        seq(
          $.synchronized,
          optional(seq("(", $.expression, ")")),
          $.scope_statement,
        ),
      ),

    //
    // Try Statement
    //
    try_statement: ($) =>
      prec.right(
        seq(
          $.try,
          $.body,
          repeat($.catch_statement),
          optional($.finally_statement),
        ),
      ),

    catch_statement: ($) =>
      seq($.catch, seq("(", $.type, optional($.identifier), ")"), $.body),

    finally_statement: ($) => seq($.finally, $.body),

    //
    // Scope Guard Statement
    //
    scope_guard_statement: ($) =>
      seq($.scope, "(", choice("exit", "success", "failure"), ")", $.body),

    //
    // Asm Statement
    //
    asm_statement: ($) =>
      seq(
        $.asm,
        repeat($._function_attribute),
        "{",
        optional($.asm_inline),
        "}",
      ),

    asm_inline: ($) => repeat1($._token_no_braces),

    //
    // Mixin Statement
    //
    mixin_statement: ($) => seq($.mixin, "(", $._argument_list, ")", ";"),

    /**************************************************
     *
     * 3.9 STRUCTS AND UNIONS
     *
     */

    struct_declaration: ($) =>
      choice(
        seq($.struct, $.aggregate_body), // anonymous struct
        seq($.struct, $.identifier, ";"),
        seq($.struct, $.identifier, $.aggregate_body),
        seq(
          $.struct,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          ";",
        ),
        seq(
          $.struct,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          $.aggregate_body,
        ),
      ),

    // AnonStructDeclaration inlined above

    union_declaration: ($) =>
      choice(
        seq($.union, $.aggregate_body), // anonymous union
        seq($.union, $.identifier, ";"),
        seq($.union, $.identifier, $.aggregate_body),
        seq(
          $.union,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          ";",
        ),
        seq(
          $.union,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          $.aggregate_body,
        ),
      ),

    // AnonUnionDeclaration inlined above

    aggregate_body: ($) => seq("{", repeat($._declaration), "}"),

    //
    // Struct Initializer
    //
    // renamed to aggregate initializer, as this is used for
    // all aggregate types (classes, enums, interfaces, structs)
    // also struct_member_initializers is inlined here
    aggregate_initializer: ($) =>
      seq("{", optional(commaSep1Comma($.member_initializer)), "}"),

    // struct_member_initializer shortened to member_initializer
    member_initializer: ($) =>
      seq(optional(seq($.identifier, ":")), $._initializer),

    //
    // Postblit
    //
    postblit: ($) =>
      seq(
        $.this,
        "(",
        $.this,
        ")",
        repeat($.member_function_attribute),
        $.function_body,
      ),

    //
    // Invariant
    //
    invariant_declaration: ($) =>
      choice(
        seq($.invariant, "(", ")", $.block_statement),
        seq($.invariant, $.block_statement),
        seq($.invariant, "(", $.assert_arguments, ")", ";"),
      ),

    /**************************************************
     *
     * 3.10 CLASSES
     *
     */

    class_declaration: ($) =>
      choice(
        seq($.class, $.identifier, optional($.template_parameters), ";"),
        seq($.class, $.identifier, $.aggregate_body),
        seq($.class, $.identifier, ":", $._base_class_list, $.aggregate_body),
        seq(
          $.class,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          $.aggregate_body,
        ),
        seq(
          $.class,
          $.identifier,
          $.template_parameters,
          optional($.constraint),
          ":",
          $._base_class_list,
          optional($.constraint),
          $.aggregate_body,
        ),
        seq(
          $.class,
          $.identifier,
          $.template_parameters,
          ":",
          $._base_class_list,
          $.constraint,
          $.aggregate_body,
        ),
      ),

    _base_class_list: ($) => commaSep1($.base_class),
    base_class: ($) => $._type2,

    // Invariant was listed in 3.9 above already.

    //
    // Constructor - we use a single form with optional shared static prefixes
    // instead of separate expansions.
    //
    constructor: ($) =>
      choice(
        seq(
          $.this,
          $.parameters,
          repeat($.member_function_attribute),
          $.function_body,
        ),
        seq(
          $.this,
          $.template_parameters,
          $.parameters,
          repeat($.member_function_attribute),
          optional($.constraint),
          $.function_body,
        ),
        seq(
          optional($.shared),
          $.static,
          $.this,
          "(",
          ")",
          repeat($.member_function_attribute),
          $.function_body,
        ),
      ),

    destructor: ($) =>
      seq(
        optional(seq(optional($.shared), $.static)),
        "~",
        $.this,
        "(",
        ")",
        repeat($.member_function_attribute),
        $.function_body,
      ),

    //
    // Alias This
    //
    alias_this: ($) => seq($.alias, $.identifier, $.this, ";"),

    /**************************************************
     *
     * 3.11 INTERFACES
     *
     */

    interface_declaration: ($) =>
      choice(
        seq($.interface, $.identifier, ";"),
        seq($.interface, $.identifier, $.aggregate_body),
        seq(
          $.interface,
          $.identifier,
          ":",
          $._base_class_list,
          $.aggregate_body,
        ),
        seq($.interface, $.identifier, $.template_parameters, $.aggregate_body),
        seq(
          $.interface,
          $.identifier,
          $.template_parameters,
          ":",
          $._base_class_list,
          $.aggregate_body,
        ),
        seq(
          $.interface,
          $.identifier,
          $.template_parameters,
          ":",
          $._base_class_list,
          $.constraint,
          $.aggregate_body,
        ),
        seq(
          $.interface,
          $.identifier,
          $.template_parameters,
          $.constraint,
          $.aggregate_body,
        ),
        seq(
          $.interface,
          $.identifier,
          $.template_parameters,
          $.constraint,
          ":",
          $._base_class_list,
          $.aggregate_body,
        ),
      ),

    /**************************************************
     *
     * 3.12 ENUMS
     *
     */

    enum_declaration: ($) =>
      choice(
        seq($.enum, $.identifier, ";"),
        seq($.enum, $.identifier, $._enum_body),
        seq($.enum, $.identifier, ":", $.type, ";"),
        seq($.enum, $.identifier, ":", $.type, $._enum_body),
      ),

    _enum_body: ($) => seq("{", commaSep1Comma($.enum_member), "}"),

    _enum_member_attribute: ($) =>
      choice($.deprecated_attribute, $.at_attribute),

    enum_member: ($) =>
      seq(
        repeat($._enum_member_attribute),
        $.identifier,
        optional(seq("=", $._expr)),
      ),

    anonymous_enum_declaration: ($) =>
      seq(
        $.enum,
        optional(seq(":", $.type)),
        "{",
        commaSep1Comma(choice($.anonymous_enum_member, $.enum_member)),
        "}",
      ),

    anonymous_enum_member: ($) => seq($.type, $.identifier, "=", $._expr),

    /**************************************************
     *
     * 3.13 FUNCTIONS
     *
     */

    function_declaration: ($) =>
      prec.right(
        choice(
          seq(
            $.type,
            $.identifier,
            $.parameters,
            repeat($.member_function_attribute),
            $.function_body,
          ),
          seq(
            $.type,
            $.identifier,
            $.template_parameters,
            $.parameters,
            repeat($.member_function_attribute),
            optional($.constraint),
            $.function_body,
          ),
          seq(
            repeat1($.storage_class),
            $.identifier,
            $.parameters,
            repeat($.member_function_attribute),
            $.function_body,
          ),
          seq(
            repeat1($.storage_class),
            $.identifier,
            $.template_parameters,
            $.parameters,
            repeat($.member_function_attribute),
            optional($.constraint),
            $.function_body,
          ),
        ),
      ),

    //
    // Parameters
    //
    parameters: ($) =>
      prec.right(
        choice(
          seq("(", ")"),
          seq("(", commaSep1Comma($.parameter), ")"),
          seq("(", commaSep1($.parameter), ",", $.ellipses, ")"),
          seq(
            "(",
            commaSep1($.parameter),
            ",",
            $._variadic_arguments_attributes,
            $.ellipses,
            ")",
          ),
          seq("(", $.ellipses, ")"),
          seq("(", $._variadic_arguments_attributes, $.ellipses, ")"),
        ),
      ),

    _parameters: ($) =>
      prec.right(
        choice(
          seq("(", ")"),
          seq("(", commaSep1Comma($._parameter), ")"),
          seq("(", commaSep1($._parameter), ",", $.ellipses, ")"),
          seq(
            "(",
            commaSep1($._parameter),
            ",",
            $._variadic_arguments_attributes,
            $.ellipses,
            ")",
          ),
          seq("(", $.ellipses, ")"),
          seq("(", $._variadic_arguments_attributes, $.ellipses, ")"),
        ),
      ),

    parameter: ($) => prec.right($._parameter),

    _parameter: ($) =>
      prec.right(
        choice(
          seq(repeat($.parameter_attribute), $.type),
          seq(repeat($.parameter_attribute), $.type, $.ellipses),
          seq(
            repeat($.parameter_attribute),
            $.type,
            "=",
            $._expr,
            optional($.ellipses),
          ),
          seq(repeat($.parameter_attribute), $.type, $.identifier),
          seq(repeat($.parameter_attribute), $.type, $.identifier, $.ellipses),
          seq(
            repeat($.parameter_attribute),
            $.type,
            $.identifier,
            "=",
            $._expr,
            optional($.ellipses),
          ),
        ),
      ),

    parameter_attribute: ($) =>
      choice(
        $.at_attribute,
        $.type_ctor,
        $.final,
        $.in,
        $.lazy,
        $.out,
        $.ref,
        $.scope,
        $.auto,
        $.return,
      ),

    ellipses: (_$) => "...",

    _variadic_arguments_attributes: ($) =>
      repeat1($.variadic_arguments_attribute),

    variadic_arguments_attribute: ($) =>
      choice($.const, $.immutable, $.return, $.scope, $.shared),

    //
    // Function Attributes
    //
    _function_attribute: ($) =>
      choice($._function_attribute_kwd, $.at_attribute),

    member_function_attribute: ($) =>
      choice(
        $.const,
        $.immutable,
        $.inout,
        $.return,
        $.scope,
        $.shared,
        $._function_attribute,
      ),

    //
    // Function Body
    //
    function_body: ($) =>
      choice(
        seq(optional($._in_out_contract_expressions), "=>", $._expr, ";"),
        seq(repeat($._function_contract), optional($.do), $.block_statement),
        seq(repeat($._function_contract), ";"),
        seq(repeat($._function_contract), $._in_out_statement),
      ),

    _specified_function_body: ($) =>
      seq(repeat($._function_contract), optional($.do), $.block_statement),

    //
    // Function Contracts
    //
    _function_contract: ($) =>
      choice($._in_out_contract_expression, $._in_out_statement),

    _in_out_contract_expressions: ($) => repeat1($._in_out_contract_expression),

    _in_out_contract_expression: ($) =>
      choice($.in_contract_expression, $.out_contract_expression),

    _in_out_statement: ($) => choice($.in_statement, $.out_statement),

    in_contract_expression: ($) => seq($.in, "(", $.assert_arguments, ")"),

    out_contract_expression: ($) =>
      seq($.out, "(", optional($.identifier), ";", $.assert_arguments, ")"),

    in_statement: ($) => seq($.in, $.block_statement),

    out_statement: ($) =>
      seq($.out, optional(seq("(", $.identifier, ")")), $.block_statement),

    /**************************************************
     *
     * 3.14 TEMPLATES
     *
     */

    //
    // Template Declaration
    //
    template_declaration: ($) =>
      seq(
        $.template,
        $.identifier,
        $.template_parameters,
        optional($.constraint),
        "{",
        repeat($._declaration),
        "}",
      ),

    //
    // Template Instance
    //
    template_instance: ($) =>
      prec.left(seq($.identifier, $.template_arguments)),

    template_arguments: ($) =>
      prec.right(
        seq(
          "!",
          choice(
            seq("(", optional($._template_argument_list), ")"),
            $._template_single_arg,
          ),
        ),
      ),

    template_argument: ($) => choice($.type, $._expr),

    _template_argument_list: ($) => commaSep1Comma($.template_argument),

    _template_single_arg: ($) =>
      choice(
        $.identifier,
        $.void,
        $._builtin_type,
        $.char_literal,
        $.string_literal,
        $.int_literal,
        $.float_literal,
        $.true,
        $.false,
        $.null,
        $.this,
        $.special_keyword,
      ),

    template_parameter: ($) =>
      prec.right(
        choice(
          $._template_type_parameter,
          $._template_value_parameter,
          $._template_alias_parameter,
          $._template_sequence_parameter,
        ),
      ),

    template_parameters: ($) =>
      seq("(", optional($._template_parameter_list), ")"),

    _template_parameter_list: ($) =>
      prec.right(commaSep1Comma($.template_parameter)),

    _template_type_parameter: ($) =>
      prec.right(
        seq(
          optional($.this),
          $.identifier,
          optional(seq(":", $.type)),
          optional(seq("=", $.type)),
        ),
      ),

    _template_value_parameter: ($) =>
      prec.right(
        seq(
          $.type,
          $.identifier,
          optional(seq(":", $._expr)),
          optional(seq("=", $._expr)),
        ),
      ),

    _template_sequence_parameter: ($) => seq($.identifier, "..."),

    //
    // Template Alias Parameter
    //
    _template_alias_parameter: ($) =>
      prec.right(
        seq(
          $.alias,
          optional($.type),
          $.identifier,
          optional(seq(":", choice($.type, $._expr))),
          optional(seq("=", choice($.type, $._expr))),
        ),
      ),

    //
    // Constraint
    //
    constraint: ($) => seq($.if, "(", $.expression, ")"),

    /**************************************************
     *
     * 3.15 TEMPLATE MIXINS
     *
     */

    mixin_template_declaration: ($) => seq($.mixin, $.template_declaration),

    template_mixin: ($) =>
      seq(
        $.mixin,
        optional(seq(optional($.typeof_expression), ".")),
        sep1($._identifier_or_template_instance, "."),
        optional($.template_arguments),
        optional($.identifier),
        ";",
      ),

    /**************************************************
     *
     * 3.16 CONDITIONAL COMPILATION
     *
     */

    // Note: this syntax with colons is one of the more hare-brained schemes.
    // It makes one want to take the colon and punch someone in the nose with it.
    conditional_declaration: ($) =>
      prec.right(
        choice(
          seq($.condition, $._declaration),
          seq($.condition, $._declaration, $.else, ":", repeat($._declaration)),
          seq($.condition, $._declaration, $.else, $._declaration),
          seq(
            $.condition,
            $._declaration,
            $.else,
            "{",
            repeat($._declaration),
            "}",
          ),
          seq($.condition, "{", repeat($._declaration), "}"),
          seq(
            $.condition,
            "{",
            repeat($._declaration),
            "}",
            $.else,
            ":",
            repeat($._declaration),
          ),
          seq(
            $.condition,
            "{",
            repeat($._declaration),
            "}",
            $.else,
            $._declaration,
          ),
          seq(
            $.condition,
            "{",
            repeat($._declaration),
            "}",
            $.else,
            "{",
            repeat($._declaration),
            "}",
          ),
          seq($.condition, ":", repeat1($._declaration)),
        ),
      ),

    conditional_statement: ($) =>
      prec.right(
        seq($.condition, $.consequence, optional(seq($.else, $.alternative))),
      ),

    condition: ($) =>
      choice($.version_condition, $.debug_condition, $.static_if_condition),

    version_condition: ($) =>
      prec.left(
        seq(
          $.version,
          "(",
          choice($.int_literal, $.identifier, $.unittest, $.assert),
          ")",
        ),
      ),

    version_specification: ($) =>
      seq($.version, "=", choice($.int_literal, $.identifier), ";"),

    debug_condition: ($) =>
      prec.right(
        seq(
          $.debug,
          optional(seq("(", choice($.int_literal, $.identifier), ")")),
        ),
      ),

    debug_specification: ($) =>
      seq($.debug, "=", choice($.int_literal, $.identifier), ";"),

    static_if_condition: ($) => seq($.static, $.if, "(", $.expression, ")"),

    static_foreach_statement: ($) => seq($.static, $.foreach_statement),

    static_foreach_declaration: ($) =>
      choice(
        seq(
          $.static,
          $._foreach,
          "(",
          commaSep1($.foreach_type),
          ";",
          $.expression,
          ")",
          "{",
          repeat($._declaration),
          "}",
        ),
        seq(
          $.static,
          $._foreach,
          "(",
          commaSep1($.foreach_type),
          ";",
          $.expression,
          ")",
          $._declaration,
        ),
        seq(
          $.static,
          $._foreach,
          "(",
          $.foreach_type,
          ";",
          $.expression,
          "..",
          $.expression,
          ")",
          "{",
          repeat($._declaration),
          "}",
        ),
        seq(
          $.static,
          $._foreach,
          "(",
          $.foreach_type,
          ";",
          $.expression,
          "..",
          $.expression,
          ")",
          $._declaration,
        ),
      ),

    static_assert: ($) => seq($.static, $.assert_expression, ";"),

    /**************************************************
     *
     * 3.17 TRAITS
     *
     */
    traits_expression: ($) =>
      seq(
        $.traits,
        "(",
        $.identifier,
        optional(seq(",", $._template_argument_list)),
        ")",
      ),

    /**************************************************
     *
     * 3.18 UNIT TESTS
     *
     */
    unittest_declaration: ($) => seq($.unittest, $.block_statement),
  },

  // It is unfortunate, but many constructs in D require look-ahead
  // to resolve conflicts.
  conflicts: ($) => [
    [$.type_ctor, $.cast_qualifier],
    [$.storage_class, $._attribute],
    [$.parameter_attribute, $.variadic_arguments_attribute],
    [$.parameter_attribute, $.type],
    [$.block_statement, $.aggregate_initializer],
    [$.storage_class, $.synchronized_statement],
    [$.storage_class, $.linkage_attribute],
    [$.deprecated_attribute, $.storage_class],
    [$.type_ctor, $.variadic_arguments_attribute],
    [$._attribute, $.storage_class, $.type],
    [$.foreach_type, $.type],
    [$._specified_function_body],
    [$._statement_no_case_no_default, $._specified_function_body],
    [$._declaration2, $._statement_no_case_no_default],
    [$._declaration_or_statement, $.conditional_declaration],
    [$.storage_class, $.type],
    [$.type_ctor, $.constructor, $.destructor],
    [$.label, $.member_initializer],
    [$.block_statement, $.conditional_declaration],
    [$.block_statement, $.static_foreach_declaration],
    [$._declaration_or_statement, $.static_foreach_declaration],
    [$.expression_list, $.expression],
    [$.primary_expression, $.property_expression],
    [$.parameter, $.template_parameter],
    [$._primary_expr, $.constructor, $.postblit],
    [$._primary_expr, $.mixin_declaration],
    [$._primary_expr, $.destructor],
    [$.template_instance, $.template_mixin],
    [$._qualified_id, $._primary_expr],
    [$._type2, $._primary_expr],
    [$._qualified_id, $.template_parameter],
    [$.pragma_declaration, $.block_statement],
    [$.pragma_declaration, $._declaration_or_statement],
    [$.pragma_declaration, $._declaration2],
    [$.pragma_declaration, $.pragma_statement, $._declaration2],
    [$.alias_reassign, $._primary_expr],
    [$.function_literal, $.parameter_attribute],
    [$.module_declaration, $.storage_class, $._attribute],
    [$.function_body, $._function_contract],
    [$.storage_class, $.function_literal],
    [$.storage_class, $.function_literal, $._attribute],
    [$.storage_class, $.synchronized_statement, $._attribute],
    [$.storage_class, $._type2],
  ],
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

// commaSep1Comma is like commaSep1, but allows for an optional trailing comment
function commaSep1Comma(rule) {
  return seq(rule, repeat(seq(",", rule)), optional(","));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function sep1(rule, delim) {
  return seq(rule, repeat(seq(delim, rule)));
}

function binaryOp(left, op, right) {
  return seq(left, field("operator", op), right);
}
