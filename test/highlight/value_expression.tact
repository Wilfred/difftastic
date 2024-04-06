struct Basic {
    prop: Int;
}

extends fun c(self: Int) {
//            ^ variable.parameter

    /* call_expression */
    95.toString();
    // ^ function

    /* field_expression */
    context().sender;
    ^ function
            ^ variable

    /* static_call_expression */
    now();
    // <- function.builtin
    now ();
    // <- function.builtin

    /* parenthesized_expression */
    ( 10 );
    // ^ number

    /* instance_expression */
    Basic{value: ton("1")};
    // <- constructor
    //   ^ punctuation.bracket
    //    ^ property
    //         ^ punctuation.delimiter
    //           ^ function.builtin
    //              ^ punctuation.bracket
    //               ^ string
    //                  ^ punctuation.bracket
    //                   ^ punctuation.bracket
    //                    ^ punctuation.delimiter

    /* integer */
    0b101;
    // <- number
    //   ^ punctuation.delimiter
    0xf0f;
    // <- number
    0o707;
    // <- number
    909;
    // <- number

    /* boolean */
    true;
    // <- constant.builtin
    //  ^ punctuation.delimiter
    false;
    // <- constant.builtin

    /* identifier */
    name;
    // <- variable
    //  ^ punctuation.delimiter

    /* null */
    null;
    // <- constant.builtin
    //  ^ punctuation.delimiter

    /* initOf */
    initOf Contract(123, 123);
    // <- keyword
    //     ^ constructor

    /* string */
    "// \\ \" \n\r \t\v \b\f \u{0} \u{FFFFFF} \u0000 \xFF";
    // <- string
    //  ^ string.special

    /* self, not as a builtin, but as a parameter */
    self.toString();
    // <- variable.parameter
    //   ^ function
}
