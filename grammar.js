const PREC = {
    // The priorities below are taken from the spec here:
    // https://jsonnet.org/ref/spec.html#associativity_precedence
    // The order is reversed though: In the spec, '1' means high priority
    // but with tree-sitter it means low priority.
    application_indexing: 13,
    unary: 12,
    multiplicative: 11,
    additive: 10,
    bitshift: 9,
    comparison: 8,
    equality: 7,
    bitand: 6,
    bitxor: 5,
    bitor: 4,
    and: 3,
    or: 2,
    // This is not in the spec, which is why we go from 2 to 13 above
    // while in the spec it is going from 1 to 12.
    member: 1,
};

module.exports = grammar({
    name: "jsonnet",
    extras: ($) => [/\s/, $.comment],
    externals: ($) => [$._string_start, $._string_content, $._string_end],
    word: ($) => $._ident,
    inline: ($) => [$.h, $.objinside],
    conflicts: () => [],

    rules: {
        document: ($) => $.expr,

        comment: () =>
            token(
                choice(
                    seq("//", /.*/),
                    seq("#", /.*/),
                    seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
                ),
            ),

        expr: ($) =>
            choice(
                $.null,
                $.true,
                $.false,
                $.self,
                $.dollar,
                $.string,
                $.number,
                $._object,
                $._array,
                $._array_for,
                $._expr_id,
                $._expr_expr,
                $._super_id,
                $._super_expr,
                $._expr_args,
                $.id,
                $.local_bind,
                $._conditional,
                $._binary_expr,
                $._unary_expr,
                $._expr_objinside,
                $.anonymous_function,
                $._assert_expr,
                $.import,
                $.importstr,
                $.expr_error,
                $._expr_super,
                $._parenthesis,
            ),

        // Literals
        null: () => "null",
        true: () => "true",
        false: () => "false",

        // Keywords
        self: () => "self",
        dollar: () => "$",
        super: () => "super",
        local: () => "local",
        tailstrict: () => "tailstrict",

        // Types
        number: ($) => $._number,
        string: ($) => $._string,
        _object: ($) => seq("{", optional($.objinside), "}"),
        _array: ($) => seq("[", commaSep($.expr, true), "]"),

        _array_for: ($) =>
            seq(
                "[",
                $.expr,
                optional(","),
                $.forspec,
                optional($.compspec),
                "]",
            ),

        _expr_id: ($) =>
            prec(PREC.application_indexing, seq($.expr, ".", $.id)),

        _expr_expr: ($) =>
            prec(
                PREC.application_indexing,
                seq(
                    $.expr,
                    "[",
                    optional($.expr),
                    optional(
                        seq(
                            ":",
                            optional($.expr),
                            optional(seq(":", optional($.expr))),
                        ),
                    ),
                    "]",
                ),
            ),

        _super_id: ($) => seq($.super, ".", $.id),
        _super_expr: ($) => seq($.super, "[", $.expr, "]"),

        _expr_args: ($) =>
            prec(
                PREC.application_indexing,
                seq($.expr, "(", optional($.args), ")", optional($.tailstrict)),
            ),

        id: ($) => $._ident,
        // This use of an intermediate rule for identifiers is to
        // overcome some limitations in ocaml-tree-sitter-semgrep.
        // Indeed, ocaml-tree-sitter-semgrep can't override terminals (here was id)
        // that are also mentioned in the 'word:' directive.
        _ident: () => /[_a-zA-Z][_a-zA-Z0-9]*/,

        local_bind: ($) =>
            prec.right(seq($.local, commaSep1($.bind, false), ";", $.expr)),

        _conditional: ($) =>
            prec.right(
                seq(
                    "if",
                    field("condition", $.expr),
                    "then",
                    field("consequence", $.expr),
                    optional(seq("else", field("alternative", $.expr))),
                ),
            ),

        _binary_expr: ($) => {
            const table = [
                [PREC.multiplicative, choice("*", "/", "%")],
                [PREC.additive, choice("+", "-")],
                [PREC.bitshift, choice("<<", ">>")],
                [PREC.comparison, choice("<", "<=", ">", ">=")],
                [PREC.equality, choice("==", "!=")],
                [PREC.bitand, "&"],
                [PREC.bitxor, "^"],
                [PREC.bitor, "|"],
                [PREC.and, "&&"],
                [PREC.or, "||"],
            ];
            return choice(
                ...table.map(([precedence, operator]) =>
                    prec.left(
                        precedence,
                        seq(
                            field("left", $.expr),
                            field("operator", operator),
                            field("right", $.expr),
                        ),
                    ),
                ),
            );
        },

        _unary_expr: ($) =>
            prec(
                PREC.unary,
                seq(field("operator", $.unaryop), field("argument", $.expr)),
            ),

        unaryop: () => choice("-", "+", "!", "~"),

        _expr_objinside: ($) => seq($.expr, "{", $.objinside, "}"),

        anonymous_function: ($) =>
            prec.right(
                seq(
                    "function",
                    "(",
                    optional(field("params", $.params)),
                    ")",
                    field("body", $.expr),
                ),
            ),

        _assert_expr: ($) => prec.right(seq($.assert, ";", $.expr)),

        // import string
        import: ($) => seq("import", $.string),

        // importstr string
        importstr: ($) => seq("importstr", $.string),

        // error expr
        expr_error: ($) => prec.right(seq("error", $.expr)),

        _expr_super: ($) => seq($.expr, "in", $.super),

        _parenthesis: ($) => seq("(", $.expr, ")"),

        objinside: ($) =>
            choice(
                // seq($.member, repeat(seq(",", $.member)), optional(",")),
                commaSep1($.member, true),
                seq(
                    repeat(seq($.objlocal, ",")),
                    "[",
                    $.expr,
                    "]",
                    ":",
                    $.expr,
                    repeat(seq(",", $.objlocal)),
                    optional(","),
                    $.forspec,
                    optional($.compspec),
                ),
            ),

        member: ($) =>
            prec.right(PREC.member, choice($.objlocal, $.assert, $.field)),

        field: ($) =>
            choice(
                seq($.fieldname, optional("+"), $.h, $.expr),
                seq($.fieldname, "(", optional($.params), ")", $.h, $.expr),
            ),

        h: () => choice(":", "::", ":::"),

        objlocal: ($) => seq($.local, $.bind),

        compspec: ($) => repeat1(choice($.forspec, $.ifspec)),
        forspec: ($) => seq("for", $.id, "in", $.expr),
        ifspec: ($) => seq("if", $.expr),

        fieldname: ($) =>
            prec.right(choice($.id, $.string, seq("[", $.expr, "]"))),

        // assert in objects
        assert: ($) => seq("assert", $.expr, optional(seq(":", $.expr))),

        bind: ($) =>
            choice(
                seq($.id, "=", $.expr),
                prec.right(
                    seq(
                        field("function", $.id),
                        "(",
                        optional(field("params", $.params)),
                        ")",
                        "=",
                        field("body", $.expr),
                    ),
                ),
            ),

        args: ($) =>
            choice(
                seq(
                    $.expr,
                    repeat(seq(",", $.expr)),
                    repeat(seq(",", $.named_argument)),
                    optional(","),
                ),
                seq(
                    $.named_argument,
                    repeat(seq(",", $.named_argument)),
                    optional(","),
                ),
            ),
        named_argument: ($) => seq($.id, "=", $.expr),

        params: ($) => commaSep1($.param, true),
        param: ($) =>
            seq(
                field("identifier", $.id),
                optional(seq("=", field("value", $.expr))),
            ),

        // COPIED FROM: tree-sitter-json
        _number: () => {
            const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F]+/);

            const decimal_digits = /\d+/;
            const signed_integer = seq(
                optional(choice("-", "+")),
                decimal_digits,
            );
            const exponent_part = seq(choice("e", "E"), signed_integer);

            const binary_literal = seq(choice("0b", "0B"), /[0-1]+/);

            const octal_literal = seq(choice("0o", "0O"), /[0-7]+/);

            const decimal_integer_literal = seq(
                optional(choice("-", "+")),
                choice("0", seq(/[1-9]/, optional(decimal_digits))),
            );

            const decimal_literal = choice(
                seq(
                    decimal_integer_literal,
                    ".",
                    optional(decimal_digits),
                    optional(exponent_part),
                ),
                seq(".", decimal_digits, optional(exponent_part)),
                seq(decimal_integer_literal, optional(exponent_part)),
            );

            return token(
                choice(
                    hex_literal,
                    decimal_literal,
                    binary_literal,
                    octal_literal,
                ),
            );
        },

        _string: ($) =>
            choice(
                // Single Quotes
                seq(
                    optional("@"),
                    alias($._single, $.string_start),
                    alias($._single, $.string_end),
                ),
                seq(
                    optional("@"),
                    alias($._single, $.string_start),
                    alias($._str_single, $.string_content),
                    alias($._single, $.string_end),
                ),
                // Double Quotes
                seq(
                    optional("@"),
                    alias($._double, $.string_start),
                    alias($._double, $.string_end),
                ),
                seq(
                    optional("@"),
                    alias($._double, $.string_start),
                    alias($._str_double, $.string_content),
                    alias($._double, $.string_end),
                ),
                // ||| Quotes
                seq(
                    optional("@"),
                    alias($._string_start, $.string_start),
                    alias($._string_content, $.string_content),
                    alias($._string_end, $.string_end),
                ),
            ),

        _single: () => "'",
        _double: () => '"',

        _str_double: ($) =>
            repeat1(
                choice(
                    token.immediate(prec(1, /[^\\"\n]+/)),
                    $.escape_sequence,
                ),
            ),

        _str_single: ($) =>
            repeat1(
                choice(
                    token.immediate(prec(1, /[^\\'\n]+/)),
                    $.escape_sequence,
                ),
            ),

        escape_sequence: () =>
            token.immediate(seq("\\", /(\"|\\|\/|b|f|n|r|t|u)/)),
    },
});

function commaSep1(rule, trailing) {
    if (trailing) {
        return seq(rule, repeat(seq(",", rule)), optional(","));
    } else {
        return seq(rule, repeat(seq(",", rule)));
    }
}

function commaSep(rule, trailing) {
    return optional(commaSep1(rule, trailing));
}
