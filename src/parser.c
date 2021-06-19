#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 382
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 6
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
  sym__block_start = 51,
  sym__block_end = 52,
  sym_expression = 53,
  sym__expr_term = 54,
  sym_literal_value = 55,
  sym_bool_lit = 56,
  sym_string_lit = 57,
  sym_collection_value = 58,
  sym__comma = 59,
  sym_tuple = 60,
  sym__tuple_start = 61,
  sym__tuple_end = 62,
  sym__tuple_elems = 63,
  sym_object = 64,
  sym__object_start = 65,
  sym__object_end = 66,
  sym__object_elems = 67,
  sym_object_elem = 68,
  sym_index = 69,
  sym_new_index = 70,
  sym_legacy_index = 71,
  sym_get_attr = 72,
  sym_splat = 73,
  sym_attr_splat = 74,
  sym_full_splat = 75,
  sym_for_expr = 76,
  sym_for_tuple_expr = 77,
  sym_for_object_expr = 78,
  sym_for_intro = 79,
  sym_for_cond = 80,
  sym_variable_expr = 81,
  sym_function_call = 82,
  sym__function_call_start = 83,
  sym__function_call_end = 84,
  sym_function_arguments = 85,
  sym_conditional = 86,
  sym_operation = 87,
  sym_unary_operation = 88,
  sym_binary_operation = 89,
  sym_template_expr = 90,
  sym_quoted_template = 91,
  sym_template_literal = 92,
  sym_template_interpolation = 93,
  sym_template_directive = 94,
  sym__newlines = 95,
  aux_sym_body_repeat1 = 96,
  aux_sym_block_repeat1 = 97,
  aux_sym__tuple_elems_repeat1 = 98,
  aux_sym__object_elems_repeat1 = 99,
  aux_sym_attr_splat_repeat1 = 100,
  aux_sym_full_splat_repeat1 = 101,
  aux_sym_function_arguments_repeat1 = 102,
  aux_sym_quoted_template_repeat1 = 103,
  aux_sym_template_literal_repeat1 = 104,
  aux_sym__newlines_repeat1 = 105,
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
      if (eof) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(1);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(47);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(47);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(47);
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(47);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(47);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(47);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(47);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(47);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(47);
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_legacy_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(47);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_strip_marker);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 29, .external_lex_state = 2},
  [2] = {.lex_state = 23, .external_lex_state = 3},
  [3] = {.lex_state = 23, .external_lex_state = 3},
  [4] = {.lex_state = 23, .external_lex_state = 3},
  [5] = {.lex_state = 23, .external_lex_state = 3},
  [6] = {.lex_state = 23, .external_lex_state = 3},
  [7] = {.lex_state = 23, .external_lex_state = 3},
  [8] = {.lex_state = 24, .external_lex_state = 3},
  [9] = {.lex_state = 24, .external_lex_state = 3},
  [10] = {.lex_state = 24, .external_lex_state = 3},
  [11] = {.lex_state = 24, .external_lex_state = 3},
  [12] = {.lex_state = 24, .external_lex_state = 3},
  [13] = {.lex_state = 24, .external_lex_state = 3},
  [14] = {.lex_state = 24, .external_lex_state = 3},
  [15] = {.lex_state = 24, .external_lex_state = 3},
  [16] = {.lex_state = 24, .external_lex_state = 3},
  [17] = {.lex_state = 24, .external_lex_state = 3},
  [18] = {.lex_state = 24, .external_lex_state = 3},
  [19] = {.lex_state = 24, .external_lex_state = 3},
  [20] = {.lex_state = 24, .external_lex_state = 4},
  [21] = {.lex_state = 24, .external_lex_state = 4},
  [22] = {.lex_state = 24, .external_lex_state = 3},
  [23] = {.lex_state = 24, .external_lex_state = 4},
  [24] = {.lex_state = 24, .external_lex_state = 3},
  [25] = {.lex_state = 24, .external_lex_state = 3},
  [26] = {.lex_state = 24, .external_lex_state = 3},
  [27] = {.lex_state = 24, .external_lex_state = 3},
  [28] = {.lex_state = 24, .external_lex_state = 3},
  [29] = {.lex_state = 24, .external_lex_state = 4},
  [30] = {.lex_state = 24, .external_lex_state = 4},
  [31] = {.lex_state = 24, .external_lex_state = 3},
  [32] = {.lex_state = 24, .external_lex_state = 3},
  [33] = {.lex_state = 24, .external_lex_state = 3},
  [34] = {.lex_state = 24, .external_lex_state = 3},
  [35] = {.lex_state = 24, .external_lex_state = 4},
  [36] = {.lex_state = 24, .external_lex_state = 3},
  [37] = {.lex_state = 24, .external_lex_state = 3},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 24, .external_lex_state = 4},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 24, .external_lex_state = 4},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 24, .external_lex_state = 4},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 24, .external_lex_state = 3},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 24, .external_lex_state = 4},
  [51] = {.lex_state = 24, .external_lex_state = 4},
  [52] = {.lex_state = 24, .external_lex_state = 4},
  [53] = {.lex_state = 24, .external_lex_state = 4},
  [54] = {.lex_state = 24, .external_lex_state = 4},
  [55] = {.lex_state = 24, .external_lex_state = 4},
  [56] = {.lex_state = 24, .external_lex_state = 4},
  [57] = {.lex_state = 24, .external_lex_state = 4},
  [58] = {.lex_state = 24, .external_lex_state = 4},
  [59] = {.lex_state = 24, .external_lex_state = 4},
  [60] = {.lex_state = 24, .external_lex_state = 4},
  [61] = {.lex_state = 24, .external_lex_state = 4},
  [62] = {.lex_state = 24, .external_lex_state = 4},
  [63] = {.lex_state = 24, .external_lex_state = 4},
  [64] = {.lex_state = 24, .external_lex_state = 4},
  [65] = {.lex_state = 24, .external_lex_state = 4},
  [66] = {.lex_state = 24, .external_lex_state = 4},
  [67] = {.lex_state = 24, .external_lex_state = 4},
  [68] = {.lex_state = 24, .external_lex_state = 4},
  [69] = {.lex_state = 24, .external_lex_state = 4},
  [70] = {.lex_state = 24, .external_lex_state = 4},
  [71] = {.lex_state = 24, .external_lex_state = 4},
  [72] = {.lex_state = 24, .external_lex_state = 4},
  [73] = {.lex_state = 24, .external_lex_state = 4},
  [74] = {.lex_state = 24, .external_lex_state = 4},
  [75] = {.lex_state = 24, .external_lex_state = 4},
  [76] = {.lex_state = 24, .external_lex_state = 4},
  [77] = {.lex_state = 24, .external_lex_state = 4},
  [78] = {.lex_state = 24, .external_lex_state = 4},
  [79] = {.lex_state = 29, .external_lex_state = 2},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 29, .external_lex_state = 2},
  [83] = {.lex_state = 29, .external_lex_state = 2},
  [84] = {.lex_state = 29, .external_lex_state = 2},
  [85] = {.lex_state = 29, .external_lex_state = 2},
  [86] = {.lex_state = 29, .external_lex_state = 2},
  [87] = {.lex_state = 29, .external_lex_state = 2},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 29, .external_lex_state = 2},
  [90] = {.lex_state = 24, .external_lex_state = 4},
  [91] = {.lex_state = 24, .external_lex_state = 4},
  [92] = {.lex_state = 24, .external_lex_state = 4},
  [93] = {.lex_state = 24, .external_lex_state = 4},
  [94] = {.lex_state = 24, .external_lex_state = 4},
  [95] = {.lex_state = 24, .external_lex_state = 4},
  [96] = {.lex_state = 24, .external_lex_state = 4},
  [97] = {.lex_state = 24, .external_lex_state = 4},
  [98] = {.lex_state = 24, .external_lex_state = 4},
  [99] = {.lex_state = 24, .external_lex_state = 4},
  [100] = {.lex_state = 24, .external_lex_state = 4},
  [101] = {.lex_state = 24, .external_lex_state = 4},
  [102] = {.lex_state = 24, .external_lex_state = 4},
  [103] = {.lex_state = 24, .external_lex_state = 4},
  [104] = {.lex_state = 24, .external_lex_state = 4},
  [105] = {.lex_state = 24, .external_lex_state = 4},
  [106] = {.lex_state = 24, .external_lex_state = 4},
  [107] = {.lex_state = 24, .external_lex_state = 4},
  [108] = {.lex_state = 24, .external_lex_state = 4},
  [109] = {.lex_state = 24, .external_lex_state = 4},
  [110] = {.lex_state = 24, .external_lex_state = 4},
  [111] = {.lex_state = 29, .external_lex_state = 2},
  [112] = {.lex_state = 29, .external_lex_state = 2},
  [113] = {.lex_state = 29, .external_lex_state = 2},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 25},
  [118] = {.lex_state = 29, .external_lex_state = 5},
  [119] = {.lex_state = 29, .external_lex_state = 5},
  [120] = {.lex_state = 29, .external_lex_state = 5},
  [121] = {.lex_state = 29, .external_lex_state = 5},
  [122] = {.lex_state = 29, .external_lex_state = 5},
  [123] = {.lex_state = 29, .external_lex_state = 5},
  [124] = {.lex_state = 29, .external_lex_state = 5},
  [125] = {.lex_state = 29, .external_lex_state = 5},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 29, .external_lex_state = 2},
  [129] = {.lex_state = 29, .external_lex_state = 2},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 29, .external_lex_state = 2},
  [137] = {.lex_state = 25},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 25},
  [140] = {.lex_state = 29, .external_lex_state = 2},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 25},
  [145] = {.lex_state = 25},
  [146] = {.lex_state = 25},
  [147] = {.lex_state = 25},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 25},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 25},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 29, .external_lex_state = 5},
  [161] = {.lex_state = 29, .external_lex_state = 5},
  [162] = {.lex_state = 29, .external_lex_state = 5},
  [163] = {.lex_state = 29, .external_lex_state = 2},
  [164] = {.lex_state = 29, .external_lex_state = 2},
  [165] = {.lex_state = 29, .external_lex_state = 2},
  [166] = {.lex_state = 29, .external_lex_state = 2},
  [167] = {.lex_state = 29, .external_lex_state = 2},
  [168] = {.lex_state = 29, .external_lex_state = 2},
  [169] = {.lex_state = 29, .external_lex_state = 2},
  [170] = {.lex_state = 29, .external_lex_state = 2},
  [171] = {.lex_state = 29, .external_lex_state = 2},
  [172] = {.lex_state = 29, .external_lex_state = 2},
  [173] = {.lex_state = 29, .external_lex_state = 2},
  [174] = {.lex_state = 29, .external_lex_state = 2},
  [175] = {.lex_state = 29, .external_lex_state = 2},
  [176] = {.lex_state = 29, .external_lex_state = 2},
  [177] = {.lex_state = 29, .external_lex_state = 2},
  [178] = {.lex_state = 29, .external_lex_state = 2},
  [179] = {.lex_state = 29, .external_lex_state = 2},
  [180] = {.lex_state = 29, .external_lex_state = 2},
  [181] = {.lex_state = 29, .external_lex_state = 2},
  [182] = {.lex_state = 29, .external_lex_state = 2},
  [183] = {.lex_state = 29, .external_lex_state = 2},
  [184] = {.lex_state = 29, .external_lex_state = 2},
  [185] = {.lex_state = 29, .external_lex_state = 2},
  [186] = {.lex_state = 29, .external_lex_state = 2},
  [187] = {.lex_state = 29, .external_lex_state = 2},
  [188] = {.lex_state = 29, .external_lex_state = 2},
  [189] = {.lex_state = 29, .external_lex_state = 2},
  [190] = {.lex_state = 29, .external_lex_state = 2},
  [191] = {.lex_state = 29, .external_lex_state = 2},
  [192] = {.lex_state = 29, .external_lex_state = 2},
  [193] = {.lex_state = 29, .external_lex_state = 5},
  [194] = {.lex_state = 29, .external_lex_state = 5},
  [195] = {.lex_state = 29, .external_lex_state = 5},
  [196] = {.lex_state = 29, .external_lex_state = 5},
  [197] = {.lex_state = 29, .external_lex_state = 5},
  [198] = {.lex_state = 29, .external_lex_state = 5},
  [199] = {.lex_state = 29, .external_lex_state = 5},
  [200] = {.lex_state = 29, .external_lex_state = 5},
  [201] = {.lex_state = 29, .external_lex_state = 5},
  [202] = {.lex_state = 29, .external_lex_state = 5},
  [203] = {.lex_state = 29, .external_lex_state = 5},
  [204] = {.lex_state = 29, .external_lex_state = 5},
  [205] = {.lex_state = 29, .external_lex_state = 5},
  [206] = {.lex_state = 29, .external_lex_state = 5},
  [207] = {.lex_state = 29, .external_lex_state = 5},
  [208] = {.lex_state = 29, .external_lex_state = 5},
  [209] = {.lex_state = 29, .external_lex_state = 5},
  [210] = {.lex_state = 29, .external_lex_state = 5},
  [211] = {.lex_state = 29, .external_lex_state = 5},
  [212] = {.lex_state = 29, .external_lex_state = 5},
  [213] = {.lex_state = 29, .external_lex_state = 5},
  [214] = {.lex_state = 29, .external_lex_state = 5},
  [215] = {.lex_state = 29, .external_lex_state = 5},
  [216] = {.lex_state = 29, .external_lex_state = 5},
  [217] = {.lex_state = 29, .external_lex_state = 5},
  [218] = {.lex_state = 29, .external_lex_state = 5},
  [219] = {.lex_state = 29, .external_lex_state = 5},
  [220] = {.lex_state = 29, .external_lex_state = 5},
  [221] = {.lex_state = 29, .external_lex_state = 5},
  [222] = {.lex_state = 29, .external_lex_state = 5},
  [223] = {.lex_state = 29, .external_lex_state = 5},
  [224] = {.lex_state = 29, .external_lex_state = 5},
  [225] = {.lex_state = 29, .external_lex_state = 5},
  [226] = {.lex_state = 29, .external_lex_state = 5},
  [227] = {.lex_state = 24, .external_lex_state = 3},
  [228] = {.lex_state = 24, .external_lex_state = 3},
  [229] = {.lex_state = 24, .external_lex_state = 4},
  [230] = {.lex_state = 24, .external_lex_state = 4},
  [231] = {.lex_state = 29, .external_lex_state = 2},
  [232] = {.lex_state = 29, .external_lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 29, .external_lex_state = 2},
  [236] = {.lex_state = 29, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 6},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 29, .external_lex_state = 2},
  [252] = {.lex_state = 29, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 29, .external_lex_state = 4},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 29, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 29, .external_lex_state = 2},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 29, .external_lex_state = 2},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 29, .external_lex_state = 2},
  [267] = {.lex_state = 29, .external_lex_state = 4},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 29, .external_lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 6},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 29, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 29, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 29, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 0, .external_lex_state = 2},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0, .external_lex_state = 6},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 29, .external_lex_state = 2},
  [302] = {.lex_state = 29, .external_lex_state = 2},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0, .external_lex_state = 6},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 6},
  [309] = {.lex_state = 0, .external_lex_state = 8},
  [310] = {.lex_state = 0, .external_lex_state = 5},
  [311] = {.lex_state = 0, .external_lex_state = 6},
  [312] = {.lex_state = 0, .external_lex_state = 6},
  [313] = {.lex_state = 0, .external_lex_state = 5},
  [314] = {.lex_state = 0, .external_lex_state = 5},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0, .external_lex_state = 6},
  [318] = {.lex_state = 0, .external_lex_state = 8},
  [319] = {.lex_state = 0, .external_lex_state = 5},
  [320] = {.lex_state = 29, .external_lex_state = 4},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 23},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 23},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 23},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 29},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 29},
  [363] = {.lex_state = 0, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 2},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0, .external_lex_state = 9},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
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
    [sym_config_file] = STATE(381),
    [sym_body] = STATE(380),
    [sym_attribute] = STATE(236),
    [sym_block] = STATE(236),
    [sym__newlines] = STATE(236),
    [aux_sym_body_repeat1] = STATE(236),
    [aux_sym__newlines_repeat1] = STATE(251),
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(20), 1,
      sym__newlines,
    STATE(68), 1,
      sym_for_intro,
    STATE(138), 1,
      sym_quoted_template,
    STATE(165), 1,
      sym__object_end,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(248), 1,
      sym_object_elem,
    STATE(285), 1,
      sym__object_elems,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(21), 1,
      sym__newlines,
    STATE(76), 1,
      sym_for_intro,
    STATE(138), 1,
      sym_quoted_template,
    STATE(153), 1,
      sym__object_end,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(248), 1,
      sym_object_elem,
    STATE(283), 1,
      sym__object_elems,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(23), 1,
      sym__newlines,
    STATE(63), 1,
      sym_for_intro,
    STATE(138), 1,
      sym_quoted_template,
    STATE(202), 1,
      sym__object_end,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(248), 1,
      sym_object_elem,
    STATE(275), 1,
      sym__object_elems,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(35), 1,
      sym__newlines,
    STATE(54), 1,
      sym_for_intro,
    STATE(154), 1,
      sym__tuple_end,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(245), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    STATE(272), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(29), 1,
      sym__newlines,
    STATE(62), 1,
      sym_for_intro,
    STATE(172), 1,
      sym__tuple_end,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(245), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    STATE(286), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(30), 1,
      sym__newlines,
    STATE(56), 1,
      sym_for_intro,
    STATE(173), 1,
      sym_quoted_template,
    STATE(207), 1,
      sym__tuple_end,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(245), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    STATE(278), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym__function_call_end,
    STATE(250), 1,
      sym_conditional,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(261), 1,
      sym_expression,
    STATE(282), 1,
      sym_function_arguments,
    STATE(349), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(200), 1,
      sym__function_call_end,
    STATE(250), 1,
      sym_conditional,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(261), 1,
      sym_expression,
    STATE(273), 1,
      sym_function_arguments,
    STATE(368), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(151), 1,
      sym__function_call_end,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(261), 1,
      sym_expression,
    STATE(268), 1,
      sym_function_arguments,
    STATE(344), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
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
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(27), 1,
      sym__newlines,
    STATE(138), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
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
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(18), 1,
      sym__newlines,
    STATE(138), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
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
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(19), 1,
      sym__newlines,
    STATE(138), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1140] = 24,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(32), 1,
      sym__newlines,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      sym_conditional,
    STATE(300), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1226] = 24,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(33), 1,
      sym__newlines,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      sym_conditional,
    STATE(300), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1312] = 24,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(34), 1,
      sym__newlines,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      sym_conditional,
    STATE(300), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1398] = 24,
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
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(31), 1,
      sym__quoted_template_start,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(41), 1,
      sym__newlines,
    STATE(138), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1484] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(315), 1,
      sym_object_elem,
    STATE(321), 1,
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
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1565] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(315), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(71), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1646] = 23,
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
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(163), 1,
      sym__object_end,
    STATE(234), 1,
      sym_conditional,
    STATE(253), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1729] = 23,
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
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(144), 1,
      sym__object_end,
    STATE(234), 1,
      sym_conditional,
    STATE(253), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1812] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
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
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1893] = 23,
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
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(219), 1,
      sym__object_end,
    STATE(234), 1,
      sym_conditional,
    STATE(253), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [1976] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2057] = 23,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(67), 1,
      sym__newlines,
    STATE(173), 1,
      sym_quoted_template,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      sym_conditional,
    STATE(300), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2140] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(71), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2221] = 22,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(315), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(87), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2302] = 22,
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
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym__newline,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(271), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2382] = 22,
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
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(186), 1,
      sym__tuple_end,
    STATE(238), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2462] = 22,
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
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(222), 1,
      sym__tuple_end,
    STATE(238), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2542] = 22,
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
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(271), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2622] = 21,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(79), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2700] = 21,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(75), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2778] = 21,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(99), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2856] = 22,
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
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(127), 1,
      sym__tuple_end,
    STATE(173), 1,
      sym_quoted_template,
    STATE(238), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [2936] = 22,
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
    ACTIONS(91), 1,
      sym__newline,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(271), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3016] = 21,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(258), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(105), 2,
      sym__newline,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3094] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(133), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(109), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [3165] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      sym_strip_marker,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    STATE(313), 1,
      sym_expression,
    STATE(314), 1,
      sym_conditional,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(122), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(155), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [3289] = 21,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(315), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3366] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 18,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [3417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [3464] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(131), 1,
      anon_sym_AMP_AMP,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [3525] = 21,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(305), 1,
      sym_object_elem,
    STATE(321), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3602] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 16,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3655] = 21,
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
    ACTIONS(91), 1,
      sym__newline,
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(271), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3732] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 14,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3789] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SLASH,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(121), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(155), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
    STATE(157), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3848] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(341), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3922] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [3996] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(352), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4070] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    STATE(314), 1,
      sym_conditional,
    STATE(319), 1,
      sym_expression,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(122), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4144] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(284), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4218] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(265), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4292] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(279), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4366] = 20,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(269), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4440] = 20,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(249), 1,
      sym_expression,
    STATE(250), 1,
      sym_conditional,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4514] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(259), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4588] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(263), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4662] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(354), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4736] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(274), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4810] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(333), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4884] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(357), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [4958] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(334), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5032] = 20,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(297), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5106] = 20,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(296), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5180] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(328), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5254] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(358), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5328] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(353), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5402] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(335), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5476] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(366), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5550] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    STATE(310), 1,
      sym_expression,
    STATE(314), 1,
      sym_conditional,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(122), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5624] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(369), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5698] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(370), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5772] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(234), 1,
      sym_conditional,
    STATE(350), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5846] = 20,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    STATE(233), 1,
      sym_expression,
    STATE(234), 1,
      sym_conditional,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(38), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5920] = 20,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    STATE(250), 1,
      sym_conditional,
    STATE(294), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(87), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [5994] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 10,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [6053] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(88), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(177), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [6100] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(80), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [6147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 11,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 13,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6259] = 9,
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
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 15,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6355] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 17,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
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
  [6404] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(175), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_DOT_STAR,
    ACTIONS(191), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(193), 1,
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
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(109), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [6471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DOT,
    STATE(156), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(88), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [6518] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(170), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(155), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6563] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(85), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6631] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(46), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6699] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(79), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6767] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(82), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6835] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(83), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6903] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(42), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [6971] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(121), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7039] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(43), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7107] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(40), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7175] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(89), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7243] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(49), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7311] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(48), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7379] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(119), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7447] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(84), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7515] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(123), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7583] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(124), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7651] = 18,
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
    STATE(5), 1,
      sym__tuple_start,
    STATE(138), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(146), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(147), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(158), 2,
      sym_tuple,
      sym_object,
    STATE(44), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7719] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
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
  [7787] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(118), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7855] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_numeric_lit,
    ACTIONS(145), 1,
      sym_null_lit,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      sym__quoted_template_start,
    STATE(4), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(216), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(220), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(223), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(224), 2,
      sym_tuple,
      sym_object,
    STATE(226), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(125), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7923] = 18,
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
    STATE(2), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(173), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(174), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(177), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(183), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(189), 2,
      sym_tuple,
      sym_object,
    STATE(86), 8,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_operation,
      sym_template_expr,
  [7991] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(181), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(113), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(183), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_DOT,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(195), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(112), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(197), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8081] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(167), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(112), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(179), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__function_call_start,
    ACTIONS(218), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(224), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(116), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8286] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(234), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 11,
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
  [8333] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP_AMP,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(234), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(240), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 6,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [8388] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(155), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 15,
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
  [8429] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(234), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(240), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 7,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [8482] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP_AMP,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(252), 1,
      anon_sym_DOT_STAR,
    ACTIONS(254), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(256), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(234), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(240), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(244), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(109), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [8545] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(159), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(234), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(240), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(161), 9,
      sym__template_interpolation_end,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_strip_marker,
  [8596] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(236), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 4,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 13,
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
  [8641] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(209), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(212), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(159), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 15,
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
  [8682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__function_call_start,
    ACTIONS(218), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(129), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [8996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(129), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(224), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(136), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 20,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      anon_sym_EQ_GT,
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
  [9854] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DOT,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(195), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(197), 15,
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
  [9895] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(181), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(162), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(183), 15,
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
  [9936] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(210), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(177), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(160), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(179), 15,
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
  [9977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
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
    ACTIONS(317), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
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
    ACTIONS(305), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 19,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_STAR,
      anon_sym_LBRACK_STAR_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(193), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(211), 4,
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
  [10971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(193), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(224), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 15,
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
  [11005] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(194), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(230), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 15,
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
  [11039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__function_call_start,
    ACTIONS(218), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 15,
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
  [11073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 15,
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
  [11101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 15,
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
  [11129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 15,
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
  [11157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 15,
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
  [11185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 15,
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
  [11213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 15,
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
  [11241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 15,
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
  [11269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 15,
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
  [11297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 5,
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
  [11325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
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
  [11353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 15,
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
  [11381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 15,
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
  [11409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 15,
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
  [11437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 15,
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
  [11465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
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
  [11493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 15,
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
  [11521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
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
  [11549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 15,
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
  [11577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 15,
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
  [11605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 15,
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
  [11633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 15,
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
  [11661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 15,
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
  [11689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 15,
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
  [11717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 15,
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
  [11745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 15,
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
  [11773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
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
  [11801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 15,
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
  [11829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 15,
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
  [11857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 15,
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
  [11885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 15,
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
  [11913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(400), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(398), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(407), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(405), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(411), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(415), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [12005] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(264), 1,
      sym__block_end,
    STATE(340), 1,
      sym_body,
    STATE(236), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [12033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(266), 1,
      sym__block_end,
    STATE(347), 1,
      sym_body,
    STATE(236), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [12061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_EQ,
    ACTIONS(425), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [12078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [12095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
    ACTIONS(432), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(235), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [12118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(435), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(235), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [12141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__quoted_template_end,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(239), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    STATE(14), 1,
      sym__comma,
    STATE(247), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(322), 1,
      sym__newlines,
  [12191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym__quoted_template_end,
    ACTIONS(449), 1,
      sym__template_literal_chunk,
    ACTIONS(452), 1,
      sym__template_interpolation_start,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(239), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    ACTIONS(455), 1,
      sym__quoted_template_end,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(311), 1,
      sym_template_literal,
    STATE(243), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12237] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    ACTIONS(457), 1,
      sym__quoted_template_end,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(317), 1,
      sym_template_literal,
    STATE(237), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    ACTIONS(459), 1,
      sym__quoted_template_end,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(307), 1,
      sym_template_literal,
    STATE(244), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    ACTIONS(461), 1,
      sym__quoted_template_end,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(239), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12307] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(441), 1,
      sym__template_interpolation_start,
    ACTIONS(463), 1,
      sym__quoted_template_end,
    STATE(299), 1,
      aux_sym_template_literal_repeat1,
    STATE(239), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [12329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym__comma,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(256), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(324), 1,
      sym__newlines,
  [12357] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(22), 1,
      sym__newlines,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(254), 1,
      aux_sym__object_elems_repeat1,
  [12382] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym__comma,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(270), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(359), 1,
      sym__newlines,
  [12407] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym__comma,
    STATE(24), 1,
      sym__newlines,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(255), 1,
      aux_sym__object_elems_repeat1,
  [12432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [12445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [12458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(405), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(398), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12492] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      sym__comma,
    STATE(26), 1,
      sym__newlines,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(246), 1,
      aux_sym__object_elems_repeat1,
  [12517] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      sym__newline,
    STATE(17), 1,
      sym__comma,
    STATE(45), 1,
      sym__newlines,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(254), 1,
      aux_sym__object_elems_repeat1,
  [12542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      sym__comma,
    STATE(26), 1,
      sym__newlines,
    STATE(228), 1,
      aux_sym__newlines_repeat1,
    STATE(254), 1,
      aux_sym__object_elems_repeat1,
  [12567] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      sym__comma,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(270), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(322), 1,
      sym__newlines,
  [12592] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      sym__quoted_template_start,
    STATE(231), 1,
      sym__block_start,
    STATE(267), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      sym_ellipsis,
    ACTIONS(504), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_function_arguments_repeat1,
  [12637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(510), 1,
      sym_ellipsis,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    STATE(192), 1,
      sym__object_end,
    STATE(323), 1,
      sym_for_cond,
  [12659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(293), 1,
      sym__newlines,
    ACTIONS(514), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12675] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      sym_ellipsis,
    ACTIONS(522), 1,
      sym__newline,
    STATE(280), 1,
      aux_sym_function_arguments_repeat1,
  [12697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(302), 1,
      sym__newlines,
    ACTIONS(524), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12713] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      sym_ellipsis,
    STATE(206), 1,
      sym__object_end,
    STATE(343), 1,
      sym_for_cond,
  [12735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(301), 1,
      sym__newlines,
    ACTIONS(530), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12751] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      sym_ellipsis,
    STATE(132), 1,
      sym__object_end,
    STATE(326), 1,
      sym_for_cond,
  [12773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(291), 1,
      sym__newlines,
    ACTIONS(536), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym__quoted_template_start,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(232), 1,
      sym__block_start,
    STATE(277), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym__function_call_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(336), 1,
      sym__newlines,
  [12828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(544), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [12841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym__comma,
    STATE(270), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(549), 2,
      sym__newline,
      anon_sym_RBRACK,
  [12858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(551), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [12871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym__tuple_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(339), 1,
      sym__newlines,
  [12890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__function_call_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(332), 1,
      sym__newlines,
  [12909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym__tuple_end,
    STATE(331), 1,
      sym_for_cond,
  [12928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym__object_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(330), 1,
      sym__newlines,
  [12947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(551), 3,
      sym__newline,
      anon_sym_RPAREN,
      sym_ellipsis,
  [12962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym__quoted_template_start,
    STATE(277), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym__tuple_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(327), 1,
      sym__newlines,
  [12998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym__tuple_end,
    STATE(337), 1,
      sym_for_cond,
  [13017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      sym_ellipsis,
    ACTIONS(504), 1,
      sym__newline,
    STATE(276), 1,
      aux_sym_function_arguments_repeat1,
  [13036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      sym_ellipsis,
    ACTIONS(574), 1,
      sym__newline,
    STATE(276), 1,
      aux_sym_function_arguments_repeat1,
  [13055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym__function_call_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(360), 1,
      sym__newlines,
  [13074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym__object_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(338), 1,
      sym__newlines,
  [13093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym__tuple_end,
    STATE(329), 1,
      sym_for_cond,
  [13112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym__object_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(361), 1,
      sym__newlines,
  [13131] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym__tuple_end,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(351), 1,
      sym__newlines,
  [13150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__template_literal_chunk,
    STATE(287), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(580), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [13164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [13176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [13188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
    STATE(345), 1,
      sym_for_cond,
  [13204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [13214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [13226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [13236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(591), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [13258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(595), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    STATE(251), 1,
      aux_sym__newlines_repeat1,
    STATE(295), 1,
      sym__newlines,
  [13286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym__object_end,
    STATE(356), 1,
      sym_for_cond,
  [13302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__template_literal_chunk,
    STATE(287), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(599), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [13316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_QMARK,
    ACTIONS(549), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [13338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [13348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_if,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym__object_end,
    STATE(365), 1,
      sym_for_cond,
  [13364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__template_literal_chunk,
    STATE(309), 1,
      aux_sym_template_literal_repeat1,
    STATE(371), 1,
      sym_template_literal,
  [13395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__quoted_template_end,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__quoted_template_end,
    ACTIONS(616), 1,
      sym__template_literal_chunk,
    STATE(318), 1,
      aux_sym_template_literal_repeat1,
  [13428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_QMARK,
    ACTIONS(620), 1,
      sym_strip_marker,
    ACTIONS(622), 1,
      sym__template_interpolation_end,
  [13441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__quoted_template_end,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_QMARK,
    ACTIONS(629), 1,
      sym_strip_marker,
    ACTIONS(631), 1,
      sym__template_interpolation_end,
  [13474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [13483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(635), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [13503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__quoted_template_end,
    ACTIONS(612), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__quoted_template_end,
    ACTIONS(640), 1,
      sym__template_literal_chunk,
    STATE(318), 1,
      aux_sym_template_literal_repeat1,
  [13527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [13536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [13545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(643), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [13556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym__object_end,
  [13574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_in,
  [13592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym__object_end,
  [13602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      sym__tuple_end,
  [13612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(651), 1,
      anon_sym_EQ_GT,
  [13622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym__tuple_end,
  [13632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym__object_end,
  [13642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym__tuple_end,
  [13652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__function_call_end,
  [13662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(661), 1,
      anon_sym_EQ_GT,
  [13672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(665), 1,
      anon_sym_COLON,
  [13692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__function_call_end,
  [13702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym__tuple_end,
  [13712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym__object_end,
  [13722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__tuple_end,
  [13732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym__block_end,
  [13742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [13752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__object_end,
  [13770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym__function_call_end,
  [13780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym__object_end,
  [13790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      sym__block_end,
  [13808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym__block_end,
  [13818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym__function_call_end,
  [13828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(685), 1,
      anon_sym_EQ_GT,
  [13838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym__tuple_end,
  [13848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(689), 1,
      anon_sym_COLON,
  [13858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(691), 1,
      anon_sym_COLON,
  [13868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [13878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(697), 1,
      aux_sym_legacy_index_token1,
  [13888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym__object_end,
  [13898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [13908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
  [13918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      sym__function_call_end,
  [13936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym__object_end,
  [13946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
    ACTIONS(711), 1,
      aux_sym_legacy_index_token1,
  [13956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__object_end,
  [13982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [13992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
    ACTIONS(719), 1,
      aux_sym_legacy_index_token1,
  [14002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      sym__function_call_end,
  [14012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(721), 1,
      anon_sym_COLON,
  [14022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [14032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__quoted_template_end,
  [14039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [14046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_identifier,
  [14053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_in,
  [14060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
  [14067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__template_interpolation_end,
  [14074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__template_interpolation_end,
  [14081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
  [14088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [14095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
  [14102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
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
  [SMALL_STATE(15)] = 1226,
  [SMALL_STATE(16)] = 1312,
  [SMALL_STATE(17)] = 1398,
  [SMALL_STATE(18)] = 1484,
  [SMALL_STATE(19)] = 1565,
  [SMALL_STATE(20)] = 1646,
  [SMALL_STATE(21)] = 1729,
  [SMALL_STATE(22)] = 1812,
  [SMALL_STATE(23)] = 1893,
  [SMALL_STATE(24)] = 1976,
  [SMALL_STATE(25)] = 2057,
  [SMALL_STATE(26)] = 2140,
  [SMALL_STATE(27)] = 2221,
  [SMALL_STATE(28)] = 2302,
  [SMALL_STATE(29)] = 2382,
  [SMALL_STATE(30)] = 2462,
  [SMALL_STATE(31)] = 2542,
  [SMALL_STATE(32)] = 2622,
  [SMALL_STATE(33)] = 2700,
  [SMALL_STATE(34)] = 2778,
  [SMALL_STATE(35)] = 2856,
  [SMALL_STATE(36)] = 2936,
  [SMALL_STATE(37)] = 3016,
  [SMALL_STATE(38)] = 3094,
  [SMALL_STATE(39)] = 3165,
  [SMALL_STATE(40)] = 3242,
  [SMALL_STATE(41)] = 3289,
  [SMALL_STATE(42)] = 3366,
  [SMALL_STATE(43)] = 3417,
  [SMALL_STATE(44)] = 3464,
  [SMALL_STATE(45)] = 3525,
  [SMALL_STATE(46)] = 3602,
  [SMALL_STATE(47)] = 3655,
  [SMALL_STATE(48)] = 3732,
  [SMALL_STATE(49)] = 3789,
  [SMALL_STATE(50)] = 3848,
  [SMALL_STATE(51)] = 3922,
  [SMALL_STATE(52)] = 3996,
  [SMALL_STATE(53)] = 4070,
  [SMALL_STATE(54)] = 4144,
  [SMALL_STATE(55)] = 4218,
  [SMALL_STATE(56)] = 4292,
  [SMALL_STATE(57)] = 4366,
  [SMALL_STATE(58)] = 4440,
  [SMALL_STATE(59)] = 4514,
  [SMALL_STATE(60)] = 4588,
  [SMALL_STATE(61)] = 4662,
  [SMALL_STATE(62)] = 4736,
  [SMALL_STATE(63)] = 4810,
  [SMALL_STATE(64)] = 4884,
  [SMALL_STATE(65)] = 4958,
  [SMALL_STATE(66)] = 5032,
  [SMALL_STATE(67)] = 5106,
  [SMALL_STATE(68)] = 5180,
  [SMALL_STATE(69)] = 5254,
  [SMALL_STATE(70)] = 5328,
  [SMALL_STATE(71)] = 5402,
  [SMALL_STATE(72)] = 5476,
  [SMALL_STATE(73)] = 5550,
  [SMALL_STATE(74)] = 5624,
  [SMALL_STATE(75)] = 5698,
  [SMALL_STATE(76)] = 5772,
  [SMALL_STATE(77)] = 5846,
  [SMALL_STATE(78)] = 5920,
  [SMALL_STATE(79)] = 5994,
  [SMALL_STATE(80)] = 6053,
  [SMALL_STATE(81)] = 6100,
  [SMALL_STATE(82)] = 6147,
  [SMALL_STATE(83)] = 6204,
  [SMALL_STATE(84)] = 6259,
  [SMALL_STATE(85)] = 6310,
  [SMALL_STATE(86)] = 6355,
  [SMALL_STATE(87)] = 6404,
  [SMALL_STATE(88)] = 6471,
  [SMALL_STATE(89)] = 6518,
  [SMALL_STATE(90)] = 6563,
  [SMALL_STATE(91)] = 6631,
  [SMALL_STATE(92)] = 6699,
  [SMALL_STATE(93)] = 6767,
  [SMALL_STATE(94)] = 6835,
  [SMALL_STATE(95)] = 6903,
  [SMALL_STATE(96)] = 6971,
  [SMALL_STATE(97)] = 7039,
  [SMALL_STATE(98)] = 7107,
  [SMALL_STATE(99)] = 7175,
  [SMALL_STATE(100)] = 7243,
  [SMALL_STATE(101)] = 7311,
  [SMALL_STATE(102)] = 7379,
  [SMALL_STATE(103)] = 7447,
  [SMALL_STATE(104)] = 7515,
  [SMALL_STATE(105)] = 7583,
  [SMALL_STATE(106)] = 7651,
  [SMALL_STATE(107)] = 7719,
  [SMALL_STATE(108)] = 7787,
  [SMALL_STATE(109)] = 7855,
  [SMALL_STATE(110)] = 7923,
  [SMALL_STATE(111)] = 7991,
  [SMALL_STATE(112)] = 8036,
  [SMALL_STATE(113)] = 8081,
  [SMALL_STATE(114)] = 8126,
  [SMALL_STATE(115)] = 8166,
  [SMALL_STATE(116)] = 8206,
  [SMALL_STATE(117)] = 8246,
  [SMALL_STATE(118)] = 8286,
  [SMALL_STATE(119)] = 8333,
  [SMALL_STATE(120)] = 8388,
  [SMALL_STATE(121)] = 8429,
  [SMALL_STATE(122)] = 8482,
  [SMALL_STATE(123)] = 8545,
  [SMALL_STATE(124)] = 8596,
  [SMALL_STATE(125)] = 8641,
  [SMALL_STATE(126)] = 8682,
  [SMALL_STATE(127)] = 8716,
  [SMALL_STATE(128)] = 8750,
  [SMALL_STATE(129)] = 8788,
  [SMALL_STATE(130)] = 8826,
  [SMALL_STATE(131)] = 8860,
  [SMALL_STATE(132)] = 8894,
  [SMALL_STATE(133)] = 8928,
  [SMALL_STATE(134)] = 8962,
  [SMALL_STATE(135)] = 8996,
  [SMALL_STATE(136)] = 9030,
  [SMALL_STATE(137)] = 9068,
  [SMALL_STATE(138)] = 9102,
  [SMALL_STATE(139)] = 9136,
  [SMALL_STATE(140)] = 9170,
  [SMALL_STATE(141)] = 9208,
  [SMALL_STATE(142)] = 9242,
  [SMALL_STATE(143)] = 9276,
  [SMALL_STATE(144)] = 9310,
  [SMALL_STATE(145)] = 9344,
  [SMALL_STATE(146)] = 9378,
  [SMALL_STATE(147)] = 9412,
  [SMALL_STATE(148)] = 9446,
  [SMALL_STATE(149)] = 9480,
  [SMALL_STATE(150)] = 9514,
  [SMALL_STATE(151)] = 9548,
  [SMALL_STATE(152)] = 9582,
  [SMALL_STATE(153)] = 9616,
  [SMALL_STATE(154)] = 9650,
  [SMALL_STATE(155)] = 9684,
  [SMALL_STATE(156)] = 9718,
  [SMALL_STATE(157)] = 9752,
  [SMALL_STATE(158)] = 9786,
  [SMALL_STATE(159)] = 9820,
  [SMALL_STATE(160)] = 9854,
  [SMALL_STATE(161)] = 9895,
  [SMALL_STATE(162)] = 9936,
  [SMALL_STATE(163)] = 9977,
  [SMALL_STATE(164)] = 10009,
  [SMALL_STATE(165)] = 10041,
  [SMALL_STATE(166)] = 10073,
  [SMALL_STATE(167)] = 10105,
  [SMALL_STATE(168)] = 10137,
  [SMALL_STATE(169)] = 10169,
  [SMALL_STATE(170)] = 10201,
  [SMALL_STATE(171)] = 10233,
  [SMALL_STATE(172)] = 10265,
  [SMALL_STATE(173)] = 10297,
  [SMALL_STATE(174)] = 10329,
  [SMALL_STATE(175)] = 10361,
  [SMALL_STATE(176)] = 10393,
  [SMALL_STATE(177)] = 10425,
  [SMALL_STATE(178)] = 10457,
  [SMALL_STATE(179)] = 10489,
  [SMALL_STATE(180)] = 10521,
  [SMALL_STATE(181)] = 10553,
  [SMALL_STATE(182)] = 10585,
  [SMALL_STATE(183)] = 10617,
  [SMALL_STATE(184)] = 10649,
  [SMALL_STATE(185)] = 10681,
  [SMALL_STATE(186)] = 10713,
  [SMALL_STATE(187)] = 10745,
  [SMALL_STATE(188)] = 10777,
  [SMALL_STATE(189)] = 10809,
  [SMALL_STATE(190)] = 10841,
  [SMALL_STATE(191)] = 10873,
  [SMALL_STATE(192)] = 10905,
  [SMALL_STATE(193)] = 10937,
  [SMALL_STATE(194)] = 10971,
  [SMALL_STATE(195)] = 11005,
  [SMALL_STATE(196)] = 11039,
  [SMALL_STATE(197)] = 11073,
  [SMALL_STATE(198)] = 11101,
  [SMALL_STATE(199)] = 11129,
  [SMALL_STATE(200)] = 11157,
  [SMALL_STATE(201)] = 11185,
  [SMALL_STATE(202)] = 11213,
  [SMALL_STATE(203)] = 11241,
  [SMALL_STATE(204)] = 11269,
  [SMALL_STATE(205)] = 11297,
  [SMALL_STATE(206)] = 11325,
  [SMALL_STATE(207)] = 11353,
  [SMALL_STATE(208)] = 11381,
  [SMALL_STATE(209)] = 11409,
  [SMALL_STATE(210)] = 11437,
  [SMALL_STATE(211)] = 11465,
  [SMALL_STATE(212)] = 11493,
  [SMALL_STATE(213)] = 11521,
  [SMALL_STATE(214)] = 11549,
  [SMALL_STATE(215)] = 11577,
  [SMALL_STATE(216)] = 11605,
  [SMALL_STATE(217)] = 11633,
  [SMALL_STATE(218)] = 11661,
  [SMALL_STATE(219)] = 11689,
  [SMALL_STATE(220)] = 11717,
  [SMALL_STATE(221)] = 11745,
  [SMALL_STATE(222)] = 11773,
  [SMALL_STATE(223)] = 11801,
  [SMALL_STATE(224)] = 11829,
  [SMALL_STATE(225)] = 11857,
  [SMALL_STATE(226)] = 11885,
  [SMALL_STATE(227)] = 11913,
  [SMALL_STATE(228)] = 11940,
  [SMALL_STATE(229)] = 11967,
  [SMALL_STATE(230)] = 11986,
  [SMALL_STATE(231)] = 12005,
  [SMALL_STATE(232)] = 12033,
  [SMALL_STATE(233)] = 12061,
  [SMALL_STATE(234)] = 12078,
  [SMALL_STATE(235)] = 12095,
  [SMALL_STATE(236)] = 12118,
  [SMALL_STATE(237)] = 12141,
  [SMALL_STATE(238)] = 12163,
  [SMALL_STATE(239)] = 12191,
  [SMALL_STATE(240)] = 12213,
  [SMALL_STATE(241)] = 12237,
  [SMALL_STATE(242)] = 12261,
  [SMALL_STATE(243)] = 12285,
  [SMALL_STATE(244)] = 12307,
  [SMALL_STATE(245)] = 12329,
  [SMALL_STATE(246)] = 12357,
  [SMALL_STATE(247)] = 12382,
  [SMALL_STATE(248)] = 12407,
  [SMALL_STATE(249)] = 12432,
  [SMALL_STATE(250)] = 12445,
  [SMALL_STATE(251)] = 12458,
  [SMALL_STATE(252)] = 12475,
  [SMALL_STATE(253)] = 12492,
  [SMALL_STATE(254)] = 12517,
  [SMALL_STATE(255)] = 12542,
  [SMALL_STATE(256)] = 12567,
  [SMALL_STATE(257)] = 12592,
  [SMALL_STATE(258)] = 12615,
  [SMALL_STATE(259)] = 12637,
  [SMALL_STATE(260)] = 12659,
  [SMALL_STATE(261)] = 12675,
  [SMALL_STATE(262)] = 12697,
  [SMALL_STATE(263)] = 12713,
  [SMALL_STATE(264)] = 12735,
  [SMALL_STATE(265)] = 12751,
  [SMALL_STATE(266)] = 12773,
  [SMALL_STATE(267)] = 12789,
  [SMALL_STATE(268)] = 12809,
  [SMALL_STATE(269)] = 12828,
  [SMALL_STATE(270)] = 12841,
  [SMALL_STATE(271)] = 12858,
  [SMALL_STATE(272)] = 12871,
  [SMALL_STATE(273)] = 12890,
  [SMALL_STATE(274)] = 12909,
  [SMALL_STATE(275)] = 12928,
  [SMALL_STATE(276)] = 12947,
  [SMALL_STATE(277)] = 12962,
  [SMALL_STATE(278)] = 12979,
  [SMALL_STATE(279)] = 12998,
  [SMALL_STATE(280)] = 13017,
  [SMALL_STATE(281)] = 13036,
  [SMALL_STATE(282)] = 13055,
  [SMALL_STATE(283)] = 13074,
  [SMALL_STATE(284)] = 13093,
  [SMALL_STATE(285)] = 13112,
  [SMALL_STATE(286)] = 13131,
  [SMALL_STATE(287)] = 13150,
  [SMALL_STATE(288)] = 13164,
  [SMALL_STATE(289)] = 13176,
  [SMALL_STATE(290)] = 13188,
  [SMALL_STATE(291)] = 13204,
  [SMALL_STATE(292)] = 13214,
  [SMALL_STATE(293)] = 13226,
  [SMALL_STATE(294)] = 13236,
  [SMALL_STATE(295)] = 13248,
  [SMALL_STATE(296)] = 13258,
  [SMALL_STATE(297)] = 13270,
  [SMALL_STATE(298)] = 13286,
  [SMALL_STATE(299)] = 13302,
  [SMALL_STATE(300)] = 13316,
  [SMALL_STATE(301)] = 13328,
  [SMALL_STATE(302)] = 13338,
  [SMALL_STATE(303)] = 13348,
  [SMALL_STATE(304)] = 13364,
  [SMALL_STATE(305)] = 13373,
  [SMALL_STATE(306)] = 13382,
  [SMALL_STATE(307)] = 13395,
  [SMALL_STATE(308)] = 13406,
  [SMALL_STATE(309)] = 13415,
  [SMALL_STATE(310)] = 13428,
  [SMALL_STATE(311)] = 13441,
  [SMALL_STATE(312)] = 13452,
  [SMALL_STATE(313)] = 13461,
  [SMALL_STATE(314)] = 13474,
  [SMALL_STATE(315)] = 13483,
  [SMALL_STATE(316)] = 13492,
  [SMALL_STATE(317)] = 13503,
  [SMALL_STATE(318)] = 13514,
  [SMALL_STATE(319)] = 13527,
  [SMALL_STATE(320)] = 13536,
  [SMALL_STATE(321)] = 13545,
  [SMALL_STATE(322)] = 13556,
  [SMALL_STATE(323)] = 13564,
  [SMALL_STATE(324)] = 13574,
  [SMALL_STATE(325)] = 13582,
  [SMALL_STATE(326)] = 13592,
  [SMALL_STATE(327)] = 13602,
  [SMALL_STATE(328)] = 13612,
  [SMALL_STATE(329)] = 13622,
  [SMALL_STATE(330)] = 13632,
  [SMALL_STATE(331)] = 13642,
  [SMALL_STATE(332)] = 13652,
  [SMALL_STATE(333)] = 13662,
  [SMALL_STATE(334)] = 13672,
  [SMALL_STATE(335)] = 13682,
  [SMALL_STATE(336)] = 13692,
  [SMALL_STATE(337)] = 13702,
  [SMALL_STATE(338)] = 13712,
  [SMALL_STATE(339)] = 13722,
  [SMALL_STATE(340)] = 13732,
  [SMALL_STATE(341)] = 13742,
  [SMALL_STATE(342)] = 13752,
  [SMALL_STATE(343)] = 13760,
  [SMALL_STATE(344)] = 13770,
  [SMALL_STATE(345)] = 13780,
  [SMALL_STATE(346)] = 13790,
  [SMALL_STATE(347)] = 13798,
  [SMALL_STATE(348)] = 13808,
  [SMALL_STATE(349)] = 13818,
  [SMALL_STATE(350)] = 13828,
  [SMALL_STATE(351)] = 13838,
  [SMALL_STATE(352)] = 13848,
  [SMALL_STATE(353)] = 13858,
  [SMALL_STATE(354)] = 13868,
  [SMALL_STATE(355)] = 13878,
  [SMALL_STATE(356)] = 13888,
  [SMALL_STATE(357)] = 13898,
  [SMALL_STATE(358)] = 13908,
  [SMALL_STATE(359)] = 13918,
  [SMALL_STATE(360)] = 13926,
  [SMALL_STATE(361)] = 13936,
  [SMALL_STATE(362)] = 13946,
  [SMALL_STATE(363)] = 13956,
  [SMALL_STATE(364)] = 13964,
  [SMALL_STATE(365)] = 13972,
  [SMALL_STATE(366)] = 13982,
  [SMALL_STATE(367)] = 13992,
  [SMALL_STATE(368)] = 14002,
  [SMALL_STATE(369)] = 14012,
  [SMALL_STATE(370)] = 14022,
  [SMALL_STATE(371)] = 14032,
  [SMALL_STATE(372)] = 14039,
  [SMALL_STATE(373)] = 14046,
  [SMALL_STATE(374)] = 14053,
  [SMALL_STATE(375)] = 14060,
  [SMALL_STATE(376)] = 14067,
  [SMALL_STATE(377)] = 14074,
  [SMALL_STATE(378)] = 14081,
  [SMALL_STATE(379)] = 14088,
  [SMALL_STATE(380)] = 14095,
  [SMALL_STATE(381)] = 14102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(69),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(355),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(65),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(362),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(378),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(379),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(75),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(367),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(372),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(227),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newlines, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newlines, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(257),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(251),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(299),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(39),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(252),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(17),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(228),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 3),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(25),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(47),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(277),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(306),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(287),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(182),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(198),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(145),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(318),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [737] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
