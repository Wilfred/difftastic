#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 390
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
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
  aux_sym_full_splat_repeat1 = 102,
  aux_sym_quoted_template_repeat1 = 103,
  aux_sym_template_literal_repeat1 = 104,
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
  [aux_sym_full_splat_repeat1] = "full_splat_repeat1",
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
  [aux_sym_full_splat_repeat1] = aux_sym_full_splat_repeat1,
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
  [aux_sym_full_splat_repeat1] = {
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
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
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
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 29},
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
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
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
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
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
  [114] = {.lex_state = 1, .external_lex_state = 2},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 29},
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
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 1, .external_lex_state = 2},
  [141] = {.lex_state = 1, .external_lex_state = 2},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 29},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 29},
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
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0, .external_lex_state = 3},
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
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
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
  [255] = {.lex_state = 0, .external_lex_state = 3},
  [256] = {.lex_state = 0, .external_lex_state = 3},
  [257] = {.lex_state = 0, .external_lex_state = 3},
  [258] = {.lex_state = 1, .external_lex_state = 2},
  [259] = {.lex_state = 1, .external_lex_state = 2},
  [260] = {.lex_state = 1, .external_lex_state = 2},
  [261] = {.lex_state = 1, .external_lex_state = 2},
  [262] = {.lex_state = 1, .external_lex_state = 2},
  [263] = {.lex_state = 1, .external_lex_state = 2},
  [264] = {.lex_state = 1, .external_lex_state = 2},
  [265] = {.lex_state = 1, .external_lex_state = 2},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 4},
  [270] = {.lex_state = 0, .external_lex_state = 4},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 0, .external_lex_state = 4},
  [273] = {.lex_state = 0, .external_lex_state = 4},
  [274] = {.lex_state = 0, .external_lex_state = 4},
  [275] = {.lex_state = 0, .external_lex_state = 4},
  [276] = {.lex_state = 0, .external_lex_state = 4},
  [277] = {.lex_state = 3, .external_lex_state = 2},
  [278] = {.lex_state = 29},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 29, .external_lex_state = 2},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 29},
  [289] = {.lex_state = 29, .external_lex_state = 2},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 29},
  [303] = {.lex_state = 0, .external_lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0, .external_lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0, .external_lex_state = 4},
  [308] = {.lex_state = 0, .external_lex_state = 4},
  [309] = {.lex_state = 0, .external_lex_state = 3},
  [310] = {.lex_state = 0, .external_lex_state = 5},
  [311] = {.lex_state = 0, .external_lex_state = 4},
  [312] = {.lex_state = 0, .external_lex_state = 6},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 29},
  [315] = {.lex_state = 0, .external_lex_state = 3},
  [316] = {.lex_state = 0, .external_lex_state = 4},
  [317] = {.lex_state = 0, .external_lex_state = 4},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 0, .external_lex_state = 3},
  [321] = {.lex_state = 0, .external_lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0, .external_lex_state = 6},
  [324] = {.lex_state = 0, .external_lex_state = 3},
  [325] = {.lex_state = 29, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 4},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 29},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 29},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0, .external_lex_state = 7},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 0, .external_lex_state = 3},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0, .external_lex_state = 3},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
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
    [sym_config_file] = STATE(389),
    [sym_body] = STATE(388),
    [sym_attribute] = STATE(288),
    [sym_block] = STATE(288),
    [aux_sym_body_repeat1] = STATE(288),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym_object_elem,
    STATE(10), 1,
      sym__tuple_start,
    STATE(69), 1,
      sym_for_intro,
    STATE(165), 1,
      sym_quoted_template,
    STATE(226), 1,
      sym__object_end,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(362), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [97] = 27,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym_object_elem,
    STATE(10), 1,
      sym__tuple_start,
    STATE(65), 1,
      sym_for_intro,
    STATE(163), 1,
      sym__object_end,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(375), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [194] = 27,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym_object_elem,
    STATE(10), 1,
      sym__tuple_start,
    STATE(64), 1,
      sym_for_intro,
    STATE(165), 1,
      sym_quoted_template,
    STATE(230), 1,
      sym__object_end,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(367), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [291] = 27,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(7), 1,
      sym_object_elem,
    STATE(10), 1,
      sym__tuple_start,
    STATE(45), 1,
      sym_for_intro,
    STATE(112), 1,
      sym__object_end,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(365), 1,
      sym__object_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [388] = 25,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(26), 1,
      sym__comma,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [480] = 25,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(25), 1,
      sym__comma,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(6), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [572] = 25,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(61), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(67), 1,
      sym_null_lit,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(37), 1,
      sym__comma,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(64), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(76), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [664] = 26,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(43), 1,
      sym_for_intro,
    STATE(165), 1,
      sym_quoted_template,
    STATE(223), 1,
      sym__tuple_end,
    STATE(266), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    STATE(363), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [758] = 26,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(60), 1,
      sym_for_intro,
    STATE(165), 1,
      sym_quoted_template,
    STATE(168), 1,
      sym__tuple_end,
    STATE(266), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    STATE(351), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [852] = 26,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(61), 1,
      sym_for_intro,
    STATE(165), 1,
      sym_quoted_template,
    STATE(251), 1,
      sym__tuple_end,
    STATE(266), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    STATE(341), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [946] = 26,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(66), 1,
      sym_for_intro,
    STATE(141), 1,
      sym__tuple_end,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    STATE(345), 1,
      sym__tuple_elems,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1040] = 11,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(90), 13,
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
  [1102] = 24,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(166), 1,
      sym__function_call_end,
    STATE(266), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(356), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1190] = 18,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(114), 1,
      anon_sym_DOT_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(122), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(108), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
    ACTIONS(106), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [1266] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(126), 11,
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
    ACTIONS(124), 19,
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
  [1318] = 8,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 10,
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
    ACTIONS(90), 17,
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
  [1374] = 9,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 10,
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
    ACTIONS(90), 15,
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
  [1432] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 11,
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
    ACTIONS(90), 19,
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
  [1484] = 24,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(229), 1,
      sym__function_call_end,
    STATE(266), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(359), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1572] = 13,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(90), 10,
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
  [1638] = 12,
    ACTIONS(98), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(94), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(96), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(129), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(131), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 8,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
    ACTIONS(90), 11,
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
  [1702] = 24,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(239), 1,
      sym__function_call_end,
    STATE(266), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(364), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1790] = 24,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(125), 1,
      sym__function_call_end,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    STATE(331), 1,
      sym_function_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1878] = 23,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(261), 1,
      sym_object_elem,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1963] = 23,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(261), 1,
      sym_object_elem,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2048] = 9,
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
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 18,
      ts_builtin_sym_end,
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
  [2104] = 7,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(40), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(144), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 19,
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
  [2156] = 22,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(291), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2238] = 22,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(291), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2320] = 13,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
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
    ACTIONS(150), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(92), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 13,
      ts_builtin_sym_end,
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
  [2384] = 12,
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
    ACTIONS(150), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(92), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 14,
      ts_builtin_sym_end,
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
  [2446] = 11,
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
    ACTIONS(150), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(92), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 16,
      ts_builtin_sym_end,
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
  [2506] = 18,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
      anon_sym_AMP_AMP,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_DOT_STAR,
    ACTIONS(164), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(166), 1,
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
    ACTIONS(150), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(154), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [2580] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 22,
      ts_builtin_sym_end,
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
  [2630] = 8,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(138), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 20,
      ts_builtin_sym_end,
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
  [2684] = 22,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(261), 1,
      sym_object_elem,
    STATE(266), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2766] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(161), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(155), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(126), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 22,
      ts_builtin_sym_end,
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
  [2816] = 7,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(39), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(170), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 19,
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
  [2868] = 7,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(39), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(180), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 19,
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
  [2920] = 22,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      sym_strip_marker,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    STATE(315), 1,
      sym_expression,
    STATE(324), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3002] = 21,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_conditional,
    STATE(260), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
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
  [3081] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(292), 1,
      sym_conditional,
    STATE(295), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3160] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(333), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3239] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(342), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3318] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(353), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3397] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3476] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(267), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3555] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(302), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3634] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(373), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3713] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3792] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(360), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3871] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(292), 1,
      sym_conditional,
    STATE(298), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3950] = 21,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    STATE(309), 1,
      sym_expression,
    STATE(324), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4029] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(330), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4108] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(334), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4187] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(322), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4266] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(346), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4345] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(282), 1,
      sym_expression,
    STATE(292), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4424] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(292), 1,
      sym_conditional,
    STATE(294), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4503] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(292), 1,
      sym_conditional,
    STATE(297), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4582] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(372), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4661] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(283), 1,
      sym_expression,
    STATE(292), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4740] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(366), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4819] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(335), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4898] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(292), 1,
      sym_conditional,
    STATE(293), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4977] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(287), 1,
      sym_expression,
    STATE(292), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5056] = 21,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    STATE(320), 1,
      sym_expression,
    STATE(324), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(183), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5135] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(354), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5214] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(329), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5293] = 21,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    STATE(284), 1,
      sym_expression,
    STATE(292), 1,
      sym_conditional,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(146), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5372] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(348), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5451] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(291), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5530] = 21,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_conditional,
    STATE(259), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
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
  [5609] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(361), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5688] = 21,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_conditional,
    STATE(369), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(34), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5767] = 7,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(77), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 22,
      ts_builtin_sym_end,
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
  [5817] = 7,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(77), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(180), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 22,
      ts_builtin_sym_end,
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
  [5867] = 7,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(162), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(78), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 22,
      ts_builtin_sym_end,
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
  [5917] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(17), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5990] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [6063] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(147), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6136] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
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
  [6209] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(144), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6282] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(149), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6355] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(150), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6428] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(151), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6501] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6574] = 19,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(232), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(236), 1,
      sym_null_lit,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(9), 1,
      sym__tuple_start,
    STATE(222), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(218), 2,
      sym_tuple,
      sym_object,
    STATE(219), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(221), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(215), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(145), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6647] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [6720] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [6793] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [6866] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [6939] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
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
  [7012] = 19,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(190), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(194), 1,
      sym_null_lit,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(11), 1,
      sym__tuple_start,
    STATE(249), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(231), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(238), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(257), 2,
      sym_tuple,
      sym_object,
    STATE(256), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(181), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7085] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
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
  [7158] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(31), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7231] = 5,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(106), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 19,
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
  [7276] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
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
  [7349] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
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
  [7422] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
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
  [7495] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(18), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7568] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(13), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7641] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
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
  [7714] = 19,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(212), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(216), 1,
      sym_null_lit,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(222), 1,
      sym__quoted_template_start,
    STATE(5), 1,
      sym__object_start,
    STATE(12), 1,
      sym__tuple_start,
    STATE(143), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(220), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(135), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(142), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(133), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(21), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7787] = 5,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(108), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 19,
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
  [7832] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
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
  [7905] = 5,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(108), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 19,
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
  [7950] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
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
  [8023] = 19,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(19), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(23), 1,
      sym_null_lit,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(10), 1,
      sym__tuple_start,
    STATE(165), 1,
      sym_quoted_template,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(179), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(36), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8096] = 5,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 11,
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
    ACTIONS(267), 18,
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
  [8140] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(275), 11,
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
    ACTIONS(273), 19,
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
  [8179] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 11,
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
    ACTIONS(277), 19,
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
  [8218] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 11,
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
    ACTIONS(281), 19,
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
  [8257] = 5,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 22,
      ts_builtin_sym_end,
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
  [8300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(289), 11,
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
    ACTIONS(287), 19,
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
  [8339] = 5,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(117), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 22,
      ts_builtin_sym_end,
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
  [8382] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 11,
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
    ACTIONS(294), 19,
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
  [8421] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 11,
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
    ACTIONS(298), 19,
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
  [8460] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 11,
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
    ACTIONS(302), 19,
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
  [8499] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 11,
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
    ACTIONS(306), 19,
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
  [8538] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 11,
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
    ACTIONS(310), 19,
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
  [8577] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(316), 11,
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
    ACTIONS(314), 19,
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
  [8616] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 11,
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
    ACTIONS(318), 19,
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
  [8655] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 11,
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
    ACTIONS(322), 19,
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
  [8694] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 11,
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
    ACTIONS(326), 19,
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
  [8733] = 5,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(138), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 22,
      ts_builtin_sym_end,
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
  [8776] = 3,
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
  [8815] = 3,
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
  [8854] = 3,
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
  [8893] = 3,
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
  [8932] = 3,
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
  [8971] = 3,
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
  [9010] = 3,
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
  [9049] = 3,
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
  [9088] = 3,
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
  [9127] = 3,
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
  [9166] = 5,
    ACTIONS(330), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(117), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 22,
      ts_builtin_sym_end,
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
  [9209] = 3,
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
  [9248] = 3,
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
  [9287] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 11,
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
    ACTIONS(380), 19,
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
  [9326] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 11,
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
    ACTIONS(384), 19,
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
  [9365] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 11,
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
    ACTIONS(388), 19,
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
  [9404] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 17,
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
  [9448] = 13,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(398), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [9506] = 17,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_AMP_AMP,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_DOT_STAR,
    ACTIONS(412), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(414), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(398), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(106), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [9572] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(126), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 17,
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
  [9616] = 8,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 15,
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
  [9664] = 9,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 13,
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
  [9714] = 11,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(398), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 11,
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
  [9768] = 12,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(398), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(199), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(228), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9824] = 3,
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
    ACTIONS(356), 22,
      ts_builtin_sym_end,
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
  [9861] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(316), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 22,
      ts_builtin_sym_end,
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
  [9898] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 22,
      ts_builtin_sym_end,
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
  [9935] = 3,
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
    ACTIONS(344), 22,
      ts_builtin_sym_end,
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
  [9972] = 3,
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
    ACTIONS(364), 22,
      ts_builtin_sym_end,
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
  [10009] = 3,
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
    ACTIONS(348), 22,
      ts_builtin_sym_end,
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
  [10046] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(289), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 22,
      ts_builtin_sym_end,
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
  [10083] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 22,
      ts_builtin_sym_end,
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
  [10120] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(310), 22,
      ts_builtin_sym_end,
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
  [10157] = 3,
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
    ACTIONS(336), 22,
      ts_builtin_sym_end,
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
  [10194] = 3,
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
    ACTIONS(340), 22,
      ts_builtin_sym_end,
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
  [10231] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(275), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 22,
      ts_builtin_sym_end,
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
  [10268] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 22,
      ts_builtin_sym_end,
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
  [10305] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 22,
      ts_builtin_sym_end,
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
  [10342] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 22,
      ts_builtin_sym_end,
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
  [10379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 22,
      ts_builtin_sym_end,
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
  [10416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 22,
      ts_builtin_sym_end,
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
  [10453] = 3,
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
    ACTIONS(376), 22,
      ts_builtin_sym_end,
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
  [10490] = 3,
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
    ACTIONS(332), 22,
      ts_builtin_sym_end,
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
  [10527] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 22,
      ts_builtin_sym_end,
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
  [10564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(298), 22,
      ts_builtin_sym_end,
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
  [10601] = 3,
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
    ACTIONS(368), 22,
      ts_builtin_sym_end,
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
  [10638] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 22,
      ts_builtin_sym_end,
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
  [10675] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 22,
      ts_builtin_sym_end,
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
  [10712] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 22,
      ts_builtin_sym_end,
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
  [10749] = 3,
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
    ACTIONS(372), 22,
      ts_builtin_sym_end,
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
  [10786] = 3,
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
    ACTIONS(360), 22,
      ts_builtin_sym_end,
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
  [10823] = 3,
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
    ACTIONS(352), 22,
      ts_builtin_sym_end,
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
  [10860] = 7,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(180), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(182), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(178), 17,
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
  [10904] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(126), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(124), 15,
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
  [10946] = 7,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(182), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(168), 17,
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
  [10990] = 17,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_DOT_STAR,
    ACTIONS(428), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(444), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(440), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(106), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11054] = 7,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(198), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(144), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(180), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(142), 17,
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
  [11098] = 8,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 13,
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
  [11144] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 15,
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
  [11186] = 9,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(92), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 11,
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
  [11234] = 11,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11286] = 12,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(440), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11340] = 13,
    ACTIONS(434), 1,
      anon_sym_SLASH,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(440), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(252), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(254), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(90), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [11396] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(144), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(192), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(142), 15,
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
  [11438] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(180), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(193), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(178), 15,
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
  [11480] = 7,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(253), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(170), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(193), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(168), 15,
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
  [11522] = 5,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(196), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 17,
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
  [11559] = 5,
    ACTIONS(454), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(195), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 4,
      anon_sym_LBRACK,
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
  [11596] = 5,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(195), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 17,
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
  [11633] = 5,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 17,
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
  [11670] = 3,
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
  [11701] = 3,
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
  [11732] = 5,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(200), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(262), 4,
      anon_sym_LBRACK,
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
  [11767] = 3,
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
  [11798] = 5,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(269), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 15,
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
  [11833] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 17,
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
  [11864] = 3,
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
  [11895] = 3,
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
  [11926] = 3,
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
  [11957] = 3,
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
  [11988] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(279), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 17,
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
  [12019] = 5,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(227), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(252), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 15,
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
  [12054] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 17,
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
  [12085] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(289), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 17,
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
  [12116] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(298), 17,
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
  [12147] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 17,
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
  [12178] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 17,
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
  [12209] = 3,
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
  [12240] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(310), 17,
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
  [12271] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(316), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 17,
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
  [12302] = 3,
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
  [12333] = 3,
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
  [12364] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 17,
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
  [12395] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 17,
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
  [12426] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 17,
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
  [12457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 17,
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
  [12488] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 17,
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
  [12519] = 3,
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
  [12550] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(275), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 17,
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
  [12581] = 5,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(200), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(258), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 15,
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
  [12616] = 3,
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
  [12647] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 17,
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
  [12678] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(275), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 15,
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
  [12707] = 3,
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
  [12736] = 3,
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
  [12765] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(298), 15,
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
  [12823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(310), 15,
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
    ACTIONS(316), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(314), 15,
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
    ACTIONS(320), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 15,
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
    ACTIONS(386), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 15,
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
    ACTIONS(324), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 15,
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
    ACTIONS(328), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 15,
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
    ACTIONS(279), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 15,
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
  [13055] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 15,
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
  [13113] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 15,
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
    ACTIONS(289), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 15,
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
  [13200] = 3,
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
  [13229] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(390), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 15,
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
    ACTIONS(308), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(306), 15,
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
    ACTIONS(382), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 15,
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
  [13345] = 3,
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
  [13374] = 3,
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
  [13403] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(283), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 15,
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
  [13461] = 3,
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
  [13490] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(108), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(106), 10,
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
  [13514] = 4,
    ACTIONS(470), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(468), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(466), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13540] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(472), 10,
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
  [13564] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(476), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(50), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13587] = 4,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(480), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(478), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13611] = 4,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(480), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(478), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(488), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(486), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13656] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(492), 5,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(490), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13677] = 3,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [13697] = 3,
    ACTIONS(474), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
  [13717] = 7,
    ACTIONS(494), 1,
      sym__quoted_template_end,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    STATE(317), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(276), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13742] = 6,
    ACTIONS(500), 1,
      sym__quoted_template_end,
    ACTIONS(502), 1,
      sym__template_literal_chunk,
    ACTIONS(505), 1,
      sym__template_interpolation_start,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(269), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13765] = 7,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(508), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    STATE(307), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(274), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13790] = 7,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(510), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    STATE(321), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(272), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13815] = 6,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(512), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(269), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13838] = 7,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(514), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    STATE(326), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(275), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13863] = 6,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(516), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(269), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13886] = 6,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(518), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(269), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13909] = 6,
    ACTIONS(496), 1,
      sym__template_literal_chunk,
    ACTIONS(498), 1,
      sym__template_interpolation_start,
    ACTIONS(520), 1,
      sym__quoted_template_end,
    STATE(305), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(269), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13932] = 7,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(528), 1,
      sym__quoted_template_start,
    STATE(279), 1,
      sym__block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(281), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [13956] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym__block_end,
    STATE(371), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(288), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [13978] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym__block_end,
    STATE(352), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(288), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [14000] = 7,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      sym_ellipsis,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    STATE(73), 1,
      sym__comma,
    STATE(290), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14023] = 6,
    ACTIONS(528), 1,
      sym__quoted_template_start,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(278), 1,
      sym__block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(289), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14044] = 7,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(550), 1,
      sym_ellipsis,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    STATE(234), 1,
      sym__object_end,
    STATE(349), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14067] = 7,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      sym_ellipsis,
    STATE(205), 1,
      sym__object_end,
    STATE(338), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14090] = 7,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(560), 1,
      sym_ellipsis,
    STATE(173), 1,
      sym__object_end,
    STATE(350), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14113] = 4,
    ACTIONS(564), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(285), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [14130] = 5,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      sym__comma,
    STATE(286), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(567), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [14149] = 7,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    ACTIONS(574), 1,
      sym_ellipsis,
    STATE(137), 1,
      sym__object_end,
    STATE(339), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14172] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(576), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(285), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [14189] = 5,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(583), 1,
      sym__quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(289), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14207] = 6,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      sym_ellipsis,
    STATE(73), 1,
      sym__comma,
    STATE(286), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14227] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(567), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [14241] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [14253] = 6,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym__tuple_end,
    STATE(336), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14273] = 6,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym__tuple_end,
    STATE(374), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14293] = 6,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym__tuple_end,
    STATE(344), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14313] = 6,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__comma,
    STATE(304), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14333] = 6,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(552), 1,
      anon_sym_QMARK,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym__tuple_end,
    STATE(368), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14353] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [14365] = 5,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym__object_end,
    STATE(332), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14382] = 5,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym__object_end,
    STATE(327), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14399] = 5,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym__object_end,
    STATE(355), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14416] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14429] = 4,
    ACTIONS(612), 1,
      sym__template_literal_chunk,
    STATE(303), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(610), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [14444] = 5,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym__comma,
    STATE(286), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14461] = 4,
    ACTIONS(619), 1,
      sym__template_literal_chunk,
    STATE(303), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(617), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [14476] = 5,
    ACTIONS(548), 1,
      anon_sym_if,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym__object_end,
    STATE(337), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14493] = 3,
    ACTIONS(623), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14505] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(628), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14515] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(472), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [14525] = 4,
    ACTIONS(630), 1,
      sym__template_literal_chunk,
    STATE(312), 1,
      aux_sym_template_literal_repeat1,
    STATE(380), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14539] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(632), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14549] = 4,
    ACTIONS(617), 1,
      sym__quoted_template_end,
    ACTIONS(634), 1,
      sym__template_literal_chunk,
    STATE(323), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14563] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(636), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [14575] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(638), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14585] = 4,
    ACTIONS(640), 1,
      anon_sym_QMARK,
    ACTIONS(642), 1,
      sym_strip_marker,
    ACTIONS(644), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14599] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(646), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14609] = 3,
    ACTIONS(648), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14621] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(651), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14631] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(653), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14641] = 4,
    ACTIONS(640), 1,
      anon_sym_QMARK,
    ACTIONS(655), 1,
      sym_strip_marker,
    ACTIONS(657), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14655] = 3,
    ACTIONS(659), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14667] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(662), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [14679] = 4,
    ACTIONS(610), 1,
      sym__quoted_template_end,
    ACTIONS(664), 1,
      sym__template_literal_chunk,
    STATE(323), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14693] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(106), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [14703] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [14713] = 3,
    ACTIONS(667), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(626), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [14725] = 3,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14736] = 3,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(674), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14747] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14758] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(678), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14769] = 3,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14780] = 3,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14791] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14802] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14813] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(688), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14824] = 3,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14835] = 3,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14846] = 3,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14857] = 3,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14868] = 3,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14879] = 3,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14890] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(700), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14901] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14912] = 3,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14923] = 3,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14934] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14945] = 3,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(712), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14956] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14967] = 3,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14978] = 3,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [14989] = 3,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15000] = 3,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15011] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15022] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(720), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15033] = 3,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15044] = 3,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15055] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15066] = 3,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(730), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15077] = 3,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15088] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(734), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15099] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15110] = 3,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15121] = 3,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15132] = 3,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15143] = 3,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15154] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(746), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15165] = 3,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15176] = 3,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15187] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15198] = 3,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(756), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15209] = 3,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym__block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15220] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(760), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15231] = 3,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(762), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15242] = 3,
    ACTIONS(764), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym__tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15253] = 3,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym__object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15264] = 2,
    ACTIONS(754), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15272] = 2,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15280] = 2,
    ACTIONS(768), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15288] = 2,
    ACTIONS(770), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15296] = 2,
    ACTIONS(772), 1,
      sym__quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15304] = 2,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15312] = 2,
    ACTIONS(774), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15320] = 2,
    ACTIONS(657), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15328] = 2,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15336] = 2,
    ACTIONS(776), 1,
      sym__template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15344] = 2,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15352] = 2,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15360] = 2,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15368] = 2,
    ACTIONS(780), 1,
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
  [SMALL_STATE(9)] = 664,
  [SMALL_STATE(10)] = 758,
  [SMALL_STATE(11)] = 852,
  [SMALL_STATE(12)] = 946,
  [SMALL_STATE(13)] = 1040,
  [SMALL_STATE(14)] = 1102,
  [SMALL_STATE(15)] = 1190,
  [SMALL_STATE(16)] = 1266,
  [SMALL_STATE(17)] = 1318,
  [SMALL_STATE(18)] = 1374,
  [SMALL_STATE(19)] = 1432,
  [SMALL_STATE(20)] = 1484,
  [SMALL_STATE(21)] = 1572,
  [SMALL_STATE(22)] = 1638,
  [SMALL_STATE(23)] = 1702,
  [SMALL_STATE(24)] = 1790,
  [SMALL_STATE(25)] = 1878,
  [SMALL_STATE(26)] = 1963,
  [SMALL_STATE(27)] = 2048,
  [SMALL_STATE(28)] = 2104,
  [SMALL_STATE(29)] = 2156,
  [SMALL_STATE(30)] = 2238,
  [SMALL_STATE(31)] = 2320,
  [SMALL_STATE(32)] = 2384,
  [SMALL_STATE(33)] = 2446,
  [SMALL_STATE(34)] = 2506,
  [SMALL_STATE(35)] = 2580,
  [SMALL_STATE(36)] = 2630,
  [SMALL_STATE(37)] = 2684,
  [SMALL_STATE(38)] = 2766,
  [SMALL_STATE(39)] = 2816,
  [SMALL_STATE(40)] = 2868,
  [SMALL_STATE(41)] = 2920,
  [SMALL_STATE(42)] = 3002,
  [SMALL_STATE(43)] = 3081,
  [SMALL_STATE(44)] = 3160,
  [SMALL_STATE(45)] = 3239,
  [SMALL_STATE(46)] = 3318,
  [SMALL_STATE(47)] = 3397,
  [SMALL_STATE(48)] = 3476,
  [SMALL_STATE(49)] = 3555,
  [SMALL_STATE(50)] = 3634,
  [SMALL_STATE(51)] = 3713,
  [SMALL_STATE(52)] = 3792,
  [SMALL_STATE(53)] = 3871,
  [SMALL_STATE(54)] = 3950,
  [SMALL_STATE(55)] = 4029,
  [SMALL_STATE(56)] = 4108,
  [SMALL_STATE(57)] = 4187,
  [SMALL_STATE(58)] = 4266,
  [SMALL_STATE(59)] = 4345,
  [SMALL_STATE(60)] = 4424,
  [SMALL_STATE(61)] = 4503,
  [SMALL_STATE(62)] = 4582,
  [SMALL_STATE(63)] = 4661,
  [SMALL_STATE(64)] = 4740,
  [SMALL_STATE(65)] = 4819,
  [SMALL_STATE(66)] = 4898,
  [SMALL_STATE(67)] = 4977,
  [SMALL_STATE(68)] = 5056,
  [SMALL_STATE(69)] = 5135,
  [SMALL_STATE(70)] = 5214,
  [SMALL_STATE(71)] = 5293,
  [SMALL_STATE(72)] = 5372,
  [SMALL_STATE(73)] = 5451,
  [SMALL_STATE(74)] = 5530,
  [SMALL_STATE(75)] = 5609,
  [SMALL_STATE(76)] = 5688,
  [SMALL_STATE(77)] = 5767,
  [SMALL_STATE(78)] = 5817,
  [SMALL_STATE(79)] = 5867,
  [SMALL_STATE(80)] = 5917,
  [SMALL_STATE(81)] = 5990,
  [SMALL_STATE(82)] = 6063,
  [SMALL_STATE(83)] = 6136,
  [SMALL_STATE(84)] = 6209,
  [SMALL_STATE(85)] = 6282,
  [SMALL_STATE(86)] = 6355,
  [SMALL_STATE(87)] = 6428,
  [SMALL_STATE(88)] = 6501,
  [SMALL_STATE(89)] = 6574,
  [SMALL_STATE(90)] = 6647,
  [SMALL_STATE(91)] = 6720,
  [SMALL_STATE(92)] = 6793,
  [SMALL_STATE(93)] = 6866,
  [SMALL_STATE(94)] = 6939,
  [SMALL_STATE(95)] = 7012,
  [SMALL_STATE(96)] = 7085,
  [SMALL_STATE(97)] = 7158,
  [SMALL_STATE(98)] = 7231,
  [SMALL_STATE(99)] = 7276,
  [SMALL_STATE(100)] = 7349,
  [SMALL_STATE(101)] = 7422,
  [SMALL_STATE(102)] = 7495,
  [SMALL_STATE(103)] = 7568,
  [SMALL_STATE(104)] = 7641,
  [SMALL_STATE(105)] = 7714,
  [SMALL_STATE(106)] = 7787,
  [SMALL_STATE(107)] = 7832,
  [SMALL_STATE(108)] = 7905,
  [SMALL_STATE(109)] = 7950,
  [SMALL_STATE(110)] = 8023,
  [SMALL_STATE(111)] = 8096,
  [SMALL_STATE(112)] = 8140,
  [SMALL_STATE(113)] = 8179,
  [SMALL_STATE(114)] = 8218,
  [SMALL_STATE(115)] = 8257,
  [SMALL_STATE(116)] = 8300,
  [SMALL_STATE(117)] = 8339,
  [SMALL_STATE(118)] = 8382,
  [SMALL_STATE(119)] = 8421,
  [SMALL_STATE(120)] = 8460,
  [SMALL_STATE(121)] = 8499,
  [SMALL_STATE(122)] = 8538,
  [SMALL_STATE(123)] = 8577,
  [SMALL_STATE(124)] = 8616,
  [SMALL_STATE(125)] = 8655,
  [SMALL_STATE(126)] = 8694,
  [SMALL_STATE(127)] = 8733,
  [SMALL_STATE(128)] = 8776,
  [SMALL_STATE(129)] = 8815,
  [SMALL_STATE(130)] = 8854,
  [SMALL_STATE(131)] = 8893,
  [SMALL_STATE(132)] = 8932,
  [SMALL_STATE(133)] = 8971,
  [SMALL_STATE(134)] = 9010,
  [SMALL_STATE(135)] = 9049,
  [SMALL_STATE(136)] = 9088,
  [SMALL_STATE(137)] = 9127,
  [SMALL_STATE(138)] = 9166,
  [SMALL_STATE(139)] = 9209,
  [SMALL_STATE(140)] = 9248,
  [SMALL_STATE(141)] = 9287,
  [SMALL_STATE(142)] = 9326,
  [SMALL_STATE(143)] = 9365,
  [SMALL_STATE(144)] = 9404,
  [SMALL_STATE(145)] = 9448,
  [SMALL_STATE(146)] = 9506,
  [SMALL_STATE(147)] = 9572,
  [SMALL_STATE(148)] = 9616,
  [SMALL_STATE(149)] = 9664,
  [SMALL_STATE(150)] = 9714,
  [SMALL_STATE(151)] = 9768,
  [SMALL_STATE(152)] = 9824,
  [SMALL_STATE(153)] = 9861,
  [SMALL_STATE(154)] = 9898,
  [SMALL_STATE(155)] = 9935,
  [SMALL_STATE(156)] = 9972,
  [SMALL_STATE(157)] = 10009,
  [SMALL_STATE(158)] = 10046,
  [SMALL_STATE(159)] = 10083,
  [SMALL_STATE(160)] = 10120,
  [SMALL_STATE(161)] = 10157,
  [SMALL_STATE(162)] = 10194,
  [SMALL_STATE(163)] = 10231,
  [SMALL_STATE(164)] = 10268,
  [SMALL_STATE(165)] = 10305,
  [SMALL_STATE(166)] = 10342,
  [SMALL_STATE(167)] = 10379,
  [SMALL_STATE(168)] = 10416,
  [SMALL_STATE(169)] = 10453,
  [SMALL_STATE(170)] = 10490,
  [SMALL_STATE(171)] = 10527,
  [SMALL_STATE(172)] = 10564,
  [SMALL_STATE(173)] = 10601,
  [SMALL_STATE(174)] = 10638,
  [SMALL_STATE(175)] = 10675,
  [SMALL_STATE(176)] = 10712,
  [SMALL_STATE(177)] = 10749,
  [SMALL_STATE(178)] = 10786,
  [SMALL_STATE(179)] = 10823,
  [SMALL_STATE(180)] = 10860,
  [SMALL_STATE(181)] = 10904,
  [SMALL_STATE(182)] = 10946,
  [SMALL_STATE(183)] = 10990,
  [SMALL_STATE(184)] = 11054,
  [SMALL_STATE(185)] = 11098,
  [SMALL_STATE(186)] = 11144,
  [SMALL_STATE(187)] = 11186,
  [SMALL_STATE(188)] = 11234,
  [SMALL_STATE(189)] = 11286,
  [SMALL_STATE(190)] = 11340,
  [SMALL_STATE(191)] = 11396,
  [SMALL_STATE(192)] = 11438,
  [SMALL_STATE(193)] = 11480,
  [SMALL_STATE(194)] = 11522,
  [SMALL_STATE(195)] = 11559,
  [SMALL_STATE(196)] = 11596,
  [SMALL_STATE(197)] = 11633,
  [SMALL_STATE(198)] = 11670,
  [SMALL_STATE(199)] = 11701,
  [SMALL_STATE(200)] = 11732,
  [SMALL_STATE(201)] = 11767,
  [SMALL_STATE(202)] = 11798,
  [SMALL_STATE(203)] = 11833,
  [SMALL_STATE(204)] = 11864,
  [SMALL_STATE(205)] = 11895,
  [SMALL_STATE(206)] = 11926,
  [SMALL_STATE(207)] = 11957,
  [SMALL_STATE(208)] = 11988,
  [SMALL_STATE(209)] = 12019,
  [SMALL_STATE(210)] = 12054,
  [SMALL_STATE(211)] = 12085,
  [SMALL_STATE(212)] = 12116,
  [SMALL_STATE(213)] = 12147,
  [SMALL_STATE(214)] = 12178,
  [SMALL_STATE(215)] = 12209,
  [SMALL_STATE(216)] = 12240,
  [SMALL_STATE(217)] = 12271,
  [SMALL_STATE(218)] = 12302,
  [SMALL_STATE(219)] = 12333,
  [SMALL_STATE(220)] = 12364,
  [SMALL_STATE(221)] = 12395,
  [SMALL_STATE(222)] = 12426,
  [SMALL_STATE(223)] = 12457,
  [SMALL_STATE(224)] = 12488,
  [SMALL_STATE(225)] = 12519,
  [SMALL_STATE(226)] = 12550,
  [SMALL_STATE(227)] = 12581,
  [SMALL_STATE(228)] = 12616,
  [SMALL_STATE(229)] = 12647,
  [SMALL_STATE(230)] = 12678,
  [SMALL_STATE(231)] = 12707,
  [SMALL_STATE(232)] = 12736,
  [SMALL_STATE(233)] = 12765,
  [SMALL_STATE(234)] = 12794,
  [SMALL_STATE(235)] = 12823,
  [SMALL_STATE(236)] = 12852,
  [SMALL_STATE(237)] = 12881,
  [SMALL_STATE(238)] = 12910,
  [SMALL_STATE(239)] = 12939,
  [SMALL_STATE(240)] = 12968,
  [SMALL_STATE(241)] = 12997,
  [SMALL_STATE(242)] = 13026,
  [SMALL_STATE(243)] = 13055,
  [SMALL_STATE(244)] = 13084,
  [SMALL_STATE(245)] = 13113,
  [SMALL_STATE(246)] = 13142,
  [SMALL_STATE(247)] = 13171,
  [SMALL_STATE(248)] = 13200,
  [SMALL_STATE(249)] = 13229,
  [SMALL_STATE(250)] = 13258,
  [SMALL_STATE(251)] = 13287,
  [SMALL_STATE(252)] = 13316,
  [SMALL_STATE(253)] = 13345,
  [SMALL_STATE(254)] = 13374,
  [SMALL_STATE(255)] = 13403,
  [SMALL_STATE(256)] = 13432,
  [SMALL_STATE(257)] = 13461,
  [SMALL_STATE(258)] = 13490,
  [SMALL_STATE(259)] = 13514,
  [SMALL_STATE(260)] = 13540,
  [SMALL_STATE(261)] = 13564,
  [SMALL_STATE(262)] = 13587,
  [SMALL_STATE(263)] = 13611,
  [SMALL_STATE(264)] = 13635,
  [SMALL_STATE(265)] = 13656,
  [SMALL_STATE(266)] = 13677,
  [SMALL_STATE(267)] = 13697,
  [SMALL_STATE(268)] = 13717,
  [SMALL_STATE(269)] = 13742,
  [SMALL_STATE(270)] = 13765,
  [SMALL_STATE(271)] = 13790,
  [SMALL_STATE(272)] = 13815,
  [SMALL_STATE(273)] = 13838,
  [SMALL_STATE(274)] = 13863,
  [SMALL_STATE(275)] = 13886,
  [SMALL_STATE(276)] = 13909,
  [SMALL_STATE(277)] = 13932,
  [SMALL_STATE(278)] = 13956,
  [SMALL_STATE(279)] = 13978,
  [SMALL_STATE(280)] = 14000,
  [SMALL_STATE(281)] = 14023,
  [SMALL_STATE(282)] = 14044,
  [SMALL_STATE(283)] = 14067,
  [SMALL_STATE(284)] = 14090,
  [SMALL_STATE(285)] = 14113,
  [SMALL_STATE(286)] = 14130,
  [SMALL_STATE(287)] = 14149,
  [SMALL_STATE(288)] = 14172,
  [SMALL_STATE(289)] = 14189,
  [SMALL_STATE(290)] = 14207,
  [SMALL_STATE(291)] = 14227,
  [SMALL_STATE(292)] = 14241,
  [SMALL_STATE(293)] = 14253,
  [SMALL_STATE(294)] = 14273,
  [SMALL_STATE(295)] = 14293,
  [SMALL_STATE(296)] = 14313,
  [SMALL_STATE(297)] = 14333,
  [SMALL_STATE(298)] = 14353,
  [SMALL_STATE(299)] = 14365,
  [SMALL_STATE(300)] = 14382,
  [SMALL_STATE(301)] = 14399,
  [SMALL_STATE(302)] = 14416,
  [SMALL_STATE(303)] = 14429,
  [SMALL_STATE(304)] = 14444,
  [SMALL_STATE(305)] = 14461,
  [SMALL_STATE(306)] = 14476,
  [SMALL_STATE(307)] = 14493,
  [SMALL_STATE(308)] = 14505,
  [SMALL_STATE(309)] = 14515,
  [SMALL_STATE(310)] = 14525,
  [SMALL_STATE(311)] = 14539,
  [SMALL_STATE(312)] = 14549,
  [SMALL_STATE(313)] = 14563,
  [SMALL_STATE(314)] = 14575,
  [SMALL_STATE(315)] = 14585,
  [SMALL_STATE(316)] = 14599,
  [SMALL_STATE(317)] = 14609,
  [SMALL_STATE(318)] = 14621,
  [SMALL_STATE(319)] = 14631,
  [SMALL_STATE(320)] = 14641,
  [SMALL_STATE(321)] = 14655,
  [SMALL_STATE(322)] = 14667,
  [SMALL_STATE(323)] = 14679,
  [SMALL_STATE(324)] = 14693,
  [SMALL_STATE(325)] = 14703,
  [SMALL_STATE(326)] = 14713,
  [SMALL_STATE(327)] = 14725,
  [SMALL_STATE(328)] = 14736,
  [SMALL_STATE(329)] = 14747,
  [SMALL_STATE(330)] = 14758,
  [SMALL_STATE(331)] = 14769,
  [SMALL_STATE(332)] = 14780,
  [SMALL_STATE(333)] = 14791,
  [SMALL_STATE(334)] = 14802,
  [SMALL_STATE(335)] = 14813,
  [SMALL_STATE(336)] = 14824,
  [SMALL_STATE(337)] = 14835,
  [SMALL_STATE(338)] = 14846,
  [SMALL_STATE(339)] = 14857,
  [SMALL_STATE(340)] = 14868,
  [SMALL_STATE(341)] = 14879,
  [SMALL_STATE(342)] = 14890,
  [SMALL_STATE(343)] = 14901,
  [SMALL_STATE(344)] = 14912,
  [SMALL_STATE(345)] = 14923,
  [SMALL_STATE(346)] = 14934,
  [SMALL_STATE(347)] = 14945,
  [SMALL_STATE(348)] = 14956,
  [SMALL_STATE(349)] = 14967,
  [SMALL_STATE(350)] = 14978,
  [SMALL_STATE(351)] = 14989,
  [SMALL_STATE(352)] = 15000,
  [SMALL_STATE(353)] = 15011,
  [SMALL_STATE(354)] = 15022,
  [SMALL_STATE(355)] = 15033,
  [SMALL_STATE(356)] = 15044,
  [SMALL_STATE(357)] = 15055,
  [SMALL_STATE(358)] = 15066,
  [SMALL_STATE(359)] = 15077,
  [SMALL_STATE(360)] = 15088,
  [SMALL_STATE(361)] = 15099,
  [SMALL_STATE(362)] = 15110,
  [SMALL_STATE(363)] = 15121,
  [SMALL_STATE(364)] = 15132,
  [SMALL_STATE(365)] = 15143,
  [SMALL_STATE(366)] = 15154,
  [SMALL_STATE(367)] = 15165,
  [SMALL_STATE(368)] = 15176,
  [SMALL_STATE(369)] = 15187,
  [SMALL_STATE(370)] = 15198,
  [SMALL_STATE(371)] = 15209,
  [SMALL_STATE(372)] = 15220,
  [SMALL_STATE(373)] = 15231,
  [SMALL_STATE(374)] = 15242,
  [SMALL_STATE(375)] = 15253,
  [SMALL_STATE(376)] = 15264,
  [SMALL_STATE(377)] = 15272,
  [SMALL_STATE(378)] = 15280,
  [SMALL_STATE(379)] = 15288,
  [SMALL_STATE(380)] = 15296,
  [SMALL_STATE(381)] = 15304,
  [SMALL_STATE(382)] = 15312,
  [SMALL_STATE(383)] = 15320,
  [SMALL_STATE(384)] = 15328,
  [SMALL_STATE(385)] = 15336,
  [SMALL_STATE(386)] = 15344,
  [SMALL_STATE(387)] = 15352,
  [SMALL_STATE(388)] = 15360,
  [SMALL_STATE(389)] = 15368,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(115),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(70),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(159),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(159),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(176),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(179),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(37),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(88),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(273),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(50),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(370),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(47),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(358),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(376),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(386),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(75),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(328),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(44),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(347),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(381),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(377),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(305),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(41),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(277),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(73),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(289),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(310),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(303),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(134),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(201),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(247),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(323),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(152),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [780] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
