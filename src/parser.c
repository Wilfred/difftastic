#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_SLASHdts_DASHv1_SLASH = 1,
  anon_sym_SEMI = 2,
  anon_sym_SLASHmemreserve_SLASH = 3,
  sym__label_name = 4,
  sym__node_path = 5,
  sym__node_or_property = 6,
  sym__property_with_hash = 7,
  sym__property_starts_with_number = 8,
  aux_sym_unit_address_token1 = 9,
  anon_sym_AMP = 10,
  anon_sym_AMP_LBRACE = 11,
  anon_sym_AT = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_LBRACE = 15,
  anon_sym_EQ = 16,
  anon_sym_COMMA = 17,
  anon_sym_SLASHdelete_DASHnode_SLASH = 18,
  anon_sym_SLASHdelete_DASHproperty_SLASH = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_literal_token1 = 23,
  sym_escape_sequence = 24,
  sym_system_lib_string = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  sym_integer_literal = 28,
  sym_identifier = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_QMARK = 32,
  anon_sym_BANG = 33,
  anon_sym_TILDE = 34,
  anon_sym_DASH = 35,
  anon_sym_PLUS = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_PERCENT = 39,
  anon_sym_PIPE_PIPE = 40,
  anon_sym_AMP_AMP = 41,
  anon_sym_PIPE = 42,
  anon_sym_CARET = 43,
  anon_sym_EQ_EQ = 44,
  anon_sym_BANG_EQ = 45,
  anon_sym_GT_EQ = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_LT_LT = 48,
  anon_sym_GT_GT = 49,
  anon_sym_SLASHinclude = 50,
  aux_sym_preproc_include_token1 = 51,
  anon_sym_LF = 52,
  aux_sym_preproc_def_token1 = 53,
  anon_sym_LPAREN2 = 54,
  anon_sym_DOT_DOT_DOT = 55,
  sym_preproc_arg = 56,
  sym_comment = 57,
  sym_document = 58,
  sym__top_level_item = 59,
  sym_file_version = 60,
  sym_memory_reservation = 61,
  sym_unit_address = 62,
  sym_reference = 63,
  sym__label_reference = 64,
  sym__node_reference = 65,
  sym_labeled_node = 66,
  sym_labeled_item = 67,
  sym_node = 68,
  sym_property = 69,
  sym__node_members = 70,
  sym_delete_node = 71,
  sym_delete_property = 72,
  sym__property_value = 73,
  sym_integer_cells = 74,
  sym__integer_cell_items = 75,
  sym_string_literal = 76,
  sym_byte_string_literal = 77,
  sym__byte_string_item = 78,
  sym__expression = 79,
  sym_call_expression = 80,
  sym_argument_list = 81,
  sym_conditional_expression = 82,
  sym_unary_expression = 83,
  sym_binary_expression = 84,
  sym_dtsi_include = 85,
  sym_preproc_include = 86,
  sym_preproc_def = 87,
  sym_preproc_function_def = 88,
  sym_preproc_params = 89,
  aux_sym_document_repeat1 = 90,
  aux_sym_node_repeat1 = 91,
  aux_sym_property_repeat1 = 92,
  aux_sym_integer_cells_repeat1 = 93,
  aux_sym_string_literal_repeat1 = 94,
  aux_sym_byte_string_literal_repeat1 = 95,
  aux_sym_argument_list_repeat1 = 96,
  aux_sym_preproc_params_repeat1 = 97,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASHdts_DASHv1_SLASH] = "/dts-v1/",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASHmemreserve_SLASH] = "/memreserve/",
  [sym__label_name] = "identifier",
  [sym__node_path] = "identifier",
  [sym__node_or_property] = "identifier",
  [sym__property_with_hash] = "identifier",
  [sym__property_starts_with_number] = "identifier",
  [aux_sym_unit_address_token1] = "unit_address_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_AT] = "@",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASHdelete_DASHnode_SLASH] = "/delete-node/",
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = "/delete-property/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_system_lib_string] = "system_lib_string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_file_version] = "file_version",
  [sym_memory_reservation] = "memory_reservation",
  [sym_unit_address] = "unit_address",
  [sym_reference] = "reference",
  [sym__label_reference] = "_label_reference",
  [sym__node_reference] = "_node_reference",
  [sym_labeled_node] = "labeled_item",
  [sym_labeled_item] = "labeled_item",
  [sym_node] = "node",
  [sym_property] = "property",
  [sym__node_members] = "_node_members",
  [sym_delete_node] = "delete_node",
  [sym_delete_property] = "delete_property",
  [sym__property_value] = "_property_value",
  [sym_integer_cells] = "integer_cells",
  [sym__integer_cell_items] = "_integer_cell_items",
  [sym_string_literal] = "string_literal",
  [sym_byte_string_literal] = "byte_string_literal",
  [sym__byte_string_item] = "_byte_string_item",
  [sym__expression] = "_expression",
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
  [aux_sym_property_repeat1] = "property_repeat1",
  [aux_sym_integer_cells_repeat1] = "integer_cells_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_byte_string_literal_repeat1] = "byte_string_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_preproc_params_repeat1] = "preproc_params_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASHdts_DASHv1_SLASH] = anon_sym_SLASHdts_DASHv1_SLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASHmemreserve_SLASH] = anon_sym_SLASHmemreserve_SLASH,
  [sym__label_name] = sym_identifier,
  [sym__node_path] = sym_identifier,
  [sym__node_or_property] = sym_identifier,
  [sym__property_with_hash] = sym_identifier,
  [sym__property_starts_with_number] = sym_identifier,
  [aux_sym_unit_address_token1] = aux_sym_unit_address_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASHdelete_DASHnode_SLASH] = anon_sym_SLASHdelete_DASHnode_SLASH,
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = anon_sym_SLASHdelete_DASHproperty_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_system_lib_string] = sym_system_lib_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_file_version] = sym_file_version,
  [sym_memory_reservation] = sym_memory_reservation,
  [sym_unit_address] = sym_unit_address,
  [sym_reference] = sym_reference,
  [sym__label_reference] = sym__label_reference,
  [sym__node_reference] = sym__node_reference,
  [sym_labeled_node] = sym_labeled_item,
  [sym_labeled_item] = sym_labeled_item,
  [sym_node] = sym_node,
  [sym_property] = sym_property,
  [sym__node_members] = sym__node_members,
  [sym_delete_node] = sym_delete_node,
  [sym_delete_property] = sym_delete_property,
  [sym__property_value] = sym__property_value,
  [sym_integer_cells] = sym_integer_cells,
  [sym__integer_cell_items] = sym__integer_cell_items,
  [sym_string_literal] = sym_string_literal,
  [sym_byte_string_literal] = sym_byte_string_literal,
  [sym__byte_string_item] = sym__byte_string_item,
  [sym__expression] = sym__expression,
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
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
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
  [anon_sym_SLASHdts_DASHv1_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHmemreserve_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__label_name] = {
    .visible = true,
    .named = true,
  },
  [sym__node_path] = {
    .visible = true,
    .named = true,
  },
  [sym__node_or_property] = {
    .visible = true,
    .named = true,
  },
  [sym__property_with_hash] = {
    .visible = true,
    .named = true,
  },
  [sym__property_starts_with_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unit_address_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
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
  [sym_file_version] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_reservation] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_address] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__label_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__node_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_labeled_node] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_item] = {
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
  [sym__byte_string_item] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
  [aux_sym_property_repeat1] = {
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
  field_function = 7,
  field_item = 8,
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
  [field_function] = "function",
  [field_item] = "item",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[19] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 4},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_item, 2},
    {field_label, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0},
  [5] =
    {field_label, 0, .inherited = true},
  [6] =
    {field_name, 1},
    {field_value, 2},
  [8] =
    {field_name, 1},
    {field_parameters, 2},
  [10] =
    {field_name, 0},
    {field_value, 1},
  [12] =
    {field_label, 1},
  [13] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [16] =
    {field_address, 1},
    {field_address, 2},
    {field_name, 0},
  [19] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [22] =
    {field_arguments, 1},
    {field_function, 0},
  [24] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [28] =
    {field_argument, 1},
    {field_operator, 0},
  [30] =
    {field_address, 2},
    {field_address, 3},
    {field_path, 1},
  [33] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [36] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static TSSymbol ts_alias_sequences[19][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(175);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(173);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(173);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '0') ADVANCE(167);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '~') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '&') ADVANCE(140);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(198);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(213);
      if (lookahead == '\r') ADVANCE(215);
      END_STATE();
    case 66:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 67:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(66)
      END_STATE();
    case 68:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(71)
      END_STATE();
    case 69:
      if (eof) ADVANCE(72);
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(175);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '?') ADVANCE(173);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '^') ADVANCE(185);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASHdts_DASHv1_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASHmemreserve_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(95);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(91);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(75);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(149);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(150);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '1') ADVANCE(86);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '\\') ADVANCE(65);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'c') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(96);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(103);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(192);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(118);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(85);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(114);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(87);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(88);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(122);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(92);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(94);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'p') ADVANCE(104);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(120);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(84);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(125);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(99);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(93);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(90);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(102);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'y') ADVANCE(89);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__node_path);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__node_or_property);
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__node_or_property);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unit_address_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(183);
      if (lookahead == '{') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(189);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(182);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\r') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 71},
  [26] = {.lex_state = 71},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 71},
  [59] = {.lex_state = 71},
  [60] = {.lex_state = 71},
  [61] = {.lex_state = 71},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 71},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 38},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__label_name] = ACTIONS(1),
    [sym__node_or_property] = ACTIONS(1),
    [sym__property_starts_with_number] = ACTIONS(1),
    [aux_sym_unit_address_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_document] = STATE(142),
    [sym__top_level_item] = STATE(26),
    [sym_file_version] = STATE(26),
    [sym_memory_reservation] = STATE(26),
    [sym_labeled_node] = STATE(26),
    [sym_node] = STATE(26),
    [sym_dtsi_include] = STATE(26),
    [sym_preproc_include] = STATE(26),
    [sym_preproc_def] = STATE(26),
    [sym_preproc_function_def] = STATE(26),
    [aux_sym_document_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASHdts_DASHv1_SLASH] = ACTIONS(7),
    [anon_sym_SLASHmemreserve_SLASH] = ACTIONS(9),
    [sym__label_name] = ACTIONS(11),
    [sym__node_path] = ACTIONS(13),
    [sym__node_or_property] = ACTIONS(13),
    [anon_sym_SLASHinclude] = ACTIONS(15),
    [aux_sym_preproc_include_token1] = ACTIONS(17),
    [aux_sym_preproc_def_token1] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(25), 21,
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
    ACTIONS(27), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(29), 21,
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
    ACTIONS(31), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(33), 21,
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
    ACTIONS(35), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(37), 21,
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
  [136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(39), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(41), 17,
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
  [172] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(77), 17,
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
  [260] = 3,
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
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(85), 17,
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
  [320] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(77), 13,
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
  [398] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [448] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(77), 15,
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
  [528] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [576] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [630] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(77), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [678] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(77), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [722] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(77), 11,
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
  [760] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [813] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [865] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [917] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AMP,
    ACTIONS(53), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(69), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [969] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(102), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(105), 1,
      sym__label_name,
    ACTIONS(111), 1,
      anon_sym_SLASHinclude,
    ACTIONS(114), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(117), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(108), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(25), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_node,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [1010] = 10,
    ACTIONS(7), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(11), 1,
      sym__label_name,
    ACTIONS(15), 1,
      anon_sym_SLASHinclude,
    ACTIONS(17), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(19), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(25), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_node,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [1051] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(31), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1088] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(30), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1125] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1162] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1199] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1236] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1273] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(29), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1310] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__label_name,
    ACTIONS(153), 1,
      sym__node_path,
    ACTIONS(156), 1,
      sym__node_or_property,
    ACTIONS(159), 1,
      sym__property_with_hash,
    ACTIONS(162), 1,
      sym__property_starts_with_number,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(170), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1347] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__label_name,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(126), 1,
      sym__node_or_property,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(32), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_integer_literal,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(115), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(22), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1472] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(201), 1,
      sym_integer_literal,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(42), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(18), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(17), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(213), 1,
      sym_integer_literal,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(57), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(13), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1614] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(132), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(8), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(21), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(20), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(19), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(14), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(16), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(24), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(9), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(23), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(11), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_integer_literal,
    ACTIONS(183), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(12), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1956] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_AMP,
    ACTIONS(244), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      sym_integer_literal,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(57), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1988] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(260), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2005] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(264), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2022] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(268), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2039] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(272), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2056] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(276), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2073] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(280), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2090] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(284), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2107] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(288), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2124] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(290), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(292), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2141] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(294), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(296), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2158] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(298), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(300), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2175] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(304), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2192] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(308), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2209] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(312), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2226] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(316), 6,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_SLASHinclude,
  [2243] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(320), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(318), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2259] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(324), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(322), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2275] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(294), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(296), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2291] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(310), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(312), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2307] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(308), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2323] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(298), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(300), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2339] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(326), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2355] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_AMP_LBRACE,
    STATE(163), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    ACTIONS(330), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2377] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(334), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(332), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_AMP,
    ACTIONS(336), 7,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_AMP,
    ACTIONS(340), 7,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(344), 7,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2441] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(350), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(348), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2457] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(354), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(352), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2473] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym__property_with_hash,
      anon_sym_RBRACE,
    ACTIONS(356), 6,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_AMP,
    ACTIONS(360), 7,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(366), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [2524] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__property_with_hash,
    ACTIONS(130), 1,
      sym__property_starts_with_number,
    ACTIONS(126), 2,
      sym__label_name,
      sym__node_or_property,
    STATE(85), 2,
      sym_node,
      sym_property,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_AMP,
    ACTIONS(370), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      anon_sym_AT,
    ACTIONS(376), 1,
      anon_sym_COLON,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      sym_string_literal,
    ACTIONS(384), 2,
      sym_system_lib_string,
      sym_identifier,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_unit_address_token1,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(102), 2,
      sym__byte_string_item,
      aux_sym_byte_string_literal_repeat1,
  [2606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__property_with_hash,
    ACTIONS(390), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [2634] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      aux_sym_string_literal_token1,
    ACTIONS(398), 1,
      sym_escape_sequence,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
  [2650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_unit_address_token1,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym__byte_string_item,
      aux_sym_byte_string_literal_repeat1,
  [2664] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_string_literal_token1,
    ACTIONS(398), 1,
      sym_escape_sequence,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
  [2680] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      aux_sym_string_literal_token1,
    ACTIONS(410), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym_string_literal_repeat1,
  [2696] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(396), 1,
      aux_sym_string_literal_token1,
    ACTIONS(398), 1,
      sym_escape_sequence,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
  [2712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_unit_address_token1,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(102), 2,
      sym__byte_string_item,
      aux_sym_byte_string_literal_repeat1,
  [2726] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_string_literal_repeat1,
  [2742] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_LPAREN2,
    ACTIONS(429), 1,
      sym_preproc_arg,
    STATE(124), 1,
      sym_preproc_params,
  [2758] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym_string_literal_token1,
    ACTIONS(435), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2774] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      aux_sym_string_literal_token1,
    ACTIONS(442), 1,
      sym_escape_sequence,
    STATE(106), 1,
      aux_sym_string_literal_repeat1,
  [2790] = 3,
    ACTIONS(21), 1,
      sym_comment,
    STATE(65), 1,
      sym_node,
    ACTIONS(13), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_preproc_params_repeat1,
  [2815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_argument_list_repeat1,
  [2828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_preproc_params_repeat1,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_property_repeat1,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_argument_list_repeat1,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [2878] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(465), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_property_repeat1,
  [2900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_property_repeat1,
  [2913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
  [2926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_preproc_params_repeat1,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_unit_address_token1,
    STATE(164), 1,
      sym_unit_address,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_unit_address_token1,
    STATE(151), 1,
      sym_unit_address,
  [2985] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(492), 1,
      sym_preproc_arg,
  [2995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
  [3013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_string_literal,
  [3023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_EQ,
  [3033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_AT,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3051] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3091] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_unit_address_token1,
    STATE(157), 1,
      sym_unit_address,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3125] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
  [3147] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LF,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_integer_literal,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_identifier,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SEMI,
  [3175] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LF,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [3196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [3203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3217] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LF,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
  [3231] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3273] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LF,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym_integer_literal,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_SEMI,
  [3294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [3301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__label_name,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 398,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 494,
  [SMALL_STATE(16)] = 528,
  [SMALL_STATE(17)] = 576,
  [SMALL_STATE(18)] = 630,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 722,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 813,
  [SMALL_STATE(23)] = 865,
  [SMALL_STATE(24)] = 917,
  [SMALL_STATE(25)] = 969,
  [SMALL_STATE(26)] = 1010,
  [SMALL_STATE(27)] = 1051,
  [SMALL_STATE(28)] = 1088,
  [SMALL_STATE(29)] = 1125,
  [SMALL_STATE(30)] = 1162,
  [SMALL_STATE(31)] = 1199,
  [SMALL_STATE(32)] = 1236,
  [SMALL_STATE(33)] = 1273,
  [SMALL_STATE(34)] = 1310,
  [SMALL_STATE(35)] = 1347,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1413,
  [SMALL_STATE(38)] = 1446,
  [SMALL_STATE(39)] = 1472,
  [SMALL_STATE(40)] = 1504,
  [SMALL_STATE(41)] = 1530,
  [SMALL_STATE(42)] = 1556,
  [SMALL_STATE(43)] = 1588,
  [SMALL_STATE(44)] = 1614,
  [SMALL_STATE(45)] = 1644,
  [SMALL_STATE(46)] = 1670,
  [SMALL_STATE(47)] = 1696,
  [SMALL_STATE(48)] = 1722,
  [SMALL_STATE(49)] = 1748,
  [SMALL_STATE(50)] = 1774,
  [SMALL_STATE(51)] = 1800,
  [SMALL_STATE(52)] = 1826,
  [SMALL_STATE(53)] = 1852,
  [SMALL_STATE(54)] = 1878,
  [SMALL_STATE(55)] = 1904,
  [SMALL_STATE(56)] = 1930,
  [SMALL_STATE(57)] = 1956,
  [SMALL_STATE(58)] = 1988,
  [SMALL_STATE(59)] = 2005,
  [SMALL_STATE(60)] = 2022,
  [SMALL_STATE(61)] = 2039,
  [SMALL_STATE(62)] = 2056,
  [SMALL_STATE(63)] = 2073,
  [SMALL_STATE(64)] = 2090,
  [SMALL_STATE(65)] = 2107,
  [SMALL_STATE(66)] = 2124,
  [SMALL_STATE(67)] = 2141,
  [SMALL_STATE(68)] = 2158,
  [SMALL_STATE(69)] = 2175,
  [SMALL_STATE(70)] = 2192,
  [SMALL_STATE(71)] = 2209,
  [SMALL_STATE(72)] = 2226,
  [SMALL_STATE(73)] = 2243,
  [SMALL_STATE(74)] = 2259,
  [SMALL_STATE(75)] = 2275,
  [SMALL_STATE(76)] = 2291,
  [SMALL_STATE(77)] = 2307,
  [SMALL_STATE(78)] = 2323,
  [SMALL_STATE(79)] = 2339,
  [SMALL_STATE(80)] = 2355,
  [SMALL_STATE(81)] = 2377,
  [SMALL_STATE(82)] = 2393,
  [SMALL_STATE(83)] = 2409,
  [SMALL_STATE(84)] = 2425,
  [SMALL_STATE(85)] = 2441,
  [SMALL_STATE(86)] = 2457,
  [SMALL_STATE(87)] = 2473,
  [SMALL_STATE(88)] = 2489,
  [SMALL_STATE(89)] = 2505,
  [SMALL_STATE(90)] = 2524,
  [SMALL_STATE(91)] = 2545,
  [SMALL_STATE(92)] = 2559,
  [SMALL_STATE(93)] = 2578,
  [SMALL_STATE(94)] = 2592,
  [SMALL_STATE(95)] = 2606,
  [SMALL_STATE(96)] = 2622,
  [SMALL_STATE(97)] = 2634,
  [SMALL_STATE(98)] = 2650,
  [SMALL_STATE(99)] = 2664,
  [SMALL_STATE(100)] = 2680,
  [SMALL_STATE(101)] = 2696,
  [SMALL_STATE(102)] = 2712,
  [SMALL_STATE(103)] = 2726,
  [SMALL_STATE(104)] = 2742,
  [SMALL_STATE(105)] = 2758,
  [SMALL_STATE(106)] = 2774,
  [SMALL_STATE(107)] = 2790,
  [SMALL_STATE(108)] = 2802,
  [SMALL_STATE(109)] = 2815,
  [SMALL_STATE(110)] = 2828,
  [SMALL_STATE(111)] = 2841,
  [SMALL_STATE(112)] = 2854,
  [SMALL_STATE(113)] = 2867,
  [SMALL_STATE(114)] = 2878,
  [SMALL_STATE(115)] = 2887,
  [SMALL_STATE(116)] = 2900,
  [SMALL_STATE(117)] = 2913,
  [SMALL_STATE(118)] = 2926,
  [SMALL_STATE(119)] = 2939,
  [SMALL_STATE(120)] = 2947,
  [SMALL_STATE(121)] = 2955,
  [SMALL_STATE(122)] = 2965,
  [SMALL_STATE(123)] = 2975,
  [SMALL_STATE(124)] = 2985,
  [SMALL_STATE(125)] = 2995,
  [SMALL_STATE(126)] = 3003,
  [SMALL_STATE(127)] = 3013,
  [SMALL_STATE(128)] = 3023,
  [SMALL_STATE(129)] = 3033,
  [SMALL_STATE(130)] = 3043,
  [SMALL_STATE(131)] = 3051,
  [SMALL_STATE(132)] = 3059,
  [SMALL_STATE(133)] = 3067,
  [SMALL_STATE(134)] = 3075,
  [SMALL_STATE(135)] = 3083,
  [SMALL_STATE(136)] = 3091,
  [SMALL_STATE(137)] = 3099,
  [SMALL_STATE(138)] = 3109,
  [SMALL_STATE(139)] = 3117,
  [SMALL_STATE(140)] = 3125,
  [SMALL_STATE(141)] = 3133,
  [SMALL_STATE(142)] = 3140,
  [SMALL_STATE(143)] = 3147,
  [SMALL_STATE(144)] = 3154,
  [SMALL_STATE(145)] = 3161,
  [SMALL_STATE(146)] = 3168,
  [SMALL_STATE(147)] = 3175,
  [SMALL_STATE(148)] = 3182,
  [SMALL_STATE(149)] = 3189,
  [SMALL_STATE(150)] = 3196,
  [SMALL_STATE(151)] = 3203,
  [SMALL_STATE(152)] = 3210,
  [SMALL_STATE(153)] = 3217,
  [SMALL_STATE(154)] = 3224,
  [SMALL_STATE(155)] = 3231,
  [SMALL_STATE(156)] = 3238,
  [SMALL_STATE(157)] = 3245,
  [SMALL_STATE(158)] = 3252,
  [SMALL_STATE(159)] = 3259,
  [SMALL_STATE(160)] = 3266,
  [SMALL_STATE(161)] = 3273,
  [SMALL_STATE(162)] = 3280,
  [SMALL_STATE(163)] = 3287,
  [SMALL_STATE(164)] = 3294,
  [SMALL_STATE(165)] = 3301,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 13),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 15),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 18),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(162),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(92),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(122),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(95),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(128),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(128),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(80),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(96),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(165),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(114),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(57),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(89),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(54),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 7),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 6),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_node, 3, .production_id = 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_node, 3, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 10),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 4),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 12),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 12),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 14),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 14),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 9),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(102),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(106),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(106),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(47),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(44),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(133),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_address, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [516] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
