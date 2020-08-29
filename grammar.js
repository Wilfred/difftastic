const PREC = {
    STRING: 2,
    COMMENT: 1,
}

module.exports = grammar({
    name: 'Solidity',

    extras: $ => [
        $.comment,
        /[\s\uFEFF\u2060\u200B\u00A0]/
    ],
    
    word: $ => $.identifier,

    rules: {
        program: $ => seq(
            repeat($._statement),
        ),

        // Pragma
        pragmaDirective: $ => seq(
            "pragma",
            "solidity",
            repeat(
                $._pragma_version_constraint
            ),
            $._semicolon,
        ),
        _pragma_version_constraint: $ => seq(
            optional($._solidity_version_comparison_operator),
            $._solidity_version,
        ),
        _solidity_version: $ => /\d+(.\d+(.\d+)?)?/,
        _solidity_version_comparison_operator: $ => choice(
            "<=",
            "<",
            "^",
            ">",
            ">="
        ),

        // Import
        import_statement: $ => seq(
            'import',
            choice(
                $._source_import,
                seq($._import_clause, $._from_clause)
            ),
            $._semicolon,
        ),

        _source_import: $ => seq(
            field('source', $.string),
            optional(seq("as", $.identifier))
        ),

        _import_clause: $ => choice(
            $._single_import,
            $._multiple_import,
        ),

        _from_clause: $ => seq(
            "from", field('source', $.string)
        ),
    
        _single_import: $ => seq(
            choice("*", $.identifier),
            optional(
                seq(
                    "as",
                    $.identifier
                )
            )
        ),
    
        _multiple_import: $ => seq(
            '{',
            commaSep($._import_declaration),
            optional(','),
            '}'
        ),

        _import_declaration: $  => seq(
            $.identifier,
            optional(
                seq(
                    "as",
                    $.identifier
                )
            )
        ),

        // Statements
        _statement: $ =>  choice(
            $.pragmaDirective,
            $.import_statement,
        ),

        // Declarations
        _declaration: $ => choice(

        ),

        // Expressions
        _expression: $ => choice(

        ),

        // Types
        _type: $ => choice (
            
        ),

        _semicolon: $ => ';',

        identifier: $ => /[a-z]+/,

        number: $ => /\d+/,

        // Primitives 

        string: $ => choice(
            seq(
            '"',
            repeat(choice(
                token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)),
                $.escape_sequence
            )),
            '"'
            ),
            seq(
            "'",
            repeat(choice(
                token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
                $.escape_sequence
            )),
            "'"
            )
        ),
        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
              /[^xu0-7]/,
              /[0-7]{1,3}/,
              /x[0-9a-fA-F]{2}/,
              /u[0-9a-fA-F]{4}/,
              /u{[0-9a-fA-F]+}/
            )
        )),

        comment: $ => token(
            prec(PREC.COMMENT, 
                choice(
                    seq('//', /.*/),
                    seq(
                        '/*',
                        /[^*]*\*+([^/*][^*]*\*+)*/,
                        '/'
                    )       
                )
            )
        ),
    }
  }
);
   

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)));
  }
  
function commaSep(rule) {
    return optional(commaSep1(rule));
}