/**
 *
 * Based in part on https://github.com/tree-sitter/tree-sitter-c
 * (MIT license, Copyright (c) 2014 Max Brunsfeld)
 */

const PREC = {
	PAREN_DECLARATOR: -10,
	ASSIGNMENT: -1,
	CONDITIONAL: -2,
	DEFAULT: 0,
	LOGICAL_OR: 1,
	LOGICAL_AND: 2,
	INCLUSIVE_OR: 3,
	EXCLUSIVE_OR: 4,
	BITWISE_AND: 5,
	EQUAL: 6,
	RELATIONAL: 7,
	SIZEOF: 8,
	SHIFT: 9,
	ADD: 10,
	MULTIPLY: 11,
	CAST: 12,
	UNARY: 13,
	CALL: 14,
	FIELD: 15,
	SUBSCRIPT: 16,
};

module.exports = grammar({
	name: 'device_tree',

	extras: ($) => [/\s|\\\r?\n/, $.comment],

	rules: {
		document: ($) => repeat($._top_level_item),

		_top_level_item: ($) =>
			choice(
				alias($.labeled_node_definition, $.labeled_definition),
				alias($.node_definition, $.definition),
				$.dtsi_include,
				$.preproc_include,
				$.preproc_def,
				$.preproc_function_def
			),

		dt_identifier: ($) => /[a-zA-Z/_#][0-9a-zA-Z/,._+?#-]*/,
		dt_node_identifier: ($) => /[a-zA-Z/_][0-9a-zA-Z/,._+?#-]*/,

		reference: ($) =>
			choice($._immediate_reference, $._bracketed_reference),

		_immediate_reference: ($) => seq('&', $.dt_identifier),

		_bracketed_reference: ($) => seq('&{', $.dt_identifier, '}'),

		labeled_definition: ($) =>
			seq(
				field('label', $.dt_identifier),
				':',
				field('definition', $.definition)
			),

		definition: ($) =>
			seq(
				field('name', $.dt_identifier),
				field('address', optional($.unit_address)),
				field('value', choice($.node, $.property)),
				';'
			),

		labeled_node_definition: ($) =>
			seq(
				field('label', alias($.dt_node_identifier, $.dt_identifier)),
				':',
				field('definition', $.node_definition)
			),

		node_definition: ($) =>
			seq(
				field('name', alias($.dt_node_identifier, $.dt_identifier)),
				field('address', optional($.unit_address)),
				field('value', $.node),
				';'
			),

		node: ($) => seq('{', repeat($._node_members), '}'),
		property: ($) => seq('=', $._property_value),

		node_name: ($) => /[a-zA-Z][0-9a-zA-Z,._+-]*/,
		unit_address: ($) => seq('@', /[0-9a-fA-F]/),

		_node_members: ($) =>
			choice(
				$.delete_property,
				$.delete_node,
				$.definition,
				$.labeled_definition
			),

		delete_node: ($) =>
			seq('/delete-node/', choice($.dt_identifier, $.reference)),

		delete_property: ($) =>
			seq('/delete-property/', choice($.dt_identifier, $.reference)),

		_property_value: ($) =>
			choice(
				$._integer_cell_list,
				$.string_literal,
				$.byte_string_literal
			),

		_integer_cell_list: ($) => commaSep1($.integer_cells),

		integer_cells: ($) => seq('<', repeat($._integer_cell_items), '>'),

		_integer_cell_items: ($) =>
			choice(
				$.integer_literal,
				$.reference,
				$.parenthesized_expression,
				$.identifier,
				$.call_expression
			),

		string_literal: ($) =>
			seq(
				'"',
				repeat(
					choice(
						token.immediate(prec(1, /[^\\"\n]+/)),
						$.escape_sequence
					)
				),
				'"'
			),

		escape_sequence: ($) =>
			token(
				prec(
					1,
					seq(
						'\\',
						choice(
							/[^xuU]/,
							/\d{2,3}/,
							/x[0-9a-fA-F]{2,}/,
							/u[0-9a-fA-F]{4}/,
							/U[0-9a-fA-F]{8}/
						)
					)
				)
			),

		system_lib_string: ($) =>
			token(seq('<', repeat(choice(/[^>\n]/, '\\>')), '>')),

		byte_string_literal: ($) => seq('[', repeat($._byte_string_item), ']'),

		_byte_string_item: ($) => /[0-9a-fA-F]+/,

		integer_literal: ($) => {
			const separator = "'";
			const hex = /[0-9a-fA-F]/;
			const decimal = /[0-9]/;
			const hexDigits = seq(
				repeat1(hex),
				repeat(seq(separator, repeat1(hex)))
			);
			const decimalDigits = seq(
				repeat1(decimal),
				repeat(seq(separator, repeat1(decimal)))
			);
			return token(
				choice(
					decimalDigits,
					seq('0b', decimalDigits),
					seq('0x', hexDigits)
				)
			);
		},

		identifier: ($) => /[a-zA-Z_]\w*/,

		_expression: ($) =>
			choice(
				$.conditional_expression,
				$.binary_expression,
				$.unary_expression,
				$.call_expression,
				$.identifier,
				$.integer_literal,
				$.parenthesized_expression
			),

		parenthesized_expression: ($) => seq('(', $._expression, ')'),

		call_expression: ($) =>
			prec(
				PREC.CALL,
				seq(
					field('function', $.identifier),
					field('arguments', $.argument_list)
				)
			),

		argument_list: ($) => seq('(', commaSep($._expression), ')'),

		conditional_expression: ($) =>
			prec.right(
				PREC.CONDITIONAL,
				seq(
					field('condition', $._expression),
					'?',
					field('consequence', $._expression),
					':',
					field('alternative', $._expression)
				)
			),

		unary_expression: ($) =>
			prec.left(
				PREC.UNARY,
				seq(
					field('operator', choice('!', '~', '-', '+')),
					field('argument', $._expression)
				)
			),

		binary_expression: ($) => {
			const table = [
				['+', PREC.ADD],
				['-', PREC.ADD],
				['*', PREC.MULTIPLY],
				['/', PREC.MULTIPLY],
				['%', PREC.MULTIPLY],
				['||', PREC.LOGICAL_OR],
				['&&', PREC.LOGICAL_AND],
				['|', PREC.INCLUSIVE_OR],
				['^', PREC.EXCLUSIVE_OR],
				['&', PREC.BITWISE_AND],
				['==', PREC.EQUAL],
				['!=', PREC.EQUAL],
				['>', PREC.RELATIONAL],
				['>=', PREC.RELATIONAL],
				['<=', PREC.RELATIONAL],
				['<', PREC.RELATIONAL],
				['<<', PREC.SHIFT],
				['>>', PREC.SHIFT],
			];

			return choice(
				...table.map(([operator, precedence]) => {
					return prec.left(
						precedence,
						seq(
							field('left', $._expression),
							field('operator', operator),
							field('right', $._expression)
						)
					);
				})
			);
		},

		dtsi_include: ($) => seq('/include', field('path', $.string_literal)),

		preproc_include: ($) =>
			seq(
				preprocessor('include'),
				field(
					'path',
					choice($.string_literal, $.system_lib_string, $.identifier)
				),
				'\n'
			),

		preproc_def: ($) =>
			seq(
				preprocessor('define'),
				field('name', $.identifier),
				field('value', optional($.preproc_arg)),
				'\n'
			),

		preproc_function_def: ($) =>
			seq(
				preprocessor('define'),
				field('name', $.identifier),
				field('parameters', $.preproc_params),
				field('value', optional($.preproc_arg)),
				'\n'
			),

		preproc_params: ($) =>
			seq(
				token.immediate('('),
				commaSep(choice($.identifier, '...')),
				')'
			),

		preproc_arg: ($) => token(prec(-1, repeat1(/.|\\\r?\n/))),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: ($) =>
			token(
				choice(
					seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
					seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
				)
			),
	},
});

function preprocessor(command) {
	return alias(new RegExp('#[ \t]*' + command), '#' + command);
}

function commaSep(rule) {
	return optional(commaSep1(rule));
}

function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)));
}
