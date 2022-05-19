/*
expr ∈ Expr ::= null | true | false | self | $ | string | number
|   { objinside }
|   [ [ expr { , expr } [ , ] ] ]
|   [ expr [ , ] forspec compspec ]
|   expr . id
|   expr [ [ expr ] [ : [ expr ] [ : [ expr ] ] ] ]
|   super . id
|   super [ expr ]
|   expr ( [ args ] )
|   id
|   local bind { , bind } ; expr
|   if expr then expr [ else expr ]
|   expr binaryop expr
|   unaryop expr
|   expr { objinside }
|   function ( [ params ] ) expr
|   assert ; expr
|   import string
|   importstr string
|   error expr
|   expr in super
objinside   ::= member { , member } [ , ]
|   { objlocal , } [ expr ] : expr [ { , objlocal } ] [ , ] forspec compspec
member  ::= objlocal | assert | field
field ∈ Field   ::= fieldname [ + ] h expr
|   fieldname ( [ params ] ) h expr
h ∈ Hidden  ::= : | :: | :::
objlocal    ::= local bind
compspec ∈ CompSpec ::= { forspec | ifspec }
forspec ::= for id in expr
ifspec  ::= if expr
fieldname   ::= id | string | [ expr ]
assert  ::= assert expr [ : expr ]
bind ∈ Bind ::= id = expr
|   id ( [ params ] ) = expr
args    ::= expr { , expr } { , id = expr } [ , ]
|   id = expr { , id = expr } [ , ]
params  ::= param { , param } [ , ]
param   ::= id [ = expr ]
binaryop    ::= * | / | % | + | - | << | >> | < | <= | > | >= | == | != | in | & | ^ | | | && | ||
unaryop ::= - | + | ! | ~
 */

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
                    seq($.expr, "(", optional($.args), ")"),
                    $.id,
                    seq("local", commaSep1($.bind, false), ";", $.expr),
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
                    seq($.expr, "in", $.super)
                )
            ),

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

        forspec: ($) => seq("for", $.id, "in", $.expr),
        ifspec: ($) => seq("if", $.expr),

        compspec: ($) => repeat1(choice($.forspec, $.ifspec)),

        // Literals
        null: () => "null",
        true: () => "true",
        false: () => "false",
        self: () => "self",
        dollar: () => "$",
        super: () => "super",

        objinside: ($) =>
            choice(
                seq($.member, repeat(seq(",", $.member)), optional(",")),
                seq(
                    repeat(seq($.objlocal, ",")),
                    "[",
                    $.expr,
                    "]",
                    ":",
                    $.expr,
                    optional(seq(",", $.objlocal)),
                    optional(","),
                    $.forspec,
                    optional($.compspec)
                )
            ),

        objlocal: ($) => seq("local", $.bind),
        member: ($) => prec.right(choice($.objlocal, $.assert, $.field)),
        params: ($) => commaSep1($.param, true),
        param: ($) =>
            seq(
                field("identifier", $.id),
                optional(seq("=", field("value", $.expr)))
            ),
        bind: ($) =>
            choice(
                seq($.id, "=", $.expr),
                seq(
                    field("function", $.id),
                    "(",
                    optional(field("params", $.params)),
                    ")",
                    "=",
                    field("body", $.expr)
                )
            ),

        field: ($) =>
            choice(
                seq($.fieldname, optional("+"), $.h, $.expr),
                seq($.fieldname, "(", optional($.params), ")", $.h, $.expr)
            ),
        fieldname: ($) =>
            prec.right(choice($.id, $.string, seq("[", $.expr, "]"))),

        assert: ($) => seq("assert", $.expr, optional(seq(":", $.expr))),
        named_argument: ($) => seq($.id, "=", $.expr),
        args: ($) =>
            choice(
                seq(
                    $.expr,
                    optional(seq(",", $.expr)),
                    optional(seq(",", $.named_argument)),
                    optional(",")
                ),
                seq(
                    $.named_argument,
                    optional(seq(",", $.named_argument)),
                    optional(",")
                )
            ),

        id: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
        h: () => choice(":", "::", ":::"),

        // TODO: Precendence?
        binaryop: () =>
            prec.right(
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
                    "in",
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
                seq(optional("@"), '"', '"'),
                seq(
                    optional("@"),
                    '"',
                    alias($.string_content_double, "string_content"),
                    '"'
                ),
                seq(optional("@"), "'", "'"),
                seq(
                    optional("@"),
                    "'",
                    alias($.string_content_single, "string_content"),
                    "'"
                ),
                // TODO: ||| <content> |||
                seq(
                    optional("@"),
                    $._string_start,
                    $._string_content,
                    $._string_end
                )
            ),

        string_content_double: ($) =>
            repeat1(
                choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence)
            ),

        string_content_single: ($) =>
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
