#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum {
  anon_sym_SLASHdts_DASHv1_SLASH = 1,
  anon_sym_SEMI = 2,
  anon_sym_SLASHplugin_SLASH = 3,
  anon_sym_SLASHmemreserve_SLASH = 4,
  sym_comment = 5,
  sym__label_name = 6,
  sym__node_path = 7,
  sym__node_or_property = 8,
  sym__property_with_hash = 9,
  sym__property_starts_with_number = 10,
  sym_unit_address = 11,
  anon_sym_AMP = 12,
  anon_sym_AMP_LBRACE = 13,
  anon_sym_AT = 14,
  anon_sym_RBRACE = 15,
  anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH = 16,
  anon_sym_COLON = 17,
  anon_sym_LBRACE = 18,
  anon_sym_SLASHbits_SLASH = 19,
  anon_sym_EQ = 20,
  anon_sym_COMMA = 21,
  anon_sym_SLASHdelete_DASHnode_SLASH = 22,
  anon_sym_SLASHdelete_DASHproperty_SLASH = 23,
  anon_sym_SLASHincbin_SLASH = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_literal_token1 = 30,
  sym_escape_sequence = 31,
  sym_system_lib_string = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  sym__byte_string_item = 35,
  sym_integer_literal = 36,
  sym_identifier = 37,
  anon_sym_QMARK = 38,
  anon_sym_BANG = 39,
  anon_sym_TILDE = 40,
  anon_sym_DASH = 41,
  anon_sym_PLUS = 42,
  anon_sym_STAR = 43,
  anon_sym_SLASH = 44,
  anon_sym_PERCENT = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_PIPE = 48,
  anon_sym_CARET = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_LT_LT = 54,
  anon_sym_GT_GT = 55,
  anon_sym_SLASHinclude = 56,
  aux_sym_preproc_include_token1 = 57,
  anon_sym_LF = 58,
  aux_sym_preproc_def_token1 = 59,
  anon_sym_LPAREN2 = 60,
  anon_sym_DOT_DOT_DOT = 61,
  sym_preproc_arg = 62,
  sym_document = 63,
  sym__top_level_item = 64,
  sym_file_version = 65,
  sym_plugin = 66,
  sym_memory_reservation = 67,
  sym_reference = 68,
  sym__label_reference = 69,
  sym__node_reference = 70,
  sym_omit_if_no_ref = 71,
  sym_labeled_item = 72,
  sym_node = 73,
  sym__bits = 74,
  sym_property = 75,
  sym__node_members = 76,
  sym_delete_node = 77,
  sym_delete_property = 78,
  sym_incbin = 79,
  sym__property_value = 80,
  sym_integer_cells = 81,
  sym__integer_cell_items = 82,
  sym_string_literal = 83,
  sym_byte_string_literal = 84,
  sym__expression = 85,
  sym_call_expression = 86,
  sym_argument_list = 87,
  sym_conditional_expression = 88,
  sym_unary_expression = 89,
  sym_binary_expression = 90,
  sym_dtsi_include = 91,
  sym_preproc_include = 92,
  sym_preproc_def = 93,
  sym_preproc_function_def = 94,
  sym_preproc_params = 95,
  aux_sym_document_repeat1 = 96,
  aux_sym_node_repeat1 = 97,
  aux_sym_property_repeat1 = 98,
  aux_sym_integer_cells_repeat1 = 99,
  aux_sym_string_literal_repeat1 = 100,
  aux_sym_byte_string_literal_repeat1 = 101,
  aux_sym_argument_list_repeat1 = 102,
  aux_sym_preproc_params_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASHdts_DASHv1_SLASH] = "/dts-v1/",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASHplugin_SLASH] = "/plugin/",
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
  [anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH] = "/omit-if-no-ref/",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SLASHbits_SLASH] = "/bits/",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_SLASHdelete_DASHnode_SLASH] = "/delete-node/",
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = "/delete-property/",
  [anon_sym_SLASHincbin_SLASH] = "/incbin/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_plugin] = "plugin",
  [sym_memory_reservation] = "memory_reservation",
  [sym_reference] = "reference",
  [sym__label_reference] = "_label_reference",
  [sym__node_reference] = "_node_reference",
  [sym_omit_if_no_ref] = "omit_if_no_ref",
  [sym_labeled_item] = "labeled_item",
  [sym_node] = "node",
  [sym__bits] = "_bits",
  [sym_property] = "property",
  [sym__node_members] = "_node_members",
  [sym_delete_node] = "delete_node",
  [sym_delete_property] = "delete_property",
  [sym_incbin] = "incbin",
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
  [anon_sym_SLASHplugin_SLASH] = anon_sym_SLASHplugin_SLASH,
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
  [anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH] = anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SLASHbits_SLASH] = anon_sym_SLASHbits_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SLASHdelete_DASHnode_SLASH] = anon_sym_SLASHdelete_DASHnode_SLASH,
  [anon_sym_SLASHdelete_DASHproperty_SLASH] = anon_sym_SLASHdelete_DASHproperty_SLASH,
  [anon_sym_SLASHincbin_SLASH] = anon_sym_SLASHincbin_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_plugin] = sym_plugin,
  [sym_memory_reservation] = sym_memory_reservation,
  [sym_reference] = sym_reference,
  [sym__label_reference] = sym__label_reference,
  [sym__node_reference] = sym__node_reference,
  [sym_omit_if_no_ref] = sym_omit_if_no_ref,
  [sym_labeled_item] = sym_labeled_item,
  [sym_node] = sym_node,
  [sym__bits] = sym__bits,
  [sym_property] = sym_property,
  [sym__node_members] = sym__node_members,
  [sym_delete_node] = sym_delete_node,
  [sym_delete_property] = sym_delete_property,
  [sym_incbin] = sym_incbin,
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
  [anon_sym_SLASHplugin_SLASH] = {
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
  [anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH] = {
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
  [anon_sym_SLASHbits_SLASH] = {
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
  [anon_sym_SLASHincbin_SLASH] = {
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
  [sym_plugin] = {
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
  [sym_omit_if_no_ref] = {
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
  [sym__bits] = {
    .visible = false,
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
  [sym_incbin] = {
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
  field_bits = 5,
  field_condition = 6,
  field_consequence = 7,
  field_filename = 8,
  field_function = 9,
  field_item = 10,
  field_label = 11,
  field_left = 12,
  field_name = 13,
  field_offset = 14,
  field_operator = 15,
  field_parameters = 16,
  field_path = 17,
  field_right = 18,
  field_size = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_bits] = "bits",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_filename] = "filename",
  [field_function] = "function",
  [field_item] = "item",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_right] = "right",
  [field_size] = "size",
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
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 3},
  [18] = {.index = 34, .length = 1},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 4},
  [21] = {.index = 41, .length = 3},
  [22] = {.index = 44, .length = 3},
  [23] = {.index = 47, .length = 3},
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
    {field_bits, 2},
    {field_name, 0},
  [24] =
    {field_name, 0},
    {field_value, 2},
  [26] =
    {field_arguments, 1},
    {field_function, 0},
  [28] =
    {field_bits, 2},
    {field_name, 0},
    {field_value, 3},
  [31] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
  [34] =
    {field_filename, 2},
  [35] =
    {field_argument, 1},
    {field_operator, 0},
  [37] =
    {field_bits, 2},
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
  [41] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [44] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [47] =
    {field_filename, 2},
    {field_offset, 4},
    {field_size, 6},
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
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(180);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '0') ADVANCE(172);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(184);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(30)
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
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(31)
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
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(42)
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
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(180);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(220);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '}') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(244);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(194);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(96);
      END_STATE();
    case 80:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 81:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(80)
      END_STATE();
    case 82:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 83:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(82)
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(180);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '0') ADVANCE(172);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '^') ADVANCE(231);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(184);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == '(') ADVANCE(195);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '@') ADVANCE(183);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASHdts_DASHv1_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASHplugin_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASHmemreserve_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(79);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(254);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__label_name);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(138);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(141);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(93);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(164);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(146);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(144);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(135);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '-') ADVANCE(155);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(87);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(89);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(90);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(185);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(192);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(193);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '1') ADVANCE(111);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'c') ADVANCE(139);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(121);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'd') ADVANCE(131);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(238);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(142);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(157);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(152);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(161);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(113);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(154);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(107);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'e') ADVANCE(115);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'f') ADVANCE(108);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'f') ADVANCE(114);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'g') ADVANCE(137);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'i') ADVANCE(132);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'i') ADVANCE(160);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'i') ADVANCE(145);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'l') ADVANCE(127);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(136);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'm') ADVANCE(151);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(118);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(148);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(112);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'p') ADVANCE(153);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(150);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'o') ADVANCE(120);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'p') ADVANCE(129);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(124);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(165);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(147);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(159);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'r') ADVANCE(126);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(106);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 's') ADVANCE(125);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(156);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(166);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(109);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 't') ADVANCE(130);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(134);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'u') ADVANCE(119);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'v') ADVANCE(128);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == 'y') ADVANCE(116);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__node_path);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__node_or_property);
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__node_or_property);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit_address);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '{') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASHbits_SLASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(232);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SLASHincbin_SLASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(234);
      if (lookahead == '>') ADVANCE(237);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(240);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(251);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(246);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(252);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(253);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 85},
  [39] = {.lex_state = 85},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 85},
  [48] = {.lex_state = 85},
  [49] = {.lex_state = 85},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 85},
  [54] = {.lex_state = 85},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 85},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 85},
  [61] = {.lex_state = 85},
  [62] = {.lex_state = 85},
  [63] = {.lex_state = 85},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 85},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 30},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 30},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 85},
  [118] = {.lex_state = 85},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 85},
  [124] = {.lex_state = 85},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 28},
  [129] = {.lex_state = 42},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 42},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 26},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 33},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 85},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 85},
  [171] = {.lex_state = 26},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 85},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 85},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 85},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 26},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 85},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 43},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__byte_string_item] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_document] = STATE(196),
    [sym__top_level_item] = STATE(3),
    [sym_file_version] = STATE(3),
    [sym_plugin] = STATE(3),
    [sym_memory_reservation] = STATE(3),
    [sym_reference] = STATE(160),
    [sym__label_reference] = STATE(91),
    [sym__node_reference] = STATE(101),
    [sym_omit_if_no_ref] = STATE(3),
    [sym_labeled_item] = STATE(3),
    [sym_node] = STATE(3),
    [sym_dtsi_include] = STATE(3),
    [sym_preproc_include] = STATE(3),
    [sym_preproc_def] = STATE(3),
    [sym_preproc_function_def] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASHdts_DASHv1_SLASH] = ACTIONS(7),
    [anon_sym_SLASHplugin_SLASH] = ACTIONS(9),
    [anon_sym_SLASHmemreserve_SLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym__label_name] = ACTIONS(13),
    [sym__node_path] = ACTIONS(15),
    [sym__node_or_property] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_AMP_LBRACE] = ACTIONS(19),
    [anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH] = ACTIONS(21),
    [anon_sym_SLASHinclude] = ACTIONS(23),
    [aux_sym_preproc_include_token1] = ACTIONS(25),
    [aux_sym_preproc_def_token1] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(34), 1,
      anon_sym_SLASHplugin_SLASH,
    ACTIONS(37), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(40), 1,
      sym__label_name,
    ACTIONS(46), 1,
      anon_sym_AMP,
    ACTIONS(49), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(52), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(55), 1,
      anon_sym_SLASHinclude,
    ACTIONS(58), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(61), 1,
      aux_sym_preproc_def_token1,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(160), 1,
      sym_reference,
    ACTIONS(43), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(2), 12,
      sym__top_level_item,
      sym_file_version,
      sym_plugin,
      sym_memory_reservation,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [64] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SLASHdts_DASHv1_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASHplugin_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASHmemreserve_SLASH,
    ACTIONS(13), 1,
      sym__label_name,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(21), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(23), 1,
      anon_sym_SLASHinclude,
    ACTIONS(25), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(27), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(160), 1,
      sym_reference,
    ACTIONS(15), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(2), 12,
      sym__top_level_item,
      sym_file_version,
      sym_plugin,
      sym_memory_reservation,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_dtsi_include,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_document_repeat1,
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(68), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      sym_identifier,
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
  [162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(72), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      sym_identifier,
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
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(76), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      sym_identifier,
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
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(80), 21,
      anon_sym_AMP_LBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer_literal,
      sym_identifier,
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
  [264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_argument_list,
    ACTIONS(82), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(84), 17,
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
  [300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(88), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(90), 15,
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
  [334] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(30), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [390] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [438] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(88), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(90), 11,
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
  [476] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(88), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(90), 13,
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
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(132), 17,
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
  [586] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(30), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [642] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(136), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(90), 17,
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
  [726] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(88), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(146), 17,
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
  [798] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(10), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [854] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(16), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [910] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [968] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1016] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1062] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(28), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1118] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(31), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1174] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(30), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1230] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(90), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [1280] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__label_name,
    ACTIONS(165), 1,
      sym__node_path,
    ACTIONS(168), 1,
      sym__node_or_property,
    ACTIONS(171), 1,
      sym__property_with_hash,
    ACTIONS(174), 1,
      sym__property_starts_with_number,
    ACTIONS(177), 1,
      anon_sym_AMP,
    ACTIONS(180), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(188), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(191), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(30), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1336] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    ACTIONS(108), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(112), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(30), 8,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      aux_sym_node_repeat1,
  [1392] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1445] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1497] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1549] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(122), 1,
      anon_sym_CARET,
    ACTIONS(138), 1,
      anon_sym_QMARK,
    ACTIONS(140), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(142), 1,
      anon_sym_AMP_AMP,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(92), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(124), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(126), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1601] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      anon_sym_SLASHbits_SLASH,
    ACTIONS(208), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym__bits,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(140), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1646] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(206), 1,
      anon_sym_SLASHbits_SLASH,
    ACTIONS(208), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym__bits,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(145), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(220), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(224), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1739] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(208), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(136), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1778] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(208), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(146), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1817] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(208), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(210), 1,
      anon_sym_LT,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(157), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(232), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(236), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1895] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 4,
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
  [1924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(250), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(254), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(258), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(262), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2008] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(96), 1,
      sym__label_name,
    ACTIONS(98), 1,
      sym__node_path,
    ACTIONS(100), 1,
      sym__node_or_property,
    ACTIONS(102), 1,
      sym__property_with_hash,
    ACTIONS(104), 1,
      sym__property_starts_with_number,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(154), 1,
      sym_reference,
    STATE(102), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [2047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(266), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(270), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(274), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(278), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(282), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(286), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(290), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(294), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(298), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(302), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(306), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(310), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(314), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2320] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__node_path,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(316), 1,
      sym__label_name,
    ACTIONS(318), 1,
      sym__node_or_property,
    ACTIONS(320), 1,
      sym__property_with_hash,
    ACTIONS(322), 1,
      sym__property_starts_with_number,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(160), 1,
      sym_reference,
    STATE(55), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(326), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(330), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(334), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(338), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(340), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2469] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_GT,
    ACTIONS(346), 1,
      sym_integer_literal,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(78), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(352), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(354), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2581] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2633] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(363), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(369), 1,
      anon_sym_GT,
    ACTIONS(371), 1,
      sym_integer_literal,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(76), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2667] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(377), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2693] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_GT,
    ACTIONS(381), 1,
      sym_integer_literal,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(76), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [2727] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(383), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(29), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(385), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2779] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(387), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(389), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(35), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(391), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(393), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(33), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(395), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(397), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
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
  [2935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(399), 1,
      sym_integer_literal,
    ACTIONS(246), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(32), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(274), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(250), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(326), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AMP,
    ACTIONS(401), 10,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(405), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(409), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(290), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_AMP,
    ACTIONS(413), 10,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(286), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(278), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(306), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(314), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(232), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_AMP,
    ACTIONS(417), 10,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(282), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_AMP,
    ACTIONS(421), 10,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_AMP,
    ACTIONS(425), 10,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_AT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(262), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(298), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(338), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      sym__property_with_hash,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(294), 8,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [3360] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(429), 1,
      sym_integer_literal,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(179), 3,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
  [3390] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(431), 1,
      sym__label_name,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(143), 1,
      sym_reference,
    ACTIONS(98), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(90), 2,
      sym_labeled_item,
      sym_node,
  [3420] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(433), 1,
      sym_integer_literal,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(200), 3,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
  [3450] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__label_name,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(144), 1,
      sym_reference,
    ACTIONS(15), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(65), 2,
      sym_labeled_item,
      sym_node,
  [3480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_AMP,
    STATE(4), 1,
      sym_argument_list,
    ACTIONS(437), 6,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_AMP,
    ACTIONS(441), 7,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3517] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    STATE(91), 1,
      sym__label_reference,
    STATE(101), 1,
      sym__node_reference,
    STATE(180), 1,
      sym_reference,
    ACTIONS(443), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_AMP,
    ACTIONS(445), 6,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_SLASHincbin_SLASH,
      anon_sym_LT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [3556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [3575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [3594] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      aux_sym_string_literal_token1,
    ACTIONS(475), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_string_literal_repeat1,
  [3610] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      aux_sym_string_literal_token1,
    ACTIONS(482), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_string_literal_repeat1,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__property_with_hash,
    ACTIONS(485), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [3638] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_string_literal_token1,
    ACTIONS(493), 1,
      sym_escape_sequence,
    STATE(126), 1,
      aux_sym_string_literal_repeat1,
  [3654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [3670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [3686] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_preproc_arg,
    STATE(152), 1,
      sym_preproc_params,
  [3702] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_string_literal_token1,
    ACTIONS(475), 1,
      sym_escape_sequence,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_string_literal_repeat1,
  [3718] = 5,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      aux_sym_string_literal_token1,
    ACTIONS(507), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym_string_literal_repeat1,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_string_literal,
    ACTIONS(511), 2,
      sym_system_lib_string,
      sym_identifier,
  [3748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    ACTIONS(515), 1,
      sym__byte_string_item,
    STATE(137), 1,
      aux_sym_byte_string_literal_repeat1,
  [3761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_preproc_params_repeat1,
  [3774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_property_repeat1,
  [3787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      aux_sym_property_repeat1,
  [3800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_property_repeat1,
  [3813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_argument_list_repeat1,
  [3826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_preproc_params_repeat1,
  [3839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      aux_sym_property_repeat1,
  [3852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      sym__byte_string_item,
    STATE(138), 1,
      aux_sym_byte_string_literal_repeat1,
  [3865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(548), 1,
      sym__byte_string_item,
    STATE(138), 1,
      aux_sym_byte_string_literal_repeat1,
  [3878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
  [3891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      aux_sym_property_repeat1,
  [3904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_preproc_params_repeat1,
  [3917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(557), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [3928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      anon_sym_SEMI,
  [3941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      anon_sym_SEMI,
  [3954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      aux_sym_property_repeat1,
  [3967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      aux_sym_property_repeat1,
  [3980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      aux_sym_property_repeat1,
  [3993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_argument_list_repeat1,
  [4006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      aux_sym_property_repeat1,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [4028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
  [4041] = 3,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      sym_preproc_arg,
  [4051] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
  [4069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4077] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
  [4121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_string_literal,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_string_literal,
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_AT,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
  [4183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [4193] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SEMI,
  [4234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [4241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [4248] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LF,
  [4255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [4262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [4269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_COMMA,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [4283] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_LF,
  [4290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_unit_address,
  [4297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
  [4304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [4311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
  [4318] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      sym_comment,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SEMI,
  [4332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
  [4339] = 2,
    ACTIONS(469), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_LF,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_integer_literal,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SEMI,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_SEMI,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_unit_address,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_SEMI,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_integer_literal,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [4402] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      sym_comment,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym__label_name,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_integer_literal,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_unit_address,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 520,
  [SMALL_STATE(15)] = 556,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 726,
  [SMALL_STATE(20)] = 768,
  [SMALL_STATE(21)] = 798,
  [SMALL_STATE(22)] = 854,
  [SMALL_STATE(23)] = 910,
  [SMALL_STATE(24)] = 968,
  [SMALL_STATE(25)] = 1016,
  [SMALL_STATE(26)] = 1062,
  [SMALL_STATE(27)] = 1118,
  [SMALL_STATE(28)] = 1174,
  [SMALL_STATE(29)] = 1230,
  [SMALL_STATE(30)] = 1280,
  [SMALL_STATE(31)] = 1336,
  [SMALL_STATE(32)] = 1392,
  [SMALL_STATE(33)] = 1445,
  [SMALL_STATE(34)] = 1497,
  [SMALL_STATE(35)] = 1549,
  [SMALL_STATE(36)] = 1601,
  [SMALL_STATE(37)] = 1646,
  [SMALL_STATE(38)] = 1691,
  [SMALL_STATE(39)] = 1715,
  [SMALL_STATE(40)] = 1739,
  [SMALL_STATE(41)] = 1778,
  [SMALL_STATE(42)] = 1817,
  [SMALL_STATE(43)] = 1853,
  [SMALL_STATE(44)] = 1874,
  [SMALL_STATE(45)] = 1895,
  [SMALL_STATE(46)] = 1924,
  [SMALL_STATE(47)] = 1945,
  [SMALL_STATE(48)] = 1966,
  [SMALL_STATE(49)] = 1987,
  [SMALL_STATE(50)] = 2008,
  [SMALL_STATE(51)] = 2047,
  [SMALL_STATE(52)] = 2068,
  [SMALL_STATE(53)] = 2089,
  [SMALL_STATE(54)] = 2110,
  [SMALL_STATE(55)] = 2131,
  [SMALL_STATE(56)] = 2152,
  [SMALL_STATE(57)] = 2173,
  [SMALL_STATE(58)] = 2194,
  [SMALL_STATE(59)] = 2215,
  [SMALL_STATE(60)] = 2236,
  [SMALL_STATE(61)] = 2257,
  [SMALL_STATE(62)] = 2278,
  [SMALL_STATE(63)] = 2299,
  [SMALL_STATE(64)] = 2320,
  [SMALL_STATE(65)] = 2359,
  [SMALL_STATE(66)] = 2380,
  [SMALL_STATE(67)] = 2401,
  [SMALL_STATE(68)] = 2422,
  [SMALL_STATE(69)] = 2443,
  [SMALL_STATE(70)] = 2469,
  [SMALL_STATE(71)] = 2503,
  [SMALL_STATE(72)] = 2529,
  [SMALL_STATE(73)] = 2555,
  [SMALL_STATE(74)] = 2581,
  [SMALL_STATE(75)] = 2607,
  [SMALL_STATE(76)] = 2633,
  [SMALL_STATE(77)] = 2667,
  [SMALL_STATE(78)] = 2693,
  [SMALL_STATE(79)] = 2727,
  [SMALL_STATE(80)] = 2753,
  [SMALL_STATE(81)] = 2779,
  [SMALL_STATE(82)] = 2805,
  [SMALL_STATE(83)] = 2831,
  [SMALL_STATE(84)] = 2857,
  [SMALL_STATE(85)] = 2883,
  [SMALL_STATE(86)] = 2909,
  [SMALL_STATE(87)] = 2935,
  [SMALL_STATE(88)] = 2961,
  [SMALL_STATE(89)] = 2980,
  [SMALL_STATE(90)] = 2999,
  [SMALL_STATE(91)] = 3018,
  [SMALL_STATE(92)] = 3037,
  [SMALL_STATE(93)] = 3056,
  [SMALL_STATE(94)] = 3075,
  [SMALL_STATE(95)] = 3094,
  [SMALL_STATE(96)] = 3113,
  [SMALL_STATE(97)] = 3132,
  [SMALL_STATE(98)] = 3151,
  [SMALL_STATE(99)] = 3170,
  [SMALL_STATE(100)] = 3189,
  [SMALL_STATE(101)] = 3208,
  [SMALL_STATE(102)] = 3227,
  [SMALL_STATE(103)] = 3246,
  [SMALL_STATE(104)] = 3265,
  [SMALL_STATE(105)] = 3284,
  [SMALL_STATE(106)] = 3303,
  [SMALL_STATE(107)] = 3322,
  [SMALL_STATE(108)] = 3341,
  [SMALL_STATE(109)] = 3360,
  [SMALL_STATE(110)] = 3390,
  [SMALL_STATE(111)] = 3420,
  [SMALL_STATE(112)] = 3450,
  [SMALL_STATE(113)] = 3480,
  [SMALL_STATE(114)] = 3501,
  [SMALL_STATE(115)] = 3517,
  [SMALL_STATE(116)] = 3541,
  [SMALL_STATE(117)] = 3556,
  [SMALL_STATE(118)] = 3575,
  [SMALL_STATE(119)] = 3594,
  [SMALL_STATE(120)] = 3610,
  [SMALL_STATE(121)] = 3626,
  [SMALL_STATE(122)] = 3638,
  [SMALL_STATE(123)] = 3654,
  [SMALL_STATE(124)] = 3670,
  [SMALL_STATE(125)] = 3686,
  [SMALL_STATE(126)] = 3702,
  [SMALL_STATE(127)] = 3718,
  [SMALL_STATE(128)] = 3734,
  [SMALL_STATE(129)] = 3748,
  [SMALL_STATE(130)] = 3761,
  [SMALL_STATE(131)] = 3774,
  [SMALL_STATE(132)] = 3787,
  [SMALL_STATE(133)] = 3800,
  [SMALL_STATE(134)] = 3813,
  [SMALL_STATE(135)] = 3826,
  [SMALL_STATE(136)] = 3839,
  [SMALL_STATE(137)] = 3852,
  [SMALL_STATE(138)] = 3865,
  [SMALL_STATE(139)] = 3878,
  [SMALL_STATE(140)] = 3891,
  [SMALL_STATE(141)] = 3904,
  [SMALL_STATE(142)] = 3917,
  [SMALL_STATE(143)] = 3928,
  [SMALL_STATE(144)] = 3941,
  [SMALL_STATE(145)] = 3954,
  [SMALL_STATE(146)] = 3967,
  [SMALL_STATE(147)] = 3980,
  [SMALL_STATE(148)] = 3993,
  [SMALL_STATE(149)] = 4006,
  [SMALL_STATE(150)] = 4019,
  [SMALL_STATE(151)] = 4028,
  [SMALL_STATE(152)] = 4041,
  [SMALL_STATE(153)] = 4051,
  [SMALL_STATE(154)] = 4059,
  [SMALL_STATE(155)] = 4069,
  [SMALL_STATE(156)] = 4077,
  [SMALL_STATE(157)] = 4085,
  [SMALL_STATE(158)] = 4093,
  [SMALL_STATE(159)] = 4101,
  [SMALL_STATE(160)] = 4111,
  [SMALL_STATE(161)] = 4121,
  [SMALL_STATE(162)] = 4131,
  [SMALL_STATE(163)] = 4139,
  [SMALL_STATE(164)] = 4147,
  [SMALL_STATE(165)] = 4155,
  [SMALL_STATE(166)] = 4163,
  [SMALL_STATE(167)] = 4173,
  [SMALL_STATE(168)] = 4183,
  [SMALL_STATE(169)] = 4193,
  [SMALL_STATE(170)] = 4201,
  [SMALL_STATE(171)] = 4211,
  [SMALL_STATE(172)] = 4219,
  [SMALL_STATE(173)] = 4227,
  [SMALL_STATE(174)] = 4234,
  [SMALL_STATE(175)] = 4241,
  [SMALL_STATE(176)] = 4248,
  [SMALL_STATE(177)] = 4255,
  [SMALL_STATE(178)] = 4262,
  [SMALL_STATE(179)] = 4269,
  [SMALL_STATE(180)] = 4276,
  [SMALL_STATE(181)] = 4283,
  [SMALL_STATE(182)] = 4290,
  [SMALL_STATE(183)] = 4297,
  [SMALL_STATE(184)] = 4304,
  [SMALL_STATE(185)] = 4311,
  [SMALL_STATE(186)] = 4318,
  [SMALL_STATE(187)] = 4325,
  [SMALL_STATE(188)] = 4332,
  [SMALL_STATE(189)] = 4339,
  [SMALL_STATE(190)] = 4346,
  [SMALL_STATE(191)] = 4353,
  [SMALL_STATE(192)] = 4360,
  [SMALL_STATE(193)] = 4367,
  [SMALL_STATE(194)] = 4374,
  [SMALL_STATE(195)] = 4381,
  [SMALL_STATE(196)] = 4388,
  [SMALL_STATE(197)] = 4395,
  [SMALL_STATE(198)] = 4402,
  [SMALL_STATE(199)] = 4409,
  [SMALL_STATE(200)] = 4416,
  [SMALL_STATE(201)] = 4423,
  [SMALL_STATE(202)] = 4430,
  [SMALL_STATE(203)] = 4437,
  [SMALL_STATE(204)] = 4444,
  [SMALL_STATE(205)] = 4451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(201),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(150),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(161),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(197),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(118),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(154),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(124),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(168),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(168),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(199),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(150),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(110),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(115),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(121),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_if_no_ref, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_if_no_ref, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 20),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, .production_id = 20),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 13),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 17),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 17),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 16),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 16),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_if_no_ref, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_if_no_ref, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 7),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 7),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(199),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(150),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(77),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(76),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(113),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3, .production_id = 6),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3, .production_id = 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bits, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bits, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(120),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(120),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(42),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(87),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(171),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(138),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incbin, 4, .production_id = 18),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incbin, 8, .production_id = 23),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [651] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
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
