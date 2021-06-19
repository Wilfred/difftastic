#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 456
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  sym_numeric_lit = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_null_lit = 10,
  anon_sym_COMMA = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COLON = 14,
  anon_sym_DOT = 15,
  aux_sym_legacy_index_token1 = 16,
  anon_sym_DOT_STAR = 17,
  anon_sym_LBRACK_STAR_RBRACK = 18,
  anon_sym_EQ_GT = 19,
  anon_sym_for = 20,
  anon_sym_in = 21,
  anon_sym_if = 22,
  sym_ellipsis = 23,
  anon_sym_QMARK = 24,
  anon_sym_DASH = 25,
  anon_sym_BANG = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_PLUS = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_EQ_EQ = 35,
  anon_sym_BANG_EQ = 36,
  anon_sym_AMP_AMP = 37,
  anon_sym_PIPE_PIPE = 38,
  sym_strip_marker = 39,
  sym_comment = 40,
  sym__newline = 41,
  sym__quoted_template_start = 42,
  sym__quoted_template_end = 43,
  sym__template_literal_chunk = 44,
  sym__template_interpolation_start = 45,
  sym__template_interpolation_end = 46,
  sym_config_file = 47,
  sym_body = 48,
  sym_attribute = 49,
  sym_block = 50,
  sym_one_line_block = 51,
  sym__block_start = 52,
  sym__block_end = 53,
  sym_expression = 54,
  sym__expr_term = 55,
  sym_literal_value = 56,
  sym_bool_lit = 57,
  sym_string_lit = 58,
  sym_collection_value = 59,
  sym__comma = 60,
  sym_tuple = 61,
  sym__tuple_start = 62,
  sym__tuple_end = 63,
  sym__tuple_elems = 64,
  sym_object = 65,
  sym__object_start = 66,
  sym__object_end = 67,
  sym__object_elems = 68,
  sym_object_elem = 69,
  sym_index = 70,
  sym_new_index = 71,
  sym_legacy_index = 72,
  sym_get_attr = 73,
  sym_splat = 74,
  sym_attr_splat = 75,
  sym_full_splat = 76,
  sym_for_expr = 77,
  sym_for_tuple_expr = 78,
  sym_for_object_expr = 79,
  sym_for_intro = 80,
  sym_for_cond = 81,
  sym_variable_expr = 82,
  sym_function_call = 83,
  sym__function_call_start = 84,
  sym__function_call_end = 85,
  sym_function_arguments = 86,
  sym_conditional = 87,
  sym_operation = 88,
  sym_unary_operation = 89,
  sym_binary_operation = 90,
  sym_template_expr = 91,
  sym_quoted_template = 92,
  sym_template_literal = 93,
  sym_template_interpolation = 94,
  sym_template_directive = 95,
  sym__newlines = 96,
  aux_sym_body_repeat1 = 97,
  aux_sym_block_repeat1 = 98,
  aux_sym__tuple_elems_repeat1 = 99,
  aux_sym__object_elems_repeat1 = 100,
  aux_sym_attr_splat_repeat1 = 101,
  aux_sym_full_splat_repeat1 = 102,
  aux_sym_function_arguments_repeat1 = 103,
  aux_sym_quoted_template_repeat1 = 104,
  aux_sym_template_literal_repeat1 = 105,
  aux_sym__newlines_repeat1 = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_numeric_lit] = "numeric_lit",
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
  [sym__newline] = "_newline",
  [sym__quoted_template_start] = "_quoted_template_start",
  [sym__quoted_template_end] = "_quoted_template_end",
  [sym__template_literal_chunk] = "_template_literal_chunk",
  [sym__template_interpolation_start] = "_template_interpolation_start",
  [sym__template_interpolation_end] = "_template_interpolation_end",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_one_line_block] = "one_line_block",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym_expression] = "expression",
  [sym__expr_term] = "_expr_term",
  [sym_literal_value] = "literal_value",
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
  [sym__newlines] = "_newlines",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__tuple_elems_repeat1] = "_tuple_elems_repeat1",
  [aux_sym__object_elems_repeat1] = "_object_elems_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_full_splat_repeat1] = "full_splat_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_template_literal_repeat1] = "template_literal_repeat1",
  [aux_sym__newlines_repeat1] = "_newlines_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_numeric_lit] = sym_numeric_lit,
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
  [sym__newline] = sym__newline,
  [sym__quoted_template_start] = sym__quoted_template_start,
  [sym__quoted_template_end] = sym__quoted_template_end,
  [sym__template_literal_chunk] = sym__template_literal_chunk,
  [sym__template_interpolation_start] = sym__template_interpolation_start,
  [sym__template_interpolation_end] = sym__template_interpolation_end,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_one_line_block] = sym_one_line_block,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym_expression] = sym_expression,
  [sym__expr_term] = sym__expr_term,
  [sym_literal_value] = sym_literal_value,
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
  [sym__newlines] = sym__newlines,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__tuple_elems_repeat1] = aux_sym__tuple_elems_repeat1,
  [aux_sym__object_elems_repeat1] = aux_sym__object_elems_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_full_splat_repeat1] = aux_sym_full_splat_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_template_literal_repeat1] = aux_sym_template_literal_repeat1,
  [aux_sym__newlines_repeat1] = aux_sym__newlines_repeat1,
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
  [sym_numeric_lit] = {
    .visible = true,
    .named = true,
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
  [sym__newline] = {
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
  [sym_one_line_block] = {
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
  [sym__newlines] = {
    .visible = false,
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
  [aux_sym_function_arguments_repeat1] = {
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
  [aux_sym__newlines_repeat1] = {
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
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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

static inline bool sym_identifier_character_set_8(int32_t c) {
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
      if (eof) ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '~') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '~') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '{') ADVANCE(35);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '~') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(49);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(49);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(49);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(49);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(49);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(49);
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(49);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(49);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(49);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(49);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(49);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(49);
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(9);
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
      if (lookahead == '.') ADVANCE(5);
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
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(49);
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
      if (lookahead == '*') ADVANCE(4);
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31, .external_lex_state = 2},
  [2] = {.lex_state = 24, .external_lex_state = 3},
  [3] = {.lex_state = 24, .external_lex_state = 3},
  [4] = {.lex_state = 24, .external_lex_state = 3},
  [5] = {.lex_state = 24, .external_lex_state = 3},
  [6] = {.lex_state = 24, .external_lex_state = 3},
  [7] = {.lex_state = 24, .external_lex_state = 3},
  [8] = {.lex_state = 25, .external_lex_state = 3},
  [9] = {.lex_state = 25, .external_lex_state = 3},
  [10] = {.lex_state = 25, .external_lex_state = 3},
  [11] = {.lex_state = 25, .external_lex_state = 3},
  [12] = {.lex_state = 24, .external_lex_state = 4},
  [13] = {.lex_state = 24, .external_lex_state = 4},
  [14] = {.lex_state = 25, .external_lex_state = 3},
  [15] = {.lex_state = 25, .external_lex_state = 3},
  [16] = {.lex_state = 24, .external_lex_state = 4},
  [17] = {.lex_state = 25, .external_lex_state = 3},
  [18] = {.lex_state = 24, .external_lex_state = 4},
  [19] = {.lex_state = 25, .external_lex_state = 3},
  [20] = {.lex_state = 24, .external_lex_state = 4},
  [21] = {.lex_state = 25, .external_lex_state = 3},
  [22] = {.lex_state = 24, .external_lex_state = 4},
  [23] = {.lex_state = 25, .external_lex_state = 3},
  [24] = {.lex_state = 25, .external_lex_state = 3},
  [25] = {.lex_state = 25, .external_lex_state = 3},
  [26] = {.lex_state = 25, .external_lex_state = 3},
  [27] = {.lex_state = 25, .external_lex_state = 3},
  [28] = {.lex_state = 25, .external_lex_state = 3},
  [29] = {.lex_state = 25, .external_lex_state = 3},
  [30] = {.lex_state = 25, .external_lex_state = 3},
  [31] = {.lex_state = 25, .external_lex_state = 3},
  [32] = {.lex_state = 25, .external_lex_state = 3},
  [33] = {.lex_state = 25, .external_lex_state = 3},
  [34] = {.lex_state = 25, .external_lex_state = 3},
  [35] = {.lex_state = 25, .external_lex_state = 3},
  [36] = {.lex_state = 25, .external_lex_state = 3},
  [37] = {.lex_state = 25, .external_lex_state = 3},
  [38] = {.lex_state = 25, .external_lex_state = 4},
  [39] = {.lex_state = 25, .external_lex_state = 3},
  [40] = {.lex_state = 25, .external_lex_state = 4},
  [41] = {.lex_state = 25, .external_lex_state = 4},
  [42] = {.lex_state = 25, .external_lex_state = 4},
  [43] = {.lex_state = 26, .external_lex_state = 2},
  [44] = {.lex_state = 25, .external_lex_state = 4},
  [45] = {.lex_state = 25, .external_lex_state = 4},
  [46] = {.lex_state = 25, .external_lex_state = 4},
  [47] = {.lex_state = 25, .external_lex_state = 4},
  [48] = {.lex_state = 25, .external_lex_state = 4},
  [49] = {.lex_state = 25, .external_lex_state = 4},
  [50] = {.lex_state = 25, .external_lex_state = 4},
  [51] = {.lex_state = 25, .external_lex_state = 4},
  [52] = {.lex_state = 25, .external_lex_state = 4},
  [53] = {.lex_state = 25, .external_lex_state = 4},
  [54] = {.lex_state = 26, .external_lex_state = 2},
  [55] = {.lex_state = 25, .external_lex_state = 4},
  [56] = {.lex_state = 25, .external_lex_state = 4},
  [57] = {.lex_state = 25, .external_lex_state = 4},
  [58] = {.lex_state = 25, .external_lex_state = 4},
  [59] = {.lex_state = 25, .external_lex_state = 4},
  [60] = {.lex_state = 25, .external_lex_state = 4},
  [61] = {.lex_state = 26, .external_lex_state = 2},
  [62] = {.lex_state = 25, .external_lex_state = 4},
  [63] = {.lex_state = 25, .external_lex_state = 4},
  [64] = {.lex_state = 25, .external_lex_state = 4},
  [65] = {.lex_state = 25, .external_lex_state = 4},
  [66] = {.lex_state = 25, .external_lex_state = 4},
  [67] = {.lex_state = 25, .external_lex_state = 4},
  [68] = {.lex_state = 25, .external_lex_state = 4},
  [69] = {.lex_state = 25, .external_lex_state = 4},
  [70] = {.lex_state = 25, .external_lex_state = 4},
  [71] = {.lex_state = 25, .external_lex_state = 4},
  [72] = {.lex_state = 25, .external_lex_state = 4},
  [73] = {.lex_state = 25, .external_lex_state = 4},
  [74] = {.lex_state = 25, .external_lex_state = 4},
  [75] = {.lex_state = 25, .external_lex_state = 4},
  [76] = {.lex_state = 25, .external_lex_state = 4},
  [77] = {.lex_state = 25, .external_lex_state = 4},
  [78] = {.lex_state = 25, .external_lex_state = 4},
  [79] = {.lex_state = 25, .external_lex_state = 4},
  [80] = {.lex_state = 25, .external_lex_state = 4},
  [81] = {.lex_state = 25, .external_lex_state = 4},
  [82] = {.lex_state = 25, .external_lex_state = 4},
  [83] = {.lex_state = 25, .external_lex_state = 4},
  [84] = {.lex_state = 25, .external_lex_state = 4},
  [85] = {.lex_state = 26, .external_lex_state = 2},
  [86] = {.lex_state = 26, .external_lex_state = 2},
  [87] = {.lex_state = 26, .external_lex_state = 2},
  [88] = {.lex_state = 26, .external_lex_state = 2},
  [89] = {.lex_state = 26, .external_lex_state = 2},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 25, .external_lex_state = 4},
  [92] = {.lex_state = 25, .external_lex_state = 4},
  [93] = {.lex_state = 25, .external_lex_state = 4},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 25, .external_lex_state = 4},
  [96] = {.lex_state = 25, .external_lex_state = 4},
  [97] = {.lex_state = 25, .external_lex_state = 4},
  [98] = {.lex_state = 25, .external_lex_state = 4},
  [99] = {.lex_state = 25, .external_lex_state = 4},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 25, .external_lex_state = 4},
  [102] = {.lex_state = 26, .external_lex_state = 2},
  [103] = {.lex_state = 25, .external_lex_state = 4},
  [104] = {.lex_state = 26, .external_lex_state = 2},
  [105] = {.lex_state = 25, .external_lex_state = 4},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 25, .external_lex_state = 4},
  [108] = {.lex_state = 25, .external_lex_state = 4},
  [109] = {.lex_state = 25, .external_lex_state = 4},
  [110] = {.lex_state = 25, .external_lex_state = 4},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 25, .external_lex_state = 4},
  [113] = {.lex_state = 25, .external_lex_state = 4},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 25, .external_lex_state = 4},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 26, .external_lex_state = 2},
  [118] = {.lex_state = 25, .external_lex_state = 4},
  [119] = {.lex_state = 25, .external_lex_state = 4},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 25, .external_lex_state = 4},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 26, .external_lex_state = 2},
  [126] = {.lex_state = 26, .external_lex_state = 2},
  [127] = {.lex_state = 31, .external_lex_state = 5},
  [128] = {.lex_state = 31, .external_lex_state = 5},
  [129] = {.lex_state = 31, .external_lex_state = 5},
  [130] = {.lex_state = 31, .external_lex_state = 5},
  [131] = {.lex_state = 31, .external_lex_state = 5},
  [132] = {.lex_state = 26, .external_lex_state = 2},
  [133] = {.lex_state = 31, .external_lex_state = 5},
  [134] = {.lex_state = 31, .external_lex_state = 5},
  [135] = {.lex_state = 31, .external_lex_state = 5},
  [136] = {.lex_state = 26, .external_lex_state = 2},
  [137] = {.lex_state = 26, .external_lex_state = 2},
  [138] = {.lex_state = 26, .external_lex_state = 2},
  [139] = {.lex_state = 26, .external_lex_state = 2},
  [140] = {.lex_state = 31, .external_lex_state = 5},
  [141] = {.lex_state = 26, .external_lex_state = 2},
  [142] = {.lex_state = 26, .external_lex_state = 2},
  [143] = {.lex_state = 26, .external_lex_state = 2},
  [144] = {.lex_state = 26, .external_lex_state = 2},
  [145] = {.lex_state = 26, .external_lex_state = 2},
  [146] = {.lex_state = 26, .external_lex_state = 2},
  [147] = {.lex_state = 26, .external_lex_state = 2},
  [148] = {.lex_state = 26, .external_lex_state = 2},
  [149] = {.lex_state = 26, .external_lex_state = 2},
  [150] = {.lex_state = 26, .external_lex_state = 2},
  [151] = {.lex_state = 26, .external_lex_state = 2},
  [152] = {.lex_state = 26, .external_lex_state = 2},
  [153] = {.lex_state = 26, .external_lex_state = 2},
  [154] = {.lex_state = 26, .external_lex_state = 2},
  [155] = {.lex_state = 26, .external_lex_state = 2},
  [156] = {.lex_state = 26, .external_lex_state = 2},
  [157] = {.lex_state = 26, .external_lex_state = 2},
  [158] = {.lex_state = 26, .external_lex_state = 2},
  [159] = {.lex_state = 31, .external_lex_state = 5},
  [160] = {.lex_state = 26, .external_lex_state = 2},
  [161] = {.lex_state = 26, .external_lex_state = 2},
  [162] = {.lex_state = 31},
  [163] = {.lex_state = 26, .external_lex_state = 2},
  [164] = {.lex_state = 26, .external_lex_state = 2},
  [165] = {.lex_state = 31},
  [166] = {.lex_state = 26, .external_lex_state = 2},
  [167] = {.lex_state = 26, .external_lex_state = 2},
  [168] = {.lex_state = 26, .external_lex_state = 2},
  [169] = {.lex_state = 26, .external_lex_state = 2},
  [170] = {.lex_state = 31},
  [171] = {.lex_state = 31},
  [172] = {.lex_state = 26, .external_lex_state = 2},
  [173] = {.lex_state = 31, .external_lex_state = 5},
  [174] = {.lex_state = 26, .external_lex_state = 2},
  [175] = {.lex_state = 26, .external_lex_state = 2},
  [176] = {.lex_state = 26, .external_lex_state = 2},
  [177] = {.lex_state = 26, .external_lex_state = 2},
  [178] = {.lex_state = 31},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 31},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 31},
  [183] = {.lex_state = 31},
  [184] = {.lex_state = 31},
  [185] = {.lex_state = 31},
  [186] = {.lex_state = 31},
  [187] = {.lex_state = 31},
  [188] = {.lex_state = 31},
  [189] = {.lex_state = 31},
  [190] = {.lex_state = 31},
  [191] = {.lex_state = 31},
  [192] = {.lex_state = 31},
  [193] = {.lex_state = 31},
  [194] = {.lex_state = 31},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 31},
  [198] = {.lex_state = 31},
  [199] = {.lex_state = 31},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 31},
  [202] = {.lex_state = 31},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 31},
  [205] = {.lex_state = 31},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 31},
  [208] = {.lex_state = 31},
  [209] = {.lex_state = 31},
  [210] = {.lex_state = 31},
  [211] = {.lex_state = 31},
  [212] = {.lex_state = 31, .external_lex_state = 5},
  [213] = {.lex_state = 31, .external_lex_state = 5},
  [214] = {.lex_state = 31, .external_lex_state = 5},
  [215] = {.lex_state = 31, .external_lex_state = 5},
  [216] = {.lex_state = 31, .external_lex_state = 5},
  [217] = {.lex_state = 31, .external_lex_state = 5},
  [218] = {.lex_state = 31, .external_lex_state = 5},
  [219] = {.lex_state = 31, .external_lex_state = 5},
  [220] = {.lex_state = 31, .external_lex_state = 5},
  [221] = {.lex_state = 31, .external_lex_state = 5},
  [222] = {.lex_state = 31, .external_lex_state = 5},
  [223] = {.lex_state = 31, .external_lex_state = 5},
  [224] = {.lex_state = 31, .external_lex_state = 5},
  [225] = {.lex_state = 31, .external_lex_state = 5},
  [226] = {.lex_state = 31, .external_lex_state = 5},
  [227] = {.lex_state = 31, .external_lex_state = 5},
  [228] = {.lex_state = 31, .external_lex_state = 5},
  [229] = {.lex_state = 31, .external_lex_state = 5},
  [230] = {.lex_state = 31, .external_lex_state = 5},
  [231] = {.lex_state = 31, .external_lex_state = 5},
  [232] = {.lex_state = 31, .external_lex_state = 5},
  [233] = {.lex_state = 31, .external_lex_state = 5},
  [234] = {.lex_state = 31, .external_lex_state = 5},
  [235] = {.lex_state = 31, .external_lex_state = 5},
  [236] = {.lex_state = 31, .external_lex_state = 5},
  [237] = {.lex_state = 31, .external_lex_state = 5},
  [238] = {.lex_state = 31, .external_lex_state = 5},
  [239] = {.lex_state = 31, .external_lex_state = 5},
  [240] = {.lex_state = 31, .external_lex_state = 5},
  [241] = {.lex_state = 31, .external_lex_state = 5},
  [242] = {.lex_state = 31, .external_lex_state = 5},
  [243] = {.lex_state = 31, .external_lex_state = 5},
  [244] = {.lex_state = 31, .external_lex_state = 5},
  [245] = {.lex_state = 31, .external_lex_state = 5},
  [246] = {.lex_state = 31, .external_lex_state = 5},
  [247] = {.lex_state = 31, .external_lex_state = 5},
  [248] = {.lex_state = 31, .external_lex_state = 5},
  [249] = {.lex_state = 31, .external_lex_state = 5},
  [250] = {.lex_state = 24, .external_lex_state = 3},
  [251] = {.lex_state = 24, .external_lex_state = 3},
  [252] = {.lex_state = 25, .external_lex_state = 3},
  [253] = {.lex_state = 25, .external_lex_state = 3},
  [254] = {.lex_state = 31, .external_lex_state = 2},
  [255] = {.lex_state = 31, .external_lex_state = 2},
  [256] = {.lex_state = 25, .external_lex_state = 4},
  [257] = {.lex_state = 25, .external_lex_state = 4},
  [258] = {.lex_state = 31, .external_lex_state = 2},
  [259] = {.lex_state = 31, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 6},
  [273] = {.lex_state = 0, .external_lex_state = 6},
  [274] = {.lex_state = 0, .external_lex_state = 6},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 6},
  [277] = {.lex_state = 0, .external_lex_state = 6},
  [278] = {.lex_state = 0, .external_lex_state = 6},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 6},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 27, .external_lex_state = 4},
  [285] = {.lex_state = 31, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 31, .external_lex_state = 2},
  [288] = {.lex_state = 27, .external_lex_state = 4},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 27, .external_lex_state = 4},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 31, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 31, .external_lex_state = 2},
  [308] = {.lex_state = 31, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 31, .external_lex_state = 2},
  [311] = {.lex_state = 31, .external_lex_state = 2},
  [312] = {.lex_state = 31, .external_lex_state = 4},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 31, .external_lex_state = 4},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 2},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0, .external_lex_state = 2},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0, .external_lex_state = 2},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 0, .external_lex_state = 6},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 31, .external_lex_state = 2},
  [348] = {.lex_state = 31, .external_lex_state = 2},
  [349] = {.lex_state = 0, .external_lex_state = 2},
  [350] = {.lex_state = 31, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 31, .external_lex_state = 2},
  [353] = {.lex_state = 31, .external_lex_state = 2},
  [354] = {.lex_state = 0, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 2},
  [356] = {.lex_state = 0, .external_lex_state = 2},
  [357] = {.lex_state = 31, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 2},
  [359] = {.lex_state = 31, .external_lex_state = 2},
  [360] = {.lex_state = 31, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 7},
  [365] = {.lex_state = 0, .external_lex_state = 5},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 6},
  [368] = {.lex_state = 0, .external_lex_state = 6},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 0, .external_lex_state = 8},
  [371] = {.lex_state = 0, .external_lex_state = 2},
  [372] = {.lex_state = 31, .external_lex_state = 4},
  [373] = {.lex_state = 0, .external_lex_state = 6},
  [374] = {.lex_state = 0, .external_lex_state = 2},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 0, .external_lex_state = 8},
  [379] = {.lex_state = 0, .external_lex_state = 6},
  [380] = {.lex_state = 24},
  [381] = {.lex_state = 0, .external_lex_state = 2},
  [382] = {.lex_state = 25},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 25},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0, .external_lex_state = 2},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 25},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 25},
  [413] = {.lex_state = 0, .external_lex_state = 2},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 31},
  [422] = {.lex_state = 25},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 25},
  [428] = {.lex_state = 31},
  [429] = {.lex_state = 0, .external_lex_state = 2},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 2},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 31},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 31},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0, .external_lex_state = 9},
  [448] = {.lex_state = 0, .external_lex_state = 5},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 31},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 31},
  [453] = {.lex_state = 0, .external_lex_state = 5},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__quoted_template_start = 1,
  ts_external_token__quoted_template_end = 2,
  ts_external_token__template_literal_chunk = 3,
  ts_external_token__template_interpolation_start = 4,
  ts_external_token__template_interpolation_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__quoted_template_start] = sym__quoted_template_start,
  [ts_external_token__quoted_template_end] = sym__quoted_template_end,
  [ts_external_token__template_literal_chunk] = sym__template_literal_chunk,
  [ts_external_token__template_interpolation_start] = sym__template_interpolation_start,
  [ts_external_token__template_interpolation_end] = sym__template_interpolation_end,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__quoted_template_start] = true,
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
    [ts_external_token__template_interpolation_end] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__quoted_template_start] = true,
  },
  [4] = {
    [ts_external_token__quoted_template_start] = true,
  },
  [5] = {
    [ts_external_token__template_interpolation_end] = true,
  },
  [6] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
    [ts_external_token__template_interpolation_start] = true,
  },
  [7] = {
    [ts_external_token__template_literal_chunk] = true,
  },
  [8] = {
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [9] = {
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
    [sym_numeric_lit] = ACTIONS(1),
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
    [sym__newline] = ACTIONS(1),
    [sym__quoted_template_start] = ACTIONS(1),
    [sym__quoted_template_end] = ACTIONS(1),
    [sym__template_literal_chunk] = ACTIONS(1),
    [sym__template_interpolation_start] = ACTIONS(1),
    [sym__template_interpolation_end] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(455),
    [sym_body] = STATE(454),
    [sym_attribute] = STATE(258),
    [sym_block] = STATE(258),
    [sym_one_line_block] = STATE(258),
    [sym__newlines] = STATE(258),
    [aux_sym_body_repeat1] = STATE(258),
    [aux_sym__newlines_repeat1] = STATE(285),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(16), 1,
      sym__newlines,
    STATE(82), 1,
      sym_for_intro,
    STATE(179), 1,
      sym_quoted_template,
    STATE(238), 1,
      sym__object_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(290), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(335), 1,
      sym__object_elems,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [101] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(12), 1,
      sym__newlines,
    STATE(72), 1,
      sym_for_intro,
    STATE(179), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym__object_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(290), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(316), 1,
      sym__object_elems,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [202] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(13), 1,
      sym__newlines,
    STATE(42), 1,
      sym_for_intro,
    STATE(150), 1,
      sym__object_end,
    STATE(179), 1,
      sym_quoted_template,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(290), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(343), 1,
      sym__object_elems,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [303] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(22), 1,
      sym__newlines,
    STATE(50), 1,
      sym_for_intro,
    STATE(176), 1,
      sym_quoted_template,
    STATE(235), 1,
      sym__tuple_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(275), 1,
      sym_expression,
    STATE(336), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [401] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(18), 1,
      sym__newlines,
    STATE(75), 1,
      sym_for_intro,
    STATE(176), 1,
      sym_quoted_template,
    STATE(191), 1,
      sym__tuple_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(275), 1,
      sym_expression,
    STATE(321), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [499] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(20), 1,
      sym__newlines,
    STATE(74), 1,
      sym_for_intro,
    STATE(148), 1,
      sym__tuple_end,
    STATE(176), 1,
      sym_quoted_template,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(275), 1,
      sym_expression,
    STATE(339), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [597] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym__newline,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym__function_call_end,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(305), 1,
      sym_expression,
    STATE(327), 1,
      sym_function_arguments,
    STATE(403), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [689] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(237), 1,
      sym__function_call_end,
    STATE(269), 1,
      sym_conditional,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(305), 1,
      sym_expression,
    STATE(334), 1,
      sym_function_arguments,
    STATE(417), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [781] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(188), 1,
      sym__function_call_end,
    STATE(269), 1,
      sym_conditional,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(305), 1,
      sym_expression,
    STATE(314), 1,
      sym_function_arguments,
    STATE(393), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [873] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym__newline,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(27), 1,
      sym__newlines,
    STATE(179), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [962] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(84), 1,
      sym_for_intro,
    STATE(179), 1,
      sym_quoted_template,
    STATE(182), 1,
      sym__object_end,
    STATE(299), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1051] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(78), 1,
      sym_for_intro,
    STATE(164), 1,
      sym__object_end,
    STATE(179), 1,
      sym_quoted_template,
    STATE(299), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1140] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(25), 1,
      sym__newlines,
    STATE(179), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1229] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(29), 1,
      sym__newlines,
    STATE(179), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1318] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(68), 1,
      sym_for_intro,
    STATE(179), 1,
      sym_quoted_template,
    STATE(224), 1,
      sym__object_end,
    STATE(299), 1,
      sym_object_elem,
    STATE(306), 1,
      sym_conditional,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1407] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(40), 1,
      sym__newlines,
    STATE(179), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1493] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(73), 1,
      sym_for_intro,
    STATE(176), 1,
      sym_quoted_template,
    STATE(183), 1,
      sym__tuple_end,
    STATE(267), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1579] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(35), 1,
      sym__newlines,
    STATE(176), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(356), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1665] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(81), 1,
      sym_for_intro,
    STATE(168), 1,
      sym__tuple_end,
    STATE(176), 1,
      sym_quoted_template,
    STATE(267), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1751] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(31), 1,
      sym__newlines,
    STATE(176), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(356), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1837] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(48), 1,
      sym_for_intro,
    STATE(176), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym__tuple_end,
    STATE(267), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1923] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(37), 1,
      sym__newlines,
    STATE(176), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(356), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2009] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2090] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(371), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(69), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2171] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(79), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2252] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(371), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(79), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2333] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(69), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2414] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(371), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(95), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2495] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      sym__newline,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(65), 1,
      sym__newlines,
    STATE(176), 1,
      sym_quoted_template,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(269), 1,
      sym_conditional,
    STATE(356), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2578] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(346), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(93), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2656] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(304), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(97), 2,
      sym__newline,
      anon_sym_RPAREN,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2734] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym__newline,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(342), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2814] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(342), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2894] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(346), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(105), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2972] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(342), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3052] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(346), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3130] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(366), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3207] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    ACTIONS(101), 1,
      sym__newline,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(342), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3284] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(371), 1,
      sym_object_elem,
    STATE(380), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3361] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_strip_marker,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    STATE(362), 1,
      sym_conditional,
    STATE(365), 1,
      sym_expression,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(127), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3438] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(387), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3512] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 14,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [3568] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(430), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3642] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(329), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3716] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(261), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3790] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(260), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3864] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(281), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3938] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(301), 1,
      sym_expression,
    STATE(306), 1,
      sym_conditional,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4012] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(271), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4086] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(423), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4160] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(424), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4234] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(434), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(145), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [4354] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(402), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4428] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(264), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4502] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(401), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4576] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(263), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4650] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(437), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4724] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(420), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4798] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_DOT_STAR,
    ACTIONS(155), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(161), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(157), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(147), 8,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [4866] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(262), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4940] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(351), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5014] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(398), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5088] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(346), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5162] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(354), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5236] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(438), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5310] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(407), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5384] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(425), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5458] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(265), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5532] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(270), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5606] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(427), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5680] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5754] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(268), 1,
      sym_expression,
    STATE(269), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5828] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(279), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5902] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    STATE(362), 1,
      sym_conditional,
    STATE(376), 1,
      sym_expression,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(127), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5976] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(309), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6050] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(382), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6124] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(302), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6198] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(358), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6272] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_conditional,
    STATE(280), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(61), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6346] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(412), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6420] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    STATE(362), 1,
      sym_conditional,
    STATE(377), 1,
      sym_expression,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(127), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6494] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    STATE(306), 1,
      sym_conditional,
    STATE(422), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6568] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(157), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 12,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6626] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(157), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 11,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [6686] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 18,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6782] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(135), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(141), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(146), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 16,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [6834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6878] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(133), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6946] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(100), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7014] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(114), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7082] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7132] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(116), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7200] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(94), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7268] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(86), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7336] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(90), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7404] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(120), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7472] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(131), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [7530] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(135), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_DOT,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(177), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [7644] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(85), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(187), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [7758] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(89), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(145), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7870] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(131), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7938] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(130), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8006] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(129), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8074] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(43), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8142] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_DOT_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(147), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
  [8210] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(128), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8278] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeric_lit,
    ACTIONS(119), 1,
      sym_null_lit,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym__quoted_template_start,
    STATE(2), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(220), 1,
      sym_quoted_template,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(123), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(222), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(226), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(227), 2,
      sym_tuple,
      sym_object,
    STATE(245), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(134), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8346] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(131), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8402] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_numeric_lit,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(179), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(198), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(200), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 2,
      sym_tuple,
      sym_object,
    STATE(204), 2,
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
  [8470] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(131), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 11,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8524] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_DOT,
    STATE(143), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(205), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(104), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [8570] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(54), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8638] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8706] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(192), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(194), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 15,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8754] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      sym_null_lit,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(176), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(142), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(154), 2,
      sym_tuple,
      sym_object,
    STATE(166), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(169), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(88), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [8822] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_DOT,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(205), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8866] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_DOT,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(124), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_DOT,
    STATE(193), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(124), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(132), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [8993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__function_call_start,
    ACTIONS(223), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9032] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      anon_sym_DOT_STAR,
    ACTIONS(231), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(245), 1,
      anon_sym_AMP_AMP,
    ACTIONS(247), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(233), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(239), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(243), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(147), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [9095] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(245), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(233), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(239), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(243), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [9150] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(233), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(239), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(243), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [9203] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(131), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(233), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(239), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(129), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [9254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(233), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 11,
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
  [9301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(136), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(251), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 15,
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
  [9381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(145), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 15,
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
  [9422] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(235), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(234), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(229), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(131), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
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
  [9467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(136), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(255), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9605] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(159), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(187), 15,
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
  [9646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [9976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10240] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(159), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(177), 15,
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
  [10281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__function_call_start,
    ACTIONS(223), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(170), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(251), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DOT,
    STATE(170), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(255), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(165), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10726] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(217), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(205), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(140), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(203), 15,
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
  [10767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 20,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [10899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(332), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(364), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(280), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(328), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(276), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(340), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 17,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(213), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(251), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 15,
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
  [11987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOT,
    STATE(213), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(255), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 15,
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
  [12021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__function_call_start,
    ACTIONS(223), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 15,
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
  [12055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(212), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 15,
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
  [12089] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12117] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 15,
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
  [12173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 15,
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
  [12201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(401), 15,
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
  [12229] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 15,
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
  [12285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 15,
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
  [12313] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(354), 15,
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
  [12369] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12397] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12425] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12453] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12481] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(397), 15,
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
  [12537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 15,
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
  [12565] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12593] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12621] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12649] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 15,
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
  [12705] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12733] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12761] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12789] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12817] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12845] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12873] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 15,
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
  [12929] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12957] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [12985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(350), 15,
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
  [13013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 15,
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
  [13041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(418), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
    ACTIONS(416), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(425), 5,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
      anon_sym_for,
    ACTIONS(423), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(418), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(416), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(425), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(423), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13151] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(308), 1,
      sym__block_end,
    STATE(415), 1,
      sym_body,
    STATE(258), 5,
      sym_attribute,
      sym_block,
      sym_one_line_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [13180] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(311), 1,
      sym__block_end,
    STATE(441), 1,
      sym_body,
    STATE(258), 5,
      sym_attribute,
      sym_block,
      sym_one_line_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [13209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(442), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(446), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [13247] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(259), 5,
      sym_attribute,
      sym_block,
      sym_one_line_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [13271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(259), 5,
      sym_attribute,
      sym_block,
      sym_one_line_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [13295] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(464), 1,
      sym_ellipsis,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(243), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(320), 1,
      sym_for_cond,
    STATE(400), 1,
      sym__newlines,
  [13326] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      sym_ellipsis,
    STATE(216), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(325), 1,
      sym_for_cond,
    STATE(405), 1,
      sym__newlines,
  [13357] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      sym_ellipsis,
    STATE(155), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(338), 1,
      sym_for_cond,
    STATE(404), 1,
      sym__newlines,
  [13388] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      sym_ellipsis,
    STATE(199), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(322), 1,
      sym_for_cond,
    STATE(440), 1,
      sym__newlines,
  [13419] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      sym_ellipsis,
    STATE(151), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(324), 1,
      sym_for_cond,
    STATE(443), 1,
      sym__newlines,
  [13450] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      sym_ellipsis,
    STATE(206), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(317), 1,
      sym_for_cond,
    STATE(419), 1,
      sym__newlines,
  [13481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(330), 1,
      sym_for_cond,
    STATE(383), 1,
      sym__newlines,
  [13509] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      sym__comma,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(295), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(413), 1,
      sym__newlines,
  [13537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(333), 1,
      sym_for_cond,
    STATE(416), 1,
      sym__newlines,
  [13565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 8,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 8,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [13593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(315), 1,
      sym_for_cond,
    STATE(386), 1,
      sym__newlines,
  [13621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__quoted_template_end,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(373), 1,
      sym_template_literal,
    STATE(274), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13645] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    ACTIONS(504), 1,
      sym__quoted_template_end,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(369), 1,
      sym_template_literal,
    STATE(277), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13669] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    ACTIONS(506), 1,
      sym__quoted_template_end,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(278), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13691] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__comma,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(298), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(394), 1,
      sym__newlines,
  [13719] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    ACTIONS(512), 1,
      sym__quoted_template_end,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(368), 1,
      sym_template_literal,
    STATE(282), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13743] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    ACTIONS(514), 1,
      sym__quoted_template_end,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(278), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13765] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym__quoted_template_end,
    ACTIONS(518), 1,
      sym__template_literal_chunk,
    ACTIONS(521), 1,
      sym__template_interpolation_start,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(278), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13787] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(331), 1,
      sym_for_cond,
    STATE(406), 1,
      sym__newlines,
  [13815] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(337), 1,
      sym_for_cond,
    STATE(426), 1,
      sym__newlines,
  [13843] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(319), 1,
      sym_for_cond,
    STATE(392), 1,
      sym__newlines,
  [13871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__template_literal_chunk,
    ACTIONS(502), 1,
      sym__template_interpolation_start,
    ACTIONS(530), 1,
      sym__quoted_template_end,
    STATE(345), 1,
      aux_sym_template_literal_repeat1,
    STATE(278), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [13893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(28), 1,
      sym__newlines,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(289), 1,
      aux_sym__object_elems_repeat1,
  [13918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym__quoted_template_start,
    STATE(255), 1,
      sym__block_start,
    STATE(312), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [13941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__newline,
    STATE(287), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(423), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13958] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym__comma,
    STATE(26), 1,
      sym__newlines,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(289), 1,
      aux_sym__object_elems_repeat1,
  [13983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__newline,
    STATE(287), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym__quoted_template_start,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(255), 1,
      sym__block_start,
    STATE(312), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      sym__newline,
    STATE(17), 1,
      sym__comma,
    STATE(38), 1,
      sym__newlines,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(289), 1,
      aux_sym__object_elems_repeat1,
  [14048] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      sym__comma,
    STATE(24), 1,
      sym__newlines,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(283), 1,
      aux_sym__object_elems_repeat1,
  [14073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(326), 1,
      sym_for_cond,
    STATE(439), 1,
      sym__newlines,
  [14098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym__quoted_template_start,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(255), 1,
      sym__block_start,
    STATE(312), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(322), 1,
      sym_for_cond,
    STATE(440), 1,
      sym__newlines,
  [14146] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(338), 1,
      sym_for_cond,
    STATE(404), 1,
      sym__newlines,
  [14171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym__comma,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(332), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(429), 1,
      sym__newlines,
  [14196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(328), 1,
      sym_for_cond,
    STATE(408), 1,
      sym__newlines,
  [14221] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(325), 1,
      sym_for_cond,
    STATE(405), 1,
      sym__newlines,
  [14246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      sym__comma,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(332), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(413), 1,
      sym__newlines,
  [14271] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(28), 1,
      sym__newlines,
    STATE(253), 1,
      aux_sym__newlines_repeat1,
    STATE(286), 1,
      aux_sym__object_elems_repeat1,
  [14296] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(462), 1,
      anon_sym_if,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(318), 1,
      sym_for_cond,
    STATE(384), 1,
      sym__newlines,
  [14321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(494), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
  [14335] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(357), 1,
      sym__newlines,
    STATE(374), 1,
      sym__block_end,
  [14357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(352), 1,
      sym__newlines,
    ACTIONS(577), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      sym_ellipsis,
    ACTIONS(583), 1,
      sym__newline,
    STATE(340), 1,
      aux_sym_function_arguments_repeat1,
  [14395] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      sym_ellipsis,
    ACTIONS(591), 1,
      sym__newline,
    STATE(313), 1,
      aux_sym_function_arguments_repeat1,
  [14417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(147), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
  [14431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(350), 1,
      sym__newlines,
    ACTIONS(593), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(347), 1,
      sym__newlines,
    ACTIONS(595), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14463] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(357), 1,
      sym__newlines,
    STATE(363), 1,
      sym__block_end,
  [14485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(348), 1,
      sym__newlines,
    ACTIONS(595), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(360), 1,
      sym__newlines,
    ACTIONS(599), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [14517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__quoted_template_start,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(254), 1,
      sym__block_start,
    STATE(323), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      sym_ellipsis,
    ACTIONS(583), 1,
      sym__newline,
    STATE(341), 1,
      aux_sym_function_arguments_repeat1,
  [14556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym__function_call_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(442), 1,
      sym__newlines,
  [14575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(392), 1,
      sym__newlines,
  [14594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(414), 1,
      sym__newlines,
  [14613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(440), 1,
      sym__newlines,
  [14632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(397), 1,
      sym__newlines,
  [14651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(396), 1,
      sym__newlines,
  [14670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(405), 1,
      sym__newlines,
  [14689] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(409), 1,
      sym__newlines,
  [14708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(439), 1,
      sym__newlines,
  [14727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    ACTIONS(613), 1,
      sym_identifier,
    ACTIONS(616), 1,
      sym__quoted_template_start,
    STATE(323), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [14744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(404), 1,
      sym__newlines,
  [14763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(408), 1,
      sym__newlines,
  [14782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(436), 1,
      sym__newlines,
  [14801] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym__function_call_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(410), 1,
      sym__newlines,
  [14820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(411), 1,
      sym__newlines,
  [14839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(625), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [14852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(385), 1,
      sym__newlines,
  [14871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(383), 1,
      sym__newlines,
  [14890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym__comma,
    STATE(332), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(632), 2,
      sym__newline,
      anon_sym_RBRACK,
  [14907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(426), 1,
      sym__newlines,
  [14926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__function_call_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(390), 1,
      sym__newlines,
  [14945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(391), 1,
      sym__newlines,
  [14964] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(399), 1,
      sym__newlines,
  [14983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(433), 1,
      sym__newlines,
  [15002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(384), 1,
      sym__newlines,
  [15021] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym__tuple_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(389), 1,
      sym__newlines,
  [15040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      sym_ellipsis,
    ACTIONS(642), 1,
      sym__newline,
    STATE(341), 1,
      aux_sym_function_arguments_repeat1,
  [15059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(644), 3,
      sym__newline,
      anon_sym_RPAREN,
      sym_ellipsis,
  [15074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(644), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [15087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym__object_end,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(388), 1,
      sym__newlines,
  [15106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [15118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym__template_literal_chunk,
    STATE(361), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(651), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [15132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(655), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [15176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(357), 1,
      sym__newlines,
  [15202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(664), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [15234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [15246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(632), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_QMARK,
    ACTIONS(668), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [15300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__template_literal_chunk,
    STATE(361), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(675), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [15314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [15323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(353), 1,
      sym__newlines,
  [15336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__template_literal_chunk,
    STATE(378), 1,
      aux_sym_template_literal_repeat1,
    STATE(447), 1,
      sym_template_literal,
  [15349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_QMARK,
    ACTIONS(684), 1,
      sym_strip_marker,
    ACTIONS(686), 1,
      sym__template_interpolation_end,
  [15362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__quoted_template_end,
    ACTIONS(693), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym__quoted_template_end,
    ACTIONS(693), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__quoted_template_end,
    ACTIONS(698), 1,
      sym__template_literal_chunk,
    STATE(370), 1,
      aux_sym_template_literal_repeat1,
  [15415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [15424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [15433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym__quoted_template_end,
    ACTIONS(693), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym__newlines_repeat1,
    STATE(359), 1,
      sym__newlines,
  [15457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [15475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_QMARK,
    ACTIONS(708), 1,
      sym_strip_marker,
    ACTIONS(710), 1,
      sym__template_interpolation_end,
  [15488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__quoted_template_end,
    ACTIONS(712), 1,
      sym__template_literal_chunk,
    STATE(370), 1,
      aux_sym_template_literal_repeat1,
  [15501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [15510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(716), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [15521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__newline,
      anon_sym_RPAREN,
  [15529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(720), 1,
      anon_sym_EQ_GT,
  [15539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym__tuple_end,
  [15549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym__object_end,
  [15559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym__tuple_end,
  [15569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym__tuple_end,
  [15579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(724), 1,
      anon_sym_EQ_GT,
  [15589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym__object_end,
  [15599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym__tuple_end,
  [15609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym__function_call_end,
  [15619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym__object_end,
  [15629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym__tuple_end,
  [15639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym__function_call_end,
  [15649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__newline,
      anon_sym_RBRACK,
  [15657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_in,
  [15667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym__tuple_end,
  [15677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym__object_end,
  [15687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(742), 1,
      anon_sym_COLON,
  [15697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym__tuple_end,
  [15707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym__object_end,
  [15717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
  [15727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(748), 1,
      anon_sym_COLON,
  [15737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym__function_call_end,
  [15747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym__object_end,
  [15757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym__object_end,
  [15767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym__tuple_end,
  [15777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(750), 1,
      anon_sym_EQ_GT,
  [15787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym__object_end,
  [15797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      sym__tuple_end,
  [15807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym__function_call_end,
  [15817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym__object_end,
  [15827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(758), 1,
      anon_sym_EQ_GT,
  [15837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__newline,
      anon_sym_RBRACK,
  [15845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym__object_end,
  [15855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      sym__block_end,
  [15865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym__tuple_end,
  [15875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__function_call_end,
  [15885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      sym__block_end,
  [15895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym__object_end,
  [15905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
  [15915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_identifier,
    ACTIONS(770), 1,
      aux_sym_legacy_index_token1,
  [15925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(772), 1,
      anon_sym_EQ_GT,
  [15935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(774), 1,
      anon_sym_COLON,
  [15945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
  [15955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(778), 1,
      anon_sym_COLON,
  [15965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym__tuple_end,
  [15975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(780), 1,
      anon_sym_EQ_GT,
  [15985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_identifier,
    ACTIONS(784), 1,
      aux_sym_legacy_index_token1,
  [15995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__newline,
      anon_sym_RBRACK,
  [16003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [16013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_RPAREN,
  [16021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__newline,
      anon_sym_RPAREN,
  [16029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym__tuple_end,
  [16039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [16049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      aux_sym_legacy_index_token1,
  [16059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym__object_end,
  [16069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(798), 1,
      anon_sym_COLON,
  [16079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_QMARK,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
  [16089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(210), 1,
      sym__object_end,
  [16099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
  [16109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(310), 1,
      sym__block_end,
  [16119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym__function_call_end,
  [16129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym__object_end,
  [16139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_RPAREN,
  [16147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
  [16154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_in,
  [16161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__quoted_template_end,
  [16168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__template_interpolation_end,
  [16175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      sym_identifier,
  [16182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identifier,
  [16189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_identifier,
  [16196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      sym_identifier,
  [16203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym__template_interpolation_end,
  [16210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
  [16217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 202,
  [SMALL_STATE(5)] = 303,
  [SMALL_STATE(6)] = 401,
  [SMALL_STATE(7)] = 499,
  [SMALL_STATE(8)] = 597,
  [SMALL_STATE(9)] = 689,
  [SMALL_STATE(10)] = 781,
  [SMALL_STATE(11)] = 873,
  [SMALL_STATE(12)] = 962,
  [SMALL_STATE(13)] = 1051,
  [SMALL_STATE(14)] = 1140,
  [SMALL_STATE(15)] = 1229,
  [SMALL_STATE(16)] = 1318,
  [SMALL_STATE(17)] = 1407,
  [SMALL_STATE(18)] = 1493,
  [SMALL_STATE(19)] = 1579,
  [SMALL_STATE(20)] = 1665,
  [SMALL_STATE(21)] = 1751,
  [SMALL_STATE(22)] = 1837,
  [SMALL_STATE(23)] = 1923,
  [SMALL_STATE(24)] = 2009,
  [SMALL_STATE(25)] = 2090,
  [SMALL_STATE(26)] = 2171,
  [SMALL_STATE(27)] = 2252,
  [SMALL_STATE(28)] = 2333,
  [SMALL_STATE(29)] = 2414,
  [SMALL_STATE(30)] = 2495,
  [SMALL_STATE(31)] = 2578,
  [SMALL_STATE(32)] = 2656,
  [SMALL_STATE(33)] = 2734,
  [SMALL_STATE(34)] = 2814,
  [SMALL_STATE(35)] = 2894,
  [SMALL_STATE(36)] = 2972,
  [SMALL_STATE(37)] = 3052,
  [SMALL_STATE(38)] = 3130,
  [SMALL_STATE(39)] = 3207,
  [SMALL_STATE(40)] = 3284,
  [SMALL_STATE(41)] = 3361,
  [SMALL_STATE(42)] = 3438,
  [SMALL_STATE(43)] = 3512,
  [SMALL_STATE(44)] = 3568,
  [SMALL_STATE(45)] = 3642,
  [SMALL_STATE(46)] = 3716,
  [SMALL_STATE(47)] = 3790,
  [SMALL_STATE(48)] = 3864,
  [SMALL_STATE(49)] = 3938,
  [SMALL_STATE(50)] = 4012,
  [SMALL_STATE(51)] = 4086,
  [SMALL_STATE(52)] = 4160,
  [SMALL_STATE(53)] = 4234,
  [SMALL_STATE(54)] = 4308,
  [SMALL_STATE(55)] = 4354,
  [SMALL_STATE(56)] = 4428,
  [SMALL_STATE(57)] = 4502,
  [SMALL_STATE(58)] = 4576,
  [SMALL_STATE(59)] = 4650,
  [SMALL_STATE(60)] = 4724,
  [SMALL_STATE(61)] = 4798,
  [SMALL_STATE(62)] = 4866,
  [SMALL_STATE(63)] = 4940,
  [SMALL_STATE(64)] = 5014,
  [SMALL_STATE(65)] = 5088,
  [SMALL_STATE(66)] = 5162,
  [SMALL_STATE(67)] = 5236,
  [SMALL_STATE(68)] = 5310,
  [SMALL_STATE(69)] = 5384,
  [SMALL_STATE(70)] = 5458,
  [SMALL_STATE(71)] = 5532,
  [SMALL_STATE(72)] = 5606,
  [SMALL_STATE(73)] = 5680,
  [SMALL_STATE(74)] = 5754,
  [SMALL_STATE(75)] = 5828,
  [SMALL_STATE(76)] = 5902,
  [SMALL_STATE(77)] = 5976,
  [SMALL_STATE(78)] = 6050,
  [SMALL_STATE(79)] = 6124,
  [SMALL_STATE(80)] = 6198,
  [SMALL_STATE(81)] = 6272,
  [SMALL_STATE(82)] = 6346,
  [SMALL_STATE(83)] = 6420,
  [SMALL_STATE(84)] = 6494,
  [SMALL_STATE(85)] = 6568,
  [SMALL_STATE(86)] = 6626,
  [SMALL_STATE(87)] = 6686,
  [SMALL_STATE(88)] = 6736,
  [SMALL_STATE(89)] = 6782,
  [SMALL_STATE(90)] = 6834,
  [SMALL_STATE(91)] = 6878,
  [SMALL_STATE(92)] = 6946,
  [SMALL_STATE(93)] = 7014,
  [SMALL_STATE(94)] = 7082,
  [SMALL_STATE(95)] = 7132,
  [SMALL_STATE(96)] = 7200,
  [SMALL_STATE(97)] = 7268,
  [SMALL_STATE(98)] = 7336,
  [SMALL_STATE(99)] = 7404,
  [SMALL_STATE(100)] = 7472,
  [SMALL_STATE(101)] = 7530,
  [SMALL_STATE(102)] = 7598,
  [SMALL_STATE(103)] = 7644,
  [SMALL_STATE(104)] = 7712,
  [SMALL_STATE(105)] = 7758,
  [SMALL_STATE(106)] = 7826,
  [SMALL_STATE(107)] = 7870,
  [SMALL_STATE(108)] = 7938,
  [SMALL_STATE(109)] = 8006,
  [SMALL_STATE(110)] = 8074,
  [SMALL_STATE(111)] = 8142,
  [SMALL_STATE(112)] = 8210,
  [SMALL_STATE(113)] = 8278,
  [SMALL_STATE(114)] = 8346,
  [SMALL_STATE(115)] = 8402,
  [SMALL_STATE(116)] = 8470,
  [SMALL_STATE(117)] = 8524,
  [SMALL_STATE(118)] = 8570,
  [SMALL_STATE(119)] = 8638,
  [SMALL_STATE(120)] = 8706,
  [SMALL_STATE(121)] = 8754,
  [SMALL_STATE(122)] = 8822,
  [SMALL_STATE(123)] = 8866,
  [SMALL_STATE(124)] = 8910,
  [SMALL_STATE(125)] = 8954,
  [SMALL_STATE(126)] = 8993,
  [SMALL_STATE(127)] = 9032,
  [SMALL_STATE(128)] = 9095,
  [SMALL_STATE(129)] = 9150,
  [SMALL_STATE(130)] = 9203,
  [SMALL_STATE(131)] = 9254,
  [SMALL_STATE(132)] = 9301,
  [SMALL_STATE(133)] = 9340,
  [SMALL_STATE(134)] = 9381,
  [SMALL_STATE(135)] = 9422,
  [SMALL_STATE(136)] = 9467,
  [SMALL_STATE(137)] = 9506,
  [SMALL_STATE(138)] = 9539,
  [SMALL_STATE(139)] = 9572,
  [SMALL_STATE(140)] = 9605,
  [SMALL_STATE(141)] = 9646,
  [SMALL_STATE(142)] = 9679,
  [SMALL_STATE(143)] = 9712,
  [SMALL_STATE(144)] = 9745,
  [SMALL_STATE(145)] = 9778,
  [SMALL_STATE(146)] = 9811,
  [SMALL_STATE(147)] = 9844,
  [SMALL_STATE(148)] = 9877,
  [SMALL_STATE(149)] = 9910,
  [SMALL_STATE(150)] = 9943,
  [SMALL_STATE(151)] = 9976,
  [SMALL_STATE(152)] = 10009,
  [SMALL_STATE(153)] = 10042,
  [SMALL_STATE(154)] = 10075,
  [SMALL_STATE(155)] = 10108,
  [SMALL_STATE(156)] = 10141,
  [SMALL_STATE(157)] = 10174,
  [SMALL_STATE(158)] = 10207,
  [SMALL_STATE(159)] = 10240,
  [SMALL_STATE(160)] = 10281,
  [SMALL_STATE(161)] = 10314,
  [SMALL_STATE(162)] = 10347,
  [SMALL_STATE(163)] = 10384,
  [SMALL_STATE(164)] = 10417,
  [SMALL_STATE(165)] = 10450,
  [SMALL_STATE(166)] = 10487,
  [SMALL_STATE(167)] = 10520,
  [SMALL_STATE(168)] = 10553,
  [SMALL_STATE(169)] = 10586,
  [SMALL_STATE(170)] = 10619,
  [SMALL_STATE(171)] = 10656,
  [SMALL_STATE(172)] = 10693,
  [SMALL_STATE(173)] = 10726,
  [SMALL_STATE(174)] = 10767,
  [SMALL_STATE(175)] = 10800,
  [SMALL_STATE(176)] = 10833,
  [SMALL_STATE(177)] = 10866,
  [SMALL_STATE(178)] = 10899,
  [SMALL_STATE(179)] = 10930,
  [SMALL_STATE(180)] = 10961,
  [SMALL_STATE(181)] = 10992,
  [SMALL_STATE(182)] = 11023,
  [SMALL_STATE(183)] = 11054,
  [SMALL_STATE(184)] = 11085,
  [SMALL_STATE(185)] = 11116,
  [SMALL_STATE(186)] = 11147,
  [SMALL_STATE(187)] = 11178,
  [SMALL_STATE(188)] = 11209,
  [SMALL_STATE(189)] = 11240,
  [SMALL_STATE(190)] = 11271,
  [SMALL_STATE(191)] = 11302,
  [SMALL_STATE(192)] = 11333,
  [SMALL_STATE(193)] = 11364,
  [SMALL_STATE(194)] = 11395,
  [SMALL_STATE(195)] = 11426,
  [SMALL_STATE(196)] = 11457,
  [SMALL_STATE(197)] = 11488,
  [SMALL_STATE(198)] = 11519,
  [SMALL_STATE(199)] = 11550,
  [SMALL_STATE(200)] = 11581,
  [SMALL_STATE(201)] = 11612,
  [SMALL_STATE(202)] = 11643,
  [SMALL_STATE(203)] = 11674,
  [SMALL_STATE(204)] = 11705,
  [SMALL_STATE(205)] = 11736,
  [SMALL_STATE(206)] = 11767,
  [SMALL_STATE(207)] = 11798,
  [SMALL_STATE(208)] = 11829,
  [SMALL_STATE(209)] = 11860,
  [SMALL_STATE(210)] = 11891,
  [SMALL_STATE(211)] = 11922,
  [SMALL_STATE(212)] = 11953,
  [SMALL_STATE(213)] = 11987,
  [SMALL_STATE(214)] = 12021,
  [SMALL_STATE(215)] = 12055,
  [SMALL_STATE(216)] = 12089,
  [SMALL_STATE(217)] = 12117,
  [SMALL_STATE(218)] = 12145,
  [SMALL_STATE(219)] = 12173,
  [SMALL_STATE(220)] = 12201,
  [SMALL_STATE(221)] = 12229,
  [SMALL_STATE(222)] = 12257,
  [SMALL_STATE(223)] = 12285,
  [SMALL_STATE(224)] = 12313,
  [SMALL_STATE(225)] = 12341,
  [SMALL_STATE(226)] = 12369,
  [SMALL_STATE(227)] = 12397,
  [SMALL_STATE(228)] = 12425,
  [SMALL_STATE(229)] = 12453,
  [SMALL_STATE(230)] = 12481,
  [SMALL_STATE(231)] = 12509,
  [SMALL_STATE(232)] = 12537,
  [SMALL_STATE(233)] = 12565,
  [SMALL_STATE(234)] = 12593,
  [SMALL_STATE(235)] = 12621,
  [SMALL_STATE(236)] = 12649,
  [SMALL_STATE(237)] = 12677,
  [SMALL_STATE(238)] = 12705,
  [SMALL_STATE(239)] = 12733,
  [SMALL_STATE(240)] = 12761,
  [SMALL_STATE(241)] = 12789,
  [SMALL_STATE(242)] = 12817,
  [SMALL_STATE(243)] = 12845,
  [SMALL_STATE(244)] = 12873,
  [SMALL_STATE(245)] = 12901,
  [SMALL_STATE(246)] = 12929,
  [SMALL_STATE(247)] = 12957,
  [SMALL_STATE(248)] = 12985,
  [SMALL_STATE(249)] = 13013,
  [SMALL_STATE(250)] = 13041,
  [SMALL_STATE(251)] = 13069,
  [SMALL_STATE(252)] = 13097,
  [SMALL_STATE(253)] = 13124,
  [SMALL_STATE(254)] = 13151,
  [SMALL_STATE(255)] = 13180,
  [SMALL_STATE(256)] = 13209,
  [SMALL_STATE(257)] = 13228,
  [SMALL_STATE(258)] = 13247,
  [SMALL_STATE(259)] = 13271,
  [SMALL_STATE(260)] = 13295,
  [SMALL_STATE(261)] = 13326,
  [SMALL_STATE(262)] = 13357,
  [SMALL_STATE(263)] = 13388,
  [SMALL_STATE(264)] = 13419,
  [SMALL_STATE(265)] = 13450,
  [SMALL_STATE(266)] = 13481,
  [SMALL_STATE(267)] = 13509,
  [SMALL_STATE(268)] = 13537,
  [SMALL_STATE(269)] = 13565,
  [SMALL_STATE(270)] = 13579,
  [SMALL_STATE(271)] = 13593,
  [SMALL_STATE(272)] = 13621,
  [SMALL_STATE(273)] = 13645,
  [SMALL_STATE(274)] = 13669,
  [SMALL_STATE(275)] = 13691,
  [SMALL_STATE(276)] = 13719,
  [SMALL_STATE(277)] = 13743,
  [SMALL_STATE(278)] = 13765,
  [SMALL_STATE(279)] = 13787,
  [SMALL_STATE(280)] = 13815,
  [SMALL_STATE(281)] = 13843,
  [SMALL_STATE(282)] = 13871,
  [SMALL_STATE(283)] = 13893,
  [SMALL_STATE(284)] = 13918,
  [SMALL_STATE(285)] = 13941,
  [SMALL_STATE(286)] = 13958,
  [SMALL_STATE(287)] = 13983,
  [SMALL_STATE(288)] = 14000,
  [SMALL_STATE(289)] = 14023,
  [SMALL_STATE(290)] = 14048,
  [SMALL_STATE(291)] = 14073,
  [SMALL_STATE(292)] = 14098,
  [SMALL_STATE(293)] = 14121,
  [SMALL_STATE(294)] = 14146,
  [SMALL_STATE(295)] = 14171,
  [SMALL_STATE(296)] = 14196,
  [SMALL_STATE(297)] = 14221,
  [SMALL_STATE(298)] = 14246,
  [SMALL_STATE(299)] = 14271,
  [SMALL_STATE(300)] = 14296,
  [SMALL_STATE(301)] = 14321,
  [SMALL_STATE(302)] = 14335,
  [SMALL_STATE(303)] = 14357,
  [SMALL_STATE(304)] = 14373,
  [SMALL_STATE(305)] = 14395,
  [SMALL_STATE(306)] = 14417,
  [SMALL_STATE(307)] = 14431,
  [SMALL_STATE(308)] = 14447,
  [SMALL_STATE(309)] = 14463,
  [SMALL_STATE(310)] = 14485,
  [SMALL_STATE(311)] = 14501,
  [SMALL_STATE(312)] = 14517,
  [SMALL_STATE(313)] = 14537,
  [SMALL_STATE(314)] = 14556,
  [SMALL_STATE(315)] = 14575,
  [SMALL_STATE(316)] = 14594,
  [SMALL_STATE(317)] = 14613,
  [SMALL_STATE(318)] = 14632,
  [SMALL_STATE(319)] = 14651,
  [SMALL_STATE(320)] = 14670,
  [SMALL_STATE(321)] = 14689,
  [SMALL_STATE(322)] = 14708,
  [SMALL_STATE(323)] = 14727,
  [SMALL_STATE(324)] = 14744,
  [SMALL_STATE(325)] = 14763,
  [SMALL_STATE(326)] = 14782,
  [SMALL_STATE(327)] = 14801,
  [SMALL_STATE(328)] = 14820,
  [SMALL_STATE(329)] = 14839,
  [SMALL_STATE(330)] = 14852,
  [SMALL_STATE(331)] = 14871,
  [SMALL_STATE(332)] = 14890,
  [SMALL_STATE(333)] = 14907,
  [SMALL_STATE(334)] = 14926,
  [SMALL_STATE(335)] = 14945,
  [SMALL_STATE(336)] = 14964,
  [SMALL_STATE(337)] = 14983,
  [SMALL_STATE(338)] = 15002,
  [SMALL_STATE(339)] = 15021,
  [SMALL_STATE(340)] = 15040,
  [SMALL_STATE(341)] = 15059,
  [SMALL_STATE(342)] = 15074,
  [SMALL_STATE(343)] = 15087,
  [SMALL_STATE(344)] = 15106,
  [SMALL_STATE(345)] = 15118,
  [SMALL_STATE(346)] = 15132,
  [SMALL_STATE(347)] = 15144,
  [SMALL_STATE(348)] = 15154,
  [SMALL_STATE(349)] = 15164,
  [SMALL_STATE(350)] = 15176,
  [SMALL_STATE(351)] = 15186,
  [SMALL_STATE(352)] = 15202,
  [SMALL_STATE(353)] = 15212,
  [SMALL_STATE(354)] = 15222,
  [SMALL_STATE(355)] = 15234,
  [SMALL_STATE(356)] = 15246,
  [SMALL_STATE(357)] = 15258,
  [SMALL_STATE(358)] = 15268,
  [SMALL_STATE(359)] = 15280,
  [SMALL_STATE(360)] = 15290,
  [SMALL_STATE(361)] = 15300,
  [SMALL_STATE(362)] = 15314,
  [SMALL_STATE(363)] = 15323,
  [SMALL_STATE(364)] = 15336,
  [SMALL_STATE(365)] = 15349,
  [SMALL_STATE(366)] = 15362,
  [SMALL_STATE(367)] = 15371,
  [SMALL_STATE(368)] = 15380,
  [SMALL_STATE(369)] = 15391,
  [SMALL_STATE(370)] = 15402,
  [SMALL_STATE(371)] = 15415,
  [SMALL_STATE(372)] = 15424,
  [SMALL_STATE(373)] = 15433,
  [SMALL_STATE(374)] = 15444,
  [SMALL_STATE(375)] = 15457,
  [SMALL_STATE(376)] = 15466,
  [SMALL_STATE(377)] = 15475,
  [SMALL_STATE(378)] = 15488,
  [SMALL_STATE(379)] = 15501,
  [SMALL_STATE(380)] = 15510,
  [SMALL_STATE(381)] = 15521,
  [SMALL_STATE(382)] = 15529,
  [SMALL_STATE(383)] = 15539,
  [SMALL_STATE(384)] = 15549,
  [SMALL_STATE(385)] = 15559,
  [SMALL_STATE(386)] = 15569,
  [SMALL_STATE(387)] = 15579,
  [SMALL_STATE(388)] = 15589,
  [SMALL_STATE(389)] = 15599,
  [SMALL_STATE(390)] = 15609,
  [SMALL_STATE(391)] = 15619,
  [SMALL_STATE(392)] = 15629,
  [SMALL_STATE(393)] = 15639,
  [SMALL_STATE(394)] = 15649,
  [SMALL_STATE(395)] = 15657,
  [SMALL_STATE(396)] = 15667,
  [SMALL_STATE(397)] = 15677,
  [SMALL_STATE(398)] = 15687,
  [SMALL_STATE(399)] = 15697,
  [SMALL_STATE(400)] = 15707,
  [SMALL_STATE(401)] = 15717,
  [SMALL_STATE(402)] = 15727,
  [SMALL_STATE(403)] = 15737,
  [SMALL_STATE(404)] = 15747,
  [SMALL_STATE(405)] = 15757,
  [SMALL_STATE(406)] = 15767,
  [SMALL_STATE(407)] = 15777,
  [SMALL_STATE(408)] = 15787,
  [SMALL_STATE(409)] = 15797,
  [SMALL_STATE(410)] = 15807,
  [SMALL_STATE(411)] = 15817,
  [SMALL_STATE(412)] = 15827,
  [SMALL_STATE(413)] = 15837,
  [SMALL_STATE(414)] = 15845,
  [SMALL_STATE(415)] = 15855,
  [SMALL_STATE(416)] = 15865,
  [SMALL_STATE(417)] = 15875,
  [SMALL_STATE(418)] = 15885,
  [SMALL_STATE(419)] = 15895,
  [SMALL_STATE(420)] = 15905,
  [SMALL_STATE(421)] = 15915,
  [SMALL_STATE(422)] = 15925,
  [SMALL_STATE(423)] = 15935,
  [SMALL_STATE(424)] = 15945,
  [SMALL_STATE(425)] = 15955,
  [SMALL_STATE(426)] = 15965,
  [SMALL_STATE(427)] = 15975,
  [SMALL_STATE(428)] = 15985,
  [SMALL_STATE(429)] = 15995,
  [SMALL_STATE(430)] = 16003,
  [SMALL_STATE(431)] = 16013,
  [SMALL_STATE(432)] = 16021,
  [SMALL_STATE(433)] = 16029,
  [SMALL_STATE(434)] = 16039,
  [SMALL_STATE(435)] = 16049,
  [SMALL_STATE(436)] = 16059,
  [SMALL_STATE(437)] = 16069,
  [SMALL_STATE(438)] = 16079,
  [SMALL_STATE(439)] = 16089,
  [SMALL_STATE(440)] = 16099,
  [SMALL_STATE(441)] = 16109,
  [SMALL_STATE(442)] = 16119,
  [SMALL_STATE(443)] = 16129,
  [SMALL_STATE(444)] = 16139,
  [SMALL_STATE(445)] = 16147,
  [SMALL_STATE(446)] = 16154,
  [SMALL_STATE(447)] = 16161,
  [SMALL_STATE(448)] = 16168,
  [SMALL_STATE(449)] = 16175,
  [SMALL_STATE(450)] = 16182,
  [SMALL_STATE(451)] = 16189,
  [SMALL_STATE(452)] = 16196,
  [SMALL_STATE(453)] = 16203,
  [SMALL_STATE(454)] = 16210,
  [SMALL_STATE(455)] = 16217,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(57),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(428),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(52),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(421),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(452),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 7),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 9),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 9),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(67),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(435),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 10),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 10),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(451),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(449),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(250),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newlines, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newlines, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(252),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(284),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(285),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(345),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(41),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(287),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(17),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(253),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(323),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(364),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(30),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(39),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 3),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_block, 5), REDUCE(sym_one_line_block, 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 8),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_line_block, 7),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_block, 4), REDUCE(sym_one_line_block, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(361),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(223),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(167),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(370),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 3),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(195),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 5),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [820] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
