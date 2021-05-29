function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}

module.exports = grammar({
    name: 'SQL',
    rules: {
        source_file: $ => repeat($._statement),
        _statement: $ => seq(choice(
            $.select_statement,
            $.create_type_statement,
            $.create_domain_statement,
            $.create_index_statement,
            $.create_table_statement,
        ), optional(';')),
        create_domain_statement: $ => seq(
            caseInsensitive('CREATE DOMAIN'), 
            $.identifier,
            optional(seq(
                caseInsensitive('AS'),
                $.data_type,
            ))
        ),
        create_type_statement: $ => seq(
            caseInsensitive('CREATE TYPE'), 
            $.identifier,
            caseInsensitive('AS'),
            $.parameters
        ),
        create_index_statement: $ => seq(
            caseInsensitive('CREATE INDEX'), 
            field('name', $.identifier),
            caseInsensitive('ON'),
            field('table', $.identifier),
            optional($.using_clause),
            $.index_table_parameters,
            optional($.where_clause)
        ),
        create_table_column_parameter: $ => seq(
            field("name", $.identifier),
            field("type", $.identifier),
            repeat(choice(
                $.column_default,
                $.primary_key_constraint,
                $.check_constraint,
                $.references_constraint,
                $.unique_constraint,
                $.null_constraint,
            )),
        ),
        column_default: $ => seq(
            caseInsensitive('DEFAULT'), 
            // TODO: this should be specific variable-free expression https://www.postgresql.org/docs/9.1/sql-createtable.html
            // TODO: simple expression to use for check and default
            choice(
                $._parenthesized_expression,
                $.string,
                $.identifier,
                $.function_call,
            ),
        ),
        create_table_parameters: $ => seq(
            '(',
            commaSep1(choice(
                $.create_table_column_parameter,
                $._table_constraint,
            )),
            ')',
        ),
        foreign_key_constraint: $ => seq(
            caseInsensitive('FOREIGN KEY'), 
            '(',
            commaSep1($.identifier),
            ')',
            $.references_constraint,
        ),
        _table_constraint: $ => choice(
            $.foreign_key_constraint,
            $.unique_table_constraint,
        ),
        create_table_statement: $ => seq(
            caseInsensitive('CREATE TABLE'), 
            $.identifier,
            $.create_table_parameters,
        ),
        using_clause: $ => seq(
            caseInsensitive('USING'),
            field("type", $.identifier)
        ),
        index_table_parameters: $ => seq(
            '(',
            commaSep1(choice($._expression, $.ordered_expression)),
            ')',
        ),
        select_statement: $ => seq(
            caseInsensitive('SELECT'), 
            optional($.select_clause),
            optional($.where_clause),
        ),
        in_expression: $ => prec.left(1, seq(
            $._expression,
            optional(caseInsensitive('NOT')),
            caseInsensitive('IN'),
            $.tuple,
        )),
        tuple: $ => seq(
            // TODO: maybe collapse with function arguments, but make sure to preserve clarity 
            '(',
            field('elements', commaSep1($._expression)),
            ')',
        ),
        select_clause: $ => commaSep1($._expression),
        // TODO: named constraints
        references_constraint: $ => seq(
            caseInsensitive('REFERENCES'),
            $.identifier, // table_name
            optional(seq(
                '(',
                repeat1($.identifier),
                ')',
            )),
            // seems like a case for https://github.com/tree-sitter/tree-sitter/issues/130
            optional(choice(
                seq($.on_update_action, $.on_delete_action),
                seq($.on_delete_action, $.on_update_action),
            )),
        ),
        on_update_action: $ => seq(
            caseInsensitive('ON UPDATE'),
            field("action", $._constraint_action)
        ),
        on_delete_action: $ => seq(
            caseInsensitive('ON DELETE'),
            field("action", $._constraint_action)
        ),
        _constraint_action: $ => choice(
            caseInsensitive('RESTRICT'),
            caseInsensitive('CASCADE'),
            caseInsensitive('SET NULL'),
        ),
        unique_constraint: $ => caseInsensitive('UNIQUE'),
        unique_table_constraint: $ => seq(
            caseInsensitive('UNIQUE'),
            '(',
            commaSep1($.identifier),
            ')',
        ),
        primary_key_constraint: $ => caseInsensitive('PRIMARY KEY'),
        null_constraint: $ => seq(
            optional(caseInsensitive('NOT')), 
            $.NULL,
        ),
        check_constraint: $ => seq(
            caseInsensitive('CHECK'),
            $._expression,
        ),
        _constraint: $ => seq(
            choice($.null_constraint, $.check_constraint),
            optional($.check_constraint),
        ),
        parameter: $ => seq($.identifier, $.data_type),
        parameters: $ => seq(
            '(',
            commaSep1($.parameter),
            ')',
        ),
        function_call: $ => seq(
            field('function', $.identifier),
            '(',
            optional(field('arguments', commaSep1($._expression))),
            ')',
        ),
        where_clause: $ => seq(
            caseInsensitive('WHERE'), 
            $._expression,
        ),
        comparison_operator: $ => prec.left(1, seq(
            $._expression,
            field('operator',
                choice(
                    '<',
                    '<=',
                    '<>',
                    '=',
                    '>',
                    '>=',
            )),
            $._expression
        )),
        _parenthesized_expression: $ => seq(
            '(',
            $._expression,
            ')',
        ),
        is_expression: $ => prec.left(1, seq(
            $._expression,
            caseInsensitive('is'),
            optional(caseInsensitive('not')),
            choice($.NULL, $.TRUE, $.FALSE)
        )),
        boolean_expression: $ => choice(
            prec.left(4, seq(
                $._expression,
                caseInsensitive('AND'),
                $._expression
            )),
            prec.left(3, seq(
                $._expression,
                caseInsensitive('OR'),
                $._expression
            )),
        ),
        NULL: $ => caseInsensitive('NULL'),
        TRUE: $ => caseInsensitive('TRUE'),
        FALSE: $ => caseInsensitive('FALSE'),
        number: $ => /\d+/,
        identifier: $ => /[a-zA-Z0-9_]+[.a-zA-Z0-9_]*/,
        string: $ => seq(
            '\'',
            field('content', /[a-zA-Z0-9_%{}.*]*/),
            '\'',
        ),
        field_access: $ => seq(
            $.identifier,
            '->>',
            $.string,
        ),
        ordered_expression: $ => seq(
            $._expression,
            field("order", choice(
                caseInsensitive('ASC'),
                caseInsensitive('DESC'),
            )),
        ),
        data_type: $ => seq(
            choice(
                $.identifier, seq($.identifier, '[', ']'),
            ), 
            optional($.null_constraint),
            optional($.check_constraint),
        ),
        _expression: $ => choice(
            $.function_call,
            $.string,
            $.field_access,
            $.TRUE,
            $.FALSE,
            $.NULL,
            $.identifier,
            $.number,
            $.comparison_operator,
            $.in_expression,
            $.is_expression,
            $.boolean_expression,
            $._parenthesized_expression
        ),
    }
});

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
