#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 686
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 7
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_SEMI_SEMI = 1,
  anon_sym_val = 2,
  anon_sym_COLON = 3,
  anon_sym_module = 4,
  anon_sym_type = 5,
  anon_sym_EQ = 6,
  anon_sym_open = 7,
  anon_sym_include = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_and = 11,
  anon_sym_let = 12,
  anon_sym_rec = 13,
  anon_sym_LBRACK = 14,
  anon_sym_AT_AT = 15,
  anon_sym_RBRACK = 16,
  anon_sym_TILDE = 17,
  anon_sym_QMARK = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_LBRACE = 22,
  anon_sym_SEMI = 23,
  anon_sym_RBRACE = 24,
  anon_sym_mutable = 25,
  anon_sym_constraint = 26,
  anon_sym_sig = 27,
  anon_sym_end = 28,
  anon_sym_functor = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_struct = 31,
  anon_sym_DOT = 32,
  anon_sym_in = 33,
  anon_sym_lsl = 34,
  anon_sym_lsr = 35,
  anon_sym_asr = 36,
  anon_sym_mod = 37,
  anon_sym_land = 38,
  anon_sym_lor = 39,
  anon_sym_lxor = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_AMP = 42,
  anon_sym_AMP_AMP = 43,
  anon_sym_COMMA = 44,
  sym__shift_operator = 45,
  sym__hash_operator = 46,
  sym__mult_operator = 47,
  sym__add_operator = 48,
  sym__concat_operator = 49,
  sym__rel_operator = 50,
  sym_identifier = 51,
  sym_number = 52,
  sym_string = 53,
  sym_comment = 54,
  sym_compilation_unit = 55,
  sym_value_specification = 56,
  sym_module_specification = 57,
  sym_module_type_specification = 58,
  sym_open_directive = 59,
  sym_include_directive = 60,
  sym_module_parameter = 61,
  sym_module_definition = 62,
  sym_type_definition = 63,
  sym_value_definition = 64,
  sym_attribute = 65,
  sym_let_binding = 66,
  sym_labeled_parameter = 67,
  sym_shorthand_labeled_parameter = 68,
  sym_type_constructor_definition = 69,
  sym_type_parameters = 70,
  sym_type_equation = 71,
  sym_record_declaration = 72,
  sym_field_declaration = 73,
  sym_type_constraint = 74,
  sym__module_type = 75,
  sym_signature = 76,
  sym_functor_module_type = 77,
  sym_shorthand_functor_module_type = 78,
  sym__module = 79,
  sym_functor_module = 80,
  sym_functor_application_module = 81,
  sym_struct_module = 82,
  sym__type = 83,
  sym_parenthesized_type = 84,
  sym_function_type = 85,
  sym_type_variable = 86,
  sym_constructed_type = 87,
  sym_qualified_type_identifier = 88,
  sym__expression = 89,
  sym_qualified_identifier = 90,
  sym_let_expression = 91,
  sym_call_expression = 92,
  sym_infix_expression = 93,
  sym_parenthesized_expression = 94,
  sym__pattern = 95,
  sym_record_pattern = 96,
  sym_type_pattern = 97,
  sym_tuple_pattern = 98,
  sym_parenthesized_pattern = 99,
  aux_sym_compilation_unit_repeat1 = 100,
  aux_sym_module_specification_repeat1 = 101,
  aux_sym_type_definition_repeat1 = 102,
  aux_sym_value_definition_repeat1 = 103,
  aux_sym_let_binding_repeat1 = 104,
  aux_sym_type_constructor_definition_repeat1 = 105,
  aux_sym_type_parameters_repeat1 = 106,
  aux_sym_record_declaration_repeat1 = 107,
  aux_sym_signature_repeat1 = 108,
  aux_sym_struct_module_repeat1 = 109,
  aux_sym_call_expression_repeat1 = 110,
  aux_sym_record_pattern_repeat1 = 111,
  aux_sym_tuple_pattern_repeat1 = 112,
  anon_alias_sym_POUND_DOT_DOT_DOT = 113,
  anon_alias_sym_STAR_STAR_DOT_DOT_DOT = 114,
  anon_alias_sym_STAR_DOT_DOT_DOT = 115,
  anon_alias_sym_PLUS_DOT_DOT_DOT = 116,
  anon_alias_sym_EQ_DOT_DOT_DOT = 117,
  anon_alias_sym_AT_DOT_DOT_DOT = 118,
  alias_sym_type_identifier = 119,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_val] = "val",
  [anon_sym_COLON] = ":",
  [anon_sym_module] = "module",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_open] = "open",
  [anon_sym_include] = "include",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_and] = "and",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_LBRACK] = "[",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_RBRACK] = "]",
  [anon_sym_TILDE] = "~",
  [anon_sym_QMARK] = "?",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACE] = "}",
  [anon_sym_mutable] = "mutable",
  [anon_sym_constraint] = "constraint",
  [anon_sym_sig] = "sig",
  [anon_sym_end] = "end",
  [anon_sym_functor] = "functor",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_struct] = "struct",
  [anon_sym_DOT] = ".",
  [anon_sym_in] = "in",
  [anon_sym_lsl] = "lsl",
  [anon_sym_lsr] = "lsr",
  [anon_sym_asr] = "asr",
  [anon_sym_mod] = "mod",
  [anon_sym_land] = "land",
  [anon_sym_lor] = "lor",
  [anon_sym_lxor] = "lxor",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_COMMA] = ",",
  [sym__shift_operator] = "_shift_operator",
  [sym__hash_operator] = "_hash_operator",
  [sym__mult_operator] = "_mult_operator",
  [sym__add_operator] = "_add_operator",
  [sym__concat_operator] = "_concat_operator",
  [sym__rel_operator] = "_rel_operator",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_compilation_unit] = "compilation_unit",
  [sym_value_specification] = "value_specification",
  [sym_module_specification] = "module_specification",
  [sym_module_type_specification] = "module_type_specification",
  [sym_open_directive] = "open_directive",
  [sym_include_directive] = "include_directive",
  [sym_module_parameter] = "module_parameter",
  [sym_module_definition] = "module_definition",
  [sym_type_definition] = "type_definition",
  [sym_value_definition] = "value_definition",
  [sym_attribute] = "attribute",
  [sym_let_binding] = "let_binding",
  [sym_labeled_parameter] = "labeled_parameter",
  [sym_shorthand_labeled_parameter] = "shorthand_labeled_parameter",
  [sym_type_constructor_definition] = "type_constructor_definition",
  [sym_type_parameters] = "type_parameters",
  [sym_type_equation] = "type_equation",
  [sym_record_declaration] = "record_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym_type_constraint] = "type_constraint",
  [sym__module_type] = "_module_type",
  [sym_signature] = "signature",
  [sym_functor_module_type] = "functor_module_type",
  [sym_shorthand_functor_module_type] = "shorthand_functor_module_type",
  [sym__module] = "_module",
  [sym_functor_module] = "functor_module",
  [sym_functor_application_module] = "functor_application_module",
  [sym_struct_module] = "struct_module",
  [sym__type] = "_type",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_function_type] = "function_type",
  [sym_type_variable] = "type_variable",
  [sym_constructed_type] = "constructed_type",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym__expression] = "_expression",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_let_expression] = "let_expression",
  [sym_call_expression] = "call_expression",
  [sym_infix_expression] = "infix_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__pattern] = "_pattern",
  [sym_record_pattern] = "record_pattern",
  [sym_type_pattern] = "type_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_module_specification_repeat1] = "module_specification_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
  [aux_sym_value_definition_repeat1] = "value_definition_repeat1",
  [aux_sym_let_binding_repeat1] = "let_binding_repeat1",
  [aux_sym_type_constructor_definition_repeat1] = "type_constructor_definition_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_record_declaration_repeat1] = "record_declaration_repeat1",
  [aux_sym_signature_repeat1] = "signature_repeat1",
  [aux_sym_struct_module_repeat1] = "struct_module_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [aux_sym_record_pattern_repeat1] = "record_pattern_repeat1",
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [anon_alias_sym_POUND_DOT_DOT_DOT] = "#...",
  [anon_alias_sym_STAR_STAR_DOT_DOT_DOT] = "**...",
  [anon_alias_sym_STAR_DOT_DOT_DOT] = "*...",
  [anon_alias_sym_PLUS_DOT_DOT_DOT] = "+...",
  [anon_alias_sym_EQ_DOT_DOT_DOT] = "=...",
  [anon_alias_sym_AT_DOT_DOT_DOT] = "@...",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_land] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__shift_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__mult_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__add_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__concat_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__rel_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_value_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_module_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_module_type_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_open_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_module_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_labeled_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_record_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__module_type] = {
    .visible = false,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_module_type] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_functor_module_type] = {
    .visible = true,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym_functor_module] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_application_module] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_module] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constructed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_record_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_type_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_constructor_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_POUND_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_STAR_STAR_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_STAR_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_PLUS_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_EQ_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_AT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[10][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [2] = {
    [2] = alias_sym_type_identifier,
  },
  [3] = {
    [1] = alias_sym_type_identifier,
  },
  [4] = {
    [1] = anon_alias_sym_STAR_STAR_DOT_DOT_DOT,
  },
  [5] = {
    [1] = anon_alias_sym_POUND_DOT_DOT_DOT,
  },
  [6] = {
    [1] = anon_alias_sym_STAR_DOT_DOT_DOT,
  },
  [7] = {
    [1] = anon_alias_sym_PLUS_DOT_DOT_DOT,
  },
  [8] = {
    [1] = anon_alias_sym_AT_DOT_DOT_DOT,
  },
  [9] = {
    [1] = anon_alias_sym_EQ_DOT_DOT_DOT,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(27);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(50);
      if (lookahead == 'i')
        ADVANCE(57);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == 's')
        ADVANCE(97);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead == '~')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 6:
      if (lookahead == '\n')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '!')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '^')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(8);
      if (lookahead == '~')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__hash_operator);
      if (lookahead == '!')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '^')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(8);
      if (lookahead == '~')
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__rel_operator);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '^')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__mult_operator);
      if (lookahead == '!')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(10);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '^')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(10);
      if (lookahead == '~')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '^')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(9);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(9);
      if (lookahead == '^')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(9);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ')')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__mult_operator);
      if (lookahead == '!')
        ADVANCE(10);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(10);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == '^')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(10);
      if (lookahead == '~')
        ADVANCE(10);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__shift_operator);
      if (lookahead == '!')
        ADVANCE(20);
      if (lookahead == '$')
        ADVANCE(20);
      if (lookahead == '%')
        ADVANCE(20);
      if (lookahead == '&')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(20);
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '~')
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__add_operator);
      if (lookahead == '!')
        ADVANCE(21);
      if (lookahead == '$')
        ADVANCE(21);
      if (lookahead == '%')
        ADVANCE(21);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__concat_operator);
      if (lookahead == '!')
        ADVANCE(28);
      if (lookahead == '$')
        ADVANCE(28);
      if (lookahead == '%')
        ADVANCE(28);
      if (lookahead == '&')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(28);
      if (lookahead == '+')
        ADVANCE(28);
      if (lookahead == '-')
        ADVANCE(28);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(28);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(28);
      if (lookahead == '?')
        ADVANCE(28);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(32);
      if (lookahead == 's')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_asr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_functor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(68);
      if (lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 's')
        ADVANCE(72);
      if (lookahead == 'x')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_land);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_lor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_lsl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_lsr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_lxor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(79);
      if (lookahead == 'u')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_open);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_rec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 't')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_sig);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_val);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '+')
        ADVANCE(117);
      if (lookahead == ',')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(118);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == '*')
        ADVANCE(15);
      END_STATE();
    case 124:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(133);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'i')
        ADVANCE(146);
      if (lookahead == 'l')
        ADVANCE(153);
      if (lookahead == 'm')
        ADVANCE(156);
      if (lookahead == 'o')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      END_STATE();
    case 126:
      if (lookahead == '>')
        ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == ';')
        ADVANCE(26);
      END_STATE();
    case 128:
      if (lookahead == '@')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 130:
      if (lookahead == 'n')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'd')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 133:
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'n')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 's')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'r')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'i')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'n')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 143:
      if (lookahead == 'n')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'd')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 146:
      if (lookahead == 'n')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'c')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'l')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'u')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'd')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 156:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'd')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 162:
      if (lookahead == 'p')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'n')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 166:
      if (lookahead == 'y')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'p')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 170:
      if (lookahead == 'a')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 173:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '?')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead == '~')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 174:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(22);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '?')
        ADVANCE(27);
      if (lookahead == '{')
        ADVANCE(112);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead == '~')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 175:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == 'f')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 177:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == 'f')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 181:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'l')
        ADVANCE(180);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 187:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(120);
      if (lookahead == 'm')
        ADVANCE(188);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 189:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'l')
        ADVANCE(180);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 191:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'm')
        ADVANCE(192);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 193:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == ')')
        ADVANCE(18);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(194);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'm')
        ADVANCE(195);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 198:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'i')
        ADVANCE(199);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'm')
        ADVANCE(195);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 201:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'l')
        ADVANCE(207);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      END_STATE();
    case 202:
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_asr);
      END_STATE();
    case 205:
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 207:
      if (lookahead == 'a')
        ADVANCE(208);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(211);
      if (lookahead == 's')
        ADVANCE(213);
      if (lookahead == 'x')
        ADVANCE(216);
      END_STATE();
    case 208:
      if (lookahead == 'n')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'd')
        ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 211:
      if (lookahead == 'r')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 213:
      if (lookahead == 'l')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_lsl);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_lsr);
      END_STATE();
    case 216:
      if (lookahead == 'o')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'r')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 219:
      if (lookahead == 'o')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'd')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 222:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 223:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == 'v')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 224:
      if (lookahead == '(')
        ADVANCE(123);
      if (lookahead == '-')
        ADVANCE(126);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '=')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead == 'c')
        ADVANCE(37);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'l')
        ADVANCE(180);
      if (lookahead == 'm')
        ADVANCE(184);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 225:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(7);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(14);
      if (lookahead == '*')
        ADVANCE(19);
      if (lookahead == '+')
        ADVANCE(21);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(127);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(28);
      if (lookahead == '[')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(28);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'm')
        ADVANCE(192);
      if (lookahead == 't')
        ADVANCE(105);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 116},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 116},
  [5] = {.lex_state = 116},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 125},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 116},
  [13] = {.lex_state = 116},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 116},
  [16] = {.lex_state = 116},
  [17] = {.lex_state = 125},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 116},
  [20] = {.lex_state = 116},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 173},
  [24] = {.lex_state = 173},
  [25] = {.lex_state = 173},
  [26] = {.lex_state = 173},
  [27] = {.lex_state = 174},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 116},
  [30] = {.lex_state = 116},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 116},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 175},
  [36] = {.lex_state = 177},
  [37] = {.lex_state = 116},
  [38] = {.lex_state = 116},
  [39] = {.lex_state = 116},
  [40] = {.lex_state = 116},
  [41] = {.lex_state = 116},
  [42] = {.lex_state = 116},
  [43] = {.lex_state = 116},
  [44] = {.lex_state = 125},
  [45] = {.lex_state = 125},
  [46] = {.lex_state = 125},
  [47] = {.lex_state = 116},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 125},
  [50] = {.lex_state = 116},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 116},
  [57] = {.lex_state = 173},
  [58] = {.lex_state = 173},
  [59] = {.lex_state = 173},
  [60] = {.lex_state = 173},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 179},
  [63] = {.lex_state = 173},
  [64] = {.lex_state = 116},
  [65] = {.lex_state = 116},
  [66] = {.lex_state = 116},
  [67] = {.lex_state = 116},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 175},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 125},
  [76] = {.lex_state = 125},
  [77] = {.lex_state = 125},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 116},
  [84] = {.lex_state = 175},
  [85] = {.lex_state = 116},
  [86] = {.lex_state = 116},
  [87] = {.lex_state = 116},
  [88] = {.lex_state = 116},
  [89] = {.lex_state = 187},
  [90] = {.lex_state = 189},
  [91] = {.lex_state = 125},
  [92] = {.lex_state = 189},
  [93] = {.lex_state = 189},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 116},
  [96] = {.lex_state = 116},
  [97] = {.lex_state = 125},
  [98] = {.lex_state = 125},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 116},
  [102] = {.lex_state = 125},
  [103] = {.lex_state = 125},
  [104] = {.lex_state = 191},
  [105] = {.lex_state = 116},
  [106] = {.lex_state = 174},
  [107] = {.lex_state = 173},
  [108] = {.lex_state = 116},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 173},
  [111] = {.lex_state = 174},
  [112] = {.lex_state = 173},
  [113] = {.lex_state = 116},
  [114] = {.lex_state = 116},
  [115] = {.lex_state = 173},
  [116] = {.lex_state = 173},
  [117] = {.lex_state = 173},
  [118] = {.lex_state = 179},
  [119] = {.lex_state = 173},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 179},
  [123] = {.lex_state = 173},
  [124] = {.lex_state = 191},
  [125] = {.lex_state = 191},
  [126] = {.lex_state = 191},
  [127] = {.lex_state = 191},
  [128] = {.lex_state = 116},
  [129] = {.lex_state = 116},
  [130] = {.lex_state = 116},
  [131] = {.lex_state = 116},
  [132] = {.lex_state = 116},
  [133] = {.lex_state = 116},
  [134] = {.lex_state = 116},
  [135] = {.lex_state = 116},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 116},
  [138] = {.lex_state = 181},
  [139] = {.lex_state = 116},
  [140] = {.lex_state = 116},
  [141] = {.lex_state = 181},
  [142] = {.lex_state = 181},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 125},
  [145] = {.lex_state = 116},
  [146] = {.lex_state = 122},
  [147] = {.lex_state = 116},
  [148] = {.lex_state = 116},
  [149] = {.lex_state = 116},
  [150] = {.lex_state = 125},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 116},
  [154] = {.lex_state = 177},
  [155] = {.lex_state = 175},
  [156] = {.lex_state = 116},
  [157] = {.lex_state = 116},
  [158] = {.lex_state = 116},
  [159] = {.lex_state = 124},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 177},
  [164] = {.lex_state = 175},
  [165] = {.lex_state = 125},
  [166] = {.lex_state = 116},
  [167] = {.lex_state = 189},
  [168] = {.lex_state = 116},
  [169] = {.lex_state = 125},
  [170] = {.lex_state = 116},
  [171] = {.lex_state = 116},
  [172] = {.lex_state = 116},
  [173] = {.lex_state = 116},
  [174] = {.lex_state = 125},
  [175] = {.lex_state = 116},
  [176] = {.lex_state = 189},
  [177] = {.lex_state = 189},
  [178] = {.lex_state = 116},
  [179] = {.lex_state = 125},
  [180] = {.lex_state = 125},
  [181] = {.lex_state = 116},
  [182] = {.lex_state = 125},
  [183] = {.lex_state = 116},
  [184] = {.lex_state = 116},
  [185] = {.lex_state = 116},
  [186] = {.lex_state = 116},
  [187] = {.lex_state = 116},
  [188] = {.lex_state = 174},
  [189] = {.lex_state = 116},
  [190] = {.lex_state = 116},
  [191] = {.lex_state = 173},
  [192] = {.lex_state = 173},
  [193] = {.lex_state = 173},
  [194] = {.lex_state = 191},
  [195] = {.lex_state = 179},
  [196] = {.lex_state = 173},
  [197] = {.lex_state = 193},
  [198] = {.lex_state = 191},
  [199] = {.lex_state = 193},
  [200] = {.lex_state = 173},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 116},
  [203] = {.lex_state = 173},
  [204] = {.lex_state = 191},
  [205] = {.lex_state = 191},
  [206] = {.lex_state = 191},
  [207] = {.lex_state = 191},
  [208] = {.lex_state = 179},
  [209] = {.lex_state = 179},
  [210] = {.lex_state = 179},
  [211] = {.lex_state = 179},
  [212] = {.lex_state = 179},
  [213] = {.lex_state = 179},
  [214] = {.lex_state = 179},
  [215] = {.lex_state = 179},
  [216] = {.lex_state = 179},
  [217] = {.lex_state = 116},
  [218] = {.lex_state = 116},
  [219] = {.lex_state = 116},
  [220] = {.lex_state = 116},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 116},
  [223] = {.lex_state = 116},
  [224] = {.lex_state = 116},
  [225] = {.lex_state = 181},
  [226] = {.lex_state = 116},
  [227] = {.lex_state = 181},
  [228] = {.lex_state = 181},
  [229] = {.lex_state = 116},
  [230] = {.lex_state = 175},
  [231] = {.lex_state = 116},
  [232] = {.lex_state = 116},
  [233] = {.lex_state = 116},
  [234] = {.lex_state = 125},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 116},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 125},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 175},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 125},
  [245] = {.lex_state = 177},
  [246] = {.lex_state = 116},
  [247] = {.lex_state = 125},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 116},
  [250] = {.lex_state = 173},
  [251] = {.lex_state = 173},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 116},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 116},
  [261] = {.lex_state = 189},
  [262] = {.lex_state = 125},
  [263] = {.lex_state = 116},
  [264] = {.lex_state = 116},
  [265] = {.lex_state = 187},
  [266] = {.lex_state = 116},
  [267] = {.lex_state = 189},
  [268] = {.lex_state = 189},
  [269] = {.lex_state = 189},
  [270] = {.lex_state = 125},
  [271] = {.lex_state = 125},
  [272] = {.lex_state = 125},
  [273] = {.lex_state = 174},
  [274] = {.lex_state = 173},
  [275] = {.lex_state = 191},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 173},
  [278] = {.lex_state = 116},
  [279] = {.lex_state = 193},
  [280] = {.lex_state = 193},
  [281] = {.lex_state = 193},
  [282] = {.lex_state = 193},
  [283] = {.lex_state = 193},
  [284] = {.lex_state = 191},
  [285] = {.lex_state = 179},
  [286] = {.lex_state = 179},
  [287] = {.lex_state = 179},
  [288] = {.lex_state = 179},
  [289] = {.lex_state = 179},
  [290] = {.lex_state = 179},
  [291] = {.lex_state = 179},
  [292] = {.lex_state = 179},
  [293] = {.lex_state = 179},
  [294] = {.lex_state = 173},
  [295] = {.lex_state = 173},
  [296] = {.lex_state = 179},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 179},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 191},
  [301] = {.lex_state = 179},
  [302] = {.lex_state = 179},
  [303] = {.lex_state = 179},
  [304] = {.lex_state = 179},
  [305] = {.lex_state = 179},
  [306] = {.lex_state = 179},
  [307] = {.lex_state = 179},
  [308] = {.lex_state = 179},
  [309] = {.lex_state = 179},
  [310] = {.lex_state = 191},
  [311] = {.lex_state = 191},
  [312] = {.lex_state = 191},
  [313] = {.lex_state = 191},
  [314] = {.lex_state = 191},
  [315] = {.lex_state = 191},
  [316] = {.lex_state = 191},
  [317] = {.lex_state = 191},
  [318] = {.lex_state = 191},
  [319] = {.lex_state = 191},
  [320] = {.lex_state = 116},
  [321] = {.lex_state = 116},
  [322] = {.lex_state = 116},
  [323] = {.lex_state = 116},
  [324] = {.lex_state = 175},
  [325] = {.lex_state = 125},
  [326] = {.lex_state = 116},
  [327] = {.lex_state = 125},
  [328] = {.lex_state = 175},
  [329] = {.lex_state = 116},
  [330] = {.lex_state = 116},
  [331] = {.lex_state = 116},
  [332] = {.lex_state = 125},
  [333] = {.lex_state = 125},
  [334] = {.lex_state = 116},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 125},
  [337] = {.lex_state = 116},
  [338] = {.lex_state = 125},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 175},
  [341] = {.lex_state = 177},
  [342] = {.lex_state = 116},
  [343] = {.lex_state = 116},
  [344] = {.lex_state = 125},
  [345] = {.lex_state = 125},
  [346] = {.lex_state = 116},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 125},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 173},
  [351] = {.lex_state = 173},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 179},
  [354] = {.lex_state = 116},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 116},
  [357] = {.lex_state = 116},
  [358] = {.lex_state = 175},
  [359] = {.lex_state = 116},
  [360] = {.lex_state = 116},
  [361] = {.lex_state = 125},
  [362] = {.lex_state = 116},
  [363] = {.lex_state = 187},
  [364] = {.lex_state = 116},
  [365] = {.lex_state = 116},
  [366] = {.lex_state = 125},
  [367] = {.lex_state = 193},
  [368] = {.lex_state = 179},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 193},
  [372] = {.lex_state = 193},
  [373] = {.lex_state = 179},
  [374] = {.lex_state = 179},
  [375] = {.lex_state = 179},
  [376] = {.lex_state = 179},
  [377] = {.lex_state = 179},
  [378] = {.lex_state = 179},
  [379] = {.lex_state = 179},
  [380] = {.lex_state = 179},
  [381] = {.lex_state = 179},
  [382] = {.lex_state = 193},
  [383] = {.lex_state = 191},
  [384] = {.lex_state = 191},
  [385] = {.lex_state = 191},
  [386] = {.lex_state = 191},
  [387] = {.lex_state = 191},
  [388] = {.lex_state = 191},
  [389] = {.lex_state = 191},
  [390] = {.lex_state = 191},
  [391] = {.lex_state = 179},
  [392] = {.lex_state = 191},
  [393] = {.lex_state = 179},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 179},
  [396] = {.lex_state = 173},
  [397] = {.lex_state = 198},
  [398] = {.lex_state = 201},
  [399] = {.lex_state = 198},
  [400] = {.lex_state = 198},
  [401] = {.lex_state = 179},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 191},
  [404] = {.lex_state = 191},
  [405] = {.lex_state = 191},
  [406] = {.lex_state = 191},
  [407] = {.lex_state = 191},
  [408] = {.lex_state = 191},
  [409] = {.lex_state = 191},
  [410] = {.lex_state = 191},
  [411] = {.lex_state = 125},
  [412] = {.lex_state = 116},
  [413] = {.lex_state = 116},
  [414] = {.lex_state = 222},
  [415] = {.lex_state = 222},
  [416] = {.lex_state = 222},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 175},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 125},
  [421] = {.lex_state = 125},
  [422] = {.lex_state = 175},
  [423] = {.lex_state = 116},
  [424] = {.lex_state = 116},
  [425] = {.lex_state = 223},
  [426] = {.lex_state = 125},
  [427] = {.lex_state = 223},
  [428] = {.lex_state = 223},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 116},
  [431] = {.lex_state = 116},
  [432] = {.lex_state = 125},
  [433] = {.lex_state = 125},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 116},
  [436] = {.lex_state = 125},
  [437] = {.lex_state = 125},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 116},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 116},
  [444] = {.lex_state = 116},
  [445] = {.lex_state = 224},
  [446] = {.lex_state = 125},
  [447] = {.lex_state = 224},
  [448] = {.lex_state = 224},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 116},
  [451] = {.lex_state = 116},
  [452] = {.lex_state = 125},
  [453] = {.lex_state = 125},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 116},
  [456] = {.lex_state = 125},
  [457] = {.lex_state = 125},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 179},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 179},
  [462] = {.lex_state = 173},
  [463] = {.lex_state = 225},
  [464] = {.lex_state = 201},
  [465] = {.lex_state = 225},
  [466] = {.lex_state = 177},
  [467] = {.lex_state = 175},
  [468] = {.lex_state = 116},
  [469] = {.lex_state = 116},
  [470] = {.lex_state = 116},
  [471] = {.lex_state = 125},
  [472] = {.lex_state = 187},
  [473] = {.lex_state = 189},
  [474] = {.lex_state = 191},
  [475] = {.lex_state = 179},
  [476] = {.lex_state = 179},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 193},
  [479] = {.lex_state = 193},
  [480] = {.lex_state = 193},
  [481] = {.lex_state = 193},
  [482] = {.lex_state = 193},
  [483] = {.lex_state = 193},
  [484] = {.lex_state = 193},
  [485] = {.lex_state = 193},
  [486] = {.lex_state = 193},
  [487] = {.lex_state = 198},
  [488] = {.lex_state = 191},
  [489] = {.lex_state = 191},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 173},
  [492] = {.lex_state = 116},
  [493] = {.lex_state = 198},
  [494] = {.lex_state = 198},
  [495] = {.lex_state = 198},
  [496] = {.lex_state = 198},
  [497] = {.lex_state = 198},
  [498] = {.lex_state = 179},
  [499] = {.lex_state = 179},
  [500] = {.lex_state = 179},
  [501] = {.lex_state = 179},
  [502] = {.lex_state = 179},
  [503] = {.lex_state = 179},
  [504] = {.lex_state = 179},
  [505] = {.lex_state = 179},
  [506] = {.lex_state = 179},
  [507] = {.lex_state = 191},
  [508] = {.lex_state = 179},
  [509] = {.lex_state = 116},
  [510] = {.lex_state = 222},
  [511] = {.lex_state = 116},
  [512] = {.lex_state = 116},
  [513] = {.lex_state = 222},
  [514] = {.lex_state = 222},
  [515] = {.lex_state = 125},
  [516] = {.lex_state = 116},
  [517] = {.lex_state = 175},
  [518] = {.lex_state = 125},
  [519] = {.lex_state = 116},
  [520] = {.lex_state = 223},
  [521] = {.lex_state = 116},
  [522] = {.lex_state = 125},
  [523] = {.lex_state = 116},
  [524] = {.lex_state = 223},
  [525] = {.lex_state = 223},
  [526] = {.lex_state = 116},
  [527] = {.lex_state = 125},
  [528] = {.lex_state = 125},
  [529] = {.lex_state = 116},
  [530] = {.lex_state = 125},
  [531] = {.lex_state = 116},
  [532] = {.lex_state = 177},
  [533] = {.lex_state = 175},
  [534] = {.lex_state = 116},
  [535] = {.lex_state = 116},
  [536] = {.lex_state = 224},
  [537] = {.lex_state = 116},
  [538] = {.lex_state = 125},
  [539] = {.lex_state = 116},
  [540] = {.lex_state = 224},
  [541] = {.lex_state = 224},
  [542] = {.lex_state = 116},
  [543] = {.lex_state = 125},
  [544] = {.lex_state = 125},
  [545] = {.lex_state = 116},
  [546] = {.lex_state = 125},
  [547] = {.lex_state = 201},
  [548] = {.lex_state = 191},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 173},
  [551] = {.lex_state = 116},
  [552] = {.lex_state = 225},
  [553] = {.lex_state = 225},
  [554] = {.lex_state = 225},
  [555] = {.lex_state = 225},
  [556] = {.lex_state = 225},
  [557] = {.lex_state = 179},
  [558] = {.lex_state = 179},
  [559] = {.lex_state = 179},
  [560] = {.lex_state = 179},
  [561] = {.lex_state = 179},
  [562] = {.lex_state = 179},
  [563] = {.lex_state = 179},
  [564] = {.lex_state = 179},
  [565] = {.lex_state = 179},
  [566] = {.lex_state = 116},
  [567] = {.lex_state = 116},
  [568] = {.lex_state = 191},
  [569] = {.lex_state = 193},
  [570] = {.lex_state = 179},
  [571] = {.lex_state = 198},
  [572] = {.lex_state = 179},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 198},
  [576] = {.lex_state = 198},
  [577] = {.lex_state = 179},
  [578] = {.lex_state = 179},
  [579] = {.lex_state = 179},
  [580] = {.lex_state = 179},
  [581] = {.lex_state = 179},
  [582] = {.lex_state = 179},
  [583] = {.lex_state = 179},
  [584] = {.lex_state = 179},
  [585] = {.lex_state = 179},
  [586] = {.lex_state = 198},
  [587] = {.lex_state = 198},
  [588] = {.lex_state = 198},
  [589] = {.lex_state = 198},
  [590] = {.lex_state = 198},
  [591] = {.lex_state = 201},
  [592] = {.lex_state = 198},
  [593] = {.lex_state = 198},
  [594] = {.lex_state = 198},
  [595] = {.lex_state = 198},
  [596] = {.lex_state = 191},
  [597] = {.lex_state = 222},
  [598] = {.lex_state = 222},
  [599] = {.lex_state = 222},
  [600] = {.lex_state = 175},
  [601] = {.lex_state = 125},
  [602] = {.lex_state = 223},
  [603] = {.lex_state = 223},
  [604] = {.lex_state = 223},
  [605] = {.lex_state = 223},
  [606] = {.lex_state = 125},
  [607] = {.lex_state = 125},
  [608] = {.lex_state = 125},
  [609] = {.lex_state = 175},
  [610] = {.lex_state = 116},
  [611] = {.lex_state = 177},
  [612] = {.lex_state = 224},
  [613] = {.lex_state = 224},
  [614] = {.lex_state = 224},
  [615] = {.lex_state = 224},
  [616] = {.lex_state = 125},
  [617] = {.lex_state = 125},
  [618] = {.lex_state = 125},
  [619] = {.lex_state = 225},
  [620] = {.lex_state = 179},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 225},
  [624] = {.lex_state = 225},
  [625] = {.lex_state = 179},
  [626] = {.lex_state = 179},
  [627] = {.lex_state = 179},
  [628] = {.lex_state = 179},
  [629] = {.lex_state = 179},
  [630] = {.lex_state = 179},
  [631] = {.lex_state = 179},
  [632] = {.lex_state = 179},
  [633] = {.lex_state = 179},
  [634] = {.lex_state = 225},
  [635] = {.lex_state = 201},
  [636] = {.lex_state = 201},
  [637] = {.lex_state = 201},
  [638] = {.lex_state = 201},
  [639] = {.lex_state = 201},
  [640] = {.lex_state = 201},
  [641] = {.lex_state = 201},
  [642] = {.lex_state = 201},
  [643] = {.lex_state = 193},
  [644] = {.lex_state = 198},
  [645] = {.lex_state = 179},
  [646] = {.lex_state = 179},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 198},
  [649] = {.lex_state = 198},
  [650] = {.lex_state = 198},
  [651] = {.lex_state = 198},
  [652] = {.lex_state = 198},
  [653] = {.lex_state = 198},
  [654] = {.lex_state = 198},
  [655] = {.lex_state = 198},
  [656] = {.lex_state = 198},
  [657] = {.lex_state = 125},
  [658] = {.lex_state = 116},
  [659] = {.lex_state = 125},
  [660] = {.lex_state = 116},
  [661] = {.lex_state = 116},
  [662] = {.lex_state = 125},
  [663] = {.lex_state = 201},
  [664] = {.lex_state = 179},
  [665] = {.lex_state = 179},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 225},
  [668] = {.lex_state = 225},
  [669] = {.lex_state = 225},
  [670] = {.lex_state = 225},
  [671] = {.lex_state = 225},
  [672] = {.lex_state = 225},
  [673] = {.lex_state = 225},
  [674] = {.lex_state = 225},
  [675] = {.lex_state = 225},
  [676] = {.lex_state = 198},
  [677] = {.lex_state = 198},
  [678] = {.lex_state = 179},
  [679] = {.lex_state = 223},
  [680] = {.lex_state = 224},
  [681] = {.lex_state = 201},
  [682] = {.lex_state = 225},
  [683] = {.lex_state = 179},
  [684] = {.lex_state = 198},
  [685] = {.lex_state = 225},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_open] = ACTIONS(3),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_rec] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(3),
    [anon_sym_constraint] = ACTIONS(3),
    [anon_sym_sig] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_functor] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(3),
    [anon_sym_lsl] = ACTIONS(3),
    [anon_sym_lsr] = ACTIONS(3),
    [anon_sym_asr] = ACTIONS(3),
    [anon_sym_mod] = ACTIONS(3),
    [anon_sym_land] = ACTIONS(3),
    [anon_sym_lor] = ACTIONS(3),
    [anon_sym_lxor] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__shift_operator] = ACTIONS(3),
    [sym__hash_operator] = ACTIONS(3),
    [sym__mult_operator] = ACTIONS(5),
    [sym__add_operator] = ACTIONS(3),
    [sym__concat_operator] = ACTIONS(3),
    [sym__rel_operator] = ACTIONS(5),
    [sym_identifier] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_compilation_unit] = STATE(9),
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_val] = ACTIONS(12),
    [anon_sym_module] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_let] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [2] = {
    [sym_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [anon_sym_type] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(26),
  },
  [4] = {
    [sym_type_constructor_definition] = STATE(18),
    [sym_type_parameters] = STATE(19),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym_qualified_identifier] = STATE(21),
    [sym_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym_qualified_identifier] = STATE(22),
    [sym_identifier] = ACTIONS(42),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym_let_binding] = STATE(28),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_rec] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [anon_sym_AT_AT] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_SEMI_SEMI] = ACTIONS(62),
    [anon_sym_val] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [anon_sym_open] = ACTIONS(60),
    [anon_sym_include] = ACTIONS(60),
    [anon_sym_let] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [sym_comment] = ACTIONS(26),
  },
  [11] = {
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_val] = ACTIONS(12),
    [anon_sym_module] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_open] = ACTIONS(18),
    [anon_sym_include] = ACTIONS(20),
    [anon_sym_let] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(66),
    [sym_comment] = ACTIONS(26),
  },
  [13] = {
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(39),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [15] = {
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [16] = {
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(26),
  },
  [17] = {
    [sym_type_equation] = STATE(44),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [18] = {
    [aux_sym_type_definition_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_val] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [aux_sym_type_parameters_repeat1] = STATE(50),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SEMI_SEMI] = ACTIONS(94),
    [anon_sym_val] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_type] = ACTIONS(94),
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_include] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SEMI_SEMI] = ACTIONS(98),
    [anon_sym_val] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_open] = ACTIONS(98),
    [anon_sym_include] = ACTIONS(98),
    [anon_sym_let] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [sym__pattern] = STATE(52),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym_let_binding] = STATE(53),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [sym__pattern] = STATE(55),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(59),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(104),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [sym_identifier] = ACTIONS(108),
    [sym_number] = ACTIONS(108),
    [sym_string] = ACTIONS(104),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [aux_sym_value_definition_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SEMI_SEMI] = ACTIONS(110),
    [anon_sym_val] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_open] = ACTIONS(110),
    [anon_sym_include] = ACTIONS(110),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(64),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [sym_qualified_identifier] = STATE(65),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_val] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_open] = ACTIONS(120),
    [anon_sym_include] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym_value_specification] = STATE(10),
    [sym_module_specification] = STATE(10),
    [sym_module_type_specification] = STATE(10),
    [sym_open_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_module_definition] = STATE(10),
    [sym_type_definition] = STATE(10),
    [sym_value_definition] = STATE(10),
    [sym_attribute] = STATE(10),
    [aux_sym_compilation_unit_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_val] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(125),
    [anon_sym_type] = ACTIONS(128),
    [anon_sym_open] = ACTIONS(131),
    [anon_sym_include] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(140),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [sym__type] = STATE(69),
    [sym_parenthesized_type] = STATE(70),
    [sym_function_type] = STATE(70),
    [sym_type_variable] = STATE(70),
    [sym_constructed_type] = STATE(70),
    [sym_qualified_type_identifier] = STATE(70),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
    [anon_sym_val] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_open] = ACTIONS(149),
    [anon_sym_include] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(26),
  },
  [35] = {
    [sym__module_type] = STATE(76),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [sym__module] = STATE(81),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(80),
    [anon_sym_functor] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [37] = {
    [sym_identifier] = ACTIONS(165),
    [sym_comment] = ACTIONS(26),
  },
  [38] = {
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(85),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [40] = {
    [sym_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
  },
  [42] = {
    [sym_record_declaration] = STATE(91),
    [sym__type] = STATE(92),
    [sym_parenthesized_type] = STATE(93),
    [sym_function_type] = STATE(93),
    [sym_type_variable] = STATE(93),
    [sym_constructed_type] = STATE(93),
    [sym_qualified_type_identifier] = STATE(93),
    [sym_qualified_identifier] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [43] = {
    [sym_identifier] = ACTIONS(187),
    [sym_comment] = ACTIONS(26),
  },
  [44] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_val] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [anon_sym_val] = ACTIONS(193),
    [anon_sym_module] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_open] = ACTIONS(193),
    [anon_sym_include] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_constraint] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [46] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_val] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [47] = {
    [sym_type_constructor_definition] = STATE(99),
    [sym_type_parameters] = STATE(19),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(26),
  },
  [48] = {
    [aux_sym_type_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_val] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [49] = {
    [sym_type_equation] = STATE(102),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [anon_sym_val] = ACTIONS(197),
    [anon_sym_module] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_open] = ACTIONS(197),
    [anon_sym_include] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [50] = {
    [aux_sym_type_parameters_repeat1] = STATE(50),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [sym_identifier] = ACTIONS(207),
    [sym_comment] = ACTIONS(26),
  },
  [51] = {
    [sym_identifier] = ACTIONS(209),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(108),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [aux_sym_value_definition_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_val] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_open] = ACTIONS(217),
    [anon_sym_include] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_comment] = ACTIONS(26),
  },
  [54] = {
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [sym_number] = ACTIONS(221),
    [sym_string] = ACTIONS(219),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [aux_sym_record_pattern_repeat1] = STATE(113),
    [aux_sym_tuple_pattern_repeat1] = STATE(114),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(233),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [58] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(117),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_identifier] = ACTIONS(233),
    [sym_number] = ACTIONS(233),
    [sym_string] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(119),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [sym_let_binding] = STATE(120),
    [sym__pattern] = STATE(29),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [61] = {
    [aux_sym_value_definition_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_val] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_open] = ACTIONS(217),
    [anon_sym_include] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_comment] = ACTIONS(26),
  },
  [62] = {
    [sym__expression] = STATE(126),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [sym__pattern] = STATE(128),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(129),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [sym__type] = STATE(134),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [sym__type] = STATE(137),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [67] = {
    [sym_identifier] = ACTIONS(259),
    [sym_comment] = ACTIONS(26),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_val] = ACTIONS(263),
    [anon_sym_module] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_open] = ACTIONS(263),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_let] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [69] = {
    [sym_qualified_type_identifier] = STATE(142),
    [sym_qualified_identifier] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_SEMI_SEMI] = ACTIONS(269),
    [anon_sym_val] = ACTIONS(271),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(271),
    [anon_sym_open] = ACTIONS(271),
    [anon_sym_include] = ACTIONS(271),
    [anon_sym_let] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [sym_identifier] = ACTIONS(275),
    [sym_comment] = ACTIONS(26),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(26),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(265),
    [sym_comment] = ACTIONS(26),
  },
  [72] = {
    [sym__module_type] = STATE(144),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(283),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [73] = {
    [sym_value_specification] = STATE(151),
    [sym_module_specification] = STATE(151),
    [sym_module_type_specification] = STATE(151),
    [sym_open_directive] = STATE(151),
    [sym_include_directive] = STATE(151),
    [sym_type_definition] = STATE(151),
    [sym_attribute] = STATE(151),
    [aux_sym_signature_repeat1] = STATE(152),
    [anon_sym_val] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(287),
    [anon_sym_type] = ACTIONS(289),
    [anon_sym_open] = ACTIONS(291),
    [anon_sym_include] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(295),
    [sym_comment] = ACTIONS(26),
  },
  [74] = {
    [sym_module_parameter] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_val] = ACTIONS(297),
    [anon_sym_module] = ACTIONS(297),
    [anon_sym_type] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_open] = ACTIONS(297),
    [anon_sym_include] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_let] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(265),
    [sym_comment] = ACTIONS(26),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_val] = ACTIONS(299),
    [anon_sym_module] = ACTIONS(299),
    [anon_sym_type] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_open] = ACTIONS(299),
    [anon_sym_include] = ACTIONS(299),
    [anon_sym_let] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_SEMI_SEMI] = ACTIONS(305),
    [anon_sym_val] = ACTIONS(305),
    [anon_sym_module] = ACTIONS(305),
    [anon_sym_type] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_open] = ACTIONS(305),
    [anon_sym_include] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_let] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_end] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [sym_comment] = ACTIONS(26),
  },
  [78] = {
    [sym_module_parameter] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [79] = {
    [sym_module_definition] = STATE(161),
    [sym_type_definition] = STATE(161),
    [sym_value_definition] = STATE(161),
    [sym_attribute] = STATE(161),
    [aux_sym_struct_module_repeat1] = STATE(162),
    [anon_sym_module] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(309),
    [anon_sym_let] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_SEMI_SEMI] = ACTIONS(315),
    [anon_sym_val] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_open] = ACTIONS(315),
    [anon_sym_include] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_let] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(96),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_SEMI_SEMI] = ACTIONS(319),
    [anon_sym_val] = ACTIONS(319),
    [anon_sym_module] = ACTIONS(319),
    [anon_sym_type] = ACTIONS(319),
    [anon_sym_open] = ACTIONS(319),
    [anon_sym_include] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_let] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_end] = ACTIONS(319),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_SEMI_SEMI] = ACTIONS(315),
    [anon_sym_val] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_open] = ACTIONS(315),
    [anon_sym_include] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_let] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_end] = ACTIONS(315),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(323),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [sym__module_type] = STATE(165),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(283),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(85),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(26),
  },
  [87] = {
    [sym__type] = STATE(166),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(26),
  },
  [89] = {
    [sym_field_declaration] = STATE(172),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_mutable] = ACTIONS(340),
    [sym_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_val] = ACTIONS(263),
    [anon_sym_module] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_open] = ACTIONS(263),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_let] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_constraint] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(344),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_val] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_open] = ACTIONS(346),
    [anon_sym_include] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_let] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [92] = {
    [sym_qualified_type_identifier] = STATE(177),
    [sym_qualified_identifier] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_SEMI_SEMI] = ACTIONS(348),
    [anon_sym_val] = ACTIONS(350),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_open] = ACTIONS(350),
    [anon_sym_include] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(350),
    [anon_sym_let] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_constraint] = ACTIONS(350),
    [anon_sym_DASH_GT] = ACTIONS(352),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_constraint] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [anon_sym_DOT] = ACTIONS(344),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(356),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [sym_record_declaration] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [97] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_val] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_open] = ACTIONS(346),
    [anon_sym_include] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_let] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_SEMI_SEMI] = ACTIONS(358),
    [anon_sym_val] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [anon_sym_open] = ACTIONS(358),
    [anon_sym_include] = ACTIONS(358),
    [anon_sym_and] = ACTIONS(358),
    [anon_sym_let] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_constraint] = ACTIONS(360),
    [sym_comment] = ACTIONS(26),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_val] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_type] = ACTIONS(363),
    [anon_sym_open] = ACTIONS(363),
    [anon_sym_include] = ACTIONS(363),
    [anon_sym_and] = ACTIONS(363),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [sym_comment] = ACTIONS(26),
  },
  [100] = {
    [aux_sym_type_definition_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_val] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_type] = ACTIONS(363),
    [anon_sym_open] = ACTIONS(363),
    [anon_sym_include] = ACTIONS(363),
    [anon_sym_and] = ACTIONS(365),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym_comment] = ACTIONS(26),
  },
  [101] = {
    [sym_record_declaration] = STATE(180),
    [sym__type] = STATE(92),
    [sym_parenthesized_type] = STATE(93),
    [sym_function_type] = STATE(93),
    [sym_type_variable] = STATE(93),
    [sym_constructed_type] = STATE(93),
    [sym_qualified_type_identifier] = STATE(93),
    [sym_qualified_identifier] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [102] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_val] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_open] = ACTIONS(368),
    [anon_sym_include] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_let] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [103] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_val] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_open] = ACTIONS(368),
    [anon_sym_include] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_let] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_SEMI_SEMI] = ACTIONS(372),
    [anon_sym_val] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(374),
    [anon_sym_type] = ACTIONS(374),
    [anon_sym_open] = ACTIONS(374),
    [anon_sym_include] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_and] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_lsl] = ACTIONS(374),
    [anon_sym_lsr] = ACTIONS(374),
    [anon_sym_asr] = ACTIONS(374),
    [anon_sym_mod] = ACTIONS(374),
    [anon_sym_land] = ACTIONS(374),
    [anon_sym_lor] = ACTIONS(374),
    [anon_sym_lxor] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [sym__shift_operator] = ACTIONS(374),
    [sym__hash_operator] = ACTIONS(374),
    [sym__mult_operator] = ACTIONS(376),
    [sym__add_operator] = ACTIONS(374),
    [sym__concat_operator] = ACTIONS(374),
    [sym__rel_operator] = ACTIONS(376),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(374),
    [sym_string] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [sym__type] = STATE(183),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(378),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_identifier] = ACTIONS(380),
    [sym_number] = ACTIONS(380),
    [sym_string] = ACTIONS(378),
    [sym_comment] = ACTIONS(26),
  },
  [107] = {
    [sym__pattern] = STATE(184),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [108] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(185),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_comment] = ACTIONS(26),
  },
  [109] = {
    [aux_sym_value_definition_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_SEMI_SEMI] = ACTIONS(382),
    [anon_sym_val] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_type] = ACTIONS(382),
    [anon_sym_open] = ACTIONS(382),
    [anon_sym_include] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [sym__pattern] = STATE(186),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [111] = {
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_identifier] = ACTIONS(386),
    [sym_number] = ACTIONS(386),
    [sym_string] = ACTIONS(384),
    [sym_comment] = ACTIONS(26),
  },
  [112] = {
    [sym__pattern] = STATE(187),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [aux_sym_record_pattern_repeat1] = STATE(189),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(388),
    [sym_comment] = ACTIONS(26),
  },
  [114] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(190),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_QMARK] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [sym_identifier] = ACTIONS(394),
    [sym_number] = ACTIONS(394),
    [sym_string] = ACTIONS(392),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [sym__pattern] = STATE(192),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(193),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_identifier] = ACTIONS(396),
    [sym_number] = ACTIONS(396),
    [sym_string] = ACTIONS(249),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [sym__expression] = STATE(194),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(119),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(406),
    [sym_identifier] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
    [sym_string] = ACTIONS(412),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [anon_sym_val] = ACTIONS(415),
    [anon_sym_module] = ACTIONS(415),
    [anon_sym_type] = ACTIONS(415),
    [anon_sym_open] = ACTIONS(415),
    [anon_sym_include] = ACTIONS(415),
    [anon_sym_and] = ACTIONS(415),
    [anon_sym_let] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_end] = ACTIONS(415),
    [anon_sym_in] = ACTIONS(417),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [aux_sym_value_definition_repeat1] = STATE(121),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [anon_sym_val] = ACTIONS(415),
    [anon_sym_module] = ACTIONS(415),
    [anon_sym_type] = ACTIONS(415),
    [anon_sym_open] = ACTIONS(415),
    [anon_sym_include] = ACTIONS(415),
    [anon_sym_and] = ACTIONS(419),
    [anon_sym_let] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [sym__expression] = STATE(198),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [123] = {
    [sym_let_binding] = STATE(201),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(207),
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_val] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_open] = ACTIONS(432),
    [anon_sym_include] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_val] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_open] = ACTIONS(432),
    [anon_sym_include] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_SEMI_SEMI] = ACTIONS(438),
    [anon_sym_val] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_open] = ACTIONS(438),
    [anon_sym_include] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(207),
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_val] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_open] = ACTIONS(432),
    [anon_sym_include] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(64),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(129),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(464),
    [sym_comment] = ACTIONS(26),
  },
  [130] = {
    [sym__type] = STATE(217),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_identifier] = ACTIONS(263),
    [sym_comment] = ACTIONS(26),
  },
  [134] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_DASH_GT] = ACTIONS(475),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [anon_sym_DOT] = ACTIONS(471),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_val] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_open] = ACTIONS(485),
    [anon_sym_include] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [sym_identifier] = ACTIONS(489),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [sym__type] = STATE(228),
    [sym_parenthesized_type] = STATE(70),
    [sym_function_type] = STATE(70),
    [sym_type_variable] = STATE(70),
    [sym_constructed_type] = STATE(70),
    [sym_qualified_type_identifier] = STATE(70),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_val] = ACTIONS(493),
    [anon_sym_module] = ACTIONS(493),
    [anon_sym_type] = ACTIONS(493),
    [anon_sym_open] = ACTIONS(493),
    [anon_sym_include] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(265),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(26),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_val] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_include] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [sym_module_parameter] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_SEMI_SEMI] = ACTIONS(503),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_let] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [sym_identifier] = ACTIONS(507),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [anon_sym_type] = ACTIONS(509),
    [sym_identifier] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [sym_type_constructor_definition] = STATE(235),
    [sym_type_parameters] = STATE(236),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(513),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [sym_qualified_identifier] = STATE(237),
    [sym_identifier] = ACTIONS(515),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [sym_qualified_identifier] = STATE(238),
    [sym_identifier] = ACTIONS(517),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_val] = ACTIONS(519),
    [anon_sym_module] = ACTIONS(519),
    [anon_sym_type] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_open] = ACTIONS(519),
    [anon_sym_include] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_let] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_end] = ACTIONS(519),
    [anon_sym_DASH_GT] = ACTIONS(519),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(521),
    [anon_sym_val] = ACTIONS(523),
    [anon_sym_module] = ACTIONS(523),
    [anon_sym_type] = ACTIONS(523),
    [anon_sym_open] = ACTIONS(523),
    [anon_sym_include] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_end] = ACTIONS(523),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [sym_value_specification] = STATE(151),
    [sym_module_specification] = STATE(151),
    [sym_module_type_specification] = STATE(151),
    [sym_open_directive] = STATE(151),
    [sym_include_directive] = STATE(151),
    [sym_type_definition] = STATE(151),
    [sym_attribute] = STATE(151),
    [aux_sym_signature_repeat1] = STATE(241),
    [anon_sym_val] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(287),
    [anon_sym_type] = ACTIONS(289),
    [anon_sym_open] = ACTIONS(291),
    [anon_sym_include] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(525),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [anon_sym_DASH_GT] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [sym__module] = STATE(243),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(80),
    [anon_sym_functor] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [sym__module_type] = STATE(244),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_DASH_GT] = ACTIONS(529),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [sym_identifier] = ACTIONS(531),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [sym_type_constructor_definition] = STATE(248),
    [sym_type_parameters] = STATE(249),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(533),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [sym_let_binding] = STATE(252),
    [sym__pattern] = STATE(253),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_rec] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(537),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_SEMI_SEMI] = ACTIONS(539),
    [anon_sym_val] = ACTIONS(539),
    [anon_sym_module] = ACTIONS(539),
    [anon_sym_type] = ACTIONS(539),
    [anon_sym_open] = ACTIONS(539),
    [anon_sym_include] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_let] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_end] = ACTIONS(539),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(545),
    [anon_sym_type] = ACTIONS(545),
    [anon_sym_let] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_end] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [sym_module_definition] = STATE(161),
    [sym_type_definition] = STATE(161),
    [sym_value_definition] = STATE(161),
    [sym_attribute] = STATE(161),
    [aux_sym_struct_module_repeat1] = STATE(256),
    [anon_sym_module] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(309),
    [anon_sym_let] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_end] = ACTIONS(547),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [sym__module] = STATE(258),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(80),
    [anon_sym_functor] = ACTIONS(549),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [sym__module_type] = STATE(260),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(551),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(553),
    [anon_sym_type] = ACTIONS(553),
    [anon_sym_open] = ACTIONS(553),
    [anon_sym_include] = ACTIONS(553),
    [anon_sym_let] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_val] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_open] = ACTIONS(485),
    [anon_sym_include] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_constraint] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [anon_sym_SEMI_SEMI] = ACTIONS(559),
    [anon_sym_val] = ACTIONS(559),
    [anon_sym_module] = ACTIONS(559),
    [anon_sym_type] = ACTIONS(559),
    [anon_sym_open] = ACTIONS(559),
    [anon_sym_include] = ACTIONS(559),
    [anon_sym_and] = ACTIONS(559),
    [anon_sym_let] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_constraint] = ACTIONS(559),
    [anon_sym_end] = ACTIONS(559),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [sym_identifier] = ACTIONS(561),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_COLON] = ACTIONS(563),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [aux_sym_record_declaration_repeat1] = STATE(266),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [sym_identifier] = ACTIONS(567),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_val] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_open] = ACTIONS(569),
    [anon_sym_include] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_let] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [sym__type] = STATE(268),
    [sym_parenthesized_type] = STATE(93),
    [sym_function_type] = STATE(93),
    [sym_type_variable] = STATE(93),
    [sym_constructed_type] = STATE(93),
    [sym_qualified_type_identifier] = STATE(93),
    [sym_qualified_identifier] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_val] = ACTIONS(493),
    [anon_sym_module] = ACTIONS(493),
    [anon_sym_type] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_open] = ACTIONS(493),
    [anon_sym_include] = ACTIONS(493),
    [anon_sym_and] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_constraint] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(344),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_val] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_include] = ACTIONS(499),
    [anon_sym_and] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_constraint] = ACTIONS(499),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [sym__type] = STATE(269),
    [sym_parenthesized_type] = STATE(93),
    [sym_function_type] = STATE(93),
    [sym_type_variable] = STATE(93),
    [sym_constructed_type] = STATE(93),
    [sym_qualified_type_identifier] = STATE(93),
    [sym_qualified_identifier] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(270),
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_val] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_open] = ACTIONS(569),
    [anon_sym_include] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_let] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(271),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_val] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_open] = ACTIONS(571),
    [anon_sym_include] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [sym_record_declaration] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_val] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_open] = ACTIONS(571),
    [anon_sym_include] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(108),
    [anon_sym_COLON] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(185),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(575),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(114),
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_RBRACE] = ACTIONS(578),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(114),
    [anon_sym_SEMI] = ACTIONS(460),
    [anon_sym_RBRACE] = ACTIONS(460),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym_EQ] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(580),
    [anon_sym_TILDE] = ACTIONS(580),
    [anon_sym_QMARK] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(580),
    [sym_identifier] = ACTIONS(582),
    [sym_number] = ACTIONS(582),
    [sym_string] = ACTIONS(580),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [aux_sym_record_pattern_repeat1] = STATE(189),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_RBRACE] = ACTIONS(578),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(190),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(587),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [sym__pattern] = STATE(274),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(117),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_QMARK] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_identifier] = ACTIONS(590),
    [sym_number] = ACTIONS(590),
    [sym_string] = ACTIONS(460),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(193),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(594),
    [sym_identifier] = ACTIONS(592),
    [sym_number] = ACTIONS(592),
    [sym_string] = ACTIONS(462),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_val] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_type] = ACTIONS(597),
    [anon_sym_open] = ACTIONS(597),
    [anon_sym_include] = ACTIONS(597),
    [anon_sym_and] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [sym__expression] = STATE(275),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [sym_let_binding] = STATE(276),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(599),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(294),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(104),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [aux_sym_value_definition_repeat1] = STATE(297),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(631),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(64),
    [anon_sym_EQ] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [sym_let_binding] = STATE(299),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(300),
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_val] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_open] = ACTIONS(432),
    [anon_sym_include] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_SEMI_SEMI] = ACTIONS(635),
    [anon_sym_val] = ACTIONS(637),
    [anon_sym_module] = ACTIONS(637),
    [anon_sym_type] = ACTIONS(637),
    [anon_sym_open] = ACTIONS(637),
    [anon_sym_include] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_and] = ACTIONS(637),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(655),
    [sym_identifier] = ACTIONS(657),
    [sym_number] = ACTIONS(637),
    [sym_string] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(300),
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_val] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_open] = ACTIONS(432),
    [anon_sym_include] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(310),
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_val] = ACTIONS(661),
    [anon_sym_module] = ACTIONS(661),
    [anon_sym_type] = ACTIONS(661),
    [anon_sym_open] = ACTIONS(661),
    [anon_sym_include] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [sym__expression] = STATE(311),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [sym__expression] = STATE(312),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [sym__expression] = STATE(313),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [sym__expression] = STATE(314),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [sym__expression] = STATE(315),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [sym__expression] = STATE(316),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [sym__expression] = STATE(317),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [sym__expression] = STATE(318),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [sym__expression] = STATE(319),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(485),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(374),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [sym_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_val] = ACTIONS(669),
    [anon_sym_module] = ACTIONS(669),
    [anon_sym_type] = ACTIONS(669),
    [anon_sym_open] = ACTIONS(669),
    [anon_sym_include] = ACTIONS(669),
    [anon_sym_let] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_end] = ACTIONS(669),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [sym__type] = STATE(322),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_identifier] = ACTIONS(493),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(499),
    [sym_comment] = ACTIONS(26),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_val] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_open] = ACTIONS(673),
    [anon_sym_include] = ACTIONS(673),
    [anon_sym_let] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [sym__type] = STATE(323),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [anon_sym_val] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_type] = ACTIONS(679),
    [anon_sym_EQ] = ACTIONS(677),
    [anon_sym_open] = ACTIONS(679),
    [anon_sym_include] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_let] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [sym_qualified_type_identifier] = STATE(142),
    [sym_qualified_identifier] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [sym_identifier] = ACTIONS(275),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [anon_sym_DASH_GT] = ACTIONS(687),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [sym__module_type] = STATE(325),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(283),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [anon_sym_COLON] = ACTIONS(689),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [sym_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(329),
    [anon_sym_COLON] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [sym_type_equation] = STATE(332),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(333),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_val] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(695),
    [anon_sym_open] = ACTIONS(80),
    [anon_sym_include] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [aux_sym_type_definition_repeat1] = STATE(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_val] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_open] = ACTIONS(86),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_end] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [sym_identifier] = ACTIONS(701),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(94),
    [anon_sym_val] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_type] = ACTIONS(94),
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_include] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_end] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(703),
    [sym_comment] = ACTIONS(26),
  },
  [238] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(98),
    [anon_sym_val] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_open] = ACTIONS(98),
    [anon_sym_include] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_end] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(703),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [anon_sym_val] = ACTIONS(705),
    [anon_sym_module] = ACTIONS(705),
    [anon_sym_type] = ACTIONS(705),
    [anon_sym_open] = ACTIONS(705),
    [anon_sym_include] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_end] = ACTIONS(705),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(707),
    [anon_sym_SEMI_SEMI] = ACTIONS(707),
    [anon_sym_val] = ACTIONS(707),
    [anon_sym_module] = ACTIONS(707),
    [anon_sym_type] = ACTIONS(707),
    [anon_sym_EQ] = ACTIONS(707),
    [anon_sym_open] = ACTIONS(707),
    [anon_sym_include] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_let] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_end] = ACTIONS(707),
    [anon_sym_DASH_GT] = ACTIONS(707),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [sym_value_specification] = STATE(151),
    [sym_module_specification] = STATE(151),
    [sym_module_type_specification] = STATE(151),
    [sym_open_directive] = STATE(151),
    [sym_include_directive] = STATE(151),
    [sym_type_definition] = STATE(151),
    [sym_attribute] = STATE(151),
    [aux_sym_signature_repeat1] = STATE(241),
    [anon_sym_val] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_type] = ACTIONS(715),
    [anon_sym_open] = ACTIONS(718),
    [anon_sym_include] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_end] = ACTIONS(705),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [sym__module_type] = STATE(338),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [anon_sym_SEMI_SEMI] = ACTIONS(727),
    [anon_sym_val] = ACTIONS(727),
    [anon_sym_module] = ACTIONS(727),
    [anon_sym_type] = ACTIONS(727),
    [anon_sym_open] = ACTIONS(727),
    [anon_sym_include] = ACTIONS(727),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_let] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(727),
    [anon_sym_end] = ACTIONS(727),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(729),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_val] = ACTIONS(729),
    [anon_sym_module] = ACTIONS(729),
    [anon_sym_type] = ACTIONS(729),
    [anon_sym_EQ] = ACTIONS(729),
    [anon_sym_open] = ACTIONS(729),
    [anon_sym_include] = ACTIONS(729),
    [anon_sym_let] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [sym__module] = STATE(339),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(80),
    [anon_sym_functor] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [anon_sym_COLON] = ACTIONS(731),
    [anon_sym_EQ] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [sym_type_equation] = STATE(344),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(345),
    [anon_sym_SEMI_SEMI] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(80),
    [anon_sym_type] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(735),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(80),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [aux_sym_type_definition_repeat1] = STATE(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(86),
    [anon_sym_module] = ACTIONS(86),
    [anon_sym_type] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_end] = ACTIONS(86),
    [sym_comment] = ACTIONS(26),
  },
  [249] = {
    [sym_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [sym_let_binding] = STATE(349),
    [sym__pattern] = STATE(253),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(743),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [251] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(350),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(104),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [aux_sym_value_definition_repeat1] = STATE(352),
    [anon_sym_SEMI_SEMI] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_and] = ACTIONS(745),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(64),
    [anon_sym_EQ] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [anon_sym_module] = ACTIONS(749),
    [anon_sym_type] = ACTIONS(749),
    [anon_sym_let] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_end] = ACTIONS(749),
    [sym_comment] = ACTIONS(26),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(751),
    [anon_sym_SEMI_SEMI] = ACTIONS(751),
    [anon_sym_val] = ACTIONS(751),
    [anon_sym_module] = ACTIONS(751),
    [anon_sym_type] = ACTIONS(751),
    [anon_sym_open] = ACTIONS(751),
    [anon_sym_include] = ACTIONS(751),
    [anon_sym_LPAREN] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_let] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_end] = ACTIONS(751),
    [sym_comment] = ACTIONS(26),
  },
  [256] = {
    [sym_module_definition] = STATE(161),
    [sym_type_definition] = STATE(161),
    [sym_value_definition] = STATE(161),
    [sym_attribute] = STATE(161),
    [aux_sym_struct_module_repeat1] = STATE(256),
    [anon_sym_module] = ACTIONS(755),
    [anon_sym_type] = ACTIONS(758),
    [anon_sym_let] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_end] = ACTIONS(749),
    [sym_comment] = ACTIONS(26),
  },
  [257] = {
    [sym_module_parameter] = STATE(354),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [sym_module_parameter] = STATE(356),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_val] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_EQ] = ACTIONS(671),
    [anon_sym_open] = ACTIONS(673),
    [anon_sym_include] = ACTIONS(673),
    [anon_sym_and] = ACTIONS(673),
    [anon_sym_let] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_constraint] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(26),
  },
  [262] = {
    [ts_builtin_sym_end] = ACTIONS(773),
    [anon_sym_SEMI_SEMI] = ACTIONS(773),
    [anon_sym_val] = ACTIONS(773),
    [anon_sym_module] = ACTIONS(773),
    [anon_sym_type] = ACTIONS(773),
    [anon_sym_open] = ACTIONS(773),
    [anon_sym_include] = ACTIONS(773),
    [anon_sym_and] = ACTIONS(773),
    [anon_sym_let] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_constraint] = ACTIONS(773),
    [anon_sym_end] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [263] = {
    [anon_sym_COLON] = ACTIONS(775),
    [sym_comment] = ACTIONS(26),
  },
  [264] = {
    [sym__type] = STATE(360),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [265] = {
    [sym_field_declaration] = STATE(362),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_mutable] = ACTIONS(340),
    [sym_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [266] = {
    [aux_sym_record_declaration_repeat1] = STATE(364),
    [anon_sym_SEMI] = ACTIONS(779),
    [anon_sym_RBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(26),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [anon_sym_val] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_type] = ACTIONS(679),
    [anon_sym_EQ] = ACTIONS(677),
    [anon_sym_open] = ACTIONS(679),
    [anon_sym_include] = ACTIONS(679),
    [anon_sym_and] = ACTIONS(679),
    [anon_sym_let] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_constraint] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
  },
  [268] = {
    [sym_qualified_type_identifier] = STATE(177),
    [sym_qualified_identifier] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_EQ] = ACTIONS(683),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(352),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [269] = {
    [sym_qualified_type_identifier] = STATE(177),
    [sym_qualified_identifier] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(781),
    [anon_sym_SEMI_SEMI] = ACTIONS(781),
    [anon_sym_val] = ACTIONS(783),
    [anon_sym_module] = ACTIONS(783),
    [anon_sym_type] = ACTIONS(783),
    [anon_sym_open] = ACTIONS(783),
    [anon_sym_include] = ACTIONS(783),
    [anon_sym_and] = ACTIONS(783),
    [anon_sym_let] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_constraint] = ACTIONS(783),
    [anon_sym_DASH_GT] = ACTIONS(785),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [270] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(787),
    [anon_sym_SEMI_SEMI] = ACTIONS(787),
    [anon_sym_val] = ACTIONS(787),
    [anon_sym_module] = ACTIONS(787),
    [anon_sym_type] = ACTIONS(787),
    [anon_sym_open] = ACTIONS(787),
    [anon_sym_include] = ACTIONS(787),
    [anon_sym_and] = ACTIONS(787),
    [anon_sym_let] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [271] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_val] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_open] = ACTIONS(789),
    [anon_sym_include] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_let] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [272] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(366),
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_val] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_open] = ACTIONS(789),
    [anon_sym_include] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_let] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [273] = {
    [anon_sym_COLON] = ACTIONS(791),
    [anon_sym_EQ] = ACTIONS(791),
    [anon_sym_LPAREN] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_TILDE] = ACTIONS(791),
    [anon_sym_QMARK] = ACTIONS(791),
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_COMMA] = ACTIONS(791),
    [sym_identifier] = ACTIONS(793),
    [sym_number] = ACTIONS(793),
    [sym_string] = ACTIONS(791),
    [sym_comment] = ACTIONS(26),
  },
  [274] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(117),
    [anon_sym_EQ] = ACTIONS(795),
    [anon_sym_LPAREN] = ACTIONS(797),
    [anon_sym_TILDE] = ACTIONS(795),
    [anon_sym_QMARK] = ACTIONS(795),
    [anon_sym_LBRACE] = ACTIONS(795),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_identifier] = ACTIONS(797),
    [sym_number] = ACTIONS(797),
    [sym_string] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [276] = {
    [aux_sym_value_definition_repeat1] = STATE(369),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(801),
    [sym_comment] = ACTIONS(26),
  },
  [277] = {
    [sym_let_binding] = STATE(370),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [278] = {
    [sym_identifier] = ACTIONS(803),
    [sym_comment] = ACTIONS(26),
  },
  [279] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(372),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [280] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [281] = {
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(821),
    [sym_identifier] = ACTIONS(657),
    [sym_number] = ACTIONS(637),
    [sym_string] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [282] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(372),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [283] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(382),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_let] = ACTIONS(599),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [284] = {
    [ts_builtin_sym_end] = ACTIONS(823),
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_val] = ACTIONS(825),
    [anon_sym_module] = ACTIONS(825),
    [anon_sym_type] = ACTIONS(825),
    [anon_sym_open] = ACTIONS(825),
    [anon_sym_include] = ACTIONS(825),
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_and] = ACTIONS(825),
    [anon_sym_let] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_lsl] = ACTIONS(825),
    [anon_sym_lsr] = ACTIONS(825),
    [anon_sym_asr] = ACTIONS(825),
    [anon_sym_mod] = ACTIONS(825),
    [anon_sym_land] = ACTIONS(825),
    [anon_sym_lor] = ACTIONS(825),
    [anon_sym_lxor] = ACTIONS(825),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_AMP_AMP] = ACTIONS(825),
    [sym__shift_operator] = ACTIONS(825),
    [sym__hash_operator] = ACTIONS(825),
    [sym__mult_operator] = ACTIONS(827),
    [sym__add_operator] = ACTIONS(825),
    [sym__concat_operator] = ACTIONS(825),
    [sym__rel_operator] = ACTIONS(827),
    [sym_identifier] = ACTIONS(827),
    [sym_number] = ACTIONS(825),
    [sym_string] = ACTIONS(823),
    [sym_comment] = ACTIONS(26),
  },
  [285] = {
    [sym__expression] = STATE(383),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [286] = {
    [sym__expression] = STATE(384),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [287] = {
    [sym__expression] = STATE(385),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [288] = {
    [sym__expression] = STATE(386),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [289] = {
    [sym__expression] = STATE(315),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [290] = {
    [sym__expression] = STATE(387),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [291] = {
    [sym__expression] = STATE(388),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [292] = {
    [sym__expression] = STATE(389),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [293] = {
    [sym__expression] = STATE(390),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [294] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(119),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [295] = {
    [sym_let_binding] = STATE(120),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [296] = {
    [sym__expression] = STATE(392),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [297] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(831),
    [sym_comment] = ACTIONS(26),
  },
  [298] = {
    [sym__expression] = STATE(399),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [299] = {
    [aux_sym_value_definition_repeat1] = STATE(402),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(843),
    [sym_comment] = ACTIONS(26),
  },
  [300] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(310),
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_val] = ACTIONS(661),
    [anon_sym_module] = ACTIONS(661),
    [anon_sym_type] = ACTIONS(661),
    [anon_sym_open] = ACTIONS(661),
    [anon_sym_include] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_number] = ACTIONS(661),
    [sym_string] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [301] = {
    [sym__expression] = STATE(403),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [302] = {
    [sym__expression] = STATE(404),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [303] = {
    [sym__expression] = STATE(405),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [304] = {
    [sym__expression] = STATE(406),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [305] = {
    [sym__expression] = STATE(315),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [306] = {
    [sym__expression] = STATE(407),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [307] = {
    [sym__expression] = STATE(408),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [308] = {
    [sym__expression] = STATE(409),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [309] = {
    [sym__expression] = STATE(410),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [310] = {
    [sym__expression] = STATE(205),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [aux_sym_call_expression_repeat1] = STATE(310),
    [ts_builtin_sym_end] = ACTIONS(847),
    [anon_sym_SEMI_SEMI] = ACTIONS(847),
    [anon_sym_val] = ACTIONS(849),
    [anon_sym_module] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_open] = ACTIONS(849),
    [anon_sym_include] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(851),
    [anon_sym_and] = ACTIONS(849),
    [anon_sym_let] = ACTIONS(854),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_lsl] = ACTIONS(849),
    [anon_sym_lsr] = ACTIONS(849),
    [anon_sym_asr] = ACTIONS(849),
    [anon_sym_mod] = ACTIONS(849),
    [anon_sym_land] = ACTIONS(849),
    [anon_sym_lor] = ACTIONS(849),
    [anon_sym_lxor] = ACTIONS(849),
    [anon_sym_BANG_EQ] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(849),
    [anon_sym_AMP_AMP] = ACTIONS(849),
    [sym__shift_operator] = ACTIONS(849),
    [sym__hash_operator] = ACTIONS(849),
    [sym__mult_operator] = ACTIONS(857),
    [sym__add_operator] = ACTIONS(849),
    [sym__concat_operator] = ACTIONS(849),
    [sym__rel_operator] = ACTIONS(857),
    [sym_identifier] = ACTIONS(859),
    [sym_number] = ACTIONS(862),
    [sym_string] = ACTIONS(865),
    [sym_comment] = ACTIONS(26),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_open] = ACTIONS(868),
    [anon_sym_include] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(868),
    [anon_sym_lor] = ACTIONS(868),
    [anon_sym_lxor] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_open] = ACTIONS(868),
    [anon_sym_include] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_open] = ACTIONS(868),
    [anon_sym_include] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [314] = {
    [ts_builtin_sym_end] = ACTIONS(874),
    [anon_sym_SEMI_SEMI] = ACTIONS(874),
    [anon_sym_val] = ACTIONS(874),
    [anon_sym_module] = ACTIONS(874),
    [anon_sym_type] = ACTIONS(874),
    [anon_sym_open] = ACTIONS(874),
    [anon_sym_include] = ACTIONS(874),
    [anon_sym_and] = ACTIONS(874),
    [anon_sym_let] = ACTIONS(874),
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(874),
    [anon_sym_lor] = ACTIONS(874),
    [anon_sym_lxor] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_comment] = ACTIONS(26),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(880),
    [anon_sym_SEMI_SEMI] = ACTIONS(880),
    [anon_sym_val] = ACTIONS(882),
    [anon_sym_module] = ACTIONS(882),
    [anon_sym_type] = ACTIONS(882),
    [anon_sym_open] = ACTIONS(882),
    [anon_sym_include] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_RPAREN] = ACTIONS(880),
    [anon_sym_and] = ACTIONS(882),
    [anon_sym_let] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_lsl] = ACTIONS(882),
    [anon_sym_lsr] = ACTIONS(882),
    [anon_sym_asr] = ACTIONS(882),
    [anon_sym_mod] = ACTIONS(882),
    [anon_sym_land] = ACTIONS(882),
    [anon_sym_lor] = ACTIONS(882),
    [anon_sym_lxor] = ACTIONS(882),
    [anon_sym_BANG_EQ] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AMP_AMP] = ACTIONS(882),
    [sym__shift_operator] = ACTIONS(882),
    [sym__hash_operator] = ACTIONS(882),
    [sym__mult_operator] = ACTIONS(884),
    [sym__add_operator] = ACTIONS(882),
    [sym__concat_operator] = ACTIONS(882),
    [sym__rel_operator] = ACTIONS(884),
    [sym_identifier] = ACTIONS(884),
    [sym_number] = ACTIONS(882),
    [sym_string] = ACTIONS(880),
    [sym_comment] = ACTIONS(26),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(886),
    [anon_sym_SEMI_SEMI] = ACTIONS(886),
    [anon_sym_val] = ACTIONS(886),
    [anon_sym_module] = ACTIONS(886),
    [anon_sym_type] = ACTIONS(886),
    [anon_sym_open] = ACTIONS(886),
    [anon_sym_include] = ACTIONS(886),
    [anon_sym_and] = ACTIONS(886),
    [anon_sym_let] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(886),
    [anon_sym_lor] = ACTIONS(886),
    [anon_sym_lxor] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(26),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(892),
    [anon_sym_SEMI_SEMI] = ACTIONS(892),
    [anon_sym_val] = ACTIONS(892),
    [anon_sym_module] = ACTIONS(892),
    [anon_sym_type] = ACTIONS(892),
    [anon_sym_open] = ACTIONS(892),
    [anon_sym_include] = ACTIONS(892),
    [anon_sym_and] = ACTIONS(892),
    [anon_sym_let] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(26),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(898),
    [anon_sym_SEMI_SEMI] = ACTIONS(898),
    [anon_sym_val] = ACTIONS(898),
    [anon_sym_module] = ACTIONS(898),
    [anon_sym_type] = ACTIONS(898),
    [anon_sym_open] = ACTIONS(898),
    [anon_sym_include] = ACTIONS(898),
    [anon_sym_and] = ACTIONS(898),
    [anon_sym_let] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(902),
    [sym_comment] = ACTIONS(26),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(904),
    [anon_sym_SEMI_SEMI] = ACTIONS(904),
    [anon_sym_val] = ACTIONS(904),
    [anon_sym_module] = ACTIONS(904),
    [anon_sym_type] = ACTIONS(904),
    [anon_sym_open] = ACTIONS(904),
    [anon_sym_include] = ACTIONS(904),
    [anon_sym_and] = ACTIONS(904),
    [anon_sym_let] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(908),
    [sym_comment] = ACTIONS(26),
  },
  [320] = {
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(671),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_RBRACE] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(673),
    [sym_comment] = ACTIONS(26),
  },
  [321] = {
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [anon_sym_SEMI] = ACTIONS(677),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(679),
    [sym_comment] = ACTIONS(26),
  },
  [322] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RBRACK] = ACTIONS(683),
    [anon_sym_DASH_GT] = ACTIONS(475),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [323] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [324] = {
    [sym__module_type] = STATE(411),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(283),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [325] = {
    [ts_builtin_sym_end] = ACTIONS(729),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_val] = ACTIONS(729),
    [anon_sym_module] = ACTIONS(729),
    [anon_sym_type] = ACTIONS(729),
    [anon_sym_open] = ACTIONS(729),
    [anon_sym_include] = ACTIONS(729),
    [anon_sym_let] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [326] = {
    [sym__type] = STATE(415),
    [sym_parenthesized_type] = STATE(416),
    [sym_function_type] = STATE(416),
    [sym_type_variable] = STATE(416),
    [sym_constructed_type] = STATE(416),
    [sym_qualified_type_identifier] = STATE(416),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_SQUOTE] = ACTIONS(912),
    [sym_identifier] = ACTIONS(914),
    [sym_comment] = ACTIONS(26),
  },
  [327] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
    [anon_sym_val] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [anon_sym_type] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(916),
    [anon_sym_open] = ACTIONS(149),
    [anon_sym_include] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(26),
  },
  [328] = {
    [sym__module_type] = STATE(421),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(26),
  },
  [329] = {
    [sym_module_parameter] = STATE(38),
    [aux_sym_module_specification_repeat1] = STATE(85),
    [anon_sym_COLON] = ACTIONS(922),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [330] = {
    [sym_record_declaration] = STATE(426),
    [sym__type] = STATE(427),
    [sym_parenthesized_type] = STATE(428),
    [sym_function_type] = STATE(428),
    [sym_type_variable] = STATE(428),
    [sym_constructed_type] = STATE(428),
    [sym_qualified_type_identifier] = STATE(428),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(26),
  },
  [331] = {
    [sym_identifier] = ACTIONS(930),
    [sym_comment] = ACTIONS(26),
  },
  [332] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(432),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_val] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(932),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [333] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_val] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_open] = ACTIONS(189),
    [anon_sym_include] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [334] = {
    [sym_type_constructor_definition] = STATE(99),
    [sym_type_parameters] = STATE(236),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(513),
    [sym_comment] = ACTIONS(26),
  },
  [335] = {
    [aux_sym_type_definition_repeat1] = STATE(434),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_val] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_open] = ACTIONS(195),
    [anon_sym_include] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [336] = {
    [sym_type_equation] = STATE(436),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(437),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [anon_sym_val] = ACTIONS(197),
    [anon_sym_module] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(934),
    [anon_sym_open] = ACTIONS(197),
    [anon_sym_include] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(26),
  },
  [337] = {
    [sym_identifier] = ACTIONS(936),
    [sym_comment] = ACTIONS(26),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(938),
    [anon_sym_SEMI_SEMI] = ACTIONS(938),
    [anon_sym_val] = ACTIONS(938),
    [anon_sym_module] = ACTIONS(938),
    [anon_sym_type] = ACTIONS(938),
    [anon_sym_EQ] = ACTIONS(938),
    [anon_sym_open] = ACTIONS(938),
    [anon_sym_include] = ACTIONS(938),
    [anon_sym_let] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(938),
    [anon_sym_DASH_GT] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(940),
    [anon_sym_SEMI_SEMI] = ACTIONS(940),
    [anon_sym_val] = ACTIONS(940),
    [anon_sym_module] = ACTIONS(940),
    [anon_sym_type] = ACTIONS(940),
    [anon_sym_open] = ACTIONS(940),
    [anon_sym_include] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_let] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(940),
    [anon_sym_end] = ACTIONS(940),
    [sym_comment] = ACTIONS(26),
  },
  [340] = {
    [sym__module_type] = STATE(440),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(942),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [341] = {
    [sym__module] = STATE(81),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(442),
    [anon_sym_functor] = ACTIONS(944),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(26),
  },
  [342] = {
    [sym_record_declaration] = STATE(446),
    [sym__type] = STATE(447),
    [sym_parenthesized_type] = STATE(448),
    [sym_function_type] = STATE(448),
    [sym_type_variable] = STATE(448),
    [sym_constructed_type] = STATE(448),
    [sym_qualified_type_identifier] = STATE(448),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(26),
  },
  [343] = {
    [sym_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(26),
  },
  [344] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(452),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(956),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [345] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
    [anon_sym_type] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(26),
  },
  [346] = {
    [sym_type_constructor_definition] = STATE(99),
    [sym_type_parameters] = STATE(249),
    [aux_sym_type_parameters_repeat1] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(34),
    [anon_sym_DASH] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_identifier] = ACTIONS(533),
    [sym_comment] = ACTIONS(26),
  },
  [347] = {
    [aux_sym_type_definition_repeat1] = STATE(454),
    [anon_sym_SEMI_SEMI] = ACTIONS(195),
    [anon_sym_module] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [348] = {
    [sym_type_equation] = STATE(456),
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(457),
    [anon_sym_SEMI_SEMI] = ACTIONS(197),
    [anon_sym_module] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(958),
    [anon_sym_and] = ACTIONS(197),
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(26),
  },
  [349] = {
    [aux_sym_value_definition_repeat1] = STATE(458),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(745),
    [anon_sym_let] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(26),
  },
  [350] = {
    [sym_labeled_parameter] = STATE(57),
    [sym_shorthand_labeled_parameter] = STATE(57),
    [sym__pattern] = STATE(58),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [aux_sym_let_binding_repeat1] = STATE(119),
    [anon_sym_EQ] = ACTIONS(960),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [351] = {
    [sym_let_binding] = STATE(120),
    [sym__pattern] = STATE(253),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(743),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [352] = {
    [aux_sym_value_definition_repeat1] = STATE(460),
    [anon_sym_SEMI_SEMI] = ACTIONS(217),
    [anon_sym_module] = ACTIONS(217),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(745),
    [anon_sym_let] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_end] = ACTIONS(217),
    [sym_comment] = ACTIONS(26),
  },
  [353] = {
    [sym__expression] = STATE(464),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [354] = {
    [anon_sym_DASH_GT] = ACTIONS(968),
    [sym_comment] = ACTIONS(26),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(970),
    [anon_sym_SEMI_SEMI] = ACTIONS(970),
    [anon_sym_val] = ACTIONS(970),
    [anon_sym_module] = ACTIONS(970),
    [anon_sym_type] = ACTIONS(970),
    [anon_sym_open] = ACTIONS(970),
    [anon_sym_include] = ACTIONS(970),
    [anon_sym_LPAREN] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(970),
    [anon_sym_let] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_end] = ACTIONS(970),
    [sym_comment] = ACTIONS(26),
  },
  [356] = {
    [anon_sym_DASH_GT] = ACTIONS(974),
    [sym_comment] = ACTIONS(26),
  },
  [357] = {
    [anon_sym_COLON] = ACTIONS(976),
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_DASH_GT] = ACTIONS(976),
    [sym_comment] = ACTIONS(26),
  },
  [358] = {
    [sym__module_type] = STATE(468),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(551),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [359] = {
    [sym__type] = STATE(469),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [360] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(980),
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_DASH_GT] = ACTIONS(982),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [361] = {
    [ts_builtin_sym_end] = ACTIONS(984),
    [anon_sym_SEMI_SEMI] = ACTIONS(984),
    [anon_sym_val] = ACTIONS(984),
    [anon_sym_module] = ACTIONS(984),
    [anon_sym_type] = ACTIONS(984),
    [anon_sym_open] = ACTIONS(984),
    [anon_sym_include] = ACTIONS(984),
    [anon_sym_and] = ACTIONS(984),
    [anon_sym_let] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(984),
    [anon_sym_constraint] = ACTIONS(984),
    [anon_sym_end] = ACTIONS(984),
    [sym_comment] = ACTIONS(26),
  },
  [362] = {
    [anon_sym_SEMI] = ACTIONS(986),
    [anon_sym_RBRACE] = ACTIONS(986),
    [sym_comment] = ACTIONS(26),
  },
  [363] = {
    [sym_field_declaration] = STATE(362),
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_mutable] = ACTIONS(340),
    [sym_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [364] = {
    [aux_sym_record_declaration_repeat1] = STATE(364),
    [anon_sym_SEMI] = ACTIONS(990),
    [anon_sym_RBRACE] = ACTIONS(986),
    [sym_comment] = ACTIONS(26),
  },
  [365] = {
    [sym__type] = STATE(473),
    [sym_parenthesized_type] = STATE(93),
    [sym_function_type] = STATE(93),
    [sym_type_variable] = STATE(93),
    [sym_constructed_type] = STATE(93),
    [sym_qualified_type_identifier] = STATE(93),
    [sym_qualified_identifier] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
  },
  [366] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(993),
    [anon_sym_SEMI_SEMI] = ACTIONS(993),
    [anon_sym_val] = ACTIONS(993),
    [anon_sym_module] = ACTIONS(993),
    [anon_sym_type] = ACTIONS(993),
    [anon_sym_open] = ACTIONS(993),
    [anon_sym_include] = ACTIONS(993),
    [anon_sym_and] = ACTIONS(993),
    [anon_sym_let] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_constraint] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [367] = {
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_let] = ACTIONS(825),
    [anon_sym_lsl] = ACTIONS(825),
    [anon_sym_lsr] = ACTIONS(825),
    [anon_sym_asr] = ACTIONS(825),
    [anon_sym_mod] = ACTIONS(825),
    [anon_sym_land] = ACTIONS(825),
    [anon_sym_lor] = ACTIONS(825),
    [anon_sym_lxor] = ACTIONS(825),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_AMP_AMP] = ACTIONS(825),
    [sym__shift_operator] = ACTIONS(825),
    [sym__hash_operator] = ACTIONS(825),
    [sym__mult_operator] = ACTIONS(827),
    [sym__add_operator] = ACTIONS(825),
    [sym__concat_operator] = ACTIONS(825),
    [sym__rel_operator] = ACTIONS(827),
    [sym_identifier] = ACTIONS(827),
    [sym_number] = ACTIONS(825),
    [sym_string] = ACTIONS(823),
    [sym_comment] = ACTIONS(26),
  },
  [368] = {
    [sym__expression] = STATE(474),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [369] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(995),
    [sym_comment] = ACTIONS(26),
  },
  [370] = {
    [aux_sym_value_definition_repeat1] = STATE(477),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(997),
    [sym_comment] = ACTIONS(26),
  },
  [371] = {
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_lsl] = ACTIONS(374),
    [anon_sym_lsr] = ACTIONS(374),
    [anon_sym_asr] = ACTIONS(374),
    [anon_sym_mod] = ACTIONS(374),
    [anon_sym_land] = ACTIONS(374),
    [anon_sym_lor] = ACTIONS(374),
    [anon_sym_lxor] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [sym__shift_operator] = ACTIONS(374),
    [sym__hash_operator] = ACTIONS(374),
    [sym__mult_operator] = ACTIONS(376),
    [sym__add_operator] = ACTIONS(374),
    [sym__concat_operator] = ACTIONS(374),
    [sym__rel_operator] = ACTIONS(376),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(374),
    [sym_string] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [372] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(382),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_number] = ACTIONS(661),
    [sym_string] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [373] = {
    [sym__expression] = STATE(478),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [374] = {
    [sym__expression] = STATE(479),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [375] = {
    [sym__expression] = STATE(480),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [376] = {
    [sym__expression] = STATE(481),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [377] = {
    [sym__expression] = STATE(482),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [378] = {
    [sym__expression] = STATE(483),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [379] = {
    [sym__expression] = STATE(484),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [380] = {
    [sym__expression] = STATE(485),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [381] = {
    [sym__expression] = STATE(486),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [382] = {
    [sym__expression] = STATE(281),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [aux_sym_call_expression_repeat1] = STATE(382),
    [anon_sym_LPAREN] = ACTIONS(999),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_let] = ACTIONS(1002),
    [anon_sym_lsl] = ACTIONS(849),
    [anon_sym_lsr] = ACTIONS(849),
    [anon_sym_asr] = ACTIONS(849),
    [anon_sym_mod] = ACTIONS(849),
    [anon_sym_land] = ACTIONS(849),
    [anon_sym_lor] = ACTIONS(849),
    [anon_sym_lxor] = ACTIONS(849),
    [anon_sym_BANG_EQ] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(849),
    [anon_sym_AMP_AMP] = ACTIONS(849),
    [sym__shift_operator] = ACTIONS(849),
    [sym__hash_operator] = ACTIONS(849),
    [sym__mult_operator] = ACTIONS(857),
    [sym__add_operator] = ACTIONS(849),
    [sym__concat_operator] = ACTIONS(849),
    [sym__rel_operator] = ACTIONS(857),
    [sym_identifier] = ACTIONS(1005),
    [sym_number] = ACTIONS(1008),
    [sym_string] = ACTIONS(1011),
    [sym_comment] = ACTIONS(26),
  },
  [383] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(868),
    [anon_sym_land] = ACTIONS(868),
    [anon_sym_lor] = ACTIONS(868),
    [anon_sym_lxor] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [384] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [386] = {
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(874),
    [anon_sym_land] = ACTIONS(874),
    [anon_sym_lor] = ACTIONS(874),
    [anon_sym_lxor] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_comment] = ACTIONS(26),
  },
  [387] = {
    [anon_sym_RPAREN] = ACTIONS(886),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(886),
    [anon_sym_land] = ACTIONS(886),
    [anon_sym_lor] = ACTIONS(886),
    [anon_sym_lxor] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(26),
  },
  [388] = {
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(26),
  },
  [389] = {
    [anon_sym_RPAREN] = ACTIONS(898),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(902),
    [sym_comment] = ACTIONS(26),
  },
  [390] = {
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(908),
    [sym_comment] = ACTIONS(26),
  },
  [391] = {
    [sym__expression] = STATE(487),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [392] = {
    [ts_builtin_sym_end] = ACTIONS(1014),
    [anon_sym_SEMI_SEMI] = ACTIONS(1014),
    [anon_sym_val] = ACTIONS(1014),
    [anon_sym_module] = ACTIONS(1014),
    [anon_sym_type] = ACTIONS(1014),
    [anon_sym_open] = ACTIONS(1014),
    [anon_sym_include] = ACTIONS(1014),
    [anon_sym_and] = ACTIONS(1014),
    [anon_sym_let] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [393] = {
    [sym__expression] = STATE(488),
    [sym_qualified_identifier] = STATE(124),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [394] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(1016),
    [anon_sym_in] = ACTIONS(415),
    [sym_comment] = ACTIONS(26),
  },
  [395] = {
    [sym__expression] = STATE(489),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [396] = {
    [sym_let_binding] = STATE(490),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [397] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(497),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(1021),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [398] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [anon_sym_and] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_in] = ACTIONS(430),
    [anon_sym_lsl] = ACTIONS(430),
    [anon_sym_lsr] = ACTIONS(430),
    [anon_sym_asr] = ACTIONS(430),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(430),
    [anon_sym_lor] = ACTIONS(430),
    [anon_sym_lxor] = ACTIONS(430),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_comment] = ACTIONS(26),
  },
  [399] = {
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_in] = ACTIONS(438),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(26),
  },
  [400] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(497),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(1019),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [401] = {
    [sym__expression] = STATE(507),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [402] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1047),
    [sym_comment] = ACTIONS(26),
  },
  [403] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(870),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_open] = ACTIONS(870),
    [anon_sym_include] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(870),
    [anon_sym_lor] = ACTIONS(870),
    [anon_sym_lxor] = ACTIONS(870),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [404] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(870),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_open] = ACTIONS(870),
    [anon_sym_include] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [405] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_val] = ACTIONS(870),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_open] = ACTIONS(870),
    [anon_sym_include] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(655),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [406] = {
    [ts_builtin_sym_end] = ACTIONS(874),
    [anon_sym_SEMI_SEMI] = ACTIONS(874),
    [anon_sym_val] = ACTIONS(876),
    [anon_sym_module] = ACTIONS(876),
    [anon_sym_type] = ACTIONS(876),
    [anon_sym_open] = ACTIONS(876),
    [anon_sym_include] = ACTIONS(876),
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_and] = ACTIONS(876),
    [anon_sym_let] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(876),
    [anon_sym_lor] = ACTIONS(876),
    [anon_sym_lxor] = ACTIONS(876),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_identifier] = ACTIONS(878),
    [sym_number] = ACTIONS(876),
    [sym_string] = ACTIONS(874),
    [sym_comment] = ACTIONS(26),
  },
  [407] = {
    [ts_builtin_sym_end] = ACTIONS(886),
    [anon_sym_SEMI_SEMI] = ACTIONS(886),
    [anon_sym_val] = ACTIONS(888),
    [anon_sym_module] = ACTIONS(888),
    [anon_sym_type] = ACTIONS(888),
    [anon_sym_open] = ACTIONS(888),
    [anon_sym_include] = ACTIONS(888),
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_and] = ACTIONS(888),
    [anon_sym_let] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(888),
    [anon_sym_lor] = ACTIONS(888),
    [anon_sym_lxor] = ACTIONS(888),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [sym_number] = ACTIONS(888),
    [sym_string] = ACTIONS(886),
    [sym_comment] = ACTIONS(26),
  },
  [408] = {
    [ts_builtin_sym_end] = ACTIONS(892),
    [anon_sym_SEMI_SEMI] = ACTIONS(892),
    [anon_sym_val] = ACTIONS(894),
    [anon_sym_module] = ACTIONS(894),
    [anon_sym_type] = ACTIONS(894),
    [anon_sym_open] = ACTIONS(894),
    [anon_sym_include] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_and] = ACTIONS(894),
    [anon_sym_let] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [sym_number] = ACTIONS(894),
    [sym_string] = ACTIONS(892),
    [sym_comment] = ACTIONS(26),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(898),
    [anon_sym_SEMI_SEMI] = ACTIONS(898),
    [anon_sym_val] = ACTIONS(900),
    [anon_sym_module] = ACTIONS(900),
    [anon_sym_type] = ACTIONS(900),
    [anon_sym_open] = ACTIONS(900),
    [anon_sym_include] = ACTIONS(900),
    [anon_sym_LPAREN] = ACTIONS(900),
    [anon_sym_and] = ACTIONS(900),
    [anon_sym_let] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(902),
    [sym_identifier] = ACTIONS(902),
    [sym_number] = ACTIONS(900),
    [sym_string] = ACTIONS(898),
    [sym_comment] = ACTIONS(26),
  },
  [410] = {
    [ts_builtin_sym_end] = ACTIONS(904),
    [anon_sym_SEMI_SEMI] = ACTIONS(904),
    [anon_sym_val] = ACTIONS(906),
    [anon_sym_module] = ACTIONS(906),
    [anon_sym_type] = ACTIONS(906),
    [anon_sym_open] = ACTIONS(906),
    [anon_sym_include] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_and] = ACTIONS(906),
    [anon_sym_let] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(908),
    [sym_identifier] = ACTIONS(908),
    [sym_number] = ACTIONS(906),
    [sym_string] = ACTIONS(904),
    [sym_comment] = ACTIONS(26),
  },
  [411] = {
    [ts_builtin_sym_end] = ACTIONS(938),
    [anon_sym_SEMI_SEMI] = ACTIONS(938),
    [anon_sym_val] = ACTIONS(938),
    [anon_sym_module] = ACTIONS(938),
    [anon_sym_type] = ACTIONS(938),
    [anon_sym_open] = ACTIONS(938),
    [anon_sym_include] = ACTIONS(938),
    [anon_sym_let] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(938),
    [anon_sym_DASH_GT] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [412] = {
    [sym__type] = STATE(509),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [413] = {
    [sym_identifier] = ACTIONS(1049),
    [sym_comment] = ACTIONS(26),
  },
  [414] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_val] = ACTIONS(263),
    [anon_sym_module] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_open] = ACTIONS(263),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(1051),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [415] = {
    [sym_qualified_type_identifier] = STATE(514),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(269),
    [anon_sym_val] = ACTIONS(271),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(271),
    [anon_sym_open] = ACTIONS(271),
    [anon_sym_include] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_end] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(1053),
    [sym_identifier] = ACTIONS(1055),
    [sym_comment] = ACTIONS(26),
  },
  [416] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(26),
  },
  [417] = {
    [anon_sym_DOT] = ACTIONS(1051),
    [sym_comment] = ACTIONS(26),
  },
  [418] = {
    [sym__module_type] = STATE(515),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(26),
  },
  [419] = {
    [sym_module_parameter] = STATE(516),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [420] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_val] = ACTIONS(297),
    [anon_sym_module] = ACTIONS(297),
    [anon_sym_type] = ACTIONS(297),
    [anon_sym_open] = ACTIONS(297),
    [anon_sym_include] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_end] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(1051),
    [sym_comment] = ACTIONS(26),
  },
  [421] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_val] = ACTIONS(299),
    [anon_sym_module] = ACTIONS(299),
    [anon_sym_type] = ACTIONS(299),
    [anon_sym_open] = ACTIONS(299),
    [anon_sym_include] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_end] = ACTIONS(299),
    [anon_sym_DASH_GT] = ACTIONS(1057),
    [sym_comment] = ACTIONS(26),
  },
  [422] = {
    [sym__module_type] = STATE(518),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(26),
  },
  [423] = {
    [sym__type] = STATE(519),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [424] = {
    [sym_identifier] = ACTIONS(1059),
    [sym_comment] = ACTIONS(26),
  },
  [425] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_val] = ACTIONS(263),
    [anon_sym_module] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_open] = ACTIONS(263),
    [anon_sym_include] = ACTIONS(263),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_constraint] = ACTIONS(263),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [426] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(522),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_val] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_open] = ACTIONS(346),
    [anon_sym_include] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [427] = {
    [sym_qualified_type_identifier] = STATE(525),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(348),
    [anon_sym_val] = ACTIONS(350),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_open] = ACTIONS(350),
    [anon_sym_include] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_constraint] = ACTIONS(350),
    [anon_sym_end] = ACTIONS(350),
    [anon_sym_DASH_GT] = ACTIONS(1063),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(26),
  },
  [428] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_val] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_open] = ACTIONS(279),
    [anon_sym_include] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_constraint] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(26),
  },
  [429] = {
    [anon_sym_DOT] = ACTIONS(1061),
    [sym_comment] = ACTIONS(26),
  },
  [430] = {
    [anon_sym_EQ] = ACTIONS(1067),
    [sym_comment] = ACTIONS(26),
  },
  [431] = {
    [sym_record_declaration] = STATE(527),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [432] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_val] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_open] = ACTIONS(346),
    [anon_sym_include] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [433] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(358),
    [anon_sym_val] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [anon_sym_open] = ACTIONS(358),
    [anon_sym_include] = ACTIONS(358),
    [anon_sym_and] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_constraint] = ACTIONS(1069),
    [anon_sym_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [434] = {
    [aux_sym_type_definition_repeat1] = STATE(434),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_val] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_type] = ACTIONS(363),
    [anon_sym_open] = ACTIONS(363),
    [anon_sym_include] = ACTIONS(363),
    [anon_sym_and] = ACTIONS(1072),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [sym_comment] = ACTIONS(26),
  },
  [435] = {
    [sym_record_declaration] = STATE(528),
    [sym__type] = STATE(427),
    [sym_parenthesized_type] = STATE(428),
    [sym_function_type] = STATE(428),
    [sym_type_variable] = STATE(428),
    [sym_constructed_type] = STATE(428),
    [sym_qualified_type_identifier] = STATE(428),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(26),
  },
  [436] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(530),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_val] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(1075),
    [anon_sym_open] = ACTIONS(368),
    [anon_sym_include] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
  },
  [437] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_val] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_open] = ACTIONS(368),
    [anon_sym_include] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
  },
  [438] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(372),
    [anon_sym_val] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_type] = ACTIONS(372),
    [anon_sym_open] = ACTIONS(372),
    [anon_sym_include] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_end] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [439] = {
    [sym_module_parameter] = STATE(531),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [440] = {
    [anon_sym_EQ] = ACTIONS(1077),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym_comment] = ACTIONS(26),
  },
  [441] = {
    [sym_module_parameter] = STATE(534),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [442] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_end] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(703),
    [sym_comment] = ACTIONS(26),
  },
  [443] = {
    [sym__type] = STATE(535),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [444] = {
    [sym_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(26),
  },
  [445] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(261),
    [anon_sym_module] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_let] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_constraint] = ACTIONS(263),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_DASH_GT] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(1083),
    [sym_identifier] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [446] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(538),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_let] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [447] = {
    [sym_qualified_type_identifier] = STATE(541),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_SEMI_SEMI] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_and] = ACTIONS(350),
    [anon_sym_let] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_constraint] = ACTIONS(350),
    [anon_sym_end] = ACTIONS(350),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [sym_identifier] = ACTIONS(1087),
    [sym_comment] = ACTIONS(26),
  },
  [448] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_module] = ACTIONS(279),
    [anon_sym_type] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_let] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_constraint] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(26),
  },
  [449] = {
    [anon_sym_DOT] = ACTIONS(1083),
    [sym_comment] = ACTIONS(26),
  },
  [450] = {
    [anon_sym_EQ] = ACTIONS(1089),
    [sym_comment] = ACTIONS(26),
  },
  [451] = {
    [sym_record_declaration] = STATE(543),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [452] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_let] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [453] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [anon_sym_and] = ACTIONS(358),
    [anon_sym_let] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_constraint] = ACTIONS(1091),
    [anon_sym_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [454] = {
    [aux_sym_type_definition_repeat1] = STATE(454),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_type] = ACTIONS(363),
    [anon_sym_and] = ACTIONS(1094),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [sym_comment] = ACTIONS(26),
  },
  [455] = {
    [sym_record_declaration] = STATE(544),
    [sym__type] = STATE(447),
    [sym_parenthesized_type] = STATE(448),
    [sym_function_type] = STATE(448),
    [sym_type_variable] = STATE(448),
    [sym_constructed_type] = STATE(448),
    [sym_qualified_type_identifier] = STATE(448),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(26),
  },
  [456] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(546),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(1097),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_let] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
  },
  [457] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_and] = ACTIONS(368),
    [anon_sym_let] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
  },
  [458] = {
    [aux_sym_value_definition_repeat1] = STATE(460),
    [anon_sym_SEMI_SEMI] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_type] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(745),
    [anon_sym_let] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_end] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
  },
  [459] = {
    [sym__expression] = STATE(547),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [460] = {
    [aux_sym_value_definition_repeat1] = STATE(460),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [anon_sym_module] = ACTIONS(415),
    [anon_sym_type] = ACTIONS(415),
    [anon_sym_and] = ACTIONS(1099),
    [anon_sym_let] = ACTIONS(415),
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_end] = ACTIONS(415),
    [sym_comment] = ACTIONS(26),
  },
  [461] = {
    [sym__expression] = STATE(548),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [462] = {
    [sym_let_binding] = STATE(549),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [463] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(556),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(1102),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [464] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [anon_sym_and] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(1114),
    [anon_sym_AMP] = ACTIONS(1116),
    [anon_sym_AMP_AMP] = ACTIONS(1116),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(1128),
    [sym_comment] = ACTIONS(26),
  },
  [465] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(556),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [466] = {
    [sym__module] = STATE(339),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(80),
    [anon_sym_functor] = ACTIONS(549),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(26),
  },
  [467] = {
    [sym__module_type] = STATE(566),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(551),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [468] = {
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [469] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(1130),
    [anon_sym_RBRACE] = ACTIONS(1130),
    [anon_sym_DASH_GT] = ACTIONS(982),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [470] = {
    [sym__type] = STATE(567),
    [sym_parenthesized_type] = STATE(135),
    [sym_function_type] = STATE(135),
    [sym_type_variable] = STATE(135),
    [sym_constructed_type] = STATE(135),
    [sym_qualified_type_identifier] = STATE(135),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_identifier] = ACTIONS(257),
    [sym_comment] = ACTIONS(26),
  },
  [471] = {
    [ts_builtin_sym_end] = ACTIONS(1132),
    [anon_sym_SEMI_SEMI] = ACTIONS(1132),
    [anon_sym_val] = ACTIONS(1132),
    [anon_sym_module] = ACTIONS(1132),
    [anon_sym_type] = ACTIONS(1132),
    [anon_sym_open] = ACTIONS(1132),
    [anon_sym_include] = ACTIONS(1132),
    [anon_sym_and] = ACTIONS(1132),
    [anon_sym_let] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_constraint] = ACTIONS(1132),
    [anon_sym_end] = ACTIONS(1132),
    [sym_comment] = ACTIONS(26),
  },
  [472] = {
    [sym_field_declaration] = STATE(362),
    [anon_sym_mutable] = ACTIONS(340),
    [sym_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [473] = {
    [sym_qualified_type_identifier] = STATE(177),
    [sym_qualified_identifier] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(785),
    [sym_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [474] = {
    [anon_sym_RPAREN] = ACTIONS(1014),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [475] = {
    [sym__expression] = STATE(568),
    [sym_qualified_identifier] = STATE(197),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(199),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [476] = {
    [sym__expression] = STATE(569),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [477] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1134),
    [sym_comment] = ACTIONS(26),
  },
  [478] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(870),
    [anon_sym_lor] = ACTIONS(870),
    [anon_sym_lxor] = ACTIONS(870),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [479] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [480] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(821),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [481] = {
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_let] = ACTIONS(876),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(876),
    [anon_sym_lor] = ACTIONS(876),
    [anon_sym_lxor] = ACTIONS(876),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_identifier] = ACTIONS(878),
    [sym_number] = ACTIONS(876),
    [sym_string] = ACTIONS(874),
    [sym_comment] = ACTIONS(26),
  },
  [482] = {
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_RPAREN] = ACTIONS(880),
    [anon_sym_let] = ACTIONS(882),
    [anon_sym_lsl] = ACTIONS(882),
    [anon_sym_lsr] = ACTIONS(882),
    [anon_sym_asr] = ACTIONS(882),
    [anon_sym_mod] = ACTIONS(882),
    [anon_sym_land] = ACTIONS(882),
    [anon_sym_lor] = ACTIONS(882),
    [anon_sym_lxor] = ACTIONS(882),
    [anon_sym_BANG_EQ] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AMP_AMP] = ACTIONS(882),
    [sym__shift_operator] = ACTIONS(882),
    [sym__hash_operator] = ACTIONS(882),
    [sym__mult_operator] = ACTIONS(884),
    [sym__add_operator] = ACTIONS(882),
    [sym__concat_operator] = ACTIONS(882),
    [sym__rel_operator] = ACTIONS(884),
    [sym_identifier] = ACTIONS(884),
    [sym_number] = ACTIONS(882),
    [sym_string] = ACTIONS(880),
    [sym_comment] = ACTIONS(26),
  },
  [483] = {
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_RPAREN] = ACTIONS(886),
    [anon_sym_let] = ACTIONS(888),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(888),
    [anon_sym_lor] = ACTIONS(888),
    [anon_sym_lxor] = ACTIONS(888),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [sym_number] = ACTIONS(888),
    [sym_string] = ACTIONS(886),
    [sym_comment] = ACTIONS(26),
  },
  [484] = {
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_let] = ACTIONS(894),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [sym_number] = ACTIONS(894),
    [sym_string] = ACTIONS(892),
    [sym_comment] = ACTIONS(26),
  },
  [485] = {
    [anon_sym_LPAREN] = ACTIONS(900),
    [anon_sym_RPAREN] = ACTIONS(898),
    [anon_sym_let] = ACTIONS(900),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(902),
    [sym_identifier] = ACTIONS(902),
    [sym_number] = ACTIONS(900),
    [sym_string] = ACTIONS(898),
    [sym_comment] = ACTIONS(26),
  },
  [486] = {
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_let] = ACTIONS(906),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(908),
    [sym_identifier] = ACTIONS(908),
    [sym_number] = ACTIONS(906),
    [sym_string] = ACTIONS(904),
    [sym_comment] = ACTIONS(26),
  },
  [487] = {
    [anon_sym_and] = ACTIONS(597),
    [anon_sym_in] = ACTIONS(597),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(26),
  },
  [488] = {
    [ts_builtin_sym_end] = ACTIONS(1136),
    [anon_sym_SEMI_SEMI] = ACTIONS(1136),
    [anon_sym_val] = ACTIONS(1136),
    [anon_sym_module] = ACTIONS(1136),
    [anon_sym_type] = ACTIONS(1136),
    [anon_sym_open] = ACTIONS(1136),
    [anon_sym_include] = ACTIONS(1136),
    [anon_sym_and] = ACTIONS(1136),
    [anon_sym_let] = ACTIONS(1136),
    [anon_sym_LBRACK] = ACTIONS(1136),
    [anon_sym_lsl] = ACTIONS(440),
    [anon_sym_lsr] = ACTIONS(440),
    [anon_sym_asr] = ACTIONS(440),
    [anon_sym_mod] = ACTIONS(442),
    [anon_sym_land] = ACTIONS(440),
    [anon_sym_lor] = ACTIONS(440),
    [anon_sym_lxor] = ACTIONS(440),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_AMP_AMP] = ACTIONS(446),
    [sym__shift_operator] = ACTIONS(448),
    [sym__hash_operator] = ACTIONS(450),
    [sym__mult_operator] = ACTIONS(452),
    [sym__add_operator] = ACTIONS(454),
    [sym__concat_operator] = ACTIONS(456),
    [sym__rel_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [489] = {
    [anon_sym_RPAREN] = ACTIONS(1138),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [490] = {
    [aux_sym_value_definition_repeat1] = STATE(573),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1140),
    [sym_comment] = ACTIONS(26),
  },
  [491] = {
    [sym_let_binding] = STATE(574),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [492] = {
    [sym_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(26),
  },
  [493] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(576),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(1021),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [494] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [495] = {
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_and] = ACTIONS(637),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_in] = ACTIONS(637),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(1146),
    [anon_sym_AMP] = ACTIONS(1148),
    [anon_sym_AMP_AMP] = ACTIONS(1148),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(657),
    [sym_number] = ACTIONS(637),
    [sym_string] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [496] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(576),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [497] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(586),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(1019),
    [anon_sym_in] = ACTIONS(661),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [498] = {
    [sym__expression] = STATE(587),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [499] = {
    [sym__expression] = STATE(588),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [500] = {
    [sym__expression] = STATE(589),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [501] = {
    [sym__expression] = STATE(590),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [502] = {
    [sym__expression] = STATE(591),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [503] = {
    [sym__expression] = STATE(592),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [504] = {
    [sym__expression] = STATE(593),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [505] = {
    [sym__expression] = STATE(594),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [506] = {
    [sym__expression] = STATE(595),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [507] = {
    [ts_builtin_sym_end] = ACTIONS(1014),
    [anon_sym_SEMI_SEMI] = ACTIONS(1014),
    [anon_sym_val] = ACTIONS(1162),
    [anon_sym_module] = ACTIONS(1162),
    [anon_sym_type] = ACTIONS(1162),
    [anon_sym_open] = ACTIONS(1162),
    [anon_sym_include] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_and] = ACTIONS(1162),
    [anon_sym_let] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(655),
    [sym_identifier] = ACTIONS(1164),
    [sym_number] = ACTIONS(1162),
    [sym_string] = ACTIONS(1014),
    [sym_comment] = ACTIONS(26),
  },
  [508] = {
    [sym__expression] = STATE(596),
    [sym_qualified_identifier] = STATE(204),
    [sym_let_expression] = STATE(125),
    [sym_call_expression] = STATE(125),
    [sym_infix_expression] = STATE(125),
    [sym_parenthesized_expression] = STATE(206),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(845),
    [sym_identifier] = ACTIONS(436),
    [sym_number] = ACTIONS(245),
    [sym_string] = ACTIONS(247),
    [sym_comment] = ACTIONS(26),
  },
  [509] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(1166),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [510] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_val] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_open] = ACTIONS(485),
    [anon_sym_include] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [511] = {
    [sym_identifier] = ACTIONS(1168),
    [sym_comment] = ACTIONS(26),
  },
  [512] = {
    [sym__type] = STATE(599),
    [sym_parenthesized_type] = STATE(416),
    [sym_function_type] = STATE(416),
    [sym_type_variable] = STATE(416),
    [sym_constructed_type] = STATE(416),
    [sym_qualified_type_identifier] = STATE(416),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_LPAREN] = ACTIONS(910),
    [anon_sym_SQUOTE] = ACTIONS(912),
    [sym_identifier] = ACTIONS(914),
    [sym_comment] = ACTIONS(26),
  },
  [513] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_val] = ACTIONS(493),
    [anon_sym_module] = ACTIONS(493),
    [anon_sym_type] = ACTIONS(493),
    [anon_sym_open] = ACTIONS(493),
    [anon_sym_include] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_end] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(1051),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(26),
  },
  [514] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_val] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_include] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [515] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(503),
    [anon_sym_val] = ACTIONS(503),
    [anon_sym_module] = ACTIONS(503),
    [anon_sym_type] = ACTIONS(503),
    [anon_sym_open] = ACTIONS(503),
    [anon_sym_include] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(503),
    [anon_sym_DASH_GT] = ACTIONS(1057),
    [sym_comment] = ACTIONS(26),
  },
  [516] = {
    [anon_sym_DASH_GT] = ACTIONS(1170),
    [sym_comment] = ACTIONS(26),
  },
  [517] = {
    [sym__module_type] = STATE(601),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(26),
  },
  [518] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(553),
    [anon_sym_val] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(553),
    [anon_sym_type] = ACTIONS(553),
    [anon_sym_open] = ACTIONS(553),
    [anon_sym_include] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_end] = ACTIONS(553),
    [anon_sym_DASH_GT] = ACTIONS(1057),
    [sym_comment] = ACTIONS(26),
  },
  [519] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [520] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_val] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_open] = ACTIONS(485),
    [anon_sym_include] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_constraint] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [521] = {
    [sym_identifier] = ACTIONS(1174),
    [sym_comment] = ACTIONS(26),
  },
  [522] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_val] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_open] = ACTIONS(569),
    [anon_sym_include] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(569),
    [sym_comment] = ACTIONS(26),
  },
  [523] = {
    [sym__type] = STATE(604),
    [sym_parenthesized_type] = STATE(428),
    [sym_function_type] = STATE(428),
    [sym_type_variable] = STATE(428),
    [sym_constructed_type] = STATE(428),
    [sym_qualified_type_identifier] = STATE(428),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(26),
  },
  [524] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_val] = ACTIONS(493),
    [anon_sym_module] = ACTIONS(493),
    [anon_sym_type] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_open] = ACTIONS(493),
    [anon_sym_include] = ACTIONS(493),
    [anon_sym_and] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_constraint] = ACTIONS(493),
    [anon_sym_end] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(26),
  },
  [525] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_val] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_open] = ACTIONS(499),
    [anon_sym_include] = ACTIONS(499),
    [anon_sym_and] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_constraint] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [526] = {
    [sym__type] = STATE(605),
    [sym_parenthesized_type] = STATE(428),
    [sym_function_type] = STATE(428),
    [sym_type_variable] = STATE(428),
    [sym_constructed_type] = STATE(428),
    [sym_qualified_type_identifier] = STATE(428),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(26),
  },
  [527] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(606),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_val] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_open] = ACTIONS(569),
    [anon_sym_include] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(569),
    [sym_comment] = ACTIONS(26),
  },
  [528] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(607),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_val] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_open] = ACTIONS(571),
    [anon_sym_include] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [529] = {
    [sym_record_declaration] = STATE(608),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [530] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_val] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_open] = ACTIONS(571),
    [anon_sym_include] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [531] = {
    [anon_sym_DASH_GT] = ACTIONS(1176),
    [sym_comment] = ACTIONS(26),
  },
  [532] = {
    [sym__module] = STATE(243),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(442),
    [anon_sym_functor] = ACTIONS(944),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(26),
  },
  [533] = {
    [sym__module_type] = STATE(610),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(942),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [534] = {
    [anon_sym_DASH_GT] = ACTIONS(1178),
    [sym_comment] = ACTIONS(26),
  },
  [535] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(481),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [536] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_constraint] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_DASH_GT] = ACTIONS(483),
    [sym_identifier] = ACTIONS(487),
    [sym_comment] = ACTIONS(26),
  },
  [537] = {
    [sym_identifier] = ACTIONS(1182),
    [sym_comment] = ACTIONS(26),
  },
  [538] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_let] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(569),
    [sym_comment] = ACTIONS(26),
  },
  [539] = {
    [sym__type] = STATE(614),
    [sym_parenthesized_type] = STATE(448),
    [sym_function_type] = STATE(448),
    [sym_type_variable] = STATE(448),
    [sym_constructed_type] = STATE(448),
    [sym_qualified_type_identifier] = STATE(448),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [sym_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(26),
  },
  [540] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_module] = ACTIONS(493),
    [anon_sym_type] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_and] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_constraint] = ACTIONS(493),
    [anon_sym_end] = ACTIONS(493),
    [anon_sym_DASH_GT] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(1083),
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(26),
  },
  [541] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(499),
    [anon_sym_type] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_and] = ACTIONS(499),
    [anon_sym_let] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_constraint] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [sym_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [542] = {
    [sym__type] = STATE(615),
    [sym_parenthesized_type] = STATE(448),
    [sym_function_type] = STATE(448),
    [sym_type_variable] = STATE(448),
    [sym_constructed_type] = STATE(448),
    [sym_qualified_type_identifier] = STATE(448),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [sym_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(26),
  },
  [543] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(616),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_and] = ACTIONS(569),
    [anon_sym_let] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(569),
    [sym_comment] = ACTIONS(26),
  },
  [544] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [545] = {
    [sym_record_declaration] = STATE(618),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(26),
  },
  [546] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_and] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [547] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_module] = ACTIONS(597),
    [anon_sym_type] = ACTIONS(597),
    [anon_sym_and] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_end] = ACTIONS(597),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(1114),
    [anon_sym_AMP] = ACTIONS(1116),
    [anon_sym_AMP_AMP] = ACTIONS(1116),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(1128),
    [sym_comment] = ACTIONS(26),
  },
  [548] = {
    [anon_sym_RPAREN] = ACTIONS(1184),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [549] = {
    [aux_sym_value_definition_repeat1] = STATE(621),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1186),
    [sym_comment] = ACTIONS(26),
  },
  [550] = {
    [sym_let_binding] = STATE(622),
    [sym__pattern] = STATE(202),
    [sym_record_pattern] = STATE(27),
    [sym_type_pattern] = STATE(27),
    [sym_tuple_pattern] = STATE(27),
    [sym_parenthesized_pattern] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_identifier] = ACTIONS(428),
    [sym_number] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [551] = {
    [sym_identifier] = ACTIONS(1188),
    [sym_comment] = ACTIONS(26),
  },
  [552] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(624),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(1102),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [553] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [554] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(635),
    [anon_sym_module] = ACTIONS(637),
    [anon_sym_type] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_and] = ACTIONS(637),
    [anon_sym_let] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_end] = ACTIONS(637),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(1192),
    [anon_sym_AMP] = ACTIONS(1194),
    [anon_sym_AMP_AMP] = ACTIONS(1194),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(1206),
    [sym_identifier] = ACTIONS(657),
    [sym_number] = ACTIONS(637),
    [sym_string] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [555] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(624),
    [anon_sym_SEMI_SEMI] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_end] = ACTIONS(432),
    [anon_sym_lsl] = ACTIONS(432),
    [anon_sym_lsr] = ACTIONS(432),
    [anon_sym_asr] = ACTIONS(432),
    [anon_sym_mod] = ACTIONS(432),
    [anon_sym_land] = ACTIONS(432),
    [anon_sym_lor] = ACTIONS(432),
    [anon_sym_lxor] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [sym__shift_operator] = ACTIONS(432),
    [sym__hash_operator] = ACTIONS(432),
    [sym__mult_operator] = ACTIONS(434),
    [sym__add_operator] = ACTIONS(432),
    [sym__concat_operator] = ACTIONS(432),
    [sym__rel_operator] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
  },
  [556] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(634),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_module] = ACTIONS(661),
    [anon_sym_type] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_end] = ACTIONS(661),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [557] = {
    [sym__expression] = STATE(635),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [558] = {
    [sym__expression] = STATE(636),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [559] = {
    [sym__expression] = STATE(637),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [560] = {
    [sym__expression] = STATE(638),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [561] = {
    [sym__expression] = STATE(591),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [562] = {
    [sym__expression] = STATE(639),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [563] = {
    [sym__expression] = STATE(640),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [564] = {
    [sym__expression] = STATE(641),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [565] = {
    [sym__expression] = STATE(642),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [566] = {
    [anon_sym_RPAREN] = ACTIONS(938),
    [anon_sym_DASH_GT] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [567] = {
    [sym_qualified_type_identifier] = STATE(224),
    [sym_qualified_identifier] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_DASH_GT] = ACTIONS(982),
    [sym_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
  },
  [568] = {
    [anon_sym_RPAREN] = ACTIONS(1136),
    [anon_sym_lsl] = ACTIONS(611),
    [anon_sym_lsr] = ACTIONS(611),
    [anon_sym_asr] = ACTIONS(611),
    [anon_sym_mod] = ACTIONS(611),
    [anon_sym_land] = ACTIONS(611),
    [anon_sym_lor] = ACTIONS(611),
    [anon_sym_lxor] = ACTIONS(611),
    [anon_sym_BANG_EQ] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [sym__shift_operator] = ACTIONS(617),
    [sym__hash_operator] = ACTIONS(619),
    [sym__mult_operator] = ACTIONS(621),
    [sym__add_operator] = ACTIONS(623),
    [sym__concat_operator] = ACTIONS(625),
    [sym__rel_operator] = ACTIONS(627),
    [sym_comment] = ACTIONS(26),
  },
  [569] = {
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [anon_sym_let] = ACTIONS(1162),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(821),
    [sym_identifier] = ACTIONS(1164),
    [sym_number] = ACTIONS(1162),
    [sym_string] = ACTIONS(1014),
    [sym_comment] = ACTIONS(26),
  },
  [570] = {
    [sym__expression] = STATE(643),
    [sym_qualified_identifier] = STATE(279),
    [sym_let_expression] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym_infix_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(282),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(599),
    [sym_identifier] = ACTIONS(603),
    [sym_number] = ACTIONS(605),
    [sym_string] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [571] = {
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_and] = ACTIONS(825),
    [anon_sym_let] = ACTIONS(825),
    [anon_sym_in] = ACTIONS(825),
    [anon_sym_lsl] = ACTIONS(825),
    [anon_sym_lsr] = ACTIONS(825),
    [anon_sym_asr] = ACTIONS(825),
    [anon_sym_mod] = ACTIONS(825),
    [anon_sym_land] = ACTIONS(825),
    [anon_sym_lor] = ACTIONS(825),
    [anon_sym_lxor] = ACTIONS(825),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_AMP_AMP] = ACTIONS(825),
    [sym__shift_operator] = ACTIONS(825),
    [sym__hash_operator] = ACTIONS(825),
    [sym__mult_operator] = ACTIONS(827),
    [sym__add_operator] = ACTIONS(825),
    [sym__concat_operator] = ACTIONS(825),
    [sym__rel_operator] = ACTIONS(827),
    [sym_identifier] = ACTIONS(827),
    [sym_number] = ACTIONS(825),
    [sym_string] = ACTIONS(823),
    [sym_comment] = ACTIONS(26),
  },
  [572] = {
    [sym__expression] = STATE(644),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [573] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1208),
    [sym_comment] = ACTIONS(26),
  },
  [574] = {
    [aux_sym_value_definition_repeat1] = STATE(647),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1210),
    [sym_comment] = ACTIONS(26),
  },
  [575] = {
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_in] = ACTIONS(374),
    [anon_sym_lsl] = ACTIONS(374),
    [anon_sym_lsr] = ACTIONS(374),
    [anon_sym_asr] = ACTIONS(374),
    [anon_sym_mod] = ACTIONS(374),
    [anon_sym_land] = ACTIONS(374),
    [anon_sym_lor] = ACTIONS(374),
    [anon_sym_lxor] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [sym__shift_operator] = ACTIONS(374),
    [sym__hash_operator] = ACTIONS(374),
    [sym__mult_operator] = ACTIONS(376),
    [sym__add_operator] = ACTIONS(374),
    [sym__concat_operator] = ACTIONS(374),
    [sym__rel_operator] = ACTIONS(376),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(374),
    [sym_string] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [576] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(586),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_in] = ACTIONS(661),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_number] = ACTIONS(661),
    [sym_string] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [577] = {
    [sym__expression] = STATE(648),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [578] = {
    [sym__expression] = STATE(649),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [579] = {
    [sym__expression] = STATE(650),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [580] = {
    [sym__expression] = STATE(651),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [581] = {
    [sym__expression] = STATE(652),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [582] = {
    [sym__expression] = STATE(653),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [583] = {
    [sym__expression] = STATE(654),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [584] = {
    [sym__expression] = STATE(655),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [585] = {
    [sym__expression] = STATE(656),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [586] = {
    [sym__expression] = STATE(495),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [aux_sym_call_expression_repeat1] = STATE(586),
    [anon_sym_LPAREN] = ACTIONS(1212),
    [anon_sym_and] = ACTIONS(849),
    [anon_sym_let] = ACTIONS(1215),
    [anon_sym_in] = ACTIONS(849),
    [anon_sym_lsl] = ACTIONS(849),
    [anon_sym_lsr] = ACTIONS(849),
    [anon_sym_asr] = ACTIONS(849),
    [anon_sym_mod] = ACTIONS(849),
    [anon_sym_land] = ACTIONS(849),
    [anon_sym_lor] = ACTIONS(849),
    [anon_sym_lxor] = ACTIONS(849),
    [anon_sym_BANG_EQ] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(849),
    [anon_sym_AMP_AMP] = ACTIONS(849),
    [sym__shift_operator] = ACTIONS(849),
    [sym__hash_operator] = ACTIONS(849),
    [sym__mult_operator] = ACTIONS(857),
    [sym__add_operator] = ACTIONS(849),
    [sym__concat_operator] = ACTIONS(849),
    [sym__rel_operator] = ACTIONS(857),
    [sym_identifier] = ACTIONS(1218),
    [sym_number] = ACTIONS(1221),
    [sym_string] = ACTIONS(1224),
    [sym_comment] = ACTIONS(26),
  },
  [587] = {
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_in] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(868),
    [anon_sym_land] = ACTIONS(868),
    [anon_sym_lor] = ACTIONS(868),
    [anon_sym_lxor] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [588] = {
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_in] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [589] = {
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_in] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(26),
  },
  [590] = {
    [anon_sym_and] = ACTIONS(874),
    [anon_sym_in] = ACTIONS(874),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(874),
    [anon_sym_land] = ACTIONS(874),
    [anon_sym_lor] = ACTIONS(874),
    [anon_sym_lxor] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_comment] = ACTIONS(26),
  },
  [591] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(880),
    [anon_sym_module] = ACTIONS(880),
    [anon_sym_type] = ACTIONS(880),
    [anon_sym_and] = ACTIONS(880),
    [anon_sym_let] = ACTIONS(880),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_end] = ACTIONS(880),
    [anon_sym_in] = ACTIONS(880),
    [anon_sym_lsl] = ACTIONS(880),
    [anon_sym_lsr] = ACTIONS(880),
    [anon_sym_asr] = ACTIONS(880),
    [anon_sym_mod] = ACTIONS(882),
    [anon_sym_land] = ACTIONS(880),
    [anon_sym_lor] = ACTIONS(880),
    [anon_sym_lxor] = ACTIONS(880),
    [anon_sym_BANG_EQ] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AMP_AMP] = ACTIONS(882),
    [sym__shift_operator] = ACTIONS(882),
    [sym__hash_operator] = ACTIONS(882),
    [sym__mult_operator] = ACTIONS(884),
    [sym__add_operator] = ACTIONS(882),
    [sym__concat_operator] = ACTIONS(882),
    [sym__rel_operator] = ACTIONS(884),
    [sym_comment] = ACTIONS(26),
  },
  [592] = {
    [anon_sym_and] = ACTIONS(886),
    [anon_sym_in] = ACTIONS(886),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(886),
    [anon_sym_land] = ACTIONS(886),
    [anon_sym_lor] = ACTIONS(886),
    [anon_sym_lxor] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(26),
  },
  [593] = {
    [anon_sym_and] = ACTIONS(892),
    [anon_sym_in] = ACTIONS(892),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(26),
  },
  [594] = {
    [anon_sym_and] = ACTIONS(898),
    [anon_sym_in] = ACTIONS(898),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(902),
    [sym_comment] = ACTIONS(26),
  },
  [595] = {
    [anon_sym_and] = ACTIONS(904),
    [anon_sym_in] = ACTIONS(904),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(908),
    [sym_comment] = ACTIONS(26),
  },
  [596] = {
    [ts_builtin_sym_end] = ACTIONS(1136),
    [anon_sym_SEMI_SEMI] = ACTIONS(1136),
    [anon_sym_val] = ACTIONS(1227),
    [anon_sym_module] = ACTIONS(1227),
    [anon_sym_type] = ACTIONS(1227),
    [anon_sym_open] = ACTIONS(1227),
    [anon_sym_include] = ACTIONS(1227),
    [anon_sym_LPAREN] = ACTIONS(1227),
    [anon_sym_and] = ACTIONS(1227),
    [anon_sym_let] = ACTIONS(1227),
    [anon_sym_LBRACK] = ACTIONS(1136),
    [anon_sym_lsl] = ACTIONS(639),
    [anon_sym_lsr] = ACTIONS(639),
    [anon_sym_asr] = ACTIONS(639),
    [anon_sym_mod] = ACTIONS(639),
    [anon_sym_land] = ACTIONS(639),
    [anon_sym_lor] = ACTIONS(639),
    [anon_sym_lxor] = ACTIONS(639),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [sym__shift_operator] = ACTIONS(645),
    [sym__hash_operator] = ACTIONS(647),
    [sym__mult_operator] = ACTIONS(649),
    [sym__add_operator] = ACTIONS(651),
    [sym__concat_operator] = ACTIONS(653),
    [sym__rel_operator] = ACTIONS(655),
    [sym_identifier] = ACTIONS(1229),
    [sym_number] = ACTIONS(1227),
    [sym_string] = ACTIONS(1136),
    [sym_comment] = ACTIONS(26),
  },
  [597] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_val] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_open] = ACTIONS(673),
    [anon_sym_include] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_end] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(26),
  },
  [598] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [anon_sym_val] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_type] = ACTIONS(679),
    [anon_sym_open] = ACTIONS(679),
    [anon_sym_include] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_end] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
  },
  [599] = {
    [sym_qualified_type_identifier] = STATE(514),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(1053),
    [sym_identifier] = ACTIONS(1055),
    [sym_comment] = ACTIONS(26),
  },
  [600] = {
    [sym__module_type] = STATE(657),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(417),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(918),
    [sym_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(26),
  },
  [601] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_val] = ACTIONS(729),
    [anon_sym_module] = ACTIONS(729),
    [anon_sym_type] = ACTIONS(729),
    [anon_sym_open] = ACTIONS(729),
    [anon_sym_include] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_end] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(1057),
    [sym_comment] = ACTIONS(26),
  },
  [602] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_val] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_EQ] = ACTIONS(671),
    [anon_sym_open] = ACTIONS(673),
    [anon_sym_include] = ACTIONS(673),
    [anon_sym_and] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_constraint] = ACTIONS(673),
    [anon_sym_end] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(26),
  },
  [603] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [anon_sym_val] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_type] = ACTIONS(679),
    [anon_sym_EQ] = ACTIONS(677),
    [anon_sym_open] = ACTIONS(679),
    [anon_sym_include] = ACTIONS(679),
    [anon_sym_and] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_constraint] = ACTIONS(679),
    [anon_sym_end] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
  },
  [604] = {
    [sym_qualified_type_identifier] = STATE(525),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_EQ] = ACTIONS(683),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(1063),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(26),
  },
  [605] = {
    [sym_qualified_type_identifier] = STATE(525),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(781),
    [anon_sym_val] = ACTIONS(783),
    [anon_sym_module] = ACTIONS(783),
    [anon_sym_type] = ACTIONS(783),
    [anon_sym_open] = ACTIONS(783),
    [anon_sym_include] = ACTIONS(783),
    [anon_sym_and] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_constraint] = ACTIONS(783),
    [anon_sym_end] = ACTIONS(783),
    [anon_sym_DASH_GT] = ACTIONS(1231),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(26),
  },
  [606] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(787),
    [anon_sym_val] = ACTIONS(787),
    [anon_sym_module] = ACTIONS(787),
    [anon_sym_type] = ACTIONS(787),
    [anon_sym_open] = ACTIONS(787),
    [anon_sym_include] = ACTIONS(787),
    [anon_sym_and] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
  },
  [607] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_val] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_open] = ACTIONS(789),
    [anon_sym_include] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(789),
    [sym_comment] = ACTIONS(26),
  },
  [608] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(659),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_val] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_open] = ACTIONS(789),
    [anon_sym_include] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(789),
    [sym_comment] = ACTIONS(26),
  },
  [609] = {
    [sym__module_type] = STATE(660),
    [sym_signature] = STATE(77),
    [sym_functor_module_type] = STATE(77),
    [sym_shorthand_functor_module_type] = STATE(77),
    [sym_qualified_type_identifier] = STATE(77),
    [sym_qualified_identifier] = STATE(71),
    [anon_sym_sig] = ACTIONS(153),
    [anon_sym_functor] = ACTIONS(942),
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(26),
  },
  [610] = {
    [anon_sym_EQ] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym_comment] = ACTIONS(26),
  },
  [611] = {
    [sym__module] = STATE(339),
    [sym_functor_module] = STATE(82),
    [sym_functor_application_module] = STATE(82),
    [sym_struct_module] = STATE(82),
    [sym_qualified_identifier] = STATE(442),
    [anon_sym_functor] = ACTIONS(944),
    [anon_sym_struct] = ACTIONS(161),
    [sym_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(26),
  },
  [612] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [anon_sym_module] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_EQ] = ACTIONS(671),
    [anon_sym_and] = ACTIONS(673),
    [anon_sym_let] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_constraint] = ACTIONS(673),
    [anon_sym_end] = ACTIONS(673),
    [anon_sym_DASH_GT] = ACTIONS(671),
    [sym_identifier] = ACTIONS(675),
    [sym_comment] = ACTIONS(26),
  },
  [613] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_type] = ACTIONS(679),
    [anon_sym_EQ] = ACTIONS(677),
    [anon_sym_and] = ACTIONS(679),
    [anon_sym_let] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_constraint] = ACTIONS(679),
    [anon_sym_end] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
  },
  [614] = {
    [sym_qualified_type_identifier] = STATE(541),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_EQ] = ACTIONS(683),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [sym_identifier] = ACTIONS(1087),
    [sym_comment] = ACTIONS(26),
  },
  [615] = {
    [sym_qualified_type_identifier] = STATE(541),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_SEMI_SEMI] = ACTIONS(781),
    [anon_sym_module] = ACTIONS(783),
    [anon_sym_type] = ACTIONS(783),
    [anon_sym_and] = ACTIONS(783),
    [anon_sym_let] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_constraint] = ACTIONS(783),
    [anon_sym_end] = ACTIONS(783),
    [anon_sym_DASH_GT] = ACTIONS(1233),
    [sym_identifier] = ACTIONS(1087),
    [sym_comment] = ACTIONS(26),
  },
  [616] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(787),
    [anon_sym_module] = ACTIONS(787),
    [anon_sym_type] = ACTIONS(787),
    [anon_sym_and] = ACTIONS(787),
    [anon_sym_let] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
  },
  [617] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_let] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(789),
    [sym_comment] = ACTIONS(26),
  },
  [618] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(662),
    [anon_sym_SEMI_SEMI] = ACTIONS(789),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_type] = ACTIONS(789),
    [anon_sym_and] = ACTIONS(789),
    [anon_sym_let] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(789),
    [sym_comment] = ACTIONS(26),
  },
  [619] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_module] = ACTIONS(825),
    [anon_sym_type] = ACTIONS(825),
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_and] = ACTIONS(825),
    [anon_sym_let] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_end] = ACTIONS(825),
    [anon_sym_lsl] = ACTIONS(825),
    [anon_sym_lsr] = ACTIONS(825),
    [anon_sym_asr] = ACTIONS(825),
    [anon_sym_mod] = ACTIONS(825),
    [anon_sym_land] = ACTIONS(825),
    [anon_sym_lor] = ACTIONS(825),
    [anon_sym_lxor] = ACTIONS(825),
    [anon_sym_BANG_EQ] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_AMP_AMP] = ACTIONS(825),
    [sym__shift_operator] = ACTIONS(825),
    [sym__hash_operator] = ACTIONS(825),
    [sym__mult_operator] = ACTIONS(827),
    [sym__add_operator] = ACTIONS(825),
    [sym__concat_operator] = ACTIONS(825),
    [sym__rel_operator] = ACTIONS(827),
    [sym_identifier] = ACTIONS(827),
    [sym_number] = ACTIONS(825),
    [sym_string] = ACTIONS(823),
    [sym_comment] = ACTIONS(26),
  },
  [620] = {
    [sym__expression] = STATE(663),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [621] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1235),
    [sym_comment] = ACTIONS(26),
  },
  [622] = {
    [aux_sym_value_definition_repeat1] = STATE(666),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1237),
    [sym_comment] = ACTIONS(26),
  },
  [623] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(374),
    [anon_sym_type] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_end] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_lsl] = ACTIONS(374),
    [anon_sym_lsr] = ACTIONS(374),
    [anon_sym_asr] = ACTIONS(374),
    [anon_sym_mod] = ACTIONS(374),
    [anon_sym_land] = ACTIONS(374),
    [anon_sym_lor] = ACTIONS(374),
    [anon_sym_lxor] = ACTIONS(374),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(374),
    [anon_sym_AMP_AMP] = ACTIONS(374),
    [sym__shift_operator] = ACTIONS(374),
    [sym__hash_operator] = ACTIONS(374),
    [sym__mult_operator] = ACTIONS(376),
    [sym__add_operator] = ACTIONS(374),
    [sym__concat_operator] = ACTIONS(374),
    [sym__rel_operator] = ACTIONS(376),
    [sym_identifier] = ACTIONS(376),
    [sym_number] = ACTIONS(374),
    [sym_string] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [624] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(634),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_module] = ACTIONS(661),
    [anon_sym_type] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_let] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_end] = ACTIONS(661),
    [anon_sym_lsl] = ACTIONS(661),
    [anon_sym_lsr] = ACTIONS(661),
    [anon_sym_asr] = ACTIONS(661),
    [anon_sym_mod] = ACTIONS(661),
    [anon_sym_land] = ACTIONS(661),
    [anon_sym_lor] = ACTIONS(661),
    [anon_sym_lxor] = ACTIONS(661),
    [anon_sym_BANG_EQ] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [sym__shift_operator] = ACTIONS(661),
    [sym__hash_operator] = ACTIONS(661),
    [sym__mult_operator] = ACTIONS(663),
    [sym__add_operator] = ACTIONS(661),
    [sym__concat_operator] = ACTIONS(661),
    [sym__rel_operator] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_number] = ACTIONS(661),
    [sym_string] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [625] = {
    [sym__expression] = STATE(667),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [626] = {
    [sym__expression] = STATE(668),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [627] = {
    [sym__expression] = STATE(669),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [628] = {
    [sym__expression] = STATE(670),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [629] = {
    [sym__expression] = STATE(671),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [630] = {
    [sym__expression] = STATE(672),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [631] = {
    [sym__expression] = STATE(673),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [632] = {
    [sym__expression] = STATE(674),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [633] = {
    [sym__expression] = STATE(675),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [634] = {
    [sym__expression] = STATE(554),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [aux_sym_call_expression_repeat1] = STATE(634),
    [anon_sym_SEMI_SEMI] = ACTIONS(847),
    [anon_sym_module] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(1241),
    [anon_sym_and] = ACTIONS(849),
    [anon_sym_let] = ACTIONS(1244),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_end] = ACTIONS(849),
    [anon_sym_lsl] = ACTIONS(849),
    [anon_sym_lsr] = ACTIONS(849),
    [anon_sym_asr] = ACTIONS(849),
    [anon_sym_mod] = ACTIONS(849),
    [anon_sym_land] = ACTIONS(849),
    [anon_sym_lor] = ACTIONS(849),
    [anon_sym_lxor] = ACTIONS(849),
    [anon_sym_BANG_EQ] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(849),
    [anon_sym_AMP_AMP] = ACTIONS(849),
    [sym__shift_operator] = ACTIONS(849),
    [sym__hash_operator] = ACTIONS(849),
    [sym__mult_operator] = ACTIONS(857),
    [sym__add_operator] = ACTIONS(849),
    [sym__concat_operator] = ACTIONS(849),
    [sym__rel_operator] = ACTIONS(857),
    [sym_identifier] = ACTIONS(1247),
    [sym_number] = ACTIONS(1250),
    [sym_string] = ACTIONS(1253),
    [sym_comment] = ACTIONS(26),
  },
  [635] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(868),
    [anon_sym_lor] = ACTIONS(868),
    [anon_sym_lxor] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [636] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(872),
    [sym_comment] = ACTIONS(26),
  },
  [637] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(868),
    [anon_sym_type] = ACTIONS(868),
    [anon_sym_and] = ACTIONS(868),
    [anon_sym_let] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(868),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(1114),
    [anon_sym_AMP] = ACTIONS(1116),
    [anon_sym_AMP_AMP] = ACTIONS(1116),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(1128),
    [sym_comment] = ACTIONS(26),
  },
  [638] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(874),
    [anon_sym_module] = ACTIONS(874),
    [anon_sym_type] = ACTIONS(874),
    [anon_sym_and] = ACTIONS(874),
    [anon_sym_let] = ACTIONS(874),
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_end] = ACTIONS(874),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(874),
    [anon_sym_lor] = ACTIONS(874),
    [anon_sym_lxor] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_comment] = ACTIONS(26),
  },
  [639] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(886),
    [anon_sym_module] = ACTIONS(886),
    [anon_sym_type] = ACTIONS(886),
    [anon_sym_and] = ACTIONS(886),
    [anon_sym_let] = ACTIONS(886),
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_end] = ACTIONS(886),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(886),
    [anon_sym_lor] = ACTIONS(886),
    [anon_sym_lxor] = ACTIONS(886),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(26),
  },
  [640] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(892),
    [anon_sym_module] = ACTIONS(892),
    [anon_sym_type] = ACTIONS(892),
    [anon_sym_and] = ACTIONS(892),
    [anon_sym_let] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_end] = ACTIONS(892),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(26),
  },
  [641] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(898),
    [anon_sym_module] = ACTIONS(898),
    [anon_sym_type] = ACTIONS(898),
    [anon_sym_and] = ACTIONS(898),
    [anon_sym_let] = ACTIONS(898),
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_end] = ACTIONS(898),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(902),
    [sym_comment] = ACTIONS(26),
  },
  [642] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(904),
    [anon_sym_module] = ACTIONS(904),
    [anon_sym_type] = ACTIONS(904),
    [anon_sym_and] = ACTIONS(904),
    [anon_sym_let] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_end] = ACTIONS(904),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(908),
    [sym_comment] = ACTIONS(26),
  },
  [643] = {
    [anon_sym_LPAREN] = ACTIONS(1227),
    [anon_sym_RPAREN] = ACTIONS(1136),
    [anon_sym_let] = ACTIONS(1227),
    [anon_sym_lsl] = ACTIONS(805),
    [anon_sym_lsr] = ACTIONS(805),
    [anon_sym_asr] = ACTIONS(805),
    [anon_sym_mod] = ACTIONS(805),
    [anon_sym_land] = ACTIONS(805),
    [anon_sym_lor] = ACTIONS(805),
    [anon_sym_lxor] = ACTIONS(805),
    [anon_sym_BANG_EQ] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [sym__shift_operator] = ACTIONS(811),
    [sym__hash_operator] = ACTIONS(813),
    [sym__mult_operator] = ACTIONS(815),
    [sym__add_operator] = ACTIONS(817),
    [sym__concat_operator] = ACTIONS(819),
    [sym__rel_operator] = ACTIONS(821),
    [sym_identifier] = ACTIONS(1229),
    [sym_number] = ACTIONS(1227),
    [sym_string] = ACTIONS(1136),
    [sym_comment] = ACTIONS(26),
  },
  [644] = {
    [anon_sym_and] = ACTIONS(1014),
    [anon_sym_in] = ACTIONS(1014),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(26),
  },
  [645] = {
    [sym__expression] = STATE(676),
    [sym_qualified_identifier] = STATE(397),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(400),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(835),
    [sym_identifier] = ACTIONS(837),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [646] = {
    [sym__expression] = STATE(677),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [647] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1256),
    [sym_comment] = ACTIONS(26),
  },
  [648] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_in] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(870),
    [anon_sym_lor] = ACTIONS(870),
    [anon_sym_lxor] = ACTIONS(870),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [649] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_in] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [650] = {
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_in] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(1146),
    [anon_sym_AMP] = ACTIONS(1148),
    [anon_sym_AMP_AMP] = ACTIONS(1148),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [651] = {
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_and] = ACTIONS(876),
    [anon_sym_let] = ACTIONS(876),
    [anon_sym_in] = ACTIONS(876),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(876),
    [anon_sym_lor] = ACTIONS(876),
    [anon_sym_lxor] = ACTIONS(876),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_identifier] = ACTIONS(878),
    [sym_number] = ACTIONS(876),
    [sym_string] = ACTIONS(874),
    [sym_comment] = ACTIONS(26),
  },
  [652] = {
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_and] = ACTIONS(882),
    [anon_sym_let] = ACTIONS(882),
    [anon_sym_in] = ACTIONS(882),
    [anon_sym_lsl] = ACTIONS(882),
    [anon_sym_lsr] = ACTIONS(882),
    [anon_sym_asr] = ACTIONS(882),
    [anon_sym_mod] = ACTIONS(882),
    [anon_sym_land] = ACTIONS(882),
    [anon_sym_lor] = ACTIONS(882),
    [anon_sym_lxor] = ACTIONS(882),
    [anon_sym_BANG_EQ] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AMP_AMP] = ACTIONS(882),
    [sym__shift_operator] = ACTIONS(882),
    [sym__hash_operator] = ACTIONS(882),
    [sym__mult_operator] = ACTIONS(884),
    [sym__add_operator] = ACTIONS(882),
    [sym__concat_operator] = ACTIONS(882),
    [sym__rel_operator] = ACTIONS(884),
    [sym_identifier] = ACTIONS(884),
    [sym_number] = ACTIONS(882),
    [sym_string] = ACTIONS(880),
    [sym_comment] = ACTIONS(26),
  },
  [653] = {
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_and] = ACTIONS(888),
    [anon_sym_let] = ACTIONS(888),
    [anon_sym_in] = ACTIONS(888),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(888),
    [anon_sym_lor] = ACTIONS(888),
    [anon_sym_lxor] = ACTIONS(888),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [sym_number] = ACTIONS(888),
    [sym_string] = ACTIONS(886),
    [sym_comment] = ACTIONS(26),
  },
  [654] = {
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_and] = ACTIONS(894),
    [anon_sym_let] = ACTIONS(894),
    [anon_sym_in] = ACTIONS(894),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [sym_number] = ACTIONS(894),
    [sym_string] = ACTIONS(892),
    [sym_comment] = ACTIONS(26),
  },
  [655] = {
    [anon_sym_LPAREN] = ACTIONS(900),
    [anon_sym_and] = ACTIONS(900),
    [anon_sym_let] = ACTIONS(900),
    [anon_sym_in] = ACTIONS(900),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(902),
    [sym_identifier] = ACTIONS(902),
    [sym_number] = ACTIONS(900),
    [sym_string] = ACTIONS(898),
    [sym_comment] = ACTIONS(26),
  },
  [656] = {
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_and] = ACTIONS(906),
    [anon_sym_let] = ACTIONS(906),
    [anon_sym_in] = ACTIONS(906),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(908),
    [sym_identifier] = ACTIONS(908),
    [sym_number] = ACTIONS(906),
    [sym_string] = ACTIONS(904),
    [sym_comment] = ACTIONS(26),
  },
  [657] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(938),
    [anon_sym_val] = ACTIONS(938),
    [anon_sym_module] = ACTIONS(938),
    [anon_sym_type] = ACTIONS(938),
    [anon_sym_open] = ACTIONS(938),
    [anon_sym_include] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(938),
    [anon_sym_end] = ACTIONS(938),
    [anon_sym_DASH_GT] = ACTIONS(1057),
    [sym_comment] = ACTIONS(26),
  },
  [658] = {
    [sym__type] = STATE(679),
    [sym_parenthesized_type] = STATE(428),
    [sym_function_type] = STATE(428),
    [sym_type_variable] = STATE(428),
    [sym_constructed_type] = STATE(428),
    [sym_qualified_type_identifier] = STATE(428),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_LPAREN] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [sym_identifier] = ACTIONS(928),
    [sym_comment] = ACTIONS(26),
  },
  [659] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(433),
    [anon_sym_SEMI_SEMI] = ACTIONS(993),
    [anon_sym_val] = ACTIONS(993),
    [anon_sym_module] = ACTIONS(993),
    [anon_sym_type] = ACTIONS(993),
    [anon_sym_open] = ACTIONS(993),
    [anon_sym_include] = ACTIONS(993),
    [anon_sym_and] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_constraint] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(993),
    [sym_comment] = ACTIONS(26),
  },
  [660] = {
    [anon_sym_EQ] = ACTIONS(938),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym_comment] = ACTIONS(26),
  },
  [661] = {
    [sym__type] = STATE(680),
    [sym_parenthesized_type] = STATE(448),
    [sym_function_type] = STATE(448),
    [sym_type_variable] = STATE(448),
    [sym_constructed_type] = STATE(448),
    [sym_qualified_type_identifier] = STATE(448),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [sym_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(26),
  },
  [662] = {
    [sym_type_constraint] = STATE(45),
    [aux_sym_type_constructor_definition_repeat1] = STATE(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(993),
    [anon_sym_module] = ACTIONS(993),
    [anon_sym_type] = ACTIONS(993),
    [anon_sym_and] = ACTIONS(993),
    [anon_sym_let] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_constraint] = ACTIONS(737),
    [anon_sym_end] = ACTIONS(993),
    [sym_comment] = ACTIONS(26),
  },
  [663] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1014),
    [anon_sym_module] = ACTIONS(1014),
    [anon_sym_type] = ACTIONS(1014),
    [anon_sym_and] = ACTIONS(1014),
    [anon_sym_let] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_end] = ACTIONS(1014),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(1114),
    [anon_sym_AMP] = ACTIONS(1116),
    [anon_sym_AMP_AMP] = ACTIONS(1116),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(1128),
    [sym_comment] = ACTIONS(26),
  },
  [664] = {
    [sym__expression] = STATE(681),
    [sym_qualified_identifier] = STATE(463),
    [sym_let_expression] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym_infix_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(465),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(964),
    [sym_identifier] = ACTIONS(966),
    [sym_number] = ACTIONS(839),
    [sym_string] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
  },
  [665] = {
    [sym__expression] = STATE(682),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [666] = {
    [aux_sym_value_definition_repeat1] = STATE(394),
    [anon_sym_and] = ACTIONS(629),
    [anon_sym_in] = ACTIONS(1258),
    [sym_comment] = ACTIONS(26),
  },
  [667] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(870),
    [anon_sym_land] = ACTIONS(870),
    [anon_sym_lor] = ACTIONS(870),
    [anon_sym_lxor] = ACTIONS(870),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(872),
    [sym__add_operator] = ACTIONS(870),
    [sym__concat_operator] = ACTIONS(870),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [668] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(870),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [669] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(868),
    [anon_sym_module] = ACTIONS(870),
    [anon_sym_type] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_and] = ACTIONS(870),
    [anon_sym_let] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(870),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(1192),
    [anon_sym_AMP] = ACTIONS(1194),
    [anon_sym_AMP_AMP] = ACTIONS(1194),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(1206),
    [sym_identifier] = ACTIONS(872),
    [sym_number] = ACTIONS(870),
    [sym_string] = ACTIONS(868),
    [sym_comment] = ACTIONS(26),
  },
  [670] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(874),
    [anon_sym_module] = ACTIONS(876),
    [anon_sym_type] = ACTIONS(876),
    [anon_sym_LPAREN] = ACTIONS(876),
    [anon_sym_and] = ACTIONS(876),
    [anon_sym_let] = ACTIONS(876),
    [anon_sym_LBRACK] = ACTIONS(874),
    [anon_sym_end] = ACTIONS(876),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(876),
    [anon_sym_land] = ACTIONS(876),
    [anon_sym_lor] = ACTIONS(876),
    [anon_sym_lxor] = ACTIONS(876),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(876),
    [anon_sym_AMP_AMP] = ACTIONS(876),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(878),
    [sym__add_operator] = ACTIONS(876),
    [sym__concat_operator] = ACTIONS(876),
    [sym__rel_operator] = ACTIONS(878),
    [sym_identifier] = ACTIONS(878),
    [sym_number] = ACTIONS(876),
    [sym_string] = ACTIONS(874),
    [sym_comment] = ACTIONS(26),
  },
  [671] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(880),
    [anon_sym_module] = ACTIONS(882),
    [anon_sym_type] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(882),
    [anon_sym_and] = ACTIONS(882),
    [anon_sym_let] = ACTIONS(882),
    [anon_sym_LBRACK] = ACTIONS(880),
    [anon_sym_end] = ACTIONS(882),
    [anon_sym_lsl] = ACTIONS(882),
    [anon_sym_lsr] = ACTIONS(882),
    [anon_sym_asr] = ACTIONS(882),
    [anon_sym_mod] = ACTIONS(882),
    [anon_sym_land] = ACTIONS(882),
    [anon_sym_lor] = ACTIONS(882),
    [anon_sym_lxor] = ACTIONS(882),
    [anon_sym_BANG_EQ] = ACTIONS(880),
    [anon_sym_AMP] = ACTIONS(882),
    [anon_sym_AMP_AMP] = ACTIONS(882),
    [sym__shift_operator] = ACTIONS(882),
    [sym__hash_operator] = ACTIONS(882),
    [sym__mult_operator] = ACTIONS(884),
    [sym__add_operator] = ACTIONS(882),
    [sym__concat_operator] = ACTIONS(882),
    [sym__rel_operator] = ACTIONS(884),
    [sym_identifier] = ACTIONS(884),
    [sym_number] = ACTIONS(882),
    [sym_string] = ACTIONS(880),
    [sym_comment] = ACTIONS(26),
  },
  [672] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(886),
    [anon_sym_module] = ACTIONS(888),
    [anon_sym_type] = ACTIONS(888),
    [anon_sym_LPAREN] = ACTIONS(888),
    [anon_sym_and] = ACTIONS(888),
    [anon_sym_let] = ACTIONS(888),
    [anon_sym_LBRACK] = ACTIONS(886),
    [anon_sym_end] = ACTIONS(888),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(888),
    [anon_sym_land] = ACTIONS(888),
    [anon_sym_lor] = ACTIONS(888),
    [anon_sym_lxor] = ACTIONS(888),
    [anon_sym_BANG_EQ] = ACTIONS(886),
    [anon_sym_AMP] = ACTIONS(888),
    [anon_sym_AMP_AMP] = ACTIONS(888),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(890),
    [sym__add_operator] = ACTIONS(888),
    [sym__concat_operator] = ACTIONS(888),
    [sym__rel_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [sym_number] = ACTIONS(888),
    [sym_string] = ACTIONS(886),
    [sym_comment] = ACTIONS(26),
  },
  [673] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(892),
    [anon_sym_module] = ACTIONS(894),
    [anon_sym_type] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [anon_sym_and] = ACTIONS(894),
    [anon_sym_let] = ACTIONS(894),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(894),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(894),
    [sym__concat_operator] = ACTIONS(894),
    [sym__rel_operator] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [sym_number] = ACTIONS(894),
    [sym_string] = ACTIONS(892),
    [sym_comment] = ACTIONS(26),
  },
  [674] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(898),
    [anon_sym_module] = ACTIONS(900),
    [anon_sym_type] = ACTIONS(900),
    [anon_sym_LPAREN] = ACTIONS(900),
    [anon_sym_and] = ACTIONS(900),
    [anon_sym_let] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(898),
    [anon_sym_end] = ACTIONS(900),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(898),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_AMP_AMP] = ACTIONS(900),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(902),
    [sym_identifier] = ACTIONS(902),
    [sym_number] = ACTIONS(900),
    [sym_string] = ACTIONS(898),
    [sym_comment] = ACTIONS(26),
  },
  [675] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(904),
    [anon_sym_module] = ACTIONS(906),
    [anon_sym_type] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(906),
    [anon_sym_and] = ACTIONS(906),
    [anon_sym_let] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_end] = ACTIONS(906),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(906),
    [anon_sym_AMP_AMP] = ACTIONS(906),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(908),
    [sym_identifier] = ACTIONS(908),
    [sym_number] = ACTIONS(906),
    [sym_string] = ACTIONS(904),
    [sym_comment] = ACTIONS(26),
  },
  [676] = {
    [anon_sym_and] = ACTIONS(1136),
    [anon_sym_in] = ACTIONS(1136),
    [anon_sym_lsl] = ACTIONS(1029),
    [anon_sym_lsr] = ACTIONS(1029),
    [anon_sym_asr] = ACTIONS(1029),
    [anon_sym_mod] = ACTIONS(1029),
    [anon_sym_land] = ACTIONS(1029),
    [anon_sym_lor] = ACTIONS(1029),
    [anon_sym_lxor] = ACTIONS(1029),
    [anon_sym_BANG_EQ] = ACTIONS(1031),
    [anon_sym_AMP] = ACTIONS(1033),
    [anon_sym_AMP_AMP] = ACTIONS(1033),
    [sym__shift_operator] = ACTIONS(1035),
    [sym__hash_operator] = ACTIONS(1037),
    [sym__mult_operator] = ACTIONS(1039),
    [sym__add_operator] = ACTIONS(1041),
    [sym__concat_operator] = ACTIONS(1043),
    [sym__rel_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(26),
  },
  [677] = {
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_and] = ACTIONS(1162),
    [anon_sym_let] = ACTIONS(1162),
    [anon_sym_in] = ACTIONS(1162),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(1146),
    [anon_sym_AMP] = ACTIONS(1148),
    [anon_sym_AMP_AMP] = ACTIONS(1148),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(1164),
    [sym_number] = ACTIONS(1162),
    [sym_string] = ACTIONS(1014),
    [sym_comment] = ACTIONS(26),
  },
  [678] = {
    [sym__expression] = STATE(684),
    [sym_qualified_identifier] = STATE(493),
    [sym_let_expression] = STATE(494),
    [sym_call_expression] = STATE(494),
    [sym_infix_expression] = STATE(494),
    [sym_parenthesized_expression] = STATE(496),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(1019),
    [sym_identifier] = ACTIONS(1023),
    [sym_number] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_comment] = ACTIONS(26),
  },
  [679] = {
    [sym_qualified_type_identifier] = STATE(525),
    [sym_qualified_identifier] = STATE(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_val] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_open] = ACTIONS(685),
    [anon_sym_include] = ACTIONS(685),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(1231),
    [sym_identifier] = ACTIONS(1065),
    [sym_comment] = ACTIONS(26),
  },
  [680] = {
    [sym_qualified_type_identifier] = STATE(541),
    [sym_qualified_identifier] = STATE(449),
    [anon_sym_SEMI_SEMI] = ACTIONS(683),
    [anon_sym_module] = ACTIONS(685),
    [anon_sym_type] = ACTIONS(685),
    [anon_sym_and] = ACTIONS(685),
    [anon_sym_let] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_constraint] = ACTIONS(685),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(1233),
    [sym_identifier] = ACTIONS(1087),
    [sym_comment] = ACTIONS(26),
  },
  [681] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1136),
    [anon_sym_module] = ACTIONS(1136),
    [anon_sym_type] = ACTIONS(1136),
    [anon_sym_and] = ACTIONS(1136),
    [anon_sym_let] = ACTIONS(1136),
    [anon_sym_LBRACK] = ACTIONS(1136),
    [anon_sym_end] = ACTIONS(1136),
    [anon_sym_lsl] = ACTIONS(1110),
    [anon_sym_lsr] = ACTIONS(1110),
    [anon_sym_asr] = ACTIONS(1110),
    [anon_sym_mod] = ACTIONS(1112),
    [anon_sym_land] = ACTIONS(1110),
    [anon_sym_lor] = ACTIONS(1110),
    [anon_sym_lxor] = ACTIONS(1110),
    [anon_sym_BANG_EQ] = ACTIONS(1114),
    [anon_sym_AMP] = ACTIONS(1116),
    [anon_sym_AMP_AMP] = ACTIONS(1116),
    [sym__shift_operator] = ACTIONS(1118),
    [sym__hash_operator] = ACTIONS(1120),
    [sym__mult_operator] = ACTIONS(1122),
    [sym__add_operator] = ACTIONS(1124),
    [sym__concat_operator] = ACTIONS(1126),
    [sym__rel_operator] = ACTIONS(1128),
    [sym_comment] = ACTIONS(26),
  },
  [682] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1014),
    [anon_sym_module] = ACTIONS(1162),
    [anon_sym_type] = ACTIONS(1162),
    [anon_sym_LPAREN] = ACTIONS(1162),
    [anon_sym_and] = ACTIONS(1162),
    [anon_sym_let] = ACTIONS(1162),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_end] = ACTIONS(1162),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(1192),
    [anon_sym_AMP] = ACTIONS(1194),
    [anon_sym_AMP_AMP] = ACTIONS(1194),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(1206),
    [sym_identifier] = ACTIONS(1164),
    [sym_number] = ACTIONS(1162),
    [sym_string] = ACTIONS(1014),
    [sym_comment] = ACTIONS(26),
  },
  [683] = {
    [sym__expression] = STATE(685),
    [sym_qualified_identifier] = STATE(552),
    [sym_let_expression] = STATE(553),
    [sym_call_expression] = STATE(553),
    [sym_infix_expression] = STATE(553),
    [sym_parenthesized_expression] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_let] = ACTIONS(1239),
    [sym_identifier] = ACTIONS(1104),
    [sym_number] = ACTIONS(1106),
    [sym_string] = ACTIONS(1108),
    [sym_comment] = ACTIONS(26),
  },
  [684] = {
    [anon_sym_LPAREN] = ACTIONS(1227),
    [anon_sym_and] = ACTIONS(1227),
    [anon_sym_let] = ACTIONS(1227),
    [anon_sym_in] = ACTIONS(1227),
    [anon_sym_lsl] = ACTIONS(1144),
    [anon_sym_lsr] = ACTIONS(1144),
    [anon_sym_asr] = ACTIONS(1144),
    [anon_sym_mod] = ACTIONS(1144),
    [anon_sym_land] = ACTIONS(1144),
    [anon_sym_lor] = ACTIONS(1144),
    [anon_sym_lxor] = ACTIONS(1144),
    [anon_sym_BANG_EQ] = ACTIONS(1146),
    [anon_sym_AMP] = ACTIONS(1148),
    [anon_sym_AMP_AMP] = ACTIONS(1148),
    [sym__shift_operator] = ACTIONS(1150),
    [sym__hash_operator] = ACTIONS(1152),
    [sym__mult_operator] = ACTIONS(1154),
    [sym__add_operator] = ACTIONS(1156),
    [sym__concat_operator] = ACTIONS(1158),
    [sym__rel_operator] = ACTIONS(1160),
    [sym_identifier] = ACTIONS(1229),
    [sym_number] = ACTIONS(1227),
    [sym_string] = ACTIONS(1136),
    [sym_comment] = ACTIONS(26),
  },
  [685] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1136),
    [anon_sym_module] = ACTIONS(1227),
    [anon_sym_type] = ACTIONS(1227),
    [anon_sym_LPAREN] = ACTIONS(1227),
    [anon_sym_and] = ACTIONS(1227),
    [anon_sym_let] = ACTIONS(1227),
    [anon_sym_LBRACK] = ACTIONS(1136),
    [anon_sym_end] = ACTIONS(1227),
    [anon_sym_lsl] = ACTIONS(1190),
    [anon_sym_lsr] = ACTIONS(1190),
    [anon_sym_asr] = ACTIONS(1190),
    [anon_sym_mod] = ACTIONS(1190),
    [anon_sym_land] = ACTIONS(1190),
    [anon_sym_lor] = ACTIONS(1190),
    [anon_sym_lxor] = ACTIONS(1190),
    [anon_sym_BANG_EQ] = ACTIONS(1192),
    [anon_sym_AMP] = ACTIONS(1194),
    [anon_sym_AMP_AMP] = ACTIONS(1194),
    [sym__shift_operator] = ACTIONS(1196),
    [sym__hash_operator] = ACTIONS(1198),
    [sym__mult_operator] = ACTIONS(1200),
    [sym__add_operator] = ACTIONS(1202),
    [sym__concat_operator] = ACTIONS(1204),
    [sym__rel_operator] = ACTIONS(1206),
    [sym_identifier] = ACTIONS(1229),
    [sym_number] = ACTIONS(1227),
    [sym_string] = ACTIONS(1136),
    [sym_comment] = ACTIONS(26),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 1, .alias_sequence_id = 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 2),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_parameters, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_open_directive, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_directive, 2),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [122] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(3),
  [128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(5),
  [134] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(6),
  [137] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(7),
  [140] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(8),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 3, .alias_sequence_id = 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2, .alias_sequence_id = 3),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 2, .alias_sequence_id = 3),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 2, .alias_sequence_id = 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_definition, 3),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 2, .alias_sequence_id = 3),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [204] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 3),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 2),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 2, .fragile = true),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1, .alias_sequence_id = 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_specification, 4),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_value_specification, 4),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module_type, 1, .alias_sequence_id = 1),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 4),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module_type, 1),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__module, 1),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__module, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_definition, 4),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_specification_repeat1, 2),
  [327] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_specification_repeat1, 2), SHIFT_REPEAT(37),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameters_repeat1, 3, .alias_sequence_id = 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_parameters_repeat1, 3, .alias_sequence_id = 2),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 3, .alias_sequence_id = 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_equation, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_equation, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2),
  [360] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(43),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(47),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 3, .alias_sequence_id = 3),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_identifier, 3),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_identifier, 3),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_identifier, 3),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value_definition, 4),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 3),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 3),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shorthand_labeled_parameter, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 2, .fragile = true),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2),
  [400] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(23),
  [403] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(56),
  [406] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(25),
  [409] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(27),
  [412] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_let_binding_repeat1, 2), SHIFT_REPEAT(27),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_value_definition_repeat1, 2),
  [419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(60),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2, .fragile = true),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [464] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(63),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_variable, 2, .alias_sequence_id = 3),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2, .alias_sequence_id = 3),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructed_type, 2),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructed_type, 2),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_type_specification, 5, .alias_sequence_id = 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(233),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 1),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 1),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_specification, 5),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 2),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 4, .alias_sequence_id = 1),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 4, .alias_sequence_id = 3),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [575] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(107),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_pattern, 4),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_record_pattern, 4),
  [584] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(110),
  [587] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(112),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2, .fragile = true),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [594] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(116),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_binding, 4),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(293),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 1),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 1),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_attribute, 5),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_type, 3),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_type, 3),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_identifier, 3, .alias_sequence_id = 2),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3, .fragile = true),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3, .fragile = true),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_signature, 3),
  [709] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(145),
  [712] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(146),
  [715] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(147),
  [718] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(148),
  [721] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(149),
  [724] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(8),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_definition, 6),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shorthand_functor_module_type, 3, .fragile = true),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_module, 3),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_module, 3),
  [755] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(157),
  [758] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(158),
  [761] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(159),
  [764] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_module_repeat1, 2), SHIFT_REPEAT(8),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 3),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constraint, 4, .alias_sequence_id = 3),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_constraint, 4, .alias_sequence_id = 3),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 5, .alias_sequence_id = 1),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 5, .alias_sequence_id = 3),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_pattern, 5),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_pattern, 5),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_parameter, 4),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_parameter, 4),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(378),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(401),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [851] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(122),
  [854] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(203),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [859] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(204),
  [862] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(125),
  [865] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(125),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true),
  [872] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 4),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 4),
  [878] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 4),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .alias_sequence_id = 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .alias_sequence_id = 5),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .alias_sequence_id = 5),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 6),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 6),
  [890] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 6),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 7),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 7),
  [896] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 7),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 8),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 8),
  [902] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 8),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 9),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 9),
  [908] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_infix_expression, 3, .fragile = true, .alias_sequence_id = 9),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [920] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module_type, 4, .fragile = true),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_module, 4),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(442),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [966] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(463),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_functor_application_module, 4),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_functor_application_module, 4),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_parameter, 5),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_parameter, 5),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 4),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
  [990] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_record_declaration_repeat1, 2), SHIFT_REPEAT(472),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_constructor_definition, 6, .alias_sequence_id = 3),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [999] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(195),
  [1002] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(277),
  [1005] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(279),
  [1008] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(280),
  [1011] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(280),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 4),
  [1016] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(295),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
  [1023] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1037] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1039] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(503),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1045] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(506),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(513),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
  [1065] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1069] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(331),
  [1072] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(334),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1087] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(540),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
  [1091] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_constructor_definition_repeat1, 2), SHIFT_REPEAT(343),
  [1094] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(346),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1099] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_value_definition_repeat1, 2), SHIFT_REPEAT(351),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(552),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(557),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(562),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(565),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 4),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_record_declaration, 5),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 5),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(582),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(585),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 4),
  [1164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 4),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(600),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(603),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(613),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(619),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(623),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(625),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(628),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(629),
  [1200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(630),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(631),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
  [1206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(633),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1212] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(395),
  [1215] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(491),
  [1218] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(493),
  [1221] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(494),
  [1224] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(494),
  [1227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_expression, 5),
  [1229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_expression, 5),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(661),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(665),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1241] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(461),
  [1244] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(550),
  [1247] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(552),
  [1250] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(553),
  [1253] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(553),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(678),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ocaml() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
