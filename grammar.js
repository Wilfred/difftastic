module.exports = grammar({
    name: 'elm',

    rules: {
        file: $ => repeat($._statement),

        _statement: $ => choice(
            $._module,
            $._imports,
            $._custom_type_statements,
            $._simple_statements
        ),

        _custom_type_statements: $ => choice(
            $.custom_type_statement
        ),

        custom_type_statement: $ => seq(
            'type',
            $.custom_type_identifier,
            '=',
            $.custom_type_variant,
            repeat(
                seq(
                    '|',
                    $.custom_type_variant
                )
            )
        ),

        _module: $ => choice(
            $.module_statement,
            $.module_statement_with_exposing,
        ),

        module_statement: $ => seq(
            'module',
            $.dotted_name
        ),

        module_statement_with_exposing: $ => seq(
            'module',
            $.dotted_name,
            'exposing',
            $._exposing_list
        ),

        _imports: $ => choice(
            $.import_statement,
            $.import_statement_with_exposing,
        ),

        _exposing_list: $ => seq(
            '(',
            commaSep1(choice(
                $.func_identifier,
                $.type_alias_identifier,
                $._type_alias_identifier_exposing_all
            )),
            ')'
        ),

        // Simple statements

        _simple_statements: $ => seq(
            $._simple_statement
        ),

        _simple_statement: $ => choice(
            $.func_statement
        ),

        func_statement: $ => seq(
            $.func_identifier,
            repeat($.func_param),
            '=',
            $._func_body
        ),

        _func_body: $ => choice(
            $.func_call,
            $._math_with_model,
            $.case_call
        ),

        case_call: $ => prec(2, seq(
            'case',
            $.func_param,
            'of',
            repeat1(
                seq(
                    $.custom_type_identifier,
                    '->',
                    $._func_body
                )
            )
        )),

        func_call: $ => prec(2,
            choice(
                seq(
                    prec.left(2, $._func_identifiers),
                    prec.left(1, optional($.func_call_params))
                ),
            )
        ),

        func_call_params: $ => repeat1(
            choice(
                $.inline_record,
                $.list,
                $._basic_datatypes
                // $.custom_type_identifier
            )
        ),

        import_statement: $ => seq(
            'import',
            $.dotted_name
        ),

        import_statement_with_exposing: $ => seq(
            'import',
            $.dotted_name,
            'exposing',
            $._exposing_list
        ),

        inline_record: $ => seq(
            '{',
            commaSep1($._assignment),
            '}',
        ),

        list: $ => choice(
            seq(
                '[',
                commaSep1($._basic_datatypes),
                ']',
            ),
            seq(
                '[',
                ']'
            ),
            seq(
                '[',
                commaSep1($.func_call),
                ']'
            )
        ),

        _assignment: $ => seq(
            $.record_entry,
            '=',
            choice(
                $.int,
                $._func_identifiers
            )
        ),

        _math_with_model: $ => seq(
            $.func_param,
            choice(
                '+',
                '-',
                '*',
                '/',
            ),
            choice(
                $.int,
                $._func_identifiers
            )
        ),

        dotted_name: $ => sep1($.module_identifier, '.'),

        module_identifier: $ => /[A-Z][a-z]*/,

        type_alias_identifier: $ => /[A-Z][a-z]*/,

        custom_type_identifier: $ => /[A-Z][a-z]*/,

        custom_type_variant: $ => /[A-Z][A-Za-z]*/,

        _type_alias_identifier_exposing_all: $ => seq(
            $.type_alias_identifier,
            '(..)'
        ),

        _func_identifiers: $ => choice(
            $.func_identifier,
            $._module_func_identifier
        ),

        func_identifier: $ => /[a-z][A-Za-z]*/,

        _module_func_identifier: $ => seq(
            $.module_identifier,
            '.',
            choice(
                $.func_identifier,
                $.type_alias_identifier,
            )
        ),

        func_param: $ => /[a-z][A-Za-z]*/,

        record_entry: $ => /[a-z][A-Za-z]*/,

        int: $ => /\d+/,

        string: $ => choice(
            seq(
                '"',
                /.*/,
                '"'
            ),
            seq(
                '"""',
                /.*/,
                '"""'
            ),
        ),

        _basic_datatypes: $ => choice(
            $.int,
            $.string
        )

    }

}
);

function commaSep1(rule) {
    return sep1(rule, ',')
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}