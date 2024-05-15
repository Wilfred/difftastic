/**
 * Based in part on:
 *
 * https://github.com/tree-sitter/tree-sitter-c
 * MIT license, Copyright (c) 2014 Max Brunsfeld
 *
 * https://github.com/zephyrproject-rtos/python-devicetree/tree/main
 * BSD 3-Clause license, Copyright (c) 2019, Nordic Semiconductor
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

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
				$.node,
				$.dtsi_include,
				$.preproc_include,
				$.preproc_def,
				$.preproc_function_def,
				$.preproc_if,
				$.preproc_ifdef,
				$.preproc_undef
			),

		_label: ($) => seq(field('label', $.label_identifier), ':'),

		file_version: ($) => seq('/dts-v1/', ';'),
		plugin: ($) => seq('/plugin/', ';'),

		memory_reservation: ($) =>
			seq(
				repeat($._label),
				'/memreserve/',
				field('address', $.integer_literal),
				field('length', $.integer_literal),
				';'
			),

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

		unit_address: ($) => /[0-9a-zA-Z,._+-]+/,

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
			seq('/omit-if-no-ref/', choice($.node, seq($.reference, ';'))),

		node: ($) =>
			seq(
				repeat($._label),
				choice(
					field('name', $.reference),
					seq(
						field('name', $.node_identifier),
						field('address', optional(seq('@', $.unit_address)))
					)
				),
				'{',
				repeat($._node_members),
				'}',
				';'
			),

		_bits: ($) => seq('/bits/', $.integer_literal),

		property: ($) =>
			seq(
				repeat($._label),
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
				$.node,
				$.property,
				$.preproc_include,
				$.preproc_def,
				$.preproc_function_def,
				alias($.preproc_if_in_node, $.preproc_if),
				alias($.preproc_ifdef_in_node, $.preproc_ifdef),
				$.preproc_undef
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

		// TODO: labels can appear before or after any component of a property value,
		// or between cells of a cell array, or between bytes of a bytestring.
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
			/** @type {[string, number][]} */
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

		dtsi_include: ($) => seq('/include/', field('path', $.string_literal)),

		preproc_include: ($) =>
			seq(
				preprocessor('include'),
				field(
					'path',
					choice($.string_literal, $.system_lib_string, $.identifier)
				),
				token.immediate(/\r?\n/)
			),

		preproc_def: ($) =>
			seq(
				preprocessor('define'),
				field('name', $.identifier),
				field('value', optional($.preproc_arg)),
				token.immediate(/\r?\n/)
			),

		preproc_function_def: ($) =>
			seq(
				preprocessor('define'),
				field('name', $.identifier),
				field('parameters', $.preproc_params),
				field('value', optional($.preproc_arg)),
				token.immediate(/\r?\n/)
			),

		preproc_params: ($) =>
			seq(
				token.immediate('('),
				commaSep(choice($.identifier, '...')),
				')'
			),

		preproc_undef: ($) =>
			seq(
				preprocessor('undef'),
				field('name', $.identifier),
				token.immediate(/\r?\n/)
			),

		preproc_arg: ($) => token(prec(-1, repeat1(/.|\\\r?\n/))),

		...preprocIf('', ($) => $._top_level_item),
		...preprocIf('_in_node', ($) => $._node_members),

		_preproc_expression: ($) =>
			choice(
				$.identifier,
				alias($.preproc_call_expression, $.call_expression),
				$.integer_literal,
				$.preproc_defined,
				alias($.preproc_unary_expression, $.unary_expression),
				alias($.preproc_binary_expression, $.binary_expression),
				alias(
					$.preproc_parenthesized_expression,
					$.parenthesized_expression
				)
			),

		preproc_parenthesized_expression: ($) =>
			seq('(', $._preproc_expression, ')'),

		preproc_defined: ($) =>
			choice(
				prec(PREC.CALL, seq('defined', '(', $.identifier, ')')),
				seq('defined', $.identifier)
			),

		preproc_unary_expression: ($) =>
			prec.left(
				PREC.UNARY,
				seq(
					field('operator', choice('!', '~', '-', '+')),
					field('argument', $._preproc_expression)
				)
			),

		preproc_call_expression: ($) =>
			prec(
				PREC.CALL,
				seq(
					field('function', $.identifier),
					field(
						'arguments',
						alias($.preproc_argument_list, $.argument_list)
					)
				)
			),

		preproc_argument_list: ($) =>
			seq('(', commaSep($._preproc_expression), ')'),

		preproc_binary_expression: ($) => {
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
							field('left', $._preproc_expression),
							// @ts-ignore
							field('operator', operator),
							field('right', $._preproc_expression)
						)
					);
				})
			);
		},
	},
});

/**
 * @param {string} command
 */
function preprocessor(command) {
	return alias(
		token(prec(2, new RegExp('#[ \t]*' + command))),
		'#' + command
	);
}

/**
 * @param {RuleOrLiteral} rule
 */
function commaSep(rule) {
	return optional(commaSep1(rule));
}

/**
 * @param {RuleOrLiteral} rule
 */
function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)));
}

/**
 * @param {string} suffix
 * @param {RuleBuilder<string>} content
 * @returns {RuleBuilders<string, string>}
 */
function preprocIf(suffix, content) {
	/**
	 * @param {GrammarSymbols<string>} $
	 * @returns {ChoiceRule}
	 */
	function elseBlock($) {
		return choice(
			suffix
				? alias($['preproc_else' + suffix], $.preproc_else)
				: $.preproc_else,
			suffix
				? alias($['preproc_elif' + suffix], $.preproc_elif)
				: $.preproc_elif
		);
	}

	return {
		['preproc_if' + suffix]: ($) =>
			seq(
				preprocessor('if'),
				field('condition', $._preproc_expression),
				'\n',
				repeat(content($)),
				field('alternative', optional(elseBlock($))),
				preprocessor('endif')
			),

		['preproc_ifdef' + suffix]: ($) =>
			seq(
				choice(preprocessor('ifdef'), preprocessor('ifndef')),
				field('name', $.identifier),
				repeat(content($)),
				field(
					'alternative',
					optional(choice(elseBlock($), $.preproc_elifdef))
				),
				preprocessor('endif')
			),

		['preproc_else' + suffix]: ($) =>
			seq(preprocessor('else'), repeat(content($))),

		['preproc_elif' + suffix]: ($) =>
			seq(
				preprocessor('elif'),
				field('condition', $._preproc_expression),
				'\n',
				repeat(content($)),
				field('alternative', optional(elseBlock($)))
			),

		['preproc_elifdef' + suffix]: ($) =>
			seq(
				choice(preprocessor('elifdef'), preprocessor('elifndef')),
				field('name', $.identifier),
				repeat(content($)),
				field('alternative', optional(elseBlock($)))
			),
	};
}
