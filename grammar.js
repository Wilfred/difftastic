const PREC_DEFAULT = 1;
const PREC_MEMBER = 2;
const PREC_BINARY = 3;

module.exports = grammar({
    name: "jsonnet",
    extras: ($) => [/\s/, $.comment],
    externals: ($) => [$._string_start, $._string_content, $._string_end],
    inline: ($) => [$.h, $.objinside],

    rules: {
        document: ($) => $.expr,

        comment: () =>
            token(
                choice(
                    seq("//", /.*/),
                    seq("#", /.*/),
                    seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
                )
            ),

        expr: ($) =>
            prec.right(
                PREC_DEFAULT,
                choice(
                    $.null,
                    $.true,
                    $.false,
                    $.self,
                    $.dollar,
                    $.number,
                    $.super,
                    $.string,
                    seq("{", optional($.objinside), "}"),
                    seq("[", commaSep($.expr, true), "]"),
                    seq(
                        "[",
                        $.expr,
                        optional(","),
                        $.forspec,
                        optional($.compspec),
                        "]"
                    ),
                    seq($.expr, ".", $.id),
                    seq(
                        $.expr,
                        "[",
                        optional($.expr),
                        optional(
                            seq(
                                ":",
                                optional($.expr),
                                optional(seq(":", optional($.expr)))
                            )
                        ),
                        "]"
                    ),
                    seq($.super, ".", $.id),
                    seq($.super, "[", $.expr, "]"),
                    seq($.expr, "(", optional($.args), ")", optional($.tailstrict)),
                    $.id,
                    $.local_bind,
                    seq(
                        "if",
                        field("condition", $.expr),
                        "then",
                        field("consequence", $.expr),
                        optional(seq("else", field("alternative", $.expr)))
                    ),
                    prec.left(
                        seq(
                            field("left", $.expr),
                            field("operator", $.binaryop),
                            field("right", $.expr)
                        )
                    ),
                    prec.left(
                        seq(
                            field("operator", $.unaryop),
                            field("argument", $.expr)
                        )
                    ),
                    seq($.expr, "{", $.objinside, "}"),
                    $.anonymous_function,
                    seq($.assert, ";", $.expr),
                    $.import,
                    $.importstr,
                    $.expr_error,
                    seq($.expr, "in", $.super),
                    seq("(", $.expr, ")")
                )
            ),

        local_bind: ($) =>
            prec.right(seq($.local, commaSep1($.bind, false), ";", $.expr)),

        anonymous_function: ($) =>
            prec.right(
                seq(
                    "function",
                    "(",
                    optional(field("params", $.params)),
                    ")",
                    field("body", $.expr)
                )
            ),

        // import string
        import: ($) => seq("import", $.string),

        // importstr string
        importstr: ($) => seq("importstr", $.string),

        // error expr
        expr_error: ($) => prec.right(seq("error", $.expr)),

        // Literals
        null: () => "null",
        true: () => "true",
        false: () => "false",
        self: () => "self",
        dollar: () => "$",
        super: () => "super",
        local: () => "local",
	tailstrict: () => "tailstrict",

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
                    optional($.compspec)
                )
            ),

        member: ($) =>
            prec.right(PREC_MEMBER, choice($.objlocal, $.assert, $.field)),

        field: ($) =>
            choice(
                seq($.fieldname, optional("+"), $.h, $.expr),
                seq($.fieldname, "(", optional($.params), ")", $.h, $.expr)
            ),

        h: () => choice(":", "::", ":::"),

        objlocal: ($) => seq($.local, $.bind),

        compspec: ($) => repeat1(choice($.forspec, $.ifspec)),
        forspec: ($) => seq("for", $.id, "in", $.expr),
        ifspec: ($) => seq("if", $.expr),

        fieldname: ($) =>
            prec.right(choice($.id, $.string, seq("[", $.expr, "]"))),

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
                        field("body", $.expr)
                    )
                )
            ),

        params: ($) => commaSep1($.param, true),
        param: ($) =>
            seq(
                field("identifier", $.id),
                optional(seq("=", field("value", $.expr)))
            ),

        assert: ($) => seq("assert", $.expr, optional(seq(":", $.expr))),
        named_argument: ($) => seq($.id, "=", $.expr),
        args: ($) =>
            choice(
                seq(
                    $.expr,
                    repeat(seq(",", $.expr)),
                    repeat(seq(",", $.named_argument)),
                    optional(",")
                ),
                seq(
                    $.named_argument,
                    repeat(seq(",", $.named_argument)),
                    optional(",")
                )
            ),

        id: () => /[_a-zA-Z][_a-zA-Z0-9]*/,

        // TODO: Precendence?
        binaryop: () =>
            prec.right(
                PREC_BINARY,
                choice(
                    "*",
                    "/",
                    "%",
                    "+",
                    "-",
                    "<<",
                    ">>",
                    "<",
                    "<=",
                    ">",
                    ">=",
                    "==",
                    "!=",
                    // "in",
                    "&",
                    "^",
                    "|",
                    "&&",
                    "||"
                )
            ),

        unaryop: () => choice("-", "+", "!", "~"),

        // COPIED FROM: tree-sitter-json
        number: () => {
            const hex_literal = seq(choice("0x", "0X"), /[\da-fA-F]+/);

            const decimal_digits = /\d+/;
            const signed_integer = seq(
                optional(choice("-", "+")),
                decimal_digits
            );
            const exponent_part = seq(choice("e", "E"), signed_integer);

            const binary_literal = seq(choice("0b", "0B"), /[0-1]+/);

            const octal_literal = seq(choice("0o", "0O"), /[0-7]+/);

            const decimal_integer_literal = seq(
                optional(choice("-", "+")),
                choice("0", seq(/[1-9]/, optional(decimal_digits)))
            );

            const decimal_literal = choice(
                seq(
                    decimal_integer_literal,
                    ".",
                    optional(decimal_digits),
                    optional(exponent_part)
                ),
                seq(".", decimal_digits, optional(exponent_part)),
                seq(decimal_integer_literal, optional(exponent_part))
            );

            return token(
                choice(
                    hex_literal,
                    decimal_literal,
                    binary_literal,
                    octal_literal
                )
            );
        },

        string: ($) =>
            choice(
                // Single Quotes
                seq(
                    optional("@"),
                    alias($._single, $.string_start),
                    alias($._single, $.string_end)
                ),
                seq(
                    optional("@"),
                    alias($._single, $.string_start),
                    alias($._str_single, $.string_content),
                    alias($._single, $.string_end)
                ),
                // Double Quotes
                seq(
                    optional("@"),
                    alias($._double, $.string_start),
                    alias($._double, $.string_end)
                ),
                seq(
                    optional("@"),
                    alias($._double, $.string_start),
                    alias($._str_double, $.string_content),
                    alias($._double, $.string_end)
                ),
                // ||| Quotes
                seq(
                    optional("@"),
                    alias($._string_start, $.string_start),
                    alias($._string_content, $.string_content),
                    alias($._string_end, $.string_end)
                )
            ),

        _single: () => "'",
        _double: () => '"',

        _str_double: ($) =>
            repeat1(
                choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence)
            ),

        _str_single: ($) =>
            repeat1(
                choice(token.immediate(prec(1, /[^\\'\n]+/)), $.escape_sequence)
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
