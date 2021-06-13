#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
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
  aux_sym_quoted_template_repeat1 = 83,
  aux_sym_template_interpolation_repeat1 = 84,
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
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 31},
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
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 1},
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
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 31},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 31},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 31},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 31},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 31},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 31},
  [182] = {.lex_state = 31},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 31},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
    [sym_config_file] = STATE(216),
    [sym_body] = STATE(214),
    [sym_attribute] = STATE(145),
    [sym_block] = STATE(145),
    [aux_sym_body_repeat1] = STATE(145),
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
    STATE(23), 1,
      sym_for_intro,
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(173), 1,
      sym_expression,
    STATE(177), 1,
      sym_object_elem,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(19), 1,
      sym_for_intro,
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(167), 1,
      sym_object_elem,
    STATE(173), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(16), 1,
      sym_for_intro,
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(164), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(20), 1,
      sym_for_intro,
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(161), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(155), 1,
      sym_expression,
    STATE(207), 1,
      sym_function_arguments,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(155), 1,
      sym_expression,
    STATE(199), 1,
      sym_function_arguments,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(159), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(183), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(159), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    ACTIONS(71), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym_expr_term,
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(173), 1,
      sym_expression,
    STATE(192), 1,
      sym_object_elem,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [891] = 19,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(158), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(149), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(150), 2,
      sym_conditional,
      sym_operation,
    STATE(90), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(193), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1029] = 19,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(163), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(149), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(150), 2,
      sym_conditional,
      sym_operation,
    STATE(90), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(189), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(187), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1236] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(184), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1305] = 19,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(160), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(149), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(150), 2,
      sym_conditional,
      sym_operation,
    STATE(90), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(180), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1443] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(131), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(191), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1581] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(162), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1650] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(183), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1719] = 19,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(154), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(149), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(150), 2,
      sym_conditional,
      sym_operation,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1788] = 19,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(156), 1,
      sym_expression,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(149), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(150), 2,
      sym_conditional,
      sym_operation,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1857] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(159), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1926] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(190), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [1995] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(36), 3,
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
  [2038] = 19,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(194), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [2107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_DOT,
    STATE(32), 3,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(176), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(185), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(186), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(130), 2,
      sym_conditional,
      sym_operation,
    STATE(134), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(64), 6,
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
    STATE(32), 3,
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
  [2400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
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
      anon_sym_DQUOTE,
  [2436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DOT,
    STATE(38), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 21,
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
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(132), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
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
      anon_sym_DQUOTE,
  [2512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOT,
    STATE(38), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(138), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 21,
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
  [2552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(145), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 21,
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
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 21,
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
  [2629] = 3,
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
  [2663] = 3,
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
  [2697] = 3,
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
  [2731] = 3,
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
  [2765] = 3,
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
  [2799] = 3,
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
  [2833] = 3,
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
  [2867] = 3,
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
  [2901] = 3,
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
  [2935] = 3,
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
  [2969] = 3,
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
  [3003] = 3,
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
  [3037] = 3,
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
  [3071] = 3,
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
  [3105] = 3,
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
  [3139] = 3,
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
  [3173] = 3,
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
  [3207] = 3,
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
  [3241] = 3,
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
  [3275] = 3,
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
  [3309] = 3,
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
  [3343] = 3,
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
  [3377] = 3,
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
  [3411] = 3,
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
  [3445] = 14,
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
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(37), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [3500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 3,
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
  [3537] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(113), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 3,
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
  [3574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
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
  [3611] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(117), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3665] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(126), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3719] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(120), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3773] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(122), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3827] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(121), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(80), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(145), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 16,
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
  [3915] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(116), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [3969] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(119), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4023] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(129), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(87), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(138), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 16,
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
  [4111] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(128), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4165] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(125), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4219] = 15,
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
    STATE(56), 1,
      sym_bool_lit,
    STATE(58), 1,
      sym_quoted_template,
    STATE(118), 1,
      sym_expr_term,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(63), 2,
      sym_tuple,
      sym_object,
    STATE(64), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4273] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(124), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4327] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(127), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4381] = 15,
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
    STATE(102), 1,
      sym_bool_lit,
    STATE(110), 1,
      sym_quoted_template,
    STATE(123), 1,
      sym_expr_term,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(90), 6,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
      sym_template_expr,
  [4435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(87), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(127), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 16,
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
  [4469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 16,
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
  [4500] = 3,
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
  [4528] = 3,
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
  [4556] = 3,
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
  [4584] = 3,
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
  [4612] = 3,
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
  [4640] = 3,
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
  [4668] = 3,
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
  [4696] = 3,
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
  [4724] = 3,
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
  [4752] = 3,
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
  [4780] = 3,
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
  [4808] = 3,
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
  [4836] = 3,
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
  [4864] = 3,
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
  [4892] = 3,
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
  [4920] = 3,
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
  [4948] = 3,
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
  [4976] = 3,
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
  [5004] = 3,
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
  [5032] = 3,
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
  [5060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(132), 16,
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
  [5088] = 3,
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
  [5116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_DOT,
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
  [5144] = 3,
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
  [5172] = 3,
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
  [5200] = 3,
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
  [5228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(152), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 13,
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
  [5261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5329] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5363] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5397] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5431] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5465] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(55), 3,
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
  [5499] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5525] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(108), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(106), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5681] = 3,
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
  [5700] = 4,
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
  [5721] = 3,
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
  [5740] = 3,
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
  [5759] = 3,
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
  [5778] = 6,
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
    STATE(139), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_EQ,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(168), 1,
      sym_quoted_template,
    STATE(144), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(138), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(139), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(359), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(362), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(139), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE_TILDE,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 2,
      sym__template_char,
      sym_escape_sequence,
    STATE(135), 2,
      sym_template_interpolation,
      aux_sym_quoted_template_repeat1,
  [5906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_body,
    STATE(145), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_quoted_template,
    STATE(142), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(143), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(168), 1,
      sym_quoted_template,
    STATE(142), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(143), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_body,
    STATE(145), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [6014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(392), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [6029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(397), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(399), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [6055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [6066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(404), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [6081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(406), 4,
      sym__template_char,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [6094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_template_interpolation_repeat1,
    ACTIONS(410), 2,
      anon_sym_RBRACE,
      anon_sym_TILDE_RBRACE,
    ACTIONS(412), 2,
      sym__template_char_in_interpolation,
      sym_escape_sequence,
  [6109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(418), 1,
      sym_ellipsis,
    ACTIONS(420), 1,
      anon_sym_QMARK,
    STATE(208), 1,
      sym_for_cond,
  [6128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      sym_ellipsis,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    STATE(165), 1,
      aux_sym_tuple_repeat1,
  [6147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_QMARK,
    ACTIONS(315), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
  [6160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(433), 4,
      sym__template_char,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE_TILDE,
  [6173] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(420), 1,
      anon_sym_QMARK,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      sym_ellipsis,
    STATE(212), 1,
      sym_for_cond,
  [6192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(392), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [6205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(420), 1,
      anon_sym_QMARK,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_for_cond,
  [6221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_tuple_repeat1,
  [6237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(447), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(420), 1,
      anon_sym_QMARK,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_for_cond,
  [6265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_tuple_repeat1,
  [6281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      sym_ellipsis,
    STATE(147), 1,
      aux_sym_tuple_repeat1,
  [6297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_tuple_repeat1,
  [6310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_object_repeat1,
  [6323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_LBRACE,
      sym_identifier,
      anon_sym_DQUOTE,
  [6332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_for_cond,
  [6345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_if,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_for_cond,
  [6358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(473), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_object_repeat1,
  [6417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(482), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [6428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      aux_sym_object_repeat1,
  [6441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_tuple_repeat1,
  [6454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(490), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_STAR,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      anon_sym_EQ_GT,
  [6513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [6523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(504), 1,
      anon_sym_COLON,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_in,
  [6553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [6563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [6573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(516), 1,
      anon_sym_EQ_GT,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [6601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_QMARK,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [6611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_STAR,
  [6621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [6628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
  [6635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
  [6642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [6649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
  [6656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
  [6663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
  [6677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
  [6684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_in,
  [6691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_identifier,
  [6698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [6705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
  [6712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [6719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [6726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [6733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [6740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
  [6747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
  [6754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
  [6761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
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
  [SMALL_STATE(25)] = 1650,
  [SMALL_STATE(26)] = 1719,
  [SMALL_STATE(27)] = 1788,
  [SMALL_STATE(28)] = 1857,
  [SMALL_STATE(29)] = 1926,
  [SMALL_STATE(30)] = 1995,
  [SMALL_STATE(31)] = 2038,
  [SMALL_STATE(32)] = 2107,
  [SMALL_STATE(33)] = 2150,
  [SMALL_STATE(34)] = 2219,
  [SMALL_STATE(35)] = 2288,
  [SMALL_STATE(36)] = 2357,
  [SMALL_STATE(37)] = 2400,
  [SMALL_STATE(38)] = 2436,
  [SMALL_STATE(39)] = 2476,
  [SMALL_STATE(40)] = 2512,
  [SMALL_STATE(41)] = 2552,
  [SMALL_STATE(42)] = 2592,
  [SMALL_STATE(43)] = 2629,
  [SMALL_STATE(44)] = 2663,
  [SMALL_STATE(45)] = 2697,
  [SMALL_STATE(46)] = 2731,
  [SMALL_STATE(47)] = 2765,
  [SMALL_STATE(48)] = 2799,
  [SMALL_STATE(49)] = 2833,
  [SMALL_STATE(50)] = 2867,
  [SMALL_STATE(51)] = 2901,
  [SMALL_STATE(52)] = 2935,
  [SMALL_STATE(53)] = 2969,
  [SMALL_STATE(54)] = 3003,
  [SMALL_STATE(55)] = 3037,
  [SMALL_STATE(56)] = 3071,
  [SMALL_STATE(57)] = 3105,
  [SMALL_STATE(58)] = 3139,
  [SMALL_STATE(59)] = 3173,
  [SMALL_STATE(60)] = 3207,
  [SMALL_STATE(61)] = 3241,
  [SMALL_STATE(62)] = 3275,
  [SMALL_STATE(63)] = 3309,
  [SMALL_STATE(64)] = 3343,
  [SMALL_STATE(65)] = 3377,
  [SMALL_STATE(66)] = 3411,
  [SMALL_STATE(67)] = 3445,
  [SMALL_STATE(68)] = 3500,
  [SMALL_STATE(69)] = 3537,
  [SMALL_STATE(70)] = 3574,
  [SMALL_STATE(71)] = 3611,
  [SMALL_STATE(72)] = 3665,
  [SMALL_STATE(73)] = 3719,
  [SMALL_STATE(74)] = 3773,
  [SMALL_STATE(75)] = 3827,
  [SMALL_STATE(76)] = 3881,
  [SMALL_STATE(77)] = 3915,
  [SMALL_STATE(78)] = 3969,
  [SMALL_STATE(79)] = 4023,
  [SMALL_STATE(80)] = 4077,
  [SMALL_STATE(81)] = 4111,
  [SMALL_STATE(82)] = 4165,
  [SMALL_STATE(83)] = 4219,
  [SMALL_STATE(84)] = 4273,
  [SMALL_STATE(85)] = 4327,
  [SMALL_STATE(86)] = 4381,
  [SMALL_STATE(87)] = 4435,
  [SMALL_STATE(88)] = 4469,
  [SMALL_STATE(89)] = 4500,
  [SMALL_STATE(90)] = 4528,
  [SMALL_STATE(91)] = 4556,
  [SMALL_STATE(92)] = 4584,
  [SMALL_STATE(93)] = 4612,
  [SMALL_STATE(94)] = 4640,
  [SMALL_STATE(95)] = 4668,
  [SMALL_STATE(96)] = 4696,
  [SMALL_STATE(97)] = 4724,
  [SMALL_STATE(98)] = 4752,
  [SMALL_STATE(99)] = 4780,
  [SMALL_STATE(100)] = 4808,
  [SMALL_STATE(101)] = 4836,
  [SMALL_STATE(102)] = 4864,
  [SMALL_STATE(103)] = 4892,
  [SMALL_STATE(104)] = 4920,
  [SMALL_STATE(105)] = 4948,
  [SMALL_STATE(106)] = 4976,
  [SMALL_STATE(107)] = 5004,
  [SMALL_STATE(108)] = 5032,
  [SMALL_STATE(109)] = 5060,
  [SMALL_STATE(110)] = 5088,
  [SMALL_STATE(111)] = 5116,
  [SMALL_STATE(112)] = 5144,
  [SMALL_STATE(113)] = 5172,
  [SMALL_STATE(114)] = 5200,
  [SMALL_STATE(115)] = 5228,
  [SMALL_STATE(116)] = 5261,
  [SMALL_STATE(117)] = 5295,
  [SMALL_STATE(118)] = 5329,
  [SMALL_STATE(119)] = 5363,
  [SMALL_STATE(120)] = 5397,
  [SMALL_STATE(121)] = 5431,
  [SMALL_STATE(122)] = 5465,
  [SMALL_STATE(123)] = 5499,
  [SMALL_STATE(124)] = 5525,
  [SMALL_STATE(125)] = 5551,
  [SMALL_STATE(126)] = 5577,
  [SMALL_STATE(127)] = 5603,
  [SMALL_STATE(128)] = 5629,
  [SMALL_STATE(129)] = 5655,
  [SMALL_STATE(130)] = 5681,
  [SMALL_STATE(131)] = 5700,
  [SMALL_STATE(132)] = 5721,
  [SMALL_STATE(133)] = 5740,
  [SMALL_STATE(134)] = 5759,
  [SMALL_STATE(135)] = 5778,
  [SMALL_STATE(136)] = 5799,
  [SMALL_STATE(137)] = 5822,
  [SMALL_STATE(138)] = 5843,
  [SMALL_STATE(139)] = 5864,
  [SMALL_STATE(140)] = 5885,
  [SMALL_STATE(141)] = 5906,
  [SMALL_STATE(142)] = 5924,
  [SMALL_STATE(143)] = 5944,
  [SMALL_STATE(144)] = 5960,
  [SMALL_STATE(145)] = 5980,
  [SMALL_STATE(146)] = 5996,
  [SMALL_STATE(147)] = 6014,
  [SMALL_STATE(148)] = 6029,
  [SMALL_STATE(149)] = 6044,
  [SMALL_STATE(150)] = 6055,
  [SMALL_STATE(151)] = 6066,
  [SMALL_STATE(152)] = 6081,
  [SMALL_STATE(153)] = 6094,
  [SMALL_STATE(154)] = 6109,
  [SMALL_STATE(155)] = 6128,
  [SMALL_STATE(156)] = 6147,
  [SMALL_STATE(157)] = 6160,
  [SMALL_STATE(158)] = 6173,
  [SMALL_STATE(159)] = 6192,
  [SMALL_STATE(160)] = 6205,
  [SMALL_STATE(161)] = 6221,
  [SMALL_STATE(162)] = 6237,
  [SMALL_STATE(163)] = 6249,
  [SMALL_STATE(164)] = 6265,
  [SMALL_STATE(165)] = 6281,
  [SMALL_STATE(166)] = 6297,
  [SMALL_STATE(167)] = 6310,
  [SMALL_STATE(168)] = 6323,
  [SMALL_STATE(169)] = 6332,
  [SMALL_STATE(170)] = 6345,
  [SMALL_STATE(171)] = 6358,
  [SMALL_STATE(172)] = 6367,
  [SMALL_STATE(173)] = 6380,
  [SMALL_STATE(174)] = 6391,
  [SMALL_STATE(175)] = 6404,
  [SMALL_STATE(176)] = 6417,
  [SMALL_STATE(177)] = 6428,
  [SMALL_STATE(178)] = 6441,
  [SMALL_STATE(179)] = 6454,
  [SMALL_STATE(180)] = 6463,
  [SMALL_STATE(181)] = 6474,
  [SMALL_STATE(182)] = 6483,
  [SMALL_STATE(183)] = 6493,
  [SMALL_STATE(184)] = 6503,
  [SMALL_STATE(185)] = 6513,
  [SMALL_STATE(186)] = 6523,
  [SMALL_STATE(187)] = 6533,
  [SMALL_STATE(188)] = 6543,
  [SMALL_STATE(189)] = 6553,
  [SMALL_STATE(190)] = 6563,
  [SMALL_STATE(191)] = 6573,
  [SMALL_STATE(192)] = 6583,
  [SMALL_STATE(193)] = 6591,
  [SMALL_STATE(194)] = 6601,
  [SMALL_STATE(195)] = 6611,
  [SMALL_STATE(196)] = 6621,
  [SMALL_STATE(197)] = 6628,
  [SMALL_STATE(198)] = 6635,
  [SMALL_STATE(199)] = 6642,
  [SMALL_STATE(200)] = 6649,
  [SMALL_STATE(201)] = 6656,
  [SMALL_STATE(202)] = 6663,
  [SMALL_STATE(203)] = 6670,
  [SMALL_STATE(204)] = 6677,
  [SMALL_STATE(205)] = 6684,
  [SMALL_STATE(206)] = 6691,
  [SMALL_STATE(207)] = 6698,
  [SMALL_STATE(208)] = 6705,
  [SMALL_STATE(209)] = 6712,
  [SMALL_STATE(210)] = 6719,
  [SMALL_STATE(211)] = 6726,
  [SMALL_STATE(212)] = 6733,
  [SMALL_STATE(213)] = 6740,
  [SMALL_STATE(214)] = 6747,
  [SMALL_STATE(215)] = 6754,
  [SMALL_STATE(216)] = 6761,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(25),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(198),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(25),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(198),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 4),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(25),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(198),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(198),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_template, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 3),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(198),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(198),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_expr, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_expr, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(29),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(206),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(29),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(206),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(29),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(206),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(206),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(206),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(206),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_expr, 1), SHIFT(21),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_expr, 1), SHIFT(21),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(34),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(151),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(151),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_template_repeat1, 2), SHIFT_REPEAT(139),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(136),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(28),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_interpolation_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_interpolation_repeat1, 2), SHIFT_REPEAT(148),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(15),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_interpolation, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_interpolation, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(13),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
