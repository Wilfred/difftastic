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
            $.contract_declaration
        ),

        // Declarations
        _declaration: $ => choice(
            $.contract_declaration,
            // TODO:
            // $.struct_declaration,
            // $.enum_declaration,
        ),

        // Contract Declarations
        contract_declaration: $ => seq(
            optional('abstract'),
            choice('contract', 'interface', 'library'),
            field("name", $.identifier),
            optional($.class_heritage),
            field('body', $.contract_body),
        ),

        class_heritage: $ => seq(
            "is", commaSep1($._inheritance_specifier)
        ),

        _inheritance_specifier: $ => seq(
            $._user_defined_type,
            '(',
            commaSep($._expression),
            ')',
        ),


        contract_body: $  => seq(
            "{",
            repeat(choice(
                $.method_definition,
                $.modifier_definition,
                $.field_definition,
                // TODO:
                // $.event_definition,
                // $.using_for_definition,
                // $.struct_declaration,
                // $.enum_declaration,
            )),
            "}",
        ),

        // Definitions
        field_definition: $ => seq(
            $.type_name,
            $.field_visibility,
            $.identifier,
            optional(seq(
                '=', $._expression
            )),
            $._semicolon
        ),

        field_visibility: $ => choice(
            'public',
            'internal',
            'private',
            'constant',
            'immutable',
        ),

        override_specifier: $ => seq(
            'override',
            optional(seq(
                '(',
                commaSep1($._user_defined_type),
                ')',
            ))
        ),

        modifier_definition: $ => seq("modifier"),
        method_definition: $ => seq("function"),

        // Expressions
        _expression: $ => choice(

        ),

        // Types
        type_name: $ => choice(
            $._primitive_type,
            $._user_defined_type,
            $._mapping,
            seq($.type_name, '[', optional($._expression), ']'),
            $._function_type,
        ),
        
        _function_type: $ => seq(
            'function', $._parameter_list, optional($._return_parameters),
        ),

        _parameter_list: $ => seq(
            '(', commaSep1($._parameter), ')'
        ),

        _return_parameters: $ => seq(
            '(', commaSep1($._nameless_parameter), ')'
        ),

        _nameless_parameter: $ =>  seq(
            $.type_name,
            optional($._storage_location),
        ),

        _parameter: $ =>  seq(
            $.type_name,
            optional($._storage_location),
            optional($.identifier),
        ),

        _storage_location: $ => choice(),

        _user_defined_type: $ => seq(
            $.identifier,
            repeat(seq(
                '.',
                $.identifier,
            ))
        ),

        _mapping: $ => seq(
            'mapping', '(', $._mapping_key, '=>', $.type_name, ')',
        ),

        _mapping_key: $ => choice(
            $._primitive_type,
            $._user_defined_type
        ),

        _primitive_type: $ => choice(
            seq('address', optional('payable')),
            'bool',
            'string',
            'var',
            $._int,
            $._uint,
            $._bytes,
            $._fixed,
            $._ufixed,
        ),

        _int: $ => choice (
            'int', 'int8', 'int16', 'int24', 'int32', 'int40', 'int48', 'int56', 'int64', 'int72', 'int80', 'int88', 'int96', 'int104', 'int112', 'int120', 'int128', 'int136', 'int144', 'int152', 'int160', 'int168', 'int176', 'int184', 'int192', 'int200', 'int208', 'int216', 'int224', 'int232', 'int240', 'int248', 'int256'
        ),
        _uint: $ => choice (
            'uint', 'uint8', 'uint16', 'uint24', 'uint32', 'uint40', 'uint48', 'uint56', 'uint64', 'uint72', 'uint80', 'uint88', 'uint96', 'uint104', 'uint112', 'uint120', 'uint128', 'uint136', 'uint144', 'uint152', 'uint160', 'uint168', 'uint176', 'uint184', 'uint192', 'uint200', 'uint208', 'uint216', 'uint224', 'uint232', 'uint240', 'uint248', 'uint256' 
        ),
        _bytes: $ => choice (
            'byte', 'bytes', 'bytes1', 'bytes2', 'bytes3', 'bytes4', 'bytes5', 'bytes6', 'bytes7', 'bytes8', 'bytes9', 'bytes10', 'bytes11', 'bytes12', 'bytes13', 'bytes14', 'bytes15', 'bytes16', 'bytes17', 'bytes18', 'bytes19', 'bytes20', 'bytes21', 'bytes22', 'bytes23', 'bytes24', 'bytes25', 'bytes26', 'bytes27', 'bytes28', 'bytes29', 'bytes30', 'bytes31', 'bytes32'
        ),

        _fixed: $ => choice (
            'fixed',
            /fixed([0-9]+)x([0-9]+)/
        ),
        _ufixed: $ => choice (
            'ufixed',
            /ufixed([0-9]+)x([0-9]+)/
        ),


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