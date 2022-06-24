#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_SLASHdts_DASHv1_SLASH = 1,
  anon_sym_SEMI = 2,
  anon_sym_SLASHmemreserve_SLASH = 3,
  sym_comment = 4,
  sym__label_name = 5,
  sym__node_path = 6,
  sym__node_or_property = 7,
  sym__property_with_hash = 8,
  sym__property_starts_with_number = 9,
  sym_unit_address = 10,
  anon_sym_AMP = 11,
  anon_sym_AMP_LBRACE = 12,
  anon_sym_AT = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE = 16,
  anon_sym_EQ = 17,
  anon_sym_COMMA = 18,
  anon_sym_SLASHdelete_DASHnode_SLASH = 19,
  anon_sym_SLASHdelete_DASHproperty_SLASH = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_literal_token1 = 24,
  sym_escape_sequence = 25,
  sym_system_lib_string = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym__byte_string_item = 29,
  sym_integer_literal = 30,
  sym_identifier = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_QMARK = 34,
  anon_sym_BANG = 35,
  anon_sym_TILDE = 36,
  anon_sym_DASH = 37,
  anon_sym_PLUS = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_AMP_AMP = 43,
  anon_sym_PIPE = 44,
  anon_sym_CARET = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_LT_LT = 50,
  anon_sym_GT_GT = 51,
  anon_sym_SLASHinclude = 52,
  aux_sym_preproc_include_token1 = 53,
  anon_sym_LF = 54,
  aux_sym_preproc_def_token1 = 55,
  anon_sym_LPAREN2 = 56,
  anon_sym_DOT_DOT_DOT = 57,
  sym_preproc_arg = 58,
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

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASHdts_DASHv1_SLASH] = "/dts-v1/",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASHmemreserve_SLASH] = "/memreserve/",
  [sym_comment] = "comment",
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

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASHdts_DASHv1_SLASH] = anon_sym_SLASHdts_DASHv1_SLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASHmemreserve_SLASH] = anon_sym_SLASHmemreserve_SLASH,
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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

static const char * const ts_field_names[] = {
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

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 4},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0, .inherited = true},
  [1] =
    {field_address, 0, .inherited = true},
    {field_path, 0, .inherited = true},
  [3] =
    {field_label, 1},
  [4] =
    {field_path, 1},
  [5] =
    {field_item, 2},
    {field_label, 0},
  [7] =
    {field_name, 1},
  [8] =
    {field_name, 0},
  [9] =
    {field_name, 1},
    {field_value, 2},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
  [13] =
    {field_name, 0},
    {field_value, 1},
  [15] =
    {field_address, 2},
    {field_address, 3},
    {field_path, 1},
  [18] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [21] =
    {field_address, 1},
    {field_address, 2},
    {field_name, 0},
  [24] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [27] =
    {field_arguments, 1},
    {field_function, 0},
  [29] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [33] =
    {field_argument, 1},
    {field_operator, 0},
  [35] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [38] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
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
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(37)
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
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(205);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(170);
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
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(200);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
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
          lookahead != '\r') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(81);
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
      if (lookahead == '!') ADVANCE(182);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '&') ADVANCE(145);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '?') ADVANCE(180);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '^') ADVANCE(192);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(146);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == ';') ADVANCE(74);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASHdts_DASHv1_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASHmemreserve_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(215);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(101);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(78);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(73);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(75);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(155);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(156);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '1') ADVANCE(93);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'c') ADVANCE(111);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(102);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(199);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(127);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(92);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(120);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(94);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(95);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(122);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(128);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(103);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(119);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(98);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(118);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(100);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'p') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(104);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(126);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(91);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(123);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(131);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(105);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(99);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(97);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'y') ADVANCE(96);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__node_path);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__node_or_property);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__node_or_property);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_unit_address);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '>') ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(216);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(207);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
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
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 71},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 71},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 24},
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
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 71},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 71},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 36},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 36},
  [118] = {.lex_state = 71},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 37},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 71},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 21},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 71},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
  },
  [1] = {
    [sym_document] = STATE(137),
    [sym__top_level_item] = STATE(8),
    [sym_file_version] = STATE(8),
    [sym_memory_reservation] = STATE(8),
    [sym_reference] = STATE(125),
    [sym__label_reference] = STATE(78),
    [sym__node_reference] = STATE(79),
    [sym_labeled_node] = STATE(8),
    [sym_node] = STATE(8),
    [sym_dtsi_include] = STATE(8),
    [sym_preproc_include] = STATE(8),
    [sym_preproc_def] = STATE(8),
    [sym_preproc_function_def] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASHdts_DASHv1_SLASH] = ACTIONS(7),
    [anon_sym_SLASHmemreserve_SLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__label_name] = ACTIONS(11),
    [sym__node_path] = ACTIONS(13),
    [sym__node_or_property] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(15),
    [anon_sym_AMP_LBRACE] = ACTIONS(17),
    [anon_sym_SLASHinclude] = ACTIONS(19),
    [aux_sym_preproc_include_token1] = ACTIONS(21),
    [aux_sym_preproc_def_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
  [34] = 3,
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
  [68] = 3,
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
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(39), 21,
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
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(41), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(43), 17,
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
  [172] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(52), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(55), 1,
      sym__label_name,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(64), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(67), 1,
      anon_sym_SLASHinclude,
    ACTIONS(70), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(73), 1,
      aux_sym_preproc_def_token1,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(125), 1,
      sym_reference,
    ACTIONS(58), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(7), 10,
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
  [228] = 15,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(125), 1,
      sym_reference,
    ACTIONS(13), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(7), 10,
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
  [284] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(90), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(80), 13,
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
  [366] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(90), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [408] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [456] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [514] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [562] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(80), 17,
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
  [642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(90), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(80), 15,
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
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(114), 17,
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
  [706] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(116), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [760] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(80), 11,
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
  [798] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(90), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(80), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(120), 17,
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
  [872] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [925] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [977] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1029] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__label_name,
    ACTIONS(145), 1,
      sym__node_path,
    ACTIONS(148), 1,
      sym__node_or_property,
    ACTIONS(151), 1,
      sym__property_with_hash,
    ACTIONS(154), 1,
      sym__property_starts_with_number,
    ACTIONS(157), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(168), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1081] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(25), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1133] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1185] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(30), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1237] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1289] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1341] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(28), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1393] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(26), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1445] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_CARET,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_AMP_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(86), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1497] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
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
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    STATE(33), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(191), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 4,
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
  [1599] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(110), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(213), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1785] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(228), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_integer_literal,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(45), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(31), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1897] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(128), 1,
      sym__node_path,
    ACTIONS(132), 1,
      sym__property_with_hash,
    ACTIONS(134), 1,
      sym__property_starts_with_number,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(121), 1,
      sym_reference,
    ACTIONS(130), 2,
      sym__label_name,
      sym__node_or_property,
    STATE(88), 2,
      sym_node,
      sym_property,
  [1933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [1959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(34), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [1985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2063] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2089] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(205), 1,
      anon_sym_LT,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(124), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [2121] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(262), 1,
      anon_sym_GT,
    ACTIONS(264), 1,
      sym_integer_literal,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(45), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      sym_integer_literal,
    ACTIONS(201), 4,
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
  [2207] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym_GT,
    ACTIONS(274), 1,
      sym_integer_literal,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(58), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(278), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(282), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(286), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(290), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(294), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(298), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(302), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(306), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(310), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(314), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(318), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(322), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(326), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(294), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(328), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(332), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_AMP,
    ACTIONS(336), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_AMP,
    ACTIONS(340), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(344), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(348), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(298), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(352), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(356), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_AMP,
    ACTIONS(360), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(326), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(364), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(368), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(372), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(322), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    STATE(69), 1,
      sym_node,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(125), 1,
      sym_reference,
    ACTIONS(13), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    STATE(78), 1,
      sym__label_reference,
    STATE(79), 1,
      sym__node_reference,
    STATE(135), 1,
      sym_reference,
    ACTIONS(376), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_AMP,
    STATE(3), 1,
      sym_argument_list,
    ACTIONS(380), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [2879] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      aux_sym_string_literal_token1,
    ACTIONS(403), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym_string_literal_repeat1,
  [2895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__property_with_hash,
    ACTIONS(406), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [2907] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_string_literal_token1,
    ACTIONS(414), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym_string_literal_repeat1,
  [2923] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_string_literal_token1,
    ACTIONS(420), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_string_literal_repeat1,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string_literal,
    ACTIONS(424), 2,
      sym_system_lib_string,
      sym_identifier,
  [2953] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      aux_sym_string_literal_token1,
    ACTIONS(430), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_string_literal_repeat1,
  [2969] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      anon_sym_LPAREN2,
    ACTIONS(436), 1,
      sym_preproc_arg,
    STATE(126), 1,
      sym_preproc_params,
  [2985] = 5,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_string_literal_token1,
    ACTIONS(414), 1,
      sym_escape_sequence,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym_string_literal_repeat1,
  [3001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_preproc_params_repeat1,
  [3030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_argument_list_repeat1,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_AT,
    ACTIONS(448), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
  [3056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    ACTIONS(454), 1,
      sym__byte_string_item,
    STATE(107), 1,
      aux_sym_byte_string_literal_repeat1,
  [3069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      sym__byte_string_item,
    STATE(117), 1,
      aux_sym_byte_string_literal_repeat1,
  [3082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_property_repeat1,
  [3095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_property_repeat1,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_argument_list_repeat1,
  [3141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_preproc_params_repeat1,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_property_repeat1,
  [3167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_preproc_params_repeat1,
  [3180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      sym__byte_string_item,
    STATE(107), 1,
      aux_sym_byte_string_literal_repeat1,
  [3193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_EQ,
  [3203] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3211] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
  [3263] = 3,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 1,
      sym_preproc_arg,
  [3273] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_string_literal,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [3340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [3354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [3368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_unit_address,
  [3375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [3382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_unit_address,
  [3389] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LF,
  [3396] = 2,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      sym_comment,
  [3403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3410] = 2,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      sym_comment,
  [3417] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LF,
  [3424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_integer_literal,
  [3431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [3459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__label_name,
  [3487] = 2,
    ACTIONS(396), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_LF,
  [3494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_integer_literal,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_unit_address,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 612,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 676,
  [SMALL_STATE(19)] = 706,
  [SMALL_STATE(20)] = 760,
  [SMALL_STATE(21)] = 798,
  [SMALL_STATE(22)] = 842,
  [SMALL_STATE(23)] = 872,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1029,
  [SMALL_STATE(27)] = 1081,
  [SMALL_STATE(28)] = 1133,
  [SMALL_STATE(29)] = 1185,
  [SMALL_STATE(30)] = 1237,
  [SMALL_STATE(31)] = 1289,
  [SMALL_STATE(32)] = 1341,
  [SMALL_STATE(33)] = 1393,
  [SMALL_STATE(34)] = 1445,
  [SMALL_STATE(35)] = 1497,
  [SMALL_STATE(36)] = 1549,
  [SMALL_STATE(37)] = 1570,
  [SMALL_STATE(38)] = 1599,
  [SMALL_STATE(39)] = 1634,
  [SMALL_STATE(40)] = 1655,
  [SMALL_STATE(41)] = 1681,
  [SMALL_STATE(42)] = 1707,
  [SMALL_STATE(43)] = 1733,
  [SMALL_STATE(44)] = 1759,
  [SMALL_STATE(45)] = 1785,
  [SMALL_STATE(46)] = 1819,
  [SMALL_STATE(47)] = 1845,
  [SMALL_STATE(48)] = 1871,
  [SMALL_STATE(49)] = 1897,
  [SMALL_STATE(50)] = 1933,
  [SMALL_STATE(51)] = 1959,
  [SMALL_STATE(52)] = 1985,
  [SMALL_STATE(53)] = 2011,
  [SMALL_STATE(54)] = 2037,
  [SMALL_STATE(55)] = 2063,
  [SMALL_STATE(56)] = 2089,
  [SMALL_STATE(57)] = 2121,
  [SMALL_STATE(58)] = 2147,
  [SMALL_STATE(59)] = 2181,
  [SMALL_STATE(60)] = 2207,
  [SMALL_STATE(61)] = 2241,
  [SMALL_STATE(62)] = 2260,
  [SMALL_STATE(63)] = 2279,
  [SMALL_STATE(64)] = 2298,
  [SMALL_STATE(65)] = 2317,
  [SMALL_STATE(66)] = 2336,
  [SMALL_STATE(67)] = 2355,
  [SMALL_STATE(68)] = 2374,
  [SMALL_STATE(69)] = 2393,
  [SMALL_STATE(70)] = 2412,
  [SMALL_STATE(71)] = 2431,
  [SMALL_STATE(72)] = 2450,
  [SMALL_STATE(73)] = 2469,
  [SMALL_STATE(74)] = 2488,
  [SMALL_STATE(75)] = 2506,
  [SMALL_STATE(76)] = 2524,
  [SMALL_STATE(77)] = 2542,
  [SMALL_STATE(78)] = 2560,
  [SMALL_STATE(79)] = 2578,
  [SMALL_STATE(80)] = 2596,
  [SMALL_STATE(81)] = 2614,
  [SMALL_STATE(82)] = 2632,
  [SMALL_STATE(83)] = 2650,
  [SMALL_STATE(84)] = 2668,
  [SMALL_STATE(85)] = 2686,
  [SMALL_STATE(86)] = 2704,
  [SMALL_STATE(87)] = 2722,
  [SMALL_STATE(88)] = 2740,
  [SMALL_STATE(89)] = 2758,
  [SMALL_STATE(90)] = 2776,
  [SMALL_STATE(91)] = 2803,
  [SMALL_STATE(92)] = 2827,
  [SMALL_STATE(93)] = 2846,
  [SMALL_STATE(94)] = 2860,
  [SMALL_STATE(95)] = 2879,
  [SMALL_STATE(96)] = 2895,
  [SMALL_STATE(97)] = 2907,
  [SMALL_STATE(98)] = 2923,
  [SMALL_STATE(99)] = 2939,
  [SMALL_STATE(100)] = 2953,
  [SMALL_STATE(101)] = 2969,
  [SMALL_STATE(102)] = 2985,
  [SMALL_STATE(103)] = 3001,
  [SMALL_STATE(104)] = 3017,
  [SMALL_STATE(105)] = 3030,
  [SMALL_STATE(106)] = 3043,
  [SMALL_STATE(107)] = 3056,
  [SMALL_STATE(108)] = 3069,
  [SMALL_STATE(109)] = 3082,
  [SMALL_STATE(110)] = 3095,
  [SMALL_STATE(111)] = 3108,
  [SMALL_STATE(112)] = 3117,
  [SMALL_STATE(113)] = 3128,
  [SMALL_STATE(114)] = 3141,
  [SMALL_STATE(115)] = 3154,
  [SMALL_STATE(116)] = 3167,
  [SMALL_STATE(117)] = 3180,
  [SMALL_STATE(118)] = 3193,
  [SMALL_STATE(119)] = 3203,
  [SMALL_STATE(120)] = 3211,
  [SMALL_STATE(121)] = 3219,
  [SMALL_STATE(122)] = 3229,
  [SMALL_STATE(123)] = 3237,
  [SMALL_STATE(124)] = 3245,
  [SMALL_STATE(125)] = 3253,
  [SMALL_STATE(126)] = 3263,
  [SMALL_STATE(127)] = 3273,
  [SMALL_STATE(128)] = 3281,
  [SMALL_STATE(129)] = 3289,
  [SMALL_STATE(130)] = 3299,
  [SMALL_STATE(131)] = 3309,
  [SMALL_STATE(132)] = 3317,
  [SMALL_STATE(133)] = 3325,
  [SMALL_STATE(134)] = 3333,
  [SMALL_STATE(135)] = 3340,
  [SMALL_STATE(136)] = 3347,
  [SMALL_STATE(137)] = 3354,
  [SMALL_STATE(138)] = 3361,
  [SMALL_STATE(139)] = 3368,
  [SMALL_STATE(140)] = 3375,
  [SMALL_STATE(141)] = 3382,
  [SMALL_STATE(142)] = 3389,
  [SMALL_STATE(143)] = 3396,
  [SMALL_STATE(144)] = 3403,
  [SMALL_STATE(145)] = 3410,
  [SMALL_STATE(146)] = 3417,
  [SMALL_STATE(147)] = 3424,
  [SMALL_STATE(148)] = 3431,
  [SMALL_STATE(149)] = 3438,
  [SMALL_STATE(150)] = 3445,
  [SMALL_STATE(151)] = 3452,
  [SMALL_STATE(152)] = 3459,
  [SMALL_STATE(153)] = 3466,
  [SMALL_STATE(154)] = 3473,
  [SMALL_STATE(155)] = 3480,
  [SMALL_STATE(156)] = 3487,
  [SMALL_STATE(157)] = 3494,
  [SMALL_STATE(158)] = 3501,
  [SMALL_STATE(159)] = 3508,
  [SMALL_STATE(160)] = 3515,
  [SMALL_STATE(161)] = 3522,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(144),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(155),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 17),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 17),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 19),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(94),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(121),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(103),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(118),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(118),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(155),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(111),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(91),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(96),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(155),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(111),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(45),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(92),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_node, 3, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_node, 3, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 12),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 12),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 13),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 11),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 11),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 16),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 10),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 10),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(95),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(95),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(107),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(56),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(42),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(128),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_devicetree(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
