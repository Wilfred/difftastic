module.exports = grammar({
    name: 'elm',

    rules: {
        file: $ => repeat($._statement),

        _statement: $ => choice(
            $._module,
            $._simple_statements
        ),

        _module: $ => seq(
            'module',
            $.module_identifier,
            'exposing'
        ),

        // Simple statements

        _simple_statements: $ => seq(
            $._simple_statement
        ),

        _simple_statement: $ => choice(
            $.import_statement,
            $.func
            ),

            func: $ => seq(
                $.func_identifier,
                '=',
                $._func_body
                ),

        _func_body: $ => choice(
            //todo
        ),

        import_statement: $ => seq(
            'import',
            $.module_identifier
        ),

        module_identifier: $ => /[A-Z][a-z]*/,

        func_identifier: $ => /[a-z]*/

    }

}
);

function commaSep1(rule) {
    return sep1(rule, ',')
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}