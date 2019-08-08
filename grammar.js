/*
 * MIT License
 * 
 * Copyright (c) 2019 fwcd
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

// Using an adapted version of https://kotlinlang.org/docs/reference/grammar.html

const PREC = {
	POSTFIX: 16,
	PREFIX: 15,
	TYPE_RHS: 14,
	AS: 13,
	MULTIPLICATIVE: 12,
	ADDITIVE: 11,
	RANGE: 10,
	INFIX: 9,
	ELVIS: 8,
	CHECK: 7,
	COMPARISON: 6,
	EQUALITY: 5,
	CONJUNCTION: 4,
	DISJUNCTION: 3,
	SPREAD: 2,
	ASSIGNMENT: 1,
	RETURN_OR_THROW: 0
};
const DEC_DIGITS = token(sep1(/[0-9]+/, /_+/));
const HEX_DIGITS = token(sep1(/[0-9a-fA-F]+/, /_+/));
const BIN_DIGITS = token(sep1(/[01]/, /_+/));
const REAL_EXPONENT = token(seq(/[eE]/, optional(/[+-]/), DEC_DIGITS))

module.exports = grammar({
	name: "kotlin",
	rules: {
		// ====================
		// Syntax grammar
		// ====================
		
		// ==========
		// General
		// ==========
		
		// start
		source_file: $ => seq(
			optional($.shebang_line),
			// repeat($.file_annotation), TODO
			optional($.package_header),
			repeat($.import_header),
			repeat(seq($._statement, $._semi))
		),
		
		shebang_line: $ => seq("#!", /[^\r\n]*/),
		
		package_header: $ => seq("package", $.identifier, $._semi),
		
		import_header: $ => seq(
			"import",
			$.identifier,
			optional(choice(seq(".*"), $.import_alias)), 
			$._semi
		),

		import_alias: $ => seq("as", $.simple_identifier),

		top_level_object: $ => seq($._declaration, optional($._semis)),

		type_alias: $ => seq(
			"typealias",
			$.simple_identifier,
			"=",
			$._type
		),
		
		_declaration: $ => choice(
			$.class_declaration,
			$.object_declaration,
			$.function_declaration,
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
			// TODO
			optional($.class_body)
		),

		class_body: $ => seq("{", optional($.class_member_declarations), "}"),

		class_parameters: $ => seq("(", optional(sep1($.class_parameter, ",")), ")"),

		class_parameter: $ => seq(
			optional($.modifiers),
			optional(choice("val", "var")),
			$.simple_identifier,
			":",
			$._type,
			optional(seq("=", $._expression))
		),

		delegation_specifiers: $ => sep1($._annotated_delegation_specifier, ","),

		_delegation_specifier: $ => choice(
			$.constructor_invocation,
			$.explicit_delegation,
			$.user_type,
			$.function_type
		),

		constructor_invocation: $ => seq($.user_type, $.value_arguments),

		_annotated_delegation_specifier: $ => seq(repeat($.annotation), $._delegation_specifier),

		explicit_delegation: $ => seq(
			choice($.user_type, $.function_type),
			"by",
			$._expression
		),

		type_parameters: $ => seq("<", sep1($.type_parameter, ","), ">"),

		type_parameter: $ => seq(
			optional($.type_parameter_modifiers),
			$.simple_identifier,
			optional(seq(":", $._type))
		),

		type_constraints: $ => seq("where", sep1($.type_constraint, ",")),

		type_constraint: $ => seq(
			repeat($.annotation),
			$.simple_identifier,
			":",
			$._type
		),

		// ==========
		// Class members
		// ==========
		
		class_member_declarations: $ => repeat1(seq($._class_member_declaration, $._semis)),

		_class_member_declaration: $ => choice(
			$._declaration,
			$.companion_object,
			$.anonymous_initializer,
			$.secondary_constructor
		),

		anonymous_initializer: $ => seq("init", $._block),

		companion_object: $ => seq(
			optional($.modifiers),
			"companion",
			"object",
			optional($.simple_identifier),
			// TODO: Delegation specifiers
			optional($.class_body)
		),

		variable_declaration: $ => seq(
			// repeat($.annotation), TODO
			$.simple_identifier,
			optional(seq(":", $._type))
		),

		function_declaration: $ => seq( // TODO
			optional($.modifiers),
			optional($.type_parameters),
			"fun",
			$.simple_identifier,
			"(", ")",
			optional($.function_body)
		),

		function_body: $ => choice($._block, seq("=", $._expression)),

		parameter: $ => seq($.simple_identifier, ":", $._type),

		object_declaration: $ => seq( // TODO
			"object",
			$.simple_identifier,
			optional($.class_body)
		),

		secondary_constructor: $ => seq(
			optional($.modifiers),
			"constructor",
			"(", ")", // TODO: Value parameters
			// TODO: Delegation call
			optional($._block)
		),
		
		// ==========
		// Enum classes
		// ==========
		
		
		// ==========
		// Types
		// ==========
		
		_type: $ => seq(
			optional($.type_modifiers),
			choice(
				$.parenthesized_type, // TODO: Conflicts with function_type_parameters
				$.nullable_type,
				$.type_reference
				// $.function_type
			)
		),

		type_reference: $ => choice(
			$.user_type,
			"dynamic"
		),

		nullable_type: $ => seq(
			choice($.type_reference, $.parenthesized_type),
			repeat1($.quest)
		),

		quest: $ => "?",

		user_type: $ => prec.left(sep1($._simple_user_type, ".")),
		
		_simple_user_type: $ => prec.right(seq($.simple_identifier, optional($.type_arguments))),

		type_projection: $ => choice(
			seq(optional($.type_projection_modifiers), $._type),
			"*"
		),

		type_projection_modifiers: $ => repeat1($._type_projection_modifier),

		_type_projection_modifier: $ => $.variance_modifier,

		function_type: $ => seq(
			optional(seq($._type, ".")),
			$.function_type_parameters,
			"->",
			$._type
		),

		function_type_parameters: $ => seq(
			"(",
			optional(sep1(choice($.parameter, $._type), ",")),
			")"
		),

		parenthesized_type: $ => seq("(", $._type, ")"),

		parenthesized_user_type: $ => seq(
			"(",
			choice($.user_type, $.parenthesized_user_type),
			")"
		),
		
		// ==========
		// Statements
		// ==========
		
		statements: $ => seq(
			$._statement,
			repeat(seq($._semis, $._statement)),
			optional($._semis),
		),

		_statement: $ => choice(
			$._declaration,
			seq(
				repeat(choice($.label, $.annotation)),
				choice(
					$.assignment,
					$._loop_statement,
					$._expression
				)
			)
		),

		label: $ => seq(
			$.simple_identifier,
			"@"
		),

		control_structure_body: $ => $._block, // TODO

		_block: $ => seq("{", optional($.statements), "}"),

		_loop_statement: $ => choice(
			$.for_statement,
			$.while_statement,
			$.do_while_statement
		),
		
		for_statement: $ => seq(
			"for",
			"(",
			repeat($.annotation),
			choice($.variable_declaration), // TODO: Multi-variable declaration
			"in",
			$._expression,
			")",
			optional($.control_structure_body)
		),

		while_statement: $ => seq(
			"while",
			"(",
			$._expression,
			")",
			choice(";", $.control_structure_body)
		),

		do_while_statement: $ => seq(
			"do",
			optional($.control_structure_body),
			"while",
			"(",
			$._expression,
			")",
		),

		// See also https://github.com/tree-sitter/tree-sitter/issues/160
		// generic EOF/newline token
		_semi: $ => /[\r\n]+/,
		
		_semis: $ => /[\r\n]+/,
		
		assignment: $ => choice(
			prec.left(PREC.ASSIGNMENT, seq($.directly_assignable_expression, $._assignment_and_operator, $._expression)),
			// TODO
		),
		
		// ==========
		// Expressions
		// ==========
		
		_expression: $ => choice(
			$.unary_expression,
			$.binary_expression,
			$._primary_expression
		),

		unary_expression: $ => choice(
			prec.left(PREC.POSTFIX, seq($._expression, $._postfix_unary_suffix)),
			prec.right(PREC.PREFIX, seq(choice($.annotation, $.label, $._prefix_unary_operator), $._expression)),
			prec.left(PREC.AS, seq($._expression, seq($._as_operator, $._type))),
			prec.left(PREC.SPREAD, seq("*", $._expression))
		),

		binary_expression: $ => choice(
			prec.left(PREC.MULTIPLICATIVE, seq($._expression, $._multiplicative_operator, $._expression)),
			prec.left(PREC.ADDITIVE, seq($._expression, $._additive_operator, $._expression)),
			prec.left(PREC.RANGE, seq($._expression, "..", $._expression)),
			prec.left(PREC.INFIX, seq($._expression, $.simple_identifier, $._expression)),
			prec.left(PREC.ELVIS, seq($._expression, "?:", $._expression)),
			prec.left(PREC.CHECK, seq($._expression, choice($._in_operator, $._is_operator), $._expression)),
			prec.left(PREC.COMPARISON, seq($._expression, $._comparison_operator, $._expression)),
			prec.left(PREC.EQUALITY, seq($._expression, $._equality_operator, $._expression)),
			prec.left(PREC.CONJUNCTION, seq($._expression, "&&", $._expression)),
			prec.left(PREC.DISJUNCTION, seq($._expression, "||", $._expression))
		),

		_postfix_unary_suffix: $ => choice(
			$._postfix_unary_operator,
			// TODO
		),

		type_arguments: $ => seq("<", sep1($.type_projection, ","), ">"),

		value_arguments: $ => seq("(", optional(sep1($.value_argument, ",")), ")"),

		value_argument: $ => seq(
			optional($.annotation),
			optional(seq($.simple_identifier, "=")),
			optional("*"),
			$._expression
		),

		_primary_expression: $ => choice(
			$.parenthesized_expression,
			$.simple_identifier,
			$._literal_constant,
			$._string_literal,
			$.callable_reference,
			$._function_literal,
			$.object_literal,
			$.collection_literal,
			$.this_expression,
			$.super_expression,
			$.if_expression,
			$.when_expression,
			$.try_expression,
			$.jump_expression
		),

		parenthesized_expression: $ => seq("(", $._expression, ")"),

		collection_literal: $ => seq("[", $._expression, repeat(seq(",", $._expression)), "]"),

		_literal_constant: $ => choice(
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

		_string_literal: $ => choice(
			$.line_string_literal,
			$.multi_line_string_literal
		),

		line_string_literal: $ => seq('"', repeat(choice($._line_string_content, $.interpolation)), '"'),

		multi_line_string_literal: $ => seq(
			'"""',
			repeat(choice(
				$._multi_line_string_content,
				$.interpolation
			)),
			'"""'
		),

		_line_string_content: $ => choice(
			$._line_str_text,
			$._line_str_escaped_char
		),

		line_string_expression: $ => seq("${", $._expression, "}"),

		_multi_line_string_content: $ => choice($._multi_line_str_text, '"'),

		interpolation: $ => choice(
			seq("${", $._expression, "}"),
			seq("$", $.simple_identifier)
		),

		lambda_literal: $ => seq(
			"{",
			optional(seq(optional($.lambda_parameters), "->")),
			optional($.statements),
			"}"
		),

		lambda_parameters: $ => sep1($._lambda_parameter, ","),

		_lambda_parameter: $ => choice(
			$.variable_declaration, // TODO
		),

		anonymous_function: $ => seq(
			"fun",
			optional(seq(sep1($._simple_user_type, "."), ".")), // TODO
			"(", ")",
			optional($.function_body)
		),

		_function_literal: $ => choice(
			$.lambda_literal,
			$.anonymous_function
		),

		object_literal: $ => seq(
			"object",
			// TODO: optional(seq(":", $.delegation_specifiers)),
			$.class_body
		),

		this_expression: $ => "this",

		super_expression: $ => seq(
			"super",
			// TODO optional(seq("<", $._type, ">")),
			// TODO optional(seq("@", $.simple_identifier))
		),

		if_expression: $ => seq(
			"if",
			"(", $._expression, ")",
			choice(
				$.control_structure_body,
				";",
				seq(
					optional($.control_structure_body),
					optional(";"),
					"else",
					choice($.control_structure_body, ";")
				)
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
			$._expression,
			")",
		),

		when_expression: $ => seq(
			"when",
			optional($.when_subject),
			"{",
			repeat($.when_entry),
			"}"
		),

		when_entry: $ => seq(
			choice(
				seq($.when_condition, repeat(seq(",", $.when_condition))),
				"else"
			),
			"->",
			$.control_structure_body,
			optional($._semi)
		),

		when_condition: $ => seq(
			$._expression,
			$.range_test,
			$.type_test
		),

		range_test: $ => seq($._in_operator, $._expression),

		type_test: $ => seq($._is_operator, $._expression),

		try_expression: $ => seq(
			"try",
			$._block,
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
			$._type,
			")",
			$._block,
		),

		finally_block: $ => seq("finally", $._block),

		jump_expression: $ => choice(
			prec.left(PREC.RETURN_OR_THROW, seq("throw", $._expression)),
			prec.left(PREC.RETURN_OR_THROW, seq(choice("return", $._return_at), optional($._expression))),
			"continue",
			$._continue_at,
			"break",
			$._break_at
		),

		callable_reference: $ => seq(
			optional($.simple_identifier), // TODO
			"::",
			choice($.simple_identifier, "class")
		),

		_assignment_and_operator: $ => choice("+=", "-=", "*=", "/=", "%="),
		
		_equality_operator: $ => choice("!=", "!==", "==", "==="),
		
		_comparison_operator: $ => choice("<", ">", "<=", ">="),
		
		_in_operator: $ => choice("in", "!in"),
		
		_is_operator: $ => choice("is", $._not_is),
		
		_additive_operator: $ => choice("+", "-"),
		
		_multiplicative_operator: $ => choice("*", "/", "%"),
		
		_as_operator: $ => choice("as", "as?"),
		
		_prefix_unary_operator: $ => choice("++", "--", "-", "+", "!"),
		
		_postfix_unary_operator: $ => choice("++", "--", "!!"),
		
		_member_access_operator: $ => choice(".", $._safe_nav, "::"),
		
		_safe_nav: $ => seq("?", "."),

		directly_assignable_expression: $ => choice(
			$.simple_identifier
			// TODO
		),

		// ==========
		// Modifiers
		// ==========
		
		modifiers: $ => choice($.annotation, repeat1($._modifier)),

		parameter_modifiers: $ => choice($.annotation, repeat1($.parameter_modifier)),

		_modifier: $ => choice(
			$.class_modifier,
			$.member_modifier,
			$.visibility_modifier,
			$.function_modifier,
			$.property_modifier,
			$.inheritance_modifier,
			$.parameter_modifier,
			$.platform_modifier
		),

		type_modifiers: $ => repeat1($._type_modifier),

		_type_modifier: $ => choice($.annotation, "suspend"),

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

		variance_modifier: $ => choice(
			"in",
			"out"
		),

		type_parameter_modifiers: $ => repeat1($._type_parameter_modifier),

		_type_parameter_modifier: $ => choice(
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

		platform_modifier: $ => choice(
			"expect",
			"actual"
		),
		
		// ==========
		// Annotations
		// ==========
		
		annotation: $ => seq(
			"@",
			$.simple_identifier
			// TODO
		),
		
		// ==========
		// Identifiers
		// ==========
		
		simple_identifier: $ => $._lexical_identifier, // TODO
		
		identifier: $ => sep1($.simple_identifier, "."),
		
		// ====================
		// Lexical grammar
		// ====================
		
		
		// ==========
		// General
		// ==========
		
		
		// ==========
		// Separators and operations
		// ==========
		
		
		// ==========
		// Keywords
		// ==========
		
		_return_at: $ => seq("return@", $._lexical_identifier),

		_continue_at: $ => seq("continue@", $._lexical_identifier),

		_break_at: $ => seq("break@", $._lexical_identifier),

		_this_at: $ => seq("this@", $._lexical_identifier),

		_super_at: $ => seq("super@", $._lexical_identifier),

		_not_is: $ => "!is",

		_not_in: $ => "!in",
		
		// ==========
		// Literals
		// ==========
		
		real_literal: $ => token(choice(
			seq(
				choice(
					seq(DEC_DIGITS, REAL_EXPONENT),
					seq(optional(DEC_DIGITS), ".", DEC_DIGITS, optional(REAL_EXPONENT))
				),
				optional(/[fF]/)
			),
			seq(DEC_DIGITS, /[fF]/)
		)),
		
		integer_literal: $ => token(seq(optional(/[1-9]/), DEC_DIGITS)),
		
		hex_literal: $ => token(seq("0", /[xX]/, HEX_DIGITS)),
		
		bin_literal: $ => token(seq("0", /[bB]/, BIN_DIGITS)),
		
		unsigned_literal: $ => seq(
			choice($.integer_literal, $.hex_literal, $.bin_literal),
			/[uU]/,
			optional("L")
		),
		
		long_literal: $ => seq(
			choice($.integer_literal, $.hex_literal, $.bin_literal),
			"L"
		),
		
		boolean_literal: $ => choice("true", "false"),
		
		character_literal: $ => seq(
			"'",
			choice($._escape_seq, /[^\n\r'\\]/),
			"'"
		),

		
		// ==========
		// Identifiers
		// ==========
		
		_lexical_identifier: $ => choice(
			/[a-zA-Z_][a-zA-Z_0-9]*/,
			/`[^\r\n`]+`/
		),

		_uni_character_literal: $ => seq(
			"\\",
			"u",
			/[0-9a-fA-F]{4}/
		),

		_escaped_identifier: $ => /\\[tbrn'"\\$]/,

		_escape_seq: $ => choice(
			$._uni_character_literal,
			$._escaped_identifier
		),

		// ==========
		// Strings
		// ==========
		
		_line_str_text: $ => /[^\\"$]+/,
		
		_line_str_escaped_char: $ => choice(
			$._escaped_identifier,
			$._uni_character_literal
		),
		
		_multi_line_str_text: $ => /[^"$]+/
	}
});

function sep1(rule, separator) {
	return seq(rule, repeat(seq(separator, rule)));
}
