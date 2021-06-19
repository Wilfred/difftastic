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
  [21] = {.lex_state = 24, .external_lex_state = 3},
  [22] = {.lex_state = 24, .external_lex_state = 4},
  [23] = {.lex_state = 24, .external_lex_state = 3},
  [24] = {.lex_state = 24, .external_lex_state = 3},
  [25] = {.lex_state = 24, .external_lex_state = 3},
  [26] = {.lex_state = 24, .external_lex_state = 3},
  [27] = {.lex_state = 24, .external_lex_state = 4},
  [28] = {.lex_state = 24, .external_lex_state = 3},
  [29] = {.lex_state = 24, .external_lex_state = 3},
  [30] = {.lex_state = 24, .external_lex_state = 4},
  [31] = {.lex_state = 24, .external_lex_state = 3},
  [32] = {.lex_state = 24, .external_lex_state = 3},
  [33] = {.lex_state = 24, .external_lex_state = 3},
  [34] = {.lex_state = 24, .external_lex_state = 3},
  [35] = {.lex_state = 24, .external_lex_state = 3},
  [36] = {.lex_state = 24, .external_lex_state = 4},
  [37] = {.lex_state = 24, .external_lex_state = 4},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 24, .external_lex_state = 4},
  [40] = {.lex_state = 24, .external_lex_state = 3},
  [41] = {.lex_state = 24, .external_lex_state = 4},
  [42] = {.lex_state = 24, .external_lex_state = 4},
  [43] = {.lex_state = 24, .external_lex_state = 4},
  [44] = {.lex_state = 24, .external_lex_state = 4},
  [45] = {.lex_state = 24, .external_lex_state = 4},
  [46] = {.lex_state = 24, .external_lex_state = 4},
  [47] = {.lex_state = 24, .external_lex_state = 4},
  [48] = {.lex_state = 24, .external_lex_state = 4},
  [49] = {.lex_state = 24, .external_lex_state = 4},
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
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 29, .external_lex_state = 2},
  [76] = {.lex_state = 29, .external_lex_state = 2},
  [77] = {.lex_state = 29, .external_lex_state = 2},
  [78] = {.lex_state = 29, .external_lex_state = 2},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 25},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 29, .external_lex_state = 5},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 25},
  [86] = {.lex_state = 29, .external_lex_state = 2},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 29, .external_lex_state = 2},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 29, .external_lex_state = 2},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 29, .external_lex_state = 2},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 24, .external_lex_state = 4},
  [118] = {.lex_state = 29, .external_lex_state = 5},
  [119] = {.lex_state = 24, .external_lex_state = 4},
  [120] = {.lex_state = 24, .external_lex_state = 4},
  [121] = {.lex_state = 24, .external_lex_state = 4},
  [122] = {.lex_state = 24, .external_lex_state = 4},
  [123] = {.lex_state = 29, .external_lex_state = 5},
  [124] = {.lex_state = 24, .external_lex_state = 4},
  [125] = {.lex_state = 24, .external_lex_state = 4},
  [126] = {.lex_state = 29, .external_lex_state = 5},
  [127] = {.lex_state = 24, .external_lex_state = 4},
  [128] = {.lex_state = 24, .external_lex_state = 4},
  [129] = {.lex_state = 24, .external_lex_state = 4},
  [130] = {.lex_state = 24, .external_lex_state = 4},
  [131] = {.lex_state = 24, .external_lex_state = 4},
  [132] = {.lex_state = 24, .external_lex_state = 4},
  [133] = {.lex_state = 24, .external_lex_state = 4},
  [134] = {.lex_state = 24, .external_lex_state = 4},
  [135] = {.lex_state = 24, .external_lex_state = 4},
  [136] = {.lex_state = 24, .external_lex_state = 4},
  [137] = {.lex_state = 24, .external_lex_state = 4},
  [138] = {.lex_state = 24, .external_lex_state = 4},
  [139] = {.lex_state = 24, .external_lex_state = 4},
  [140] = {.lex_state = 24, .external_lex_state = 4},
  [141] = {.lex_state = 29, .external_lex_state = 2},
  [142] = {.lex_state = 29, .external_lex_state = 2},
  [143] = {.lex_state = 29, .external_lex_state = 2},
  [144] = {.lex_state = 29, .external_lex_state = 2},
  [145] = {.lex_state = 29, .external_lex_state = 2},
  [146] = {.lex_state = 29, .external_lex_state = 2},
  [147] = {.lex_state = 29, .external_lex_state = 2},
  [148] = {.lex_state = 29, .external_lex_state = 2},
  [149] = {.lex_state = 29, .external_lex_state = 2},
  [150] = {.lex_state = 29, .external_lex_state = 2},
  [151] = {.lex_state = 29, .external_lex_state = 2},
  [152] = {.lex_state = 29, .external_lex_state = 2},
  [153] = {.lex_state = 29, .external_lex_state = 2},
  [154] = {.lex_state = 29, .external_lex_state = 2},
  [155] = {.lex_state = 29, .external_lex_state = 2},
  [156] = {.lex_state = 29, .external_lex_state = 2},
  [157] = {.lex_state = 29, .external_lex_state = 2},
  [158] = {.lex_state = 29, .external_lex_state = 2},
  [159] = {.lex_state = 29, .external_lex_state = 2},
  [160] = {.lex_state = 29, .external_lex_state = 2},
  [161] = {.lex_state = 29, .external_lex_state = 2},
  [162] = {.lex_state = 29, .external_lex_state = 2},
  [163] = {.lex_state = 29, .external_lex_state = 2},
  [164] = {.lex_state = 29, .external_lex_state = 2},
  [165] = {.lex_state = 29, .external_lex_state = 2},
  [166] = {.lex_state = 29, .external_lex_state = 2},
  [167] = {.lex_state = 29, .external_lex_state = 2},
  [168] = {.lex_state = 29, .external_lex_state = 2},
  [169] = {.lex_state = 29, .external_lex_state = 2},
  [170] = {.lex_state = 29, .external_lex_state = 5},
  [171] = {.lex_state = 29, .external_lex_state = 5},
  [172] = {.lex_state = 29, .external_lex_state = 5},
  [173] = {.lex_state = 29, .external_lex_state = 5},
  [174] = {.lex_state = 29, .external_lex_state = 5},
  [175] = {.lex_state = 29, .external_lex_state = 5},
  [176] = {.lex_state = 29, .external_lex_state = 5},
  [177] = {.lex_state = 29, .external_lex_state = 5},
  [178] = {.lex_state = 29, .external_lex_state = 5},
  [179] = {.lex_state = 29, .external_lex_state = 5},
  [180] = {.lex_state = 29, .external_lex_state = 5},
  [181] = {.lex_state = 29, .external_lex_state = 5},
  [182] = {.lex_state = 29, .external_lex_state = 5},
  [183] = {.lex_state = 29, .external_lex_state = 5},
  [184] = {.lex_state = 29, .external_lex_state = 5},
  [185] = {.lex_state = 29, .external_lex_state = 5},
  [186] = {.lex_state = 29, .external_lex_state = 5},
  [187] = {.lex_state = 29, .external_lex_state = 5},
  [188] = {.lex_state = 29, .external_lex_state = 5},
  [189] = {.lex_state = 29, .external_lex_state = 5},
  [190] = {.lex_state = 29, .external_lex_state = 5},
  [191] = {.lex_state = 29, .external_lex_state = 5},
  [192] = {.lex_state = 29, .external_lex_state = 5},
  [193] = {.lex_state = 29, .external_lex_state = 5},
  [194] = {.lex_state = 29, .external_lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 29, .external_lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 29, .external_lex_state = 5},
  [203] = {.lex_state = 29, .external_lex_state = 5},
  [204] = {.lex_state = 29, .external_lex_state = 5},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 29, .external_lex_state = 5},
  [207] = {.lex_state = 29, .external_lex_state = 5},
  [208] = {.lex_state = 29, .external_lex_state = 5},
  [209] = {.lex_state = 29, .external_lex_state = 5},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 24, .external_lex_state = 3},
  [218] = {.lex_state = 24, .external_lex_state = 3},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 0, .external_lex_state = 5},
  [221] = {.lex_state = 0, .external_lex_state = 5},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 0, .external_lex_state = 5},
  [224] = {.lex_state = 0, .external_lex_state = 5},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 24, .external_lex_state = 4},
  [227] = {.lex_state = 24, .external_lex_state = 4},
  [228] = {.lex_state = 29, .external_lex_state = 2},
  [229] = {.lex_state = 29, .external_lex_state = 2},
  [230] = {.lex_state = 29, .external_lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 29, .external_lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 29, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 29, .external_lex_state = 2},
  [253] = {.lex_state = 29, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 29, .external_lex_state = 2},
  [260] = {.lex_state = 29, .external_lex_state = 2},
  [261] = {.lex_state = 29, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 29, .external_lex_state = 2},
  [264] = {.lex_state = 29, .external_lex_state = 4},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 29, .external_lex_state = 4},
  [279] = {.lex_state = 0, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 29, .external_lex_state = 2},
  [289] = {.lex_state = 29, .external_lex_state = 2},
  [290] = {.lex_state = 29, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 6},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 29, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 6},
  [296] = {.lex_state = 29, .external_lex_state = 2},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 6},
  [304] = {.lex_state = 0, .external_lex_state = 6},
  [305] = {.lex_state = 0, .external_lex_state = 5},
  [306] = {.lex_state = 0, .external_lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 8},
  [310] = {.lex_state = 29, .external_lex_state = 4},
  [311] = {.lex_state = 0, .external_lex_state = 6},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 5},
  [314] = {.lex_state = 0, .external_lex_state = 5},
  [315] = {.lex_state = 0, .external_lex_state = 6},
  [316] = {.lex_state = 29},
  [317] = {.lex_state = 0, .external_lex_state = 7},
  [318] = {.lex_state = 0, .external_lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 5},
  [321] = {.lex_state = 0, .external_lex_state = 6},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 23},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 0, .external_lex_state = 2},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0, .external_lex_state = 2},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0, .external_lex_state = 2},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 29},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0, .external_lex_state = 2},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0, .external_lex_state = 9},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 29},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 0, .external_lex_state = 5},
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
    [ts_external_token__quoted_template_end] = true,
    [ts_external_token__template_literal_chunk] = true,
  },
  [8] = {
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
    [sym_attribute] = STATE(232),
    [sym_block] = STATE(232),
    [sym__newlines] = STATE(232),
    [aux_sym_body_repeat1] = STATE(232),
    [aux_sym__newlines_repeat1] = STATE(252),
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(27), 1,
      sym__newlines,
    STATE(43), 1,
      sym_for_intro,
    STATE(89), 1,
      sym_quoted_template,
    STATE(143), 1,
      sym__object_end,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(246), 1,
      sym_object_elem,
    STATE(285), 1,
      sym__object_elems,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(20), 1,
      sym__newlines,
    STATE(60), 1,
      sym_for_intro,
    STATE(89), 1,
      sym_quoted_template,
    STATE(186), 1,
      sym__object_end,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(246), 1,
      sym_object_elem,
    STATE(280), 1,
      sym__object_elems,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(22), 1,
      sym__newlines,
    STATE(49), 1,
      sym_for_intro,
    STATE(89), 1,
      sym_quoted_template,
    STATE(110), 1,
      sym__object_end,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(246), 1,
      sym_object_elem,
    STATE(276), 1,
      sym__object_elems,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(36), 1,
      sym__newlines,
    STATE(48), 1,
      sym_for_intro,
    STATE(112), 1,
      sym__tuple_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(236), 1,
      sym_expression,
    STATE(279), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(37), 1,
      sym__newlines,
    STATE(46), 1,
      sym_for_intro,
    STATE(168), 1,
      sym_quoted_template,
    STATE(184), 1,
      sym__tuple_end,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(236), 1,
      sym_expression,
    STATE(275), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(30), 1,
      sym__newlines,
    STATE(64), 1,
      sym_for_intro,
    STATE(145), 1,
      sym__tuple_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(236), 1,
      sym_expression,
    STATE(268), 1,
      sym__tuple_elems,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(141), 1,
      sym__function_call_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(265), 1,
      sym_expression,
    STATE(273), 1,
      sym_function_arguments,
    STATE(364), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(107), 1,
      sym__function_call_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(265), 1,
      sym_expression,
    STATE(274), 1,
      sym_function_arguments,
    STATE(324), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(194), 1,
      sym__function_call_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(265), 1,
      sym_expression,
    STATE(267), 1,
      sym_function_arguments,
    STATE(349), 1,
      sym__newlines,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(26), 1,
      sym__newlines,
    STATE(89), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(19), 1,
      sym__newlines,
    STATE(89), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(21), 1,
      sym__newlines,
    STATE(89), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(35), 1,
      sym__newlines,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(301), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(33), 1,
      sym__newlines,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(301), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(29), 1,
      sym__newlines,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(301), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(42), 1,
      sym__newlines,
    STATE(89), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1484] = 23,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(56), 1,
      sym__newlines,
    STATE(168), 1,
      sym_quoted_template,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(301), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1567] = 22,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(316), 1,
      sym_expression,
    STATE(319), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1648] = 23,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(191), 1,
      sym__object_end,
    STATE(249), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1731] = 22,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(316), 1,
      sym_expression,
    STATE(319), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(83), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1812] = 23,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym__object_end,
    STATE(249), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1895] = 22,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
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
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
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
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2057] = 22,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
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
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2138] = 22,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(316), 1,
      sym_expression,
    STATE(319), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(71), 2,
      sym__newline,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2219] = 23,
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
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(167), 1,
      sym__object_end,
    STATE(249), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2302] = 21,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(262), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(89), 2,
      sym__newline,
      anon_sym_RPAREN,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2380] = 21,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(293), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(91), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2458] = 22,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(147), 1,
      sym__tuple_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(240), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2538] = 22,
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
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      sym__newline,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(272), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2618] = 22,
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
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(272), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2698] = 21,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(293), 1,
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
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2776] = 22,
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
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(272), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2856] = 21,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(293), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 2,
      sym__newline,
      anon_sym_RBRACK,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2934] = 22,
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
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(98), 1,
      sym__tuple_end,
    STATE(168), 1,
      sym_quoted_template,
    STATE(240), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3014] = 22,
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
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym__tuple_end,
    STATE(240), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
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
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(308), 1,
      sym_object_elem,
    STATE(316), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3242] = 21,
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
    ACTIONS(97), 1,
      sym__newline,
    STATE(2), 1,
      sym__object_start,
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(272), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3319] = 21,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    STATE(314), 1,
      sym_expression,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(305), 2,
      sym_conditional,
      sym_operation,
    STATE(318), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(83), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3396] = 21,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(316), 1,
      sym_expression,
    STATE(319), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3473] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(325), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3547] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(369), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3621] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(258), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3695] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(283), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3769] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(361), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3843] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(277), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3917] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(341), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3991] = 20,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(302), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4065] = 20,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    STATE(313), 1,
      sym_expression,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(305), 2,
      sym_conditional,
      sym_operation,
    STATE(318), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(83), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4139] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(257), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4213] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(370), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4287] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(368), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4361] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(365), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4435] = 20,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(293), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4509] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(231), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4583] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(344), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4657] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(350), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4731] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(327), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4805] = 20,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(287), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4879] = 20,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(247), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4953] = 20,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    STATE(270), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(248), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(256), 2,
      sym_conditional,
      sym_operation,
    STATE(75), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5027] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(269), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5101] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(266), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5175] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(358), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5249] = 20,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    STATE(320), 1,
      sym_expression,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(149), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(305), 2,
      sym_conditional,
      sym_operation,
    STATE(318), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(83), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5323] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(357), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5397] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(354), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5471] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(366), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5545] = 20,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    STATE(312), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(233), 2,
      sym_conditional,
      sym_operation,
    STATE(234), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(38), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [5619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(74), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(155), 4,
      anon_sym_EQ,
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
  [5666] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(72), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(159), 4,
      anon_sym_EQ,
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
  [5713] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(74), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(163), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 20,
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
  [5760] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(193), 1,
      anon_sym_AMP_AMP,
    ACTIONS(195), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(181), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(183), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(191), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
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
  [5827] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(163), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(76), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(165), 19,
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
  [5872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(159), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(78), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
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
  [5917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(155), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(76), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
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
  [5962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__function_call_start,
    ACTIONS(203), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 20,
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
  [6002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(82), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(209), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 20,
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
  [6042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(80), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 20,
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
  [6082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(82), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(219), 5,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 20,
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
  [6122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    ACTIONS(246), 1,
      anon_sym_AMP_AMP,
    ACTIONS(248), 1,
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
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(109), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [6185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 20,
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
  [6219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 20,
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
  [6253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(86), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(219), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 19,
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
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 20,
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
  [6325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(86), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(209), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 19,
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
  [6363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 20,
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
  [6397] = 3,
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
  [6431] = 3,
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
  [6465] = 3,
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
  [6499] = 3,
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
  [6533] = 3,
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
  [6567] = 3,
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
  [6601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 20,
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
  [6635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(88), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 19,
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
  [6673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 20,
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
  [6707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 20,
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
  [6741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 20,
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
  [6775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 20,
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
  [6809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 20,
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
  [6843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 20,
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
  [6877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 20,
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
  [6911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 20,
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
  [6945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 20,
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
  [6979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 20,
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
  [7013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 6,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 20,
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
  [7047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__function_call_start,
    ACTIONS(203), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 19,
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
  [7085] = 3,
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
  [7119] = 3,
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
  [7153] = 3,
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
  [7187] = 3,
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
  [7221] = 3,
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
  [7255] = 3,
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
  [7289] = 3,
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
  [7323] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(219), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(159), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(126), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
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
  [7423] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(196), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7482] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(216), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7541] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(197), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7600] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(199), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(163), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(165), 15,
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
  [7700] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(200), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7759] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(205), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    ACTIONS(155), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(123), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
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
  [7859] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(222), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7918] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(223), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [7977] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(201), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8036] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(215), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8095] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(214), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8154] = 16,
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
    STATE(4), 1,
      sym__object_start,
    STATE(5), 1,
      sym__tuple_start,
    STATE(89), 1,
      sym_quoted_template,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(111), 2,
      sym_tuple,
      sym_object,
    STATE(116), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(195), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8213] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(213), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8272] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(212), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8331] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(211), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8390] = 16,
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
    STATE(7), 1,
      sym__tuple_start,
    STATE(168), 1,
      sym_quoted_template,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(164), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(165), 2,
      sym_tuple,
      sym_object,
    STATE(169), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(210), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8449] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(224), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8508] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(221), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8567] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(220), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8626] = 16,
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
    STATE(3), 1,
      sym__object_start,
    STATE(6), 1,
      sym__tuple_start,
    STATE(174), 1,
      sym_quoted_template,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(177), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(178), 2,
      sym_tuple,
      sym_object,
    STATE(180), 2,
      sym_bool_lit,
      sym_string_lit,
    STATE(225), 7,
      sym__expr_term,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [8685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 19,
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
  [8717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 19,
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
  [8749] = 3,
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
  [8781] = 3,
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
  [8813] = 3,
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
  [8845] = 3,
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
  [8877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 19,
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
  [8909] = 3,
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
  [8941] = 3,
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
  [8973] = 3,
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
  [9005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 19,
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
  [9037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 19,
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
  [9069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 19,
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
  [9101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 19,
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
  [9133] = 3,
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
  [9165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 19,
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
  [9197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 19,
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
  [9229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 19,
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
  [9261] = 3,
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
  [9293] = 3,
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
  [9325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 19,
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
  [9357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 19,
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
  [9389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 19,
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
  [9421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 19,
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
  [9453] = 3,
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
  [9485] = 3,
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
  [9517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 19,
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
  [9549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 19,
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
  [9581] = 3,
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
  [9613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    STATE(170), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(219), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 15,
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
  [9647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    STATE(170), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(209), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 15,
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
  [9681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DOT,
    STATE(171), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(215), 4,
      anon_sym_LBRACK,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 15,
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
  [9715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym__function_call_start,
    ACTIONS(203), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 15,
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
  [9749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 15,
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
  [9777] = 3,
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
  [9805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 15,
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
  [9833] = 3,
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
  [9861] = 3,
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
  [9889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 15,
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
  [9917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 15,
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
  [9945] = 3,
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
  [9973] = 3,
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
  [10001] = 3,
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
  [10029] = 3,
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
  [10057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 15,
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
  [10085] = 3,
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
  [10113] = 3,
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
  [10141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 15,
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
  [10169] = 3,
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
  [10197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 15,
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
  [10225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 15,
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
  [10253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 15,
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
    ACTIONS(339), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 15,
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
  [10309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(337), 15,
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
  [10337] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10379] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10421] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10463] = 3,
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
  [10491] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10533] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10575] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 15,
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
  [10645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 15,
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
  [10673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 15,
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
  [10701] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_STAR,
    ACTIONS(117), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(390), 1,
      anon_sym_EQ,
    STATE(113), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(114), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(115), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(392), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [10743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 15,
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
  [10771] = 3,
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
  [10799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_LBRACK,
      anon_sym_DOT,
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
  [10827] = 3,
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
  [10855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [10893] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [10931] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [10969] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11045] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(388), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11083] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_DOT_STAR,
    ACTIONS(179), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(148), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(149), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(150), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(392), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__newline,
    STATE(218), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(396), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(394), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__newline,
    STATE(218), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(402), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(400), 9,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11209] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11243] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(392), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11277] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11311] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11345] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11379] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_DOT_STAR,
    ACTIONS(232), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    STATE(182), 2,
      sym_new_index,
      sym_legacy_index,
    STATE(183), 2,
      sym_attr_splat,
      sym_full_splat,
    ACTIONS(388), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
    STATE(181), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
  [11413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(407), 7,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [11432] = 3,
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
  [11451] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(261), 1,
      sym__block_end,
    STATE(347), 1,
      sym_body,
    STATE(232), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [11479] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(260), 1,
      sym__block_end,
    STATE(353), 1,
      sym_body,
    STATE(232), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [11507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(424), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(230), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [11530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(429), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [11547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(230), 4,
      sym_attribute,
      sym_block,
      sym__newlines,
      aux_sym_body_repeat1,
  [11570] = 3,
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
  [11587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(435), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [11604] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__quoted_template_end,
    ACTIONS(439), 1,
      sym__template_literal_chunk,
    ACTIONS(442), 1,
      sym__template_interpolation_start,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(235), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11626] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    STATE(14), 1,
      sym__comma,
    STATE(251), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(334), 1,
      sym__newlines,
  [11654] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__quoted_template_end,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(235), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11676] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    ACTIONS(457), 1,
      sym__quoted_template_end,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(315), 1,
      sym_template_literal,
    STATE(237), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    ACTIONS(459), 1,
      sym__quoted_template_end,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(235), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11722] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym__comma,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(255), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(340), 1,
      sym__newlines,
  [11750] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    ACTIONS(463), 1,
      sym__quoted_template_end,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(307), 1,
      sym_template_literal,
    STATE(239), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    ACTIONS(465), 1,
      sym__quoted_template_end,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(235), 4,
      sym_template_literal,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__template_literal_chunk,
    ACTIONS(455), 1,
      sym__template_interpolation_start,
    ACTIONS(467), 1,
      sym__quoted_template_end,
    STATE(295), 1,
      aux_sym_template_literal_repeat1,
    STATE(304), 1,
      sym_template_literal,
    STATE(242), 3,
      sym_template_interpolation,
      sym_template_directive,
      aux_sym_quoted_template_repeat1,
  [11820] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      sym__comma,
    STATE(24), 1,
      sym__newlines,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      aux_sym__object_elems_repeat1,
  [11845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__newline,
    STATE(245), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(400), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [11862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(23), 1,
      sym__newlines,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(244), 1,
      aux_sym__object_elems_repeat1,
  [11887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
      anon_sym_QMARK,
  [11913] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      sym__comma,
    STATE(24), 1,
      sym__newlines,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(254), 1,
      aux_sym__object_elems_repeat1,
  [11938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      sym__newline,
    STATE(17), 1,
      sym__comma,
    STATE(39), 1,
      sym__newlines,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      aux_sym__object_elems_repeat1,
  [11963] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym__comma,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(271), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(340), 1,
      sym__newlines,
  [11988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__newline,
    STATE(245), 1,
      aux_sym__newlines_repeat1,
    ACTIONS(394), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12005] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      sym_identifier,
    ACTIONS(494), 1,
      sym__quoted_template_start,
    STATE(229), 1,
      sym__block_start,
    STATE(264), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12028] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      sym__comma,
    STATE(25), 1,
      sym__newlines,
    STATE(217), 1,
      aux_sym__newlines_repeat1,
    STATE(250), 1,
      aux_sym__object_elems_repeat1,
  [12053] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym__comma,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(271), 1,
      aux_sym__tuple_elems_repeat1,
    STATE(336), 1,
      sym__newlines,
  [12078] = 2,
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
  [12091] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(504), 1,
      sym_ellipsis,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym__object_end,
    STATE(339), 1,
      sym_for_cond,
  [12113] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(510), 1,
      sym_ellipsis,
    STATE(175), 1,
      sym__object_end,
    STATE(343), 1,
      sym_for_cond,
  [12135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(294), 1,
      sym__newlines,
    ACTIONS(512), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(290), 1,
      sym__newlines,
    ACTIONS(514), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(288), 1,
      sym__newlines,
    ACTIONS(516), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      sym_ellipsis,
    ACTIONS(522), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_function_arguments_repeat1,
  [12205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(289), 1,
      sym__newlines,
    ACTIONS(524), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym__quoted_template_start,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(228), 1,
      sym__block_start,
    STATE(278), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      sym_ellipsis,
    ACTIONS(536), 1,
      sym__newline,
    STATE(284), 1,
      aux_sym_function_arguments_repeat1,
  [12263] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym_ellipsis,
    STATE(159), 1,
      sym__object_end,
    STATE(356), 1,
      sym_for_cond,
  [12285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym__function_call_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(332), 1,
      sym__newlines,
  [12304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym__tuple_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(342), 1,
      sym__newlines,
  [12323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym__tuple_end,
    STATE(337), 1,
      sym_for_cond,
  [12342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(546), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [12355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym__comma,
    STATE(271), 1,
      aux_sym__tuple_elems_repeat1,
    ACTIONS(551), 2,
      sym__newline,
      anon_sym_RBRACK,
  [12372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(553), 4,
      sym__newline,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_ellipsis,
  [12385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__function_call_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(331), 1,
      sym__newlines,
  [12404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym__function_call_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(360), 1,
      sym__newlines,
  [12423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym__tuple_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(328), 1,
      sym__newlines,
  [12442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym__object_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(323), 1,
      sym__newlines,
  [12461] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__tuple_end,
    STATE(363), 1,
      sym_for_cond,
  [12480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym__quoted_template_start,
    STATE(278), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [12497] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym__tuple_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(322), 1,
      sym__newlines,
  [12516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym__object_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(330), 1,
      sym__newlines,
  [12535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      sym_ellipsis,
    ACTIONS(573), 1,
      sym__newline,
    STATE(282), 1,
      aux_sym_function_arguments_repeat1,
  [12554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(553), 3,
      sym__newline,
      anon_sym_RPAREN,
      sym_ellipsis,
  [12569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym__tuple_end,
    STATE(335), 1,
      sym_for_cond,
  [12588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      sym_ellipsis,
    ACTIONS(522), 1,
      sym__newline,
    STATE(282), 1,
      aux_sym_function_arguments_repeat1,
  [12607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym__object_end,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(351), 1,
      sym__newlines,
  [12626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [12638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__newline,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    STATE(252), 1,
      aux_sym__newlines_repeat1,
    STATE(296), 1,
      sym__newlines,
  [12654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__template_literal_chunk,
    STATE(291), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(580), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [12698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym__object_end,
    STATE(345), 1,
      sym_for_cond,
  [12714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(587), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__template_literal_chunk,
    STATE(291), 1,
      aux_sym_template_literal_repeat1,
    ACTIONS(591), 2,
      sym__quoted_template_end,
      sym__template_interpolation_start,
  [12750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 4,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [12760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym__object_end,
    STATE(348), 1,
      sym_for_cond,
  [12776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [12788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__newline,
      anon_sym_RPAREN,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      sym_ellipsis,
  [12800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_if,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__object_end,
    STATE(338), 1,
      sym_for_cond,
  [12816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(551), 3,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_QMARK,
    ACTIONS(603), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [12849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__quoted_template_end,
    ACTIONS(610), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [12860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [12869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__quoted_template_end,
    ACTIONS(612), 1,
      sym__template_literal_chunk,
    STATE(317), 1,
      aux_sym_template_literal_repeat1,
  [12882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__quoted_template_end,
    ACTIONS(610), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [12893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [12902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__template_literal_chunk,
    STATE(306), 1,
      aux_sym_template_literal_repeat1,
    STATE(371), 1,
      sym_template_literal,
  [12915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 3,
      sym__quoted_template_start,
      anon_sym_LBRACE,
      sym_identifier,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [12933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(621), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [12944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [12953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_QMARK,
    ACTIONS(625), 1,
      sym_strip_marker,
    ACTIONS(627), 1,
      sym__template_interpolation_end,
  [12966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__quoted_template_end,
    ACTIONS(610), 2,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [12977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(632), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [12988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__quoted_template_end,
    ACTIONS(634), 1,
      sym__template_literal_chunk,
    STATE(317), 1,
      aux_sym_template_literal_repeat1,
  [13001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 3,
      sym__template_interpolation_end,
      anon_sym_QMARK,
      sym_strip_marker,
  [13010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 3,
      sym__newline,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [13019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_QMARK,
    ACTIONS(639), 1,
      sym_strip_marker,
    ACTIONS(641), 1,
      sym__template_interpolation_end,
  [13032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 3,
      sym__quoted_template_end,
      sym__template_literal_chunk,
      sym__template_interpolation_start,
  [13041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym__tuple_end,
  [13051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__object_end,
  [13061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym__function_call_end,
  [13071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(649), 1,
      anon_sym_EQ_GT,
  [13081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym__block_end,
  [13091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(653), 1,
      anon_sym_EQ_GT,
  [13101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym__tuple_end,
  [13111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym__object_end,
  [13129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym__function_call_end,
  [13139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym__function_call_end,
  [13149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      aux_sym_legacy_index_token1,
  [13159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym__tuple_end,
  [13177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym__tuple_end,
  [13195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym__object_end,
  [13205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym__object_end,
  [13215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__newline,
      anon_sym_RBRACK,
  [13223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(673), 1,
      anon_sym_EQ_GT,
  [13233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym__tuple_end,
  [13243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym__object_end,
  [13253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(677), 1,
      anon_sym_COLON,
  [13263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym__object_end,
  [13273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym__block_end,
  [13291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym__object_end,
  [13301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym__function_call_end,
  [13311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(685), 1,
      anon_sym_COLON,
  [13321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym__object_end,
  [13331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym__block_end,
  [13349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [13359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(695), 1,
      aux_sym_legacy_index_token1,
  [13369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      sym__object_end,
  [13379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(697), 1,
      anon_sym_COLON,
  [13389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
  [13399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_in,
  [13409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym__function_call_end,
  [13419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [13429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__newline,
      anon_sym_RPAREN,
  [13437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym__tuple_end,
  [13447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__function_call_end,
  [13457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
  [13467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [13477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      aux_sym_legacy_index_token1,
  [13487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(719), 1,
      anon_sym_COLON,
  [13497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(721), 1,
      anon_sym_COLON,
  [13507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_QMARK,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [13517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__quoted_template_end,
  [13524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__template_interpolation_end,
  [13531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
  [13538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_in,
  [13545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
  [13552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_identifier,
  [13559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
  [13566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [13573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__template_interpolation_end,
  [13580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
  [13587] = 2,
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
  [SMALL_STATE(19)] = 1567,
  [SMALL_STATE(20)] = 1648,
  [SMALL_STATE(21)] = 1731,
  [SMALL_STATE(22)] = 1812,
  [SMALL_STATE(23)] = 1895,
  [SMALL_STATE(24)] = 1976,
  [SMALL_STATE(25)] = 2057,
  [SMALL_STATE(26)] = 2138,
  [SMALL_STATE(27)] = 2219,
  [SMALL_STATE(28)] = 2302,
  [SMALL_STATE(29)] = 2380,
  [SMALL_STATE(30)] = 2458,
  [SMALL_STATE(31)] = 2538,
  [SMALL_STATE(32)] = 2618,
  [SMALL_STATE(33)] = 2698,
  [SMALL_STATE(34)] = 2776,
  [SMALL_STATE(35)] = 2856,
  [SMALL_STATE(36)] = 2934,
  [SMALL_STATE(37)] = 3014,
  [SMALL_STATE(38)] = 3094,
  [SMALL_STATE(39)] = 3165,
  [SMALL_STATE(40)] = 3242,
  [SMALL_STATE(41)] = 3319,
  [SMALL_STATE(42)] = 3396,
  [SMALL_STATE(43)] = 3473,
  [SMALL_STATE(44)] = 3547,
  [SMALL_STATE(45)] = 3621,
  [SMALL_STATE(46)] = 3695,
  [SMALL_STATE(47)] = 3769,
  [SMALL_STATE(48)] = 3843,
  [SMALL_STATE(49)] = 3917,
  [SMALL_STATE(50)] = 3991,
  [SMALL_STATE(51)] = 4065,
  [SMALL_STATE(52)] = 4139,
  [SMALL_STATE(53)] = 4213,
  [SMALL_STATE(54)] = 4287,
  [SMALL_STATE(55)] = 4361,
  [SMALL_STATE(56)] = 4435,
  [SMALL_STATE(57)] = 4509,
  [SMALL_STATE(58)] = 4583,
  [SMALL_STATE(59)] = 4657,
  [SMALL_STATE(60)] = 4731,
  [SMALL_STATE(61)] = 4805,
  [SMALL_STATE(62)] = 4879,
  [SMALL_STATE(63)] = 4953,
  [SMALL_STATE(64)] = 5027,
  [SMALL_STATE(65)] = 5101,
  [SMALL_STATE(66)] = 5175,
  [SMALL_STATE(67)] = 5249,
  [SMALL_STATE(68)] = 5323,
  [SMALL_STATE(69)] = 5397,
  [SMALL_STATE(70)] = 5471,
  [SMALL_STATE(71)] = 5545,
  [SMALL_STATE(72)] = 5619,
  [SMALL_STATE(73)] = 5666,
  [SMALL_STATE(74)] = 5713,
  [SMALL_STATE(75)] = 5760,
  [SMALL_STATE(76)] = 5827,
  [SMALL_STATE(77)] = 5872,
  [SMALL_STATE(78)] = 5917,
  [SMALL_STATE(79)] = 5962,
  [SMALL_STATE(80)] = 6002,
  [SMALL_STATE(81)] = 6042,
  [SMALL_STATE(82)] = 6082,
  [SMALL_STATE(83)] = 6122,
  [SMALL_STATE(84)] = 6185,
  [SMALL_STATE(85)] = 6219,
  [SMALL_STATE(86)] = 6253,
  [SMALL_STATE(87)] = 6291,
  [SMALL_STATE(88)] = 6325,
  [SMALL_STATE(89)] = 6363,
  [SMALL_STATE(90)] = 6397,
  [SMALL_STATE(91)] = 6431,
  [SMALL_STATE(92)] = 6465,
  [SMALL_STATE(93)] = 6499,
  [SMALL_STATE(94)] = 6533,
  [SMALL_STATE(95)] = 6567,
  [SMALL_STATE(96)] = 6601,
  [SMALL_STATE(97)] = 6635,
  [SMALL_STATE(98)] = 6673,
  [SMALL_STATE(99)] = 6707,
  [SMALL_STATE(100)] = 6741,
  [SMALL_STATE(101)] = 6775,
  [SMALL_STATE(102)] = 6809,
  [SMALL_STATE(103)] = 6843,
  [SMALL_STATE(104)] = 6877,
  [SMALL_STATE(105)] = 6911,
  [SMALL_STATE(106)] = 6945,
  [SMALL_STATE(107)] = 6979,
  [SMALL_STATE(108)] = 7013,
  [SMALL_STATE(109)] = 7047,
  [SMALL_STATE(110)] = 7085,
  [SMALL_STATE(111)] = 7119,
  [SMALL_STATE(112)] = 7153,
  [SMALL_STATE(113)] = 7187,
  [SMALL_STATE(114)] = 7221,
  [SMALL_STATE(115)] = 7255,
  [SMALL_STATE(116)] = 7289,
  [SMALL_STATE(117)] = 7323,
  [SMALL_STATE(118)] = 7382,
  [SMALL_STATE(119)] = 7423,
  [SMALL_STATE(120)] = 7482,
  [SMALL_STATE(121)] = 7541,
  [SMALL_STATE(122)] = 7600,
  [SMALL_STATE(123)] = 7659,
  [SMALL_STATE(124)] = 7700,
  [SMALL_STATE(125)] = 7759,
  [SMALL_STATE(126)] = 7818,
  [SMALL_STATE(127)] = 7859,
  [SMALL_STATE(128)] = 7918,
  [SMALL_STATE(129)] = 7977,
  [SMALL_STATE(130)] = 8036,
  [SMALL_STATE(131)] = 8095,
  [SMALL_STATE(132)] = 8154,
  [SMALL_STATE(133)] = 8213,
  [SMALL_STATE(134)] = 8272,
  [SMALL_STATE(135)] = 8331,
  [SMALL_STATE(136)] = 8390,
  [SMALL_STATE(137)] = 8449,
  [SMALL_STATE(138)] = 8508,
  [SMALL_STATE(139)] = 8567,
  [SMALL_STATE(140)] = 8626,
  [SMALL_STATE(141)] = 8685,
  [SMALL_STATE(142)] = 8717,
  [SMALL_STATE(143)] = 8749,
  [SMALL_STATE(144)] = 8781,
  [SMALL_STATE(145)] = 8813,
  [SMALL_STATE(146)] = 8845,
  [SMALL_STATE(147)] = 8877,
  [SMALL_STATE(148)] = 8909,
  [SMALL_STATE(149)] = 8941,
  [SMALL_STATE(150)] = 8973,
  [SMALL_STATE(151)] = 9005,
  [SMALL_STATE(152)] = 9037,
  [SMALL_STATE(153)] = 9069,
  [SMALL_STATE(154)] = 9101,
  [SMALL_STATE(155)] = 9133,
  [SMALL_STATE(156)] = 9165,
  [SMALL_STATE(157)] = 9197,
  [SMALL_STATE(158)] = 9229,
  [SMALL_STATE(159)] = 9261,
  [SMALL_STATE(160)] = 9293,
  [SMALL_STATE(161)] = 9325,
  [SMALL_STATE(162)] = 9357,
  [SMALL_STATE(163)] = 9389,
  [SMALL_STATE(164)] = 9421,
  [SMALL_STATE(165)] = 9453,
  [SMALL_STATE(166)] = 9485,
  [SMALL_STATE(167)] = 9517,
  [SMALL_STATE(168)] = 9549,
  [SMALL_STATE(169)] = 9581,
  [SMALL_STATE(170)] = 9613,
  [SMALL_STATE(171)] = 9647,
  [SMALL_STATE(172)] = 9681,
  [SMALL_STATE(173)] = 9715,
  [SMALL_STATE(174)] = 9749,
  [SMALL_STATE(175)] = 9777,
  [SMALL_STATE(176)] = 9805,
  [SMALL_STATE(177)] = 9833,
  [SMALL_STATE(178)] = 9861,
  [SMALL_STATE(179)] = 9889,
  [SMALL_STATE(180)] = 9917,
  [SMALL_STATE(181)] = 9945,
  [SMALL_STATE(182)] = 9973,
  [SMALL_STATE(183)] = 10001,
  [SMALL_STATE(184)] = 10029,
  [SMALL_STATE(185)] = 10057,
  [SMALL_STATE(186)] = 10085,
  [SMALL_STATE(187)] = 10113,
  [SMALL_STATE(188)] = 10141,
  [SMALL_STATE(189)] = 10169,
  [SMALL_STATE(190)] = 10197,
  [SMALL_STATE(191)] = 10225,
  [SMALL_STATE(192)] = 10253,
  [SMALL_STATE(193)] = 10281,
  [SMALL_STATE(194)] = 10309,
  [SMALL_STATE(195)] = 10337,
  [SMALL_STATE(196)] = 10379,
  [SMALL_STATE(197)] = 10421,
  [SMALL_STATE(198)] = 10463,
  [SMALL_STATE(199)] = 10491,
  [SMALL_STATE(200)] = 10533,
  [SMALL_STATE(201)] = 10575,
  [SMALL_STATE(202)] = 10617,
  [SMALL_STATE(203)] = 10645,
  [SMALL_STATE(204)] = 10673,
  [SMALL_STATE(205)] = 10701,
  [SMALL_STATE(206)] = 10743,
  [SMALL_STATE(207)] = 10771,
  [SMALL_STATE(208)] = 10799,
  [SMALL_STATE(209)] = 10827,
  [SMALL_STATE(210)] = 10855,
  [SMALL_STATE(211)] = 10893,
  [SMALL_STATE(212)] = 10931,
  [SMALL_STATE(213)] = 10969,
  [SMALL_STATE(214)] = 11007,
  [SMALL_STATE(215)] = 11045,
  [SMALL_STATE(216)] = 11083,
  [SMALL_STATE(217)] = 11121,
  [SMALL_STATE(218)] = 11148,
  [SMALL_STATE(219)] = 11175,
  [SMALL_STATE(220)] = 11209,
  [SMALL_STATE(221)] = 11243,
  [SMALL_STATE(222)] = 11277,
  [SMALL_STATE(223)] = 11311,
  [SMALL_STATE(224)] = 11345,
  [SMALL_STATE(225)] = 11379,
  [SMALL_STATE(226)] = 11413,
  [SMALL_STATE(227)] = 11432,
  [SMALL_STATE(228)] = 11451,
  [SMALL_STATE(229)] = 11479,
  [SMALL_STATE(230)] = 11507,
  [SMALL_STATE(231)] = 11530,
  [SMALL_STATE(232)] = 11547,
  [SMALL_STATE(233)] = 11570,
  [SMALL_STATE(234)] = 11587,
  [SMALL_STATE(235)] = 11604,
  [SMALL_STATE(236)] = 11626,
  [SMALL_STATE(237)] = 11654,
  [SMALL_STATE(238)] = 11676,
  [SMALL_STATE(239)] = 11700,
  [SMALL_STATE(240)] = 11722,
  [SMALL_STATE(241)] = 11750,
  [SMALL_STATE(242)] = 11774,
  [SMALL_STATE(243)] = 11796,
  [SMALL_STATE(244)] = 11820,
  [SMALL_STATE(245)] = 11845,
  [SMALL_STATE(246)] = 11862,
  [SMALL_STATE(247)] = 11887,
  [SMALL_STATE(248)] = 11900,
  [SMALL_STATE(249)] = 11913,
  [SMALL_STATE(250)] = 11938,
  [SMALL_STATE(251)] = 11963,
  [SMALL_STATE(252)] = 11988,
  [SMALL_STATE(253)] = 12005,
  [SMALL_STATE(254)] = 12028,
  [SMALL_STATE(255)] = 12053,
  [SMALL_STATE(256)] = 12078,
  [SMALL_STATE(257)] = 12091,
  [SMALL_STATE(258)] = 12113,
  [SMALL_STATE(259)] = 12135,
  [SMALL_STATE(260)] = 12151,
  [SMALL_STATE(261)] = 12167,
  [SMALL_STATE(262)] = 12183,
  [SMALL_STATE(263)] = 12205,
  [SMALL_STATE(264)] = 12221,
  [SMALL_STATE(265)] = 12241,
  [SMALL_STATE(266)] = 12263,
  [SMALL_STATE(267)] = 12285,
  [SMALL_STATE(268)] = 12304,
  [SMALL_STATE(269)] = 12323,
  [SMALL_STATE(270)] = 12342,
  [SMALL_STATE(271)] = 12355,
  [SMALL_STATE(272)] = 12372,
  [SMALL_STATE(273)] = 12385,
  [SMALL_STATE(274)] = 12404,
  [SMALL_STATE(275)] = 12423,
  [SMALL_STATE(276)] = 12442,
  [SMALL_STATE(277)] = 12461,
  [SMALL_STATE(278)] = 12480,
  [SMALL_STATE(279)] = 12497,
  [SMALL_STATE(280)] = 12516,
  [SMALL_STATE(281)] = 12535,
  [SMALL_STATE(282)] = 12554,
  [SMALL_STATE(283)] = 12569,
  [SMALL_STATE(284)] = 12588,
  [SMALL_STATE(285)] = 12607,
  [SMALL_STATE(286)] = 12626,
  [SMALL_STATE(287)] = 12638,
  [SMALL_STATE(288)] = 12654,
  [SMALL_STATE(289)] = 12664,
  [SMALL_STATE(290)] = 12674,
  [SMALL_STATE(291)] = 12684,
  [SMALL_STATE(292)] = 12698,
  [SMALL_STATE(293)] = 12714,
  [SMALL_STATE(294)] = 12726,
  [SMALL_STATE(295)] = 12736,
  [SMALL_STATE(296)] = 12750,
  [SMALL_STATE(297)] = 12760,
  [SMALL_STATE(298)] = 12776,
  [SMALL_STATE(299)] = 12788,
  [SMALL_STATE(300)] = 12800,
  [SMALL_STATE(301)] = 12816,
  [SMALL_STATE(302)] = 12828,
  [SMALL_STATE(303)] = 12840,
  [SMALL_STATE(304)] = 12849,
  [SMALL_STATE(305)] = 12860,
  [SMALL_STATE(306)] = 12869,
  [SMALL_STATE(307)] = 12882,
  [SMALL_STATE(308)] = 12893,
  [SMALL_STATE(309)] = 12902,
  [SMALL_STATE(310)] = 12915,
  [SMALL_STATE(311)] = 12924,
  [SMALL_STATE(312)] = 12933,
  [SMALL_STATE(313)] = 12944,
  [SMALL_STATE(314)] = 12953,
  [SMALL_STATE(315)] = 12966,
  [SMALL_STATE(316)] = 12977,
  [SMALL_STATE(317)] = 12988,
  [SMALL_STATE(318)] = 13001,
  [SMALL_STATE(319)] = 13010,
  [SMALL_STATE(320)] = 13019,
  [SMALL_STATE(321)] = 13032,
  [SMALL_STATE(322)] = 13041,
  [SMALL_STATE(323)] = 13051,
  [SMALL_STATE(324)] = 13061,
  [SMALL_STATE(325)] = 13071,
  [SMALL_STATE(326)] = 13081,
  [SMALL_STATE(327)] = 13091,
  [SMALL_STATE(328)] = 13101,
  [SMALL_STATE(329)] = 13111,
  [SMALL_STATE(330)] = 13119,
  [SMALL_STATE(331)] = 13129,
  [SMALL_STATE(332)] = 13139,
  [SMALL_STATE(333)] = 13149,
  [SMALL_STATE(334)] = 13159,
  [SMALL_STATE(335)] = 13167,
  [SMALL_STATE(336)] = 13177,
  [SMALL_STATE(337)] = 13185,
  [SMALL_STATE(338)] = 13195,
  [SMALL_STATE(339)] = 13205,
  [SMALL_STATE(340)] = 13215,
  [SMALL_STATE(341)] = 13223,
  [SMALL_STATE(342)] = 13233,
  [SMALL_STATE(343)] = 13243,
  [SMALL_STATE(344)] = 13253,
  [SMALL_STATE(345)] = 13263,
  [SMALL_STATE(346)] = 13273,
  [SMALL_STATE(347)] = 13281,
  [SMALL_STATE(348)] = 13291,
  [SMALL_STATE(349)] = 13301,
  [SMALL_STATE(350)] = 13311,
  [SMALL_STATE(351)] = 13321,
  [SMALL_STATE(352)] = 13331,
  [SMALL_STATE(353)] = 13339,
  [SMALL_STATE(354)] = 13349,
  [SMALL_STATE(355)] = 13359,
  [SMALL_STATE(356)] = 13369,
  [SMALL_STATE(357)] = 13379,
  [SMALL_STATE(358)] = 13389,
  [SMALL_STATE(359)] = 13399,
  [SMALL_STATE(360)] = 13409,
  [SMALL_STATE(361)] = 13419,
  [SMALL_STATE(362)] = 13429,
  [SMALL_STATE(363)] = 13437,
  [SMALL_STATE(364)] = 13447,
  [SMALL_STATE(365)] = 13457,
  [SMALL_STATE(366)] = 13467,
  [SMALL_STATE(367)] = 13477,
  [SMALL_STATE(368)] = 13487,
  [SMALL_STATE(369)] = 13497,
  [SMALL_STATE(370)] = 13507,
  [SMALL_STATE(371)] = 13517,
  [SMALL_STATE(372)] = 13524,
  [SMALL_STATE(373)] = 13531,
  [SMALL_STATE(374)] = 13538,
  [SMALL_STATE(375)] = 13545,
  [SMALL_STATE(376)] = 13552,
  [SMALL_STATE(377)] = 13559,
  [SMALL_STATE(378)] = 13566,
  [SMALL_STATE(379)] = 13573,
  [SMALL_STATE(380)] = 13580,
  [SMALL_STATE(381)] = 13587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(66),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(355),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(55),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(333),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(375),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_index, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_index, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(373),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_index, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_index, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr_term, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr_term, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(53),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(367),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(376),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newlines, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newlines, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__newlines_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(218),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(253),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(252),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(295),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(41),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuple_elems, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__newlines_repeat1, 2), SHIFT_REPEAT(245),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_elems, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(17),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 2), SHIFT_REPEAT(217),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 3),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2), SHIFT_REPEAT(18),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(278),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(309),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(40),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(291),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuple_elems_repeat1, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_literal, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 5),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(198),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(95),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 1), SHIFT(160),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_literal_repeat1, 2), SHIFT_REPEAT(317),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_elems_repeat1, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
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
