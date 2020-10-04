// Precedence is used by the parser to determine which rule to apply when there are two rules that can be applied.
// We use the PREC dict to globally define rule pprecidence
const PREC = {
    COMMENT: 1,
    STRING: 2,
    
    COMMA: -1,
    OBJECT: -1,
    USER_TYPE: 1,
    DECLARATION: 1,
    ASSIGN: 0,
    TERNARY: 1,
    OR: 2,
    AND: 3,
    REL: 4,
    PLUS: 5,
    TIMES: 6,
    EXP: 7,
    TYPEOF: 8,
    DELETE: 8,
    VOID: 8,
    NOT: 9,
    NEG: 10,
    INC: 11,
    CALL: 12,
    NEW: 13,
    MEMBER: 14
}

// The following is the core grammar for Solidity. It accepts Solidity smart contracts between the versions 0.4.x and 0.7.x.
module.exports = grammar({
    name: 'Solidity',

    // Extras is an array of tokens that is allowed anywhere in the document.
    extras: $ => [
        // Allow comments to be placed anywhere in the file
        $.comment,
        // Allow characters such as whitespaces to be placed anywhere in the file
        /[\s\uFEFF\u2060\u200B\u00A0]/
    ],
    
    // The word token allows tree-sitter to appropriately handle scenario's where an identifier includes a keyword.
    // Documentation: https://tree-sitter.github.io/tree-sitter/creating-parsers#keywords
    word: $ => $.identifier,

    rules: {
        //  -- [ Program ] --  
        source_file: $ => seq(
            repeat($._source_unit),
        ),

        //  -- [ Source Element ] --  
        _source_unit: $ =>  choice(
            $._directive,
            $._declaration,
        ),

        //  -- [ Directives ] --  
        _directive: $ => choice(
            $.pragma_directive,
            $.import_directive,
        ),

        // Pragma
        pragma_directive: $ => seq(
            "pragma", "solidity", repeat($._pragma_version_constraint), $._semicolon,
        ),

        _pragma_version_constraint: $ => seq(
            optional($._solidity_version_comparison_operator),
            $._solidity_version,
        ),
        _solidity_version: $ => /\d+(.\d+(.\d+)?)?/,
        _solidity_version_comparison_operator: $ => choice("<=", "<", "^", ">", ">=" ),

        // Import
        import_directive: $ => seq(
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

        //  -- [ Declarations ] --  
        _declaration: $ => choice(
            $.contract_declaration,
            $.struct_declaration,
            $.enum_declaration,
            // TODO: unbound functions, library, interface
        ),

        // Contract Declarations
        contract_declaration: $ => seq(
            optional('abstract'),
            'contract',
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
                $.function_definition,
                $.modifier_definition,
                $.field_definition,
                $.struct_declaration,
                $.enum_declaration,
                $.event_definition,
                $.using_directive,
                $.constructor_definition,
                $.fallback_definition,
            )),
            "}",
        ),

        struct_declaration: $ =>  seq(
            'struct',
            $.identifier,
            '(', 
            repeat1($.struct_member),
            ')',
        ),

        struct_member: $ => seq($.type_name, $.identifier, $._semicolon),

        enum_declaration: $ =>  seq(
            'enum',
            field("enum_type_name", $.identifier),
            '{',
            commaSep1(field("enum_value", $.identifier)),
            '}',
        ),
            

        event_definition: $ => seq(
            'event',  field('name', $.identifier), $._parameter_list,  optional('anonymous'), $._semicolon
        ),

        using_directive: $ => seq(
            'using', $._user_defined_type, 'for', choice('*', $.type_name), $._semicolon
        ),

        // -- [ Statements ] --
        _statement: $ => choice(
            $.block_statement,
            $.variable_declaration_statement,
            $.expression_statement,
            $.if_statement,
            $.for_statement,
            $.while_statement,
            $.do_while_statement,
            $.continue_statement,
            $.break_statement,
            $.try_statement,
            $.return_statement,
            $.emit_statement,
            // TODO: $.assembly_statement
        ),

        assembly_statement: $ => seq(
            'assembly',
            optional('"evmasm"'),
            "{",
            // TODO: Add yul statements
            // repeat($.yul_statement),
            "}"
        ),

        // yul_statement: $ => seq(),

        block_statement: $ => seq('{', repeat($._statement), "}"),
        variable_declaration_statement: $ => seq(
            choice(
                seq($.variable_declaration, optional(seq('=', $._expression))),
                seq($.variable_declaration_tuple, '=', $._expression),
            ),
            $._semicolon
        ),
        variable_declaration: $ => seq(
            $.type_name,
            optional(choice('memory', 'storage', 'calldata')),
            field('name', $.identifier)
        ),
        variable_declaration_tuple: $ => seq(
            '(', 
            commaSep($.variable_declaration),
            ')'
        ),

        expression_statement: $ => seq($._expression, $._semicolon),

        if_statement: $ => seq(
            'if', '(',$._expression, ')', $.block_statement, optional(seq('else', $.block_statement)),
        ),
        
        for_statement: $ => seq(
            'for', '(', 
            // TODO: verify
            choice($.variable_declaration_statement, $.expression_statement, $._semicolon),
            choice($.expression_statement, $._semicolon),
            choice($._expression),
            ')', $.block_statement,
        ),

        while_statement: $ => seq(
            'while', '(',$._expression, ')', $.block_statement,
        ),
        do_while_statement: $ => seq(
            'do', $.block_statement, 'while', '(',$._expression, ')',
        ),        
        continue_statement: $ => seq('continue', $._semicolon),
        break_statement: $ => seq('break', $._semicolon),
        
        try_statement: $ => seq(
            'try', $._expression, optional(seq('returns', $._parameter_list)), $.block_statement, repeat1($.catch_clause),
        ),

        catch_clause: $ => seq(
            'catch', optional(seq(optional($.identifier), $._parameter_list)), $.block_statement,
        ),

        return_statement: $ => seq(
            'return', optional($._expression), $._semicolon
        ),
        emit_statement: $ => seq(
            'emit',  $._expression, $._call_arguments, $._semicolon
        ),


        //  -- [ Definitions ] --  
        // Definitions
        field_definition: $ => seq(
            $.type_name,
            repeat(
            field('visibility', $.field_visibility),
            optional($._immutable),
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
        ),
        _immutable: $ => 'immutable',
        _override: $ => 'override',

        override_specifier: $ => seq(
            'override',
            optional(seq(
                '(',
                commaSep1($._user_defined_type),
                ')',
            ))
        ),

        modifier_definition: $ => seq(
            "modifier",
            $.identifier,
            $._parameter_list,
            repeat(choice(
                'virtual',
                'override',
            )),
            choice($._semicolon, $.function_body)
        ),

        constructor_definition: $ => seq(
            'constructor',
            $._parameter_list,
            repeat(choice(
                $._modifier_invocation,
                'payable',
                choice('internal', 'public'),
            )),
            field('body', $.function_body),
        ),

        fallback_definition: $ => seq(
            choice('fallback', 'receive'),
            '(', ')',
            // FIXME: We use repeat to allow for unorderedness. However, this means that the parser 
            // accepts more than just the solidity language. The same problem exists for other definition rules.
            repeat(choice(
                field('visibility', $.field_visibility),      
                $._modifier_invocation,
                'virtual',
                'override',  
            )),
            choice($._semicolon, field('body', $.function_body))
        ),

        function_definition: $ => seq(
            "function",
            choice($.identifier),
            $._parameter_list,
            'returns',
            repeat($._modifier_invocation),
            $._parameter_list,
            choice($._semicolon, field('body', $.function_body))
        ),

        _modifier_invocation: $ => seq($.identifier, $._call_arguments),
        
        _call_arguments: $ => choice(
            seq('(', commaSep($._expression),')'),
            seq("{", commaSep($.identifier, ":", $._expression), "}")
        ),

        function_body: $ => choice(),

        // Expressions
        _expression: $ => choice(
            $.binary_expression,
            $.unary_expression,
            $.update_expression,
            $.subscript_expression,
            $.call_expresion,
            // TODO: $.function_call_options_expression,
            $.payable_conversion_expression,
            $.meta_type_expression,

            $.primary_expression,
        ),

        primary_expression: $ => choice(
            $.parenthesized_expression,
            $.member_expression,
            $._primitive_type,
            // TODO: revisit precedence
            $.identifier,
            $._user_defined_type,
            // TODO: add literals
            // $.new_expression,
            // $.tuple_expression,
            // $.inline_array_expression,
        ),

        binary_expression: $ => choice(
            ...[
            ['&&', PREC.AND],
            ['||', PREC.OR],
            ['>>', PREC.TIMES],
            ['>>>', PREC.TIMES],
            ['<<', PREC.TIMES],
            ['&', PREC.AND],
            ['^', PREC.OR],
            ['|', PREC.OR],
            ['+', PREC.PLUS],
            ['-', PREC.PLUS],
            ['*', PREC.TIMES],
            ['/', PREC.TIMES],
            ['%', PREC.TIMES],
            ['**', PREC.EXP],
            ['<', PREC.REL],
            ['<=', PREC.REL],
            ['==', PREC.REL],
            ['!=', PREC.REL],
            ['!==', PREC.REL],
            ['>=', PREC.REL],
            ['>', PREC.REL],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression)
                ))
            )
        ),

        unary_expression: $ => choice(...[
                ['!', PREC.NOT],
                ['~', PREC.NOT],
                ['-', PREC.NEG],
                ['+', PREC.NEG],
                ['delete', PREC.DELETE],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('operator', operator),
                    field('argument', $._expression)
                ))
        )),

        update_expression: $ => prec.left(PREC.INC, choice(
            seq(
                field('argument', $._expression),
                field('operator', choice('++', '--'))
            ),
            seq(
                field('operator', choice('++', '--')),
                field('argument', $._expression)
            ),
        )),

        member_expression: $ => prec(PREC.MEMBER, seq(
            field('object', choice(
                $._expression,
                $.identifier,
            )),
            '.',
            field('property', alias($.identifier, $.property_identifier))
        )),

        subscript_expression: $ => prec.right(PREC.MEMBER, seq(
            field('object', $._expression),
            '[', field('index', commaSep1($._expression)), ']'
        )),

        _lhs_expression: $ => choice(
            $.member_expression,
            $.subscript_expression,
            $.identifier,
            // $._destructuring_pattern
        ),
        parenthesized_expression: $ => seq('(', $._expression, ')'),

        assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
            field('left', choice($.parenthesized_expression, $._lhs_expression)),
            '=',
            field('right', $._expression)
        )),
      
        augmented_assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
            field('left', choice(
                $.member_expression,
                $.subscript_expression,
                $.identifier,
                $.parenthesized_expression,
            )),
            choice('+=', '-=', '*=', '/=', '%=', '^=', '&=', '|=', '>>=', '>>>=',
                '<<=', '**=', '&&=', '||=', '??='),
            field('right', $._expression)
        )),
          
        call_expresion: $ => choice(
            seq($.identifier, $._call_arguments),
        ),

        payable_conversion_expression: $ => seq('payable', $._call_arguments),
        meta_type_expression: $ => seq('type', '(', $.type_name, ')'),

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

        _storage_location: $ => choice(
            'memory',
            'storage',
            'calldata'
        ),

        _user_defined_type: $ => prec(PREC.USER_TYPE,seq(
            $.identifier,
            repeat(seq(
                '.',
                $.identifier,
            ))
        )),

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

        _semicolon: $ => ';',

        identifier: $ => /[a-z0-9A-Z]+/,

        number: $ => /\d+/,
        literal: $ => choice(
            $.string_literal,
            $.number_literal,
            $.boolean_literal,
            $.hex_string_literal,
            $.unicode_string_literal,
        ),

        string_literal: $ => repeat1($.string),
        number_literal: $ => seq(choice($.decimal_number, $.hex_number), optional($.number_unit)),
        decimal_number: $ =>  seq(/\d+(.\d+)?/, optional(/[eE](-)?d+/)),
        hex_number: $ => seq('0x', $._hex_digits),
        _hex_digits: $ => /([a-fA-F0-9]{2})+/, 
        number_unit: $ => choice(
            'wei', 'gwei', 'ether', 'seconds', 'minutes', 'hours', 'days', 'weeks', 'years'
        ),
        boolean_literal: $ => choice('true', 'false'),
        hex_string_literal: $ => repeat1(seq(
            'hex',
            choice(
                seq('"', $._hex_digits, '"'),
                seq("'", $._hex_digits, "'"),
            ))),
        _escape_sequence: $ => seq('\\', choice(
            // TODO: it might be allowed to escape non special characters
            /"'\\bfnrtv\n\r/,
            /u([a-fA-F0-9]{4})/,
            /x([a-fA-F0-9]{2})/,
        )),
        _single_quoted_unicode_char: $ => choice(/~['\r\n\\]/, $._escape_sequence),
        _double_quoted_unicode_char: $ => choice(/~["\r\n\\]/, $._escape_sequence),
        unicode_string_literal: $ => repeat1(seq(
            'unicode',
            choice(
                seq('"', $._double_quoted_unicode_char, '"'),
                seq("'", $._single_quoted_unicode_char, "'"),
            ))),

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
    return seq(
        rule,
        repeat(
            seq(
                ',',
                 rule
            )
        ),
        optional(','),
    );
  }
  
function commaSep(rule) {
    return optional(commaSep1(rule));
}