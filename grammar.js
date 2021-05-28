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
            $.index_table_parameters,
        ),
        index_table_parameters: $ => seq(
            '(',
            commaSep1($._expression),
            ')',
        ),
        select_statement: $ => seq(
            caseInsensitive('SELECT'), 
            optional($.select_clause),
        ),
        select_clause: $ => commaSep1($._expression),
        // TODO: named constraints
        constraint: $ => choice(
            caseInsensitive('NOT NULL'), 
            caseInsensitive('NULL'), 
            seq(caseInsensitive('CHECK'), $.identifier), 
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
            field('arguments', commaSep1($.identifier)), // TODO: should this be expression
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
        identifier: $ => /[a-zA-Z0-9_]+/,
        data_type: $ => seq(
            choice(
                $.identifier, seq($.identifier, '[', ']'),
            ), 
            optional($.constraint)
        ),
        _expression: $ => choice($.function_call, $.TRUE, $.FALSE, $.NULL, $.identifier, $.number, $.comparison_operator, $.is_expression, $.boolean_expression),
    }
});

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
