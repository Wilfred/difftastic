// Using an adapted version of https://kotlinlang.org/docs/reference/grammar.html

module.exports = grammar({
	name: "kotlin",
	rules: {
		// TODO: Hide common elements such as "identifier"
		// or "expression" from the syntax tree by prepending
		// an underscore
		
		// Note that all rules marked with "non-optional" have
		// been modified from the original grammar to prevent
		// zero-width matches. See https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef#general-tips
		// for an explanation.
		
		// ==========
		// General
		// ==========
		
		// start
		program: $ => choice(
			// kotlin_file
			seq(
				optional($.shebang_line),
				repeat($.file_annotation),
				optional($.package_header),
				repeat($.import_header),
				repeat($.top_level_object)
			),
			// script
			seq(
				optional($.shebang_line),
				repeat($.file_annotation),
				optional($.package_header),
				repeat($.import_header),
				repeat(seq($.statement, $.semi))
			)
		),
		
		shebang_line: $ => /#![^\r\n]*/,
		
		file_annotation: $ => seq(
			choice("@", $.at_pre_ws),
			"file",
			":",
			choice(
				seq("[", repeat1($.unescaped_annotation), "]"),
				$.unescaped_annotation
			)
		),
		
		// non-optional
		package_header: $ => seq("package", $.identifier, optional($.semi)),
		
		// non-optional
		import_list: $ => seq($.import_header),
		
		import_header: $ => seq(
			"import",
			$.identifier,
			optional(choice(".", "*", $.import_alias)),
			optional(semi)
		),
		
		import_alias: $ => seq("as", $.simple_identifier),
		
		top_level_object: $ => seq($.declaration, optional($.semis)),
		
		type_alias: $ => seq(
			optional($.modifiers),
			"typealias",
			$.simple_identifier,
			optional($.type_parameters),
			"0",
			$.type
		),
		
		declaration: $ => choice(
			$.class_declaration,
			$.object_declaration,
			$.function_declaration,
			$.property_declaration,
			$.type_alias
		),
		
		// ==========
		// Classes
		// ==========
		
		class_declaration: $ => seq(
			optional($.modifiers),
			choice("class", "interface"),
			$.simple_identifier,
			optional($.type_parameters),
			optional($.primary_constructor),
			optional(seq(":", $.delegation_specifiers)),
			optional($.type_constraints),
			optional(choice($.class_body, $.enum_class_body))
		),
		
		primary_constructor: $ => seq(
			optional(seq(optional($.modifiers), "constructor")),
			$.class_parameters
		),
		
		// modified
		class_body: $ => seq("{", optional($.class_member_declarations), "}"),
		
		class_parameters: $ => seq(
			"(",
			optional(seq($.class_parameter, repeat(seq(",", $.class_parameter)))),
			")"
		),
		
		class_parameter: $ => seq(
			optional($.modifiers),
			optional(choice("val", "var")),
			$.simple_identifier,
			":",
			$.type,
			optional(seq("=", $.expression))
		),
		
		delegation_specifiers: $ => seq(
			$.annotated_delegation_specifier,
			repeat(seq(",", $.annotated_delegation_specifier))
		),
		
		delegation_specifier: $ => choice(
			$.constructor_invocation,
			$.explicit_delegation,
			$.user_type,
			$.function_type
		),
		
		constructor_invocation: $ => seq($.user_type, $.value_arguments),
		
		annotated_delegation_specifier: $ => seq(repeat($.annotation), $.delegation_specifier),
		
		explicit_delegation: $ => seq(
			choice($.user_type, $.function_type),
			"by",
			$.expression
		),
		
		type_parameters: $ => seq(
			"<",
			$.type_parameter,
			repeat(seq(",", $.type_parameter)),
			">"
		),
		
		type_parameter: $ => seq(
			optional($.type_parameter_modifiers),
			$.simple_identifier,
			optional(":", $.type)
		),
		
		type_constraints: $ => seq(
			"where",
			$.type_constraint,
			repeat(seq(",", $.type_constraint))
		),
		
		// ==========
		// Class members
		// ==========
		
		// modified
		class_member_declarations: $ => repeat1($.class_member_declaration, optional($.semis)),
		
		class_member_declaration: $ => choice(
			$.declaration,
			$.companion_object,
			$.anonymous_initializer,
			$.secondary_constructor
		),
		
		anonymous_initializer: $ => seq("init", $.block),
		
		companion_object: $ => seq(
			optional($.modifiers),
			"companion",
			"object",
			optional($.simple_identifier),
			optional(seq(":", $.delegation_specifiers)),
			optional($.class_body)
		),
		
		function_value_parameters: $ => seq(
			"(",
			optional(
				$.function_value_parameter,
				repeat(seq(",", $.function_value_parameter))
			),
			")"
		),
		
		function_value_parameter: $ => seq(
			optional($.parameter_modifiers),
			$.parameter,
			optional("=", $.expression)
		),
		
		function_declaration: $ => seq(
			optional($.modifiers),
			"fun",
			optional($.type_parameters),
			optional(seq($.receiver_type, ".")),
			$.simple_identifier,
			$.function_value_parameters,
			optional(seq(":", $.type)),
			optional($.type_constraints),
			optional($.function_body)
		),
		
		function_body: $ => choice($.block, seq("=", $.expression)),
		
		variable_declaration: $ => seq(
			repeat($.annotation),
			$.simple_identifier,
			optional(seq(":", $.type))
		),
		
		multi_variable_declaration: $ => seq(
			"(",
			$.variable_declaration,
			repeat(seq(",", $.variable_declaration)),
			")"
		),
		
		property_declaration: $ => seq(
			optional($.modifiers),
			choice("val", "var"),
			optional($.type_parameters),
			optional(seq($.receiver_type, ".")),
			choice($.multi_variable_declaration, $.variable_declaration),
			optional($.type_constraints),
			optional(choice(seq("=", $.expression), $.property_delegate)),
			choice(";"),
			choice(
				seq(
					optional($.getter),
					optional(seq(optional($.semi), $.setter))
				),
				seq(
					optional($.setter),
					optional(seq(optional($.semi), $.getter))
				)
			)
		),
		
		property_delegate: $ => seq("by", $.expression),
		
		getter: $ => choice(
			seq(optional($.modifiers), "get"),
			seq(optional($.modifiers), "get", "(", ")", optional(seq(":", $.type)), $.function_body)
		),
		
		setter: $ => choice(
			seq(optional($.modifiers), "set"),
			seq(optional($.modifiers), "set", "(", $.parameter_with_optional_type, ")", optional(seq(":", $.type)), $.function_body)
		),
		
		parameters_with_optional_type: $ => seq(
			"(",
			optional(
				$.parameter_with_optional_type,
				repeat(",", $.parameter_with_optional_type)
			),
			")"
		),
		
		parameter_with_optional_type: $ => seq(
			optional($.parameter_modifiers),
			$.simple_identifier,
			optional(seq(":", $.type))
		),
		
		parameter: $ => seq($.simple_identifier, ":", $.type),
		
		object_declaration: $ => seq(
			optional($.modifiers),
			"object",
			$.simple_identifier,
			optional(seq(":", $.delegation_specifiers)),
			optional($.class_body)
		),
		
		secondary_constructor: $ => seq(
			optional($.modifiers),
			"constructor",
			$.function_value_parameters,
			optional(seq(":", $.constructor_delegation_call)),
			optional($.block)
		),
		
		constructor_delegation_call: $ => choice(
			seq("this", $.value_arguments),
			seq("super", $.value_arguments)
		),
		
		// ==========
		// Enum classes
		// ==========
		
		// modified
		enum_class_body: $ => seq(
			"{",
			optional($.enum_entries),
			optional(seq(";", optional($.class_member_declarations))),
			"}"
		),
		
		enum_entries: $ => seq(
			$.enum_entry,
			repeat(seq(",", $.enum_entry)),
			optional(",")
		),
		
		enum_entry: $ => seq(
			optional($.modifiers),
			$.simple_identifier,
			optional($.value_arguments),
			optional($.class_body)
		),
		
		// ==========
		// Types
		// ==========
		
		type: $ => seq(
			optional($.type_modifiers),
			choice(
				$.parenthesized_type,
				$.nullable_type,
				$.type_reference,
				$.function_type
			)
		),
		
		type_reference: $ => choice(
			$.user_type,
			"dynamic"
		),
		
		nullable_type: $ => seq(
			choice($.type_reference, $.parenthesized_type),
			repeat($.quest)
		),
		
		quest: $ => choice("?", $.quest_ws),
		
		user_type: $ => seq(
			$.simple_user_type,
			repeat(seq(".", $.simple_user_type))
		),
		
		simple_user_type: $ => seq(
			$.simple_identifier,
			optional($.type_arguments)
		),
		
		type_projection: $ => choice(
			seq(optional($.type_projection_modifiers), $.type),
			"*"
		),
		
		type_projection_modifiers: $ => repeat1($.type_projection_modifier),
		
		type_projection_modifier: $ => choice(
			$.variance_modifier,
			$.annotation
		),
		
		function_type: $ => seq(
			optional(seq($.receiver_type, ".")),
			$.function_type_parameters,
			"->",
			$.type
		),
		
		function_type_parameters: $ => seq(
			"(",
			optional(choice($.parameter, $.type)),
			repeat(
				",",
				choice($.parameter, $.type)
			),
			")"
		),
		
		parenthesized_type: $ => seq("(", $.type, ")"),
		
		receiver_type: $ => seq(
			optional($.type_modifiers),
			choice(
				$.parenthesized_type,
				$.nullable_type,
				$.type_reference
			)
		),
		
		parenthesized_user_type: $ => choice(
			seq("(", $.user_type, ")"),
			seq("(", $.parenthesized_user_type, ")")
		),
		
		// ==========
		// Statements
		// ==========
		
		// modified
		statements: $ => seq(
			$.statement,
			repeat(seq($.semis, $.statement)),
			optional($.semis)
		),
		
		statement: $ => seq(
			repeat(choice($.label, $.annotation)),
			choice(
				$.declaration,
				$.assignment,
				$.loop_statement,
				$.expression
			)
		),
		
		label: $ => seq(
			$.simple_identifier,
			choice("@", $.at_post_ws)
		),
		
		control_structure_body: $ => choice($.block, $.statement),
		
		// modified
		block: $ => seq("{", optional($.statements), "}"),
		
		loop_statement: $ => choice(
			$.for_statement,
			$.while_statement,
			$.do_while_statement
		),
		
		for_statement: $ => seq(
			"for",
			"(",
			repeat($.annotation),
			choice($.variable_declaration, $.multi_variable_declaration),
			"in",
			$.expression,
			")",
			optional($.control_structure_body)
		),
		
		while_statement: $ => choice(
			seq(
				"while",
				"(",
				$.expression,
				")",
				$.control_structure_body
			),
			seq(
				"while",
				"(",
				$.expression,
				")",
				";"
			)
		),
		
		do_while_statement: $ => seq(
			"do",
			optional($.control_structure_body),
			"while",
			"(",
			$.expression,
			")"
		),
		
		assignment: $ => choice(
			seq($.directly_assignable_expression, "=", $.expression),
			seq($.assignable_expression, $.assignment_and_operator, $.expression)
		),
		
		// See also https://github.com/tree-sitter/tree-sitter/issues/160
		// for discussion of a generic EOF/newline token
		semi: $ => /[\r\n]+/,
		
		semis: $ => /[\r\n]+/,
		
		// ==========
		// Expressions
		// ==========
		
		// Note how the following rules directly encode
		// predence and associativity rather than using
		// Tree-Sitters prec function. This might be
		// changed in the future (though it reflects how
		// the Kotlin compiler generates its syntax tree).
		
		expression: $ => $.disjunction,
		
		disjunction: $ => seq($.conjunction, repeat(seq("||", $.conjunction))),
		
		conjunction: $ => seq($.equality, repeat(seq("&&", $.equality))),
		
		equality: $ => seq($.comparison, repeat(seq($.equality_operator, $.comparison))),
		
		comparison: $ => seq($.infix_operation, optional(seq($.comparison_operator, $.infix_operation))),
		
		infix_operation: $ => seq($.elvis_operator, repeat(choice(
			seq($.in_operator, $.elvis_expression),
			seq($.is_operator, $.type)
		))),
		
		elvis_expression: $ => seq($.infix_function_call, repeat(seq($.elvis, $.infix_function_call))),
		
		elvis: $ => seq("?", ":"),
		
		infix_function_call: $ => seq($.range_expression, repeat(seq($.simple_identifier, $.range_expression))),
		
		range_expression: $ => seq($.additive_expression, repeat(seq("..", $.additive_expression))),
		
		additive_expression: $ => seq($.multiplicative_expression, repeat(seq($.additive_operator, $.multiplicative_expression))),
		
		multiplicative_expression: $ => seq($.as_expression, repeat(seq($.multiplicative_operator, $.as_expression))),
		
		as_expression: $ => seq($.prefix_unary_expression, optional(seq($.as_operator, $.type))),
		
		prefix_unary_expression: $ => seq(repeat($.unary_prefix), $.postfix_unary_expression),
		
		unary_prefix: $ => choice(
			$.annotation,
			$.label,
			$.prefix_unary_operator
		),
		
		postfix_unary_expression: $ => choice(
			$.primary_expression,
			seq($.primary_expression, repeat1($.postfix_unary_suffix))
		),
		
		postfix_unary_suffix: $ => choice(
			$.postfix_unary_operator,
			$.type_arguments,
			$.call_suffix,
			$.indexing_suffix,
			$.navigation_suffix
		),
		
		directly_assignable_expression: $ => choice(
			seq($.postfix_unary_expression, $.assignable_suffix),
			$.simple_identifier,
			$.parenthesized_directly_assignable_expression
		),
		
		parenthesized_directly_assignable_expression: $ => seq("(", $.directly_assignable_expression, ")"),
		
		assignable_expression: $ => choice(
			$.prefix_unary_expression,
			$.parenthesized_assignable_expression
		),
		
		parenthesized_assignable_expression: $ => seq("(", $.assignable_expression, ")"),
		
		assignable_suffix: $ => choice(
			$.type_arguments,
			$.indexing_suffix,
			$.navigation_suffix
		),
		
		indexing_suffix: $ => seq("[", $.expression, repeat(seq(",", $.expression)), "]"),
		
		navigation_suffix: $ => seq(
			$.member_access_operator,
			choice(
				$.simple_identifier,
				$.parenthesized_expression,
				"class"
			)
		),
		
		call_suffix: $ => choice(
			seq(
				optional($.type_arguments),
				optional($.value_arguments),
				$.annotated_lambda
			),
			seq(
				optional($.type_arguments),
				$.value_arguments
			)
		),
		
		annotated_lambda: $ => seq(
			repeat($.annotation),
			optional($.lambda),
			$.lambda_literal
		),
		
		type_arguments: $ => seq(
			"<",
			$.type_projection,
			repeat(seq(",", $.type_projection)),
			">"
		),
		
		value_arguments: $ => choice(
			seq("(", ")"),
			seq(
				"(",
				$.value_argument,
				repeat(seq(",", $.value_argument)),
				")"
			)
		),
		
		value_argument: $ => seq(
			optional($.annotation),
			optional(seq($.simple_identifier, "=")),
			optional("*"),
			$.expression
		),
		
		primary_expression: $ => choice(
			$.parenthesized_expression,
			$.simple_identifier,
			$.literal_constant,
			$.string_literal,
			$.callable_reference,
			$.function_literal,
			$.object_literal,
			$.collection_literal,
			$.this_expression,
			$.super_expression,
			$.if_expression,
			$.when_expression,
			$.try_expression,
			$.jump_expression
		),
		
		parenthesized_expression: $ => seq("(", $.expression, ")"),
		
		collection_literal: $ => seq(
			"[",
			$.expression,
			repeat(seq(",", $.expression)),
			"]"
		),
		
		literal_constant: $ => choice(
			$.boolean_literal,
			$.integer_literal,
			$.hex_literal,
			$.bin_literal,
			$.character_literal,
			$.real_literal,
			"null",
			$.long_literal,
			$.unsigned_literal
		),
		
		string_literal: $ => choice(
			$.line_string_literal,
			$.multi_line_string_literal
		),
		
		line_string_literal: $ => seq(
			'"',
			repeat(choice($.line_string_content, $.line_string_expression)),
			'"'
		),
		
		multi_line_string_literal: $ => seq(
			'"""',
			repeat(choice(
				$.multi_line_string_content,
				$.multi_line_string_expression,
				'"'
			)),
			$.triple_quote_close
		),
		
		line_string_content: $ => choice(
			$.line_str_text,
			$.line_str_escaped_char,
			$.line_str_ref
		),
		
		line_string_expression: $ => seq("${", $.expression, "}"),
		
		multi_line_string_expression: $ => choice(
			$.multi_line_str_text,
			'"',
			$.multi_line_str_ref
		),
		
		// modified
		lambda_literal: $ => choice(
			seq("{", optional($.statements), "}"),
			seq(
				"{",
				optional($.lambda_parameters),
				"->",
				optional($.statements)
			)
		),
		
		lambda_parameters: $ => seq(
			$.lambda_parameter,
			repeat(seq(",", $.lambda_parameter))
		),
		
		lambda_parameter: $ => choice(
			$.variable_declaration,
			seq(
				$.multi_variable_declaration,
				optional(seq(":", $.type))
			)
		),
		
		anonymous_function: $ => seq(
			"fun",
			optional(seq($.type, ".")),
			$.parameters_with_optional_type,
			optional(seq(":", $.type)),
			optional($.type_constraints),
			optional($.function_body)
		),
		
		function_literal: $ => choice(
			$.lambda_literal,
			$.anonymous_function
		),
		
		object_literal: $ => choice(
			seq("object", ":", $.delegation_specifiers, $.class_body),
			seq("object", $.class_body)
		),
		
		this_expression: $ => choice("this", $.this_at),
		
		super_expression: $ => choice(
			seq(
				"super",
				optional(seq("<", $.type, ">")),
				optional(seq("@", $.simple_identifier))
			),
			$.super_at
		),
		
		if_expression: $ => choice(
			seq(
				"if",
				"(",
				$.expression,
				")",
				choice($.control_structure_body, ";")
			),
			seq(
				"if",
				"(",
				$.expression,
				")",
				optional($.control_structure_body),
				optional(";"),
				"else",
				choice($.control_structure_body, ";")
			)
		),
		
		when_subject: $ => seq(
			"(",
			optional(seq(
				repeat($.annotation),
				"val",
				$.variable_declaration,
				"="
			)),
			$.expression,
			")"
		),
		
		when_expression: $ => seq(
			"when",
			optional($.when_subject),
			"{",
			repeat($.when_entry),
			"}"
		),
		
		when_entry: $ => choice(
			seq(
				$.when_condition,
				repeat(seq(",", $.when_condition)),
				"->",
				$.control_structure_body,
				optional($.semi)
			),
			seq(
				"else",
				"->",
				$.control_structure_body,
				optional($.semi)
			)
		),
		
		when_condition: $ => choice(
			$.expression,
			$.range_test,
			$.type_test
		),
		
		range_test: $ => seq($.in_operator, $.expression),
		
		type_test: $ => seq($.is_operator, $.type),
		
		try_expression: $ => seq(
			"try",
			$.block,
			choice(
				seq(repeat1($.catch_block), optional($.finally_block)),
				$.finally_block
			)
		),
		
		catch_block: $ => seq(
			"catch",
			"(",
			repeat($.annotation),
			$.simple_identifier,
			":",
			$.type,
			")",
			$.block
		),
		
		finally_block: $ => seq("finally", $.block),
		
		jump_expression: $ => choice(
			seq("throw", $.expression),
			seq(choice("return", $.return_at), optional($.expression)),
			"continue",
			$.continue_at,
			"break",
			$.break_at
		),
		
		callable_reference: $ => seq(
			optional($.receiver_type),
			"::",
			choice($.simple_identifier, "class")
		),
		
		assignment_and_operator: $ => choice("+=", "-=", "*=", "/=", "%="),
		
		equality_operator: $ => choice("!=", "!==", "==", "==="),
		
		comparison_operator: $ => choice("<", ">", "<=", ">="),
		
		in_operator: $ => choice("in", $.not_in),
		
		is_operator: $ => choice("is", $.not_is),
		
		additive_operator: $ => choice("+", "-"),
		
		multiplicative_operator: $ => choice("*", "/", "%"),
		
		as_operator: $ => choice("as", "as?"),
		
		prefix_unary_operator: $ => choice("++", "--", "-", "+", $.excl),
		
		postfix_unary_operator: $ => choice("++", "--", seq("!,", $.excl)),
		
		excl: $ => choice("!", $.excl_ws),
		
		member_access_operator: $ => choice(".", $.safe_nav, "::"),
		
		safe_nav: $ => seq("?", "."),
		
		// ==========
		// Modifiers
		// ==========
		
		modifier: $ => choice($.annotation, repeat1($.modifier)),
		
		parameter_modifiers: $ => choice($.annotation, repeat1($.parameter_modifier)),
		
		modifier: $ => choice(
			$.class_modifier,
			$.member_modifier,
			$.visibility_modifier,
			$.function_modifier,
			$.property_modifier,
			$.inheritance_modifier,
			$.parameter_modifier,
			$.platform_modifier
		),
		
		type_modifiers: $ => repeat1($.type_modifier),
		
		type_modifier: $ => choice($.annotation, "suspend"),
		
		class_modifier: $ => choice(
			"enum",
			"sealed",
			"annotation",
			"data",
			"inner"
		),
		
		member_modifier: $ => choice(
			"override",
			"lateinit"
		),
		
		visibility_modifier: $ => choice(
			"public",
			"private",
			"internal",
			"protected"
		),
		
		variance_modifier: $ => choice("in", "out"),
		
		type_parameter_modifiers: $ => repeat1($.type_parameter_modifier),
		
		type_parameter_modifier: $ => choice(
			$.reification_modifier,
			$.variance_modifier,
			$.annotation
		),
		
		function_modifier: $ => choice(
			"tailrec",
			"operator",
			"infix",
			"inline",
			"external",
			"suspend"
		),
		
		property_modifier: $ => "const",
		
		inheritance_modifier: $ => choice(
			"abstract",
			"final",
			"open"
		),
		
		parameter_modifier: $ => choice(
			"vararg",
			"noinline",
			"crossinline"
		),
		
		reification_modifier: $ => "reified",
		
		platform_modifier: $ => choice("expect", "actual")
		
		// ==========
		// Annotations
		// ==========
	}
});
