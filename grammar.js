/**
 * Based in part on:
 *
 * https://github.com/tree-sitter/tree-sitter-c
 * MIT license, Copyright (c) 2014 Max Brunsfeld
 *
 * https://github.com/zephyrproject-rtos/python-devicetree/tree/main
 * BSD 3-Clause license, Copyright (c) 2019, Nordic Semiconductor
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
	name: 'devicetree',

	extras: ($) => [/\s|\\\r?\n/, $.comment],

	inline: ($) => [
		$.node_identifier,
		$.label_identifier,
		$.property_identifier,
		$.parenthesized_expression,
	],

	rules: {
		document: ($) => repeat($._top_level_item),

		_top_level_item: ($) =>
			choice(
				$.file_version,
				$.plugin,
				$.memory_reservation,
				$.omit_if_no_ref,
				$.labeled_item,
				$.node,
				$.dtsi_include,
				$.preproc_include,
				$.preproc_def,
				$.preproc_function_def
			),

		file_version: ($) => seq('/dts-v1/', ';'),
		plugin: ($) => seq('/plugin/', ';'),

		memory_reservation: ($) =>
			seq('/memreserve/', $.integer_literal, $.integer_literal, ';'),

		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: ($) =>
			token(
				choice(
					seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
					seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
				)
			),

		_label_name: ($) => /[a-zA-Z_][0-9a-zA-Z_]*/,
		_node_path: ($) => /\/[0-9a-zA-Z/,._+-]*/,
		_node_or_property: ($) => /[a-zA-Z][0-9a-zA-Z,._+-]*/,
		_property_with_hash: ($) => /[#0-9a-zA-Z,._+-]*#[#0-9a-zA-Z,._+-]*/,
		_property_starts_with_number: ($) => /[0-9][#0-9a-zA-Z,._+-]*/,

		unit_address: ($) => /[0-9a-fA-F,]+/,

		label_identifier: ($) => alias($._label_name, $.identifier),

		node_identifier: ($) =>
			alias(
				choice($._node_or_property, $._node_path, $._label_name),
				$.identifier
			),

		property_identifier: ($) =>
			alias(
				choice(
					$._node_or_property,
					$._property_with_hash,
					$._property_starts_with_number,
					$._label_name
				),
				$.identifier
			),

		reference: ($) => choice($._label_reference, $._node_reference),

		_label_reference: ($) => seq('&', field('label', $.label_identifier)),

		_node_reference: ($) =>
			seq(
				'&{',
				field('path', $.node_identifier),
				field('address', optional(seq('@', $.unit_address))),
				'}'
			),

		omit_if_no_ref: ($) =>
			seq(
				'/omit-if-no-ref/',
				choice($.labeled_item, $.node, seq($.reference, ';'))
			),

		labeled_item: ($) =>
			seq(
				field('label', $.label_identifier),
				':',
				field('item', choice($.labeled_item, $.node, $.property))
			),

		node: ($) =>
			seq(
				field('name', choice($.node_identifier, $.reference)),
				field('address', optional(seq('@', $.unit_address))),
				'{',
				repeat($._node_members),
				'}',
				';'
			),

		_bits: ($) => seq('/bits/', $.integer_literal),

		property: ($) =>
			seq(
				field('name', $.property_identifier),
				optional(
					seq(
						'=',
						field('bits', optional($._bits)),
						field('value', commaSep($._property_value))
					)
				),
				';'
			),

		_node_members: ($) =>
			choice(
				$.delete_property,
				$.delete_node,
				$.omit_if_no_ref,
				$.labeled_item,
				$.node,
				$.property
			),

		// TODO: is delete-node allowed at top level?
		delete_node: ($) =>
			seq(
				'/delete-node/',
				field('name', choice($.node_identifier, $.reference)),
				';'
			),

		delete_property: ($) =>
			seq('/delete-property/', field('name', $.property_identifier), ';'),

		incbin: ($) =>
			seq(
				'/incbin/',
				'(',
				field('filename', $.string_literal),
				optional(
					seq(
						',',
						field('offset', $._integer_cell_items),
						',',
						field('size', $._integer_cell_items)
					)
				),
				')'
			),

		// TODO: property values can be labeled.
		_property_value: ($) =>
			choice(
				$.integer_cells,
				$.string_literal,
				$.byte_string_literal,
				$.reference,
				$.incbin
			),

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
