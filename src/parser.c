#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_dt_identifier = 1,
  sym_dt_node_identifier = 2,
  anon_sym_AMP = 3,
  anon_sym_AMP_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_SEMI = 7,
  anon_sym_LBRACE = 8,
  anon_sym_EQ = 9,
  sym_node_name = 10,
  anon_sym_AT = 11,
  aux_sym_unit_address_token1 = 12,
  anon_sym_SLASHdelete_DASHnode_SLASH = 13,
  anon_sym_SLASHdelete_DASHproperty_SLASH = 14,
  anon_sym_COMMA = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_literal_token1 = 19,
  sym_escape_sequence = 20,
  sym_system_lib_string = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym__byte_string_item = 24,
  sym_integer_literal = 25,
  sym_identifier = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_QMARK = 29,
  anon_sym_BANG = 30,
  anon_sym_TILDE = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE = 39,
  anon_sym_CARET = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_BANG_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT_LT = 45,
  anon_sym_GT_GT = 46,
  anon_sym_SLASHinclude = 47,
  aux_sym_preproc_include_token1 = 48,
  anon_sym_LF = 49,
  aux_sym_preproc_def_token1 = 50,
  anon_sym_LPAREN2 = 51,
  anon_sym_DOT_DOT_DOT = 52,
  sym_preproc_arg = 53,
  sym_comment = 54,
  sym_document = 55,
  sym__top_level_item = 56,
  sym_reference = 57,
  sym__immediate_reference = 58,
  sym__bracketed_reference = 59,
  sym_labeled_definition = 60,
  sym_definition = 61,
  sym_labeled_node_definition = 62,
  sym_node_definition = 63,
  sym_node = 64,
  sym_property = 65,
  sym_unit_address = 66,
  sym__node_members = 67,
  sym_delete_node = 68,
  sym_delete_property = 69,
  sym__property_value = 70,
  sym__integer_cell_list = 71,
  sym_integer_cells = 72,
  sym__integer_cell_items = 73,
  sym_string_literal = 74,
  sym_byte_string_literal = 75,
  sym__expression = 76,
  sym_parenthesized_expression = 77,
  sym_call_expression = 78,
  sym_argument_list = 79,
  sym_conditional_expression = 80,
  sym_unary_expression = 81,
  sym_binary_expression = 82,
  sym_dtsi_include = 83,
  sym_preproc_include = 84,
  sym_preproc_def = 85,
  sym_preproc_function_def = 86,
  sym_preproc_params = 87,
  aux_sym_document_repeat1 = 88,
  aux_sym_node_repeat1 = 89,
  aux_sym__integer_cell_list_repeat1 = 90,
  aux_sym_integer_cells_repeat1 = 91,
  aux_sym_string_literal_repeat1 = 92,
  aux_sym_byte_string_literal_repeat1 = 93,
  aux_sym_argument_list_repeat1 = 94,
  aux_sym_preproc_params_repeat1 = 95,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dt_identifier] = "dt_identifier",
  [sym_dt_node_identifier] = "dt_identifier",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [sym_node_name] = "node_name",
  [anon_sym_AT] = "@",
  [aux_sym_unit_address_token1] = "unit_address_token1",
  [anon_sym_SLASHdelete_DASHnode_SLASH] = "/delete-node/",
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = "/delete-property/",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_system_lib_string] = "system_lib_string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__byte_string_item] = "_byte_string_item",
  [sym_integer_literal] = "integer_literal",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_SLASHinclude] = "/include",
  [aux_sym_preproc_include_token1] = "#include",
  [anon_sym_LF] = "\n",
  [aux_sym_preproc_def_token1] = "#define",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_preproc_arg] = "preproc_arg",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__top_level_item] = "_top_level_item",
  [sym_reference] = "reference",
  [sym__immediate_reference] = "_immediate_reference",
  [sym__bracketed_reference] = "_bracketed_reference",
  [sym_labeled_definition] = "labeled_definition",
  [sym_definition] = "definition",
  [sym_labeled_node_definition] = "labeled_definition",
  [sym_node_definition] = "node_definition",
  [sym_node] = "node",
  [sym_property] = "property",
  [sym_unit_address] = "unit_address",
  [sym__node_members] = "_node_members",
  [sym_delete_node] = "delete_node",
  [sym_delete_property] = "delete_property",
  [sym__property_value] = "_property_value",
  [sym__integer_cell_list] = "_integer_cell_list",
  [sym_integer_cells] = "integer_cells",
  [sym__integer_cell_items] = "_integer_cell_items",
  [sym_string_literal] = "string_literal",
  [sym_byte_string_literal] = "byte_string_literal",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_conditional_expression] = "conditional_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_dtsi_include] = "dtsi_include",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_def] = "preproc_def",
  [sym_preproc_function_def] = "preproc_function_def",
  [sym_preproc_params] = "preproc_params",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym__integer_cell_list_repeat1] = "_integer_cell_list_repeat1",
  [aux_sym_integer_cells_repeat1] = "integer_cells_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_byte_string_literal_repeat1] = "byte_string_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_preproc_params_repeat1] = "preproc_params_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dt_identifier] = sym_dt_identifier,
  [sym_dt_node_identifier] = sym_dt_identifier,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_node_name] = sym_node_name,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_unit_address_token1] = aux_sym_unit_address_token1,
  [anon_sym_SLASHdelete_DASHnode_SLASH] = anon_sym_SLASHdelete_DASHnode_SLASH,
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = anon_sym_SLASHdelete_DASHproperty_SLASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_system_lib_string] = sym_system_lib_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__byte_string_item] = sym__byte_string_item,
  [sym_integer_literal] = sym_integer_literal,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_SLASHinclude] = anon_sym_SLASHinclude,
  [aux_sym_preproc_include_token1] = aux_sym_preproc_include_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_preproc_def_token1] = aux_sym_preproc_def_token1,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_preproc_arg] = sym_preproc_arg,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__top_level_item] = sym__top_level_item,
  [sym_reference] = sym_reference,
  [sym__immediate_reference] = sym__immediate_reference,
  [sym__bracketed_reference] = sym__bracketed_reference,
  [sym_labeled_definition] = sym_labeled_definition,
  [sym_definition] = sym_definition,
  [sym_labeled_node_definition] = sym_labeled_definition,
  [sym_node_definition] = sym_node_definition,
  [sym_node] = sym_node,
  [sym_property] = sym_property,
  [sym_unit_address] = sym_unit_address,
  [sym__node_members] = sym__node_members,
  [sym_delete_node] = sym_delete_node,
  [sym_delete_property] = sym_delete_property,
  [sym__property_value] = sym__property_value,
  [sym__integer_cell_list] = sym__integer_cell_list,
  [sym_integer_cells] = sym_integer_cells,
  [sym__integer_cell_items] = sym__integer_cell_items,
  [sym_string_literal] = sym_string_literal,
  [sym_byte_string_literal] = sym_byte_string_literal,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_dtsi_include] = sym_dtsi_include,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_def] = sym_preproc_def,
  [sym_preproc_function_def] = sym_preproc_function_def,
  [sym_preproc_params] = sym_preproc_params,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym__integer_cell_list_repeat1] = aux_sym__integer_cell_list_repeat1,
  [aux_sym_integer_cells_repeat1] = aux_sym_integer_cells_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_byte_string_literal_repeat1] = aux_sym_byte_string_literal_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_preproc_params_repeat1] = aux_sym_preproc_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_dt_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dt_node_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_address_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHdelete_DASHnode_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_system_lib_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__byte_string_item] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHinclude] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_include_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_def_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__bracketed_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_labeled_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_node_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_node_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_address] = {
    .visible = true,
    .named = true,
  },
  [sym__node_members] = {
    .visible = false,
    .named = true,
  },
  [sym_delete_node] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_cell_list] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_cells] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_cell_items] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dtsi_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_params] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_cell_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_cells_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preproc_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address = 1,
  field_alternative = 2,
  field_argument = 3,
  field_arguments = 4,
  field_condition = 5,
  field_consequence = 6,
  field_definition = 7,
  field_function = 8,
  field_label = 9,
  field_left = 10,
  field_name = 11,
  field_operator = 12,
  field_parameters = 13,
  field_path = 14,
  field_right = 15,
  field_value = 16,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_definition] = "definition",
  [field_function] = "function",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[14] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_definition, 2},
    {field_label, 0},
  [3] =
    {field_name, 0},
    {field_value, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_address, 1},
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_name, 1},
    {field_value, 2},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
  [13] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [16] =
    {field_arguments, 1},
    {field_function, 0},
  [18] =
    {field_argument, 1},
    {field_operator, 0},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static TSSymbol ts_alias_sequences[14][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_definition,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_node_definition, 2,
    sym_node_definition,
    sym_definition,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(148);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '?') ADVANCE(146);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == '\\') SKIP(63)
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '(') ADVANCE(170);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '?') ADVANCE(146);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(147);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(171);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '#' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(186);
      if (lookahead == '\r') ADVANCE(188);
      END_STATE();
    case 62:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 63:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(62)
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(67)
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '\r') SKIP(64)
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '!') ADVANCE(148);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '%') ADVANCE(154);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(121);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead == '?') ADVANCE(146);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == '\\') SKIP(63)
      if (lookahead == ']') ADVANCE(136);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '~') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\\') SKIP(65)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_dt_identifier);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_dt_node_identifier);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '{') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_node_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_node_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_node_name);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_unit_address_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_unit_address_token1);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_unit_address_token1);
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(173);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(61);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(181);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 67},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 25},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_node_name] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_unit_address_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__byte_string_item] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym_preproc_include_token1] = ACTIONS(1),
    [aux_sym_preproc_def_token1] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(122),
    [sym__top_level_item] = STATE(29),
    [sym_labeled_node_definition] = STATE(29),
    [sym_node_definition] = STATE(60),
    [sym_dtsi_include] = STATE(29),
    [sym_preproc_include] = STATE(29),
    [sym_preproc_def] = STATE(29),
    [sym_preproc_function_def] = STATE(29),
    [aux_sym_document_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_dt_node_identifier] = ACTIONS(7),
    [anon_sym_SLASHinclude] = ACTIONS(9),
    [aux_sym_preproc_include_token1] = ACTIONS(11),
    [aux_sym_preproc_def_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(19), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(23), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(27), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(31), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(35), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(37), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(39), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [206] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    STATE(95), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [264] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [318] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [364] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [412] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [460] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(75), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(75), 15,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [574] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(75), 11,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [612] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(75), 13,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(81), 17,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [764] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [817] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [869] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(61), 1,
      anon_sym_AMP_AMP,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(71), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_integer_literal,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(8), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [951] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(14), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [978] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_AMP,
    ACTIONS(103), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      sym_integer_literal,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(53), 2,
      sym__immediate_reference,
      sym__bracketed_reference,
    STATE(37), 5,
      sym_reference,
      sym__integer_cell_items,
      sym_parenthesized_expression,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(13), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1065] = 8,
    ACTIONS(7), 1,
      sym_dt_node_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASHinclude,
    ACTIONS(11), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(13), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_node_definition,
    STATE(44), 7,
      sym__top_level_item,
      sym_labeled_node_definition,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [1096] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(22), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(9), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(16), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(17), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1231] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(23), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(11), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1285] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_AMP,
    ACTIONS(103), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_GT,
    ACTIONS(133), 1,
      sym_integer_literal,
    STATE(53), 2,
      sym__immediate_reference,
      sym__bracketed_reference,
    STATE(39), 5,
      sym_reference,
      sym__integer_cell_items,
      sym_parenthesized_expression,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(10), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1345] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_AMP,
    ACTIONS(140), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(143), 1,
      anon_sym_GT,
    ACTIONS(145), 1,
      sym_integer_literal,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(53), 2,
      sym__immediate_reference,
      sym__bracketed_reference,
    STATE(39), 5,
      sym_reference,
      sym__integer_cell_items,
      sym_parenthesized_expression,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(19), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1405] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(20), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(18), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1459] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(97), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(21), 6,
      sym__expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1486] = 8,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym_dt_node_identifier,
    ACTIONS(167), 1,
      anon_sym_SLASHinclude,
    ACTIONS(170), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(173), 1,
      aux_sym_preproc_def_token1,
    STATE(60), 1,
      sym_node_definition,
    STATE(44), 7,
      sym__top_level_item,
      sym_labeled_node_definition,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [1517] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_dt_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(184), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(45), 6,
      sym_labeled_definition,
      sym_definition,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1541] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_dt_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(193), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(45), 6,
      sym_labeled_definition,
      sym_definition,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1565] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_dt_identifier,
    ACTIONS(191), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(193), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(46), 6,
      sym_labeled_definition,
      sym_definition,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_integer_cells,
    STATE(117), 4,
      sym__property_value,
      sym__integer_cell_list,
      sym_string_literal,
      sym_byte_string_literal,
  [1611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(205), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [1630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      anon_sym_AT,
    STATE(81), 1,
      sym_unit_address,
    STATE(121), 2,
      sym_node,
      sym_property,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [1667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_AMP,
    ACTIONS(221), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [1681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_AMP,
    ACTIONS(225), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [1695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      anon_sym_AT,
    STATE(81), 1,
      sym_unit_address,
    STATE(121), 2,
      sym_node,
      sym_property,
  [1715] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_dt_identifier,
    ACTIONS(229), 1,
      anon_sym_AMP,
    ACTIONS(231), 1,
      anon_sym_AMP_LBRACE,
    STATE(87), 1,
      sym_reference,
    STATE(84), 2,
      sym__immediate_reference,
      sym__bracketed_reference,
  [1735] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AMP,
    ACTIONS(231), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(233), 1,
      sym_dt_identifier,
    STATE(83), 1,
      sym_reference,
    STATE(84), 2,
      sym__immediate_reference,
      sym__bracketed_reference,
  [1755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_unit_address,
    STATE(118), 1,
      sym_node,
  [1774] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(239), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1787] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1800] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(247), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1813] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1826] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1839] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1852] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1865] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1878] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(269), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1891] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(275), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1904] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(277), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1917] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_dt_node_identifier,
      anon_sym_SLASHinclude,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
  [1930] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_string_literal_token1,
    ACTIONS(289), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym_string_literal_repeat1,
  [1946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_AT,
    STATE(115), 1,
      sym_unit_address,
    STATE(118), 1,
      sym_node,
  [1962] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_string_literal_token1,
    ACTIONS(295), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [1978] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_string_literal_token1,
    ACTIONS(301), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_string_literal_repeat1,
  [1994] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2006] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_string_literal_token1,
    ACTIONS(295), 1,
      sym_escape_sequence,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [2022] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2034] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2046] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2058] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_string_literal_token1,
    ACTIONS(317), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
  [2074] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(134), 2,
      sym_node,
      sym_property,
  [2100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_string_literal,
    ACTIONS(325), 2,
      sym_system_lib_string,
      sym_identifier,
  [2114] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2126] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2138] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(293), 1,
      aux_sym_string_literal_token1,
    ACTIONS(295), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [2154] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      aux_sym_string_literal_token1,
    ACTIONS(338), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym_string_literal_repeat1,
  [2170] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 3,
      sym_dt_identifier,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2182] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      anon_sym_LPAREN2,
    ACTIONS(349), 1,
      sym_preproc_arg,
    STATE(110), 1,
      sym_preproc_params,
  [2198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_argument_list_repeat1,
  [2211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(356), 1,
      sym__byte_string_item,
    STATE(90), 1,
      aux_sym_byte_string_literal_repeat1,
  [2224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      sym__byte_string_item,
    STATE(93), 1,
      aux_sym_byte_string_literal_repeat1,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__integer_cell_list_repeat1,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      sym__byte_string_item,
    STATE(90), 1,
      aux_sym_byte_string_literal_repeat1,
  [2263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__integer_cell_list_repeat1,
  [2276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_argument_list_repeat1,
  [2289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_preproc_params_repeat1,
  [2302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym__integer_cell_list_repeat1,
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_preproc_params_repeat1,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_preproc_params_repeat1,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [2360] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_dt_node_identifier,
    STATE(62), 1,
      sym_node_definition,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(113), 1,
      sym_integer_cells,
  [2388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2404] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [2412] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [2420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string_literal,
  [2430] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      sym_preproc_arg,
  [2440] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_dt_identifier,
    STATE(80), 1,
      sym_definition,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2466] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_node,
  [2484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [2491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [2498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_unit_address_token1,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SEMI,
  [2519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
  [2540] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_dt_identifier,
  [2547] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
  [2554] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LF,
  [2561] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LF,
  [2568] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LF,
  [2575] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
  [2582] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_dt_identifier,
  [2589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [2596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
  [2624] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_dt_identifier,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [2652] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_dt_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 318,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 460,
  [SMALL_STATE(14)] = 510,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 764,
  [SMALL_STATE(22)] = 817,
  [SMALL_STATE(23)] = 869,
  [SMALL_STATE(24)] = 921,
  [SMALL_STATE(25)] = 951,
  [SMALL_STATE(26)] = 978,
  [SMALL_STATE(27)] = 1011,
  [SMALL_STATE(28)] = 1038,
  [SMALL_STATE(29)] = 1065,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1123,
  [SMALL_STATE(32)] = 1150,
  [SMALL_STATE(33)] = 1177,
  [SMALL_STATE(34)] = 1204,
  [SMALL_STATE(35)] = 1231,
  [SMALL_STATE(36)] = 1258,
  [SMALL_STATE(37)] = 1285,
  [SMALL_STATE(38)] = 1318,
  [SMALL_STATE(39)] = 1345,
  [SMALL_STATE(40)] = 1378,
  [SMALL_STATE(41)] = 1405,
  [SMALL_STATE(42)] = 1432,
  [SMALL_STATE(43)] = 1459,
  [SMALL_STATE(44)] = 1486,
  [SMALL_STATE(45)] = 1517,
  [SMALL_STATE(46)] = 1541,
  [SMALL_STATE(47)] = 1565,
  [SMALL_STATE(48)] = 1589,
  [SMALL_STATE(49)] = 1611,
  [SMALL_STATE(50)] = 1630,
  [SMALL_STATE(51)] = 1653,
  [SMALL_STATE(52)] = 1667,
  [SMALL_STATE(53)] = 1681,
  [SMALL_STATE(54)] = 1695,
  [SMALL_STATE(55)] = 1715,
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1755,
  [SMALL_STATE(58)] = 1774,
  [SMALL_STATE(59)] = 1787,
  [SMALL_STATE(60)] = 1800,
  [SMALL_STATE(61)] = 1813,
  [SMALL_STATE(62)] = 1826,
  [SMALL_STATE(63)] = 1839,
  [SMALL_STATE(64)] = 1852,
  [SMALL_STATE(65)] = 1865,
  [SMALL_STATE(66)] = 1878,
  [SMALL_STATE(67)] = 1891,
  [SMALL_STATE(68)] = 1904,
  [SMALL_STATE(69)] = 1917,
  [SMALL_STATE(70)] = 1930,
  [SMALL_STATE(71)] = 1946,
  [SMALL_STATE(72)] = 1962,
  [SMALL_STATE(73)] = 1978,
  [SMALL_STATE(74)] = 1994,
  [SMALL_STATE(75)] = 2006,
  [SMALL_STATE(76)] = 2022,
  [SMALL_STATE(77)] = 2034,
  [SMALL_STATE(78)] = 2046,
  [SMALL_STATE(79)] = 2058,
  [SMALL_STATE(80)] = 2074,
  [SMALL_STATE(81)] = 2086,
  [SMALL_STATE(82)] = 2100,
  [SMALL_STATE(83)] = 2114,
  [SMALL_STATE(84)] = 2126,
  [SMALL_STATE(85)] = 2138,
  [SMALL_STATE(86)] = 2154,
  [SMALL_STATE(87)] = 2170,
  [SMALL_STATE(88)] = 2182,
  [SMALL_STATE(89)] = 2198,
  [SMALL_STATE(90)] = 2211,
  [SMALL_STATE(91)] = 2224,
  [SMALL_STATE(92)] = 2237,
  [SMALL_STATE(93)] = 2250,
  [SMALL_STATE(94)] = 2263,
  [SMALL_STATE(95)] = 2276,
  [SMALL_STATE(96)] = 2289,
  [SMALL_STATE(97)] = 2302,
  [SMALL_STATE(98)] = 2315,
  [SMALL_STATE(99)] = 2326,
  [SMALL_STATE(100)] = 2339,
  [SMALL_STATE(101)] = 2352,
  [SMALL_STATE(102)] = 2360,
  [SMALL_STATE(103)] = 2370,
  [SMALL_STATE(104)] = 2378,
  [SMALL_STATE(105)] = 2388,
  [SMALL_STATE(106)] = 2396,
  [SMALL_STATE(107)] = 2404,
  [SMALL_STATE(108)] = 2412,
  [SMALL_STATE(109)] = 2420,
  [SMALL_STATE(110)] = 2430,
  [SMALL_STATE(111)] = 2440,
  [SMALL_STATE(112)] = 2450,
  [SMALL_STATE(113)] = 2458,
  [SMALL_STATE(114)] = 2466,
  [SMALL_STATE(115)] = 2474,
  [SMALL_STATE(116)] = 2484,
  [SMALL_STATE(117)] = 2491,
  [SMALL_STATE(118)] = 2498,
  [SMALL_STATE(119)] = 2505,
  [SMALL_STATE(120)] = 2512,
  [SMALL_STATE(121)] = 2519,
  [SMALL_STATE(122)] = 2526,
  [SMALL_STATE(123)] = 2533,
  [SMALL_STATE(124)] = 2540,
  [SMALL_STATE(125)] = 2547,
  [SMALL_STATE(126)] = 2554,
  [SMALL_STATE(127)] = 2561,
  [SMALL_STATE(128)] = 2568,
  [SMALL_STATE(129)] = 2575,
  [SMALL_STATE(130)] = 2582,
  [SMALL_STATE(131)] = 2589,
  [SMALL_STATE(132)] = 2596,
  [SMALL_STATE(133)] = 2603,
  [SMALL_STATE(134)] = 2610,
  [SMALL_STATE(135)] = 2617,
  [SMALL_STATE(136)] = 2624,
  [SMALL_STATE(137)] = 2631,
  [SMALL_STATE(138)] = 2638,
  [SMALL_STATE(139)] = 2645,
  [SMALL_STATE(140)] = 2652,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 10),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(136),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(140),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(39),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(49),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(55),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(56),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracketed_reference, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracketed_reference, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_reference, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_reference, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 8),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_item, 1, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_item, 1, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_node_definition, 3, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_node_definition, 3, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_definition, 3, .production_id = 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_definition, 3, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_definition, 4, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_definition, 4, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3, .production_id = 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4, .production_id = 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_definition, 3, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_definition, 3, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(86),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(86),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(43),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(90),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_cell_list_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_cell_list_repeat1, 2), SHIFT_REPEAT(104),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_list, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(103),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_list, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_address, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_device_tree(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
