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
		
		_statements: $ => seq(
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
			$.simple_identifier
			// TODO
		),

		control_structure_body: $ => $._block, // TODO

		_block: $ => seq("{", optional($._statements), "}"),

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
			seq($.directly_assignable_expression, "=", $._expression),
			// TODO
		),
		
		// ==========
		// Expressions
		// ==========
		
		_expression: $ => choice(
			$.simple_identifier
			// TODO
		),

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
		
		
		// ==========
		// Literals
		// ==========
		
		
		// ==========
		// Identifiers
		// ==========
		
		_lexical_identifier: $ => choice(
			/[a-zA-Z_][a-zA-Z_0-9]+/,
			/`[^\r\n`]+`/
		)
		
		// ==========
		// Strings
		// ==========
		
		
	}
});
