#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_LBRACK = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COLON = 14,
  anon_sym_DOT = 15,
  anon_sym_STAR = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_for = 18,
  anon_sym_in = 19,
  anon_sym_if = 20,
  sym_ellipsis = 21,
  anon_sym_QMARK = 22,
  anon_sym_DASH = 23,
  anon_sym_BANG = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_PLUS = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_PIPE_PIPE = 35,
  anon_sym_DQUOTE = 36,
  anon_sym_DOLLAR_LBRACE = 37,
  anon_sym_DOLLAR_LBRACE_TILDE = 38,
  anon_sym_TILDE_RBRACE = 39,
  sym_comment = 40,
  sym__template_char = 41,
  sym__template_char_in_interpolation = 42,
  sym_escape_sequence = 43,
  sym_config_file = 44,
  sym_body = 45,
  sym_attribute = 46,
  sym_block = 47,
  sym_expression = 48,
  sym_expr_term = 49,
  sym_literal_value = 50,
  sym_bool_lit = 51,
  sym_collection_value = 52,
  sym_tuple = 53,
  sym_object = 54,
  sym_object_elem = 55,
  sym_index = 56,
  sym_get_attr = 57,
  sym_splat = 58,
  sym_attr_splat = 59,
  sym_full_splat = 60,
  sym_for_expr = 61,
  sym_for_tuple_expr = 62,
  sym_for_object_expr = 63,
  sym_for_intro = 64,
  sym_for_cond = 65,
  sym_variable_expr = 66,
  sym_function_call = 67,
  sym_function_arguments = 68,
  sym_conditional = 69,
  sym_operation = 70,
  sym_unary_operation = 71,
  sym_binary_operation = 72,
  sym_template_expr = 73,
  sym_string_lit = 74,
  sym_quoted_template = 75,
  sym_template_interpolation = 76,
  aux_sym_body_repeat1 = 77,
  aux_sym_block_repeat1 = 78,
  aux_sym_tuple_repeat1 = 79,
  aux_sym_object_repeat1 = 80,
  aux_sym_attr_splat_repeat1 = 81,
  aux_sym_full_splat_repeat1 = 82,
  aux_sym_string_lit_repeat1 = 83,
  aux_sym_quoted_template_repeat1 = 84,
  aux_sym_template_interpolation_repeat1 = 85,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [sym_ellipsis] = "ellipsis",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
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
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOLLAR_LBRACE_TILDE] = "${~",
  [anon_sym_TILDE_RBRACE] = "~}",
  [sym_comment] = "comment",
  [sym__template_char] = "_template_char",
  [sym__template_char_in_interpolation] = "_template_char_in_interpolation",
  [sym_escape_sequence] = "escape_sequence",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_expr_term] = "expr_term",
  [sym_literal_value] = "literal_value",
  [sym_bool_lit] = "bool_lit",
  [sym_collection_value] = "collection_value",
  [sym_tuple] = "tuple",
  [sym_object] = "object",
  [sym_object_elem] = "object_elem",
  [sym_index] = "index",
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
  [sym_function_arguments] = "function_arguments",
  [sym_conditional] = "conditional",
  [sym_operation] = "operation",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_template_expr] = "template_expr",
  [sym_string_lit] = "string_lit",
  [sym_quoted_template] = "quoted_template",
  [sym_template_interpolation] = "template_interpolation",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_full_splat_repeat1] = "full_splat_repeat1",
  [aux_sym_string_lit_repeat1] = "string_lit_repeat1",
  [aux_sym_quoted_template_repeat1] = "quoted_template_repeat1",
  [aux_sym_template_interpolation_repeat1] = "template_interpolation_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [sym_ellipsis] = sym_ellipsis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_DOLLAR_LBRACE_TILDE] = anon_sym_DOLLAR_LBRACE_TILDE,
  [anon_sym_TILDE_RBRACE] = anon_sym_TILDE_RBRACE,
  [sym_comment] = sym_comment,
  [sym__template_char] = sym__template_char,
  [sym__template_char_in_interpolation] = sym__template_char_in_interpolation,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_expr_term] = sym_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_bool_lit] = sym_bool_lit,
  [sym_collection_value] = sym_collection_value,
  [sym_tuple] = sym_tuple,
  [sym_object] = sym_object,
  [sym_object_elem] = sym_object_elem,
  [sym_index] = sym_index,
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
  [sym_function_arguments] = sym_function_arguments,
  [sym_conditional] = sym_conditional,
  [sym_operation] = sym_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_template_expr] = sym_template_expr,
  [sym_string_lit] = sym_string_lit,
  [sym_quoted_template] = sym_quoted_template,
  [sym_template_interpolation] = sym_template_interpolation,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_full_splat_repeat1] = aux_sym_full_splat_repeat1,
  [aux_sym_string_lit_repeat1] = aux_sym_string_lit_repeat1,
  [aux_sym_quoted_template_repeat1] = aux_sym_quoted_template_repeat1,
  [aux_sym_template_interpolation_repeat1] = aux_sym_template_interpolation_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_STAR] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__template_char] = {
    .visible = false,
    .named = true,
  },
  [sym__template_char_in_interpolation] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_term] = {
    .visible = true,
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
  [sym_collection_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
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
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_template_interpolation] = {
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
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
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
  [aux_sym_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
  return (c < 6917
    ? (c < 2990
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
        : (c <= 2365 || (c < 2707
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
              : (c <= 2614 || (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
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
      : (c <= 3001 || (c < 4197
        ? (c < 3482
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
              : (c <= 3386 || (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3773
            ? (c < 3713
              ? (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))))
            : (c <= 3773 || (c < 3976
              ? (c < 3840
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))
              : (c <= 3980 || (c < 4176
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))))))))
        : (c <= 4198 || (c < 5121
          ? (c < 4746
            ? (c < 4304
              ? (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4346 || (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))))
            : (c <= 4749 || (c < 4824
              ? (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6176
            ? (c < 5920
              ? (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43261
      ? (c < 11312
        ? (c < 8130
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))))))
          : (c <= 8132 || (c < 8458
            ? (c < 8255
              ? (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))
              : (c <= 8256 || (c < 8336
                ? (c < 8305
                  ? c == 8276
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42656
            ? (c < 40960
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40956
                  ? c == 19968
                  : c <= 40956)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 43015
              ? (c < 42946
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65313
        ? (c < 43824
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43793
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64312
            ? (c < 63744
              ? (c < 55203
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44002 || c == 44032))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64285 || (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : c <= 64310)))))
            : (c <= 64316 || (c < 64914
              ? (c < 64326
                ? (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)))
              : (c <= 64967 || (c < 65101
                ? (c < 65075
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65076)
                : (c <= 65103 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? c == 65343
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
  return (c < 6917
    ? (c < 2990
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
        : (c <= 2365 || (c < 2707
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
              : (c <= 2614 || (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
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
      : (c <= 3001 || (c < 4197
        ? (c < 3482
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
              : (c <= 3386 || (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3773
            ? (c < 3713
              ? (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))))
            : (c <= 3773 || (c < 3976
              ? (c < 3840
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))
              : (c <= 3980 || (c < 4176
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))))))))
        : (c <= 4198 || (c < 5121
          ? (c < 4746
            ? (c < 4304
              ? (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4346 || (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))))
            : (c <= 4749 || (c < 4824
              ? (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6176
            ? (c < 5920
              ? (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : c <= 5905)))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6264 || (c < 6512
              ? (c < 6320
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))
              : (c <= 6516 || (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))))))))))))
    : (c <= 6963 || (c < 43261
      ? (c < 11312
        ? (c < 8130
          ? (c < 7418
            ? (c < 7258
              ? (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))
              : (c <= 7293 || (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))))
            : (c <= 7418 || (c < 8025
              ? (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))
              : (c <= 8025 || (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))))))
          : (c <= 8132 || (c < 8458
            ? (c < 8255
              ? (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))
              : (c <= 8256 || (c < 8336
                ? (c < 8305
                  ? c == 8276
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : c <= 11310)))))))))
        : (c <= 11358 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42656
            ? (c < 40960
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40956
                  ? c == 19968
                  : c <= 40956)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 43015
              ? (c < 42946
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))
                : (c <= 42954 || (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65313
        ? (c < 43824
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43793
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64312
            ? (c < 63744
              ? (c < 55203
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44002 || c == 44032))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)))
              : (c <= 64109 || (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64285 || (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : c <= 64310)))))
            : (c <= 64316 || (c < 64914
              ? (c < 64326
                ? (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)))
              : (c <= 64967 || (c < 65101
                ? (c < 65075
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65076)
                : (c <= 65103 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? c == 65343
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
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(45);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(48);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(40);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(44);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(50);
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
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '~') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_TILDE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_TILDE_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 31},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 31},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 31},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 31},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 31},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 31},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 31},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 31},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 31},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 31},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 31},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 31},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
};

enum {
  ts_external_token__template_char = 0,
  ts_external_token__template_char_in_interpolation = 1,
  ts_external_token_escape_sequence = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__template_char] = sym__template_char,
  [ts_external_token__template_char_in_interpolation] = sym__template_char_in_interpolation,
  [ts_external_token_escape_sequence] = sym_escape_sequence,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__template_char] = true,
    [ts_external_token__template_char_in_interpolation] = true,
    [ts_external_token_escape_sequence] = true,
  },
  [2] = {
    [ts_external_token__template_char] = true,
    [ts_external_token_escape_sequence] = true,
  },
  [3] = {
    [ts_external_token__template_char_in_interpolation] = true,
    [ts_external_token_escape_sequence] = true,
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_ellipsis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__template_char] = ACTIONS(1),
    [sym__template_char_in_interpolation] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(220),
    [sym_body] = STATE(218),
    [sym_attribute] = STATE(143),
    [sym_block] = STATE(143),
    [aux_sym_body_repeat1] = STATE(143),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expr_term,
    STATE(20), 1,
      sym_for_intro,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(180), 1,
      sym_object_elem,
    STATE(182), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [81] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_expr_term,
    STATE(27), 1,
      sym_for_intro,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(173), 1,
      sym_object_elem,
    STATE(182), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [162] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_expr_term,
    STATE(19), 1,
      sym_for_intro,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(167), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [240] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_expr_term,
    STATE(25), 1,
      sym_for_intro,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(165), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [318] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_AMP_AMP,
    ACTIONS(59), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(47), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(55), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(37), 10,
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
  [381] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(153), 1,
      sym_expression,
    STATE(216), 1,
      sym_function_arguments,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [456] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(153), 1,
      sym_expression,
    STATE(202), 1,
      sym_function_arguments,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [531] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(156), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [603] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(191), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [675] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(182), 1,
      sym_expression,
    STATE(194), 1,
      sym_object_elem,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [747] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(156), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [819] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(195), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [891] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(186), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [960] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(164), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1029] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(192), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1098] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(196), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1167] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(185), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1236] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(162), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(147), 2,
      sym_conditional,
      sym_operation,
    STATE(148), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1305] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(189), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1374] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(193), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1443] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(154), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(147), 2,
      sym_conditional,
      sym_operation,
    STATE(148), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1512] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(130), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1581] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(29), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1624] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(166), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(147), 2,
      sym_conditional,
      sym_operation,
    STATE(148), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1693] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(156), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1762] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(190), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1831] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(191), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_DOT,
    STATE(36), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(103), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1943] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(152), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(147), 2,
      sym_conditional,
      sym_operation,
    STATE(148), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2012] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(195), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2081] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_expr_term,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(150), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(147), 2,
      sym_conditional,
      sym_operation,
    STATE(148), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2150] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(197), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2219] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(172), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2288] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expr_term,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(198), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(131), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(36), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(113), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 20,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(37), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(37), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(38), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(137), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(148), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(156), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(184), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(188), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(208), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(212), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(228), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(240), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 21,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_EQ_GT,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3441] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_AMP_AMP,
    ACTIONS(270), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(258), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(262), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(264), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(266), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(37), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [3496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(91), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3533] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(70), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(101), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(113), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(70), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(111), 15,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3607] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(119), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(73), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(137), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(77), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(130), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3729] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(123), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3783] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(126), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3837] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(125), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(77), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3925] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(124), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3979] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(122), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4033] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(121), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4087] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(120), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4141] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(129), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4195] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(118), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4249] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(117), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4303] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(19), 1,
      sym_null_lit,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(42), 1,
      sym_quoted_template,
    STATE(60), 1,
      sym_bool_lit,
    STATE(116), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 2,
      sym_tuple,
      sym_object,
    STATE(53), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(48), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4357] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(127), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4411] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym_numeric_lit,
    ACTIONS(83), 1,
      sym_null_lit,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_quoted_template,
    STATE(96), 1,
      sym_bool_lit,
    STATE(128), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(93), 2,
      sym_tuple,
      sym_object,
    STATE(94), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(240), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(208), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(152), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(148), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(156), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(188), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(212), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(228), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(184), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(244), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 16,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(144), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 13,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 10,
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
  [5291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5427] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5461] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 10,
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
  [5495] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5521] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5547] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5573] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(114), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(102), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 1,
      anon_sym_QMARK,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
  [5698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(37), 10,
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
  [5717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(322), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [5736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(326), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_DQUOTE,
  [5755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(330), 10,
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
  [5774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(340), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(136), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(350), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(136), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(135), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(136), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5858] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(138), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_body,
    STATE(143), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(141), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_EQ,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(149), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(141), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_body,
    STATE(143), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(382), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [5982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(387), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(389), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [5997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [6008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [6019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(155), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [6036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(400), 1,
      sym_ellipsis,
    ACTIONS(402), 1,
      anon_sym_QMARK,
    STATE(212), 1,
      sym_for_cond,
  [6055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(406), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [6070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(315), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
  [6083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      sym_ellipsis,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    STATE(163), 1,
      aux_sym_tuple_repeat1,
  [6102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(402), 1,
      anon_sym_QMARK,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      sym_ellipsis,
    STATE(201), 1,
      sym_for_cond,
  [6121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    STATE(155), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [6138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(382), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [6151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(431), 4,
      sym__template_char,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [6164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(435), 4,
      sym__template_char,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [6177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(439), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(441), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [6192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(445), 2,
      sym__template_char,
      sym_escape_sequence,
  [6206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(449), 2,
      sym__template_char,
      sym_escape_sequence,
  [6220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(402), 1,
      anon_sym_QMARK,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_for_cond,
  [6236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      sym_ellipsis,
    STATE(145), 1,
      aux_sym_tuple_repeat1,
  [6252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_tuple_repeat1,
  [6280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(402), 1,
      anon_sym_QMARK,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_for_cond,
  [6296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_tuple_repeat1,
  [6312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(470), 2,
      sym__template_char,
      sym_escape_sequence,
  [6326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_tuple_repeat1,
  [6348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_object_repeat1,
  [6381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_for_cond,
  [6394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_tuple_repeat1,
  [6429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_DQUOTE,
  [6438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      aux_sym_object_repeat1,
  [6464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_if,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_for_cond,
  [6477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(503), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 3,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_DQUOTE,
  [6497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(509), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [6521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(511), 1,
      anon_sym_COLON,
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_STAR,
  [6541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_in,
  [6551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(521), 1,
      anon_sym_EQ_GT,
  [6561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(523), 1,
      anon_sym_EQ_GT,
  [6571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
  [6581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [6591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(529), 1,
      anon_sym_COLON,
  [6601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [6619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(533), 1,
      anon_sym_COLON,
  [6629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [6639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_QMARK,
    ACTIONS(537), 1,
      anon_sym_COLON,
  [6649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_identifier,
    ACTIONS(541), 1,
      anon_sym_STAR,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_identifier,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_in,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 318,
  [SMALL_STATE(7)] = 381,
  [SMALL_STATE(8)] = 456,
  [SMALL_STATE(9)] = 531,
  [SMALL_STATE(10)] = 603,
  [SMALL_STATE(11)] = 675,
  [SMALL_STATE(12)] = 747,
  [SMALL_STATE(13)] = 819,
  [SMALL_STATE(14)] = 891,
  [SMALL_STATE(15)] = 960,
  [SMALL_STATE(16)] = 1029,
  [SMALL_STATE(17)] = 1098,
  [SMALL_STATE(18)] = 1167,
  [SMALL_STATE(19)] = 1236,
  [SMALL_STATE(20)] = 1305,
  [SMALL_STATE(21)] = 1374,
  [SMALL_STATE(22)] = 1443,
  [SMALL_STATE(23)] = 1512,
  [SMALL_STATE(24)] = 1581,
  [SMALL_STATE(25)] = 1624,
  [SMALL_STATE(26)] = 1693,
  [SMALL_STATE(27)] = 1762,
  [SMALL_STATE(28)] = 1831,
  [SMALL_STATE(29)] = 1900,
  [SMALL_STATE(30)] = 1943,
  [SMALL_STATE(31)] = 2012,
  [SMALL_STATE(32)] = 2081,
  [SMALL_STATE(33)] = 2150,
  [SMALL_STATE(34)] = 2219,
  [SMALL_STATE(35)] = 2288,
  [SMALL_STATE(36)] = 2357,
  [SMALL_STATE(37)] = 2400,
  [SMALL_STATE(38)] = 2440,
  [SMALL_STATE(39)] = 2480,
  [SMALL_STATE(40)] = 2520,
  [SMALL_STATE(41)] = 2557,
  [SMALL_STATE(42)] = 2591,
  [SMALL_STATE(43)] = 2625,
  [SMALL_STATE(44)] = 2659,
  [SMALL_STATE(45)] = 2693,
  [SMALL_STATE(46)] = 2727,
  [SMALL_STATE(47)] = 2761,
  [SMALL_STATE(48)] = 2795,
  [SMALL_STATE(49)] = 2829,
  [SMALL_STATE(50)] = 2863,
  [SMALL_STATE(51)] = 2897,
  [SMALL_STATE(52)] = 2931,
  [SMALL_STATE(53)] = 2965,
  [SMALL_STATE(54)] = 2999,
  [SMALL_STATE(55)] = 3033,
  [SMALL_STATE(56)] = 3067,
  [SMALL_STATE(57)] = 3101,
  [SMALL_STATE(58)] = 3135,
  [SMALL_STATE(59)] = 3169,
  [SMALL_STATE(60)] = 3203,
  [SMALL_STATE(61)] = 3237,
  [SMALL_STATE(62)] = 3271,
  [SMALL_STATE(63)] = 3305,
  [SMALL_STATE(64)] = 3339,
  [SMALL_STATE(65)] = 3373,
  [SMALL_STATE(66)] = 3407,
  [SMALL_STATE(67)] = 3441,
  [SMALL_STATE(68)] = 3496,
  [SMALL_STATE(69)] = 3533,
  [SMALL_STATE(70)] = 3570,
  [SMALL_STATE(71)] = 3607,
  [SMALL_STATE(72)] = 3661,
  [SMALL_STATE(73)] = 3695,
  [SMALL_STATE(74)] = 3729,
  [SMALL_STATE(75)] = 3783,
  [SMALL_STATE(76)] = 3837,
  [SMALL_STATE(77)] = 3891,
  [SMALL_STATE(78)] = 3925,
  [SMALL_STATE(79)] = 3979,
  [SMALL_STATE(80)] = 4033,
  [SMALL_STATE(81)] = 4087,
  [SMALL_STATE(82)] = 4141,
  [SMALL_STATE(83)] = 4195,
  [SMALL_STATE(84)] = 4249,
  [SMALL_STATE(85)] = 4303,
  [SMALL_STATE(86)] = 4357,
  [SMALL_STATE(87)] = 4411,
  [SMALL_STATE(88)] = 4465,
  [SMALL_STATE(89)] = 4496,
  [SMALL_STATE(90)] = 4524,
  [SMALL_STATE(91)] = 4552,
  [SMALL_STATE(92)] = 4580,
  [SMALL_STATE(93)] = 4608,
  [SMALL_STATE(94)] = 4636,
  [SMALL_STATE(95)] = 4664,
  [SMALL_STATE(96)] = 4692,
  [SMALL_STATE(97)] = 4720,
  [SMALL_STATE(98)] = 4748,
  [SMALL_STATE(99)] = 4776,
  [SMALL_STATE(100)] = 4804,
  [SMALL_STATE(101)] = 4832,
  [SMALL_STATE(102)] = 4860,
  [SMALL_STATE(103)] = 4888,
  [SMALL_STATE(104)] = 4916,
  [SMALL_STATE(105)] = 4944,
  [SMALL_STATE(106)] = 4972,
  [SMALL_STATE(107)] = 5000,
  [SMALL_STATE(108)] = 5028,
  [SMALL_STATE(109)] = 5056,
  [SMALL_STATE(110)] = 5084,
  [SMALL_STATE(111)] = 5112,
  [SMALL_STATE(112)] = 5140,
  [SMALL_STATE(113)] = 5168,
  [SMALL_STATE(114)] = 5196,
  [SMALL_STATE(115)] = 5224,
  [SMALL_STATE(116)] = 5257,
  [SMALL_STATE(117)] = 5291,
  [SMALL_STATE(118)] = 5325,
  [SMALL_STATE(119)] = 5359,
  [SMALL_STATE(120)] = 5393,
  [SMALL_STATE(121)] = 5427,
  [SMALL_STATE(122)] = 5461,
  [SMALL_STATE(123)] = 5495,
  [SMALL_STATE(124)] = 5521,
  [SMALL_STATE(125)] = 5547,
  [SMALL_STATE(126)] = 5573,
  [SMALL_STATE(127)] = 5599,
  [SMALL_STATE(128)] = 5625,
  [SMALL_STATE(129)] = 5651,
  [SMALL_STATE(130)] = 5677,
  [SMALL_STATE(131)] = 5698,
  [SMALL_STATE(132)] = 5717,
  [SMALL_STATE(133)] = 5736,
  [SMALL_STATE(134)] = 5755,
  [SMALL_STATE(135)] = 5774,
  [SMALL_STATE(136)] = 5795,
  [SMALL_STATE(137)] = 5816,
  [SMALL_STATE(138)] = 5837,
  [SMALL_STATE(139)] = 5858,
  [SMALL_STATE(140)] = 5879,
  [SMALL_STATE(141)] = 5897,
  [SMALL_STATE(142)] = 5913,
  [SMALL_STATE(143)] = 5933,
  [SMALL_STATE(144)] = 5949,
  [SMALL_STATE(145)] = 5967,
  [SMALL_STATE(146)] = 5982,
  [SMALL_STATE(147)] = 5997,
  [SMALL_STATE(148)] = 6008,
  [SMALL_STATE(149)] = 6019,
  [SMALL_STATE(150)] = 6036,
  [SMALL_STATE(151)] = 6055,
  [SMALL_STATE(152)] = 6070,
  [SMALL_STATE(153)] = 6083,
  [SMALL_STATE(154)] = 6102,
  [SMALL_STATE(155)] = 6121,
  [SMALL_STATE(156)] = 6138,
  [SMALL_STATE(157)] = 6151,
  [SMALL_STATE(158)] = 6164,
  [SMALL_STATE(159)] = 6177,
  [SMALL_STATE(160)] = 6192,
  [SMALL_STATE(161)] = 6206,
  [SMALL_STATE(162)] = 6220,
  [SMALL_STATE(163)] = 6236,
  [SMALL_STATE(164)] = 6252,
  [SMALL_STATE(165)] = 6264,
  [SMALL_STATE(166)] = 6280,
  [SMALL_STATE(167)] = 6296,
  [SMALL_STATE(168)] = 6312,
  [SMALL_STATE(169)] = 6326,
  [SMALL_STATE(170)] = 6335,
  [SMALL_STATE(171)] = 6348,
  [SMALL_STATE(172)] = 6357,
  [SMALL_STATE(173)] = 6368,
  [SMALL_STATE(174)] = 6381,
  [SMALL_STATE(175)] = 6394,
  [SMALL_STATE(176)] = 6407,
  [SMALL_STATE(177)] = 6416,
  [SMALL_STATE(178)] = 6429,
  [SMALL_STATE(179)] = 6438,
  [SMALL_STATE(180)] = 6451,
  [SMALL_STATE(181)] = 6464,
  [SMALL_STATE(182)] = 6477,
  [SMALL_STATE(183)] = 6488,
  [SMALL_STATE(184)] = 6497,
  [SMALL_STATE(185)] = 6510,
  [SMALL_STATE(186)] = 6521,
  [SMALL_STATE(187)] = 6531,
  [SMALL_STATE(188)] = 6541,
  [SMALL_STATE(189)] = 6551,
  [SMALL_STATE(190)] = 6561,
  [SMALL_STATE(191)] = 6571,
  [SMALL_STATE(192)] = 6581,
  [SMALL_STATE(193)] = 6591,
  [SMALL_STATE(194)] = 6601,
  [SMALL_STATE(195)] = 6609,
  [SMALL_STATE(196)] = 6619,
  [SMALL_STATE(197)] = 6629,
  [SMALL_STATE(198)] = 6639,
  [SMALL_STATE(199)] = 6649,
  [SMALL_STATE(200)] = 6659,
  [SMALL_STATE(201)] = 6666,
  [SMALL_STATE(202)] = 6673,
  [SMALL_STATE(203)] = 6680,
  [SMALL_STATE(204)] = 6687,
  [SMALL_STATE(205)] = 6694,
  [SMALL_STATE(206)] = 6701,
  [SMALL_STATE(207)] = 6708,
  [SMALL_STATE(208)] = 6715,
  [SMALL_STATE(209)] = 6722,
  [SMALL_STATE(210)] = 6729,
  [SMALL_STATE(211)] = 6736,
  [SMALL_STATE(212)] = 6743,
  [SMALL_STATE(213)] = 6750,
  [SMALL_STATE(214)] = 6757,
  [SMALL_STATE(215)] = 6764,
  [SMALL_STATE(216)] = 6771,
  [SMALL_STATE(217)] = 6778,
  [SMALL_STATE(218)] = 6785,
  [SMALL_STATE(219)] = 6792,
  [SMALL_STATE(220)] = 6799,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(28),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(205),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(28),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(205),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(28),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(205),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(205),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 3),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(205),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(205),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(31),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(207),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(31),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(207),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(31),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(207),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(207),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(207),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(207),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_expr, 1), SHIFT(34),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_expr, 1), SHIFT(34),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(21),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(151),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(151),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(136),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(142),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(26),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_interpolation_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_interpolation_repeat1, 2), SHIFT_REPEAT(146),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(160),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2), SHIFT_REPEAT(161),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(11),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [569] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
