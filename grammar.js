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
		program: $ => seq(
			optional($.shebang_line),
			// repeat($.file_annotation), TODO
			optional($.package_header),
			repeat($.import_header),
			choice(
				repeat($.top_level_object),
				repeat(seq($.statement, $.semi))
			)
		),
		
		shebang_line: $ => seq("#!", /[^\r\n]*/),
		
		package_header: $ => seq("package", $.identifier, optional($.semi)),
		
		import_header: $ => seq(
			"import",
			$.identifier,
			optional(choice(".", "*", $.import_alias)),
			optional($.semi)
		),

		import_alias: $ => seq("as", $.simple_identifier),

		top_level_object: $ => seq($.declaration, optional($.semis)),
		
		declaration: $ => choice(
			// TODO
		),
		
		// ==========
		// Classes
		// ==========
		
		// ==========
		// Class members
		// ==========
		
		
		// ==========
		// Enum classes
		// ==========
		
		
		// ==========
		// Types
		// ==========
		
		
		// ==========
		// Statements
		// ==========
		
		statements: $ => seq(
			$.statement,
			repeat(seq($.semis, $.statement)),
			optional($.semis),
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
			"while",
			"(",
			$.expression,
			")",
			choice(";", $.control_structure_body)
		),

		do_while_statement: $ => seq(
			"do",
			optional($.control_structure_body),
		// See also https://github.com/tree-sitter/tree-sitter/issues/160
		// generic EOF/newline token
		semi: $ => /[\r\n]+/,
		
		semis: $ => /[\r\n]+/,
		
		assignment: $ => choice(
			seq($.directly_assignable_expression, "=", $.expression),
			// TODO
		),
		$
		// ==========
		// Expressions
		// ==========
		
		expression: $ => choice(
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
		
		
		// ==========
		// Identifiers
		// ==========
		
		simple_identifier: $ => lexical_identifier, // TODO
		
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
		
		lexical_identifier: $ => choice(
			/[a-zA-Z_][a-zA-Z_0-9]+/,
			/`[^\r\n`]+`/
		)
		
		// ==========
		// Strings
		// ==========
		
		
	}
});
