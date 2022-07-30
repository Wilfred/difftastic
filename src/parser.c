#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
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
  sym_labeled_item = 66,
  sym_node = 67,
  sym_property = 68,
  sym__node_members = 69,
  sym_delete_node = 70,
  sym_delete_property = 71,
  sym__property_value = 72,
  sym_integer_cells = 73,
  sym__integer_cell_items = 74,
  sym_string_literal = 75,
  sym_byte_string_literal = 76,
  sym__expression = 77,
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
  aux_sym_property_repeat1 = 90,
  aux_sym_integer_cells_repeat1 = 91,
  aux_sym_string_literal_repeat1 = 92,
  aux_sym_byte_string_literal_repeat1 = 93,
  aux_sym_argument_list_repeat1 = 94,
  aux_sym_preproc_params_repeat1 = 95,
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
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28)
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
      if (lookahead == '\\') SKIP(8)
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
      if (lookahead == '\\') SKIP(6)
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
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 24},
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
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 71},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 71},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
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
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 71},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 71},
  [100] = {.lex_state = 71},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 71},
  [104] = {.lex_state = 71},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 71},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 21},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 38},
  [166] = {.lex_state = 71},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 71},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 37},
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
    [sym_document] = STATE(156),
    [sym__top_level_item] = STATE(8),
    [sym_file_version] = STATE(8),
    [sym_memory_reservation] = STATE(8),
    [sym_reference] = STATE(132),
    [sym__label_reference] = STATE(82),
    [sym__node_reference] = STATE(83),
    [sym_labeled_item] = STATE(8),
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
  [136] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(46), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(49), 1,
      sym__label_name,
    ACTIONS(55), 1,
      anon_sym_AMP,
    ACTIONS(58), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(61), 1,
      anon_sym_SLASHinclude,
    ACTIONS(64), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(67), 1,
      aux_sym_preproc_def_token1,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(132), 1,
      sym_reference,
    ACTIONS(52), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(6), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_argument_list,
    ACTIONS(70), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(72), 17,
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
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(132), 1,
      sym_reference,
    ACTIONS(13), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(6), 10,
      sym__top_level_item,
      sym_file_version,
      sym_memory_reservation,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [284] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    STATE(123), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [342] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [392] = 3,
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
  [422] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(114), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(118), 17,
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
  [506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(108), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(120), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(108), 13,
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
  [586] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(108), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [628] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [674] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [722] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(120), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(108), 11,
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
  [808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(120), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(108), 15,
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
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(108), 17,
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
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [925] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(29), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [977] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(24), 7,
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
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1081] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(29), 7,
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
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(33), 7,
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
    ACTIONS(148), 1,
      sym__label_name,
    ACTIONS(151), 1,
      sym__node_path,
    ACTIONS(154), 1,
      sym__node_or_property,
    ACTIONS(157), 1,
      sym__property_with_hash,
    ACTIONS(160), 1,
      sym__property_starts_with_number,
    ACTIONS(163), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(174), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(29), 7,
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
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(27), 7,
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
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1341] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(35), 7,
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
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(29), 7,
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
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      anon_sym_SLASH,
    ACTIONS(94), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(96), 1,
      anon_sym_AMP_AMP,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    ACTIONS(100), 1,
      anon_sym_CARET,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(104), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1497] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    ACTIONS(136), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(138), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(29), 7,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1549] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(115), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1584] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(113), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1619] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__node_path,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(199), 1,
      sym__label_name,
    ACTIONS(201), 1,
      sym__node_or_property,
    ACTIONS(203), 1,
      sym__property_with_hash,
    ACTIONS(205), 1,
      sym__property_starts_with_number,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(132), 1,
      sym_reference,
    STATE(76), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(209), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1679] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_integer_literal,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 4,
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
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(223), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [1729] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(124), 1,
      sym__label_name,
    ACTIONS(126), 1,
      sym__node_path,
    ACTIONS(128), 1,
      sym__node_or_property,
    ACTIONS(130), 1,
      sym__property_with_hash,
    ACTIONS(132), 1,
      sym__property_starts_with_number,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(129), 1,
      sym_reference,
    STATE(81), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [1768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1794] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1898] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(241), 1,
      anon_sym_GT,
    ACTIONS(243), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(48), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [1932] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [1984] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2088] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2140] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(26), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2166] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(137), 5,
      sym_reference,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [2198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      sym_integer_literal,
    ACTIONS(219), 4,
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
  [2250] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(274), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      sym_integer_literal,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(48), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2284] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_GT,
    ACTIONS(284), 1,
      sym_integer_literal,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(61), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2318] = 3,
    ACTIONS(3), 1,
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
  [2337] = 3,
    ACTIONS(3), 1,
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
  [2356] = 3,
    ACTIONS(3), 1,
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
  [2375] = 3,
    ACTIONS(3), 1,
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
  [2394] = 3,
    ACTIONS(3), 1,
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
  [2413] = 3,
    ACTIONS(3), 1,
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
  [2432] = 3,
    ACTIONS(3), 1,
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
  [2451] = 3,
    ACTIONS(3), 1,
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
  [2470] = 3,
    ACTIONS(3), 1,
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
  [2489] = 3,
    ACTIONS(3), 1,
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
  [2508] = 3,
    ACTIONS(3), 1,
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
  [2527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(332), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(336), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(340), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(344), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(348), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(352), 7,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHinclude,
  [2641] = 3,
    ACTIONS(3), 1,
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
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(340), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(358), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2695] = 3,
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
  [2713] = 3,
    ACTIONS(3), 1,
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
  [2731] = 3,
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
  [2749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(304), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(300), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(308), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_AMP,
    ACTIONS(370), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
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
  [2839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_AMP,
    ACTIONS(374), 9,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(378), 7,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
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
  [2893] = 3,
    ACTIONS(3), 1,
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
  [2911] = 3,
    ACTIONS(3), 1,
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
  [2929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_AMP_LBRACE,
    STATE(82), 1,
      sym__label_reference,
    STATE(83), 1,
      sym__node_reference,
    STATE(162), 1,
      sym_reference,
    ACTIONS(382), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [2953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_AMP,
    STATE(2), 1,
      sym_argument_list,
    ACTIONS(386), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_AMP,
    ACTIONS(390), 5,
      anon_sym_AMP_LBRACE,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
      anon_sym_LPAREN,
  [2986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_AT,
    ACTIONS(396), 1,
      anon_sym_COLON,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [3005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [3024] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_string_literal_token1,
    ACTIONS(418), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3040] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 1,
      anon_sym_LPAREN2,
    ACTIONS(424), 1,
      sym_preproc_arg,
    STATE(138), 1,
      sym_preproc_params,
  [3056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_AT,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [3072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string_literal,
    ACTIONS(428), 2,
      sym_system_lib_string,
      sym_identifier,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__property_with_hash,
    ACTIONS(430), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [3114] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      aux_sym_string_literal_token1,
    ACTIONS(438), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_string_literal_repeat1,
  [3130] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_string_literal_token1,
    ACTIONS(445), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3146] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      aux_sym_string_literal_token1,
    ACTIONS(452), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_string_literal_repeat1,
  [3162] = 5,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_string_literal_token1,
    ACTIONS(418), 1,
      sym_escape_sequence,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
  [3178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_property_repeat1,
  [3191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    ACTIONS(463), 1,
      sym__byte_string_item,
    STATE(124), 1,
      aux_sym_byte_string_literal_repeat1,
  [3204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_property_repeat1,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_preproc_params_repeat1,
  [3230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      aux_sym_property_repeat1,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_preproc_params_repeat1,
  [3267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT,
    ACTIONS(396), 1,
      anon_sym_COLON,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [3280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_property_repeat1,
  [3293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_argument_list_repeat1,
  [3306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    ACTIONS(491), 1,
      sym__byte_string_item,
    STATE(121), 1,
      aux_sym_byte_string_literal_repeat1,
  [3319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_preproc_params_repeat1,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_argument_list_repeat1,
  [3345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    ACTIONS(500), 1,
      sym__byte_string_item,
    STATE(121), 1,
      aux_sym_byte_string_literal_repeat1,
  [3358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_property_repeat1,
  [3371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string_literal,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
  [3408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_AT,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [3418] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_AT,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3478] = 3,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      sym_preproc_arg,
  [3488] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3514] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_unit_address,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3551] = 2,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      sym_comment,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_SEMI,
  [3565] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LF,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [3586] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LF,
  [3593] = 2,
    ACTIONS(412), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LF,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_identifier,
  [3607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [3621] = 2,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      sym_comment,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_SEMI,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SEMI,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_SEMI,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__label_name,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_integer_literal,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_SEMI,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_integer_literal,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_unit_address,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_unit_address,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 392,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 506,
  [SMALL_STATE(15)] = 550,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 628,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 722,
  [SMALL_STATE(20)] = 770,
  [SMALL_STATE(21)] = 808,
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
  [SMALL_STATE(37)] = 1584,
  [SMALL_STATE(38)] = 1619,
  [SMALL_STATE(39)] = 1658,
  [SMALL_STATE(40)] = 1679,
  [SMALL_STATE(41)] = 1708,
  [SMALL_STATE(42)] = 1729,
  [SMALL_STATE(43)] = 1768,
  [SMALL_STATE(44)] = 1794,
  [SMALL_STATE(45)] = 1820,
  [SMALL_STATE(46)] = 1846,
  [SMALL_STATE(47)] = 1872,
  [SMALL_STATE(48)] = 1898,
  [SMALL_STATE(49)] = 1932,
  [SMALL_STATE(50)] = 1958,
  [SMALL_STATE(51)] = 1984,
  [SMALL_STATE(52)] = 2010,
  [SMALL_STATE(53)] = 2036,
  [SMALL_STATE(54)] = 2062,
  [SMALL_STATE(55)] = 2088,
  [SMALL_STATE(56)] = 2114,
  [SMALL_STATE(57)] = 2140,
  [SMALL_STATE(58)] = 2166,
  [SMALL_STATE(59)] = 2198,
  [SMALL_STATE(60)] = 2224,
  [SMALL_STATE(61)] = 2250,
  [SMALL_STATE(62)] = 2284,
  [SMALL_STATE(63)] = 2318,
  [SMALL_STATE(64)] = 2337,
  [SMALL_STATE(65)] = 2356,
  [SMALL_STATE(66)] = 2375,
  [SMALL_STATE(67)] = 2394,
  [SMALL_STATE(68)] = 2413,
  [SMALL_STATE(69)] = 2432,
  [SMALL_STATE(70)] = 2451,
  [SMALL_STATE(71)] = 2470,
  [SMALL_STATE(72)] = 2489,
  [SMALL_STATE(73)] = 2508,
  [SMALL_STATE(74)] = 2527,
  [SMALL_STATE(75)] = 2546,
  [SMALL_STATE(76)] = 2565,
  [SMALL_STATE(77)] = 2584,
  [SMALL_STATE(78)] = 2603,
  [SMALL_STATE(79)] = 2622,
  [SMALL_STATE(80)] = 2641,
  [SMALL_STATE(81)] = 2659,
  [SMALL_STATE(82)] = 2677,
  [SMALL_STATE(83)] = 2695,
  [SMALL_STATE(84)] = 2713,
  [SMALL_STATE(85)] = 2731,
  [SMALL_STATE(86)] = 2749,
  [SMALL_STATE(87)] = 2767,
  [SMALL_STATE(88)] = 2785,
  [SMALL_STATE(89)] = 2803,
  [SMALL_STATE(90)] = 2821,
  [SMALL_STATE(91)] = 2839,
  [SMALL_STATE(92)] = 2857,
  [SMALL_STATE(93)] = 2875,
  [SMALL_STATE(94)] = 2893,
  [SMALL_STATE(95)] = 2911,
  [SMALL_STATE(96)] = 2929,
  [SMALL_STATE(97)] = 2953,
  [SMALL_STATE(98)] = 2972,
  [SMALL_STATE(99)] = 2986,
  [SMALL_STATE(100)] = 3005,
  [SMALL_STATE(101)] = 3024,
  [SMALL_STATE(102)] = 3040,
  [SMALL_STATE(103)] = 3056,
  [SMALL_STATE(104)] = 3072,
  [SMALL_STATE(105)] = 3088,
  [SMALL_STATE(106)] = 3102,
  [SMALL_STATE(107)] = 3114,
  [SMALL_STATE(108)] = 3130,
  [SMALL_STATE(109)] = 3146,
  [SMALL_STATE(110)] = 3162,
  [SMALL_STATE(111)] = 3178,
  [SMALL_STATE(112)] = 3191,
  [SMALL_STATE(113)] = 3204,
  [SMALL_STATE(114)] = 3217,
  [SMALL_STATE(115)] = 3230,
  [SMALL_STATE(116)] = 3243,
  [SMALL_STATE(117)] = 3254,
  [SMALL_STATE(118)] = 3267,
  [SMALL_STATE(119)] = 3280,
  [SMALL_STATE(120)] = 3293,
  [SMALL_STATE(121)] = 3306,
  [SMALL_STATE(122)] = 3319,
  [SMALL_STATE(123)] = 3332,
  [SMALL_STATE(124)] = 3345,
  [SMALL_STATE(125)] = 3358,
  [SMALL_STATE(126)] = 3371,
  [SMALL_STATE(127)] = 3380,
  [SMALL_STATE(128)] = 3390,
  [SMALL_STATE(129)] = 3398,
  [SMALL_STATE(130)] = 3408,
  [SMALL_STATE(131)] = 3418,
  [SMALL_STATE(132)] = 3426,
  [SMALL_STATE(133)] = 3436,
  [SMALL_STATE(134)] = 3444,
  [SMALL_STATE(135)] = 3452,
  [SMALL_STATE(136)] = 3462,
  [SMALL_STATE(137)] = 3470,
  [SMALL_STATE(138)] = 3478,
  [SMALL_STATE(139)] = 3488,
  [SMALL_STATE(140)] = 3496,
  [SMALL_STATE(141)] = 3506,
  [SMALL_STATE(142)] = 3514,
  [SMALL_STATE(143)] = 3522,
  [SMALL_STATE(144)] = 3530,
  [SMALL_STATE(145)] = 3537,
  [SMALL_STATE(146)] = 3544,
  [SMALL_STATE(147)] = 3551,
  [SMALL_STATE(148)] = 3558,
  [SMALL_STATE(149)] = 3565,
  [SMALL_STATE(150)] = 3572,
  [SMALL_STATE(151)] = 3579,
  [SMALL_STATE(152)] = 3586,
  [SMALL_STATE(153)] = 3593,
  [SMALL_STATE(154)] = 3600,
  [SMALL_STATE(155)] = 3607,
  [SMALL_STATE(156)] = 3614,
  [SMALL_STATE(157)] = 3621,
  [SMALL_STATE(158)] = 3628,
  [SMALL_STATE(159)] = 3635,
  [SMALL_STATE(160)] = 3642,
  [SMALL_STATE(161)] = 3649,
  [SMALL_STATE(162)] = 3656,
  [SMALL_STATE(163)] = 3663,
  [SMALL_STATE(164)] = 3670,
  [SMALL_STATE(165)] = 3677,
  [SMALL_STATE(166)] = 3684,
  [SMALL_STATE(167)] = 3691,
  [SMALL_STATE(168)] = 3698,
  [SMALL_STATE(169)] = 3705,
  [SMALL_STATE(170)] = 3712,
  [SMALL_STATE(171)] = 3719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(165),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(154),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 17),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 19),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(100),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(129),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(104),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(135),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(135),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(165),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(126),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(96),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(106),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(165),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(126),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(48),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(97),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(45),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 10),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 13),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 13),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 16),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 16),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 12),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 13),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 13),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 11),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 11),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(108),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(58),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(128),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(55),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(121),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
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
