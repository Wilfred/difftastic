const DIGITS = token(sep1(/[0-9]+/, /_+/))
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'))
const PREC = {
    COMMA: -1,
    DECLARATION: 1,
    COMMENT: 1,
    ASSIGN: 0,
    OBJECT: 1,
    TERNARY: 1,
    IF_NULL: 1,
    OR: 2,
    AND: 3,
    PLUS: 4,
    REL: 5,
    TIMES: 6,
    TYPEOF: 7,
    DELETE: 7,
    VOID: 7,
    NOT: 8,
    NEG: 9,
    INC: 10,
    NEW: 11,
    CALL: 12,
    MEMBER: 13,
    CAST: 15,
};

// TODO: general things to add
// both string types
// adjacent strings implicitly concatenated
// var, final, const
// list, set and map literals
//get protocols in classes?
// positional parameters: cased in [] at end of type params.
// todo: type test operators: as, is, and is!
//todo: assignment operators: ??=, and ~/=
//todo: ?? operator
// todo: cascade notation: dot dot accesses each object
//todo: conditional member access: blah?.foo

//todo: override operator notations
//todo: add mixins via 'with' keyword
//todo: add the 'mixin' keyword
//todo: add collection parameters to list/map literals
//todo: correct import statements to be strings
//todo: sync* and async* functions, plus yields
//

//DONE:
//DONE: override shorter constructor notations?

module.exports = grammar({
    name: 'dart',

  externals: $ => [
      $._automatic_semicolon,
      $._template_chars_double,
      $._template_chars_single,
      $._template_chars_double_single,
      $._template_chars_single_single,
  ],

    extras: $ => [
        $.comment,
        /\s/
    ],

    supertypes: $ => [
        $._expression,
        $._declaration,
        $._statement,
        $._literal,
        $._primary,
        $._type,
        $._simple_type,
        $._unannotated_type,
    ],

    inline: $ => [
        $._numeric_type,
        $._ambiguous_name,
        $._simple_type,
        $._class_member_declaration,
        $._interface_member_declaration,
        $._annotation_type_member_declaration,
        $._class_member_definition,
        $._variable_initializer
    ],

    conflicts: $ => [
        [$._metadata, $.annotated_type, $.receiver_parameter],
        [$._metadata, $.annotated_type],
        [$._variable_declarator_id],
        [$._unannotated_type,$._expression],
        [$._unannotated_type,$._expression, $.inferred_parameters],
        [$._unannotated_type,$.class_literal],
        [$._unannotated_type,$.class_literal, $.array_access],
        [$._unannotated_type,$.method_reference],
        [$._unannotated_type,$.generic_type],
        [$._expression, $.generic_type],
        [$.scoped_identifier, $.scoped_type_identifier],
        [$._compound_access, $.scoped_identifier],
        [$._compound_access, $.scoped_identifier, $.scoped_type_identifier],
        [$.explicit_constructor_invocation, $._compound_access],
        [$._expression, $.pair],
        [$._expression, $.labeled_statement],
        [$.block, $.set_or_map_literal],
        // [$._static_or_covariant, $.method_signature],
        [$.method_signature, $._static_or_covariant],
        [$.constructor_signature, $.function_signature],
        [$.declaration, $._external_and_static],
        // [$.initialized_identifier, $._variable_declarator_id],
        [$.constructor_signature, $._formal_parameter_part],
        [$._unannotated_type, $.type_parameter],
        [$.lambda_expression, $._expression]

    ],

    word: $ => $.identifier,

    rules: {
        program: $ => repeat($._statement),

        // Literals

        _literal: $ => choice(
            $.decimal_integer_literal,
            $.hex_integer_literal,
            $.octal_integer_literal,
            $.binary_integer_literal,
            $.decimal_floating_point_literal,
            $.hex_floating_point_literal,
            $.true,
            $.false,
            $.string_literal,
            $.null_literal,
            $.symbol_literal
        ),

        symbol_literal: $ => seq('#', $.identifier),
        //symbol literal can also be an operator?

        decimal_integer_literal: $ => token(seq(
            DIGITS,
            optional(choice('l', 'L'))
        )),

        hex_integer_literal: $ => token(seq(
            choice('0x', '0X'),
            HEX_DIGITS,
            optional(choice('l', 'L'))
        )),

        octal_integer_literal: $ => token(seq(
            choice('0o', '0O'),
            sep1(/[0-7]+/, '_'),
            optional(choice('l', 'L'))
        )),

        binary_integer_literal: $ => token(seq(
            choice('0b', '0B'),
            sep1(/[01]+/, '_'),
            optional(choice('l', 'L'))
        )),

        decimal_floating_point_literal: $ => token(choice(
            seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
            seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
            seq(DIGITS, /[eEpP]/, optional(choice('-', '+')), DIGITS, optional(/[fFdD]/)),
            seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), (/[fFdD]/))
        )),

        hex_floating_point_literal: $ => token(seq(
            choice('0x', '0X'),
            choice(
                seq(HEX_DIGITS, optional('.')),
                seq(optional(HEX_DIGITS), '.', HEX_DIGITS)
            ),
            optional(seq(
                /[eEpP]/,
                optional(choice('-', '+')),
                DIGITS,
                optional(/[fFdD]/)
            ))
        )),

        true: $ => 'true',

        false: $ => 'false',

        // character_literal: $ => token(seq(
        //     "'",
        //     repeat1(choice(
        //         /[^\\'\n]/,
        //         /\\./,
        //         /\\\n/
        //     )),
        //     "'"
        // )),

      _unused_escape_sequence: $ => token.immediate(seq(
          '\\',
          choice(
              /[^xu0-7]/,
              /[0-7]{1,3}/,
              /x[0-9a-fA-F]{2}/,
              /u[0-9a-fA-F]{4}/,
              /u{[0-9a-fA-F]+}/
          )
      )),
        escape_sequence: $ => $._unused_escape_sequence,
      template_substitution: $ => seq(
          '$',
          choice(
          seq('{',
          $._expression,
          '}'),
              $.identifier
          )
      ),

        // string: $ => choice(
        //     $._simple_string,
        //     seq(
        //         $._string_start,
        //         $.template_substitution,
        //         repeat(seq(
        //             $._string_middle,
        //             $.template_substitution,
        //         )),
        //         $._string_end
        //     ),
        //     seq(
        //         $._multiline_string_start,
        //         $.template_substitution,
        //         repeat(seq(
        //             $._multiline_string_middle,
        //             $.template_substitution,
        //         )),
        //         $._multiline_string_end
        //     )
        // ),

        var_substitution: $ => seq('$', $.identifier),


        //TODO: try to get the multiple strings in a row implicit concatenation?

        _double_quote_string_literal: $ => seq(
            '"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
      string_literal: $ => choice(
          $._string_literal_double_quotes,
          $._string_literal_single_quotes,
          $._string_literal_double_quotes_multiple,
          $._string_literal_single_quotes_multiple,
          //raw, separate later
          $._raw_string_literal_double_quotes,
          $._raw_string_literal_single_quotes,
          $._raw_string_literal_double_quotes_multiple,
          $._raw_string_literal_single_quotes_multiple
      ),

      _string_literal_double_quotes: $ => seq(
          '"',
          repeat(
              choice(
              $._template_chars_double_single,
              '\'',
              $.escape_sequence,
              $._sub_string_test,
              $.template_substitution
            )
          ),
          '"'
      ),
      _string_literal_single_quotes: $ => seq(
          '\'',
          repeat(choice(
              $._template_chars_single_single,
              '"',
              $.escape_sequence,
              $._sub_string_test,
              $.template_substitution
          )),
          '\''
      ),
        _string_literal_double_quotes_multiple: $ => seq(
            '"""',
            repeat(choice(
                $._template_chars_double,
                '\'',
                $.escape_sequence,
                $._sub_string_test,
                $.template_substitution
            )),
            '"""'
        ),
        _string_literal_single_quotes_multiple: $ => seq(
            '\'\'\'',
            repeat(choice(
                $._template_chars_single,
                '"',
                $.escape_sequence,
                $._sub_string_test,
                $.template_substitution
            )),
            '\'\'\''
        ),
        _raw_string_literal_double_quotes: $ => seq(
            'r',
            '"',
            repeat(choice(
                $._template_chars_double_single,
                '\'',
                $._unused_escape_sequence,
                $._sub_string_test,
                '$'
            )),
            '"'
        ),
        _raw_string_literal_single_quotes: $ => seq(
            'r',
            '\'',
            repeat(choice(
                $._template_chars_single_single,
                '"',
                $._unused_escape_sequence,
                $._sub_string_test,
                '$'
            )),
            '\''
        ),
        _raw_string_literal_double_quotes_multiple: $ => seq(
            'r',
            '"""',
            repeat(choice(
                $._template_chars_double,
                '\'',
                $._unused_escape_sequence,
                $._sub_string_test,
                '$'
            )),
            '"""'
        ),
        _raw_string_literal_single_quotes_multiple: $ => seq(
            'r',
            '\'\'\'',
            repeat(choice(
                $._template_chars_single,
                '"',
                $._unused_escape_sequence,
                $._sub_string_test,
                '$'
            )),
            '\'\'\''
        ),
        _sub_string_test: $ => seq('$',/[^a-zA-Z_{]/),
        _string_interp: $ => /\$((\w+)|\{([^{}]+)\})/, // represents $word or ${word} for now
      // _double_quote_string_literal_multiline: $ => seq(
        //     '"', seq(
        //         repeat(
        //             choice(/[^\\"\n]/, /\\(.|\n)/)
        //         ),
        //         /\n/
        //     ), '"', '+', /\n/, '"',
        //     repeat(
        //         choice(/[^\\"\n]/, /\\(.|\n)/)
        //     )
        // ),

        list_literal: $ => seq(
            '[',
            commaSep($._element),
            ']'
        ),
        set_or_map_literal: $ => seq(
            '{',
            commaSep(
                $._element
                ),
            '}'
        ),
        // set_literal: $ => seq(
        //     '{',
        //     commaSep($._expression),
        //     '}'
        // ),
        // map_literal: $ => seq(
        //         '{',
        //         commaSep(
        //             $.pair
        //         ),
        //         '}'
        // ),
        pair: $ => seq(
            field('key', $._expression),
            ':',
            field('value', $._expression)
        ),
        // pair_or_element: $ => seq(
        //     field('key', $._expression),
        //     optional(
        //         seq(
        //             ':',
        //             field('value', $._expression)
        //         )
        //     )
        // ),
        
        _element: $ => choice(
            $._expression,
            $.pair,
            $.spread_element,
            $.if_element,
            $.for_element
        ),


        null_literal: $ => 'null',

        // Expressions

        _expression: $ => choice(
            $.assignment_expression,
            $.binary_expression,
            $.instanceof_expression,
            $.lambda_expression,
            $.ternary_expression,
            $.update_expression,
            prec.dynamic(1, $._ambiguous_name),
            $._primary,
            $.unary_expression,
            $.cast_expression,
            //dart literals
            $.list_literal,
            $.set_or_map_literal,
        //dart operators
            $.if_null_expression
        ),

        cast_expression: $ => prec(PREC.CAST, seq(
            '(',
            sep1(field('type', $._type), '&'),
            ')',
            field('value', $._expression)
        )),

        assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
            field('left', choice(
                $._ambiguous_name,
                $.field_access,
                $.array_access
            )),
            field('operator', choice('=', '+=', '-=', '*=', '/=', '&=', '|=', '^=', '%=', '<<=', '>>=', '>>>=', '??=')),
            field('right', $._expression)
        )),

        binary_expression: $ => choice(
            ...[
                ['>', PREC.REL],
                ['<', PREC.REL],
                ['==', PREC.REL],
                ['>=', PREC.REL],
                ['<=', PREC.REL],
                ['!=', PREC.REL],
                ['&&', PREC.AND],
                ['||', PREC.OR],
                ['+', PREC.PLUS],
                ['-', PREC.PLUS],
                ['*', PREC.TIMES],
                ['/', PREC.TIMES],
                ['&', PREC.AND],
                ['|', PREC.OR],
                ['^', PREC.OR],
                ['%', PREC.TIMES],
                ['<<', PREC.TIMES],
                ['>>', PREC.TIMES],
                ['>>>', PREC.TIMES],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression)
                ))
            )),

        instanceof_expression: $ => prec(PREC.REL, seq(
            field('left', $._expression),
            'instanceof',
            field('right', $._type)
        )),

        lambda_expression: $ => seq(
            field('parameters', $._formal_parameter_part),
            field(
                'body',
                $.function_expression_body
            )
        ),

        inferred_parameters: $ => seq(
            '(',
            commaSep1($.identifier),
            ')'
        ),

        ternary_expression: $ => prec.right(PREC.TERNARY, seq(
            field('condition', $._expression),
            '?',
            field('consequence', $._expression),
            ':',
            field('alternative', $._expression)
        )),

        if_null_expression: $ => prec.right(PREC.TERNARY, seq(
            field('first', $._expression),
            '??',
            field('second', $._expression)
        )),

        spread_element: $ => seq(
            '...',
            optional('?'),
            $._expression
        ),

        unary_expression: $ => choice(...[
            ['+', PREC.NEG],
            ['-', PREC.NEG],
            ['!', PREC.NOT],
            ['~', PREC.NOT],
        ].map(([operator, precedence]) =>
            prec.left(precedence, seq(
                field('operator', operator),
                field('operand', $._expression)
            ))
        )),

        update_expression: $ => prec.left(PREC.INC, choice(
            seq($._expression, '++'),
            seq($._expression, '--'),
            seq('++', $._expression),
            seq('--', $._expression)
        )),

        _primary: $ => choice(
            $._literal,
            $.class_literal,
            $.this,
            $.parenthesized_expression,
            $.object_creation_expression,
            $.field_access,
            $.array_access,
            $.method_invocation,
            $.method_reference,
        ),

        // array_creation_expression: $ => prec.right(seq(
        //     'new',
        //     field('type', $._simple_type),
        //     choice(
        //         seq(
        //             field('dimensions', repeat1($.dimensions_expr)),
        //             field('dimensions', optional($.dimensions))
        //         ),
        //         seq(
        //             field('dimensions', $.dimensions),
        //             field('value', $.array_initializer)
        //         )
        //     )
        // )),

        // dimensions_expr: $ => seq(repeat($._annotation), '[', $._expression, ']'),

        parenthesized_expression: $ => seq('(', $._expression, ')'),

        class_literal: $ => choice(
            seq($._ambiguous_name, repeat(seq('[', ']')), '.', 'class'),
            seq($._numeric_type, repeat(seq('[', ']')), '.', 'class'),
            seq($.boolean_type, repeat(seq('[', ']')), '.', 'class'),
            seq($.void_type, '.', 'class')
        ),

        object_creation_expression: $ => choice(
            $._unqualified_object_creation_expression,
            seq($._ambiguous_name, '.', $._unqualified_object_creation_expression),
            seq($._primary, '.', $._unqualified_object_creation_expression)
        ),

        _unqualified_object_creation_expression: $ => prec.right(seq(
            'new',
            field('type_arguments', optional($.type_arguments)),
            field('type', $._simple_type),
            field('arguments', $.argument_list),
            optional($.class_body)
        )),

        _compound_access: $ => choice('.', '?.'),

        field_access: $ => choice(
            seq(
                field('object', $._ambiguous_name),
                $._compound_access,
                field('field', $.this)
            ),
            seq(
                field('object', choice($._primary, $.super)),
                $._compound_access,
                field('field', $.identifier)
            ),
            seq(
                field('object', $._ambiguous_name),
                $._compound_access,
                $.super,
                $._compound_access,
                field('field', $.identifier)
            )
        ),

        array_access: $ => seq(
            field('array', choice($._ambiguous_name, $._primary)),
            '[',
            field('index', $._expression),
            ']',
        ),

        method_invocation: $ => seq(
            choice(
                field('name', $.identifier),
                field('name', $.this),
                seq(
                    field('object', choice(
                        $._ambiguous_name,
                        $._primary,
                        $.super
                    )),
                    $._compound_access,
                    field('type_arguments', optional($.type_arguments)),
                    field('name', $.identifier),
                ),
                seq(
                    field('object', $._ambiguous_name),
                    $._compound_access,
                    $.super,
                    $._compound_access,
                    field('type_arguments', optional($.type_arguments)),
                    field('name', $.identifier),
                )
            ),
            field('arguments', $.argument_list)
        ),

        argument_list: $ => seq('(', commaSep($._expression), ')'),

        method_reference: $ => seq(
            choice($._type, $._ambiguous_name, $._primary, $.super),
            '::',
            optional($.type_arguments),
            choice('new', $.identifier)
        ),

        type_arguments: $ => seq(
            '<',
            commaSep(choice($._type, $.wildcard)),
            '>'
        ),

        wildcard: $ => seq(
            optional($._metadata),
            '?',
            optional($._wildcard_bounds)
        ),

        _wildcard_bounds: $ => choice(
            seq('extends', $._type),
            seq($.super, $._type)
        ),

        dimensions: $ => prec.right(repeat1(
            seq(optional($._metadata), '[', ']')
        )),

        // Statements

        _statement: $ => choice(
            $._declaration,
            $.expression_statement,
            $.labeled_statement,
            $.if_statement,
            $.while_statement,
            $.for_statement,
            $.enhanced_for_statement,
            $.block,
            ';',
            $.assert_statement,
            $.switch_statement,
            $.do_statement,
            $.break_statement,
            $.continue_statement,
            $.return_statement,
            $.synchronized_statement,
            $.local_variable_declaration,
            $.throw_statement,
            $.try_statement,
            $.try_with_resources_statement
        ),

        block: $ => seq(
            '{', repeat($._statement), '}'
        ),

        expression_statement: $ => seq(
            $._expression,
            $._semicolon
        ),

        labeled_statement: $ => seq(
            $.identifier, ':', $._statement
        ),

        assert_statement: $ => choice(
            seq('assert', $._expression, $._semicolon),
            seq('assert', $._expression, ':', $._expression, $._semicolon)
        ),

        switch_statement: $ => seq(
            'switch',
            field('condition', $.parenthesized_expression),
            field('body', $.switch_block)
        ),

        switch_block: $ => seq(
            '{',
            repeat(choice($.switch_label, $._statement)),
            '}'
        ),

        switch_label: $ => choice(
            seq('case', $._expression, ':'),
            seq('default', ':')
        ),

        do_statement: $ => seq(
            'do',
            field('body', $._statement),
            'while',
            field('condition', $.parenthesized_expression),
            $._semicolon
        ),

        break_statement: $ => seq('break', optional($.identifier), $._semicolon),

        continue_statement: $ => seq('continue', optional($.identifier), $._semicolon),

        return_statement: $ => seq(
            'return',
            optional($._expression),
            $._semicolon
        ),

        synchronized_statement: $ => seq(
            'synchronized',
            $.parenthesized_expression,
            field('body', $.block)
        ),

        throw_statement: $ => seq('throw', $._expression, $._semicolon),

        try_statement: $ => seq(
            'try',
            field('body', $.block),
            choice(
                repeat1($.catch_clause),
                seq(repeat($.catch_clause), $.finally_clause)
            )
        ),

        catch_clause: $ => seq(
            'catch',
            '(',
            $.catch_formal_parameter,
            ')',
            field('body', $.block)
        ),

        catch_formal_parameter: $ => seq(
            optional($._metadata),
            $.catch_type,
            $._variable_declarator_id
        ),

        catch_type: $ => sep1($._unannotated_type, '|'),

        finally_clause: $ => seq('finally', $.block),

        try_with_resources_statement: $ => seq(
            'try',
            field('resources', $.resource_specification),
            field('body', $.block),
            repeat($.catch_clause),
            optional($.finally_clause)
        ),

        resource_specification: $ => seq(
            '(', sep1($.resource, $._semicolon), optional($._semicolon), ')'
        ),

        resource: $ => choice(
            seq(
                optional($._metadata),
                field('type', $._unannotated_type),
                $._variable_declarator_id,
                '=',
                field('value', $._expression)
            ),
            $._ambiguous_name,
            $.field_access
        ),

        if_element: $ => prec.right(seq(
            'if',
            field('condition', $.parenthesized_expression),
            field('consequence', $._element),
            optional(seq('else', field('alternative', $._element)))
        )),

        if_statement: $ => prec.right(seq(
            'if',
            field('condition', $.parenthesized_expression),
            field('consequence', $._statement),
            optional(seq('else', field('alternative', $._statement)))
        )),


        while_statement: $ => seq(
            'while',
            field('condition', $.parenthesized_expression),
            field('body', $._statement)
        ),

        for_statement: $ => seq(
            'for', '(',
            choice(
                field('init', $.local_variable_declaration),
                seq(
                    commaSep(field('init', $._expression)),
                    $._semicolon
                )
            ),
            field('condition', optional($._expression)), $._semicolon,
            commaSep(field('update', $._expression)), ')',
            field('body', $._statement)
        ),

        enhanced_for_statement: $ => seq(
            'for',
            '(',
            optional($._metadata),
            field('type', $._unannotated_type),
            $._variable_declarator_id,
            'in',
            field('value', $._expression),
            ')',
            field('body', $._statement)
        ),
        //TODO: support await for?
        // support map weirdness?
        for_element: $ => seq(
            optional('await'),
            'for',
            '(',
            optional($._metadata),
            field('type', $._unannotated_type),
            $._variable_declarator_id,
            ':',
            field('value', $._expression),
            ')',
            field('body', $._element)
        ),

        // Annotations

        _annotation: $ => choice(
            $.marker_annotation,
            $.annotation
        ),

        marker_annotation: $ => seq(
            '@',
            field('name', choice($.identifier, $.scoped_identifier))
        ),

        annotation: $ => seq(
            '@',
            field('name', choice($.identifier, $.scoped_identifier)),
            field('arguments', $.annotation_argument_list)
        ),

        annotation_argument_list: $ => seq(
            '(',
            choice(
                $._element_value,
                commaSep($.element_value_pair),
            ),
            ')'
        ),

        element_value_pair: $ => seq(
            field('key', $.identifier),
            '=',
            field('value', $._element_value)
        ),
        //TODO: remove unnecessary annotation related stuff.
        _element_value: $ => prec(1, choice(
            $._expression,
            $._annotation
        )),

        // element_value_array_initializer: $ => seq(
        //     '{',
        //     commaSep($._element_value),
        //     optional(','),
        //     '}'
        // ),

        // Declarations

        _declaration: $ => prec(1, choice(
            // $.module_declaration,
            // $.package_declaration,
            $.import_declaration,
            $.class_definition,
            $.interface_declaration,
            $.annotation_type_declaration,
            $.enum_declaration,
        )),

        // module_declaration: $ => seq(
        //     repeat($._annotation),
        //     optional('open'),
        //     'module',
        //     $._ambiguous_name,
        //     '{',
        //     repeat($.module_directive),
        //     '}'
        // ),

        // module_directive: $ => seq(choice(
        //     seq('requires', repeat($.requires_modifier), $.module_name),
        //     seq('exports', $._ambiguous_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
        //     seq('opens', $._ambiguous_name, optional('to'), optional($.module_name), repeat(seq(',', $.module_name))),
        //     seq('uses', $._ambiguous_name),
        //     seq('provides', $._ambiguous_name, 'with', $._ambiguous_name, repeat(seq(',', $._ambiguous_name)))
        // ), $._semicolon),

        requires_modifier: $ => choice(
            'transitive',
            'static'
        ),

        module_name: $ => choice(
            $.identifier,
            seq($.module_name, '.', $.identifier)
        ),

        // package_declaration: $ => seq(
        //     repeat($._annotation),
        //     'package',
        //     $._ambiguous_name,
        //     $._semicolon
        // ),

        import_declaration: $ => seq(
            $._import,
            optional($._static),
            sep1($.identifier, '.'),
            optional(seq('.', $.asterisk)),
            $._semicolon
        ),

        asterisk: $ => '*',

        enum_declaration: $ => seq(
            'enum',
            field('name', $.identifier),
            field('interfaces', optional($.super_interfaces)),
            field('body', $.enum_body)
        ),

        enum_body: $ => seq(
            '{',
            commaSep($.enum_constant),
            optional(','),
            optional($.enum_body_declarations),
            '}'
        ),

        enum_body_declarations: $ => seq(
            $._semicolon,
            repeat($._class_member_definition)
        ),

        enum_constant: $ => (seq(
            optional($._metadata),
            field('name', $.identifier),
            field('arguments', optional($.argument_list)),
            field('body', optional($.class_body))
        )),

        class_definition: $ => choice(
            seq(
                optional($._metadata),
                optional('abstract'),
                'class',
                field('name', $.identifier),
                optional(field('type_parameters', $.type_parameters)),
                optional(field('superclass', $.superclass)),
                optional(field('interfaces', $.super_interfaces)),
                field('body', $.class_body)
            ),
            seq(
                optional($._metadata),
                optional('abstract'),
                'class',
               $.mixin_application_class
            )
        ),

        _metadata: $ => repeat1($._annotation),

        // modifiers: $ => repeat1(choice(
        //     $._annotation,
        //     // 'public',
        //     // 'protected',
        //     // 'private',
        //     'abstract',
        //     'static',
        //     'final',
        //     'strictfp',
        //     'default',
        //     'synchronized',
        //     'native',
        //     'transient',
        //     'const'
        // )),

        type_parameters: $ => seq(
            '<', commaSep1($.type_parameter), '>'
        ),

        type_parameter: $ => seq(
            optional($._metadata),
            $.identifier,
            optional($.type_bound)
        ),

        type_bound: $ => seq('extends', $._type, repeat(seq('&', $._type))),

        superclass: $ => choice(
            seq(
                'extends',
                $._type_not_void,
                optional($.mixins)
            ),
            $.mixins
        ),

        mixins: $ => seq(
          'with',
            $._type_not_void_list
        ),

        mixin_application_class: $ => seq(
            $.identifier,
            optional($.type_parameters),
            '=',
            $.mixin_application,
            $._semicolon
        ),

        mixin_application: $ => seq(
            $._type_not_void,
            $.mixins,
            optional($.interfaces)
        ),
        mixin_declaration: $ => seq(
            optional($._metadata),
            $._mixin,
            $.identifier,
            optional($.type_parameters),
            optional(seq(
                'on',
                $._type_not_void_list
            )),
            optional($.interfaces),
            $.class_body
        ),
        interfaces: $ => seq(
          $._implements,
          $._type_not_void_list
        ),
        super_interfaces: $ => seq(
            $._implements,
            $._type_not_void_list
        ),

        interface_type_list: $ => seq(
            $._type,
            repeat(seq(',', $._type))
        ),

        class_body: $ => seq(
            '{',
            repeat(
                seq(
                    optional($._metadata),
                $._class_member_definition
                )
            ),
            '}'
        ),

        _class_member_definition: $ => choice(
            seq($.declaration, $._semicolon),
            seq(
              $.method_signature,
               $.function_body
            ),
            // $._class_member_declaration,
            // $.block,
            // $.static_initializer,
            // $.constructor_signature
        ),

        getter_signature: $ => seq(
            optional($._unannotated_type),
            $._get,
            $.identifier
        ),
        setter_signature: $ => seq(
            optional($._unannotated_type),
            $._set,
            $.identifier
        ),
        method_signature: $ => choice(
           seq($.constructor_signature, optional($.initializers)),
           $.factory_constructor_signature,
            seq(
                optional($._static),
                choice(
                   $.function_signature,
                   $.getter_signature,
                   $.setter_signature
                )
            ),
           $.operator_signature
        ),

        declaration: $ => choice(
            seq($.constant_constructor_signature, optional(choice($.redirection, $.initializers))),
            seq($.constructor_signature, optional(choice($.redirection, $.initializers))),
            seq($._external,
                $.constant_constructor_signature
                ),
            seq($._external,
                $.constructor_signature
            ),
            seq(
                optional($._external_and_static),
                   $.getter_signature
            ),
            seq(
                optional($._external_and_static),
                   $.setter_signature

            ),
            seq(
                optional($._external),
                   $.operator_signature
            ),
            seq(
                optional($._external_and_static),
                   $.function_signature
            ),
            seq(
                $._static,
                $._final_or_const,
                $._unannotated_type,
               $.static_final_declaration_list
            ),
            seq(
                'final',
                optional($._unannotated_type),
                $.initialized_identifier_list
            ),
            seq(
                optional($._static_or_covariant),
                choice(
                    $._unannotated_type,
                    $.inferred_type
                ),
                $.initialized_identifier_list
            )
        ),
        initialized_identifier_list: $ => commaSep1(
            $.initialized_identifier
        ),
        initialized_identifier: $ => seq(
            $.identifier,
            optional(seq(
                '=',
                $._expression
            ))
        ),
        static_final_declaration_list: $ => commaSep1(
            $.static_final_declaration
),
        operator_signature: $ => seq(
            optional($._unannotated_type),
            $._operator,
            choice(
                choice(
                    ...[
                        ['>', PREC.REL],
                        ['<', PREC.REL],
                        ['==', PREC.REL],
                        ['>=', PREC.REL],
                        ['<=', PREC.REL],
                        ['!=', PREC.REL],
                        ['&&', PREC.AND],
                        ['||', PREC.OR],
                        ['+', PREC.PLUS],
                        ['-', PREC.PLUS],
                        ['*', PREC.TIMES],
                        ['/', PREC.TIMES],
                        ['&', PREC.AND],
                        ['|', PREC.OR],
                        ['^', PREC.OR],
                        ['%', PREC.TIMES],
                        ['<<', PREC.TIMES],
                        ['>>', PREC.TIMES],
                        ['>>>', PREC.TIMES],
                    ].map(a => a[0])
                ),
                '[]',
                '[]=',
                '~'
            ),
            $.formal_parameter_list
        ),
        static_final_declaration: $ => seq(
          $.identifier,
          '=',
          $._expression
        ),

        _external_and_static: $ => seq(
            $._external,
            optional($._static)),
        _static_or_covariant: $ => choice(
            $._covariant,
            $._static
        ),
        _final_or_const: $ => choice(
            'final',
            'const'
        ),

        static_initializer: $ => seq(
            $._static,
            $.block
        ),

        initializers: $ => seq(
            ':',
            commaSep1($.initializer_list_entry)
        ),
        initializer_list_entry: $ => choice(
            seq('super',
                //$.arguements
                ),
            seq('super',
                //$.arguements
            ),
            $.field_initializer,
        //    $.assertion
        ),

        field_initializer: $ => seq(
            optional(seq($.this, '.')),
            $.identifier,
            '=',
            $._expression,
        //    $.cascade_section
        ),

       // constructor_signature: $ => seq(
       //      $._constructor_declarator,
       //      // optional($.throws),
       //      // field('body', choice(
       //      //     $.constructor_body,
       //      //     $._semicolon
       //      // ))
       //  ),

        factory_constructor_signature: $ => seq(
            $._factory,
            sep1($.identifier, ','),
            $.formal_parameter_list
        ),

        redirecting_factory_constructor_signature: $ => seq(
            optional('const'),
            $._factory,
            sep1($.identifier, ','),
            $.formal_parameter_list,
            '=',
           $._type_not_void,
            optional(seq('.', $.identifier))
        ),

        redirection: $ => seq(
            ':',
            $.this,
            optional(seq(
                '.',
                $.identifier
            )),
            $.argument_list
        ),

        constructor_signature: $ => seq(
            field('name', seq($.identifier, optional(
                seq(
                    '.',
                    $.identifier
                )
            ))),
            field('parameters', $.formal_parameter_list)
        ),
        constant_constructor_signature: $ => seq(
            'const',
            $.qualified,
            $.formal_parameter_list
        ),

        constructor_body: $ => seq(
            '{',
            optional($.explicit_constructor_invocation),
            repeat($._statement),
            '}'
        ),

        explicit_constructor_invocation: $ => seq(
            choice(
                seq(
                    field('type_arguments', optional($.type_arguments)),
                    field('constructor', choice($.this, $.super)),
                ),
                seq(
                    field('object', choice($._ambiguous_name, $._primary)),
                    '.',
                    field('type_arguments', optional($.type_arguments)),
                    field('constructor', $.super),
                )
            ),
            field('arguments', $.argument_list),
            $._semicolon
        ),

        _ambiguous_name: $ => choice(
            $.identifier,
            $.scoped_identifier
        ),

        scoped_identifier: $ => seq(
            field('scope', choice($.identifier, $.scoped_identifier)),
            '.',
            field('name', $.identifier)
        ),

        _class_member_declaration: $ => choice(
            $.field_declaration,
            // $.method_signature,
            // $.class_definition,
            $.interface_declaration,
            $.annotation_type_declaration,
            $.enum_declaration,
            $._semicolon
        ),

        field_declaration: $ => seq(
            choice(
                seq(
                    // optional($.modifiers),
            field('type', $._unannotated_type)
                ),
                $.inferred_type),
            $._variable_declarator_list,
            $._semicolon
        ),

        annotation_type_declaration: $ => seq(
            // optional($._metadata),
            '@interface',
            field('name', $.identifier),
            field('body', $.annotation_type_body)
        ),

        annotation_type_body: $ => seq(
            '{', repeat($._annotation_type_member_declaration), '}'
        ),

        _annotation_type_member_declaration: $ => choice(
            $.annotation_type_element_declaration,
            $.constant_declaration,
            // $.class_definition,
            $.interface_declaration,
            $.annotation_type_declaration
        ),

        annotation_type_element_declaration: $ => seq(
            // optional($._metadata),
            field('type', $._unannotated_type),
            field('name', $.identifier),
            '(', ')',
            field('dimensions', optional($.dimensions)),
            optional($._default_value),
            $._semicolon
        ),

        _default_value: $ => seq(
            'default',
            field('value', $._element_value)
        ),

        interface_declaration: $ => seq(
            // optional($._metadata),
            $._interface,
            field('name', $.identifier),
            field('type_parameters', optional($.type_parameters)),
            optional($.extends_interfaces),
            field('body', $.interface_body)
        ),

        extends_interfaces: $ => seq(
            'extends',
            $.interface_type_list
        ),

        interface_body: $ => seq(
            '{',
            repeat($._interface_member_declaration),
            '}'
        ),

        _interface_member_declaration: $ => choice(
            $.constant_declaration,
            $.enum_declaration,
            // $.method_signature,
            // $.class_definition,
            $.interface_declaration,
            $.annotation_type_declaration,
            $._semicolon
        ),

        constant_declaration: $ => seq(
            optional($._metadata),
            field('type', $._unannotated_type),
            $._variable_declarator_list,
            $._semicolon
        ),

        _variable_declarator_list: $ => commaSep1(
            field('declarator', $.variable_declarator)
        ),

        variable_declarator: $ => seq(
            $._variable_declarator_id,
            optional(seq('=', field('value', $._variable_initializer)))
        ),

        _variable_declarator_id: $ => seq(
            field('name', $.identifier),
            field('dimensions', optional($.dimensions))
        ),

        _variable_initializer: $ => choice(
            $._expression,
        ),

        variable_declaration: $ => seq(
            $._declared_identifier,
            optional(seq(
                ',',
                commaSep1($.identifier)
            ))
        ),

        initialized_variable_definition: $ => seq(
            $._declared_identifier,
            optional(seq('=', $._expression)),
            repeat(seq(',', $.initialized_identifier))
        ),
        // initialized_identifier: $ => seq(
        //   $.identifier,
        //   optional(seq('=', $._expression))
        // ),

        _declared_identifier: $ => seq(
            $._metadata,
            optional($._covariant),
            $._final_const_var_or_type,
            $.identifier
        ),

        // array_initializer: $ => seq(
        //     '{',
        //     commaSep($._variable_initializer),
        //     optional(','),
        //     '}'
        // ),

        // Types

        _final_const_var_or_type: $ => choice(
          seq('final', $._unannotated_type),
          seq('const', $._unannotated_type),
          $.inferred_type,
          $._unannotated_type
        ),

        _type: $ => choice(
            $._unannotated_type,
            $.annotated_type
        ),
        _type_not_void: $ => choice(
            $._numeric_type,
            $.boolean_type,
            alias($.identifier, $.type_identifier),
            $.scoped_type_identifier,
            $.generic_type,
            $.array_type
        ),

        _type_not_void_list: $ => commaSep1(
            $._type_not_void
        ),

        _unannotated_type: $ => choice(
            $._simple_type,
            $.array_type
        ),

        _simple_type: $ => choice(
            $.void_type,
            $._numeric_type,
            $.boolean_type,
            alias($.identifier, $.type_identifier),
            $.scoped_type_identifier,
            $.generic_type
        ),

        annotated_type: $ => seq(
            $._metadata,
            $._unannotated_type
        ),

        scoped_type_identifier: $ => seq(
            choice(
                alias($.identifier, $.type_identifier),
                $.scoped_type_identifier,
                $.generic_type
            ),
            '.',
            optional($._metadata),
            alias($.identifier, $.type_identifier)
        ),

        generic_type: $ => prec.dynamic(10, seq(
            choice(
                alias($.identifier, $.type_identifier),
                $.scoped_type_identifier
            ),
            $.type_arguments
        )),

        array_type: $ => seq(
            field('element', $._unannotated_type),
            field('dimensions', $.dimensions)
        ),

        _numeric_type: $ => choice(
            $.integral_type,
            $.floating_point_type
        ),

        integral_type: $ => choice(
            'byte',
            'short',
            'int',
            'long',
            'char',
            'num'
        ),

        floating_point_type: $ => choice(
            'float',
            'double'
        ),
        //TODO: change boolean to bool here and everywhere to bool
        boolean_type: $ => 'bool',

        void_type: $ => 'void',

        inferred_type: $ => 'var',

        _method_header: $ => seq(
            optional(seq(
                field('type_parameters', $.type_parameters),
                optional($._metadata)
            )),
            field('type', $._unannotated_type),
            $._method_declarator,
            optional($.throws)
        ),

        _method_declarator: $ => seq(
            field('name', $.identifier),
            field('parameters', $.formal_parameter_list),
            field('dimensions', optional($.dimensions))
        ),

        function_body: $ => choice(
            seq(
                optional('async'),
                '=>',
                $._expression,
                $._semicolon
            ),
            seq(
                optional(choice(
                    'async',
                    'async*',
                    'sync*',
                )),
                $.block
            )
        ),
        function_expression_body: $ => choice(
                seq(
                    optional('async'),
                    '=>',
                    $._expression
                ),
                seq(
                    optional(choice(
                        'async',
                        'async*',
                        'sync*',
                    )),
                    $.block
                )
            ),
        function_signature: $ => seq(
            // optional($._metadata),
            optional($._unannotated_type),
            $.identifier,
            $._formal_parameter_part
        ),

        _formal_parameter_part: $ => seq(
            optional($.type_parameters),
            $.formal_parameter_list
        ),

        // formal_parameter_list: $ => seq(
        //     '(',
        //     optional($.receiver_parameter),
        //     commaSep($.formal_parameter),
        //     optional(','),
        //     optional(
        //         choice(
        //         $.spread_parameter,
        //             $.positional_parameters
        //         )
        //     ),
        //     ')'
        // ),
        formal_parameter_list: $ => seq(
            '(',
            optional($.receiver_parameter),
            commaSep(choice(
                $.formal_parameter,
                $.constructor_param
            )),
            optional(','),
            optional(
                choice(
                    $.spread_parameter,
                    $.positional_parameters
                )
            ),
            ')'
        ),

        // positional_parameters: $ => seq(
        //     '[',
        //     commaSep1($.formal_parameter),
        //     optional(','),
        //     optional($.spread_parameter),
        //     ']'
        // ),

        positional_parameters: $ => seq(
            '[',
            commaSep1(
                choice(
                    $.formal_parameter,
                    $.constructor_param
                )
            ),
            optional(','),
            optional($.spread_parameter),
            ']'
        ),

        formal_parameter: $ => seq(
            optional($._metadata),
            field('type', $._unannotated_type),
            $._variable_declarator_id
        ),

        constructor_param: $ => seq(
            optional($._metadata),
            'this.',
            $.identifier
        ),

        receiver_parameter: $ => seq(
            optional($._metadata),
            $._unannotated_type,
            optional(seq($.identifier, '.')),
            $.this
        ),

        spread_parameter: $ => seq(
            optional($._metadata),
            $._unannotated_type,
            '...',
            $.variable_declarator
        ),

        throws: $ => seq(
            'throws', commaSep1($._type)
        ),

        local_variable_declaration: $ => seq(
            optional($._metadata),
            field('type', choice(
                $._unannotated_type,
                $.inferred_type
            )),
            $._variable_declarator_list,
            $._semicolon
        ),

        // method_signature: $ => seq(
        //     optional($._metadata),
        //     $._method_header,
        //     choice(field('body', $.block), $._semicolon)
        // ),

        qualified: $ => seq($.identifier,
            optional(
                seq('.', $.identifier)
            )),

        // Built in identifier tokens:
        //abstract
        as: $ => 'as',
        _covariant: $ => 'covariant',
        _deferred: $ => 'deferred',
        _dynamic: $ => 'dynamic',
        _export: $ => 'export',
        _external: $ => 'external',
        _factory: $ => 'factory',
        _Function: $ => 'Function',
        _get: $ => 'get',
        _implements: $ => 'implements',
        _import: $ => 'import',
        _interface: $ => 'interface',
        _library: $ => 'library',
        _operator: $ => 'operator',
        _mixin: $ => 'mixin',
        _part: $ => 'part',
        _set: $ => 'set',
        _static: $ => 'static',
        _typedef: $ => 'typedef',
        this: $ => 'this',

        super: $ => 'super',
        
        _semicolon: $ => seq(';', optional($._automatic_semicolon)),

        identifier: $ => /[a-zA-Z_]\w*/,
        //TODO: add support for triple-slash comments as a special category.

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => token(prec(PREC.COMMENT, choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        ))),
    }
});

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
    return optional(commaSep1(rule))
}
