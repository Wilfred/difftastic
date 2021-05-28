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
            optional(seq(
                '(',
                $.expression,
                ')',
            )),
        ),
        select_statement: $ => seq(
            caseInsensitive('SELECT'), 
            optional($.select_clause),
        ),
        select_clause: $ => commaSep1(choice(
            $.identifier,
            $.number,
        )),
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
        number: $ => /\d+/,
        identifier: $ => /[a-zA-Z0-9_]+/,
        data_type: $ => seq(
            choice(
                $.identifier, seq($.identifier, '[', ']'),
            ), 
            optional($.constraint)
        ),
        expression: $ => choice($.identifier, $.number),
    }
});

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
