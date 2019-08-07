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
	ASSIGNMENT: 1
}

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
		
		package_header: $ => seq("package", $.identifier, optional($._semi)),
		
		import_header: $ => seq(
			"import",
			$.identifier,
			optional(choice(seq(".*"), $.import_alias)), 
			optional($._semi)
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
		
		class_declaration: $ => seq( // TODO
			choice("class", "interface"),
			$.simple_identifier,
			optional($.class_body)
		),

		class_body: $ => seq("{", optional($.class_member_declarations), "}"),

		// ==========
		// Class members
		// ==========
		
		class_member_declarations: $ => repeat1(seq($._declaration, optional($._semis))), // TODO

		variable_declaration: $ => seq(
			// repeat($.annotation), TODO
			$.simple_identifier,
			optional(seq(":", $._type))
		),

		function_declaration: $ => seq( // TODO
			"fun",
			$.simple_identifier,
			"(", ")",
			optional($.function_body)
		),

		function_body: $ => choice($._block, seq("=", $._expression)),

		object_declaration: $ => seq( // TODO
			"object",
			$.simple_identifier,
			optional($.class_body)
		),
		
		// ==========
		// Enum classes
		// ==========
		
		
		// ==========
		// Types
		// ==========
		
		_type: $ => $.simple_identifier, // TODO
		
		// ==========
		// Statements
		// ==========
		
		statements: $ => seq(
			$._statement,
			repeat(seq($._semis, $._statement)),
			optional($._semis),
		),

		_statement: $ => seq(
			repeat(choice($.label, $.annotation)),
			choice(
				$._declaration,
				$.assignment,
				$._loop_statement,
				$._expression
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
			$.simple_identifier,
			$.unary_expression,
			$.binary_expression
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

		line_string_literal: $ => seq('"', repeat(choice($.line_string_content, $.line_string_expression)), '"'),

		multi_line_string_literal: $ => seq(
			'"""',
			repeat(choice(
				$.multi_line_string_content,
				$.multi_line_string_expression
			)),
			'"""'
		),

		line_string_content: $ => choice(
			$._line_str_text,
			$._line_str_escaped_char,
			$._line_str_ref
		),

		line_string_expression: $ => seq("${", $._expression, "}"),

		multi_line_string_content: $ => choice($._multi_line_str_text, '"', $._multi_line_str_ref),

		multi_line_string_expression: $ => seq("${", $._expression, "}"),

		lambda_literal: $ => seq(
			"{",
			optional(seq(optional($.lambda_parameters), "->")),
			optional($.statements),
			"}"
		),

		lambda_parameters: $ => seq(
			$._lambda_parameter,
			repeat(seq(",", $._lambda_parameter))
		),

		_lambda_parameter: $ => choice(
			$.variable_declaration, // TODO
		),

		anonymous_function: $ => seq(
			"fun",
			optional(seq($._type, ".")),
			"(", ")", // TODO
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

		super_expression: $ => seq("super", optional(seq("<", $._type, ">")), optional(seq("@", $.simple_identifier))),

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
			seq("throw", $._expression),
			seq(choice("return", $._return_at), optional($._expression)),
			"continue",
			$._continue_at,
			"break",
			$._break_at
		),

		callable_reference: $ => seq(
			optional($._type),
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
		
		identifier: $ => seq(
			$.simple_identifier,
			repeat(seq(".", $.simple_identifier))
		),
		
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
		
		_dec_digit: $ => /[0-9]/,
		
		_dec_digit_no_zero: $ => /[1-9]/,
		
		_dec_digit_or_separator: $ => choice($._dec_digit, "_"),
		
		_dec_digits: $ => choice(
			seq($._dec_digit, repeat($._dec_digit_or_separator), $._dec_digit),
			$._dec_digit
		),
		
		_double_exponent: $ => seq(/[eE]/, optional(/[+-]/), $._dec_digits),
		
		real_literal: $ => choice(
			$._float_literal,
			$._double_literal
		),
		
		_float_literal: $ => choice(
			seq($._double_literal, /[fF]/),
			seq($._dec_digits, /[fF]/)
		),
		
		_double_literal: $ => choice(
			seq(optional($._dec_digits), ".", $._dec_digits, optional($._double_exponent)),
			seq($._dec_digits, $._double_exponent)
		),
		
		integer_literal: $ => choice(
			seq($._dec_digit_no_zero, repeat($._dec_digit_or_separator), $._dec_digit),
			$._dec_digit
		),
		
		_hex_digit: $ => /[0-9a-fA-F]/,
		
		_hex_digit_or_separator: $ => choice($._hex_digit, "_"),
		
		hex_literal: $ => choice(
			seq("0", /[xX]/, $._hex_digit, repeat($._hex_digit_or_separator), $._hex_digit),
			seq("0", /[xX]/, $._hex_digit)
		),
		
		_bin_digit: $ => /[01]/,
		
		_bin_digit_or_separator: $ => choice($._bin_digit, "_"),
		
		bin_literal: $ => choice(
			seq("0", /[bB]/, $._bin_digit, repeat($._bin_digit_or_separator), $._bin_digit),
			seq("0", /[bB]/, $._bin_digit)
		),
		
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
			/[a-zA-Z_][a-zA-Z_0-9]+/,
			/`[^\r\n`]+`/
		),

		_uni_character_literal: $ => seq(
			"\\",
			"u",
			$._hex_digit,
			$._hex_digit,
			$._hex_digit,
			$._hex_digit
		),

		_field_identifier: $ => $.simple_identifier, // TODO

		_escaped_identifier: $ => /\\[tbrn'"\\$]/,

		_escape_seq: $ => choice(
			$._uni_character_literal,
			$._escaped_identifier
		),

		// ==========
		// Strings
		// ==========
		
		_line_str_ref: $ => $._field_identifier,
		
		_line_str_text: $ => choice(/[^\\"$]+/, "$"),
		
		_line_str_escaped_char: $ => choice(
			$._escaped_identifier,
			$._uni_character_literal
		),
		
		_multi_line_str_ref: $ => $._field_identifier,
		
		_multi_line_str_text: $ => choice(/[^"$]+/, "$")
	}
});
