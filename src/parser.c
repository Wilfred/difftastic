#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 383
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_numeric_lit_token1 = 7,
  aux_sym_numeric_lit_token2 = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_null_lit = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  aux_sym_legacy_index_token1 = 17,
  anon_sym_DOT_STAR = 18,
  anon_sym_LBRACK_STAR_RBRACK = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
  anon_sym_STAR = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_PLUS = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_AMP_AMP = 38,
  anon_sym_PIPE_PIPE = 39,
  sym_strip_marker = 40,
  sym_comment = 41,
  sym__whitespace = 42,
  sym__quoted_template_start = 43,
  sym__quoted_template_end = 44,
  sym__template_literal_chunk = 45,
  sym__template_interpolation_start = 46,
  sym__template_interpolation_end = 47,
  sym_config_file = 48,
  sym_body = 49,
  sym_attribute = 50,
  sym_block = 51,
  sym__block_start = 52,
  sym__block_end = 53,
  sym_expression = 54,
  sym__expr_term = 55,
  sym_literal_value = 56,
  sym_numeric_lit = 57,
  sym_bool_lit = 58,
  sym_string_lit = 59,
  sym_collection_value = 60,
  sym__comma = 61,
  sym_tuple = 62,
  sym__tuple_start = 63,
  sym__tuple_end = 64,
  sym__tuple_elems = 65,
  sym_object = 66,
  sym__object_start = 67,
  sym__object_end = 68,
  sym__object_elems = 69,
  sym_object_elem = 70,
  sym_index = 71,
  sym_new_index = 72,
  sym_legacy_index = 73,
  sym_get_attr = 74,
  sym_splat = 75,
  sym_attr_splat = 76,
  sym_full_splat = 77,
  sym_for_expr = 78,
  sym_for_tuple_expr = 79,
  sym_for_object_expr = 80,
  sym_for_intro = 81,
  sym_for_cond = 82,
  sym_variable_expr = 83,
  sym_function_call = 84,
  sym__function_call_start = 85,
  sym__function_call_end = 86,
  sym_function_arguments = 87,
  sym_conditional = 88,
  sym_operation = 89,
  sym_unary_operation = 90,
  sym_binary_operation = 91,
  sym_template_expr = 92,
  sym_quoted_template = 93,
  sym_template_literal = 94,
  sym_template_interpolation = 95,
  sym_template_directive = 96,
  aux_sym_body_repeat1 = 97,
  aux_sym_block_repeat1 = 98,
  aux_sym__tuple_elems_repeat1 = 99,
  aux_sym__object_elems_repeat1 = 100,
  aux_sym_attr_splat_repeat1 = 101,
  aux_sym_quoted_template_repeat1 = 102,
  aux_sym_template_literal_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_numeric_lit_token1] = "numeric_lit_token1",
  [aux_sym_numeric_lit_token2] = "numeric_lit_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_lit] = "null_lit",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [aux_sym_legacy_index_token1] = "legacy_index_token1",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_strip_marker] = "strip_marker",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym__quoted_template_start] = "_quoted_template_start",
  [sym__quoted_template_end] = "_quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym__template_interpolation_start] = "_template_interpolation_start",
  [sym__template_interpolation_end] = "_template_interpolation_end",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym__tuple_start] = "_tuple_start",
  [sym__tuple_end] = "_tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym__object_start] = "_object_start",
  [sym__object_end] = "_object_end",
  [sym__object_elems] = "_object_elems",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
  [sym_new_index] = "new_index",
  [sym_legacy_index] = "legacy_index",
  [sym_get_attr] = "get_attr",
  [sym_splat] = "splat",
  [sym_attr_splat] = "attr_splat",
  [sym_full_splat] = "full_splat",
  [sym_for_expr] = "for_expr",
  [sym_for_tuple_expr] = "for_tuple_expr",
  [sym_for_object_expr] = "for_object_expr",
  [sym_for_intro] = "for_intro",
  [sym_for_cond] = "for_cond",
  [sym_variable_expr] = "variable_expr",
  [sym_function_call] = "function_call",
  [sym__function_call_start] = "_function_call_start",
  [sym__function_call_end] = "_function_call_end",
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_quoted_template] = "quoted_template",
  [sym_template_literal] = "template_literal",
  [sym_template_interpolation] = "template_interpolation",
  [sym_template_directive] = "template_directive",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_numeric_lit_token1] = aux_sym_numeric_lit_token1,
  [aux_sym_numeric_lit_token2] = aux_sym_numeric_lit_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_lit] = sym_null_lit,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_legacy_index_token1] = aux_sym_legacy_index_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_strip_marker] = sym_strip_marker,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym__quoted_template_start] = sym__quoted_template_start,
  [sym__quoted_template_end] = sym__quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym__template_interpolation_start] = sym__template_interpolation_start,
  [sym__template_interpolation_end] = sym__template_interpolation_end,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym__tuple_start] = sym__tuple_start,
  [sym__tuple_end] = sym__tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym__object_start] = sym__object_start,
  [sym__object_end] = sym__object_end,
  [sym__object_elems] = sym__object_elems,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
  [sym_new_index] = sym_new_index,
  [sym_legacy_index] = sym_legacy_index,
  [sym_get_attr] = sym_get_attr,
  [sym_splat] = sym_splat,
  [sym_attr_splat] = sym_attr_splat,
  [sym_full_splat] = sym_full_splat,
  [sym_for_expr] = sym_for_expr,
  [sym_for_tuple_expr] = sym_for_tuple_expr,
  [sym_for_object_expr] = sym_for_object_expr,
  [sym_for_intro] = sym_for_intro,
  [sym_for_cond] = sym_for_cond,
  [sym_variable_expr] = sym_variable_expr,
  [sym_function_call] = sym_function_call,
  [sym__function_call_start] = sym__function_call_start,
  [sym__function_call_end] = sym__function_call_end,
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_quoted_template] = sym_quoted_template,
  [sym_template_literal] = sym_template_literal,
  [sym_template_interpolation] = sym_template_interpolation,
  [sym_template_directive] = sym_template_directive,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [aux_sym_numeric_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_strip_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_template_start] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_template_end] = {
    .visible = false,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_start] = {
    .visible = false,
    .named = true,
  },
  [sym__template_interpolation_end] = {
    .visible = false,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_term] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__tuple_start] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_end] = {
    .visible = false,
    .named = true,
  },
  [sym__tuple_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_start] = {
    .visible = false,
    .named = true,
  },
  [sym__object_end] = {
    .visible = false,
    .named = true,
  },
  [sym__object_elems] = {
    .visible = false,
    .named = true,
  },
  [sym_object_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_new_index] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_index] = {
    .visible = true,
    .named = true,
  },
  [sym_get_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_full_splat] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tuple_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_object_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_for_intro] = {
    .visible = true,
    .named = true,
  },
  [sym_for_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__function_call_start] = {
    .visible = false,
    .named = true,
  },
  [sym__function_call_end] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_template_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_template_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuple_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__object_elems_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_splat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'p'
                  ? (c >= 'b' && c <= 'n')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'f'
                  ? (c >= 'a' && c <= 'd')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'm'
                  ? (c >= 'a' && c <= 'k')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 's'
                  ? (c >= 'a' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 't'
                  ? (c >= 'a' && c <= 'r')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 'v'
                  ? (c >= 'a' && c <= 't')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(47);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(47);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(31);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(47);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(47);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(47);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(47);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(47);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(47);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(47);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 1, .external_lex_state = 2},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 1, .external_lex_state = 2},
  [132] = {.lex_state = 1, .external_lex_state = 2},
  [133] = {.lex_state = 1, .external_lex_state = 2},
  [134] = {.lex_state = 1, .external_lex_state = 2},
  [135] = {.lex_state = 1, .external_lex_state = 2},
  [136] = {.lex_state = 1, .external_lex_state = 2},
  [137] = {.lex_state = 1, .external_lex_state = 2},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 1, .external_lex_state = 2},
  [141] = {.lex_state = 1, .external_lex_state = 2},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 29},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 29},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 29},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 29},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 29},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 29},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0, .external_lex_state = 3},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 0, .external_lex_state = 3},
  [235] = {.lex_state = 0, .external_lex_state = 3},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0, .external_lex_state = 3},
  [242] = {.lex_state = 0, .external_lex_state = 3},
  [243] = {.lex_state = 0, .external_lex_state = 3},
  [244] = {.lex_state = 0, .external_lex_state = 3},
  [245] = {.lex_state = 0, .external_lex_state = 3},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 0, .external_lex_state = 3},
  [248] = {.lex_state = 0, .external_lex_state = 3},
  [249] = {.lex_state = 0, .external_lex_state = 3},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 0, .external_lex_state = 3},
  [253] = {.lex_state = 0, .external_lex_state = 3},
  [254] = {.lex_state = 0, .external_lex_state = 3},
  [255] = {.lex_state = 1, .external_lex_state = 2},
  [256] = {.lex_state = 1, .external_lex_state = 2},
  [257] = {.lex_state = 1, .external_lex_state = 2},
  [258] = {.lex_state = 1, .external_lex_state = 2},
  [259] = {.lex_state = 1, .external_lex_state = 2},
  [260] = {.lex_state = 1, .external_lex_state = 2},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 1, .external_lex_state = 2},
  [263] = {.lex_state = 29},
  [264] = {.lex_state = 1, .external_lex_state = 2},
  [265] = {.lex_state = 29},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 29},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 0, .external_lex_state = 4},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 0, .external_lex_state = 4},
  [278] = {.lex_state = 3, .external_lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 29, .external_lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 29},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 29, .external_lex_state = 2},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 29},
  [299] = {.lex_state = 29},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 4},
  [302] = {.lex_state = 0, .external_lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 29},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 4},
  [310] = {.lex_state = 0, .external_lex_state = 5},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 6},
  [314] = {.lex_state = 0, .external_lex_state = 3},
  [315] = {.lex_state = 0, .external_lex_state = 4},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 0, .external_lex_state = 3},
  [319] = {.lex_state = 0, .external_lex_state = 4},
  [320] = {.lex_state = 0, .external_lex_state = 6},
  [321] = {.lex_state = 0, .external_lex_state = 3},
  [322] = {.lex_state = 0, .external_lex_state = 3},
  [323] = {.lex_state = 29, .external_lex_state = 2},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 29},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 29},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 3},
  [375] = {.lex_state = 0, .external_lex_state = 3},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
};

enum {
  ts_external_token__quoted_template_start = 0,
  ts_external_token__quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token__template_interpolation_start = 3,
  ts_external_token__template_interpolation_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__quoted_template_start] = sym__quoted_template_start,
  [ts_external_token__quoted_template_end] = sym__quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token__template_interpolation_start] = sym__template_interpolation_start,
  [ts_external_token__template_interpolation_end] = sym__template_interpolation_end,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_interpolation_end] = true,
  },
  [2] = {
    [ts_external_token__quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token__template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
  },
  [5] = {
    [ts_external_token__template_literal_chunk] = true,
  },
  [6] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [7] = {
    [ts_external_token__quoted_template_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_numeric_lit_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_lit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_legacy_index_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_LBRACK_STAR_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym__quoted_template_start] = ACTIONS(1),
    [sym__quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym__template_interpolation_start] = ACTIONS(1),
    [sym__template_interpolation_end] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(382),
    [sym_body] = STATE(381),
    [sym_attribute] = STATE(268),
    [sym_block] = STATE(268),
    [sym_object] = STATE(268),
    [sym__object_start] = STATE(13),
    [aux_sym_body_repeat1] = STATE(268),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym__tuple_start,
    STATE(65), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(161), 1,
      sym__object_end,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    STATE(372), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [97] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym__tuple_start,
    STATE(83), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(243), 1,
      sym__object_end,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    STATE(369), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [194] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym__tuple_start,
    STATE(84), 1,
      sym_for_intro,
    STATE(136), 1,
      sym__object_end,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    STATE(332), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [291] = 27,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym__tuple_start,
    STATE(52), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(204), 1,
      sym__object_end,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    STATE(349), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [388] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(31), 1,
      sym__comma,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [480] = 25,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(59), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(65), 1,
      sym_null_lit,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(37), 1,
      sym__comma,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(62), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(74), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(7), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [572] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(53), 1,
      sym_for_intro,
    STATE(117), 1,
      sym__tuple_end,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(286), 1,
      sym_expression,
    STATE(331), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [666] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(57), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(207), 1,
      sym__tuple_end,
    STATE(263), 1,
      sym_conditional,
    STATE(286), 1,
      sym_expression,
    STATE(344), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [760] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(246), 1,
      sym__tuple_end,
    STATE(263), 1,
      sym_conditional,
    STATE(286), 1,
      sym_expression,
    STATE(356), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [854] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(34), 1,
      sym__comma,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(6), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [946] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(64), 1,
      sym_for_intro,
    STATE(143), 1,
      sym_quoted_template,
    STATE(163), 1,
      sym__tuple_end,
    STATE(263), 1,
      sym_conditional,
    STATE(286), 1,
      sym_expression,
    STATE(327), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1040] = 25,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(11), 1,
      sym_object_elem,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(161), 1,
      sym__object_end,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    STATE(372), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1131] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(214), 1,
      sym__function_call_end,
    STATE(263), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(328), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1219] = 18,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(102), 1,
      anon_sym_DOT_STAR,
    ACTIONS(104), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(118), 1,
      anon_sym_AMP_AMP,
    ACTIONS(120), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(116), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(96), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
    ACTIONS(94), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [1295] = 11,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(122), 13,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1357] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(231), 1,
      sym__function_call_end,
    STATE(263), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(347), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1445] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(167), 1,
      sym__function_call_end,
    STATE(263), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(360), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1533] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(132), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1585] = 8,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 17,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1641] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(135), 1,
      sym__function_call_end,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(330), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1729] = 9,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 15,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1787] = 13,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(118), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(116), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(122), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [1853] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1905] = 12,
    ACTIONS(110), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(108), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(112), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(116), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(119), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(122), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(122), 11,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1969] = 9,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2026] = 8,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 21,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2081] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2132] = 13,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(142), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(124), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [2197] = 11,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(142), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(124), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 17,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2258] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_object_elem,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2343] = 18,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_DOT_STAR,
    ACTIONS(158), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(160), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(142), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [2418] = 12,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(142), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(144), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(124), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2481] = 23,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_object_elem,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2566] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(169), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(172), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(132), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2617] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(294), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2699] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_object_elem,
    STATE(263), 1,
      sym_conditional,
    STATE(312), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2781] = 7,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(38), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(166), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2833] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(294), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2915] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(43), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(178), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2967] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(38), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(182), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3019] = 22,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym_strip_marker,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    STATE(314), 1,
      sym_conditional,
    STATE(318), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(191), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3101] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(38), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(208), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3153] = 7,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(121), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(41), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(212), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3205] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(284), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3284] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(348), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3363] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3442] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(291), 1,
      sym_conditional,
    STATE(292), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3521] = 7,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(75), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(212), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3572] = 7,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(76), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(178), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3623] = 21,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    STATE(255), 1,
      sym_conditional,
    STATE(257), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(15), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3702] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(326), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3781] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(291), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3860] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(354), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3939] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(279), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4018] = 21,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    STATE(255), 1,
      sym_conditional,
    STATE(256), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(15), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4097] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(287), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4176] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(282), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4255] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(285), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4334] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(340), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4413] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(311), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4492] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4571] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(291), 1,
      sym_conditional,
    STATE(295), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4650] = 21,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    STATE(289), 1,
      sym_expression,
    STATE(291), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(155), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4729] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(364), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4808] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(337), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4887] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(324), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4966] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(351), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5045] = 7,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(166), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5096] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(261), 1,
      sym_expression,
    STATE(263), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5175] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(294), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5254] = 21,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    STATE(314), 1,
      sym_conditional,
    STATE(322), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(191), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5333] = 21,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    STATE(314), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(191), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5412] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(345), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5491] = 7,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(182), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5542] = 7,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(173), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(208), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5593] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(325), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5672] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(355), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5751] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(362), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5830] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(288), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5909] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(365), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5988] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(366), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6067] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(371), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6146] = 21,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_conditional,
    STATE(353), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(32), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6225] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(160), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6298] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6371] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(23), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6444] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(25), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6517] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(16), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6590] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(22), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6663] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(24), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6736] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(20), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6809] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(156), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6882] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6955] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(35), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7028] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(189), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7101] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(148), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7174] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(152), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7247] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(188), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7320] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(29), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7393] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(187), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7466] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(186), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7539] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(185), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7612] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(184), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7685] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(33), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7758] = 19,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(242), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(246), 1,
      sym_null_lit,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(8), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(244), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(129), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(137), 2,
      sym_tuple,
      sym_object,
    STATE(142), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(19), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7831] = 19,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(192), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(196), 1,
      sym_null_lit,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(250), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(194), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_tuple,
      sym_object,
    STATE(244), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(237), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(190), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7904] = 19,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(222), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(226), 1,
      sym_null_lit,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(198), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(224), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(200), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(202), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 2,
      sym_tuple,
      sym_object,
    STATE(208), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(166), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7977] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(30), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8050] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(27), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8123] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(28), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8196] = 19,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(21), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(25), 1,
      sym_null_lit,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(157), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(159), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(174), 2,
      sym_tuple,
      sym_object,
    STATE(176), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(26), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8269] = 5,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 18,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8313] = 5,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8357] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8396] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8474] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(282), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8513] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8552] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8708] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8747] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8786] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8825] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8864] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8942] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8981] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9020] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9059] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9098] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9137] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9176] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9215] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9254] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9293] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9332] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9371] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9410] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 11,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 19,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9449] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9525] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9563] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(282), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9601] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9639] = 11,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 11,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9693] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9731] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9807] = 9,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9933] = 17,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      anon_sym_DOT_STAR,
    ACTIONS(396), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(400), 1,
      anon_sym_AMP_AMP,
    ACTIONS(402), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(94), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [9999] = 13,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(400), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [10057] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10095] = 12,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10189] = 8,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10237] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10275] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10313] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10351] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10389] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10433] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(206), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(201), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(132), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10515] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10591] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10629] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10667] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10705] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10743] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10781] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10819] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10895] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10933] = 7,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(182), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(176), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10977] = 7,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(182), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(183), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(180), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11021] = 7,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(180), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(210), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11065] = 7,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(208), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(183), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(206), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11109] = 7,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(203), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(166), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(183), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(164), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11153] = 8,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 13,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11199] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11241] = 9,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(124), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 11,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11289] = 11,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11341] = 12,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(420), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11395] = 13,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(422), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(124), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(420), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(122), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11451] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(132), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11493] = 17,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(422), 1,
      anon_sym_AMP_AMP,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      anon_sym_DOT_STAR,
    ACTIONS(430), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(432), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(420), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(228), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(94), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11557] = 7,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(166), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(192), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(164), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11599] = 7,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(182), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(192), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(180), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11641] = 7,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(208), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(192), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(206), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11683] = 7,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(178), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(176), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11725] = 7,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(193), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(210), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11767] = 5,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11804] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11835] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11866] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11897] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11928] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11959] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11990] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12021] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12052] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12083] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12114] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12145] = 5,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12180] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12211] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12273] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12304] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12335] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12366] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12397] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12428] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12459] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12521] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12552] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12583] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12614] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12645] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12676] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 17,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12736] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12794] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(346), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12852] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(370), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12939] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12968] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12997] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(378), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13026] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13084] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13142] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(358), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(356), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13171] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13200] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13258] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13316] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13345] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13374] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13403] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13432] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13461] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 15,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [13519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(94), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13543] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(446), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(444), 10,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13567] = 4,
    ACTIONS(452), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(450), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(448), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13593] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(454), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(48), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13616] = 4,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(458), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(456), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13640] = 4,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(458), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(456), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13664] = 3,
    ACTIONS(446), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [13685] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(466), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(464), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13706] = 3,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [13727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(470), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(468), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13748] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__object_start,
    STATE(306), 1,
      sym__block_end,
    STATE(350), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(268), 4,
      sym_attribute,
      sym_block,
      sym_object,
      aux_sym_body_repeat1,
  [13777] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__object_start,
    STATE(299), 1,
      sym__block_end,
    STATE(361), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(268), 4,
      sym_attribute,
      sym_block,
      sym_object,
      aux_sym_body_repeat1,
  [13806] = 6,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(13), 1,
      sym__object_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(267), 4,
      sym_attribute,
      sym_block,
      sym_object,
      aux_sym_body_repeat1,
  [13830] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(13), 1,
      sym__object_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(267), 4,
      sym_attribute,
      sym_block,
      sym_object,
      aux_sym_body_repeat1,
  [13854] = 7,
    ACTIONS(486), 1,
      sym__quoted_template_end,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    STATE(308), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(276), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13879] = 6,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(492), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(271), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13902] = 6,
    ACTIONS(494), 1,
      sym__quoted_template_end,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(499), 1,
      sym__template_interpolation_start,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(271), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13925] = 7,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(502), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    STATE(307), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(270), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13950] = 6,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(504), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(271), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13973] = 6,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(506), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(271), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13996] = 7,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(508), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    STATE(317), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(273), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [14021] = 6,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(510), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(271), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [14044] = 7,
    ACTIONS(488), 1,
      sym__template_literal_chunk,
    ACTIONS(490), 1,
      sym__template_interpolation_start,
    ACTIONS(512), 1,
      sym__quoted_template_end,
    STATE(301), 1,
      aux_sym_template_literal_repeat1,
    STATE(319), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(274), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [14069] = 7,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(520), 1,
      sym__quoted_template_start,
    STATE(266), 1,
      sym__block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(283), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14093] = 7,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(526), 1,
      sym_ellipsis,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    STATE(120), 1,
      sym__object_end,
    STATE(368), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14116] = 7,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      sym_ellipsis,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    STATE(71), 1,
      sym__comma,
    STATE(293), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14139] = 5,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym__comma,
    STATE(281), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(538), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [14158] = 7,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      sym_ellipsis,
    STATE(223), 1,
      sym__object_end,
    STATE(333), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14181] = 6,
    ACTIONS(520), 1,
      sym__quoted_template_start,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(265), 1,
      sym__block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(290), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14202] = 7,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      sym_ellipsis,
    STATE(245), 1,
      sym__object_end,
    STATE(336), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14225] = 7,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      sym_ellipsis,
    STATE(171), 1,
      sym__object_end,
    STATE(346), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14248] = 6,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__comma,
    STATE(300), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14268] = 6,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym__tuple_end,
    STATE(329), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14288] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [14302] = 6,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      sym__tuple_end,
    STATE(367), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14322] = 5,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym__quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(290), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14340] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [14352] = 6,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      sym__tuple_end,
    STATE(338), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14372] = 6,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      sym_ellipsis,
    STATE(71), 1,
      sym__comma,
    STATE(281), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14392] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(538), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [14406] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [14418] = 6,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(528), 1,
      anon_sym_QMARK,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__tuple_end,
    STATE(359), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14438] = 5,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym__object_end,
    STATE(370), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(587), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [14466] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(589), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [14477] = 5,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      sym__comma,
    STATE(281), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14494] = 4,
    ACTIONS(595), 1,
      sym__template_literal_chunk,
    STATE(302), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(593), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [14509] = 4,
    ACTIONS(599), 1,
      sym__template_literal_chunk,
    STATE(302), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(597), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [14524] = 5,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym__object_end,
    STATE(334), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14541] = 5,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym__object_end,
    STATE(335), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14558] = 5,
    ACTIONS(524), 1,
      anon_sym_if,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__object_end,
    STATE(339), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14575] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(608), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [14586] = 3,
    ACTIONS(610), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14598] = 3,
    ACTIONS(614), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14610] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(616), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14620] = 4,
    ACTIONS(618), 1,
      sym__template_literal_chunk,
    STATE(313), 1,
      aux_sym_template_literal_repeat1,
    STATE(373), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14634] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(620), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [14646] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [14658] = 4,
    ACTIONS(593), 1,
      sym__quoted_template_end,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    STATE(320), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14672] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [14682] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14692] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14702] = 3,
    ACTIONS(630), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14714] = 4,
    ACTIONS(632), 1,
      anon_sym_QMARK,
    ACTIONS(634), 1,
      sym_strip_marker,
    ACTIONS(636), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14728] = 3,
    ACTIONS(638), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14740] = 4,
    ACTIONS(597), 1,
      sym__quoted_template_end,
    ACTIONS(640), 1,
      sym__template_literal_chunk,
    STATE(320), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14754] = 4,
    ACTIONS(632), 1,
      anon_sym_QMARK,
    ACTIONS(643), 1,
      sym_strip_marker,
    ACTIONS(645), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14768] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [14778] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [14788] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14799] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(649), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14810] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(651), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14821] = 3,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14832] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14843] = 3,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14854] = 3,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14865] = 3,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14876] = 3,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14887] = 3,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14898] = 3,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14909] = 3,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14920] = 3,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14931] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14942] = 3,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14953] = 3,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14964] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14975] = 3,
    ACTIONS(677), 1,
      sym_identifier,
    ACTIONS(679), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14986] = 3,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(683), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14997] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(685), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15008] = 3,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15019] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15030] = 3,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15041] = 3,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15052] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15063] = 3,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15074] = 3,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15085] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15096] = 3,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(703), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15107] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(705), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15118] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15129] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15140] = 3,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15151] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15162] = 3,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15173] = 3,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15184] = 3,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15195] = 3,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15206] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15217] = 3,
    ACTIONS(725), 1,
      sym_identifier,
    ACTIONS(727), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15228] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(729), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15239] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(731), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15250] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(733), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15261] = 3,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15272] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15283] = 3,
    ACTIONS(737), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15294] = 3,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15305] = 3,
    ACTIONS(536), 1,
      anon_sym_QMARK,
    ACTIONS(741), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15316] = 3,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15327] = 2,
    ACTIONS(745), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15335] = 2,
    ACTIONS(747), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15343] = 2,
    ACTIONS(645), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15351] = 2,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15359] = 2,
    ACTIONS(749), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15367] = 2,
    ACTIONS(751), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15375] = 2,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15383] = 2,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15391] = 2,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15399] = 2,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 388,
  [SMALL_STATE(7)] = 480,
  [SMALL_STATE(8)] = 572,
  [SMALL_STATE(9)] = 666,
  [SMALL_STATE(10)] = 760,
  [SMALL_STATE(11)] = 854,
  [SMALL_STATE(12)] = 946,
  [SMALL_STATE(13)] = 1040,
  [SMALL_STATE(14)] = 1131,
  [SMALL_STATE(15)] = 1219,
  [SMALL_STATE(16)] = 1295,
  [SMALL_STATE(17)] = 1357,
  [SMALL_STATE(18)] = 1445,
  [SMALL_STATE(19)] = 1533,
  [SMALL_STATE(20)] = 1585,
  [SMALL_STATE(21)] = 1641,
  [SMALL_STATE(22)] = 1729,
  [SMALL_STATE(23)] = 1787,
  [SMALL_STATE(24)] = 1853,
  [SMALL_STATE(25)] = 1905,
  [SMALL_STATE(26)] = 1969,
  [SMALL_STATE(27)] = 2026,
  [SMALL_STATE(28)] = 2081,
  [SMALL_STATE(29)] = 2132,
  [SMALL_STATE(30)] = 2197,
  [SMALL_STATE(31)] = 2258,
  [SMALL_STATE(32)] = 2343,
  [SMALL_STATE(33)] = 2418,
  [SMALL_STATE(34)] = 2481,
  [SMALL_STATE(35)] = 2566,
  [SMALL_STATE(36)] = 2617,
  [SMALL_STATE(37)] = 2699,
  [SMALL_STATE(38)] = 2781,
  [SMALL_STATE(39)] = 2833,
  [SMALL_STATE(40)] = 2915,
  [SMALL_STATE(41)] = 2967,
  [SMALL_STATE(42)] = 3019,
  [SMALL_STATE(43)] = 3101,
  [SMALL_STATE(44)] = 3153,
  [SMALL_STATE(45)] = 3205,
  [SMALL_STATE(46)] = 3284,
  [SMALL_STATE(47)] = 3363,
  [SMALL_STATE(48)] = 3442,
  [SMALL_STATE(49)] = 3521,
  [SMALL_STATE(50)] = 3572,
  [SMALL_STATE(51)] = 3623,
  [SMALL_STATE(52)] = 3702,
  [SMALL_STATE(53)] = 3781,
  [SMALL_STATE(54)] = 3860,
  [SMALL_STATE(55)] = 3939,
  [SMALL_STATE(56)] = 4018,
  [SMALL_STATE(57)] = 4097,
  [SMALL_STATE(58)] = 4176,
  [SMALL_STATE(59)] = 4255,
  [SMALL_STATE(60)] = 4334,
  [SMALL_STATE(61)] = 4413,
  [SMALL_STATE(62)] = 4492,
  [SMALL_STATE(63)] = 4571,
  [SMALL_STATE(64)] = 4650,
  [SMALL_STATE(65)] = 4729,
  [SMALL_STATE(66)] = 4808,
  [SMALL_STATE(67)] = 4887,
  [SMALL_STATE(68)] = 4966,
  [SMALL_STATE(69)] = 5045,
  [SMALL_STATE(70)] = 5096,
  [SMALL_STATE(71)] = 5175,
  [SMALL_STATE(72)] = 5254,
  [SMALL_STATE(73)] = 5333,
  [SMALL_STATE(74)] = 5412,
  [SMALL_STATE(75)] = 5491,
  [SMALL_STATE(76)] = 5542,
  [SMALL_STATE(77)] = 5593,
  [SMALL_STATE(78)] = 5672,
  [SMALL_STATE(79)] = 5751,
  [SMALL_STATE(80)] = 5830,
  [SMALL_STATE(81)] = 5909,
  [SMALL_STATE(82)] = 5988,
  [SMALL_STATE(83)] = 6067,
  [SMALL_STATE(84)] = 6146,
  [SMALL_STATE(85)] = 6225,
  [SMALL_STATE(86)] = 6298,
  [SMALL_STATE(87)] = 6371,
  [SMALL_STATE(88)] = 6444,
  [SMALL_STATE(89)] = 6517,
  [SMALL_STATE(90)] = 6590,
  [SMALL_STATE(91)] = 6663,
  [SMALL_STATE(92)] = 6736,
  [SMALL_STATE(93)] = 6809,
  [SMALL_STATE(94)] = 6882,
  [SMALL_STATE(95)] = 6955,
  [SMALL_STATE(96)] = 7028,
  [SMALL_STATE(97)] = 7101,
  [SMALL_STATE(98)] = 7174,
  [SMALL_STATE(99)] = 7247,
  [SMALL_STATE(100)] = 7320,
  [SMALL_STATE(101)] = 7393,
  [SMALL_STATE(102)] = 7466,
  [SMALL_STATE(103)] = 7539,
  [SMALL_STATE(104)] = 7612,
  [SMALL_STATE(105)] = 7685,
  [SMALL_STATE(106)] = 7758,
  [SMALL_STATE(107)] = 7831,
  [SMALL_STATE(108)] = 7904,
  [SMALL_STATE(109)] = 7977,
  [SMALL_STATE(110)] = 8050,
  [SMALL_STATE(111)] = 8123,
  [SMALL_STATE(112)] = 8196,
  [SMALL_STATE(113)] = 8269,
  [SMALL_STATE(114)] = 8313,
  [SMALL_STATE(115)] = 8357,
  [SMALL_STATE(116)] = 8396,
  [SMALL_STATE(117)] = 8435,
  [SMALL_STATE(118)] = 8474,
  [SMALL_STATE(119)] = 8513,
  [SMALL_STATE(120)] = 8552,
  [SMALL_STATE(121)] = 8591,
  [SMALL_STATE(122)] = 8630,
  [SMALL_STATE(123)] = 8669,
  [SMALL_STATE(124)] = 8708,
  [SMALL_STATE(125)] = 8747,
  [SMALL_STATE(126)] = 8786,
  [SMALL_STATE(127)] = 8825,
  [SMALL_STATE(128)] = 8864,
  [SMALL_STATE(129)] = 8903,
  [SMALL_STATE(130)] = 8942,
  [SMALL_STATE(131)] = 8981,
  [SMALL_STATE(132)] = 9020,
  [SMALL_STATE(133)] = 9059,
  [SMALL_STATE(134)] = 9098,
  [SMALL_STATE(135)] = 9137,
  [SMALL_STATE(136)] = 9176,
  [SMALL_STATE(137)] = 9215,
  [SMALL_STATE(138)] = 9254,
  [SMALL_STATE(139)] = 9293,
  [SMALL_STATE(140)] = 9332,
  [SMALL_STATE(141)] = 9371,
  [SMALL_STATE(142)] = 9410,
  [SMALL_STATE(143)] = 9449,
  [SMALL_STATE(144)] = 9487,
  [SMALL_STATE(145)] = 9525,
  [SMALL_STATE(146)] = 9563,
  [SMALL_STATE(147)] = 9601,
  [SMALL_STATE(148)] = 9639,
  [SMALL_STATE(149)] = 9693,
  [SMALL_STATE(150)] = 9731,
  [SMALL_STATE(151)] = 9769,
  [SMALL_STATE(152)] = 9807,
  [SMALL_STATE(153)] = 9857,
  [SMALL_STATE(154)] = 9895,
  [SMALL_STATE(155)] = 9933,
  [SMALL_STATE(156)] = 9999,
  [SMALL_STATE(157)] = 10057,
  [SMALL_STATE(158)] = 10095,
  [SMALL_STATE(159)] = 10151,
  [SMALL_STATE(160)] = 10189,
  [SMALL_STATE(161)] = 10237,
  [SMALL_STATE(162)] = 10275,
  [SMALL_STATE(163)] = 10313,
  [SMALL_STATE(164)] = 10351,
  [SMALL_STATE(165)] = 10389,
  [SMALL_STATE(166)] = 10433,
  [SMALL_STATE(167)] = 10477,
  [SMALL_STATE(168)] = 10515,
  [SMALL_STATE(169)] = 10553,
  [SMALL_STATE(170)] = 10591,
  [SMALL_STATE(171)] = 10629,
  [SMALL_STATE(172)] = 10667,
  [SMALL_STATE(173)] = 10705,
  [SMALL_STATE(174)] = 10743,
  [SMALL_STATE(175)] = 10781,
  [SMALL_STATE(176)] = 10819,
  [SMALL_STATE(177)] = 10857,
  [SMALL_STATE(178)] = 10895,
  [SMALL_STATE(179)] = 10933,
  [SMALL_STATE(180)] = 10977,
  [SMALL_STATE(181)] = 11021,
  [SMALL_STATE(182)] = 11065,
  [SMALL_STATE(183)] = 11109,
  [SMALL_STATE(184)] = 11153,
  [SMALL_STATE(185)] = 11199,
  [SMALL_STATE(186)] = 11241,
  [SMALL_STATE(187)] = 11289,
  [SMALL_STATE(188)] = 11341,
  [SMALL_STATE(189)] = 11395,
  [SMALL_STATE(190)] = 11451,
  [SMALL_STATE(191)] = 11493,
  [SMALL_STATE(192)] = 11557,
  [SMALL_STATE(193)] = 11599,
  [SMALL_STATE(194)] = 11641,
  [SMALL_STATE(195)] = 11683,
  [SMALL_STATE(196)] = 11725,
  [SMALL_STATE(197)] = 11767,
  [SMALL_STATE(198)] = 11804,
  [SMALL_STATE(199)] = 11835,
  [SMALL_STATE(200)] = 11866,
  [SMALL_STATE(201)] = 11897,
  [SMALL_STATE(202)] = 11928,
  [SMALL_STATE(203)] = 11959,
  [SMALL_STATE(204)] = 11990,
  [SMALL_STATE(205)] = 12021,
  [SMALL_STATE(206)] = 12052,
  [SMALL_STATE(207)] = 12083,
  [SMALL_STATE(208)] = 12114,
  [SMALL_STATE(209)] = 12145,
  [SMALL_STATE(210)] = 12180,
  [SMALL_STATE(211)] = 12211,
  [SMALL_STATE(212)] = 12242,
  [SMALL_STATE(213)] = 12273,
  [SMALL_STATE(214)] = 12304,
  [SMALL_STATE(215)] = 12335,
  [SMALL_STATE(216)] = 12366,
  [SMALL_STATE(217)] = 12397,
  [SMALL_STATE(218)] = 12428,
  [SMALL_STATE(219)] = 12459,
  [SMALL_STATE(220)] = 12490,
  [SMALL_STATE(221)] = 12521,
  [SMALL_STATE(222)] = 12552,
  [SMALL_STATE(223)] = 12583,
  [SMALL_STATE(224)] = 12614,
  [SMALL_STATE(225)] = 12645,
  [SMALL_STATE(226)] = 12676,
  [SMALL_STATE(227)] = 12707,
  [SMALL_STATE(228)] = 12736,
  [SMALL_STATE(229)] = 12765,
  [SMALL_STATE(230)] = 12794,
  [SMALL_STATE(231)] = 12823,
  [SMALL_STATE(232)] = 12852,
  [SMALL_STATE(233)] = 12881,
  [SMALL_STATE(234)] = 12910,
  [SMALL_STATE(235)] = 12939,
  [SMALL_STATE(236)] = 12968,
  [SMALL_STATE(237)] = 12997,
  [SMALL_STATE(238)] = 13026,
  [SMALL_STATE(239)] = 13055,
  [SMALL_STATE(240)] = 13084,
  [SMALL_STATE(241)] = 13113,
  [SMALL_STATE(242)] = 13142,
  [SMALL_STATE(243)] = 13171,
  [SMALL_STATE(244)] = 13200,
  [SMALL_STATE(245)] = 13229,
  [SMALL_STATE(246)] = 13258,
  [SMALL_STATE(247)] = 13287,
  [SMALL_STATE(248)] = 13316,
  [SMALL_STATE(249)] = 13345,
  [SMALL_STATE(250)] = 13374,
  [SMALL_STATE(251)] = 13403,
  [SMALL_STATE(252)] = 13432,
  [SMALL_STATE(253)] = 13461,
  [SMALL_STATE(254)] = 13490,
  [SMALL_STATE(255)] = 13519,
  [SMALL_STATE(256)] = 13543,
  [SMALL_STATE(257)] = 13567,
  [SMALL_STATE(258)] = 13593,
  [SMALL_STATE(259)] = 13616,
  [SMALL_STATE(260)] = 13640,
  [SMALL_STATE(261)] = 13664,
  [SMALL_STATE(262)] = 13685,
  [SMALL_STATE(263)] = 13706,
  [SMALL_STATE(264)] = 13727,
  [SMALL_STATE(265)] = 13748,
  [SMALL_STATE(266)] = 13777,
  [SMALL_STATE(267)] = 13806,
  [SMALL_STATE(268)] = 13830,
  [SMALL_STATE(269)] = 13854,
  [SMALL_STATE(270)] = 13879,
  [SMALL_STATE(271)] = 13902,
  [SMALL_STATE(272)] = 13925,
  [SMALL_STATE(273)] = 13950,
  [SMALL_STATE(274)] = 13973,
  [SMALL_STATE(275)] = 13996,
  [SMALL_STATE(276)] = 14021,
  [SMALL_STATE(277)] = 14044,
  [SMALL_STATE(278)] = 14069,
  [SMALL_STATE(279)] = 14093,
  [SMALL_STATE(280)] = 14116,
  [SMALL_STATE(281)] = 14139,
  [SMALL_STATE(282)] = 14158,
  [SMALL_STATE(283)] = 14181,
  [SMALL_STATE(284)] = 14202,
  [SMALL_STATE(285)] = 14225,
  [SMALL_STATE(286)] = 14248,
  [SMALL_STATE(287)] = 14268,
  [SMALL_STATE(288)] = 14288,
  [SMALL_STATE(289)] = 14302,
  [SMALL_STATE(290)] = 14322,
  [SMALL_STATE(291)] = 14340,
  [SMALL_STATE(292)] = 14352,
  [SMALL_STATE(293)] = 14372,
  [SMALL_STATE(294)] = 14392,
  [SMALL_STATE(295)] = 14406,
  [SMALL_STATE(296)] = 14418,
  [SMALL_STATE(297)] = 14438,
  [SMALL_STATE(298)] = 14455,
  [SMALL_STATE(299)] = 14466,
  [SMALL_STATE(300)] = 14477,
  [SMALL_STATE(301)] = 14494,
  [SMALL_STATE(302)] = 14509,
  [SMALL_STATE(303)] = 14524,
  [SMALL_STATE(304)] = 14541,
  [SMALL_STATE(305)] = 14558,
  [SMALL_STATE(306)] = 14575,
  [SMALL_STATE(307)] = 14586,
  [SMALL_STATE(308)] = 14598,
  [SMALL_STATE(309)] = 14610,
  [SMALL_STATE(310)] = 14620,
  [SMALL_STATE(311)] = 14634,
  [SMALL_STATE(312)] = 14646,
  [SMALL_STATE(313)] = 14658,
  [SMALL_STATE(314)] = 14672,
  [SMALL_STATE(315)] = 14682,
  [SMALL_STATE(316)] = 14692,
  [SMALL_STATE(317)] = 14702,
  [SMALL_STATE(318)] = 14714,
  [SMALL_STATE(319)] = 14728,
  [SMALL_STATE(320)] = 14740,
  [SMALL_STATE(321)] = 14754,
  [SMALL_STATE(322)] = 14768,
  [SMALL_STATE(323)] = 14778,
  [SMALL_STATE(324)] = 14788,
  [SMALL_STATE(325)] = 14799,
  [SMALL_STATE(326)] = 14810,
  [SMALL_STATE(327)] = 14821,
  [SMALL_STATE(328)] = 14832,
  [SMALL_STATE(329)] = 14843,
  [SMALL_STATE(330)] = 14854,
  [SMALL_STATE(331)] = 14865,
  [SMALL_STATE(332)] = 14876,
  [SMALL_STATE(333)] = 14887,
  [SMALL_STATE(334)] = 14898,
  [SMALL_STATE(335)] = 14909,
  [SMALL_STATE(336)] = 14920,
  [SMALL_STATE(337)] = 14931,
  [SMALL_STATE(338)] = 14942,
  [SMALL_STATE(339)] = 14953,
  [SMALL_STATE(340)] = 14964,
  [SMALL_STATE(341)] = 14975,
  [SMALL_STATE(342)] = 14986,
  [SMALL_STATE(343)] = 14997,
  [SMALL_STATE(344)] = 15008,
  [SMALL_STATE(345)] = 15019,
  [SMALL_STATE(346)] = 15030,
  [SMALL_STATE(347)] = 15041,
  [SMALL_STATE(348)] = 15052,
  [SMALL_STATE(349)] = 15063,
  [SMALL_STATE(350)] = 15074,
  [SMALL_STATE(351)] = 15085,
  [SMALL_STATE(352)] = 15096,
  [SMALL_STATE(353)] = 15107,
  [SMALL_STATE(354)] = 15118,
  [SMALL_STATE(355)] = 15129,
  [SMALL_STATE(356)] = 15140,
  [SMALL_STATE(357)] = 15151,
  [SMALL_STATE(358)] = 15162,
  [SMALL_STATE(359)] = 15173,
  [SMALL_STATE(360)] = 15184,
  [SMALL_STATE(361)] = 15195,
  [SMALL_STATE(362)] = 15206,
  [SMALL_STATE(363)] = 15217,
  [SMALL_STATE(364)] = 15228,
  [SMALL_STATE(365)] = 15239,
  [SMALL_STATE(366)] = 15250,
  [SMALL_STATE(367)] = 15261,
  [SMALL_STATE(368)] = 15272,
  [SMALL_STATE(369)] = 15283,
  [SMALL_STATE(370)] = 15294,
  [SMALL_STATE(371)] = 15305,
  [SMALL_STATE(372)] = 15316,
  [SMALL_STATE(373)] = 15327,
  [SMALL_STATE(374)] = 15335,
  [SMALL_STATE(375)] = 15343,
  [SMALL_STATE(376)] = 15351,
  [SMALL_STATE(377)] = 15359,
  [SMALL_STATE(378)] = 15367,
  [SMALL_STATE(379)] = 15375,
  [SMALL_STATE(380)] = 15383,
  [SMALL_STATE(381)] = 15391,
  [SMALL_STATE(382)] = 15399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(114),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(74),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(151),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(151),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(153),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(176),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(95),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(275),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(78),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(352),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(47),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(342),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(82),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(363),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(67),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(341),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(13),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(278),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(301),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(42),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(71),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(290),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(310),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(302),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(320),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [757] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hcl_external_scanner_create(void);
void tree_sitter_hcl_external_scanner_destroy(void *);
bool tree_sitter_hcl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hcl_external_scanner_serialize(void *, char *);
void tree_sitter_hcl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hcl(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hcl_external_scanner_create,
      tree_sitter_hcl_external_scanner_destroy,
      tree_sitter_hcl_external_scanner_scan,
      tree_sitter_hcl_external_scanner_serialize,
      tree_sitter_hcl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
