#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  sym_unit_address = 9,
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
  sym__byte_string_item = 28,
  sym_integer_literal = 29,
  sym_identifier = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_QMARK = 33,
  anon_sym_BANG = 34,
  anon_sym_TILDE = 35,
  anon_sym_DASH = 36,
  anon_sym_PLUS = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_PIPE_PIPE = 41,
  anon_sym_AMP_AMP = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_GT_EQ = 47,
  anon_sym_LT_EQ = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_SLASHinclude = 51,
  aux_sym_preproc_include_token1 = 52,
  anon_sym_LF = 53,
  aux_sym_preproc_def_token1 = 54,
  anon_sym_LPAREN2 = 55,
  anon_sym_DOT_DOT_DOT = 56,
  sym_preproc_arg = 57,
  sym_comment = 58,
  sym_document = 59,
  sym__top_level_item = 60,
  sym_file_version = 61,
  sym_memory_reservation = 62,
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
  sym__expression = 78,
  sym_call_expression = 79,
  sym_argument_list = 80,
  sym_conditional_expression = 81,
  sym_unary_expression = 82,
  sym_binary_expression = 83,
  sym_dtsi_include = 84,
  sym_preproc_include = 85,
  sym_preproc_def = 86,
  sym_preproc_function_def = 87,
  sym_preproc_params = 88,
  aux_sym_document_repeat1 = 89,
  aux_sym_node_repeat1 = 90,
  aux_sym_property_repeat1 = 91,
  aux_sym_integer_cells_repeat1 = 92,
  aux_sym_string_literal_repeat1 = 93,
  aux_sym_byte_string_literal_repeat1 = 94,
  aux_sym_argument_list_repeat1 = 95,
  aux_sym_preproc_params_repeat1 = 96,
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
  [sym_unit_address] = "unit_address",
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
  [sym_file_version] = "file_version",
  [sym_memory_reservation] = "memory_reservation",
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
  [sym_unit_address] = sym_unit_address,
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
  [sym_file_version] = sym_file_version,
  [sym_memory_reservation] = sym_memory_reservation,
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
  [sym_unit_address] = {
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
  [sym_file_version] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_reservation] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 4},
  [16] = {.index = 31, .length = 2},
  [17] = {.index = 33, .length = 3},
  [18] = {.index = 36, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0, .inherited = true},
  [1] =
    {field_label, 1},
  [2] =
    {field_path, 1},
  [3] =
    {field_item, 2},
    {field_label, 0},
  [5] =
    {field_name, 1},
  [6] =
    {field_name, 0},
  [7] =
    {field_name, 1},
    {field_value, 2},
  [9] =
    {field_name, 1},
    {field_parameters, 2},
  [11] =
    {field_name, 0},
    {field_value, 1},
  [13] =
    {field_address, 2},
    {field_address, 3},
    {field_path, 1},
  [16] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [19] =
    {field_address, 1},
    {field_address, 2},
    {field_name, 0},
  [22] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [25] =
    {field_arguments, 1},
    {field_function, 0},
  [27] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [31] =
    {field_argument, 1},
    {field_operator, 0},
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
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '\\') SKIP(70)
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '~') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(162);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(39)
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
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(178);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '&') ADVANCE(143);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '&') ADVANCE(143);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '&') ADVANCE(143);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(202);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(217);
      if (lookahead == '\r') ADVANCE(219);
      END_STATE();
    case 69:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(69)
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '\r') SKIP(71)
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == ')') ADVANCE(176);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(154);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '?') ADVANCE(177);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == '\\') SKIP(70)
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(188);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '~') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '&') ADVANCE(143);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASHdts_DASHv1_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASHmemreserve_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(103);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(94);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(126);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(76);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(78);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(153);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '1') ADVANCE(89);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '\\') ADVANCE(68);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'c') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(99);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(196);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(88);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(90);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(91);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(119);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(125);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(95);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(118);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'p') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(127);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(87);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(104);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(120);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(128);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(102);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(96);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(93);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'y') ADVANCE(92);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__node_path);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__node_or_property);
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__node_or_property);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_unit_address);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(187);
      if (lookahead == '{') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '>') ADVANCE(195);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(186);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(218);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(204);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(204);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(68);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(212);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 74},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 26},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 26},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 40},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__label_name] = ACTIONS(1),
    [sym__node_or_property] = ACTIONS(1),
    [sym__property_starts_with_number] = ACTIONS(1),
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
    [sym_document] = STATE(139),
    [sym__top_level_item] = STATE(6),
    [sym_file_version] = STATE(6),
    [sym_memory_reservation] = STATE(6),
    [sym_reference] = STATE(127),
    [sym__label_reference] = STATE(83),
    [sym__node_reference] = STATE(83),
    [sym_labeled_node] = STATE(6),
    [sym_node] = STATE(6),
    [sym_dtsi_include] = STATE(6),
    [sym_preproc_include] = STATE(6),
    [sym_preproc_def] = STATE(6),
    [sym_preproc_function_def] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASHdts_DASHv1_SLASH] = ACTIONS(7),
    [anon_sym_SLASHmemreserve_SLASH] = ACTIONS(9),
    [sym__label_name] = ACTIONS(11),
    [sym__node_path] = ACTIONS(13),
    [sym__node_or_property] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_AMP_LBRACE] = ACTIONS(17),
    [anon_sym_SLASHinclude] = ACTIONS(19),
    [aux_sym_preproc_include_token1] = ACTIONS(21),
    [aux_sym_preproc_def_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
  [34] = 3,
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
  [68] = 3,
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
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(41), 21,
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
  [136] = 14,
    ACTIONS(7), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(11), 1,
      sym__label_name,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(19), 1,
      anon_sym_SLASHinclude,
    ACTIONS(21), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(23), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_reference,
    ACTIONS(13), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(8), 10,
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
  [190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_argument_list,
    ACTIONS(45), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(47), 17,
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
  [226] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(56), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(59), 1,
      sym__label_name,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(68), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(71), 1,
      anon_sym_SLASHinclude,
    ACTIONS(74), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(77), 1,
      aux_sym_preproc_def_token1,
    STATE(127), 1,
      sym_reference,
    ACTIONS(62), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(8), 10,
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
  [280] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(82), 13,
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
  [364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [406] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(104), 17,
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
  [482] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [530] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(82), 17,
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
  [610] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(82), 15,
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
  [644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(92), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(82), 11,
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
  [682] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(82), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(112), 17,
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
  [756] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    STATE(113), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [814] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [868] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [921] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(34), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [971] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1023] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(35), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1073] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1125] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1175] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(31), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1225] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_AMP,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_CARET,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(100), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1277] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1327] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(28), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1377] = 14,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__label_name,
    ACTIONS(161), 1,
      sym__node_path,
    ACTIONS(164), 1,
      sym__node_or_property,
    ACTIONS(167), 1,
      sym__property_with_hash,
    ACTIONS(170), 1,
      sym__property_starts_with_number,
    ACTIONS(173), 1,
      anon_sym_AMP,
    ACTIONS(176), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(184), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1427] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1477] = 14,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__label_name,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(130), 1,
      sym__node_or_property,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1527] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_integer_literal,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 4,
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
  [1556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(114), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(10), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1667] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(221), 1,
      anon_sym_GT,
    ACTIONS(223), 1,
      sym_integer_literal,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(41), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1699] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(30), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1777] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(238), 1,
      anon_sym_GT,
    ACTIONS(240), 1,
      sym_integer_literal,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(49), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1835] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(27), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(25), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1887] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(254), 1,
      sym_integer_literal,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(41), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [1945] = 10,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    STATE(121), 1,
      sym_reference,
    ACTIONS(130), 2,
      sym__label_name,
      sym__node_or_property,
    STATE(81), 2,
      sym_node,
      sym_property,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
  [1979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    STATE(135), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [2087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      sym_integer_literal,
    ACTIONS(199), 4,
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
  [2165] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(272), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2184] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(276), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2203] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(280), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2222] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(284), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2241] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(288), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2260] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(292), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2279] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(294), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(296), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2298] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(298), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(300), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2317] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(302), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(304), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2336] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(306), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(308), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2355] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(310), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(312), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2374] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(314), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(316), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2393] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(318), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(320), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2412] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(322), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(324), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2431] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(326), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(328), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2450] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(322), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(324), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_AMP,
    ACTIONS(330), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2486] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(336), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(334), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2504] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(340), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(338), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2522] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(344), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(342), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_AMP,
    ACTIONS(346), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2558] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(352), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(350), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2576] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(356), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(354), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2594] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(360), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(358), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_AMP,
    ACTIONS(362), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_AMP,
    ACTIONS(366), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2648] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(286), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(288), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2666] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(318), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(320), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2684] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(294), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(296), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2702] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(372), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(370), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2720] = 7,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    STATE(70), 1,
      sym_node,
    STATE(127), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    ACTIONS(13), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2745] = 6,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(25), 1,
      sym_comment,
    STATE(138), 1,
      sym_reference,
    STATE(83), 2,
      sym__label_reference,
      sym__node_reference,
    ACTIONS(374), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_AMP,
    STATE(2), 1,
      sym_argument_list,
    ACTIONS(378), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_AMP,
    ACTIONS(382), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_AT,
    ACTIONS(388), 1,
      anon_sym_COLON,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_EQ,
  [2819] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      aux_sym_string_literal_token1,
    ACTIONS(399), 1,
      sym_escape_sequence,
    STATE(94), 1,
      aux_sym_string_literal_repeat1,
  [2835] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      anon_sym_LPAREN2,
    ACTIONS(406), 1,
      sym_preproc_arg,
    STATE(128), 1,
      sym_preproc_params,
  [2851] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      aux_sym_string_literal_token1,
    ACTIONS(412), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2867] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_string_literal_token1,
    ACTIONS(418), 1,
      sym_escape_sequence,
    STATE(94), 1,
      aux_sym_string_literal_repeat1,
  [2883] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      aux_sym_string_literal_token1,
    ACTIONS(424), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym_string_literal_repeat1,
  [2899] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_string_literal_token1,
    ACTIONS(418), 1,
      sym_escape_sequence,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_literal_repeat1,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__property_with_hash,
    ACTIONS(428), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [2927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string_literal,
    ACTIONS(434), 2,
      sym_system_lib_string,
      sym_identifier,
  [2941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_EQ,
  [2957] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_string_literal_token1,
    ACTIONS(418), 1,
      sym_escape_sequence,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_literal_repeat1,
  [2973] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      aux_sym_string_literal_token1,
    ACTIONS(442), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym_string_literal_repeat1,
  [2989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(446), 1,
      sym__byte_string_item,
    STATE(105), 1,
      aux_sym_byte_string_literal_repeat1,
  [3002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(451), 1,
      sym__byte_string_item,
    STATE(105), 1,
      aux_sym_byte_string_literal_repeat1,
  [3015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(459), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_preproc_params_repeat1,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_property_repeat1,
  [3065] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(472), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_property_repeat1,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_preproc_params_repeat1,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_preproc_params_repeat1,
  [3139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    ACTIONS(492), 1,
      sym__byte_string_item,
    STATE(106), 1,
      aux_sym_byte_string_literal_repeat1,
  [3152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      aux_sym_property_repeat1,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_EQ,
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [3193] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_AT,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [3243] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      sym_preproc_arg,
  [3253] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_AT,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_string_literal,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3313] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3321] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LF,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SEMI,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [3349] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_LF,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_unit_address,
  [3370] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LF,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_integer_literal,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_unit_address,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_SEMI,
  [3454] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__label_name,
  [3475] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LF,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_integer_literal,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SEMI,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_unit_address,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 280,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 452,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 756,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 868,
  [SMALL_STATE(24)] = 921,
  [SMALL_STATE(25)] = 971,
  [SMALL_STATE(26)] = 1023,
  [SMALL_STATE(27)] = 1073,
  [SMALL_STATE(28)] = 1125,
  [SMALL_STATE(29)] = 1175,
  [SMALL_STATE(30)] = 1225,
  [SMALL_STATE(31)] = 1277,
  [SMALL_STATE(32)] = 1327,
  [SMALL_STATE(33)] = 1377,
  [SMALL_STATE(34)] = 1427,
  [SMALL_STATE(35)] = 1477,
  [SMALL_STATE(36)] = 1527,
  [SMALL_STATE(37)] = 1556,
  [SMALL_STATE(38)] = 1589,
  [SMALL_STATE(39)] = 1615,
  [SMALL_STATE(40)] = 1641,
  [SMALL_STATE(41)] = 1667,
  [SMALL_STATE(42)] = 1699,
  [SMALL_STATE(43)] = 1725,
  [SMALL_STATE(44)] = 1751,
  [SMALL_STATE(45)] = 1777,
  [SMALL_STATE(46)] = 1809,
  [SMALL_STATE(47)] = 1835,
  [SMALL_STATE(48)] = 1861,
  [SMALL_STATE(49)] = 1887,
  [SMALL_STATE(50)] = 1919,
  [SMALL_STATE(51)] = 1945,
  [SMALL_STATE(52)] = 1979,
  [SMALL_STATE(53)] = 2005,
  [SMALL_STATE(54)] = 2031,
  [SMALL_STATE(55)] = 2057,
  [SMALL_STATE(56)] = 2087,
  [SMALL_STATE(57)] = 2113,
  [SMALL_STATE(58)] = 2139,
  [SMALL_STATE(59)] = 2165,
  [SMALL_STATE(60)] = 2184,
  [SMALL_STATE(61)] = 2203,
  [SMALL_STATE(62)] = 2222,
  [SMALL_STATE(63)] = 2241,
  [SMALL_STATE(64)] = 2260,
  [SMALL_STATE(65)] = 2279,
  [SMALL_STATE(66)] = 2298,
  [SMALL_STATE(67)] = 2317,
  [SMALL_STATE(68)] = 2336,
  [SMALL_STATE(69)] = 2355,
  [SMALL_STATE(70)] = 2374,
  [SMALL_STATE(71)] = 2393,
  [SMALL_STATE(72)] = 2412,
  [SMALL_STATE(73)] = 2431,
  [SMALL_STATE(74)] = 2450,
  [SMALL_STATE(75)] = 2468,
  [SMALL_STATE(76)] = 2486,
  [SMALL_STATE(77)] = 2504,
  [SMALL_STATE(78)] = 2522,
  [SMALL_STATE(79)] = 2540,
  [SMALL_STATE(80)] = 2558,
  [SMALL_STATE(81)] = 2576,
  [SMALL_STATE(82)] = 2594,
  [SMALL_STATE(83)] = 2612,
  [SMALL_STATE(84)] = 2630,
  [SMALL_STATE(85)] = 2648,
  [SMALL_STATE(86)] = 2666,
  [SMALL_STATE(87)] = 2684,
  [SMALL_STATE(88)] = 2702,
  [SMALL_STATE(89)] = 2720,
  [SMALL_STATE(90)] = 2745,
  [SMALL_STATE(91)] = 2767,
  [SMALL_STATE(92)] = 2786,
  [SMALL_STATE(93)] = 2800,
  [SMALL_STATE(94)] = 2819,
  [SMALL_STATE(95)] = 2835,
  [SMALL_STATE(96)] = 2851,
  [SMALL_STATE(97)] = 2867,
  [SMALL_STATE(98)] = 2883,
  [SMALL_STATE(99)] = 2899,
  [SMALL_STATE(100)] = 2915,
  [SMALL_STATE(101)] = 2927,
  [SMALL_STATE(102)] = 2941,
  [SMALL_STATE(103)] = 2957,
  [SMALL_STATE(104)] = 2973,
  [SMALL_STATE(105)] = 2989,
  [SMALL_STATE(106)] = 3002,
  [SMALL_STATE(107)] = 3015,
  [SMALL_STATE(108)] = 3028,
  [SMALL_STATE(109)] = 3039,
  [SMALL_STATE(110)] = 3052,
  [SMALL_STATE(111)] = 3065,
  [SMALL_STATE(112)] = 3074,
  [SMALL_STATE(113)] = 3087,
  [SMALL_STATE(114)] = 3100,
  [SMALL_STATE(115)] = 3113,
  [SMALL_STATE(116)] = 3126,
  [SMALL_STATE(117)] = 3139,
  [SMALL_STATE(118)] = 3152,
  [SMALL_STATE(119)] = 3165,
  [SMALL_STATE(120)] = 3173,
  [SMALL_STATE(121)] = 3183,
  [SMALL_STATE(122)] = 3193,
  [SMALL_STATE(123)] = 3201,
  [SMALL_STATE(124)] = 3209,
  [SMALL_STATE(125)] = 3217,
  [SMALL_STATE(126)] = 3225,
  [SMALL_STATE(127)] = 3233,
  [SMALL_STATE(128)] = 3243,
  [SMALL_STATE(129)] = 3253,
  [SMALL_STATE(130)] = 3261,
  [SMALL_STATE(131)] = 3271,
  [SMALL_STATE(132)] = 3279,
  [SMALL_STATE(133)] = 3287,
  [SMALL_STATE(134)] = 3295,
  [SMALL_STATE(135)] = 3305,
  [SMALL_STATE(136)] = 3313,
  [SMALL_STATE(137)] = 3321,
  [SMALL_STATE(138)] = 3328,
  [SMALL_STATE(139)] = 3335,
  [SMALL_STATE(140)] = 3342,
  [SMALL_STATE(141)] = 3349,
  [SMALL_STATE(142)] = 3356,
  [SMALL_STATE(143)] = 3363,
  [SMALL_STATE(144)] = 3370,
  [SMALL_STATE(145)] = 3377,
  [SMALL_STATE(146)] = 3384,
  [SMALL_STATE(147)] = 3391,
  [SMALL_STATE(148)] = 3398,
  [SMALL_STATE(149)] = 3405,
  [SMALL_STATE(150)] = 3412,
  [SMALL_STATE(151)] = 3419,
  [SMALL_STATE(152)] = 3426,
  [SMALL_STATE(153)] = 3433,
  [SMALL_STATE(154)] = 3440,
  [SMALL_STATE(155)] = 3447,
  [SMALL_STATE(156)] = 3454,
  [SMALL_STATE(157)] = 3461,
  [SMALL_STATE(158)] = 3468,
  [SMALL_STATE(159)] = 3475,
  [SMALL_STATE(160)] = 3482,
  [SMALL_STATE(161)] = 3489,
  [SMALL_STATE(162)] = 3496,
  [SMALL_STATE(163)] = 3503,
  [SMALL_STATE(164)] = 3510,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 14),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(148),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(161),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 17),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 16),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 16),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 18),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(93),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(121),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(102),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(120),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(120),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(158),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(111),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(90),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(100),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(158),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(111),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(41),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(91),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(44),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 7),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 8),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_node, 3, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_node, 3, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 6),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 15),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 9),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 9),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 13),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(94),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(94),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(105),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(55),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(38),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(131),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_devicetree(void) {
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
