#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 5,
  [11] = 6,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 43,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 48,
  [63] = 53,
  [64] = 64,
  [65] = 52,
  [66] = 66,
  [67] = 66,
  [68] = 60,
  [69] = 56,
  [70] = 70,
  [71] = 71,
  [72] = 55,
  [73] = 73,
  [74] = 64,
  [75] = 75,
  [76] = 70,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 54,
  [82] = 77,
  [83] = 47,
  [84] = 75,
  [85] = 46,
  [86] = 51,
  [87] = 49,
  [88] = 45,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 130,
  [133] = 125,
  [134] = 129,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 142,
  [146] = 146,
  [147] = 144,
  [148] = 140,
  [149] = 138,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 153,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 160,
  [175] = 173,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 189,
  [193] = 193,
  [194] = 186,
  [195] = 195,
  [196] = 193,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 39,
  [204] = 204,
  [205] = 199,
  [206] = 206,
  [207] = 207,
  [208] = 38,
  [209] = 204,
  [210] = 207,
  [211] = 182,
  [212] = 201,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 202,
  [217] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '?') ADVANCE(231);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(26)
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
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '\r') ADVANCE(218);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(263);
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
      if (lookahead == '\n') ADVANCE(253);
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
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '?') ADVANCE(231);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '&') ADVANCE(193);
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
      if (lookahead == '.') ADVANCE(256);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(206);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
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
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(223);
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
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(251);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
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
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '>') ADVANCE(211);
      if (lookahead == '?') ADVANCE(231);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(225);
      if (lookahead == '^') ADVANCE(243);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead == '~') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
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
      if (lookahead == '\\') ADVANCE(266);
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
      if (lookahead == '\\') ADVANCE(266);
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
      if (lookahead == '\\') ADVANCE(266);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '.')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__label_name);
      if (lookahead == '#') ADVANCE(182);
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
      if (lookahead == '/') ADVANCE(197);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(204);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__node_path);
      if (lookahead == '/') ADVANCE(205);
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
      if (lookahead == 'e') ADVANCE(250);
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
      if (lookahead == '#') ADVANCE(182);
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
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(178);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(174);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(254);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(251);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(176);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(177);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(180);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(181);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(170);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(173);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(172);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__property_with_hash);
      if (lookahead == '#') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#') ADVANCE(182);
      if (('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '\'') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__property_starts_with_number);
      if (lookahead == '#' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_unit_address);
      if (lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(241);
      if (lookahead == '{') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '{') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SLASHbits_SLASH);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHnode_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASHdelete_DASHproperty_SLASH);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASHincbin_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '>') ADVANCE(249);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__byte_string_item);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SLASHinclude);
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(267);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\r') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(258);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(265);
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
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
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
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
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
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 85},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 85},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 85},
  [63] = {.lex_state = 30},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 30},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 30},
  [68] = {.lex_state = 85},
  [69] = {.lex_state = 85},
  [70] = {.lex_state = 30},
  [71] = {.lex_state = 85},
  [72] = {.lex_state = 85},
  [73] = {.lex_state = 85},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 85},
  [76] = {.lex_state = 85},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 85},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 85},
  [82] = {.lex_state = 85},
  [83] = {.lex_state = 85},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 85},
  [86] = {.lex_state = 85},
  [87] = {.lex_state = 85},
  [88] = {.lex_state = 85},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 85},
  [123] = {.lex_state = 85},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 85},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 85},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 42},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 85},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 26},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 85},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 43},
  [184] = {.lex_state = 85},
  [185] = {.lex_state = 43},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 21},
  [190] = {.lex_state = 85},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 21},
  [193] = {.lex_state = 21},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 85},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 26},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 26},
  [211] = {.lex_state = 21},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 85},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 44},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 43},
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
    [sym_document] = STATE(191),
    [sym__top_level_item] = STATE(3),
    [sym_file_version] = STATE(3),
    [sym_plugin] = STATE(3),
    [sym_memory_reservation] = STATE(3),
    [sym_reference] = STATE(164),
    [sym__label_reference] = STATE(112),
    [sym__node_reference] = STATE(111),
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
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(164), 1,
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
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(164), 1,
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
  [128] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym__label_name,
    ACTIONS(69), 1,
      sym__node_path,
    ACTIONS(72), 1,
      sym__node_or_property,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(89), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(92), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(95), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(98), 1,
      aux_sym_preproc_def_token1,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(75), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(4), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [191] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(4), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(5), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [317] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(4), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [380] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(7), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [443] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(4), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [506] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(4), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [569] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(10), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [632] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(111), 1,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASHdelete_DASHnode_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
    ACTIONS(117), 1,
      aux_sym_preproc_include_token1,
    ACTIONS(119), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    ACTIONS(107), 2,
      sym__property_with_hash,
      sym__property_starts_with_number,
    STATE(9), 11,
      sym_omit_if_no_ref,
      sym_labeled_item,
      sym_node,
      sym_property,
      sym__node_members,
      sym_delete_node,
      sym_delete_property,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_function_def,
      aux_sym_node_repeat1,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(137), 21,
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
  [729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(141), 21,
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
  [763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(145), 21,
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
  [797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(149), 21,
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
  [831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_argument_list,
    ACTIONS(151), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(153), 17,
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
  [867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(157), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(159), 15,
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
  [901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(159), 11,
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
  [939] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [983] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(177), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(191), 17,
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
  [1067] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(159), 17,
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
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
    ACTIONS(199), 17,
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
  [1185] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 5,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [1235] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1283] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1331] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 7,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1377] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(159), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(157), 4,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(159), 13,
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
  [1455] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1508] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1560] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1612] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_CARET,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(165), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(167), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(173), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1664] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      anon_sym_SLASHbits_SLASH,
    ACTIONS(213), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__bits,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(147), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1709] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(211), 1,
      anon_sym_SLASHbits_SLASH,
    ACTIONS(213), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym__bits,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(144), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(225), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(229), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [1802] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(213), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(145), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1841] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(213), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(142), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1880] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(213), 1,
      anon_sym_SLASHincbin_SLASH,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(178), 6,
      sym_reference,
      sym_incbin,
      sym__property_value,
      sym_integer_cells,
      sym_string_literal,
      sym_byte_string_literal,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(235), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(239), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(243), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [1979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(247), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(251), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(255), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(259), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(239), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(263), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(269), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(273), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(275), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(279), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(283), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(289), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(235), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(293), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(295), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(293), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(255), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(273), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2357] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(101), 1,
      sym__label_name,
    ACTIONS(103), 1,
      sym__node_path,
    ACTIONS(105), 1,
      sym__node_or_property,
    ACTIONS(107), 1,
      sym__property_starts_with_number,
    ACTIONS(299), 1,
      sym__property_with_hash,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(161), 1,
      sym_reference,
    STATE(67), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(269), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(303), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(303), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(295), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(283), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(305), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(311), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(279), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(315), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2585] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__node_path,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(317), 1,
      sym__label_name,
    ACTIONS(319), 1,
      sym__node_or_property,
    ACTIONS(321), 1,
      sym__property_with_hash,
    ACTIONS(323), 1,
      sym__property_starts_with_number,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(164), 1,
      sym_reference,
    STATE(66), 3,
      sym_labeled_item,
      sym_node,
      sym_property,
  [2624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(327), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(305), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(329), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(335), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(337), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(341), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(275), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(329), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(251), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      anon_sym_AMP_LBRACE,
      anon_sym_RBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(327), 9,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      sym__property_with_hash,
      sym__property_starts_with_number,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHdelete_DASHnode_SLASH,
      anon_sym_SLASHdelete_DASHproperty_SLASH,
  [2834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(247), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(263), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(259), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 4,
      ts_builtin_sym_end,
      anon_sym_AMP_LBRACE,
      aux_sym_preproc_include_token1,
      aux_sym_preproc_def_token1,
    ACTIONS(243), 9,
      anon_sym_SLASHdts_DASHv1_SLASH,
      anon_sym_SLASHplugin_SLASH,
      anon_sym_SLASHmemreserve_SLASH,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
      anon_sym_AMP,
      anon_sym_SLASHomit_DASHif_DASHno_DASHref_SLASH,
      anon_sym_SLASHinclude,
  [2918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_integer_literal,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 4,
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
  [2947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(355), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [2973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(357), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [2999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(359), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(361), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3077] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(365), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3103] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_AMP,
    ACTIONS(370), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_GT,
    ACTIONS(378), 1,
      sym_integer_literal,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(96), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [3137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(384), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(386), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3189] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(388), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(390), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3241] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 1,
      anon_sym_GT,
    ACTIONS(396), 1,
      sym_integer_literal,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(96), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [3275] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_GT,
    ACTIONS(402), 1,
      sym_integer_literal,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(101), 4,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
      aux_sym_integer_cells_repeat1,
  [3309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(404), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3335] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(406), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(408), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(410), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(412), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
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
  [3439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(414), 1,
      sym_integer_literal,
    ACTIONS(353), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(28), 5,
      sym__expression,
      sym_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_AMP,
    ACTIONS(416), 10,
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
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_AMP,
    ACTIONS(420), 10,
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
  [3503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_AMP,
    ACTIONS(424), 10,
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
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_AMP,
    ACTIONS(428), 10,
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
  [3541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_AMP,
    ACTIONS(432), 10,
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
  [3560] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(436), 1,
      sym_integer_literal,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(187), 3,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
  [3590] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(438), 1,
      sym__label_name,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(141), 1,
      sym_reference,
    ACTIONS(103), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(70), 2,
      sym_labeled_item,
      sym_node,
  [3620] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(440), 1,
      sym_integer_literal,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(188), 3,
      sym_reference,
      sym__integer_cell_items,
      sym_call_expression,
  [3650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__label_name,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(136), 1,
      sym_reference,
    ACTIONS(15), 2,
      sym__node_path,
      sym__node_or_property,
    STATE(76), 2,
      sym_labeled_item,
      sym_node,
  [3680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_AMP,
    STATE(15), 1,
      sym_argument_list,
    ACTIONS(444), 6,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(448), 7,
      anon_sym_AMP_LBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_integer_literal,
      sym_identifier,
  [3717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      anon_sym_AMP_LBRACE,
    STATE(111), 1,
      sym__node_reference,
    STATE(112), 1,
      sym__label_reference,
    STATE(197), 1,
      sym_reference,
    ACTIONS(450), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [3741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(452), 6,
      anon_sym_SEMI,
      anon_sym_AMP_LBRACE,
      anon_sym_SLASHincbin_SLASH,
      anon_sym_LT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [3756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [3775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_EQ,
  [3794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_string_literal,
    ACTIONS(478), 2,
      sym_system_lib_string,
      sym_identifier,
  [3808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(468), 1,
      anon_sym_AT,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_EQ,
  [3824] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      aux_sym_string_literal_token1,
    ACTIONS(486), 1,
      sym_escape_sequence,
    STATE(129), 1,
      aux_sym_string_literal_repeat1,
  [3840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_string_literal,
    ACTIONS(488), 2,
      sym_system_lib_string,
      sym_identifier,
  [3854] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(492), 1,
      aux_sym_string_literal_token1,
    ACTIONS(495), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_string_literal_repeat1,
  [3870] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_string_literal_token1,
    ACTIONS(502), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym_string_literal_repeat1,
  [3886] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(508), 1,
      sym_preproc_arg,
    STATE(175), 1,
      sym_preproc_params,
  [3902] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_string_literal_token1,
    ACTIONS(514), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_string_literal_repeat1,
  [3918] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(518), 1,
      sym_preproc_arg,
    STATE(173), 1,
      sym_preproc_params,
  [3934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [3950] = 5,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_string_literal_token1,
    ACTIONS(502), 1,
      sym_escape_sequence,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_literal_repeat1,
  [3966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__property_with_hash,
    ACTIONS(522), 3,
      sym__label_name,
      sym__node_or_property,
      sym__property_starts_with_number,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_AT,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [4002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_property_repeat1,
  [4015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    ACTIONS(538), 1,
      sym__byte_string_item,
    STATE(143), 1,
      aux_sym_byte_string_literal_repeat1,
  [4028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_property_repeat1,
  [4041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [4054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_property_repeat1,
  [4067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(548), 1,
      sym__byte_string_item,
    STATE(150), 1,
      aux_sym_byte_string_literal_repeat1,
  [4080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      aux_sym_property_repeat1,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      aux_sym_property_repeat1,
  [4106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_preproc_params_repeat1,
  [4119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      aux_sym_property_repeat1,
  [4132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_property_repeat1,
  [4145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_property_repeat1,
  [4158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      sym__byte_string_item,
    STATE(150), 1,
      aux_sym_byte_string_literal_repeat1,
  [4171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_preproc_params_repeat1,
  [4184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_argument_list_repeat1,
  [4197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      anon_sym_COLON,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [4210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_argument_list_repeat1,
  [4223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [4236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_preproc_params_repeat1,
  [4249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_property_repeat1,
  [4262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 3,
      sym__label_name,
      sym__node_path,
      sym__node_or_property,
  [4271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_EQ,
  [4289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_AT,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [4299] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_AT,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [4325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_string_literal,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym_identifier,
      anon_sym_DOT_DOT_DOT,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4351] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4375] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LF,
      sym_preproc_arg,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
  [4393] = 3,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      sym_preproc_arg,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [4413] = 3,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      sym_preproc_arg,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_AT,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [4457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_string_literal,
  [4467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_SEMI,
  [4474] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LF,
  [4481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_unit_address,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_integer_literal,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym_unit_address,
  [4502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_SEMI,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
  [4516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [4523] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_LF,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_integer_literal,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      ts_builtin_sym_end,
  [4544] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LF,
  [4551] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LF,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SEMI,
  [4572] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LF,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
  [4621] = 2,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(480), 1,
      sym_comment,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SEMI,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
  [4656] = 2,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(480), 1,
      sym_comment,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SEMI,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_identifier,
  [4677] = 2,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LF,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_integer_literal,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SEMI,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__label_name,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_unit_address,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 380,
  [SMALL_STATE(9)] = 443,
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 569,
  [SMALL_STATE(12)] = 632,
  [SMALL_STATE(13)] = 695,
  [SMALL_STATE(14)] = 729,
  [SMALL_STATE(15)] = 763,
  [SMALL_STATE(16)] = 797,
  [SMALL_STATE(17)] = 831,
  [SMALL_STATE(18)] = 867,
  [SMALL_STATE(19)] = 901,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 983,
  [SMALL_STATE(22)] = 1037,
  [SMALL_STATE(23)] = 1067,
  [SMALL_STATE(24)] = 1125,
  [SMALL_STATE(25)] = 1155,
  [SMALL_STATE(26)] = 1185,
  [SMALL_STATE(27)] = 1235,
  [SMALL_STATE(28)] = 1283,
  [SMALL_STATE(29)] = 1331,
  [SMALL_STATE(30)] = 1377,
  [SMALL_STATE(31)] = 1419,
  [SMALL_STATE(32)] = 1455,
  [SMALL_STATE(33)] = 1508,
  [SMALL_STATE(34)] = 1560,
  [SMALL_STATE(35)] = 1612,
  [SMALL_STATE(36)] = 1664,
  [SMALL_STATE(37)] = 1709,
  [SMALL_STATE(38)] = 1754,
  [SMALL_STATE(39)] = 1778,
  [SMALL_STATE(40)] = 1802,
  [SMALL_STATE(41)] = 1841,
  [SMALL_STATE(42)] = 1880,
  [SMALL_STATE(43)] = 1916,
  [SMALL_STATE(44)] = 1937,
  [SMALL_STATE(45)] = 1958,
  [SMALL_STATE(46)] = 1979,
  [SMALL_STATE(47)] = 2000,
  [SMALL_STATE(48)] = 2021,
  [SMALL_STATE(49)] = 2042,
  [SMALL_STATE(50)] = 2063,
  [SMALL_STATE(51)] = 2084,
  [SMALL_STATE(52)] = 2105,
  [SMALL_STATE(53)] = 2126,
  [SMALL_STATE(54)] = 2147,
  [SMALL_STATE(55)] = 2168,
  [SMALL_STATE(56)] = 2189,
  [SMALL_STATE(57)] = 2210,
  [SMALL_STATE(58)] = 2231,
  [SMALL_STATE(59)] = 2252,
  [SMALL_STATE(60)] = 2273,
  [SMALL_STATE(61)] = 2294,
  [SMALL_STATE(62)] = 2315,
  [SMALL_STATE(63)] = 2336,
  [SMALL_STATE(64)] = 2357,
  [SMALL_STATE(65)] = 2396,
  [SMALL_STATE(66)] = 2417,
  [SMALL_STATE(67)] = 2438,
  [SMALL_STATE(68)] = 2459,
  [SMALL_STATE(69)] = 2480,
  [SMALL_STATE(70)] = 2501,
  [SMALL_STATE(71)] = 2522,
  [SMALL_STATE(72)] = 2543,
  [SMALL_STATE(73)] = 2564,
  [SMALL_STATE(74)] = 2585,
  [SMALL_STATE(75)] = 2624,
  [SMALL_STATE(76)] = 2645,
  [SMALL_STATE(77)] = 2666,
  [SMALL_STATE(78)] = 2687,
  [SMALL_STATE(79)] = 2708,
  [SMALL_STATE(80)] = 2729,
  [SMALL_STATE(81)] = 2750,
  [SMALL_STATE(82)] = 2771,
  [SMALL_STATE(83)] = 2792,
  [SMALL_STATE(84)] = 2813,
  [SMALL_STATE(85)] = 2834,
  [SMALL_STATE(86)] = 2855,
  [SMALL_STATE(87)] = 2876,
  [SMALL_STATE(88)] = 2897,
  [SMALL_STATE(89)] = 2918,
  [SMALL_STATE(90)] = 2947,
  [SMALL_STATE(91)] = 2973,
  [SMALL_STATE(92)] = 2999,
  [SMALL_STATE(93)] = 3025,
  [SMALL_STATE(94)] = 3051,
  [SMALL_STATE(95)] = 3077,
  [SMALL_STATE(96)] = 3103,
  [SMALL_STATE(97)] = 3137,
  [SMALL_STATE(98)] = 3163,
  [SMALL_STATE(99)] = 3189,
  [SMALL_STATE(100)] = 3215,
  [SMALL_STATE(101)] = 3241,
  [SMALL_STATE(102)] = 3275,
  [SMALL_STATE(103)] = 3309,
  [SMALL_STATE(104)] = 3335,
  [SMALL_STATE(105)] = 3361,
  [SMALL_STATE(106)] = 3387,
  [SMALL_STATE(107)] = 3413,
  [SMALL_STATE(108)] = 3439,
  [SMALL_STATE(109)] = 3465,
  [SMALL_STATE(110)] = 3484,
  [SMALL_STATE(111)] = 3503,
  [SMALL_STATE(112)] = 3522,
  [SMALL_STATE(113)] = 3541,
  [SMALL_STATE(114)] = 3560,
  [SMALL_STATE(115)] = 3590,
  [SMALL_STATE(116)] = 3620,
  [SMALL_STATE(117)] = 3650,
  [SMALL_STATE(118)] = 3680,
  [SMALL_STATE(119)] = 3701,
  [SMALL_STATE(120)] = 3717,
  [SMALL_STATE(121)] = 3741,
  [SMALL_STATE(122)] = 3756,
  [SMALL_STATE(123)] = 3775,
  [SMALL_STATE(124)] = 3794,
  [SMALL_STATE(125)] = 3808,
  [SMALL_STATE(126)] = 3824,
  [SMALL_STATE(127)] = 3840,
  [SMALL_STATE(128)] = 3854,
  [SMALL_STATE(129)] = 3870,
  [SMALL_STATE(130)] = 3886,
  [SMALL_STATE(131)] = 3902,
  [SMALL_STATE(132)] = 3918,
  [SMALL_STATE(133)] = 3934,
  [SMALL_STATE(134)] = 3950,
  [SMALL_STATE(135)] = 3966,
  [SMALL_STATE(136)] = 3978,
  [SMALL_STATE(137)] = 3991,
  [SMALL_STATE(138)] = 4002,
  [SMALL_STATE(139)] = 4015,
  [SMALL_STATE(140)] = 4028,
  [SMALL_STATE(141)] = 4041,
  [SMALL_STATE(142)] = 4054,
  [SMALL_STATE(143)] = 4067,
  [SMALL_STATE(144)] = 4080,
  [SMALL_STATE(145)] = 4093,
  [SMALL_STATE(146)] = 4106,
  [SMALL_STATE(147)] = 4119,
  [SMALL_STATE(148)] = 4132,
  [SMALL_STATE(149)] = 4145,
  [SMALL_STATE(150)] = 4158,
  [SMALL_STATE(151)] = 4171,
  [SMALL_STATE(152)] = 4184,
  [SMALL_STATE(153)] = 4197,
  [SMALL_STATE(154)] = 4210,
  [SMALL_STATE(155)] = 4223,
  [SMALL_STATE(156)] = 4236,
  [SMALL_STATE(157)] = 4249,
  [SMALL_STATE(158)] = 4262,
  [SMALL_STATE(159)] = 4271,
  [SMALL_STATE(160)] = 4279,
  [SMALL_STATE(161)] = 4289,
  [SMALL_STATE(162)] = 4299,
  [SMALL_STATE(163)] = 4307,
  [SMALL_STATE(164)] = 4315,
  [SMALL_STATE(165)] = 4325,
  [SMALL_STATE(166)] = 4335,
  [SMALL_STATE(167)] = 4343,
  [SMALL_STATE(168)] = 4351,
  [SMALL_STATE(169)] = 4359,
  [SMALL_STATE(170)] = 4367,
  [SMALL_STATE(171)] = 4375,
  [SMALL_STATE(172)] = 4383,
  [SMALL_STATE(173)] = 4393,
  [SMALL_STATE(174)] = 4403,
  [SMALL_STATE(175)] = 4413,
  [SMALL_STATE(176)] = 4423,
  [SMALL_STATE(177)] = 4431,
  [SMALL_STATE(178)] = 4439,
  [SMALL_STATE(179)] = 4447,
  [SMALL_STATE(180)] = 4457,
  [SMALL_STATE(181)] = 4467,
  [SMALL_STATE(182)] = 4474,
  [SMALL_STATE(183)] = 4481,
  [SMALL_STATE(184)] = 4488,
  [SMALL_STATE(185)] = 4495,
  [SMALL_STATE(186)] = 4502,
  [SMALL_STATE(187)] = 4509,
  [SMALL_STATE(188)] = 4516,
  [SMALL_STATE(189)] = 4523,
  [SMALL_STATE(190)] = 4530,
  [SMALL_STATE(191)] = 4537,
  [SMALL_STATE(192)] = 4544,
  [SMALL_STATE(193)] = 4551,
  [SMALL_STATE(194)] = 4558,
  [SMALL_STATE(195)] = 4565,
  [SMALL_STATE(196)] = 4572,
  [SMALL_STATE(197)] = 4579,
  [SMALL_STATE(198)] = 4586,
  [SMALL_STATE(199)] = 4593,
  [SMALL_STATE(200)] = 4600,
  [SMALL_STATE(201)] = 4607,
  [SMALL_STATE(202)] = 4614,
  [SMALL_STATE(203)] = 4621,
  [SMALL_STATE(204)] = 4628,
  [SMALL_STATE(205)] = 4635,
  [SMALL_STATE(206)] = 4642,
  [SMALL_STATE(207)] = 4649,
  [SMALL_STATE(208)] = 4656,
  [SMALL_STATE(209)] = 4663,
  [SMALL_STATE(210)] = 4670,
  [SMALL_STATE(211)] = 4677,
  [SMALL_STATE(212)] = 4684,
  [SMALL_STATE(213)] = 4691,
  [SMALL_STATE(214)] = 4698,
  [SMALL_STATE(215)] = 4705,
  [SMALL_STATE(216)] = 4712,
  [SMALL_STATE(217)] = 4719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(213),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(164),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(180),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(122),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(161),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(133),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(174),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(215),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(158),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(115),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(120),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(135),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(124),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(210),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 15),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 21),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 21),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 22),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_if_no_ref, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_if_no_ref, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 16),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 16),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 13),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 5, .production_id = 11),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 7),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_function_def, 4, .production_id = 9),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_reservation, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_reservation, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 7),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 7),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 8),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_item, 3, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_if_no_ref, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_if_no_ref, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_version, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_version, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 6, .production_id = 20),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 6, .production_id = 20),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, .production_id = 17),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, .production_id = 17),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dtsi_include, 2, .production_id = 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_node, 3, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_node, 3, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete_property, 3, .production_id = 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_property, 3, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(215),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(158),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(98),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(96),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_cells_repeat1, 2), SHIFT_REPEAT(118),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_reference, 2, .production_id = 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 3, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, .production_id = 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_reference, 5, .production_id = 10),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_cell_items, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_cell_items, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bits, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bits, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(128),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(128),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2), SHIFT_REPEAT(166),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preproc_params_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_string_literal_repeat1, 2), SHIFT_REPEAT(150),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(95),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(42),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incbin, 4, .production_id = 18),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incbin, 8, .production_id = 23),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_params, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_cells, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string_literal, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [644] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
