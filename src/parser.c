#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_null_lit = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_COLON = 16,
  anon_sym_DOT = 17,
  anon_sym_STAR = 18,
  anon_sym_EQ_GT = 19,
  anon_sym_DOT_DOT_DOT = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_if = 23,
  sym_comment = 24,
  sym_config_file = 25,
  sym_body = 26,
  sym_attribute = 27,
  sym_block = 28,
  sym_expression = 29,
  sym_expr_term = 30,
  sym_literal_value = 31,
  sym_string_lit = 32,
  sym_bool_lit = 33,
  sym_collection_value = 34,
  sym_tuple = 35,
  sym_object = 36,
  sym_object_elem = 37,
  sym_index = 38,
  sym_get_attr = 39,
  sym_splat = 40,
  sym_attr_splat = 41,
  sym_full_splat = 42,
  sym_for_expr = 43,
  sym_for_tuple_expr = 44,
  sym_for_object_expr = 45,
  sym_for_intro = 46,
  sym_for_cond = 47,
  sym_variable_expr = 48,
  aux_sym_body_repeat1 = 49,
  aux_sym_block_repeat1 = 50,
  aux_sym_tuple_repeat1 = 51,
  aux_sym_object_repeat1 = 52,
  aux_sym_attr_splat_repeat1 = 53,
  aux_sym_full_splat_repeat1 = 54,
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
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
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
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
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
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_DOT_DOT_DOT] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(56);
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(40);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(37);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(63);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(36);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(35);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_numeric_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_null_lit);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_null_lit);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
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
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 53},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
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
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(151),
    [sym_body] = STATE(149),
    [sym_attribute] = STATE(66),
    [sym_block] = STATE(66),
    [aux_sym_body_repeat1] = STATE(66),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    STATE(15), 1,
      sym_for_intro,
    STATE(25), 1,
      sym_expr_term,
    STATE(107), 1,
      sym_object_elem,
    STATE(116), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [65] = 19,
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
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_for_intro,
    STATE(25), 1,
      sym_expr_term,
    STATE(105), 1,
      sym_object_elem,
    STATE(116), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [130] = 18,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_for_intro,
    STATE(25), 1,
      sym_expr_term,
    STATE(106), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [192] = 18,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_for_intro,
    STATE(25), 1,
      sym_expr_term,
    STATE(102), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [254] = 16,
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
    STATE(25), 1,
      sym_expr_term,
    STATE(116), 1,
      sym_expression,
    STATE(120), 1,
      sym_object_elem,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [310] = 16,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(25), 1,
      sym_expr_term,
    STATE(136), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [366] = 16,
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
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_STAR,
    STATE(25), 1,
      sym_expr_term,
    STATE(148), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [422] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_null_lit,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expr_term,
    STATE(95), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(81), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(91), 2,
      sym_tuple,
      sym_object,
    STATE(90), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [475] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(136), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [528] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(122), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [581] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(135), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [634] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(134), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [687] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(131), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [740] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(150), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [793] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(126), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [846] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(97), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [899] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_null_lit,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expr_term,
    STATE(96), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(81), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(91), 2,
      sym_tuple,
      sym_object,
    STATE(90), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [952] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(148), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1005] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_null_lit,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expr_term,
    STATE(109), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(81), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(91), 2,
      sym_tuple,
      sym_object,
    STATE(90), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1058] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(121), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1111] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(118), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1164] = 15,
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
    ACTIONS(29), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expr_term,
    STATE(142), 1,
      sym_expression,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(52), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(53), 2,
      sym_tuple,
      sym_object,
    STATE(54), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1217] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_numeric_lit,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_null_lit,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expr_term,
    STATE(101), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 2,
      sym_for_tuple_expr,
      sym_for_object_expr,
    STATE(81), 2,
      sym_string_lit,
      sym_bool_lit,
    STATE(91), 2,
      sym_tuple,
      sym_object,
    STATE(90), 4,
      sym_literal_value,
      sym_collection_value,
      sym_for_expr,
      sym_variable_expr,
  [1270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(39), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(26), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_EQ,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(28), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_DOT,
    STATE(26), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(32), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(30), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_EQ,
    ACTIONS(107), 12,
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
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(115), 1,
      anon_sym_DOT,
    STATE(30), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_GT,
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_EQ,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(138), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_EQ,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(150), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(89), 2,
      sym_attr_splat,
      sym_full_splat,
    STATE(69), 3,
      sym_index,
      sym_get_attr,
      sym_splat,
    ACTIONS(55), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_EQ,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_EQ,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_EQ,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(186), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_EQ,
    ACTIONS(198), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 10,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_EQ_GT,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(208), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [1939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(63), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [1960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      anon_sym_DOT,
    STATE(57), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(83), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null_lit,
    ACTIONS(224), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_numeric_lit,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [1998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(58), 3,
      sym_index,
      sym_get_attr,
      aux_sym_full_splat_repeat1,
    ACTIONS(73), 4,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(100), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(61), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(111), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(62), 2,
      sym_get_attr,
      aux_sym_attr_splat_repeat1,
    ACTIONS(93), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(162), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(93), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [2123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_body,
    STATE(66), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(206), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(142), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(70), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(150), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(130), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(138), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT,
    ACTIONS(190), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_body,
    STATE(66), 3,
      sym_attribute,
      sym_block,
      aux_sym_body_repeat1,
  [2259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(134), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_DOT,
    ACTIONS(166), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(194), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(126), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(122), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(154), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(186), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(182), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(107), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(118), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(146), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(202), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(198), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_if,
  [2483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(92), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [2500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(92), 2,
      sym_string_lit,
      aux_sym_block_repeat1,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
    ACTIONS(274), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(281), 1,
      anon_sym_if,
    STATE(127), 1,
      sym_for_cond,
  [2545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(143), 1,
      sym_for_cond,
  [2561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [2570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_tuple_repeat1,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_for_cond,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      sym_for_cond,
  [2618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_tuple_repeat1,
  [2631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_tuple_repeat1,
  [2644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_object_repeat1,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      aux_sym_tuple_repeat1,
  [2683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_object_repeat1,
  [2696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_for_cond,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_if,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_for_cond,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_object_repeat1,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [2766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_tuple_repeat1,
  [2779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_in,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [2797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_STAR,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      anon_sym_STAR,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_EQ_GT,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COLON,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [3003] = 2,
    ACTIONS(385), 1,
      aux_sym_string_lit_token1,
    ACTIONS(387), 1,
      sym_comment,
  [3010] = 2,
    ACTIONS(387), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_string_lit_token1,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_in,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_EQ_GT,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 422,
  [SMALL_STATE(10)] = 475,
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 581,
  [SMALL_STATE(13)] = 634,
  [SMALL_STATE(14)] = 687,
  [SMALL_STATE(15)] = 740,
  [SMALL_STATE(16)] = 793,
  [SMALL_STATE(17)] = 846,
  [SMALL_STATE(18)] = 899,
  [SMALL_STATE(19)] = 952,
  [SMALL_STATE(20)] = 1005,
  [SMALL_STATE(21)] = 1058,
  [SMALL_STATE(22)] = 1111,
  [SMALL_STATE(23)] = 1164,
  [SMALL_STATE(24)] = 1217,
  [SMALL_STATE(25)] = 1270,
  [SMALL_STATE(26)] = 1302,
  [SMALL_STATE(27)] = 1330,
  [SMALL_STATE(28)] = 1358,
  [SMALL_STATE(29)] = 1386,
  [SMALL_STATE(30)] = 1411,
  [SMALL_STATE(31)] = 1436,
  [SMALL_STATE(32)] = 1457,
  [SMALL_STATE(33)] = 1482,
  [SMALL_STATE(34)] = 1501,
  [SMALL_STATE(35)] = 1520,
  [SMALL_STATE(36)] = 1539,
  [SMALL_STATE(37)] = 1558,
  [SMALL_STATE(38)] = 1577,
  [SMALL_STATE(39)] = 1596,
  [SMALL_STATE(40)] = 1615,
  [SMALL_STATE(41)] = 1634,
  [SMALL_STATE(42)] = 1653,
  [SMALL_STATE(43)] = 1672,
  [SMALL_STATE(44)] = 1697,
  [SMALL_STATE(45)] = 1716,
  [SMALL_STATE(46)] = 1735,
  [SMALL_STATE(47)] = 1754,
  [SMALL_STATE(48)] = 1773,
  [SMALL_STATE(49)] = 1792,
  [SMALL_STATE(50)] = 1811,
  [SMALL_STATE(51)] = 1830,
  [SMALL_STATE(52)] = 1849,
  [SMALL_STATE(53)] = 1868,
  [SMALL_STATE(54)] = 1887,
  [SMALL_STATE(55)] = 1906,
  [SMALL_STATE(56)] = 1922,
  [SMALL_STATE(57)] = 1939,
  [SMALL_STATE(58)] = 1960,
  [SMALL_STATE(59)] = 1981,
  [SMALL_STATE(60)] = 1998,
  [SMALL_STATE(61)] = 2019,
  [SMALL_STATE(62)] = 2037,
  [SMALL_STATE(63)] = 2055,
  [SMALL_STATE(64)] = 2073,
  [SMALL_STATE(65)] = 2087,
  [SMALL_STATE(66)] = 2107,
  [SMALL_STATE(67)] = 2123,
  [SMALL_STATE(68)] = 2141,
  [SMALL_STATE(69)] = 2155,
  [SMALL_STATE(70)] = 2169,
  [SMALL_STATE(71)] = 2185,
  [SMALL_STATE(72)] = 2199,
  [SMALL_STATE(73)] = 2213,
  [SMALL_STATE(74)] = 2227,
  [SMALL_STATE(75)] = 2241,
  [SMALL_STATE(76)] = 2259,
  [SMALL_STATE(77)] = 2273,
  [SMALL_STATE(78)] = 2287,
  [SMALL_STATE(79)] = 2301,
  [SMALL_STATE(80)] = 2315,
  [SMALL_STATE(81)] = 2329,
  [SMALL_STATE(82)] = 2343,
  [SMALL_STATE(83)] = 2357,
  [SMALL_STATE(84)] = 2371,
  [SMALL_STATE(85)] = 2385,
  [SMALL_STATE(86)] = 2399,
  [SMALL_STATE(87)] = 2413,
  [SMALL_STATE(88)] = 2427,
  [SMALL_STATE(89)] = 2441,
  [SMALL_STATE(90)] = 2455,
  [SMALL_STATE(91)] = 2469,
  [SMALL_STATE(92)] = 2483,
  [SMALL_STATE(93)] = 2500,
  [SMALL_STATE(94)] = 2517,
  [SMALL_STATE(95)] = 2529,
  [SMALL_STATE(96)] = 2545,
  [SMALL_STATE(97)] = 2561,
  [SMALL_STATE(98)] = 2570,
  [SMALL_STATE(99)] = 2583,
  [SMALL_STATE(100)] = 2592,
  [SMALL_STATE(101)] = 2605,
  [SMALL_STATE(102)] = 2618,
  [SMALL_STATE(103)] = 2631,
  [SMALL_STATE(104)] = 2644,
  [SMALL_STATE(105)] = 2657,
  [SMALL_STATE(106)] = 2670,
  [SMALL_STATE(107)] = 2683,
  [SMALL_STATE(108)] = 2696,
  [SMALL_STATE(109)] = 2705,
  [SMALL_STATE(110)] = 2718,
  [SMALL_STATE(111)] = 2731,
  [SMALL_STATE(112)] = 2744,
  [SMALL_STATE(113)] = 2757,
  [SMALL_STATE(114)] = 2766,
  [SMALL_STATE(115)] = 2779,
  [SMALL_STATE(116)] = 2789,
  [SMALL_STATE(117)] = 2797,
  [SMALL_STATE(118)] = 2807,
  [SMALL_STATE(119)] = 2815,
  [SMALL_STATE(120)] = 2825,
  [SMALL_STATE(121)] = 2833,
  [SMALL_STATE(122)] = 2841,
  [SMALL_STATE(123)] = 2849,
  [SMALL_STATE(124)] = 2856,
  [SMALL_STATE(125)] = 2863,
  [SMALL_STATE(126)] = 2870,
  [SMALL_STATE(127)] = 2877,
  [SMALL_STATE(128)] = 2884,
  [SMALL_STATE(129)] = 2891,
  [SMALL_STATE(130)] = 2898,
  [SMALL_STATE(131)] = 2905,
  [SMALL_STATE(132)] = 2912,
  [SMALL_STATE(133)] = 2919,
  [SMALL_STATE(134)] = 2926,
  [SMALL_STATE(135)] = 2933,
  [SMALL_STATE(136)] = 2940,
  [SMALL_STATE(137)] = 2947,
  [SMALL_STATE(138)] = 2954,
  [SMALL_STATE(139)] = 2961,
  [SMALL_STATE(140)] = 2968,
  [SMALL_STATE(141)] = 2975,
  [SMALL_STATE(142)] = 2982,
  [SMALL_STATE(143)] = 2989,
  [SMALL_STATE(144)] = 2996,
  [SMALL_STATE(145)] = 3003,
  [SMALL_STATE(146)] = 3010,
  [SMALL_STATE(147)] = 3017,
  [SMALL_STATE(148)] = 3024,
  [SMALL_STATE(149)] = 3031,
  [SMALL_STATE(150)] = 3038,
  [SMALL_STATE(151)] = 3045,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(133),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 3),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(19),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(133),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_splat, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_splat, 4),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(19),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(133),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_attr_splat, 2), SHIFT(133),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(133),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_lit, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_splat, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_splat, 3),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_attr_splat, 3), SHIFT(133),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 7),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 6),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splat, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splat, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_object_expr, 8),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_object_expr, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_attr, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_attr, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tuple_expr, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tuple_expr, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expr, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expr, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection_value, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection_value, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_term, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_term, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expr, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 5),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(10),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_full_splat_repeat1, 2), SHIFT_REPEAT(141),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 4), SHIFT(10),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 4), SHIFT(141),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_intro, 7),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_intro, 7),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_full_splat, 3), SHIFT(10),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_splat, 3), SHIFT(141),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_splat_repeat1, 2), SHIFT_REPEAT(141),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 3), SHIFT(141),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_attr_splat, 2), SHIFT(141),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expr, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(65),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_expr, 1), SHIFT(22),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 1),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(21),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_elem, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_cond, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
