#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_DQUOTE = 8,
  aux_sym_string_lit_token1 = 9,
  sym_escape_sequence = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_null_lit = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_COLON = 17,
  anon_sym_DOT = 18,
  anon_sym_STAR = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_ellipsis = 24,
  anon_sym_QMARK = 25,
  anon_sym_DASH = 26,
  anon_sym_BANG = 27,
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
  sym_comment = 39,
  sym_config_file = 40,
  sym_body = 41,
  sym_attribute = 42,
  sym_block = 43,
  sym_expression = 44,
  sym_expr_term = 45,
  sym_literal_value = 46,
  sym_string_lit = 47,
  sym_bool_lit = 48,
  sym_collection_value = 49,
  sym_tuple = 50,
  sym_object = 51,
  sym_object_elem = 52,
  sym_index = 53,
  sym_get_attr = 54,
  sym_splat = 55,
  sym_attr_splat = 56,
  sym_full_splat = 57,
  sym_for_expr = 58,
  sym_for_tuple_expr = 59,
  sym_for_object_expr = 60,
  sym_for_intro = 61,
  sym_for_cond = 62,
  sym_variable_expr = 63,
  sym_function_call = 64,
  sym_function_arguments = 65,
  sym_conditional = 66,
  sym_operation = 67,
  sym_unary_operation = 68,
  sym_binary_operation = 69,
  aux_sym_body_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym_string_lit_repeat1 = 72,
  aux_sym_tuple_repeat1 = 73,
  aux_sym_object_repeat1 = 74,
  aux_sym_attr_splat_repeat1 = 75,
  aux_sym_full_splat_repeat1 = 76,
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_lit_token1] = "string_lit_token1",
  [sym_escape_sequence] = "escape_sequence",
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
  [sym_comment] = "comment",
  [sym_config_file] = "config_file",
  [sym_body] = "body",
  [sym_attribute] = "attribute",
  [sym_block] = "block",
  [sym_expression] = "expression",
  [sym_expr_term] = "expr_term",
  [sym_literal_value] = "literal_value",
  [sym_string_lit] = "string_lit",
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
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_lit_repeat1] = "string_lit_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_attr_splat_repeat1] = "attr_splat_repeat1",
  [aux_sym_full_splat_repeat1] = "full_splat_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_lit_token1] = aux_sym_string_lit_token1,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym_comment] = sym_comment,
  [sym_config_file] = sym_config_file,
  [sym_body] = sym_body,
  [sym_attribute] = sym_attribute,
  [sym_block] = sym_block,
  [sym_expression] = sym_expression,
  [sym_expr_term] = sym_expr_term,
  [sym_literal_value] = sym_literal_value,
  [sym_string_lit] = sym_string_lit,
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
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_lit_repeat1] = aux_sym_string_lit_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_attr_splat_repeat1] = aux_sym_attr_splat_repeat1,
  [aux_sym_full_splat_repeat1] = aux_sym_full_splat_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym_comment] = {
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
  [sym_string_lit] = {
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
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_lit_repeat1] = {
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
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(55);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(51);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(54);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ellipsis);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 41},
  [55] = {.lex_state = 41},
  [56] = {.lex_state = 41},
  [57] = {.lex_state = 41},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 41},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 41},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 41},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(208),
    [sym_body] = STATE(206),
    [sym_attribute] = STATE(134),
    [sym_block] = STATE(134),
    [aux_sym_body_repeat1] = STATE(134),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
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
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    STATE(5), 1,
      sym_expr_term,
    STATE(31), 1,
      sym_for_intro,
    STATE(164), 1,
      sym_object_elem,
    STATE(170), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [78] = 22,
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
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_expr_term,
    STATE(36), 1,
      sym_for_intro,
    STATE(170), 1,
      sym_expression,
    STATE(173), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [156] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_expr_term,
    STATE(41), 1,
      sym_for_intro,
    STATE(153), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [231] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(53), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(35), 10,
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
  [294] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_expr_term,
    STATE(32), 1,
      sym_for_intro,
    STATE(155), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [369] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_expr_term,
    STATE(142), 1,
      sym_expression,
    STATE(191), 1,
      sym_function_arguments,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [441] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_expr_term,
    STATE(142), 1,
      sym_expression,
    STATE(192), 1,
      sym_function_arguments,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [513] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_expr_term,
    STATE(139), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [582] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(16), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(69), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 20,
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
  [625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(10), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(79), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 20,
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
  [668] = 19,
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
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_expr_term,
    STATE(170), 1,
      sym_expression,
    STATE(178), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [737] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_STAR,
    STATE(5), 1,
      sym_expr_term,
    STATE(180), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [806] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_expr_term,
    STATE(139), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [875] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_STAR,
    STATE(5), 1,
      sym_expr_term,
    STATE(174), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [944] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(16), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(95), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 20,
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
  [987] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_expr_term,
    STATE(143), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(140), 2,
      sym_conditional,
      sym_operation,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1053] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(187), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(25), 2,
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
  [1159] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(177), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1225] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(181), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(22), 2,
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
  [1331] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(180), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1397] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(182), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(22), 2,
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
  [1503] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(186), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(142), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
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
  [1605] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(139), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1671] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(167), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1737] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(174), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1803] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(179), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1869] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_expr_term,
    STATE(157), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(140), 2,
      sym_conditional,
      sym_operation,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [1935] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(176), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2001] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(130), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2067] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(149), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2133] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(184), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2199] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_expr_term,
    STATE(146), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(140), 2,
      sym_conditional,
      sym_operation,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2265] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expr_term,
    STATE(163), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(128), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(132), 2,
      sym_conditional,
      sym_operation,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2331] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_expr_term,
    STATE(144), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(140), 2,
      sym_conditional,
      sym_operation,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(146), 23,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
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
  [2433] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_expr_term,
    STATE(158), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(119), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(140), 2,
      sym_conditional,
      sym_operation,
    STATE(141), 2,
      sym_unary_operation,
      sym_binary_operation,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [2499] = 4,
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
  [2536] = 3,
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
  [2570] = 3,
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
  [2604] = 3,
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
  [2638] = 3,
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
  [2672] = 3,
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
  [2706] = 3,
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
  [2740] = 3,
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
  [2774] = 3,
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
  [2808] = 3,
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
  [2842] = 3,
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
  [2876] = 3,
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
  [2910] = 3,
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
  [2944] = 3,
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
  [2978] = 3,
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
  [3012] = 3,
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
  [3046] = 3,
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
  [3080] = 3,
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
  [3114] = 3,
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
  [3148] = 3,
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
  [3182] = 3,
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
  [3216] = 3,
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
  [3250] = 3,
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
  [3284] = 3,
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
  [3318] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(264), 1,
      anon_sym_AMP_AMP,
    ACTIONS(266), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(252), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(254), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(260), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(262), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(35), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [3373] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(77), 15,
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
  [3410] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(95), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(93), 15,
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
  [3447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(69), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(68), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(67), 15,
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
  [3484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DOT,
    STATE(71), 2,
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
  [3518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DOT,
    STATE(71), 2,
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
  [3552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DOT,
    STATE(70), 2,
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
  [3586] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3637] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(115), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3688] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3739] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3790] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3841] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(117), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3892] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3943] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_numeric_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_null_lit,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(118), 1,
      sym_expr_term,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_tuple,
      sym_object,
    STATE(57), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(56), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [3994] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
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
  [4076] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4127] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(121), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4178] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4229] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4280] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_numeric_lit,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_null_lit,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym_expr_term,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(98), 2,
      sym_tuple,
      sym_object,
    STATE(105), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(100), 5,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
      sym_function_call,
  [4331] = 3,
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
  [4359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(146), 16,
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
  [4387] = 3,
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
  [4415] = 3,
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
  [4443] = 3,
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
  [4471] = 3,
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
  [4499] = 3,
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
  [4527] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [4555] = 3,
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
  [4583] = 3,
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
  [4611] = 3,
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
  [4639] = 3,
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
  [4667] = 3,
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
  [4695] = 3,
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
  [4723] = 3,
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
  [4751] = 3,
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
  [4779] = 3,
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
  [4807] = 3,
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
  [4835] = 3,
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
  [4863] = 3,
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
  [4891] = 3,
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
  [4919] = 3,
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
  [4947] = 3,
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
  [4975] = 3,
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
  [5003] = 3,
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
  [5031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(300), 1,
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
  [5064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5166] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5200] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
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
  [5234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5268] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(64), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(63), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 10,
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
  [5302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5354] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(307), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(90), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(91), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(303), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_EQ,
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
  [5503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(315), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [5522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_QMARK,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
      sym_ellipsis,
  [5543] = 3,
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
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_BANG,
  [5562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(35), 10,
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
  [5581] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_EQ,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(147), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(136), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_body,
    STATE(134), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(136), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_body,
    STATE(134), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [5669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(347), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_ellipsis,
  [5684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(347), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_ellipsis,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
      anon_sym_QMARK,
  [5719] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      sym_ellipsis,
    STATE(148), 1,
      aux_sym_tuple_repeat1,
  [5738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_QMARK,
    ACTIONS(319), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_if,
      sym_ellipsis,
  [5751] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(367), 1,
      sym_ellipsis,
    ACTIONS(369), 1,
      anon_sym_QMARK,
    STATE(204), 1,
      sym_for_cond,
  [5770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(145), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_QMARK,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      sym_ellipsis,
    STATE(200), 1,
      sym_for_cond,
  [5806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(145), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [5823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      sym_ellipsis,
    STATE(138), 1,
      aux_sym_tuple_repeat1,
  [5839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [5851] = 4,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(395), 2,
      aux_sym_string_lit_token1,
      sym_escape_sequence,
  [5865] = 4,
    ACTIONS(398), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(402), 2,
      aux_sym_string_lit_token1,
      sym_escape_sequence,
  [5879] = 4,
    ACTIONS(398), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(406), 2,
      aux_sym_string_lit_token1,
      sym_escape_sequence,
  [5893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_tuple_repeat1,
  [5909] = 4,
    ACTIONS(398), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(414), 2,
      aux_sym_string_lit_token1,
      sym_escape_sequence,
  [5923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_tuple_repeat1,
  [5939] = 4,
    ACTIONS(398), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_lit_repeat1,
    ACTIONS(414), 2,
      aux_sym_string_lit_token1,
      sym_escape_sequence,
  [5953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_QMARK,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_for_cond,
  [5969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_QMARK,
    ACTIONS(422), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_for_cond,
  [5985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_tuple_repeat1,
  [5998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_tuple_repeat1,
  [6011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_for_cond,
  [6024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_object_repeat1,
  [6037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [6048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      aux_sym_object_repeat1,
  [6061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_object_repeat1,
  [6083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(442), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_if,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_for_cond,
  [6116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(448), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_object_repeat1,
  [6140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [6149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_object_repeat1,
  [6162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
  [6172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_STAR,
  [6182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(465), 1,
      anon_sym_COLON,
  [6192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [6202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [6210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(469), 1,
      anon_sym_EQ_GT,
  [6220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
  [6230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [6240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(475), 1,
      anon_sym_COLON,
  [6250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_in,
  [6260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(481), 1,
      anon_sym_EQ_GT,
  [6270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_STAR,
  [6280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [6290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [6300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
  [6307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
  [6314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [6321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [6328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [6335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_in,
  [6342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [6349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [6356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
  [6363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
  [6370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [6377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
  [6384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [6391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
  [6405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
  [6412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [6419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
  [6426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
  [6433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_identifier,
  [6440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 369,
  [SMALL_STATE(8)] = 441,
  [SMALL_STATE(9)] = 513,
  [SMALL_STATE(10)] = 582,
  [SMALL_STATE(11)] = 625,
  [SMALL_STATE(12)] = 668,
  [SMALL_STATE(13)] = 737,
  [SMALL_STATE(14)] = 806,
  [SMALL_STATE(15)] = 875,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 987,
  [SMALL_STATE(18)] = 1053,
  [SMALL_STATE(19)] = 1119,
  [SMALL_STATE(20)] = 1159,
  [SMALL_STATE(21)] = 1225,
  [SMALL_STATE(22)] = 1291,
  [SMALL_STATE(23)] = 1331,
  [SMALL_STATE(24)] = 1397,
  [SMALL_STATE(25)] = 1463,
  [SMALL_STATE(26)] = 1503,
  [SMALL_STATE(27)] = 1569,
  [SMALL_STATE(28)] = 1605,
  [SMALL_STATE(29)] = 1671,
  [SMALL_STATE(30)] = 1737,
  [SMALL_STATE(31)] = 1803,
  [SMALL_STATE(32)] = 1869,
  [SMALL_STATE(33)] = 1935,
  [SMALL_STATE(34)] = 2001,
  [SMALL_STATE(35)] = 2067,
  [SMALL_STATE(36)] = 2133,
  [SMALL_STATE(37)] = 2199,
  [SMALL_STATE(38)] = 2265,
  [SMALL_STATE(39)] = 2331,
  [SMALL_STATE(40)] = 2397,
  [SMALL_STATE(41)] = 2433,
  [SMALL_STATE(42)] = 2499,
  [SMALL_STATE(43)] = 2536,
  [SMALL_STATE(44)] = 2570,
  [SMALL_STATE(45)] = 2604,
  [SMALL_STATE(46)] = 2638,
  [SMALL_STATE(47)] = 2672,
  [SMALL_STATE(48)] = 2706,
  [SMALL_STATE(49)] = 2740,
  [SMALL_STATE(50)] = 2774,
  [SMALL_STATE(51)] = 2808,
  [SMALL_STATE(52)] = 2842,
  [SMALL_STATE(53)] = 2876,
  [SMALL_STATE(54)] = 2910,
  [SMALL_STATE(55)] = 2944,
  [SMALL_STATE(56)] = 2978,
  [SMALL_STATE(57)] = 3012,
  [SMALL_STATE(58)] = 3046,
  [SMALL_STATE(59)] = 3080,
  [SMALL_STATE(60)] = 3114,
  [SMALL_STATE(61)] = 3148,
  [SMALL_STATE(62)] = 3182,
  [SMALL_STATE(63)] = 3216,
  [SMALL_STATE(64)] = 3250,
  [SMALL_STATE(65)] = 3284,
  [SMALL_STATE(66)] = 3318,
  [SMALL_STATE(67)] = 3373,
  [SMALL_STATE(68)] = 3410,
  [SMALL_STATE(69)] = 3447,
  [SMALL_STATE(70)] = 3484,
  [SMALL_STATE(71)] = 3518,
  [SMALL_STATE(72)] = 3552,
  [SMALL_STATE(73)] = 3586,
  [SMALL_STATE(74)] = 3637,
  [SMALL_STATE(75)] = 3688,
  [SMALL_STATE(76)] = 3739,
  [SMALL_STATE(77)] = 3790,
  [SMALL_STATE(78)] = 3841,
  [SMALL_STATE(79)] = 3892,
  [SMALL_STATE(80)] = 3943,
  [SMALL_STATE(81)] = 3994,
  [SMALL_STATE(82)] = 4045,
  [SMALL_STATE(83)] = 4076,
  [SMALL_STATE(84)] = 4127,
  [SMALL_STATE(85)] = 4178,
  [SMALL_STATE(86)] = 4229,
  [SMALL_STATE(87)] = 4280,
  [SMALL_STATE(88)] = 4331,
  [SMALL_STATE(89)] = 4359,
  [SMALL_STATE(90)] = 4387,
  [SMALL_STATE(91)] = 4415,
  [SMALL_STATE(92)] = 4443,
  [SMALL_STATE(93)] = 4471,
  [SMALL_STATE(94)] = 4499,
  [SMALL_STATE(95)] = 4527,
  [SMALL_STATE(96)] = 4555,
  [SMALL_STATE(97)] = 4583,
  [SMALL_STATE(98)] = 4611,
  [SMALL_STATE(99)] = 4639,
  [SMALL_STATE(100)] = 4667,
  [SMALL_STATE(101)] = 4695,
  [SMALL_STATE(102)] = 4723,
  [SMALL_STATE(103)] = 4751,
  [SMALL_STATE(104)] = 4779,
  [SMALL_STATE(105)] = 4807,
  [SMALL_STATE(106)] = 4835,
  [SMALL_STATE(107)] = 4863,
  [SMALL_STATE(108)] = 4891,
  [SMALL_STATE(109)] = 4919,
  [SMALL_STATE(110)] = 4947,
  [SMALL_STATE(111)] = 4975,
  [SMALL_STATE(112)] = 5003,
  [SMALL_STATE(113)] = 5031,
  [SMALL_STATE(114)] = 5064,
  [SMALL_STATE(115)] = 5098,
  [SMALL_STATE(116)] = 5132,
  [SMALL_STATE(117)] = 5166,
  [SMALL_STATE(118)] = 5200,
  [SMALL_STATE(119)] = 5234,
  [SMALL_STATE(120)] = 5268,
  [SMALL_STATE(121)] = 5302,
  [SMALL_STATE(122)] = 5328,
  [SMALL_STATE(123)] = 5354,
  [SMALL_STATE(124)] = 5380,
  [SMALL_STATE(125)] = 5406,
  [SMALL_STATE(126)] = 5432,
  [SMALL_STATE(127)] = 5458,
  [SMALL_STATE(128)] = 5484,
  [SMALL_STATE(129)] = 5503,
  [SMALL_STATE(130)] = 5522,
  [SMALL_STATE(131)] = 5543,
  [SMALL_STATE(132)] = 5562,
  [SMALL_STATE(133)] = 5581,
  [SMALL_STATE(134)] = 5601,
  [SMALL_STATE(135)] = 5617,
  [SMALL_STATE(136)] = 5635,
  [SMALL_STATE(137)] = 5651,
  [SMALL_STATE(138)] = 5669,
  [SMALL_STATE(139)] = 5684,
  [SMALL_STATE(140)] = 5697,
  [SMALL_STATE(141)] = 5708,
  [SMALL_STATE(142)] = 5719,
  [SMALL_STATE(143)] = 5738,
  [SMALL_STATE(144)] = 5751,
  [SMALL_STATE(145)] = 5770,
  [SMALL_STATE(146)] = 5787,
  [SMALL_STATE(147)] = 5806,
  [SMALL_STATE(148)] = 5823,
  [SMALL_STATE(149)] = 5839,
  [SMALL_STATE(150)] = 5851,
  [SMALL_STATE(151)] = 5865,
  [SMALL_STATE(152)] = 5879,
  [SMALL_STATE(153)] = 5893,
  [SMALL_STATE(154)] = 5909,
  [SMALL_STATE(155)] = 5923,
  [SMALL_STATE(156)] = 5939,
  [SMALL_STATE(157)] = 5953,
  [SMALL_STATE(158)] = 5969,
  [SMALL_STATE(159)] = 5985,
  [SMALL_STATE(160)] = 5998,
  [SMALL_STATE(161)] = 6011,
  [SMALL_STATE(162)] = 6024,
  [SMALL_STATE(163)] = 6037,
  [SMALL_STATE(164)] = 6048,
  [SMALL_STATE(165)] = 6061,
  [SMALL_STATE(166)] = 6070,
  [SMALL_STATE(167)] = 6083,
  [SMALL_STATE(168)] = 6094,
  [SMALL_STATE(169)] = 6103,
  [SMALL_STATE(170)] = 6116,
  [SMALL_STATE(171)] = 6127,
  [SMALL_STATE(172)] = 6140,
  [SMALL_STATE(173)] = 6149,
  [SMALL_STATE(174)] = 6162,
  [SMALL_STATE(175)] = 6172,
  [SMALL_STATE(176)] = 6182,
  [SMALL_STATE(177)] = 6192,
  [SMALL_STATE(178)] = 6202,
  [SMALL_STATE(179)] = 6210,
  [SMALL_STATE(180)] = 6220,
  [SMALL_STATE(181)] = 6230,
  [SMALL_STATE(182)] = 6240,
  [SMALL_STATE(183)] = 6250,
  [SMALL_STATE(184)] = 6260,
  [SMALL_STATE(185)] = 6270,
  [SMALL_STATE(186)] = 6280,
  [SMALL_STATE(187)] = 6290,
  [SMALL_STATE(188)] = 6300,
  [SMALL_STATE(189)] = 6307,
  [SMALL_STATE(190)] = 6314,
  [SMALL_STATE(191)] = 6321,
  [SMALL_STATE(192)] = 6328,
  [SMALL_STATE(193)] = 6335,
  [SMALL_STATE(194)] = 6342,
  [SMALL_STATE(195)] = 6349,
  [SMALL_STATE(196)] = 6356,
  [SMALL_STATE(197)] = 6363,
  [SMALL_STATE(198)] = 6370,
  [SMALL_STATE(199)] = 6377,
  [SMALL_STATE(200)] = 6384,
  [SMALL_STATE(201)] = 6391,
  [SMALL_STATE(202)] = 6398,
  [SMALL_STATE(203)] = 6405,
  [SMALL_STATE(204)] = 6412,
  [SMALL_STATE(205)] = 6419,
  [SMALL_STATE(206)] = 6426,
  [SMALL_STATE(207)] = 6433,
  [SMALL_STATE(208)] = 6440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 4),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(23),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(190),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(23),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(190),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(23),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(190),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(190),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(190),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 3),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(190),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(30),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(207),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(30),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(207),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(30),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(207),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(207),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(207),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(207),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_expr, 1), SHIFT(29),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_expr, 1), SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(18),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(133),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(28),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional, 5), SHIFT(24),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(145),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(152),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_lit_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2), SHIFT_REPEAT(150),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(12),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [517] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
