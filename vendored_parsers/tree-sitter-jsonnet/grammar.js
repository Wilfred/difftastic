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
        document: ($) => $._expr,

        comment: () =>
            token(
                choice(
                    seq("//", /.*/),
                    seq("#", /.*/),
                    seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
                ),
            ),

        _expr: ($) =>
            choice(
                $.null,
                $.true,
                $.false,
                $.self,
                $.dollar,
                $.string,
                $.number,
                $.object,
                $.array,
                $.forloop,
                $.fieldaccess,
                $.indexing,
                $.fieldaccess_super,
                $.indexing_super,
                $.functioncall,
                $.id,
                $.local_bind,
                $.conditional,
                $.binary,
                $.unary,
                $.implicit_plus,
                $.anonymous_function,
                $._assert_expr,
                $.import,
                $.importstr,
                $.error,
                $.in_super,
                $.parenthesis,
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
        object: ($) => seq("{", optional($.objinside), "}"),
        array: ($) => seq("[", commaSep($._expr, true), "]"),

        forloop: ($) =>
            seq(
                "[",
                $._expr,
                optional(","),
                $.forspec,
                optional($.compspec),
                "]",
            ),

        fieldaccess: ($) =>
            prec(
                PREC.application_indexing,
                seq($._expr, ".", field("last", $.id)),
            ),

        indexing: ($) =>
            prec(
                PREC.application_indexing,
                seq(
                    $._expr,
                    "[",
                    optional($._expr),
                    optional(
                        seq(
                            ":",
                            optional($._expr),
                            optional(seq(":", optional($._expr))),
                        ),
                    ),
                    "]",
                ),
            ),

        fieldaccess_super: ($) => seq($.super, ".", $.id),
        indexing_super: ($) => seq($.super, "[", $._expr, "]"),

        functioncall: ($) =>
            prec(
                PREC.application_indexing,
                seq(
                    $._expr,
                    "(",
                    optional($.args),
                    ")",
                    optional($.tailstrict),
                ),
            ),

        id: ($) => $._ident,
        // This use of an intermediate rule for identifiers is to
        // overcome some limitations in ocaml-tree-sitter-semgrep.
        // Indeed, ocaml-tree-sitter-semgrep can't override terminals (here was id)
        // that are also mentioned in the 'word:' directive.
        _ident: () => /[_a-zA-Z][_a-zA-Z0-9]*/,

        local_bind: ($) =>
            prec.right(seq($.local, commaSep1($.bind, false), ";", $._expr)),

        conditional: ($) =>
            prec.right(
                seq(
                    "if",
                    field("condition", $._expr),
                    "then",
                    field("consequence", $._expr),
                    optional(seq("else", field("alternative", $._expr))),
                ),
            ),

        multiplicative: () => choice("*", "/", "%"),
        additive: () => choice("+", "-"),
        bitshift: () => choice("<<", ">>"),
        comparison: () => choice("<", "<=", ">", ">=", "in"),
        equality: () => choice("==", "!="),
        bitand: () => "&",
        bitxor: () => "^",
        bitor: () => "|",
        and: () => "&&",
        or: () => "||",

        binary: ($) => {
            const table = [
                [PREC.multiplicative, $.multiplicative],
                [PREC.additive, $.additive],
                [PREC.bitshift, $.bitshift],
                [PREC.comparison, $.comparison],
                [PREC.equality, $.equality],
                [PREC.bitand, $.bitand],
                [PREC.bitxor, $.bitxor],
                [PREC.bitor, $.bitor],
                [PREC.and, $.and],
                [PREC.or, $.or],
            ];
            return choice(
                ...table.map(([precedence, operator]) =>
                    prec.left(
                        precedence,
                        seq(
                            field("left", $._expr),
                            field("operator", operator),
                            field("right", $._expr),
                        ),
                    ),
                ),
            );
        },

        unary: ($) =>
            prec(
                PREC.unary,
                seq(field("operator", $.unaryop), field("argument", $._expr)),
            ),

        unaryop: () => choice("-", "+", "!", "~"),

        implicit_plus: ($) => seq($._expr, $.object),

        anonymous_function: ($) =>
            prec.right(
                seq(
                    "function",
                    "(",
                    optional(field("params", $.params)),
                    ")",
                    field("body", $._expr),
                ),
            ),

        _assert_expr: ($) => prec.right(seq($.assert, ";", $._expr)),

        // import string
        import: ($) => seq("import", $.string),

        // importstr string
        importstr: ($) => seq("importstr", $.string),

        // error expr
        error: ($) => prec.right(seq("error", $._expr)),

        in_super: ($) => prec(PREC.comparison, seq($._expr, "in", $.super)),

        parenthesis: ($) => seq("(", $._expr, ")"),

        objinside: ($) =>
            choice(
                // seq($.member, repeat(seq(",", $.member)), optional(",")),
                commaSep1($.member, true),
                $.objforloop,
            ),

        objforloop: ($) =>
            seq(
                repeat(seq($.objlocal, ",")),
                $.field,
                repeat(seq(",", $.objlocal)),
                optional(","),
                $.forspec,
                optional($.compspec),
            ),

        member: ($) =>
            prec.right(PREC.member, choice($.objlocal, $.assert, $.field)),

        field: ($) =>
            choice(
                seq($.fieldname, optional("+"), $.h, $._expr),
                seq(
                    field("function", $.fieldname),
                    "(",
                    optional($.params),
                    ")",
                    $.h,
                    $._expr,
                ),
            ),

        h: () => choice(":", "::", ":::"),

        objlocal: ($) => seq($.local, $.bind),

        compspec: ($) => repeat1(choice($.forspec, $.ifspec)),
        forspec: ($) => seq("for", $.id, "in", $._expr),
        ifspec: ($) => seq("if", $._expr),

        fieldname: ($) =>
            prec.right(choice($.id, $.string, seq("[", $._expr, "]"))),

        // assert in objects
        assert: ($) => seq("assert", $._expr, optional(seq(":", $._expr))),

        bind: ($) =>
            choice(
                seq($.id, "=", $._expr),
                prec.right(
                    seq(
                        field("function", $.id),
                        "(",
                        optional(field("params", $.params)),
                        ")",
                        "=",
                        field("body", $._expr),
                    ),
                ),
            ),

        args: ($) =>
            choice(
                seq(
                    $._expr,
                    repeat(seq(",", $._expr)),
                    repeat(seq(",", $.named_argument)),
                    optional(","),
                ),
                seq(
                    $.named_argument,
                    repeat(seq(",", $.named_argument)),
                    optional(","),
                ),
            ),
        named_argument: ($) => seq($.id, "=", $._expr),

        params: ($) => commaSep1($.param, true),
        param: ($) =>
            seq(
                field("identifier", $.id),
                optional(seq("=", field("value", $._expr))),
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
