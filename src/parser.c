#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 431
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_LT_LT = 40,
  anon_sym_LT_LT_DASH = 41,
  sym_strip_marker = 42,
  sym_comment = 43,
  sym__whitespace = 44,
  sym_quoted_template_start = 45,
  sym_quoted_template_end = 46,
  sym__template_literal_chunk = 47,
  sym_template_interpolation_start = 48,
  sym_template_interpolation_end = 49,
  sym_heredoc_identifier = 50,
  sym_config_file = 51,
  sym_body = 52,
  sym_attribute = 53,
  sym_block = 54,
  sym_block_start = 55,
  sym_block_end = 56,
  sym_expression = 57,
  sym__expr_term = 58,
  sym_literal_value = 59,
  sym_numeric_lit = 60,
  sym_bool_lit = 61,
  sym_string_lit = 62,
  sym_collection_value = 63,
  sym__comma = 64,
  sym_tuple = 65,
  sym_tuple_start = 66,
  sym_tuple_end = 67,
  sym__tuple_elems = 68,
  sym_object = 69,
  sym_object_start = 70,
  sym_object_end = 71,
  sym__object_elems = 72,
  sym_object_elem = 73,
  sym_index = 74,
  sym_new_index = 75,
  sym_legacy_index = 76,
  sym_get_attr = 77,
  sym_splat = 78,
  sym_attr_splat = 79,
  sym_full_splat = 80,
  sym_for_expr = 81,
  sym_for_tuple_expr = 82,
  sym_for_object_expr = 83,
  sym_for_intro = 84,
  sym_for_cond = 85,
  sym_variable_expr = 86,
  sym_function_call = 87,
  sym__function_call_start = 88,
  sym__function_call_end = 89,
  sym_function_arguments = 90,
  sym_conditional = 91,
  sym_operation = 92,
  sym_unary_operation = 93,
  sym_binary_operation = 94,
  sym_template_expr = 95,
  sym_quoted_template = 96,
  sym_heredoc_template = 97,
  sym_heredoc_start = 98,
  sym_template_literal = 99,
  sym_template_interpolation = 100,
  sym_template_directive = 101,
  aux_sym_body_repeat1 = 102,
  aux_sym_block_repeat1 = 103,
  aux_sym__tuple_elems_repeat1 = 104,
  aux_sym__object_elems_repeat1 = 105,
  aux_sym_attr_splat_repeat1 = 106,
  aux_sym_quoted_template_repeat1 = 107,
  aux_sym_template_literal_repeat1 = 108,
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
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
  [sym_strip_marker] = "strip_marker",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_quoted_template_start] = "quoted_template_start",
  [sym_quoted_template_end] = "quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym_template_interpolation_start] = "template_interpolation_start",
  [sym_template_interpolation_end] = "template_interpolation_end",
  [sym_heredoc_identifier] = "heredoc_identifier",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
  [sym_numeric_lit] = "numeric_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_string_lit] = "string_lit",
  [sym_collection_value] = "collection_value",
  [sym__comma] = "_comma",
  [sym_tuple] = "tuple",
  [sym_tuple_start] = "tuple_start",
  [sym_tuple_end] = "tuple_end",
  [sym__tuple_elems] = "_tuple_elems",
  [sym_object] = "object",
  [sym_object_start] = "object_start",
  [sym_object_end] = "object_end",
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
  [sym_heredoc_template] = "heredoc_template",
  [sym_heredoc_start] = "heredoc_start",
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
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [sym_strip_marker] = sym_strip_marker,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_quoted_template_start] = sym_quoted_template_start,
  [sym_quoted_template_end] = sym_quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym_template_interpolation_start] = sym_template_interpolation_start,
  [sym_template_interpolation_end] = sym_template_interpolation_end,
  [sym_heredoc_identifier] = sym_heredoc_identifier,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_lit] = sym_numeric_lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_collection_value] = sym_collection_value,
  [sym__comma] = sym__comma,
  [sym_tuple] = sym_tuple,
  [sym_tuple_start] = sym_tuple_start,
  [sym_tuple_end] = sym_tuple_end,
  [sym__tuple_elems] = sym__tuple_elems,
  [sym_object] = sym_object,
  [sym_object_start] = sym_object_start,
  [sym_object_end] = sym_object_end,
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
  [sym_heredoc_template] = sym_heredoc_template,
  [sym_heredoc_start] = sym_heredoc_start,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
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
  [sym_quoted_template_start] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_end] = {
    .visible = true,
    .named = true,
  },
  [sym__template_literal_chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_template_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_identifier] = {
    .visible = true,
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
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
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
  [sym_tuple_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_end] = {
    .visible = true,
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
  [sym_object_start] = {
    .visible = true,
    .named = true,
  },
  [sym_object_end] = {
    .visible = true,
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
  [sym_heredoc_template] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_start] = {
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

enum {
  field_key = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_val, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 42891
    ? (c < 3804
      ? (c < 2616
        ? (c < 1791
          ? (c < 895
            ? (c < 192
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c >= 'g' && c <= 'm')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))))
            : (c <= 895 || (c < 1376
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2084
              ? (c < 1994
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2230
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3133
          ? (c < 2877
            ? (c < 2749
              ? (c < 2703
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2749 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2877 || (c < 2974
              ? (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3077
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))))))
          : (c <= 3133 || (c < 3450
            ? (c < 3294
              ? (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))
              : (c <= 3294 || (c < 3346
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))))))
            : (c <= 3455 || (c < 3716
              ? (c < 3520
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3762
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3807 || (c < 7680
        ? (c < 5792
          ? (c < 4688
            ? (c < 4197
              ? (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))
              : (c <= 4198 || (c < 4295
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))))
          : (c <= 5866 || (c < 6656
            ? (c < 6108
              ? (c < 5952
                ? (c < 5902
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))
            : (c <= 6678 || (c < 7258
              ? (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))
              : (c <= 7293 || (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))))))))
        : (c <= 7957 || (c < 11506
          ? (c < 8319
            ? (c < 8118
              ? (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))
              : (c <= 8124 || (c < 8150
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))))
            : (c <= 8319 || (c < 8490
              ? (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))
              : (c <= 8505 || (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))
                : (c <= 11310 || (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))))))
          : (c <= 11507 || (c < 12443
            ? (c < 11704
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12447 || (c < 42192
              ? (c < 12704
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43584
            ? (c < 43261
              ? (c < 43020
                ? (c < 43011
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))))
              : (c <= 43262 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))
                : (c <= 43471 || (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))))))
            : (c <= 43586 || (c < 43739
              ? (c < 43697
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 42946
    ? (c < 3904
      ? (c < 2654
        ? (c < 1810
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))))))))
          : (c <= 1839 || (c < 2447
            ? (c < 2112
              ? (c < 2042
                ? (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2365
                ? (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))))
            : (c <= 2448 || (c < 2556
              ? (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))))
              : (c <= 2556 || (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3168
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3090
                ? (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3169 || (c < 3482
            ? (c < 3313
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3294
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3314 || (c < 3406
                ? (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))))
            : (c <= 3505 || (c < 3724
              ? (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : (c <= 3807 || c == 3840))))))))))))
      : (c <= 3911 || (c < 7960
        ? (c < 5870
          ? (c < 4698
            ? (c < 4213
              ? (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4304
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))))))
            : (c <= 4701 || (c < 4882
              ? (c < 4792
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 5121
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6688
            ? (c < 6176
              ? (c < 5984
                ? (c < 5920
                  ? (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))
              : (c <= 6264 || (c < 6480
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))))
            : (c <= 6740 || (c < 7296
              ? (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6987 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))
              : (c <= 7304 || (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))))))))
        : (c <= 7965 || (c < 11520
          ? (c < 8336
            ? (c < 8126
              ? (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))
              : (c <= 8126 || (c < 8160
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))))
            : (c <= 8348 || (c < 8508
              ? (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))
              : (c <= 8511 || (c < 11312
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))))))))
          : (c <= 11557 || (c < 12449
            ? (c < 11712
              ? (c < 11648
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))
              : (c <= 11718 || (c < 12321
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c >= 12443 && c <= 12447)))))))
            : (c <= 12538 || (c < 42240
              ? (c < 12784
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 40960
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 40956)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42656
                ? (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))))))))))))))
    : (c <= 42954 || (c < 70461
      ? (c < 66304
        ? (c < 43888
          ? (c < 43588
            ? (c < 43274
              ? (c < 43072
                ? (c < 43015
                  ? (c < 43011
                    ? (c >= 42997 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43123 || (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))))
              : (c <= 43301 || (c < 43488
                ? (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43492 || (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))))))
            : (c <= 43595 || (c < 43744
              ? (c < 43701
                ? (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43754 || (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))))
          : (c <= 44002 || (c < 65136
            ? (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))))
            : (c <= 65140 || (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66176
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))))))))))
        : (c <= 66335 || (c < 68448
          ? (c < 67647
            ? (c < 66816
              ? (c < 66504
                ? (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 67584
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 66864 && c <= 66915)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))))))
            : (c <= 67669 || (c < 68112
              ? (c < 67840
                ? (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))))
              : (c <= 68115 || (c < 68288
                ? (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))
                : (c <= 68295 || (c < 68352
                  ? (c >= 68297 && c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))))
          : (c <= 68466 || (c < 70006
            ? (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69840
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69763 && c <= 69807)))
                : (c <= 69864 || (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))))))
            : (c <= 70006 || (c < 70287
              ? (c < 70144
                ? (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))
              : (c <= 70301 || (c < 70419
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))
                : (c <= 70440 || (c < 70450
                  ? (c >= 70442 && c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))))))))))
      : (c <= 70461 || (c < 113808
        ? (c < 72818
          ? (c < 71948
            ? (c < 71128
              ? (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71086)))))
              : (c <= 71131 || (c < 71424
                ? (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))
                : (c <= 71450 || (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))))))
            : (c <= 71955 || (c < 72203
              ? (c < 72096
                ? (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))
                : (c <= 72103 || (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))))
              : (c <= 72242 || (c < 72384
                ? (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))
                : (c <= 72440 || (c < 72714
                  ? (c >= 72704 && c <= 72712)
                  : (c <= 72750 || c == 72768))))))))
          : (c <= 72847 || (c < 92992
            ? (c < 73648
              ? (c < 73056
                ? (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))
                : (c <= 73061 || (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))))
              : (c <= 73648 || (c < 82944
                ? (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c >= 77824 && c <= 78894)))
                : (c <= 83526 || (c < 92880
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))))))
            : (c <= 92995 || (c < 100352
              ? (c < 94032
                ? (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))
                : (c <= 94032 || (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))))
              : (c <= 101589 || (c < 110960
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110878)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))
                : (c <= 111355 || (c < 113776
                  ? (c >= 113664 && c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))))))))))
        : (c <= 113817 || (c < 126469
          ? (c < 120488
            ? (c < 120005
              ? (c < 119973
                ? (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))
                : (c <= 119974 || (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))))
              : (c <= 120069 || (c < 120123
                ? (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))
                : (c <= 120126 || (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))))))
            : (c <= 120512 || (c < 120772
              ? (c < 120630
                ? (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))
                : (c <= 120654 || (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))))
              : (c <= 120779 || (c < 124928
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c >= 123584 && c <= 123627)))
                : (c <= 125124 || (c < 125259
                  ? (c >= 125184 && c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173789)
                  : (c <= 177972 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'p'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'n')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'f'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'd')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'm'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'k')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 's'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'q')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 't'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'r')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2693
        ? (c < 1808
          ? (c < 908
            ? (c < 216
              ? (c < 'v'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 't')))
                : (c <= 'z' || (c < 183
                  ? (c < 181
                    ? c == 170
                    : c <= 181)
                  : (c <= 183 || (c < 192
                    ? c == 186
                    : c <= 214)))))
              : (c <= 246 || (c < 768
                ? (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || (c < 750
                    ? c == 748
                    : c <= 750)))
                : (c <= 884 || (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1476
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || (c < 1473
                    ? c == 1471
                    : c <= 1474)))))
              : (c <= 1477 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)))
                : (c <= 1747 || (c < 1770
                  ? (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1866 || (c < 2519
            ? (c < 2406
              ? (c < 2112
                ? (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))
                : (c <= 2139 || (c < 2230
                  ? (c < 2208
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2228)
                  : (c <= 2247 || (c < 2275
                    ? (c >= 2259 && c <= 2273)
                    : c <= 2403)))))
              : (c <= 2415 || (c < 2482
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))))
            : (c <= 2519 || (c < 2613
              ? (c < 2561
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))
                : (c <= 2563 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3090
          ? (c < 2901
            ? (c < 2809
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))))
              : (c <= 2815 || (c < 2866
                ? (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2979
              ? (c < 2949
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))))
              : (c <= 2980 || (c < 3024
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))
          : (c <= 3112 || (c < 3328
            ? (c < 3218
              ? (c < 3160
                ? (c < 3142
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)))
                : (c <= 3162 || (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))))
              : (c <= 3240 || (c < 3285
                ? (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))
                : (c <= 3286 || (c < 3302
                  ? (c < 3296
                    ? c == 3294
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))
            : (c <= 3340 || (c < 3507
              ? (c < 3423
                ? (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)))
                : (c <= 3427 || (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'b'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 42891
    ? (c < 3664
      ? (c < 2703
        ? (c < 1869
          ? (c < 910
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1479
              ? (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1159 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)))))
              : (c <= 1479 || (c < 1749
                ? (c < 1552
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1562 || (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)))
                : (c <= 1756 || (c < 1791
                  ? (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))))
          : (c <= 1969 || (c < 2524
            ? (c < 2417
              ? (c < 2144
                ? (c < 2045
                  ? (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2045 || (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)))
                : (c <= 2154 || (c < 2259
                  ? (c < 2230
                    ? (c >= 2208 && c <= 2228)
                    : c <= 2247)
                  : (c <= 2273 || (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2616
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))))
              : (c <= 2617 || (c < 2649
                ? (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))
                : (c <= 2652 || (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3114
          ? (c < 2908
            ? (c < 2817
              ? (c < 2759
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))
                : (c <= 2761 || (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))))
              : (c <= 2819 || (c < 2869
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))
                : (c <= 2873 || (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2958
                ? (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))))
              : (c <= 2986 || (c < 3031
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))
                : (c <= 3031 || (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))))
          : (c <= 3129 || (c < 3342
            ? (c < 3242
              ? (c < 3168
                ? (c < 3146
                  ? (c < 3142
                    ? (c >= 3133 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))
                : (c <= 3171 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))))
              : (c <= 3251 || (c < 3294
                ? (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))
                : (c <= 3294 || (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))
            : (c <= 3344 || (c < 3507
              ? (c < 3430
                ? (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))
                : (c <= 3439 || (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))
              : (c <= 3515 || (c < 3544
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)))
                : (c <= 3551 || (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c >= 3648 && c <= 3662)))))))))))))
      : (c <= 3673 || (c < 7168
        ? (c < 4957
          ? (c < 4038
            ? (c < 3840
              ? (c < 3751
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)))))
              : (c <= 3840 || (c < 3902
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)
                  : (c <= 3893 || (c < 3897
                    ? c == 3895
                    : c <= 3897)))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))))
            : (c <= 4038 || (c < 4704
              ? (c < 4304
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || (c < 4301
                    ? c == 4295
                    : c <= 4301)))
                : (c <= 4346 || (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))))
              : (c <= 4744 || (c < 4802
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))))
          : (c <= 4959 || (c < 6176
            ? (c < 5920
              ? (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5902
                    ? (c >= 5888 && c <= 5900)
                    : c <= 5908)))))
              : (c <= 5940 || (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6848 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6987)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))))
        : (c <= 7223 || (c < 8517
          ? (c < 8144
            ? (c < 8008
              ? (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7675
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7673)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))))
              : (c <= 8013 || (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8421
              ? (c < 8276
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)))
                : (c <= 8276 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)))))
              : (c <= 8432 || (c < 8484
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || (c < 8472
                    ? c == 8469
                    : c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))))
          : (c <= 8521 || (c < 12321
            ? (c < 11647
              ? (c < 11499
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11310 || (c < 11360
                    ? (c >= 11312 && c <= 11358)
                    : c <= 11492)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))))
              : (c <= 11670 || (c < 11720
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))
                : (c <= 11726 || (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c >= 12293 && c <= 12295)))))))
            : (c <= 12335 || (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12441 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42560
                ? (c < 42192
                  ? (c < 40960
                    ? (c >= 19968 && c <= 40956)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))
                : (c <= 42607 || (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))))))))))
    : (c <= 42943 || (c < 71128
      ? (c < 67392
        ? (c < 64326
          ? (c < 43777
            ? (c < 43392
              ? (c < 43216
                ? (c < 43052
                  ? (c < 42997
                    ? (c >= 42946 && c <= 42954)
                    : c <= 43047)
                  : (c <= 43052 || (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)))))
              : (c <= 43456 || (c < 43616
                ? (c < 43520
                  ? (c < 43488
                    ? (c >= 43471 && c <= 43481)
                    : c <= 43518)
                  : (c <= 43574 || (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)))
                : (c <= 43638 || (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))))))
            : (c <= 43782 || (c < 55243
              ? (c < 43868
                ? (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c < 44012
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44013)
                  : (c <= 44025 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 65596
            ? (c < 65313
              ? (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))))
              : (c <= 65338 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)))
                : (c <= 66204 || (c < 66304
                  ? (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)
                  : (c <= 66335 || (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69759
          ? (c < 68192
            ? (c < 67840
              ? (c < 67644
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))))
              : (c <= 67861 || (c < 68108
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))
                : (c <= 68115 || (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || c == 68159))))))
            : (c <= 68220 || (c < 68912
              ? (c < 68448
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))))
              : (c <= 68921 || (c < 69424
                ? (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69456 || (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c >= 69734 && c <= 69743)))))))))
          : (c <= 69818 || (c < 70405
            ? (c < 70144
              ? (c < 69968
                ? (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))
                : (c <= 70003 || (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))))
              : (c <= 70161 || (c < 70287
                ? (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))
                : (c <= 70301 || (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c >= 70400 && c <= 70403)))))))
            : (c <= 70412 || (c < 70493
              ? (c < 70459
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))
                : (c <= 70468 || (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || c == 70487))))
              : (c <= 70499 || (c < 70784
                ? (c < 70656
                  ? (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)
                  : (c <= 70730 || (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)))
                : (c <= 70853 || (c < 71040
                  ? (c < 70864
                    ? c == 70855
                    : c <= 70873)
                  : (c <= 71093 || (c >= 71096 && c <= 71104)))))))))))))
      : (c <= 71133 || (c < 119966
        ? (c < 73107
          ? (c < 72192
            ? (c < 71945
              ? (c < 71424
                ? (c < 71248
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)
                  : (c <= 71257 || (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)))
                : (c <= 71450 || (c < 71680
                  ? (c < 71472
                    ? (c >= 71453 && c <= 71467)
                    : c <= 71481)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))))
              : (c <= 71945 || (c < 72016
                ? (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))
                : (c <= 72025 || (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c >= 72163 && c <= 72164)))))))
            : (c <= 72254 || (c < 72960
              ? (c < 72714
                ? (c < 72349
                  ? (c < 72272
                    ? c == 72263
                    : c <= 72345)
                  : (c <= 72349 || (c < 72704
                    ? (c >= 72384 && c <= 72440)
                    : c <= 72712)))
                : (c <= 72758 || (c < 72818
                  ? (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)
                  : (c <= 72847 || (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)))))
              : (c <= 72966 || (c < 73040
                ? (c < 73018
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)
                  : (c <= 73018 || (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)))
                : (c <= 73049 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73102 || (c >= 73104 && c <= 73105)))))))))
          : (c <= 73112 || (c < 94176
            ? (c < 92880
              ? (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)))))
              : (c <= 92909 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c >= 94095 && c <= 94111)))))))
            : (c <= 94177 || (c < 113792
              ? (c < 110592
                ? (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))
                : (c <= 110878 || (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))))
              : (c <= 113800 || (c < 119173
                ? (c < 119141
                  ? (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119145 || (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)))
                : (c <= 119179 || (c < 119808
                  ? (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125136
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 122880
              ? (c < 121344
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)))
                : (c <= 121398 || (c < 121476
                  ? (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)
                  : (c <= 121476 || (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)))))
              : (c <= 122886 || (c < 123184
                ? (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)))
                : (c <= 123197 || (c < 123584
                  ? (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)
                  : (c <= 123641 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125142 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125264
                    ? (c >= 125184 && c <= 125259)
                    : c <= 125273)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126629
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173789 || (c < 177984
                    ? (c >= 173824 && c <= 177972)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(51);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(68);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(51);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(35);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(51);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(51);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(51);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(51);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(51);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(51);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(51);
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(51);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(51);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(51);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(51);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(51);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(51);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(51);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_numeric_lit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(51);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(51);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(51);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(51);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 3, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
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
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 33},
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
  [143] = {.lex_state = 1, .external_lex_state = 2},
  [144] = {.lex_state = 1, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 1, .external_lex_state = 2},
  [147] = {.lex_state = 1, .external_lex_state = 2},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 33},
  [160] = {.lex_state = 33},
  [161] = {.lex_state = 33},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 33},
  [164] = {.lex_state = 33},
  [165] = {.lex_state = 33},
  [166] = {.lex_state = 33},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 33},
  [169] = {.lex_state = 33},
  [170] = {.lex_state = 33},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 33},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 33},
  [175] = {.lex_state = 33},
  [176] = {.lex_state = 33},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 33},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 33},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 33, .external_lex_state = 4},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 33, .external_lex_state = 4},
  [195] = {.lex_state = 33, .external_lex_state = 4},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 33, .external_lex_state = 4},
  [198] = {.lex_state = 33, .external_lex_state = 4},
  [199] = {.lex_state = 33, .external_lex_state = 4},
  [200] = {.lex_state = 33, .external_lex_state = 4},
  [201] = {.lex_state = 33, .external_lex_state = 4},
  [202] = {.lex_state = 33, .external_lex_state = 4},
  [203] = {.lex_state = 33, .external_lex_state = 4},
  [204] = {.lex_state = 33, .external_lex_state = 4},
  [205] = {.lex_state = 33, .external_lex_state = 4},
  [206] = {.lex_state = 33, .external_lex_state = 4},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 33, .external_lex_state = 4},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 33, .external_lex_state = 4},
  [242] = {.lex_state = 33, .external_lex_state = 4},
  [243] = {.lex_state = 33, .external_lex_state = 4},
  [244] = {.lex_state = 33, .external_lex_state = 4},
  [245] = {.lex_state = 33, .external_lex_state = 4},
  [246] = {.lex_state = 33, .external_lex_state = 4},
  [247] = {.lex_state = 33, .external_lex_state = 4},
  [248] = {.lex_state = 33, .external_lex_state = 4},
  [249] = {.lex_state = 33, .external_lex_state = 4},
  [250] = {.lex_state = 33, .external_lex_state = 4},
  [251] = {.lex_state = 33, .external_lex_state = 4},
  [252] = {.lex_state = 33, .external_lex_state = 4},
  [253] = {.lex_state = 33, .external_lex_state = 4},
  [254] = {.lex_state = 33, .external_lex_state = 4},
  [255] = {.lex_state = 33, .external_lex_state = 4},
  [256] = {.lex_state = 33, .external_lex_state = 4},
  [257] = {.lex_state = 33, .external_lex_state = 4},
  [258] = {.lex_state = 33, .external_lex_state = 4},
  [259] = {.lex_state = 33, .external_lex_state = 4},
  [260] = {.lex_state = 33, .external_lex_state = 4},
  [261] = {.lex_state = 33, .external_lex_state = 4},
  [262] = {.lex_state = 33, .external_lex_state = 4},
  [263] = {.lex_state = 33, .external_lex_state = 4},
  [264] = {.lex_state = 33, .external_lex_state = 4},
  [265] = {.lex_state = 33, .external_lex_state = 4},
  [266] = {.lex_state = 33, .external_lex_state = 4},
  [267] = {.lex_state = 33, .external_lex_state = 4},
  [268] = {.lex_state = 33, .external_lex_state = 4},
  [269] = {.lex_state = 33, .external_lex_state = 4},
  [270] = {.lex_state = 33, .external_lex_state = 4},
  [271] = {.lex_state = 33, .external_lex_state = 4},
  [272] = {.lex_state = 33, .external_lex_state = 4},
  [273] = {.lex_state = 1, .external_lex_state = 2},
  [274] = {.lex_state = 1, .external_lex_state = 2},
  [275] = {.lex_state = 1, .external_lex_state = 2},
  [276] = {.lex_state = 3, .external_lex_state = 2},
  [277] = {.lex_state = 1, .external_lex_state = 2},
  [278] = {.lex_state = 3, .external_lex_state = 2},
  [279] = {.lex_state = 1, .external_lex_state = 2},
  [280] = {.lex_state = 1, .external_lex_state = 2},
  [281] = {.lex_state = 1, .external_lex_state = 2},
  [282] = {.lex_state = 1, .external_lex_state = 2},
  [283] = {.lex_state = 1, .external_lex_state = 2},
  [284] = {.lex_state = 33},
  [285] = {.lex_state = 33},
  [286] = {.lex_state = 0, .external_lex_state = 5},
  [287] = {.lex_state = 0, .external_lex_state = 5},
  [288] = {.lex_state = 0, .external_lex_state = 5},
  [289] = {.lex_state = 0, .external_lex_state = 6},
  [290] = {.lex_state = 0, .external_lex_state = 6},
  [291] = {.lex_state = 0, .external_lex_state = 6},
  [292] = {.lex_state = 0, .external_lex_state = 5},
  [293] = {.lex_state = 0, .external_lex_state = 5},
  [294] = {.lex_state = 0, .external_lex_state = 6},
  [295] = {.lex_state = 0, .external_lex_state = 5},
  [296] = {.lex_state = 0, .external_lex_state = 5},
  [297] = {.lex_state = 0, .external_lex_state = 5},
  [298] = {.lex_state = 0, .external_lex_state = 5},
  [299] = {.lex_state = 0, .external_lex_state = 6},
  [300] = {.lex_state = 0, .external_lex_state = 6},
  [301] = {.lex_state = 0, .external_lex_state = 6},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 0, .external_lex_state = 6},
  [304] = {.lex_state = 33},
  [305] = {.lex_state = 33},
  [306] = {.lex_state = 4, .external_lex_state = 2},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 33},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 33},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 33, .external_lex_state = 2},
  [316] = {.lex_state = 33, .external_lex_state = 2},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0, .external_lex_state = 5},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 33},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 33},
  [337] = {.lex_state = 0, .external_lex_state = 5},
  [338] = {.lex_state = 0, .external_lex_state = 4},
  [339] = {.lex_state = 0, .external_lex_state = 6},
  [340] = {.lex_state = 0, .external_lex_state = 7},
  [341] = {.lex_state = 0, .external_lex_state = 5},
  [342] = {.lex_state = 0, .external_lex_state = 6},
  [343] = {.lex_state = 3},
  [344] = {.lex_state = 0, .external_lex_state = 6},
  [345] = {.lex_state = 0, .external_lex_state = 5},
  [346] = {.lex_state = 0, .external_lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 4},
  [348] = {.lex_state = 0, .external_lex_state = 8},
  [349] = {.lex_state = 0, .external_lex_state = 5},
  [350] = {.lex_state = 0, .external_lex_state = 4},
  [351] = {.lex_state = 0, .external_lex_state = 5},
  [352] = {.lex_state = 33},
  [353] = {.lex_state = 33},
  [354] = {.lex_state = 0, .external_lex_state = 8},
  [355] = {.lex_state = 33, .external_lex_state = 2},
  [356] = {.lex_state = 0, .external_lex_state = 4},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 33},
  [362] = {.lex_state = 0, .external_lex_state = 4},
  [363] = {.lex_state = 0, .external_lex_state = 5},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 1},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 33},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 33},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 33},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 33},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 33},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0, .external_lex_state = 9},
  [415] = {.lex_state = 0, .external_lex_state = 9},
  [416] = {.lex_state = 0, .external_lex_state = 9},
  [417] = {.lex_state = 0, .external_lex_state = 4},
  [418] = {.lex_state = 0, .external_lex_state = 10},
  [419] = {.lex_state = 0, .external_lex_state = 9},
  [420] = {.lex_state = 33},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0, .external_lex_state = 4},
  [423] = {.lex_state = 0, .external_lex_state = 4},
  [424] = {.lex_state = 0, .external_lex_state = 9},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 33},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token_quoted_template_start = 0,
  ts_external_token_quoted_template_end = 1,
  ts_external_token__template_literal_chunk = 2,
  ts_external_token_template_interpolation_start = 3,
  ts_external_token_template_interpolation_end = 4,
  ts_external_token_heredoc_identifier = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_quoted_template_start] = sym_quoted_template_start,
  [ts_external_token_quoted_template_end] = sym_quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token_template_interpolation_start] = sym_template_interpolation_start,
  [ts_external_token_template_interpolation_end] = sym_template_interpolation_end,
  [ts_external_token_heredoc_identifier] = sym_heredoc_identifier,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_template_interpolation_end] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [2] = {
    [ts_external_token_quoted_template_start] = true,
  },
  [3] = {
    [ts_external_token_quoted_template_start] = true,
    [ts_external_token_template_interpolation_end] = true,
  },
  [4] = {
    [ts_external_token_template_interpolation_end] = true,
  },
  [5] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
  },
  [6] = {
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token_template_interpolation_start] = true,
    [ts_external_token_heredoc_identifier] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
  },
  [8] = {
    [ts_external_token_quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [9] = {
    [ts_external_token_heredoc_identifier] = true,
  },
  [10] = {
    [ts_external_token_quoted_template_end] = true,
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
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_DASH] = ACTIONS(1),
    [sym_strip_marker] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_quoted_template_start] = ACTIONS(1),
    [sym_quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym_template_interpolation_start] = ACTIONS(1),
    [sym_template_interpolation_end] = ACTIONS(1),
    [sym_heredoc_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(429),
    [sym_body] = STATE(428),
    [sym_attribute] = STATE(308),
    [sym_block] = STATE(308),
    [sym_object] = STATE(428),
    [sym_object_start] = STATE(13),
    [aux_sym_body_repeat1] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(11), 1,
      sym_tuple_start,
    STATE(47), 1,
      sym_for_intro,
    STATE(132), 1,
      sym_object_end,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(399), 1,
      sym__object_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [107] = 30,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(11), 1,
      sym_tuple_start,
    STATE(39), 1,
      sym_for_intro,
    STATE(166), 1,
      sym_object_end,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(412), 1,
      sym__object_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [214] = 30,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(11), 1,
      sym_tuple_start,
    STATE(38), 1,
      sym_for_intro,
    STATE(229), 1,
      sym_object_end,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(379), 1,
      sym__object_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [321] = 30,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(11), 1,
      sym_tuple_start,
    STATE(49), 1,
      sym_for_intro,
    STATE(249), 1,
      sym_object_end,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(395), 1,
      sym__object_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [428] = 29,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(37), 1,
      sym_for_intro,
    STATE(116), 1,
      sym_tuple_end,
    STATE(284), 1,
      sym_conditional,
    STATE(318), 1,
      sym_expression,
    STATE(411), 1,
      sym__tuple_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [532] = 29,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(54), 1,
      sym_for_intro,
    STATE(221), 1,
      sym_tuple_end,
    STATE(284), 1,
      sym_conditional,
    STATE(318), 1,
      sym_expression,
    STATE(398), 1,
      sym__tuple_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [636] = 28,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(20), 1,
      sym__comma,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(12), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [738] = 28,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(18), 1,
      sym__comma,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(8), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [840] = 29,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(42), 1,
      sym_for_intro,
    STATE(264), 1,
      sym_tuple_end,
    STATE(284), 1,
      sym_conditional,
    STATE(318), 1,
      sym_expression,
    STATE(401), 1,
      sym__tuple_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [944] = 29,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(41), 1,
      sym_for_intro,
    STATE(161), 1,
      sym_tuple_end,
    STATE(284), 1,
      sym_conditional,
    STATE(318), 1,
      sym_expression,
    STATE(367), 1,
      sym__tuple_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1048] = 28,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(75), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(81), 1,
      sym_null_lit,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LT_LT,
    ACTIONS(96), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(99), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(32), 1,
      sym__comma,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(78), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(12), 2,
      sym_object_elem,
      aux_sym__object_elems_repeat1,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1150] = 28,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(9), 1,
      sym_object_elem,
    STATE(11), 1,
      sym_tuple_start,
    STATE(166), 1,
      sym_object_end,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(412), 1,
      sym__object_elems,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1251] = 27,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(213), 1,
      sym__function_call_end,
    STATE(284), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(384), 1,
      sym_function_arguments,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1349] = 27,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(172), 1,
      sym__function_call_end,
    STATE(284), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(402), 1,
      sym_function_arguments,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1447] = 27,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(119), 1,
      sym__function_call_end,
    STATE(284), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(408), 1,
      sym_function_arguments,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1545] = 27,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(272), 1,
      sym__function_call_end,
    STATE(284), 1,
      sym_conditional,
    STATE(313), 1,
      sym_expression,
    STATE(407), 1,
      sym_function_arguments,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1643] = 26,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(277), 1,
      sym_object_elem,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1738] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(124), 1,
      sym_strip_marker,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    ACTIONS(128), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(346), 1,
      sym_conditional,
    STATE(347), 1,
      sym_expression,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1833] = 26,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(277), 1,
      sym_object_elem,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1928] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    ACTIONS(132), 1,
      sym_strip_marker,
    ACTIONS(134), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(346), 1,
      sym_conditional,
    STATE(350), 1,
      sym_expression,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2023] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    ACTIONS(136), 1,
      sym_strip_marker,
    ACTIONS(138), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(346), 1,
      sym_conditional,
    STATE(362), 1,
      sym_expression,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2118] = 26,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    ACTIONS(140), 1,
      sym_strip_marker,
    ACTIONS(142), 1,
      sym_template_interpolation_end,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(346), 1,
      sym_conditional,
    STATE(356), 1,
      sym_expression,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2213] = 18,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(152), 1,
      anon_sym_DOT_STAR,
    ACTIONS(154), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_AMP_AMP,
    ACTIONS(170), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(166), 2,
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
    ACTIONS(146), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(144), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LT_LT_DASH,
  [2291] = 25,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(322), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2383] = 12,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(166), 2,
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
    ACTIONS(176), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(174), 12,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2449] = 6,
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
    ACTIONS(180), 12,
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
      anon_sym_LT_LT,
    ACTIONS(178), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2503] = 8,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(158), 2,
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
    ACTIONS(176), 11,
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
      anon_sym_LT_LT,
    ACTIONS(174), 18,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2561] = 13,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(166), 2,
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
    ACTIONS(176), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(174), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT_DASH,
  [2629] = 25,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(322), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2721] = 6,
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
    ACTIONS(176), 12,
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
      anon_sym_LT_LT,
    ACTIONS(174), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2775] = 25,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(277), 1,
      sym_object_elem,
    STATE(284), 1,
      sym_conditional,
    STATE(343), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2867] = 9,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
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
    ACTIONS(176), 11,
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
      anon_sym_LT_LT,
    ACTIONS(174), 16,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2927] = 11,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(156), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(158), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 2,
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
    ACTIONS(176), 9,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_LT_LT,
    ACTIONS(174), 14,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [2991] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(307), 1,
      sym_expression,
    STATE(317), 1,
      sym_conditional,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3080] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(404), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3169] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym_conditional,
    STATE(321), 1,
      sym_expression,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3258] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(369), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3347] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(368), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3436] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(312), 1,
      sym_expression,
    STATE(317), 1,
      sym_conditional,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3525] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym_conditional,
    STATE(325), 1,
      sym_expression,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3614] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym_conditional,
    STATE(319), 1,
      sym_expression,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3703] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(310), 1,
      sym_expression,
    STATE(317), 1,
      sym_conditional,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [3792] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(377), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3881] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(381), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3970] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(338), 1,
      sym_expression,
    STATE(346), 1,
      sym_conditional,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(195), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4059] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(386), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4148] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(374), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4237] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(403), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4326] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(382), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4415] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(274), 1,
      sym_expression,
    STATE(275), 1,
      sym_conditional,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [4504] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(273), 1,
      sym_expression,
    STATE(275), 1,
      sym_conditional,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [4593] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(413), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4682] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym_conditional,
    STATE(323), 1,
      sym_expression,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [4771] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(317), 1,
      sym_conditional,
    STATE(320), 1,
      sym_expression,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [4860] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(392), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4949] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(396), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5038] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(364), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5127] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(365), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5216] = 24,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(314), 1,
      sym_expression,
    STATE(317), 1,
      sym_conditional,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [5305] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5394] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(332), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5483] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(376), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5572] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(405), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5661] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(409), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5750] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(322), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5839] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(410), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5928] = 24,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(284), 1,
      sym_conditional,
    STATE(285), 1,
      sym_expression,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(109), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6017] = 7,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(216), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [6071] = 7,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(73), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(228), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(226), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [6125] = 7,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(72), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(232), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(230), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [6179] = 7,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(236), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(234), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [6233] = 7,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(130), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(240), 10,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_LT,
    ACTIONS(238), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [6287] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(201), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6370] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [6453] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [6536] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(194), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6619] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [6702] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(198), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6785] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(102), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6868] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(103), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6951] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(199), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7034] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [7117] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [7200] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [7283] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(200), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7366] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [7449] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [7532] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(154), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7615] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [7698] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(153), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7781] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(108), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7864] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(104), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7947] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(105), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8030] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(197), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8113] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [8196] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(116), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(120), 1,
      sym_null_lit,
    ACTIONS(126), 1,
      sym_quoted_template_start,
    STATE(5), 1,
      sym_object_start,
    STATE(10), 1,
      sym_tuple_start,
    STATE(414), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(242), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(248), 2,
      sym_tuple,
      sym_object,
    STATE(251), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(253), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(247), 3,
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
  [8279] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(106), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8362] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
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
    ACTIONS(198), 1,
      sym_quoted_template_start,
    STATE(4), 1,
      sym_object_start,
    STATE(7), 1,
      sym_tuple_start,
    STATE(424), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(223), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(224), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(228), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(230), 2,
      sym_tuple,
      sym_object,
    STATE(232), 3,
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
  [8445] = 22,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      aux_sym_numeric_lit_token1,
    ACTIONS(206), 1,
      aux_sym_numeric_lit_token2,
    ACTIONS(210), 1,
      sym_null_lit,
    ACTIONS(214), 1,
      sym_quoted_template_start,
    STATE(2), 1,
      sym_object_start,
    STATE(6), 1,
      sym_tuple_start,
    STATE(419), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(208), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(212), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(117), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(126), 2,
      sym_tuple,
      sym_object,
    STATE(140), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(141), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(133), 3,
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
  [8528] = 22,
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
      anon_sym_LT_LT,
    ACTIONS(35), 1,
      anon_sym_LT_LT_DASH,
    ACTIONS(37), 1,
      sym_quoted_template_start,
    STATE(3), 1,
      sym_object_start,
    STATE(11), 1,
      sym_tuple_start,
    STATE(416), 1,
      sym_heredoc_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(158), 2,
      sym_quoted_template,
      sym_heredoc_template,
    STATE(163), 2,
      sym_tuple,
      sym_object,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(180), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(170), 3,
      sym_numeric_lit,
      sym_bool_lit,
      sym_string_lit,
    STATE(107), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8611] = 8,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 20,
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
  [8665] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 22,
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
  [8715] = 9,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 18,
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
  [8771] = 11,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(176), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 16,
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
  [8831] = 12,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(252), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(176), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 14,
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
  [8893] = 13,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(252), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(176), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 13,
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
  [8957] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(180), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [9007] = 18,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      anon_sym_SLASH,
    ACTIONS(254), 1,
      anon_sym_AMP_AMP,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_DOT_STAR,
    ACTIONS(262), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(264), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(246), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(252), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(159), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(178), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 10,
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
  [9081] = 7,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(240), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 22,
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
  [9131] = 7,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(236), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(234), 22,
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
  [9181] = 7,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(111), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(232), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 22,
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
  [9231] = 5,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(268), 12,
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
      anon_sym_LT_LT,
    ACTIONS(266), 19,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9277] = 7,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(110), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(228), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 22,
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
  [9327] = 7,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(164), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(218), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 22,
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
  [9377] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 12,
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
      anon_sym_LT_LT,
    ACTIONS(278), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9418] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 12,
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
      anon_sym_LT_LT,
    ACTIONS(282), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9459] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 12,
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
      anon_sym_LT_LT,
    ACTIONS(286), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9500] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(292), 12,
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
      anon_sym_LT_LT,
    ACTIONS(290), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9541] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 12,
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
      anon_sym_LT_LT,
    ACTIONS(294), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9582] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 12,
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
      anon_sym_LT_LT,
    ACTIONS(298), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9623] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 12,
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
      anon_sym_LT_LT,
    ACTIONS(302), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9664] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 12,
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
      anon_sym_LT_LT,
    ACTIONS(306), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9705] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 12,
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
      anon_sym_LT_LT,
    ACTIONS(310), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(316), 12,
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
      anon_sym_LT_LT,
    ACTIONS(314), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9787] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 12,
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
      anon_sym_LT_LT,
    ACTIONS(318), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9828] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 12,
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
      anon_sym_LT_LT,
    ACTIONS(322), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9869] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 12,
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
      anon_sym_LT_LT,
    ACTIONS(326), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9910] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 12,
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
      anon_sym_LT_LT,
    ACTIONS(330), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 12,
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
      anon_sym_LT_LT,
    ACTIONS(334), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [9992] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 12,
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
      anon_sym_LT_LT,
    ACTIONS(338), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10033] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 12,
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
      anon_sym_LT_LT,
    ACTIONS(342), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 12,
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
      anon_sym_LT_LT,
    ACTIONS(346), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10115] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 12,
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
      anon_sym_LT_LT,
    ACTIONS(350), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10156] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 12,
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
      anon_sym_LT_LT,
    ACTIONS(354), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10197] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 12,
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
      anon_sym_LT_LT,
    ACTIONS(358), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10238] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 12,
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
      anon_sym_LT_LT,
    ACTIONS(362), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10279] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 12,
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
      anon_sym_LT_LT,
    ACTIONS(366), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10320] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 12,
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
      anon_sym_LT_LT,
    ACTIONS(370), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10361] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 12,
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
      anon_sym_LT_LT,
    ACTIONS(374), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10402] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 12,
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
      anon_sym_LT_LT,
    ACTIONS(378), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10443] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 12,
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
      anon_sym_LT_LT,
    ACTIONS(382), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10484] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 12,
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
      anon_sym_LT_LT,
    ACTIONS(386), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10525] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 12,
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
      anon_sym_LT_LT,
    ACTIONS(390), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10566] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 12,
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
      anon_sym_LT_LT,
    ACTIONS(394), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10607] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 12,
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
      anon_sym_LT_LT,
    ACTIONS(398), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10648] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 12,
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
      anon_sym_LT_LT,
    ACTIONS(402), 20,
      sym_quoted_template_start,
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
      anon_sym_LT_LT_DASH,
  [10689] = 5,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(268), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 22,
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
  [10732] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(180), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
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
  [10776] = 13,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(418), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 8,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [10834] = 12,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(418), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 9,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10890] = 11,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 11,
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
  [10944] = 9,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 13,
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
  [10994] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 17,
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
  [11038] = 17,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(420), 1,
      anon_sym_AMP_AMP,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_DOT_STAR,
    ACTIONS(428), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(430), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(418), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(144), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [11104] = 8,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(212), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(220), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 15,
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
  [11152] = 3,
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
  [11189] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 22,
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
  [11226] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 22,
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
  [11263] = 3,
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
  [11300] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 22,
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
  [11337] = 3,
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
  [11374] = 3,
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
  [11411] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(334), 22,
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
  [11448] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 22,
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
  [11485] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(342), 22,
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
  [11522] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 22,
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
  [11559] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 22,
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
  [11596] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 22,
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
  [11633] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 22,
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
  [11670] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 22,
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
  [11707] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(292), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(290), 22,
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
  [11744] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 22,
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
  [11781] = 3,
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
  [11818] = 3,
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
  [11855] = 3,
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
  [11892] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(282), 22,
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
  [11929] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 22,
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
  [11966] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 22,
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
  [12003] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 22,
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
  [12040] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 22,
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
  [12077] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 22,
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
  [12114] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 22,
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
  [12151] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 22,
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
  [12188] = 3,
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
  [12225] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 22,
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
  [12262] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 22,
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
  [12299] = 3,
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
  [12336] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(196), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(234), 17,
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
  [12380] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(193), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(226), 17,
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
  [12424] = 9,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 11,
      sym_template_interpolation_end,
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
  [12472] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(189), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 17,
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
  [12516] = 7,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(240), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(196), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(238), 17,
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
  [12560] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(180), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(178), 15,
      sym_template_interpolation_end,
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
  [12602] = 17,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_DOT_STAR,
    ACTIONS(444), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(452), 1,
      anon_sym_AMP_AMP,
    ACTIONS(454), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(450), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(144), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [12666] = 7,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(214), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(218), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(196), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(216), 17,
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
  [12710] = 13,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(452), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(450), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 6,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12766] = 12,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(450), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 7,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12820] = 11,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(176), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(174), 9,
      sym_template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [12872] = 8,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 13,
      sym_template_interpolation_end,
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
  [12918] = 6,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(261), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(256), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(176), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 15,
      sym_template_interpolation_end,
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
  [12960] = 7,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(205), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 15,
      sym_template_interpolation_end,
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
  [13002] = 7,
    ACTIONS(462), 1,
      anon_sym_LBRACK,
    ACTIONS(465), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(218), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(216), 15,
      sym_template_interpolation_end,
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
  [13044] = 7,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(240), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(238), 15,
      sym_template_interpolation_end,
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
  [13086] = 7,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(203), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(234), 15,
      sym_template_interpolation_end,
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
  [13128] = 7,
    ACTIONS(438), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(257), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(204), 3,
      sym_index,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(226), 15,
      sym_template_interpolation_end,
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
  [13170] = 5,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(268), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 17,
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
  [13207] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 17,
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
  [13238] = 3,
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
  [13269] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 17,
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
  [13300] = 3,
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
  [13331] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 17,
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
  [13362] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(292), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(290), 17,
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
  [13393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(334), 17,
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
  [13424] = 3,
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
  [13455] = 3,
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
  [13486] = 3,
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
  [13517] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 17,
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
  [13548] = 3,
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
  [13579] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 17,
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
  [13610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 17,
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
  [13641] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 17,
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
  [13672] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 17,
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
  [13703] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 17,
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
  [13734] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 17,
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
  [13765] = 3,
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
  [13796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 17,
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
  [13827] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(282), 17,
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
  [13858] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(342), 17,
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
  [13889] = 3,
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
  [13920] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 17,
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
  [13951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 17,
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
  [13982] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 17,
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
  [14013] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 17,
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
  [14044] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 17,
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
  [14075] = 3,
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
  [14106] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 17,
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
  [14137] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 17,
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
  [14168] = 5,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__function_call_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(268), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(266), 15,
      sym_template_interpolation_end,
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
  [14203] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 17,
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
  [14234] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
      sym_template_interpolation_end,
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
  [14263] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
      sym_template_interpolation_end,
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
  [14292] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(404), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 15,
      sym_template_interpolation_end,
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
  [14321] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
      sym_template_interpolation_end,
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
  [14350] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
      sym_template_interpolation_end,
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
  [14379] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(388), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 15,
      sym_template_interpolation_end,
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
  [14408] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(346), 15,
      sym_template_interpolation_end,
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
  [14437] = 3,
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
      sym_template_interpolation_end,
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
  [14466] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(344), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(342), 15,
      sym_template_interpolation_end,
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
  [14495] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 15,
      sym_template_interpolation_end,
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
  [14524] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(284), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(282), 15,
      sym_template_interpolation_end,
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
  [14553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
      sym_template_interpolation_end,
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
  [14582] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
      sym_template_interpolation_end,
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
  [14611] = 3,
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
      sym_template_interpolation_end,
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
  [14640] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 15,
      sym_template_interpolation_end,
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
  [14669] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 15,
      sym_template_interpolation_end,
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
  [14698] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(334), 15,
      sym_template_interpolation_end,
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
  [14727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(360), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(358), 15,
      sym_template_interpolation_end,
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
  [14756] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 15,
      sym_template_interpolation_end,
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
  [14785] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(392), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 15,
      sym_template_interpolation_end,
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
  [14814] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 15,
      sym_template_interpolation_end,
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
  [14843] = 3,
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
      sym_template_interpolation_end,
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
  [14872] = 3,
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
      sym_template_interpolation_end,
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
  [14901] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 15,
      sym_template_interpolation_end,
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
  [14930] = 3,
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
      sym_template_interpolation_end,
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
  [14959] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 15,
      sym_template_interpolation_end,
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
  [14988] = 3,
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
      sym_template_interpolation_end,
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
  [15017] = 3,
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
      sym_template_interpolation_end,
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
  [15046] = 3,
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
      sym_template_interpolation_end,
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
  [15075] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(364), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 15,
      sym_template_interpolation_end,
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
  [15104] = 3,
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
      sym_template_interpolation_end,
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
  [15133] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(292), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(290), 15,
      sym_template_interpolation_end,
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
  [15162] = 4,
    ACTIONS(476), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(474), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(472), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15190] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(480), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(478), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15216] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(146), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(144), 11,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15242] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(484), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(482), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15267] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(486), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(64), 10,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15292] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 7,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
      anon_sym_LT_LT,
    ACTIONS(488), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15317] = 4,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(494), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(492), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15343] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(490), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(488), 9,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15367] = 4,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(494), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(492), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15393] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(502), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(500), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15416] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(506), 6,
      sym_identifier,
      aux_sym_numeric_lit_token1,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_LT_LT,
    ACTIONS(504), 8,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_numeric_lit_token2,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LT_LT_DASH,
  [15439] = 3,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(144), 10,
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
  [15459] = 3,
    ACTIONS(480), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 10,
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
  [15479] = 7,
    ACTIONS(508), 1,
      sym_quoted_template_end,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    STATE(337), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(292), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15504] = 6,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(514), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(295), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15527] = 7,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(516), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    STATE(363), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(287), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15552] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(522), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15575] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(524), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15598] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(526), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(290), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15621] = 6,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(528), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(295), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15644] = 6,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(530), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(295), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15667] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(532), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15690] = 6,
    ACTIONS(534), 1,
      sym_quoted_template_end,
    ACTIONS(536), 1,
      sym__template_literal_chunk,
    ACTIONS(539), 1,
      sym_template_interpolation_start,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(295), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15713] = 6,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(542), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(295), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15736] = 7,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(544), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    STATE(345), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(293), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15761] = 7,
    ACTIONS(510), 1,
      sym__template_literal_chunk,
    ACTIONS(512), 1,
      sym_template_interpolation_start,
    ACTIONS(546), 1,
      sym_quoted_template_end,
    STATE(327), 1,
      aux_sym_template_literal_repeat1,
    STATE(349), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(296), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15786] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(548), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(294), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15809] = 6,
    ACTIONS(534), 1,
      sym_heredoc_identifier,
    ACTIONS(550), 1,
      sym__template_literal_chunk,
    ACTIONS(553), 1,
      sym_template_interpolation_start,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15832] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(556), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(289), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15855] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(558), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(300), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15878] = 6,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(520), 1,
      sym_template_interpolation_start,
    ACTIONS(560), 1,
      sym_heredoc_identifier,
    STATE(328), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(302), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [15901] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_block_end,
    STATE(389), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(308), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [15923] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      sym_block_end,
    STATE(385), 1,
      sym_body,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(308), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [15945] = 7,
    ACTIONS(564), 1,
      anon_sym_EQ,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_quoted_template_start,
    STATE(305), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(315), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [15969] = 7,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(574), 1,
      sym_ellipsis,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    STATE(138), 1,
      sym_object_end,
    STATE(391), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [15992] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(311), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16009] = 5,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__comma,
    STATE(309), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(580), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [16028] = 7,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    ACTIONS(585), 1,
      sym_ellipsis,
    STATE(238), 1,
      sym_object_end,
    STATE(370), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16051] = 4,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(311), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [16068] = 7,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    ACTIONS(592), 1,
      sym_ellipsis,
    STATE(250), 1,
      sym_object_end,
    STATE(394), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16091] = 7,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      sym_ellipsis,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    STATE(66), 1,
      sym__comma,
    STATE(324), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16114] = 7,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    ACTIONS(602), 1,
      sym_ellipsis,
    STATE(169), 1,
      sym_object_end,
    STATE(380), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16137] = 6,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_quoted_template_start,
    ACTIONS(604), 1,
      sym_identifier,
    STATE(304), 1,
      sym_block_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(316), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [16158] = 5,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(611), 1,
      sym_quoted_template_start,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(316), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [16176] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(144), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [16188] = 6,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__comma,
    STATE(334), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16208] = 6,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    STATE(259), 1,
      sym_tuple_end,
    STATE(371), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16228] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [16240] = 6,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    STATE(146), 1,
      sym_tuple_end,
    STATE(400), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16260] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(580), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [16274] = 6,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    STATE(233), 1,
      sym_tuple_end,
    STATE(388), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16294] = 6,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym_ellipsis,
    STATE(66), 1,
      sym__comma,
    STATE(309), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16314] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_if,
    ACTIONS(576), 1,
      anon_sym_QMARK,
    STATE(183), 1,
      sym_tuple_end,
    STATE(366), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16334] = 5,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    STATE(222), 1,
      sym_object_end,
    STATE(372), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16351] = 4,
    ACTIONS(624), 1,
      sym__template_literal_chunk,
    STATE(333), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 2,
      sym_quoted_template_end,
      sym_template_interpolation_start,
  [16366] = 4,
    ACTIONS(626), 1,
      sym__template_literal_chunk,
    STATE(331), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(622), 2,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16381] = 5,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    STATE(167), 1,
      sym_object_end,
    STATE(387), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16398] = 5,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    STATE(252), 1,
      sym_object_end,
    STATE(397), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16415] = 4,
    ACTIONS(628), 1,
      sym__template_literal_chunk,
    STATE(331), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(631), 2,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16430] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(633), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [16443] = 4,
    ACTIONS(635), 1,
      sym__template_literal_chunk,
    STATE(333), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(631), 2,
      sym_quoted_template_end,
      sym_template_interpolation_start,
  [16458] = 5,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym__comma,
    STATE(309), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16475] = 5,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      anon_sym_if,
    STATE(134), 1,
      sym_object_end,
    STATE(390), 1,
      sym_for_cond,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16492] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(640), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [16502] = 3,
    ACTIONS(642), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 2,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16514] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(478), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [16524] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(646), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16534] = 4,
    ACTIONS(648), 1,
      sym__template_literal_chunk,
    STATE(348), 1,
      aux_sym_template_literal_repeat1,
    STATE(418), 1,
      sym_template_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16548] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(650), 3,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16558] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(650), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16568] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(652), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [16580] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(654), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16590] = 3,
    ACTIONS(656), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 2,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16602] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(144), 3,
      sym_template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [16612] = 4,
    ACTIONS(658), 1,
      anon_sym_QMARK,
    ACTIONS(660), 1,
      sym_strip_marker,
    ACTIONS(662), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16626] = 4,
    ACTIONS(622), 1,
      sym_quoted_template_end,
    ACTIONS(664), 1,
      sym__template_literal_chunk,
    STATE(354), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16640] = 3,
    ACTIONS(666), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 2,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16652] = 4,
    ACTIONS(124), 1,
      sym_strip_marker,
    ACTIONS(128), 1,
      sym_template_interpolation_end,
    ACTIONS(658), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16666] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(654), 3,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16676] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(668), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [16686] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(670), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [16696] = 4,
    ACTIONS(631), 1,
      sym_quoted_template_end,
    ACTIONS(672), 1,
      sym__template_literal_chunk,
    STATE(354), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 3,
      sym_quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [16720] = 4,
    ACTIONS(658), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      sym_strip_marker,
    ACTIONS(677), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16734] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(679), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [16746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(646), 3,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16756] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(681), 3,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
      sym_heredoc_identifier,
  [16766] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(681), 3,
      sym_quoted_template_end,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16776] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(683), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [16786] = 4,
    ACTIONS(140), 1,
      sym_strip_marker,
    ACTIONS(142), 1,
      sym_template_interpolation_end,
    ACTIONS(658), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16800] = 3,
    ACTIONS(685), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(644), 2,
      sym__template_literal_chunk,
      sym_template_interpolation_start,
  [16812] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16823] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16834] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16845] = 3,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16856] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(691), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16867] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16878] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16889] = 3,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16900] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16911] = 3,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(697), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16922] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16933] = 3,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16944] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(705), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16955] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16966] = 3,
    ACTIONS(709), 1,
      sym_identifier,
    ACTIONS(711), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16977] = 3,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16988] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [16999] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(713), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17010] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17021] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(717), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [17030] = 3,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17041] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17052] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(721), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17063] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17074] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17085] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym_block_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17096] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17107] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17118] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17129] = 3,
    ACTIONS(725), 1,
      sym_identifier,
    ACTIONS(727), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17140] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17151] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17162] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(729), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17173] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17184] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17195] = 3,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17206] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17217] = 3,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(265), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17228] = 3,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17239] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(733), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17250] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17261] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17272] = 3,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      aux_sym_legacy_index_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17283] = 3,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17294] = 3,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym__function_call_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17305] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17316] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17327] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_tuple_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17338] = 3,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_object_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17349] = 3,
    ACTIONS(600), 1,
      anon_sym_QMARK,
    ACTIONS(751), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17360] = 2,
    ACTIONS(753), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17368] = 2,
    ACTIONS(755), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17376] = 2,
    ACTIONS(757), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17384] = 2,
    ACTIONS(662), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17392] = 2,
    ACTIONS(759), 1,
      sym_quoted_template_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17400] = 2,
    ACTIONS(761), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17408] = 2,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17416] = 2,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17424] = 2,
    ACTIONS(765), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17432] = 2,
    ACTIONS(677), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17440] = 2,
    ACTIONS(767), 1,
      sym_heredoc_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17448] = 2,
    ACTIONS(769), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17456] = 2,
    ACTIONS(771), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17464] = 2,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17472] = 2,
    ACTIONS(773), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17480] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [17488] = 2,
    ACTIONS(777), 1,
      sym_template_interpolation_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 214,
  [SMALL_STATE(5)] = 321,
  [SMALL_STATE(6)] = 428,
  [SMALL_STATE(7)] = 532,
  [SMALL_STATE(8)] = 636,
  [SMALL_STATE(9)] = 738,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 944,
  [SMALL_STATE(12)] = 1048,
  [SMALL_STATE(13)] = 1150,
  [SMALL_STATE(14)] = 1251,
  [SMALL_STATE(15)] = 1349,
  [SMALL_STATE(16)] = 1447,
  [SMALL_STATE(17)] = 1545,
  [SMALL_STATE(18)] = 1643,
  [SMALL_STATE(19)] = 1738,
  [SMALL_STATE(20)] = 1833,
  [SMALL_STATE(21)] = 1928,
  [SMALL_STATE(22)] = 2023,
  [SMALL_STATE(23)] = 2118,
  [SMALL_STATE(24)] = 2213,
  [SMALL_STATE(25)] = 2291,
  [SMALL_STATE(26)] = 2383,
  [SMALL_STATE(27)] = 2449,
  [SMALL_STATE(28)] = 2503,
  [SMALL_STATE(29)] = 2561,
  [SMALL_STATE(30)] = 2629,
  [SMALL_STATE(31)] = 2721,
  [SMALL_STATE(32)] = 2775,
  [SMALL_STATE(33)] = 2867,
  [SMALL_STATE(34)] = 2927,
  [SMALL_STATE(35)] = 2991,
  [SMALL_STATE(36)] = 3080,
  [SMALL_STATE(37)] = 3169,
  [SMALL_STATE(38)] = 3258,
  [SMALL_STATE(39)] = 3347,
  [SMALL_STATE(40)] = 3436,
  [SMALL_STATE(41)] = 3525,
  [SMALL_STATE(42)] = 3614,
  [SMALL_STATE(43)] = 3703,
  [SMALL_STATE(44)] = 3792,
  [SMALL_STATE(45)] = 3881,
  [SMALL_STATE(46)] = 3970,
  [SMALL_STATE(47)] = 4059,
  [SMALL_STATE(48)] = 4148,
  [SMALL_STATE(49)] = 4237,
  [SMALL_STATE(50)] = 4326,
  [SMALL_STATE(51)] = 4415,
  [SMALL_STATE(52)] = 4504,
  [SMALL_STATE(53)] = 4593,
  [SMALL_STATE(54)] = 4682,
  [SMALL_STATE(55)] = 4771,
  [SMALL_STATE(56)] = 4860,
  [SMALL_STATE(57)] = 4949,
  [SMALL_STATE(58)] = 5038,
  [SMALL_STATE(59)] = 5127,
  [SMALL_STATE(60)] = 5216,
  [SMALL_STATE(61)] = 5305,
  [SMALL_STATE(62)] = 5394,
  [SMALL_STATE(63)] = 5483,
  [SMALL_STATE(64)] = 5572,
  [SMALL_STATE(65)] = 5661,
  [SMALL_STATE(66)] = 5750,
  [SMALL_STATE(67)] = 5839,
  [SMALL_STATE(68)] = 5928,
  [SMALL_STATE(69)] = 6017,
  [SMALL_STATE(70)] = 6071,
  [SMALL_STATE(71)] = 6125,
  [SMALL_STATE(72)] = 6179,
  [SMALL_STATE(73)] = 6233,
  [SMALL_STATE(74)] = 6287,
  [SMALL_STATE(75)] = 6370,
  [SMALL_STATE(76)] = 6453,
  [SMALL_STATE(77)] = 6536,
  [SMALL_STATE(78)] = 6619,
  [SMALL_STATE(79)] = 6702,
  [SMALL_STATE(80)] = 6785,
  [SMALL_STATE(81)] = 6868,
  [SMALL_STATE(82)] = 6951,
  [SMALL_STATE(83)] = 7034,
  [SMALL_STATE(84)] = 7117,
  [SMALL_STATE(85)] = 7200,
  [SMALL_STATE(86)] = 7283,
  [SMALL_STATE(87)] = 7366,
  [SMALL_STATE(88)] = 7449,
  [SMALL_STATE(89)] = 7532,
  [SMALL_STATE(90)] = 7615,
  [SMALL_STATE(91)] = 7698,
  [SMALL_STATE(92)] = 7781,
  [SMALL_STATE(93)] = 7864,
  [SMALL_STATE(94)] = 7947,
  [SMALL_STATE(95)] = 8030,
  [SMALL_STATE(96)] = 8113,
  [SMALL_STATE(97)] = 8196,
  [SMALL_STATE(98)] = 8279,
  [SMALL_STATE(99)] = 8362,
  [SMALL_STATE(100)] = 8445,
  [SMALL_STATE(101)] = 8528,
  [SMALL_STATE(102)] = 8611,
  [SMALL_STATE(103)] = 8665,
  [SMALL_STATE(104)] = 8715,
  [SMALL_STATE(105)] = 8771,
  [SMALL_STATE(106)] = 8831,
  [SMALL_STATE(107)] = 8893,
  [SMALL_STATE(108)] = 8957,
  [SMALL_STATE(109)] = 9007,
  [SMALL_STATE(110)] = 9081,
  [SMALL_STATE(111)] = 9131,
  [SMALL_STATE(112)] = 9181,
  [SMALL_STATE(113)] = 9231,
  [SMALL_STATE(114)] = 9277,
  [SMALL_STATE(115)] = 9327,
  [SMALL_STATE(116)] = 9377,
  [SMALL_STATE(117)] = 9418,
  [SMALL_STATE(118)] = 9459,
  [SMALL_STATE(119)] = 9500,
  [SMALL_STATE(120)] = 9541,
  [SMALL_STATE(121)] = 9582,
  [SMALL_STATE(122)] = 9623,
  [SMALL_STATE(123)] = 9664,
  [SMALL_STATE(124)] = 9705,
  [SMALL_STATE(125)] = 9746,
  [SMALL_STATE(126)] = 9787,
  [SMALL_STATE(127)] = 9828,
  [SMALL_STATE(128)] = 9869,
  [SMALL_STATE(129)] = 9910,
  [SMALL_STATE(130)] = 9951,
  [SMALL_STATE(131)] = 9992,
  [SMALL_STATE(132)] = 10033,
  [SMALL_STATE(133)] = 10074,
  [SMALL_STATE(134)] = 10115,
  [SMALL_STATE(135)] = 10156,
  [SMALL_STATE(136)] = 10197,
  [SMALL_STATE(137)] = 10238,
  [SMALL_STATE(138)] = 10279,
  [SMALL_STATE(139)] = 10320,
  [SMALL_STATE(140)] = 10361,
  [SMALL_STATE(141)] = 10402,
  [SMALL_STATE(142)] = 10443,
  [SMALL_STATE(143)] = 10484,
  [SMALL_STATE(144)] = 10525,
  [SMALL_STATE(145)] = 10566,
  [SMALL_STATE(146)] = 10607,
  [SMALL_STATE(147)] = 10648,
  [SMALL_STATE(148)] = 10689,
  [SMALL_STATE(149)] = 10732,
  [SMALL_STATE(150)] = 10776,
  [SMALL_STATE(151)] = 10834,
  [SMALL_STATE(152)] = 10890,
  [SMALL_STATE(153)] = 10944,
  [SMALL_STATE(154)] = 10994,
  [SMALL_STATE(155)] = 11038,
  [SMALL_STATE(156)] = 11104,
  [SMALL_STATE(157)] = 11152,
  [SMALL_STATE(158)] = 11189,
  [SMALL_STATE(159)] = 11226,
  [SMALL_STATE(160)] = 11263,
  [SMALL_STATE(161)] = 11300,
  [SMALL_STATE(162)] = 11337,
  [SMALL_STATE(163)] = 11374,
  [SMALL_STATE(164)] = 11411,
  [SMALL_STATE(165)] = 11448,
  [SMALL_STATE(166)] = 11485,
  [SMALL_STATE(167)] = 11522,
  [SMALL_STATE(168)] = 11559,
  [SMALL_STATE(169)] = 11596,
  [SMALL_STATE(170)] = 11633,
  [SMALL_STATE(171)] = 11670,
  [SMALL_STATE(172)] = 11707,
  [SMALL_STATE(173)] = 11744,
  [SMALL_STATE(174)] = 11781,
  [SMALL_STATE(175)] = 11818,
  [SMALL_STATE(176)] = 11855,
  [SMALL_STATE(177)] = 11892,
  [SMALL_STATE(178)] = 11929,
  [SMALL_STATE(179)] = 11966,
  [SMALL_STATE(180)] = 12003,
  [SMALL_STATE(181)] = 12040,
  [SMALL_STATE(182)] = 12077,
  [SMALL_STATE(183)] = 12114,
  [SMALL_STATE(184)] = 12151,
  [SMALL_STATE(185)] = 12188,
  [SMALL_STATE(186)] = 12225,
  [SMALL_STATE(187)] = 12262,
  [SMALL_STATE(188)] = 12299,
  [SMALL_STATE(189)] = 12336,
  [SMALL_STATE(190)] = 12380,
  [SMALL_STATE(191)] = 12424,
  [SMALL_STATE(192)] = 12472,
  [SMALL_STATE(193)] = 12516,
  [SMALL_STATE(194)] = 12560,
  [SMALL_STATE(195)] = 12602,
  [SMALL_STATE(196)] = 12666,
  [SMALL_STATE(197)] = 12710,
  [SMALL_STATE(198)] = 12766,
  [SMALL_STATE(199)] = 12820,
  [SMALL_STATE(200)] = 12872,
  [SMALL_STATE(201)] = 12918,
  [SMALL_STATE(202)] = 12960,
  [SMALL_STATE(203)] = 13002,
  [SMALL_STATE(204)] = 13044,
  [SMALL_STATE(205)] = 13086,
  [SMALL_STATE(206)] = 13128,
  [SMALL_STATE(207)] = 13170,
  [SMALL_STATE(208)] = 13207,
  [SMALL_STATE(209)] = 13238,
  [SMALL_STATE(210)] = 13269,
  [SMALL_STATE(211)] = 13300,
  [SMALL_STATE(212)] = 13331,
  [SMALL_STATE(213)] = 13362,
  [SMALL_STATE(214)] = 13393,
  [SMALL_STATE(215)] = 13424,
  [SMALL_STATE(216)] = 13455,
  [SMALL_STATE(217)] = 13486,
  [SMALL_STATE(218)] = 13517,
  [SMALL_STATE(219)] = 13548,
  [SMALL_STATE(220)] = 13579,
  [SMALL_STATE(221)] = 13610,
  [SMALL_STATE(222)] = 13641,
  [SMALL_STATE(223)] = 13672,
  [SMALL_STATE(224)] = 13703,
  [SMALL_STATE(225)] = 13734,
  [SMALL_STATE(226)] = 13765,
  [SMALL_STATE(227)] = 13796,
  [SMALL_STATE(228)] = 13827,
  [SMALL_STATE(229)] = 13858,
  [SMALL_STATE(230)] = 13889,
  [SMALL_STATE(231)] = 13920,
  [SMALL_STATE(232)] = 13951,
  [SMALL_STATE(233)] = 13982,
  [SMALL_STATE(234)] = 14013,
  [SMALL_STATE(235)] = 14044,
  [SMALL_STATE(236)] = 14075,
  [SMALL_STATE(237)] = 14106,
  [SMALL_STATE(238)] = 14137,
  [SMALL_STATE(239)] = 14168,
  [SMALL_STATE(240)] = 14203,
  [SMALL_STATE(241)] = 14234,
  [SMALL_STATE(242)] = 14263,
  [SMALL_STATE(243)] = 14292,
  [SMALL_STATE(244)] = 14321,
  [SMALL_STATE(245)] = 14350,
  [SMALL_STATE(246)] = 14379,
  [SMALL_STATE(247)] = 14408,
  [SMALL_STATE(248)] = 14437,
  [SMALL_STATE(249)] = 14466,
  [SMALL_STATE(250)] = 14495,
  [SMALL_STATE(251)] = 14524,
  [SMALL_STATE(252)] = 14553,
  [SMALL_STATE(253)] = 14582,
  [SMALL_STATE(254)] = 14611,
  [SMALL_STATE(255)] = 14640,
  [SMALL_STATE(256)] = 14669,
  [SMALL_STATE(257)] = 14698,
  [SMALL_STATE(258)] = 14727,
  [SMALL_STATE(259)] = 14756,
  [SMALL_STATE(260)] = 14785,
  [SMALL_STATE(261)] = 14814,
  [SMALL_STATE(262)] = 14843,
  [SMALL_STATE(263)] = 14872,
  [SMALL_STATE(264)] = 14901,
  [SMALL_STATE(265)] = 14930,
  [SMALL_STATE(266)] = 14959,
  [SMALL_STATE(267)] = 14988,
  [SMALL_STATE(268)] = 15017,
  [SMALL_STATE(269)] = 15046,
  [SMALL_STATE(270)] = 15075,
  [SMALL_STATE(271)] = 15104,
  [SMALL_STATE(272)] = 15133,
  [SMALL_STATE(273)] = 15162,
  [SMALL_STATE(274)] = 15190,
  [SMALL_STATE(275)] = 15216,
  [SMALL_STATE(276)] = 15242,
  [SMALL_STATE(277)] = 15267,
  [SMALL_STATE(278)] = 15292,
  [SMALL_STATE(279)] = 15317,
  [SMALL_STATE(280)] = 15343,
  [SMALL_STATE(281)] = 15367,
  [SMALL_STATE(282)] = 15393,
  [SMALL_STATE(283)] = 15416,
  [SMALL_STATE(284)] = 15439,
  [SMALL_STATE(285)] = 15459,
  [SMALL_STATE(286)] = 15479,
  [SMALL_STATE(287)] = 15504,
  [SMALL_STATE(288)] = 15527,
  [SMALL_STATE(289)] = 15552,
  [SMALL_STATE(290)] = 15575,
  [SMALL_STATE(291)] = 15598,
  [SMALL_STATE(292)] = 15621,
  [SMALL_STATE(293)] = 15644,
  [SMALL_STATE(294)] = 15667,
  [SMALL_STATE(295)] = 15690,
  [SMALL_STATE(296)] = 15713,
  [SMALL_STATE(297)] = 15736,
  [SMALL_STATE(298)] = 15761,
  [SMALL_STATE(299)] = 15786,
  [SMALL_STATE(300)] = 15809,
  [SMALL_STATE(301)] = 15832,
  [SMALL_STATE(302)] = 15855,
  [SMALL_STATE(303)] = 15878,
  [SMALL_STATE(304)] = 15901,
  [SMALL_STATE(305)] = 15923,
  [SMALL_STATE(306)] = 15945,
  [SMALL_STATE(307)] = 15969,
  [SMALL_STATE(308)] = 15992,
  [SMALL_STATE(309)] = 16009,
  [SMALL_STATE(310)] = 16028,
  [SMALL_STATE(311)] = 16051,
  [SMALL_STATE(312)] = 16068,
  [SMALL_STATE(313)] = 16091,
  [SMALL_STATE(314)] = 16114,
  [SMALL_STATE(315)] = 16137,
  [SMALL_STATE(316)] = 16158,
  [SMALL_STATE(317)] = 16176,
  [SMALL_STATE(318)] = 16188,
  [SMALL_STATE(319)] = 16208,
  [SMALL_STATE(320)] = 16228,
  [SMALL_STATE(321)] = 16240,
  [SMALL_STATE(322)] = 16260,
  [SMALL_STATE(323)] = 16274,
  [SMALL_STATE(324)] = 16294,
  [SMALL_STATE(325)] = 16314,
  [SMALL_STATE(326)] = 16334,
  [SMALL_STATE(327)] = 16351,
  [SMALL_STATE(328)] = 16366,
  [SMALL_STATE(329)] = 16381,
  [SMALL_STATE(330)] = 16398,
  [SMALL_STATE(331)] = 16415,
  [SMALL_STATE(332)] = 16430,
  [SMALL_STATE(333)] = 16443,
  [SMALL_STATE(334)] = 16458,
  [SMALL_STATE(335)] = 16475,
  [SMALL_STATE(336)] = 16492,
  [SMALL_STATE(337)] = 16502,
  [SMALL_STATE(338)] = 16514,
  [SMALL_STATE(339)] = 16524,
  [SMALL_STATE(340)] = 16534,
  [SMALL_STATE(341)] = 16548,
  [SMALL_STATE(342)] = 16558,
  [SMALL_STATE(343)] = 16568,
  [SMALL_STATE(344)] = 16580,
  [SMALL_STATE(345)] = 16590,
  [SMALL_STATE(346)] = 16602,
  [SMALL_STATE(347)] = 16612,
  [SMALL_STATE(348)] = 16626,
  [SMALL_STATE(349)] = 16640,
  [SMALL_STATE(350)] = 16652,
  [SMALL_STATE(351)] = 16666,
  [SMALL_STATE(352)] = 16676,
  [SMALL_STATE(353)] = 16686,
  [SMALL_STATE(354)] = 16696,
  [SMALL_STATE(355)] = 16710,
  [SMALL_STATE(356)] = 16720,
  [SMALL_STATE(357)] = 16734,
  [SMALL_STATE(358)] = 16746,
  [SMALL_STATE(359)] = 16756,
  [SMALL_STATE(360)] = 16766,
  [SMALL_STATE(361)] = 16776,
  [SMALL_STATE(362)] = 16786,
  [SMALL_STATE(363)] = 16800,
  [SMALL_STATE(364)] = 16812,
  [SMALL_STATE(365)] = 16823,
  [SMALL_STATE(366)] = 16834,
  [SMALL_STATE(367)] = 16845,
  [SMALL_STATE(368)] = 16856,
  [SMALL_STATE(369)] = 16867,
  [SMALL_STATE(370)] = 16878,
  [SMALL_STATE(371)] = 16889,
  [SMALL_STATE(372)] = 16900,
  [SMALL_STATE(373)] = 16911,
  [SMALL_STATE(374)] = 16922,
  [SMALL_STATE(375)] = 16933,
  [SMALL_STATE(376)] = 16944,
  [SMALL_STATE(377)] = 16955,
  [SMALL_STATE(378)] = 16966,
  [SMALL_STATE(379)] = 16977,
  [SMALL_STATE(380)] = 16988,
  [SMALL_STATE(381)] = 16999,
  [SMALL_STATE(382)] = 17010,
  [SMALL_STATE(383)] = 17021,
  [SMALL_STATE(384)] = 17030,
  [SMALL_STATE(385)] = 17041,
  [SMALL_STATE(386)] = 17052,
  [SMALL_STATE(387)] = 17063,
  [SMALL_STATE(388)] = 17074,
  [SMALL_STATE(389)] = 17085,
  [SMALL_STATE(390)] = 17096,
  [SMALL_STATE(391)] = 17107,
  [SMALL_STATE(392)] = 17118,
  [SMALL_STATE(393)] = 17129,
  [SMALL_STATE(394)] = 17140,
  [SMALL_STATE(395)] = 17151,
  [SMALL_STATE(396)] = 17162,
  [SMALL_STATE(397)] = 17173,
  [SMALL_STATE(398)] = 17184,
  [SMALL_STATE(399)] = 17195,
  [SMALL_STATE(400)] = 17206,
  [SMALL_STATE(401)] = 17217,
  [SMALL_STATE(402)] = 17228,
  [SMALL_STATE(403)] = 17239,
  [SMALL_STATE(404)] = 17250,
  [SMALL_STATE(405)] = 17261,
  [SMALL_STATE(406)] = 17272,
  [SMALL_STATE(407)] = 17283,
  [SMALL_STATE(408)] = 17294,
  [SMALL_STATE(409)] = 17305,
  [SMALL_STATE(410)] = 17316,
  [SMALL_STATE(411)] = 17327,
  [SMALL_STATE(412)] = 17338,
  [SMALL_STATE(413)] = 17349,
  [SMALL_STATE(414)] = 17360,
  [SMALL_STATE(415)] = 17368,
  [SMALL_STATE(416)] = 17376,
  [SMALL_STATE(417)] = 17384,
  [SMALL_STATE(418)] = 17392,
  [SMALL_STATE(419)] = 17400,
  [SMALL_STATE(420)] = 17408,
  [SMALL_STATE(421)] = 17416,
  [SMALL_STATE(422)] = 17424,
  [SMALL_STATE(423)] = 17432,
  [SMALL_STATE(424)] = 17440,
  [SMALL_STATE(425)] = 17448,
  [SMALL_STATE(426)] = 17456,
  [SMALL_STATE(427)] = 17464,
  [SMALL_STATE(428)] = 17472,
  [SMALL_STATE(429)] = 17480,
  [SMALL_STATE(430)] = 17488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(278),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(148),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(165),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(165),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(168),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(170),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(32),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(276),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(92),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(415),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(415),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(288),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(59),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(393),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(36),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(373),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_end, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_end, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_lit, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_lit, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_end, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_end, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_template, 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heredoc_template, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(67),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(406),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(50),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(378),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_elem, 3, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_start, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_start, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_start, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_start, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(327),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(21),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(328),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(22),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(66),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(306),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(316),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(340),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(331),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(333),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(354),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_start, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [775] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
