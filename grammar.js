const PREC = {
    // The priority below are taken from the spec here:
    // https://jsonnet.org/ref/spec.html#associativity_precedence
    // The order is reversed though. In the spec, '1' means high priority
    // but with tree-sitter it means low priority.
    application_indexing: 13,
    //TODO:
    unary: 12,
    multiplicative: 11,
    additive: 10,
    bitshift: 9,
    comparison: 8,
    equal: 7,
    bitand: 6,
    bitxor: 5,
    bitor: 4,
    and: 3,
    or: 2,
    // This is not in the spec, which is why we go from 2 to 13 above
    // while in the spec it was going from 1 to 12.
    member: 1,
};

module.exports = grammar({
    name: "jsonnet",
    extras: ($) => [/\s/, $.comment],
    externals: ($) => [$._string_start, $._string_content, $._string_end],
    word: $ => $.id,
    inline: ($) => [$.h, $.objinside],
    conflicts: () => [],

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
                choice(
                    $.null,
                    $.true,
                    $.false,
                    $.self,
                    $.dollar,
                    $.string,
                    $.number,
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
                    prec(PREC.application_indexing, seq($.expr, ".", $.id)),
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
                    prec.right(seq(
                        "if",
                        field("condition", $.expr),
                        "then",
                        field("consequence", $.expr),
                        optional(seq("else", field("alternative", $.expr)))
                    )),
                    $._binary_expr,
                    prec.left(
                        seq(
                            field("operator", $.unaryop),
                            field("argument", $.expr)
                        )
                    ),
                    seq($.expr, "{", $.objinside, "}"),
                    $.anonymous_function,
                    prec.right(seq($.assert, ";", $.expr)),
                    $.import,
                    $.importstr,
                    $.expr_error,
                    seq($.expr, "in", $.super),
                    seq("(", $.expr, ")")
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
	
	_binary_expr: ($) =>
	    prec.left(
                seq(
                    field("left", $.expr),
                    field("operator", $.binaryop),
                    field("right", $.expr)
                )
        ),
	
        // TODO: Precendence?
        binaryop: () =>
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
                ),

        unaryop: () => choice("-", "+", "!", "~"),
	
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
            prec.right(PREC.member, choice($.objlocal, $.assert, $.field)),

        field: ($) =>
            choice(
                seq($.fieldname, optional("+"), $.h, $.expr),
                seq($.fieldname, "(", optional($.params), ")", $.h, $.expr)
            ),

        h: () => choice(":", "::", ":::"),

	// assert in objects
        assert: ($) => seq("assert", $.expr, optional(seq(":", $.expr))),
	
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
        named_argument: ($) => seq($.id, "=", $.expr),

        id: () => /[_a-zA-Z][_a-zA-Z0-9]*/,

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
