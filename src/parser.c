#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 107
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_POUND = 4,
  anon_sym_POUND_BANG = 5,
  aux_sym_comment_token3 = 6,
  anon_sym_POUND_SEMI = 7,
  anon_sym_POUNDt = 8,
  anon_sym_POUNDf = 9,
  anon_sym_POUNDT = 10,
  anon_sym_POUNDF = 11,
  sym_character = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  sym_escape_sequence = 15,
  sym_number = 16,
  sym_symbol = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_DOT = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_BQUOTE = 26,
  anon_sym_COMMA = 27,
  anon_sym_COMMA_AT = 28,
  anon_sym_POUND_SQUOTE = 29,
  anon_sym_POUND_BQUOTE = 30,
  anon_sym_POUND_COMMA = 31,
  anon_sym_POUND_COMMA_AT = 32,
  anon_sym_quote = 33,
  anon_sym_POUND_LPAREN = 34,
  anon_sym_POUNDvu8_LPAREN = 35,
  anon_sym_define = 36,
  anon_sym_if = 37,
  sym_program = 38,
  sym__datum = 39,
  sym_comment = 40,
  sym_directive = 41,
  sym__simple_datum = 42,
  sym_boolean = 43,
  sym_string = 44,
  sym__compound_datum = 45,
  sym_list = 46,
  sym__abbreviation = 47,
  sym__abbreviation_prefix = 48,
  sym__special_form = 49,
  sym_vector = 50,
  sym_byte_vector = 51,
  sym_if_expr = 52,
  sym_test = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_byte_vector_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [anon_sym_POUNDT] = "#T",
  [anon_sym_POUNDF] = "#F",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_quote] = "quote",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [anon_sym_define] = "define",
  [anon_sym_if] = "if",
  [sym_program] = "program",
  [sym__datum] = "_datum",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym__simple_datum] = "_simple_datum",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym__compound_datum] = "_compound_datum",
  [sym_list] = "list",
  [sym__abbreviation] = "_abbreviation",
  [sym__abbreviation_prefix] = "_abbreviation_prefix",
  [sym__special_form] = "_special_form",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [sym_if_expr] = "if_expr",
  [sym_test] = "test",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_byte_vector_repeat1] = "byte_vector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [anon_sym_POUNDT] = anon_sym_POUNDT,
  [anon_sym_POUNDF] = anon_sym_POUNDF,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_if] = anon_sym_if,
  [sym_program] = sym_program,
  [sym__datum] = sym__datum,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym__simple_datum] = sym__simple_datum,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym__compound_datum] = sym__compound_datum,
  [sym_list] = sym_list,
  [sym__abbreviation] = sym__abbreviation,
  [sym__abbreviation_prefix] = sym__abbreviation_prefix,
  [sym__special_form] = sym__special_form,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [sym_if_expr] = sym_if_expr,
  [sym_test] = sym_test,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_byte_vector_repeat1] = aux_sym_byte_vector_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDF] = {
    .visible = true,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__abbreviation] = {
    .visible = false,
    .named = true,
  },
  [sym__abbreviation_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__special_form] = {
    .visible = false,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_vector_repeat1] = {
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

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= ' ' || c == 160))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8202)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < 6742
    ? (c < 3086
      ? (c < 2492
        ? (c < 1473
          ? (c < 457
            ? (c < '~'
              ? (c < '<'
                ? (c < '/'
                  ? (c < '*'
                    ? (c >= '!' && c <= '&')
                    : c <= '*')
                  : (c <= '/' || c == ':'))
                : (c <= 'Z' || (c < 'a'
                  ? (c >= '^' && c <= '_')
                  : (c <= 'z' || c == '|'))))
              : (c <= '~' || (c < 184
                ? (c < 172
                  ? (c < 168
                    ? (c >= 162 && c <= 166)
                    : c <= 170)
                  : (c <= 172 || (c >= 174 && c <= 181)))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 452 || (c >= 454 && c <= 455)))))))
            : (c <= 458 || (c < 931
              ? (c < 900
                ? (c < 890
                  ? (c < 499
                    ? (c >= 460 && c <= 497)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1159 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1421
                  ? c == 1418
                  : (c <= 1423 || (c >= 1425 && c <= 1471)))))))))
          : (c <= 1474 || (c < 2112
            ? (c < 1646
              ? (c < 1542
                ? (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1544 || (c < 1550
                  ? c == 1547
                  : (c <= 1562 || (c >= 1568 && c <= 1631)))))
              : (c <= 1747 || (c < 1869
                ? (c < 1786
                  ? (c < 1758
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1775)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))
                : (c <= 1969 || (c < 2042
                  ? (c >= 1994 && c <= 2038)
                  : (c <= 2042 || (c >= 2045 && c <= 2093)))))))
            : (c <= 2139 || (c < 2384
              ? (c < 2308
                ? (c < 2200
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2306)))
                : (c <= 2362 || (c < 2369
                  ? (c >= 2364 && c <= 2365)
                  : (c <= 2376 || c == 2381))))
              : (c <= 2403 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2433)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))))))
        : (c <= 2493 || (c < 2784
          ? (c < 2635
            ? (c < 2575
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2509
                    ? (c >= 2497 && c <= 2500)
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2562 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2625
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))))))
            : (c <= 2637 || (c < 2730
              ? (c < 2689
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2672 && c <= 2677)))
                : (c <= 2690 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))
              : (c <= 2736 || (c < 2753
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2749)))
                : (c <= 2757 || (c < 2765
                  ? (c >= 2759 && c <= 2760)
                  : (c <= 2765 || c == 2768))))))))
          : (c <= 2787 || (c < 2928
            ? (c < 2869
              ? (c < 2831
                ? (c < 2817
                  ? (c < 2809
                    ? c == 2801
                    : c <= 2815)
                  : (c <= 2817 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2893
                ? (c < 2879
                  ? (c >= 2876 && c <= 2877)
                  : (c <= 2879 || (c >= 2881 && c <= 2884)))
                : (c <= 2893 || (c < 2908
                  ? (c >= 2901 && c <= 2902)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))
            : (c <= 2935 || (c < 2984
              ? (c < 2969
                ? (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3024
                ? (c < 3008
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3008 || c == 3021))
                : (c <= 3024 || (c < 3072
                  ? (c >= 3056 && c <= 3066)
                  : (c <= 3072 || (c >= 3076 && c <= 3084)))))))))))))
      : (c <= 3088 || (c < 4157
        ? (c < 3507
          ? (c < 3270
            ? (c < 3168
              ? (c < 3146
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3136 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))))
              : (c <= 3171 || (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3192 && c <= 3201)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3263))))))
            : (c <= 3270 || (c < 3393
              ? (c < 3328
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3276 && c <= 3277)
                    : c <= 3294)
                  : (c <= 3299 || (c >= 3313 && c <= 3314)))
                : (c <= 3329 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3389)))))
              : (c <= 3396 || (c < 3440
                ? (c < 3412
                  ? (c >= 3405 && c <= 3407)
                  : (c <= 3414 || (c >= 3416 && c <= 3427)))
                : (c <= 3455 || (c < 3461
                  ? c == 3457
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))))))
          : (c <= 3515 || (c < 3840
            ? (c < 3716
              ? (c < 3542
                ? (c < 3530
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3530 || (c >= 3538 && c <= 3540)))
                : (c <= 3542 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3776
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3804 && c <= 3807)))))))
            : (c <= 3843 || (c < 3993
              ? (c < 3913
                ? (c < 3882
                  ? (c < 3861
                    ? c == 3859
                    : c <= 3871)
                  : (c <= 3897 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 3968
                  ? (c >= 3953 && c <= 3966)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4096
                ? (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))
                : (c <= 4138 || (c < 4146
                  ? (c >= 4141 && c <= 4144)
                  : (c <= 4151 || (c >= 4153 && c <= 4154)))))))))))
        : (c <= 4159 || (c < 5870
          ? (c < 4752
            ? (c < 4301
              ? (c < 4229
                ? (c < 4197
                  ? (c < 4184
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4226)))
                : (c <= 4230 || (c < 4253
                  ? (c >= 4237 && c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))))
            : (c <= 4784 || (c < 4957
              ? (c < 4808
                ? (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))
              : (c <= 4959 || (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6176
            ? (c < 6086
              ? (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5908)
                    : c <= 5939)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : (c <= 6069 || (c >= 6071 && c <= 6077)))))
              : (c <= 6086 || (c < 6128
                ? (c < 6103
                  ? (c >= 6089 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))
                : (c <= 6137 || (c < 6155
                  ? c == 6150
                  : (c <= 6157 || c == 6159))))))
            : (c <= 6264 || (c < 6480
              ? (c < 6439
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6434)))
                : (c <= 6440 || (c < 6457
                  ? c == 6450
                  : (c <= 6459 || c == 6464))))
              : (c <= 6509 || (c < 6618
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6683
                  ? (c >= 6622 && c <= 6680)
                  : (c <= 6683 || (c >= 6688 && c <= 6740)))))))))))))))
    : (c <= 6742 || (c < 42965
      ? (c < 8400
        ? (c < 7380
          ? (c < 7043
            ? (c < 6847
              ? (c < 6771
                ? (c < 6754
                  ? (c < 6752
                    ? (c >= 6744 && c <= 6750)
                    : c <= 6752)
                  : (c <= 6754 || (c >= 6757 && c <= 6764)))
                : (c <= 6780 || (c < 6823
                  ? c == 6783
                  : (c <= 6823 || (c >= 6832 && c <= 6845)))))
              : (c <= 6862 || (c < 6978
                ? (c < 6966
                  ? (c < 6917
                    ? (c >= 6912 && c <= 6915)
                    : c <= 6964)
                  : (c <= 6970 || c == 6972))
                : (c <= 6978 || (c < 7009
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7036 || (c >= 7040 && c <= 7041)))))))
            : (c <= 7072 || (c < 7212
              ? (c < 7144
                ? (c < 7083
                  ? (c < 7080
                    ? (c >= 7074 && c <= 7077)
                    : c <= 7081)
                  : (c <= 7087 || (c >= 7098 && c <= 7142)))
                : (c <= 7145 || (c < 7151
                  ? c == 7149
                  : (c <= 7153 || (c >= 7168 && c <= 7203)))))
              : (c <= 7219 || (c < 7296
                ? (c < 7245
                  ? (c >= 7222 && c <= 7223)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))))))))
          : (c <= 7392 || (c < 8134
            ? (c < 8027
              ? (c < 7968
                ? (c < 7424
                  ? (c < 7416
                    ? (c >= 7394 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))))
              : (c <= 8027 || (c < 8096
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))
                : (c <= 8103 || (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))))))
            : (c <= 8139 || (c < 8260
              ? (c < 8182
                ? (c < 8157
                  ? (c < 8150
                    ? (c >= 8141 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))
                : (c <= 8187 || (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))))
              : (c <= 8260 || (c < 8308
                ? (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))
                : (c <= 8316 || (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))))))))))
        : (c <= 8412 || (c < 11823
          ? (c < 11520
            ? (c < 10102
              ? (c < 8972
                ? (c < 8448
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))
                : (c <= 9000 || (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))))
              : (c <= 10180 || (c < 10750
                ? (c < 10649
                  ? (c < 10224
                    ? (c >= 10183 && c <= 10213)
                    : c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))
                : (c <= 11123 || (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))))))
            : (c <= 11557 || (c < 11704
              ? (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 11799
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11799 || c == 11802))))))))
          : (c <= 11823 || (c < 12540
            ? (c < 12292
              ? (c < 11904
                ? (c < 11856
                  ? (c < 11840
                    ? (c >= 11834 && c <= 11835)
                    : c <= 11840)
                  : (c <= 11857 || c == 11869))
                : (c <= 11929 || (c < 12032
                  ? (c >= 11931 && c <= 12019)
                  : (c <= 12245 || (c >= 12272 && c <= 12283)))))
              : (c <= 12295 || (c < 12336
                ? (c < 12316
                  ? (c >= 12306 && c <= 12307)
                  : (c <= 12316 || (c >= 12320 && c <= 12333)))
                : (c <= 12348 || (c < 12353
                  ? (c >= 12350 && c <= 12351)
                  : (c <= 12438 || (c >= 12441 && c <= 12538)))))))
            : (c <= 12543 || (c < 42512
              ? (c < 12832
                ? (c < 12688
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12771 || (c >= 12784 && c <= 12830)))
                : (c <= 42124 || (c < 42192
                  ? (c >= 42128 && c <= 42182)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42527 || (c < 42623
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : (c <= 42607 || (c >= 42612 && c <= 42621)))
                : (c <= 42737 || (c < 42960
                  ? (c >= 42752 && c <= 42954)
                  : (c <= 42961 || c == 42963))))))))))))
      : (c <= 42969 || (c < 65284
        ? (c < 43793
          ? (c < 43471
            ? (c < 43259
              ? (c < 43072
                ? (c < 43048
                  ? (c < 43045
                    ? (c >= 42994 && c <= 43042)
                    : c <= 43046)
                  : (c <= 43052 || (c >= 43056 && c <= 43065)))
                : (c <= 43123 || (c < 43204
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43205 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43392
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43263)
                    : c <= 43309)
                  : (c <= 43345 || (c >= 43360 && c <= 43388)))
                : (c <= 43394 || (c < 43446
                  ? (c >= 43396 && c <= 43443)
                  : (c <= 43449 || (c >= 43452 && c <= 43453)))))))
            : (c <= 43471 || (c < 43646
              ? (c < 43573
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43488 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43566 || (c >= 43569 && c <= 43570)))
                : (c <= 43574 || (c < 43616
                  ? (c >= 43584 && c <= 43596)
                  : (c <= 43642 || c == 43644))))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43756 && c <= 43757)))
                : (c <= 43764 || (c < 43777
                  ? c == 43766
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))))
          : (c <= 43798 || (c < 64318
            ? (c < 55216
              ? (c < 44005
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43883 || (c >= 43888 && c <= 44002)))
                : (c <= 44005 || (c < 44013
                  ? c == 44008
                  : (c <= 44013 || (c >= 44032 && c <= 55203)))))
              : (c <= 55238 || (c < 64256
                ? (c < 57344
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65056
              ? (c < 64832
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64450 || (c >= 64467 && c <= 64829)))
                : (c <= 64911 || (c < 64975
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 64975 || (c >= 65008 && c <= 65039)))))
              : (c <= 65071 || (c < 65122
                ? (c < 65101
                  ? (c >= 65073 && c <= 65076)
                  : (c <= 65103 || c == 65112))
                : (c <= 65126 || (c < 65136
                  ? c == 65129
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))))))))))
        : (c <= 65284 || (c < 66464
          ? (c < 65576
            ? (c < 65474
              ? (c < 65342
                ? (c < 65308
                  ? (c < 65293
                    ? c == 65291
                    : c <= 65293)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : (c <= 65374 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65512
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65504 && c <= 65510)))
                : (c <= 65518 || (c < 65536
                  ? (c >= 65532 && c <= 65533)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66000
              ? (c < 65799
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65843 || (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))))
              : (c <= 66045 || (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))))))))
          : (c <= 66499 || (c < 67392
            ? (c < 66940
              ? (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))
              : (c <= 66954 || (c < 66979
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))))
            : (c <= 67413 || (c < 67644
              ? (c < 67584
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67672
                  ? (c >= 67647 && c <= 67669)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67835
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))))))))))))))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 3076
      ? (c < 2486
        ? (c < 1425
          ? (c < 454
            ? (c < '|'
              ? (c < '<'
                ? (c < '/'
                  ? (c < '*'
                    ? (c >= '!' && c <= '&')
                    : c <= '*')
                  : (c <= '/' || c == ':'))
                : (c <= 'Z' || (c < 'a'
                  ? (c >= '^' && c <= '_')
                  : (c <= 'h' || (c >= 'j' && c <= 'z')))))
              : (c <= '|' || (c < 174
                ? (c < 168
                  ? (c < 162
                    ? c == '~'
                    : c <= 166)
                  : (c <= 170 || c == 172))
                : (c <= 181 || (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))))))
            : (c <= 455 || (c < 910
              ? (c < 895
                ? (c < 499
                  ? (c < 460
                    ? (c >= 457 && c <= 458)
                    : c <= 497)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? (c >= 900 && c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1162
                  ? (c >= 931 && c <= 1159)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))))))))
          : (c <= 1471 || (c < 2045
            ? (c < 1568
              ? (c < 1519
                ? (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1547
                  ? (c >= 1542 && c <= 1544)
                  : (c <= 1547 || (c >= 1550 && c <= 1562)))))
              : (c <= 1631 || (c < 1808
                ? (c < 1758
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1775 || (c >= 1786 && c <= 1791)))
                : (c <= 1866 || (c < 1994
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2038 || c == 2042))))))
            : (c <= 2093 || (c < 2381
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))
                : (c <= 2306 || (c < 2364
                  ? (c >= 2308 && c <= 2362)
                  : (c <= 2365 || (c >= 2369 && c <= 2376)))))
              : (c <= 2381 || (c < 2447
                ? (c < 2417
                  ? (c >= 2384 && c <= 2403)
                  : (c <= 2433 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))))))))
        : (c <= 2489 || (c < 2768
          ? (c < 2631
            ? (c < 2565
              ? (c < 2527
                ? (c < 2509
                  ? (c < 2497
                    ? (c >= 2492 && c <= 2493)
                    : c <= 2500)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2531 || (c < 2558
                  ? (c >= 2544 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2562)))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2625 && c <= 2626)))))))
            : (c <= 2632 || (c < 2707
              ? (c < 2672
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2693
                  ? (c >= 2689 && c <= 2690)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))
              : (c <= 2728 || (c < 2748
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2759
                  ? (c >= 2753 && c <= 2757)
                  : (c <= 2760 || c == 2765))))))))
          : (c <= 2768 || (c < 2911
            ? (c < 2866
              ? (c < 2821
                ? (c < 2809
                  ? (c < 2801
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2801)
                  : (c <= 2815 || c == 2817))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2881
                ? (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || c == 2879))
                : (c <= 2884 || (c < 2901
                  ? c == 2893
                  : (c <= 2902 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2915 || (c < 2979
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2946
                    ? (c >= 2928 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))
              : (c <= 2980 || (c < 3021
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3008))
                : (c <= 3021 || (c < 3056
                  ? c == 3024
                  : (c <= 3066 || c == 3072))))))))))))
      : (c <= 3084 || (c < 4153
        ? (c < 3482
          ? (c < 3263
            ? (c < 3165
              ? (c < 3142
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3136)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3192
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3201)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3261)))))))
            : (c <= 3263 || (c < 3346
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3276
                    ? c == 3270
                    : c <= 3277)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))
                : (c <= 3314 || (c < 3332
                  ? (c >= 3328 && c <= 3329)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3389 || (c < 3416
                ? (c < 3405
                  ? (c >= 3393 && c <= 3396)
                  : (c <= 3407 || (c >= 3412 && c <= 3414)))
                : (c <= 3427 || (c < 3457
                  ? (c >= 3440 && c <= 3455)
                  : (c <= 3457 || (c >= 3461 && c <= 3478)))))))))
          : (c <= 3505 || (c < 3804
            ? (c < 3713
              ? (c < 3538
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || c == 3530))
                : (c <= 3540 || (c < 3585
                  ? c == 3542
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))))))
            : (c <= 3807 || (c < 3974
              ? (c < 3904
                ? (c < 3861
                  ? (c < 3859
                    ? (c >= 3840 && c <= 3843)
                    : c <= 3859)
                  : (c <= 3871 || (c >= 3882 && c <= 3897)))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3966 || (c >= 3968 && c <= 3972)))))
              : (c <= 3991 || (c < 4053
                ? (c < 4030
                  ? (c >= 3993 && c <= 4028)
                  : (c <= 4044 || (c >= 4046 && c <= 4047)))
                : (c <= 4056 || (c < 4141
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4144 || (c >= 4146 && c <= 4151)))))))))))
        : (c <= 4154 || (c < 5792
          ? (c < 4746
            ? (c < 4295
              ? (c < 4206
                ? (c < 4184
                  ? (c < 4176
                    ? (c >= 4157 && c <= 4159)
                    : c <= 4181)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4226 || (c < 4237
                  ? (c >= 4229 && c <= 4230)
                  : (c <= 4238 || (c >= 4253 && c <= 4293)))))
              : (c <= 4295 || (c < 4688
                ? (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))
            : (c <= 4749 || (c < 4888
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))
              : (c <= 4954 || (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))
                : (c <= 5109 || (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5786)))))))))
          : (c <= 5866 || (c < 6159
            ? (c < 6071
              ? (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5908)
                  : (c <= 5939 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6069)))))
              : (c <= 6077 || (c < 6107
                ? (c < 6089
                  ? c == 6086
                  : (c <= 6099 || c == 6103))
                : (c <= 6109 || (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))))))
            : (c <= 6159 || (c < 6464
              ? (c < 6432
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6434 || (c < 6450
                  ? (c >= 6439 && c <= 6440)
                  : (c <= 6450 || (c >= 6457 && c <= 6459)))))
              : (c <= 6464 || (c < 6576
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6622
                  ? c == 6618
                  : (c <= 6680 || c == 6683))))))))))))))
    : (c <= 6740 || (c < 42963
      ? (c < 8352
        ? (c < 7376
          ? (c < 7040
            ? (c < 6832
              ? (c < 6757
                ? (c < 6752
                  ? (c < 6744
                    ? c == 6742
                    : c <= 6750)
                  : (c <= 6752 || c == 6754))
                : (c <= 6764 || (c < 6783
                  ? (c >= 6771 && c <= 6780)
                  : (c <= 6783 || c == 6823))))
              : (c <= 6845 || (c < 6972
                ? (c < 6917
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6915)
                  : (c <= 6964 || (c >= 6966 && c <= 6970)))
                : (c <= 6972 || (c < 6981
                  ? c == 6978
                  : (c <= 6988 || (c >= 7009 && c <= 7036)))))))
            : (c <= 7041 || (c < 7168
              ? (c < 7098
                ? (c < 7080
                  ? (c < 7074
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7077)
                  : (c <= 7081 || (c >= 7083 && c <= 7087)))
                : (c <= 7142 || (c < 7149
                  ? (c >= 7144 && c <= 7145)
                  : (c <= 7149 || (c >= 7151 && c <= 7153)))))
              : (c <= 7203 || (c < 7258
                ? (c < 7222
                  ? (c >= 7212 && c <= 7219)
                  : (c <= 7223 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))))))
          : (c <= 7378 || (c < 8125
            ? (c < 8025
              ? (c < 7960
                ? (c < 7416
                  ? (c < 7394
                    ? (c >= 7380 && c <= 7392)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8080
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))
                : (c <= 8087 || (c < 8112
                  ? (c >= 8096 && c <= 8103)
                  : (c <= 8116 || (c >= 8118 && c <= 8123)))))))
            : (c <= 8132 || (c < 8255
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8141
                    ? (c >= 8134 && c <= 8139)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))
                : (c <= 8180 || (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))))
              : (c <= 8256 || (c < 8304
                ? (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))
                : (c <= 8305 || (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))))))))))
        : (c <= 8384 || (c < 11802
          ? (c < 11517
            ? (c < 9312
              ? (c < 8592
                ? (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c >= 8448 && c <= 8587)))
                : (c <= 8967 || (c < 9003
                  ? (c >= 8972 && c <= 9000)
                  : (c <= 9254 || (c >= 9280 && c <= 9290)))))
              : (c <= 10087 || (c < 10716
                ? (c < 10224
                  ? (c < 10183
                    ? (c >= 10102 && c <= 10180)
                    : c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))
                : (c <= 10747 || (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))))))
            : (c <= 11517 || (c < 11696
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))
              : (c <= 11702 || (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))))))))
          : (c <= 11802 || (c < 12441
            ? (c < 12272
              ? (c < 11869
                ? (c < 11840
                  ? (c < 11834
                    ? c == 11823
                    : c <= 11835)
                  : (c <= 11840 || (c >= 11856 && c <= 11857)))
                : (c <= 11869 || (c < 11931
                  ? (c >= 11904 && c <= 11929)
                  : (c <= 12019 || (c >= 12032 && c <= 12245)))))
              : (c <= 12283 || (c < 12320
                ? (c < 12306
                  ? (c >= 12292 && c <= 12295)
                  : (c <= 12307 || c == 12316))
                : (c <= 12333 || (c < 12350
                  ? (c >= 12336 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12538 || (c < 42240
              ? (c < 12784
                ? (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12688 && c <= 12771)))
                : (c <= 12830 || (c < 42128
                  ? (c >= 12832 && c <= 42124)
                  : (c <= 42182 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42612
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42607)))
                : (c <= 42621 || (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))))))))))
      : (c <= 42963 || (c < 65284
        ? (c < 43785
          ? (c < 43452
            ? (c < 43232
              ? (c < 43056
                ? (c < 43045
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43042)
                  : (c <= 43046 || (c >= 43048 && c <= 43052)))
                : (c <= 43065 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43187 || (c >= 43204 && c <= 43205)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43263)
                  : (c <= 43309 || (c >= 43312 && c <= 43345)))
                : (c <= 43388 || (c < 43396
                  ? (c >= 43392 && c <= 43394)
                  : (c <= 43443 || (c >= 43446 && c <= 43449)))))))
            : (c <= 43453 || (c < 43644
              ? (c < 43569
                ? (c < 43514
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43566)))
                : (c <= 43570 || (c < 43584
                  ? (c >= 43573 && c <= 43574)
                  : (c <= 43596 || (c >= 43616 && c <= 43642)))))
              : (c <= 43644 || (c < 43756
                ? (c < 43739
                  ? (c >= 43646 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43757 || (c < 43766
                  ? (c >= 43762 && c <= 43764)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))))))))
          : (c <= 43790 || (c < 64318
            ? (c < 44032
              ? (c < 43888
                ? (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43883)))
                : (c <= 44002 || (c < 44008
                  ? c == 44005
                  : (c <= 44008 || c == 44013))))
              : (c <= 55203 || (c < 64256
                ? (c < 57344
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65056
              ? (c < 64832
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64450 || (c >= 64467 && c <= 64829)))
                : (c <= 64911 || (c < 64975
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 64975 || (c >= 65008 && c <= 65039)))))
              : (c <= 65071 || (c < 65122
                ? (c < 65101
                  ? (c >= 65073 && c <= 65076)
                  : (c <= 65103 || c == 65112))
                : (c <= 65126 || (c < 65136
                  ? c == 65129
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))))))))))
        : (c <= 65284 || (c < 66464
          ? (c < 65576
            ? (c < 65474
              ? (c < 65342
                ? (c < 65308
                  ? (c < 65293
                    ? c == 65291
                    : c <= 65293)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : (c <= 65374 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65512
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65504 && c <= 65510)))
                : (c <= 65518 || (c < 65536
                  ? (c >= 65532 && c <= 65533)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66000
              ? (c < 65799
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65843 || (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))))
              : (c <= 66045 || (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))))))))
          : (c <= 66499 || (c < 67392
            ? (c < 66940
              ? (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))
              : (c <= 66954 || (c < 66979
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))))
            : (c <= 67413 || (c < 67644
              ? (c < 67584
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67672
                  ? (c >= 67647 && c <= 67669)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67835
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))))))))))))))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < 6742
    ? (c < 3090
      ? (c < 2497
        ? (c < 1476
          ? (c < 460
            ? (c < 162
              ? (c < '<'
                ? (c < '/'
                  ? (c < '*'
                    ? (c >= '$' && c <= '&')
                    : c <= '*')
                  : (c <= '/' || c == ':'))
                : (c <= 'Z' || (c < '|'
                  ? (c >= '^' && c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 166 || (c < 188
                ? (c < 174
                  ? (c < 172
                    ? (c >= 168 && c <= 170)
                    : c <= 172)
                  : (c <= 181 || (c >= 184 && c <= 186)))
                : (c <= 190 || (c < 454
                  ? (c >= 192 && c <= 452)
                  : (c <= 455 || (c >= 457 && c <= 458)))))))
            : (c <= 497 || (c < 1162
              ? (c < 904
                ? (c < 895
                  ? (c < 890
                    ? (c >= 499 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1159)))))
              : (c <= 1327 || (c < 1418
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1418 || (c < 1425
                  ? (c >= 1421 && c <= 1423)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2144
            ? (c < 1749
              ? (c < 1547
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))
                : (c <= 1547 || (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1631 || (c >= 1646 && c <= 1747)))))
              : (c <= 1756 || (c < 1994
                ? (c < 1808
                  ? (c < 1786
                    ? (c >= 1758 && c <= 1775)
                    : c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))
                : (c <= 2038 || (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))))
            : (c <= 2154 || (c < 2417
              ? (c < 2364
                ? (c < 2275
                  ? (c < 2200
                    ? (c >= 2160 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2306 || (c >= 2308 && c <= 2362)))
                : (c <= 2365 || (c < 2381
                  ? (c >= 2369 && c <= 2376)
                  : (c <= 2381 || (c >= 2384 && c <= 2403)))))
              : (c <= 2433 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2493)))))))))))
        : (c <= 2500 || (c < 2801
          ? (c < 2641
            ? (c < 2579
              ? (c < 2558
                ? (c < 2527
                  ? (c < 2524
                    ? (c >= 2509 && c <= 2510)
                    : c <= 2525)
                  : (c <= 2531 || (c >= 2544 && c <= 2556)))
                : (c <= 2558 || (c < 2565
                  ? (c >= 2561 && c <= 2562)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2620
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2631
                  ? (c >= 2625 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))))
            : (c <= 2641 || (c < 2738
              ? (c < 2693
                ? (c < 2672
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2690)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))
              : (c <= 2739 || (c < 2759
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || (c >= 2753 && c <= 2757)))
                : (c <= 2760 || (c < 2768
                  ? c == 2765
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))))))))
          : (c <= 2801 || (c < 2946
            ? (c < 2876
              ? (c < 2835
                ? (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2817)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2901
                ? (c < 2881
                  ? c == 2879
                  : (c <= 2884 || c == 2893))
                : (c <= 2902 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2928 && c <= 2935)))))))
            : (c <= 2947 || (c < 2990
              ? (c < 2972
                ? (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3056
                ? (c < 3021
                  ? c == 3008
                  : (c <= 3021 || c == 3024))
                : (c <= 3066 || (c < 3076
                  ? c == 3072
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))))))))
      : (c <= 3112 || (c < 4157
        ? (c < 3517
          ? (c < 3276
            ? (c < 3192
              ? (c < 3157
                ? (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3136)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3201 || (c < 3253
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3263
                  ? (c >= 3260 && c <= 3261)
                  : (c <= 3263 || c == 3270))))))
            : (c <= 3277 || (c < 3405
              ? (c < 3332
                ? (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3314 || (c >= 3328 && c <= 3329)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3389 || (c >= 3393 && c <= 3396)))))
              : (c <= 3407 || (c < 3457
                ? (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3427 || (c >= 3440 && c <= 3455)))
                : (c <= 3457 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))))
          : (c <= 3517 || (c < 3840
            ? (c < 3718
              ? (c < 3585
                ? (c < 3538
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || c == 3542))
                : (c <= 3642 || (c < 3713
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3776
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3804 && c <= 3807)))))))
            : (c <= 3843 || (c < 3993
              ? (c < 3913
                ? (c < 3882
                  ? (c < 3861
                    ? c == 3859
                    : c <= 3871)
                  : (c <= 3897 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 3968
                  ? (c >= 3953 && c <= 3966)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4096
                ? (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))
                : (c <= 4138 || (c < 4146
                  ? (c >= 4141 && c <= 4144)
                  : (c <= 4151 || (c >= 4153 && c <= 4154)))))))))))
        : (c <= 4159 || (c < 5870
          ? (c < 4752
            ? (c < 4301
              ? (c < 4229
                ? (c < 4197
                  ? (c < 4184
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4226)))
                : (c <= 4230 || (c < 4253
                  ? (c >= 4237 && c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))))
            : (c <= 4784 || (c < 4957
              ? (c < 4808
                ? (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))
              : (c <= 4959 || (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))))))
          : (c <= 5880 || (c < 6176
            ? (c < 6086
              ? (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5908)
                    : c <= 5939)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : (c <= 6069 || (c >= 6071 && c <= 6077)))))
              : (c <= 6086 || (c < 6128
                ? (c < 6103
                  ? (c >= 6089 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))
                : (c <= 6137 || (c < 6155
                  ? c == 6150
                  : (c <= 6157 || c == 6159))))))
            : (c <= 6264 || (c < 6480
              ? (c < 6439
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6434)))
                : (c <= 6440 || (c < 6457
                  ? c == 6450
                  : (c <= 6459 || c == 6464))))
              : (c <= 6509 || (c < 6618
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6683
                  ? (c >= 6622 && c <= 6680)
                  : (c <= 6683 || (c >= 6688 && c <= 6740)))))))))))))))
    : (c <= 6742 || (c < 42965
      ? (c < 8400
        ? (c < 7380
          ? (c < 7043
            ? (c < 6847
              ? (c < 6771
                ? (c < 6754
                  ? (c < 6752
                    ? (c >= 6744 && c <= 6750)
                    : c <= 6752)
                  : (c <= 6754 || (c >= 6757 && c <= 6764)))
                : (c <= 6780 || (c < 6823
                  ? c == 6783
                  : (c <= 6823 || (c >= 6832 && c <= 6845)))))
              : (c <= 6862 || (c < 6978
                ? (c < 6966
                  ? (c < 6917
                    ? (c >= 6912 && c <= 6915)
                    : c <= 6964)
                  : (c <= 6970 || c == 6972))
                : (c <= 6978 || (c < 7009
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7036 || (c >= 7040 && c <= 7041)))))))
            : (c <= 7072 || (c < 7212
              ? (c < 7144
                ? (c < 7083
                  ? (c < 7080
                    ? (c >= 7074 && c <= 7077)
                    : c <= 7081)
                  : (c <= 7087 || (c >= 7098 && c <= 7142)))
                : (c <= 7145 || (c < 7151
                  ? c == 7149
                  : (c <= 7153 || (c >= 7168 && c <= 7203)))))
              : (c <= 7219 || (c < 7296
                ? (c < 7245
                  ? (c >= 7222 && c <= 7223)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))))))))
          : (c <= 7392 || (c < 8134
            ? (c < 8027
              ? (c < 7968
                ? (c < 7424
                  ? (c < 7416
                    ? (c >= 7394 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))))
              : (c <= 8027 || (c < 8096
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))
                : (c <= 8103 || (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))))))
            : (c <= 8139 || (c < 8260
              ? (c < 8182
                ? (c < 8157
                  ? (c < 8150
                    ? (c >= 8141 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))
                : (c <= 8187 || (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))))
              : (c <= 8260 || (c < 8308
                ? (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))
                : (c <= 8316 || (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))))))))))
        : (c <= 8412 || (c < 11823
          ? (c < 11520
            ? (c < 10102
              ? (c < 8972
                ? (c < 8448
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))
                : (c <= 9000 || (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))))
              : (c <= 10180 || (c < 10750
                ? (c < 10649
                  ? (c < 10224
                    ? (c >= 10183 && c <= 10213)
                    : c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))
                : (c <= 11123 || (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))))))
            : (c <= 11557 || (c < 11704
              ? (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 11799
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11799 || c == 11802))))))))
          : (c <= 11823 || (c < 12540
            ? (c < 12292
              ? (c < 11904
                ? (c < 11856
                  ? (c < 11840
                    ? (c >= 11834 && c <= 11835)
                    : c <= 11840)
                  : (c <= 11857 || c == 11869))
                : (c <= 11929 || (c < 12032
                  ? (c >= 11931 && c <= 12019)
                  : (c <= 12245 || (c >= 12272 && c <= 12283)))))
              : (c <= 12295 || (c < 12336
                ? (c < 12316
                  ? (c >= 12306 && c <= 12307)
                  : (c <= 12316 || (c >= 12320 && c <= 12333)))
                : (c <= 12348 || (c < 12353
                  ? (c >= 12350 && c <= 12351)
                  : (c <= 12438 || (c >= 12441 && c <= 12538)))))))
            : (c <= 12543 || (c < 42512
              ? (c < 12832
                ? (c < 12688
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12771 || (c >= 12784 && c <= 12830)))
                : (c <= 42124 || (c < 42192
                  ? (c >= 42128 && c <= 42182)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42527 || (c < 42623
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : (c <= 42607 || (c >= 42612 && c <= 42621)))
                : (c <= 42737 || (c < 42960
                  ? (c >= 42752 && c <= 42954)
                  : (c <= 42961 || c == 42963))))))))))))
      : (c <= 42969 || (c < 65284
        ? (c < 43793
          ? (c < 43471
            ? (c < 43259
              ? (c < 43072
                ? (c < 43048
                  ? (c < 43045
                    ? (c >= 42994 && c <= 43042)
                    : c <= 43046)
                  : (c <= 43052 || (c >= 43056 && c <= 43065)))
                : (c <= 43123 || (c < 43204
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43205 || (c >= 43232 && c <= 43255)))))
              : (c <= 43259 || (c < 43392
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43263)
                    : c <= 43309)
                  : (c <= 43345 || (c >= 43360 && c <= 43388)))
                : (c <= 43394 || (c < 43446
                  ? (c >= 43396 && c <= 43443)
                  : (c <= 43449 || (c >= 43452 && c <= 43453)))))))
            : (c <= 43471 || (c < 43646
              ? (c < 43573
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43488 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43566 || (c >= 43569 && c <= 43570)))
                : (c <= 43574 || (c < 43616
                  ? (c >= 43584 && c <= 43596)
                  : (c <= 43642 || c == 43644))))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43756 && c <= 43757)))
                : (c <= 43764 || (c < 43777
                  ? c == 43766
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))))))
          : (c <= 43798 || (c < 64318
            ? (c < 55216
              ? (c < 44005
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43883 || (c >= 43888 && c <= 44002)))
                : (c <= 44005 || (c < 44013
                  ? c == 44008
                  : (c <= 44013 || (c >= 44032 && c <= 55203)))))
              : (c <= 55238 || (c < 64256
                ? (c < 57344
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65056
              ? (c < 64832
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64450 || (c >= 64467 && c <= 64829)))
                : (c <= 64911 || (c < 64975
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 64975 || (c >= 65008 && c <= 65039)))))
              : (c <= 65071 || (c < 65122
                ? (c < 65101
                  ? (c >= 65073 && c <= 65076)
                  : (c <= 65103 || c == 65112))
                : (c <= 65126 || (c < 65136
                  ? c == 65129
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))))))))))
        : (c <= 65284 || (c < 66464
          ? (c < 65576
            ? (c < 65474
              ? (c < 65342
                ? (c < 65308
                  ? (c < 65293
                    ? c == 65291
                    : c <= 65293)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : (c <= 65374 || (c >= 65382 && c <= 65470)))))
              : (c <= 65479 || (c < 65512
                ? (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65504 && c <= 65510)))
                : (c <= 65518 || (c < 65536
                  ? (c >= 65532 && c <= 65533)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66000
              ? (c < 65799
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65843 || (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))))
              : (c <= 66045 || (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))))))))
          : (c <= 66499 || (c < 67392
            ? (c < 66940
              ? (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))
              : (c <= 66954 || (c < 66979
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))))
            : (c <= 67413 || (c < 67644
              ? (c < 67584
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67672
                  ? (c >= 67647 && c <= 67669)
                  : (c <= 67742 || (c >= 67751 && c <= 67759)))
                : (c <= 67826 || (c < 67835
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67867 || (c >= 67872 && c <= 67883)))))))))))))))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < 6448
    ? (c < 3014
      ? (c < 2503
        ? (c < 1473
          ? (c < 457
            ? (c < 162
              ? (c < '<'
                ? (c < '*'
                  ? (c >= '$' && c <= '&')
                  : (c <= '+' || (c >= '-' && c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c >= '^' && c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 166 || (c < 184
                ? (c < 172
                  ? (c >= 168 && c <= 170)
                  : (c <= 172 || (c >= 174 && c <= 181)))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 452 || (c >= 454 && c <= 455)))))))
            : (c <= 458 || (c < 910
              ? (c < 895
                ? (c < 499
                  ? (c >= 460 && c <= 497)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? (c >= 900 && c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1376
                ? (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1421
                  ? c == 1418
                  : (c <= 1423 || (c >= 1425 && c <= 1471)))))))))
          : (c <= 1474 || (c < 2045
            ? (c < 1568
              ? (c < 1519
                ? (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1547
                  ? (c >= 1542 && c <= 1544)
                  : (c <= 1547 || (c >= 1550 && c <= 1562)))))
              : (c <= 1641 || (c < 1808
                ? (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : (c <= 1756 || (c >= 1758 && c <= 1791)))
                : (c <= 1866 || (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2038 || c == 2042))))))
            : (c <= 2093 || (c < 2437
              ? (c < 2200
                ? (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2190)))
                : (c <= 2273 || (c < 2406
                  ? (c >= 2275 && c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2500)))))))))
        : (c <= 2504 || (c < 2763
          ? (c < 2622
            ? (c < 2565
              ? (c < 2527
                ? (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))
                : (c <= 2531 || (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))))
              : (c <= 2570 || (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))))))
            : (c <= 2626 || (c < 2693
              ? (c < 2649
                ? (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))
              : (c <= 2701 || (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))))))
          : (c <= 2765 || (c < 2901
            ? (c < 2831
              ? (c < 2801
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2801 || (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))
            : (c <= 2903 || (c < 2969
              ? (c < 2946
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3010)))))))))))
      : (c <= 3016 || (c < 3804
        ? (c < 3342
          ? (c < 3174
            ? (c < 3114
              ? (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3066 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))))
            : (c <= 3183 || (c < 3270
              ? (c < 3218
                ? (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))))
              : (c <= 3272 || (c < 3296
                ? (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))
                : (c <= 3299 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))))))))
          : (c <= 3344 || (c < 3558
            ? (c < 3482
              ? (c < 3412
                ? (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))
                : (c <= 3427 || (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3530
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3530 || (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))))))
            : (c <= 3567 || (c < 3724
              ? (c < 3664
                ? (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))
              : (c <= 3747 || (c < 3782
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : c <= 3801)))))))))
        : (c <= 3807 || (c < 4882
          ? (c < 4304
            ? (c < 3993
              ? (c < 3902
                ? (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4096
                ? (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))
                : (c <= 4169 || (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))))))
            : (c <= 4346 || (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5743
              ? (c < 4992
                ? (c < 4957
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 4959 || (c >= 4969 && c <= 4988)))
                : (c <= 5017 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5120 && c <= 5741)))))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5952
                  ? (c >= 5919 && c <= 5940)
                  : (c <= 5971 || (c >= 5984 && c <= 5996)))))))
            : (c <= 6000 || (c < 6155
              ? (c < 6107
                ? (c < 6016
                  ? (c >= 6002 && c <= 6003)
                  : (c <= 6099 || c == 6103))
                : (c <= 6109 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || c == 6150))))
              : (c <= 6157 || (c < 6320
                ? (c < 6176
                  ? (c >= 6159 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))
                : (c <= 6389 || (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6443)))))))))))))
    : (c <= 6459 || (c < 43056
      ? (c < 9280
        ? (c < 8027
          ? (c < 7009
            ? (c < 6688
              ? (c < 6528
                ? (c < 6470
                  ? c == 6464
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6622 && c <= 6683)))))
              : (c <= 6750 || (c < 6823
                ? (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))
            : (c <= 7036 || (c < 7376
              ? (c < 7245
                ? (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))))
              : (c <= 7378 || (c < 7968
                ? (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))))))))
          : (c <= 8027 || (c < 8208
            ? (c < 8125
              ? (c < 8080
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))
                : (c <= 8087 || (c < 8112
                  ? (c >= 8096 && c <= 8103)
                  : (c <= 8116 || (c >= 8118 && c <= 8123)))))
              : (c <= 8132 || (c < 8157
                ? (c < 8141
                  ? (c >= 8134 && c <= 8139)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8175 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8187 || (c >= 8189 && c <= 8190)))))))
            : (c <= 8213 || (c < 8336
              ? (c < 8276
                ? (c < 8260
                  ? (c >= 8255 && c <= 8256)
                  : (c <= 8260 || c == 8274))
                : (c <= 8276 || (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8316 || (c >= 8319 && c <= 8332)))))
              : (c <= 8348 || (c < 8592
                ? (c < 8400
                  ? (c >= 8352 && c <= 8384)
                  : (c <= 8432 || (c >= 8448 && c <= 8587)))
                : (c <= 8967 || (c < 9003
                  ? (c >= 8972 && c <= 9000)
                  : c <= 9254)))))))))
        : (c <= 9290 || (c < 11856
          ? (c < 11647
            ? (c < 11126
              ? (c < 10224
                ? (c < 10102
                  ? (c >= 9312 && c <= 10087)
                  : (c <= 10180 || (c >= 10183 && c <= 10213)))
                : (c <= 10626 || (c < 10716
                  ? (c >= 10649 && c <= 10711)
                  : (c <= 10747 || (c >= 10750 && c <= 11123)))))
              : (c <= 11157 || (c < 11559
                ? (c < 11517
                  ? (c >= 11159 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))))
            : (c <= 11670 || (c < 11736
              ? (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))
              : (c <= 11742 || (c < 11823
                ? (c < 11799
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11799 || c == 11802))
                : (c <= 11823 || (c < 11840
                  ? (c >= 11834 && c <= 11835)
                  : c <= 11840)))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
  return (c < 6320
    ? (c < 2974
      ? (c < 2451
        ? (c < 1329
          ? (c < 172
            ? (c < '^'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= '?' || (c >= 'A' && c <= 'Z')))))
              : (c <= 'c' || (c < 't'
                ? (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : (c <= 'k' || (c >= 'm' && c <= 'r')))
                : (c <= 'z' || (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))))))
            : (c <= 172 || (c < 499
              ? (c < 192
                ? (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 452 || (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1749
            ? (c < 1479
              ? (c < 1421
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))
                : (c <= 1423 || (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))))
              : (c <= 1479 || (c < 1547
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))
                : (c <= 1547 || (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))))))
            : (c <= 1756 || (c < 2144
              ? (c < 1984
                ? (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))
                : (c <= 2038 || (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2406
                ? (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))))))
        : (c <= 2472 || (c < 2730
          ? (c < 2602
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2561
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2556 || c == 2558))
                : (c <= 2563 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))))
            : (c <= 2608 || (c < 2641
              ? (c < 2620
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))
              : (c <= 2641 || (c < 2689
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))
                : (c <= 2691 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))
          : (c <= 2736 || (c < 2866
            ? (c < 2790
              ? (c < 2759
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))
                : (c <= 2761 || (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))))
              : (c <= 2799 || (c < 2821
                ? (c < 2809
                  ? c == 2801
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))))
            : (c <= 2867 || (c < 2918
              ? (c < 2891
                ? (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))
                : (c <= 2893 || (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))
              : (c <= 2935 || (c < 2962
                ? (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 3776
        ? (c < 3293
          ? (c < 3146
            ? (c < 3031
              ? (c < 3006
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))))
              : (c <= 3031 || (c < 3090
                ? (c < 3072
                  ? (c >= 3046 && c <= 3066)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))))))
            : (c <= 3149 || (c < 3214
              ? (c < 3168
                ? (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))
                : (c <= 3171 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))))
              : (c <= 3216 || (c < 3260
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3268 || (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))))))))
          : (c <= 3294 || (c < 3520
            ? (c < 3402
              ? (c < 3328
                ? (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))))
              : (c <= 3407 || (c < 3461
                ? (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3647
              ? (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))))
              : (c <= 3662 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_6(int32_t c) {
  return (c < 6320
    ? (c < 2979
      ? (c < 2474
        ? (c < 1369
          ? (c < 174
            ? (c < '^'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= '?' || (c >= 'A' && c <= 'Z')))))
              : (c <= 'c' || (c < '~'
                ? (c < 'm'
                  ? (c >= 'g' && c <= 'k')
                  : (c <= 'r' || (c >= 't' && c <= 'z')))
                : (c <= '~' || (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))))))
            : (c <= 181 || (c < 890
              ? (c < 454
                ? (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))
                : (c <= 455 || (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1758
            ? (c < 1488
              ? (c < 1425
                ? (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1550
                ? (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1791 || (c < 2160
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))
                : (c <= 2042 || (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2610
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2565
                ? (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))))
            : (c <= 2611 || (c < 2649
              ? (c < 2622
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2801
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2801 || (c < 2831
                ? (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2946
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3776
        ? (c < 3296
          ? (c < 3157
            ? (c < 3046
              ? (c < 3014
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))))
              : (c <= 3066 || (c < 3114
                ? (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))))))
            : (c <= 3158 || (c < 3218
              ? (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))
                : (c <= 3183 || (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))
              : (c <= 3240 || (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3299 || (c < 3530
            ? (c < 3412
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3664
              ? (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3773)))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_7(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1376
          ? (c < 184
            ? (c < 'g'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'c')))))
              : (c <= 'k' || (c < 162
                ? (c < 't'
                  ? (c >= 'm' && c <= 'r')
                  : (c <= 'z' || c == '~'))
                : (c <= 166 || (c < 172
                  ? (c >= 168 && c <= 170)
                  : (c <= 172 || (c >= 174 && c <= 181)))))))
            : (c <= 186 || (c < 895
              ? (c < 457
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 452 || (c >= 454 && c <= 455)))
                : (c <= 458 || (c < 499
                  ? (c >= 460 && c <= 497)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? (c >= 900 && c <= 902)
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : (c <= 1366 || c == 1369))))))))
          : (c <= 1416 || (c < 1808
            ? (c < 1519
              ? (c < 1473
                ? (c < 1421
                  ? c == 1418
                  : (c <= 1423 || (c >= 1425 && c <= 1471)))
                : (c <= 1474 || (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))
              : (c <= 1522 || (c < 1568
                ? (c < 1547
                  ? (c >= 1542 && c <= 1544)
                  : (c <= 1547 || (c >= 1550 && c <= 1562)))
                : (c <= 1641 || (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : (c <= 1756 || (c >= 1758 && c <= 1791)))))))
            : (c <= 1866 || (c < 2200
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2038 || c == 2042))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2190)))))
              : (c <= 2273 || (c < 2437
                ? (c < 2406
                  ? (c >= 2275 && c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_8(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1376
          ? (c < 184
            ? (c < '^'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= '?' || (c >= 'A' && c <= 'Z')))))
              : (c <= 'h' || (c < 162
                ? (c < '|'
                  ? (c >= 'j' && c <= 'z')
                  : (c <= '|' || c == '~'))
                : (c <= 166 || (c < 172
                  ? (c >= 168 && c <= 170)
                  : (c <= 172 || (c >= 174 && c <= 181)))))))
            : (c <= 186 || (c < 895
              ? (c < 457
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 452 || (c >= 454 && c <= 455)))
                : (c <= 458 || (c < 499
                  ? (c >= 460 && c <= 497)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? (c >= 900 && c <= 902)
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : (c <= 1366 || c == 1369))))))))
          : (c <= 1416 || (c < 1808
            ? (c < 1519
              ? (c < 1473
                ? (c < 1421
                  ? c == 1418
                  : (c <= 1423 || (c >= 1425 && c <= 1471)))
                : (c <= 1474 || (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))
              : (c <= 1522 || (c < 1568
                ? (c < 1547
                  ? (c >= 1542 && c <= 1544)
                  : (c <= 1547 || (c >= 1550 && c <= 1562)))
                : (c <= 1641 || (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : (c <= 1756 || (c >= 1758 && c <= 1791)))))))
            : (c <= 1866 || (c < 2200
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2038 || c == 2042))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2190)))))
              : (c <= 2273 || (c < 2437
                ? (c < 2406
                  ? (c >= 2275 && c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_9(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1418
          ? (c < 188
            ? (c < '^'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= '?' || (c >= 'A' && c <= 'Z')))))
              : (c <= 'z' || (c < 168
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || (c >= 162 && c <= 166)))
                : (c <= 170 || (c < 174
                  ? c == 172
                  : (c <= 181 || (c >= 184 && c <= 186)))))))
            : (c <= 190 || (c < 900
              ? (c < 460
                ? (c < 454
                  ? (c >= 192 && c <= 452)
                  : (c <= 455 || (c >= 457 && c <= 458)))
                : (c <= 497 || (c < 890
                  ? (c >= 499 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 1418 || (c < 1869
            ? (c < 1542
              ? (c < 1476
                ? (c < 1425
                  ? (c >= 1421 && c <= 1423)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1544 || (c < 1646
                ? (c < 1550
                  ? c == 1547
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1758
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c >= 1984 && c <= 2038)
                  : (c <= 2042 || (c >= 2045 && c <= 2093)))
                : (c <= 2139 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))))
              : (c <= 2403 || (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_10(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_11(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1418
          ? (c < 188
            ? (c < 'j'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= ':' || (c < 'A'
                  ? (c >= '<' && c <= '?')
                  : (c <= 'Z' || (c >= '^' && c <= 'h')))))
              : (c <= 'z' || (c < 168
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || (c >= 162 && c <= 166)))
                : (c <= 170 || (c < 174
                  ? c == 172
                  : (c <= 181 || (c >= 184 && c <= 186)))))))
            : (c <= 190 || (c < 900
              ? (c < 460
                ? (c < 454
                  ? (c >= 192 && c <= 452)
                  : (c <= 455 || (c >= 457 && c <= 458)))
                : (c <= 497 || (c < 890
                  ? (c >= 499 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 1418 || (c < 1869
            ? (c < 1542
              ? (c < 1476
                ? (c < 1425
                  ? (c >= 1421 && c <= 1423)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1544 || (c < 1646
                ? (c < 1550
                  ? c == 1547
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1758
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c >= 1984 && c <= 2038)
                  : (c <= 2042 || (c >= 2045 && c <= 2093)))
                : (c <= 2139 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))))
              : (c <= 2403 || (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_12(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= 'm' || (c >= 'o' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_13(int32_t c) {
  return (c < 6432
    ? (c < 3006
      ? (c < 2492
        ? (c < 1425
          ? (c < 454
            ? (c < '~'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= 'z' || c == '|'))))
              : (c <= '~' || (c < 174
                ? (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))
                : (c <= 181 || (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))))))
            : (c <= 455 || (c < 908
              ? (c < 890
                ? (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))
                : (c <= 893 || (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1369
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))))))))
          : (c <= 1471 || (c < 2042
            ? (c < 1550
              ? (c < 1488
                ? (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))
                : (c <= 1514 || (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))))
              : (c <= 1562 || (c < 1758
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1791 || (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))))))
            : (c <= 2042 || (c < 2417
              ? (c < 2160
                ? (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))
              : (c <= 2435 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))))))))
        : (c <= 2500 || (c < 2759
          ? (c < 2620
            ? (c < 2561
              ? (c < 2524
                ? (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2556 || c == 2558))))
              : (c <= 2563 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))
            : (c <= 2620 || (c < 2689
              ? (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))))
              : (c <= 2691 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))))))))
          : (c <= 2761 || (c < 2891
            ? (c < 2821
              ? (c < 2790
                ? (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2809
                  ? c == 2801
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))))
            : (c <= 2893 || (c < 2962
              ? (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2935 || (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3010 || (c < 3792
        ? (c < 3328
          ? (c < 3168
            ? (c < 3090
              ? (c < 3031
                ? (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))
                : (c <= 3031 || (c < 3072
                  ? (c >= 3046 && c <= 3066)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3146
                ? (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))))))
            : (c <= 3171 || (c < 3260
              ? (c < 3214
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))
              : (c <= 3268 || (c < 3293
                ? (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))))
          : (c <= 3340 || (c < 3544
            ? (c < 3461
              ? (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3407 || (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))))
            : (c <= 3551 || (c < 3718
              ? (c < 3647
                ? (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))
                : (c <= 3662 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3776
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3784
                  ? c == 3782
                  : c <= 3789)))))))))
        : (c <= 3801 || (c < 4824
          ? (c < 4301
            ? (c < 3974
              ? (c < 3861
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3843 || c == 3859))
                : (c <= 3897 || (c < 3913
                  ? (c >= 3902 && c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4053
                ? (c < 4030
                  ? (c >= 3993 && c <= 4028)
                  : (c <= 4044 || (c >= 4046 && c <= 4047)))
                : (c <= 4056 || (c < 4176
                  ? (c >= 4096 && c <= 4169)
                  : (c <= 4293 || c == 4295))))))
            : (c <= 4301 || (c < 4746
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_14(int32_t c) {
  return (c < 6320
    ? (c < 2979
      ? (c < 2474
        ? (c < 1369
          ? (c < 174
            ? (c < 'g'
              ? (c < ':'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= ':' || (c < 'A'
                  ? (c >= '<' && c <= '?')
                  : (c <= 'Z' || (c >= '^' && c <= 'c')))))
              : (c <= 'h' || (c < '~'
                ? (c < 'm'
                  ? (c >= 'j' && c <= 'k')
                  : (c <= 'r' || (c >= 't' && c <= 'z')))
                : (c <= '~' || (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))))))
            : (c <= 181 || (c < 890
              ? (c < 454
                ? (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))
                : (c <= 455 || (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1758
            ? (c < 1488
              ? (c < 1425
                ? (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1550
                ? (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1791 || (c < 2160
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))
                : (c <= 2042 || (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2610
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2565
                ? (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))))
            : (c <= 2611 || (c < 2649
              ? (c < 2622
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2801
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2801 || (c < 2831
                ? (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2946
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3776
        ? (c < 3296
          ? (c < 3157
            ? (c < 3046
              ? (c < 3014
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))))
              : (c <= 3066 || (c < 3114
                ? (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))))))
            : (c <= 3158 || (c < 3218
              ? (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))
                : (c <= 3183 || (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))
              : (c <= 3240 || (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3299 || (c < 3530
            ? (c < 3412
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3664
              ? (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3773)))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_15(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1376
          ? (c < 184
            ? (c < 'g'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'c')))))
              : (c <= 'k' || (c < 162
                ? (c < 't'
                  ? (c >= 'm' && c <= 'r')
                  : (c <= 'z' || c == '~'))
                : (c <= 166 || (c < 172
                  ? (c >= 168 && c <= 170)
                  : (c <= 172 || (c >= 174 && c <= 181)))))))
            : (c <= 186 || (c < 895
              ? (c < 457
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 452 || (c >= 454 && c <= 455)))
                : (c <= 458 || (c < 499
                  ? (c >= 460 && c <= 497)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? (c >= 900 && c <= 902)
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : (c <= 1366 || c == 1369))))))))
          : (c <= 1416 || (c < 1808
            ? (c < 1519
              ? (c < 1473
                ? (c < 1421
                  ? c == 1418
                  : (c <= 1423 || (c >= 1425 && c <= 1471)))
                : (c <= 1474 || (c < 1479
                  ? (c >= 1476 && c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))
              : (c <= 1522 || (c < 1568
                ? (c < 1547
                  ? (c >= 1542 && c <= 1544)
                  : (c <= 1547 || (c >= 1550 && c <= 1562)))
                : (c <= 1641 || (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : (c <= 1756 || (c >= 1758 && c <= 1791)))))))
            : (c <= 1866 || (c < 2200
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2038 || c == 2042))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2190)))))
              : (c <= 2273 || (c < 2437
                ? (c < 2406
                  ? (c >= 2275 && c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_16(int32_t c) {
  return (c < 6432
    ? (c < 3006
      ? (c < 2492
        ? (c < 1425
          ? (c < 454
            ? (c < '~'
              ? (c < '/'
                ? (c < '*'
                  ? (c >= '$' && c <= '&')
                  : (c <= '+' || c == '-'))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= 'z' || c == '|'))))
              : (c <= '~' || (c < 174
                ? (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))
                : (c <= 181 || (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))))))
            : (c <= 455 || (c < 908
              ? (c < 890
                ? (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))
                : (c <= 893 || (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1369
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))))))))
          : (c <= 1471 || (c < 2042
            ? (c < 1550
              ? (c < 1488
                ? (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))
                : (c <= 1514 || (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))))
              : (c <= 1562 || (c < 1758
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1791 || (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))))))
            : (c <= 2042 || (c < 2417
              ? (c < 2160
                ? (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))
              : (c <= 2435 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))))))))
        : (c <= 2500 || (c < 2759
          ? (c < 2620
            ? (c < 2561
              ? (c < 2524
                ? (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2556 || c == 2558))))
              : (c <= 2563 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))
            : (c <= 2620 || (c < 2689
              ? (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))))
              : (c <= 2691 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))))))))
          : (c <= 2761 || (c < 2891
            ? (c < 2821
              ? (c < 2790
                ? (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2809
                  ? c == 2801
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))))
            : (c <= 2893 || (c < 2962
              ? (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2935 || (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3010 || (c < 3792
        ? (c < 3328
          ? (c < 3168
            ? (c < 3090
              ? (c < 3031
                ? (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))
                : (c <= 3031 || (c < 3072
                  ? (c >= 3046 && c <= 3066)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3146
                ? (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))))))
            : (c <= 3171 || (c < 3260
              ? (c < 3214
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))
              : (c <= 3268 || (c < 3293
                ? (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))))
          : (c <= 3340 || (c < 3544
            ? (c < 3461
              ? (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3407 || (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))))
            : (c <= 3551 || (c < 3718
              ? (c < 3647
                ? (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))
                : (c <= 3662 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3776
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3784
                  ? c == 3782
                  : c <= 3789)))))))))
        : (c <= 3801 || (c < 4824
          ? (c < 4301
            ? (c < 3974
              ? (c < 3861
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3843 || c == 3859))
                : (c <= 3897 || (c < 3913
                  ? (c >= 3902 && c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4053
                ? (c < 4030
                  ? (c >= 3993 && c <= 4028)
                  : (c <= 4044 || (c >= 4046 && c <= 4047)))
                : (c <= 4056 || (c < 4176
                  ? (c >= 4096 && c <= 4169)
                  : (c <= 4293 || c == 4295))))))
            : (c <= 4301 || (c < 4746
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_17(int32_t c) {
  return (c < 6432
    ? (c < 3006
      ? (c < 2492
        ? (c < 1425
          ? (c < 454
            ? (c < '~'
              ? (c < '<'
                ? (c < '*'
                  ? (c >= '$' && c <= '&')
                  : (c <= '+' || (c >= '-' && c <= ':')))
                : (c <= '=' || (c < '^'
                  ? (c >= '?' && c <= 'Z')
                  : (c <= 'z' || c == '|'))))
              : (c <= '~' || (c < 174
                ? (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))
                : (c <= 181 || (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))))))
            : (c <= 455 || (c < 908
              ? (c < 890
                ? (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))
                : (c <= 893 || (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1369
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))))))))
          : (c <= 1471 || (c < 2042
            ? (c < 1550
              ? (c < 1488
                ? (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))
                : (c <= 1514 || (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))))
              : (c <= 1562 || (c < 1758
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1791 || (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))))))
            : (c <= 2042 || (c < 2417
              ? (c < 2160
                ? (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))
              : (c <= 2435 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))))))))
        : (c <= 2500 || (c < 2759
          ? (c < 2620
            ? (c < 2561
              ? (c < 2524
                ? (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2556 || c == 2558))))
              : (c <= 2563 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))
            : (c <= 2620 || (c < 2689
              ? (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))))
              : (c <= 2691 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))))))))
          : (c <= 2761 || (c < 2891
            ? (c < 2821
              ? (c < 2790
                ? (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2809
                  ? c == 2801
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))))
            : (c <= 2893 || (c < 2962
              ? (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2935 || (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3010 || (c < 3792
        ? (c < 3328
          ? (c < 3168
            ? (c < 3090
              ? (c < 3031
                ? (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))
                : (c <= 3031 || (c < 3072
                  ? (c >= 3046 && c <= 3066)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3146
                ? (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))))))
            : (c <= 3171 || (c < 3260
              ? (c < 3214
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))
              : (c <= 3268 || (c < 3293
                ? (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))))))
          : (c <= 3340 || (c < 3544
            ? (c < 3461
              ? (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3407 || (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))))
            : (c <= 3551 || (c < 3718
              ? (c < 3647
                ? (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))
                : (c <= 3662 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3776
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3784
                  ? c == 3782
                  : c <= 3789)))))))))
        : (c <= 3801 || (c < 4824
          ? (c < 4301
            ? (c < 3974
              ? (c < 3861
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3843 || c == 3859))
                : (c <= 3897 || (c < 3913
                  ? (c >= 3902 && c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4053
                ? (c < 4030
                  ? (c >= 3993 && c <= 4028)
                  : (c <= 4044 || (c >= 4046 && c <= 4047)))
                : (c <= 4056 || (c < 4176
                  ? (c >= 4096 && c <= 4169)
                  : (c <= 4293 || c == 4295))))))
            : (c <= 4301 || (c < 4746
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_18(int32_t c) {
  return (c < 6320
    ? (c < 2979
      ? (c < 2474
        ? (c < 1369
          ? (c < 174
            ? (c < 'g'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'c')))))
              : (c <= 'h' || (c < '~'
                ? (c < 'm'
                  ? (c >= 'j' && c <= 'k')
                  : (c <= 'r' || (c >= 't' && c <= 'z')))
                : (c <= '~' || (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))))))
            : (c <= 181 || (c < 890
              ? (c < 454
                ? (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))
                : (c <= 455 || (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1758
            ? (c < 1488
              ? (c < 1425
                ? (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1550
                ? (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1791 || (c < 2160
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))
                : (c <= 2042 || (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2610
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2565
                ? (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))))
            : (c <= 2611 || (c < 2649
              ? (c < 2622
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2801
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2801 || (c < 2831
                ? (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2946
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3776
        ? (c < 3296
          ? (c < 3157
            ? (c < 3046
              ? (c < 3014
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))))
              : (c <= 3066 || (c < 3114
                ? (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))))))
            : (c <= 3158 || (c < 3218
              ? (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))
                : (c <= 3183 || (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))
              : (c <= 3240 || (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3299 || (c < 3530
            ? (c < 3412
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3664
              ? (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3773)))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_19(int32_t c) {
  return (c < 6320
    ? (c < 2974
      ? (c < 2451
        ? (c < 1329
          ? (c < 172
            ? (c < '?'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < ':'
                  ? c == '/'
                  : (c <= ':' || (c >= '<' && c <= '=')))))
              : (c <= 'Z' || (c < '|'
                ? (c < 'j'
                  ? (c >= '^' && c <= 'h')
                  : (c <= 'm' || (c >= 'o' && c <= 'z')))
                : (c <= '|' || (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))))))
            : (c <= 172 || (c < 499
              ? (c < 192
                ? (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 452 || (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))))
              : (c <= 887 || (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1749
            ? (c < 1479
              ? (c < 1421
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))
                : (c <= 1423 || (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))))
              : (c <= 1479 || (c < 1547
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))
                : (c <= 1547 || (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))))))
            : (c <= 1756 || (c < 2144
              ? (c < 1984
                ? (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))
                : (c <= 2038 || (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2406
                ? (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))))))
        : (c <= 2472 || (c < 2730
          ? (c < 2602
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2561
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2556 || c == 2558))
                : (c <= 2563 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))))
            : (c <= 2608 || (c < 2641
              ? (c < 2620
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))
              : (c <= 2641 || (c < 2689
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2677)))
                : (c <= 2691 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))
          : (c <= 2736 || (c < 2866
            ? (c < 2790
              ? (c < 2759
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || (c >= 2748 && c <= 2757)))
                : (c <= 2761 || (c < 2768
                  ? (c >= 2763 && c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))))
              : (c <= 2799 || (c < 2821
                ? (c < 2809
                  ? c == 2801
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))))
            : (c <= 2867 || (c < 2918
              ? (c < 2891
                ? (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))
                : (c <= 2893 || (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))
              : (c <= 2935 || (c < 2962
                ? (c < 2949
                  ? (c >= 2946 && c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 3776
        ? (c < 3293
          ? (c < 3146
            ? (c < 3031
              ? (c < 3006
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3018
                  ? (c >= 3014 && c <= 3016)
                  : (c <= 3021 || c == 3024))))
              : (c <= 3031 || (c < 3090
                ? (c < 3072
                  ? (c >= 3046 && c <= 3066)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3132
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))))))
            : (c <= 3149 || (c < 3214
              ? (c < 3168
                ? (c < 3160
                  ? (c >= 3157 && c <= 3158)
                  : (c <= 3162 || c == 3165))
                : (c <= 3171 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))))
              : (c <= 3216 || (c < 3260
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3268 || (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))))))))
          : (c <= 3294 || (c < 3520
            ? (c < 3402
              ? (c < 3328
                ? (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))))
              : (c <= 3407 || (c < 3461
                ? (c < 3430
                  ? (c >= 3412 && c <= 3427)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3647
              ? (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3571 || (c >= 3585 && c <= 3642)))))
              : (c <= 3662 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_20(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '/'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_21(int32_t c) {
  return (c < 6320
    ? (c < 2979
      ? (c < 2474
        ? (c < 1369
          ? (c < 174
            ? (c < '^'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < ':'
                  ? c == '/'
                  : (c <= ':' || (c >= '<' && c <= 'Z')))))
              : (c <= 'h' || (c < '~'
                ? (c < 'o'
                  ? (c >= 'j' && c <= 'm')
                  : (c <= 'z' || c == '|'))
                : (c <= '~' || (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))))))
            : (c <= 181 || (c < 890
              ? (c < 454
                ? (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))
                : (c <= 455 || (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1758
            ? (c < 1488
              ? (c < 1425
                ? (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1550
                ? (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1791 || (c < 2160
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))
                : (c <= 2042 || (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2610
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2565
                ? (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))))
            : (c <= 2611 || (c < 2649
              ? (c < 2622
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2801
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2801 || (c < 2831
                ? (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2946
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3776
        ? (c < 3296
          ? (c < 3157
            ? (c < 3046
              ? (c < 3014
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))))
              : (c <= 3066 || (c < 3114
                ? (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))))))
            : (c <= 3158 || (c < 3218
              ? (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))
                : (c <= 3183 || (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))
              : (c <= 3240 || (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3299 || (c < 3530
            ? (c < 3412
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3664
              ? (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3773)))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_22(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '.'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || c == '*'))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_23(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1418
          ? (c < 188
            ? (c < '^'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < ':'
                  ? c == '/'
                  : (c <= ':' || (c >= '<' && c <= 'Z')))))
              : (c <= 'z' || (c < 168
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || (c >= 162 && c <= 166)))
                : (c <= 170 || (c < 174
                  ? c == 172
                  : (c <= 181 || (c >= 184 && c <= 186)))))))
            : (c <= 190 || (c < 900
              ? (c < 460
                ? (c < 454
                  ? (c >= 192 && c <= 452)
                  : (c <= 455 || (c >= 457 && c <= 458)))
                : (c <= 497 || (c < 890
                  ? (c >= 499 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 1418 || (c < 1869
            ? (c < 1542
              ? (c < 1476
                ? (c < 1425
                  ? (c >= 1421 && c <= 1423)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1544 || (c < 1646
                ? (c < 1550
                  ? c == 1547
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1758
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c >= 1984 && c <= 2038)
                  : (c <= 2042 || (c >= 2045 && c <= 2093)))
                : (c <= 2139 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))))
              : (c <= 2403 || (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_24(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2482
        ? (c < 1418
          ? (c < 188
            ? (c < 'j'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '/' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'h')))))
              : (c <= 'z' || (c < 168
                ? (c < '~'
                  ? c == '|'
                  : (c <= '~' || (c >= 162 && c <= 166)))
                : (c <= 170 || (c < 174
                  ? c == 172
                  : (c <= 181 || (c >= 184 && c <= 186)))))))
            : (c <= 190 || (c < 900
              ? (c < 460
                ? (c < 454
                  ? (c >= 192 && c <= 452)
                  : (c <= 455 || (c >= 457 && c <= 458)))
                : (c <= 497 || (c < 890
                  ? (c >= 499 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 1418 || (c < 1869
            ? (c < 1542
              ? (c < 1476
                ? (c < 1425
                  ? (c >= 1421 && c <= 1423)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1544 || (c < 1646
                ? (c < 1550
                  ? c == 1547
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1758
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c >= 1984 && c <= 2038)
                  : (c <= 2042 || (c >= 2045 && c <= 2093)))
                : (c <= 2139 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))))
              : (c <= 2403 || (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2435 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))))))
        : (c <= 2482 || (c < 2741
          ? (c < 2613
            ? (c < 2534
              ? (c < 2507
                ? (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))
                : (c <= 2510 || (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2654
              ? (c < 2631
                ? (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))
                : (c <= 2632 || (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))
          : (c <= 2745 || (c < 2876
            ? (c < 2809
              ? (c < 2768
                ? (c < 2759
                  ? (c >= 2748 && c <= 2757)
                  : (c <= 2761 || (c >= 2763 && c <= 2765)))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2787)
                  : (c <= 2799 || c == 2801))))
              : (c <= 2815 || (c < 2835
                ? (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2908
                ? (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2935 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3782
        ? (c < 3302
          ? (c < 3160
            ? (c < 3072
              ? (c < 3018
                ? (c < 3006
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3031
                  ? c == 3024
                  : (c <= 3031 || (c >= 3046 && c <= 3066)))))
              : (c <= 3084 || (c < 3132
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
            : (c <= 3162 || (c < 3242
              ? (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))
              : (c <= 3251 || (c < 3274
                ? (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))
                : (c <= 3277 || (c < 3293
                  ? (c >= 3285 && c <= 3286)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))))))))
          : (c <= 3311 || (c < 3535
            ? (c < 3430
              ? (c < 3346
                ? (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3396 || (c < 3402
                  ? (c >= 3398 && c <= 3400)
                  : (c <= 3407 || (c >= 3412 && c <= 3427)))))
              : (c <= 3455 || (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3713
              ? (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3647
                  ? (c >= 3585 && c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4808
          ? (c < 4176
            ? (c < 3913
              ? (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3843 || (c < 3861
                  ? c == 3859
                  : (c <= 3897 || (c >= 3902 && c <= 3911)))))
              : (c <= 3948 || (c < 4030
                ? (c < 3974
                  ? (c >= 3953 && c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))
                : (c <= 4044 || (c < 4053
                  ? (c >= 4046 && c <= 4047)
                  : (c <= 4056 || (c >= 4096 && c <= 4169)))))))
            : (c <= 4293 || (c < 4698
              ? (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5112
              ? (c < 4957
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5017 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5120 && c <= 5741)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))))))
            : (c <= 5971 || (c < 6128
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))
                : (c <= 6099 || (c < 6107
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))))
              : (c <= 6137 || (c < 6176
                ? (c < 6155
                  ? c == 6150
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 42994
      ? (c < 8972
        ? (c < 8016
          ? (c < 6912
            ? (c < 6608
              ? (c < 6470
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || c == 6464))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6618 || (c < 6783
                ? (c < 6688
                  ? (c >= 6622 && c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6832 && c <= 6862)))))))
            : (c <= 6988 || (c < 7312
              ? (c < 7168
                ? (c < 7009
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7036 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7424
                ? (c < 7376
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))))))
          : (c <= 8023 || (c < 8182
            ? (c < 8112
              ? (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8080
                  ? (c >= 8064 && c <= 8071)
                  : (c <= 8087 || (c >= 8096 && c <= 8103)))))
              : (c <= 8116 || (c < 8141
                ? (c < 8125
                  ? (c >= 8118 && c <= 8123)
                  : (c <= 8132 || (c >= 8134 && c <= 8139)))
                : (c <= 8147 || (c < 8157
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8175 || (c >= 8178 && c <= 8180)))))))
            : (c <= 8187 || (c < 8308
              ? (c < 8260
                ? (c < 8208
                  ? (c >= 8189 && c <= 8190)
                  : (c <= 8213 || (c >= 8255 && c <= 8256)))
                : (c <= 8260 || (c < 8276
                  ? c == 8274
                  : (c <= 8276 || (c >= 8304 && c <= 8305)))))
              : (c <= 8316 || (c < 8400
                ? (c < 8336
                  ? (c >= 8319 && c <= 8332)
                  : (c <= 8348 || (c >= 8352 && c <= 8384)))
                : (c <= 8432 || (c < 8592
                  ? (c >= 8448 && c <= 8587)
                  : c <= 8967)))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_25(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < '<'
                  ? (c >= '/' && c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_26(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '/' || (c < '<'
                  ? (c >= '1' && c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_27(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= '`' || (c >= 'b' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_28(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= 'e' || (c >= 'g' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_29(int32_t c) {
  return (c < 6432
    ? (c < 2990
      ? (c < 2486
        ? (c < 1421
          ? (c < 192
            ? (c < '|'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '<' && c <= 'Z')
                  : (c <= 'h' || (c >= 'j' && c <= 'z')))))
              : (c <= '|' || (c < 172
                ? (c < 162
                  ? c == '~'
                  : (c <= 166 || (c >= 168 && c <= 170)))
                : (c <= 172 || (c < 184
                  ? (c >= 174 && c <= 181)
                  : (c <= 186 || (c >= 188 && c <= 190)))))))
            : (c <= 452 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c >= 454 && c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1329
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : (c <= 1416 || c == 1418))))))))
          : (c <= 1423 || (c < 1984
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c >= 1425 && c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1749
                ? (c < 1568
                  ? (c >= 1550 && c <= 1562)
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1756 || (c < 1808
                  ? (c >= 1758 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2406
              ? (c < 2144
                ? (c < 2045
                  ? c == 2042
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c >= 2160 && c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))
              : (c <= 2415 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))))))
        : (c <= 2489 || (c < 2748
          ? (c < 2616
            ? (c < 2558
              ? (c < 2519
                ? (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))
                : (c <= 2519 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2556)))))
              : (c <= 2558 || (c < 2579
                ? (c < 2565
                  ? (c >= 2561 && c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))
            : (c <= 2617 || (c < 2662
              ? (c < 2635
                ? (c < 2622
                  ? c == 2620
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2757 || (c < 2887
            ? (c < 2817
              ? (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2801
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2801 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))))))
            : (c <= 2888 || (c < 2958
              ? (c < 2911
                ? (c < 2901
                  ? (c >= 2891 && c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c >= 2918 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3784
        ? (c < 3313
          ? (c < 3165
            ? (c < 3086
              ? (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3066 || (c >= 3072 && c <= 3084)))))
              : (c <= 3088 || (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))
            : (c <= 3165 || (c < 3253
              ? (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3203)))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))
              : (c <= 3257 || (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))))))
          : (c <= 3314 || (c < 3542
            ? (c < 3457
              ? (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3407)
                  : (c <= 3427 || (c >= 3430 && c <= 3455)))))
              : (c <= 3459 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3530
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3530 || (c >= 3535 && c <= 3540)))))))
            : (c <= 3542 || (c < 3716
              ? (c < 3585
                ? (c < 3558
                  ? (c >= 3544 && c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3664
                  ? (c >= 3647 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))))))))
        : (c <= 3789 || (c < 4824
          ? (c < 4295
            ? (c < 3953
              ? (c < 3859
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || (c >= 3840 && c <= 3843)))
                : (c <= 3859 || (c < 3902
                  ? (c >= 3861 && c <= 3897)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4169 || (c >= 4176 && c <= 4293)))))))
            : (c <= 4295 || (c < 4704
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5120
              ? (c < 4969
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5017)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5741 || (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))))))
            : (c <= 5996 || (c < 6150
              ? (c < 6103
                ? (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))))
              : (c <= 6150 || (c < 6272
                ? (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6443 || (c < 43056
      ? (c < 9003
        ? (c < 8025
          ? (c < 6992
            ? (c < 6622
              ? (c < 6512
                ? (c < 6464
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6464 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6618)))))
              : (c <= 6683 || (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))))))
            : (c <= 7001 || (c < 7357
              ? (c < 7232
                ? (c < 7040
                  ? (c >= 7009 && c <= 7036)
                  : (c <= 7155 || (c >= 7168 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7960
                ? (c < 7380
                  ? (c >= 7376 && c <= 7378)
                  : (c <= 7418 || (c >= 7424 && c <= 7957)))
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))))))
          : (c <= 8025 || (c < 8189
            ? (c < 8118
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))
              : (c <= 8123 || (c < 8150
                ? (c < 8134
                  ? (c >= 8125 && c <= 8132)
                  : (c <= 8139 || (c >= 8141 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8157 && c <= 8175)
                  : (c <= 8180 || (c >= 8182 && c <= 8187)))))))
            : (c <= 8190 || (c < 8319
              ? (c < 8274
                ? (c < 8255
                  ? (c >= 8208 && c <= 8213)
                  : (c <= 8256 || c == 8260))
                : (c <= 8274 || (c < 8304
                  ? c == 8276
                  : (c <= 8305 || (c >= 8308 && c <= 8316)))))
              : (c <= 8332 || (c < 8448
                ? (c < 8352
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8384 || (c >= 8400 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : c <= 9000)))))))))
        : (c <= 9254 || (c < 11856
          ? (c < 11631
            ? (c < 10750
              ? (c < 10183
                ? (c < 9312
                  ? (c >= 9280 && c <= 9290)
                  : (c <= 10087 || (c >= 10102 && c <= 10180)))
                : (c <= 10213 || (c < 10649
                  ? (c >= 10224 && c <= 10626)
                  : (c <= 10711 || (c >= 10716 && c <= 10747)))))
              : (c <= 11123 || (c < 11520
                ? (c < 11159
                  ? (c >= 11126 && c <= 11157)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))
            : (c <= 11631 || (c < 11728
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11647 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 11802
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11799))
                : (c <= 11802 || (c < 11834
                  ? c == 11823
                  : (c <= 11835 || c == 11840))))))))
          : (c <= 11857 || (c < 12688
            ? (c < 12316
              ? (c < 12032
                ? (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))
                : (c <= 12245 || (c < 12292
                  ? (c >= 12272 && c <= 12283)
                  : (c <= 12295 || (c >= 12306 && c <= 12307)))))
              : (c <= 12316 || (c < 12441
                ? (c < 12350
                  ? (c >= 12320 && c <= 12348)
                  : (c <= 12351 || (c >= 12353 && c <= 12438)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))))
            : (c <= 12771 || (c < 42612
              ? (c < 42192
                ? (c < 12832
                  ? (c >= 12784 && c <= 12830)
                  : (c <= 42124 || (c >= 42128 && c <= 42182)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42610)))))
              : (c <= 42621 || (c < 42963
                ? (c < 42752
                  ? (c >= 42623 && c <= 42737)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43052)))))))))))
      : (c <= 43065 || (c < 65382
        ? (c < 64112
          ? (c < 43739
            ? (c < 43360
              ? (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43714)))))))
            : (c <= 43741 || (c < 43824
              ? (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43759)
                  : (c <= 43766 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))
              : (c <= 43883 || (c < 44032
                ? (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))
                : (c <= 55203 || (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 57344 && c <= 64109)))))))))
          : (c <= 64217 || (c < 65101
            ? (c < 64326
              ? (c < 64312
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))
              : (c <= 64450 || (c < 64975
                ? (c < 64832
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 64975 || (c < 65056
                  ? (c >= 65008 && c <= 65039)
                  : (c <= 65071 || (c >= 65073 && c <= 65076)))))))
            : (c <= 65103 || (c < 65293
              ? (c < 65136
                ? (c < 65122
                  ? c == 65112
                  : (c <= 65126 || c == 65129))
                : (c <= 65140 || (c < 65284
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65284 || c == 65291))))
              : (c <= 65293 || (c < 65342
                ? (c < 65308
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65310 || (c >= 65313 && c <= 65338)))
                : (c <= 65370 || (c < 65374
                  ? c == 65372
                  : c <= 65374)))))))))
        : (c <= 65470 || (c < 66720
          ? (c < 65847
            ? (c < 65536
              ? (c < 65498
                ? (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65512
                  ? (c >= 65504 && c <= 65510)
                  : (c <= 65518 || (c >= 65532 && c <= 65533)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65934 || (c < 66349
              ? (c < 66176
                ? (c < 65952
                  ? (c >= 65936 && c <= 65948)
                  : (c <= 65952 || (c >= 66000 && c <= 66045)))
                : (c <= 66204 || (c < 66272
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66299 || (c >= 66304 && c <= 66339)))))
              : (c <= 66378 || (c < 66504
                ? (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))
                : (c <= 66511 || (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_symbol_character_set_30(int32_t c) {
  return (c < 6320
    ? (c < 2979
      ? (c < 2474
        ? (c < 1369
          ? (c < 174
            ? (c < 'g'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '&' || (c >= '*' && c <= '+')))
                : (c <= '-' || (c < '<'
                  ? c == ':'
                  : (c <= 'Z' || (c >= '^' && c <= 'c')))))
              : (c <= 'h' || (c < '~'
                ? (c < 'm'
                  ? (c >= 'j' && c <= 'k')
                  : (c <= 'r' || (c >= 't' && c <= 'z')))
                : (c <= '~' || (c < 168
                  ? (c >= 162 && c <= 166)
                  : (c <= 170 || c == 172))))))
            : (c <= 181 || (c < 890
              ? (c < 454
                ? (c < 188
                  ? (c >= 184 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 452)))
                : (c <= 455 || (c < 460
                  ? (c >= 457 && c <= 458)
                  : (c <= 497 || (c >= 499 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 900
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))))))
          : (c <= 1369 || (c < 1758
            ? (c < 1488
              ? (c < 1425
                ? (c < 1418
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1418 || (c >= 1421 && c <= 1423)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1550
                ? (c < 1542
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1544 || c == 1547))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))))
            : (c <= 1791 || (c < 2160
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2038)))
                : (c <= 2042 || (c < 2112
                  ? (c >= 2045 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2738
          ? (c < 2610
            ? (c < 2527
              ? (c < 2503
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || (c >= 2492 && c <= 2500)))
                : (c <= 2504 || (c < 2519
                  ? (c >= 2507 && c <= 2510)
                  : (c <= 2519 || (c >= 2524 && c <= 2525)))))
              : (c <= 2531 || (c < 2565
                ? (c < 2558
                  ? (c >= 2534 && c <= 2556)
                  : (c <= 2558 || (c >= 2561 && c <= 2563)))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))))
            : (c <= 2611 || (c < 2649
              ? (c < 2622
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || c == 2620))
                : (c <= 2626 || (c < 2635
                  ? (c >= 2631 && c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))
          : (c <= 2739 || (c < 2869
            ? (c < 2801
              ? (c < 2763
                ? (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))))
              : (c <= 2801 || (c < 2831
                ? (c < 2817
                  ? (c >= 2809 && c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))))
            : (c <= 2873 || (c < 2946
              ? (c < 2901
                ? (c < 2887
                  ? (c >= 2876 && c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))
                : (c <= 2903 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2915 || (c >= 2918 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3776
        ? (c < 3296
          ? (c < 3157
            ? (c < 3046
              ? (c < 3014
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))
                : (c <= 3016 || (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))))
              : (c <= 3066 || (c < 3114
                ? (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))))))
            : (c <= 3158 || (c < 3218
              ? (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))
                : (c <= 3183 || (c < 3205
                  ? (c >= 3192 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))
              : (c <= 3240 || (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3299 || (c < 3530
            ? (c < 3412
              ? (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3407)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c >= 3430 && c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3664
              ? (c < 3558
                ? (c < 3542
                  ? (c >= 3535 && c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3585
                  ? (c >= 3570 && c <= 3571)
                  : (c <= 3642 || (c >= 3647 && c <= 3662)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3773)))))))))
        : (c <= 3780 || (c < 4802
          ? (c < 4096
            ? (c < 3902
              ? (c < 3804
                ? (c < 3784
                  ? c == 3782
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))
                : (c <= 3807 || (c < 3859
                  ? (c >= 3840 && c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3897)))))
              : (c <= 3911 || (c < 3993
                ? (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))
                : (c <= 4028 || (c < 4046
                  ? (c >= 4030 && c <= 4044)
                  : (c <= 4047 || (c >= 4053 && c <= 4056)))))))
            : (c <= 4169 || (c < 4696
              ? (c < 4304
                ? (c < 4295
                  ? (c >= 4176 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5024
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5017)))))
              : (c <= 5109 || (c < 5761
                ? (c < 5120
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5741 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5909)))))))
            : (c <= 5940 || (c < 6112
              ? (c < 6002
                ? (c < 5984
                  ? (c >= 5952 && c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6003 || (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6107 && c <= 6109)))))
              : (c <= 6121 || (c < 6159
                ? (c < 6150
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6150 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)))))))))))))
    : (c <= 6389 || (c < 42994
      ? (c < 8972
        ? (c < 8008
          ? (c < 6832
            ? (c < 6576
              ? (c < 6464
                ? (c < 6432
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6459)))
                : (c <= 6464 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6752
                ? (c < 6622
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))))
            : (c <= 6862 || (c < 7296
              ? (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7009 && c <= 7036)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))
              : (c <= 7304 || (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8096
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))
              : (c <= 8103 || (c < 8134
                ? (c < 8118
                  ? (c >= 8112 && c <= 8116)
                  : (c <= 8123 || (c >= 8125 && c <= 8132)))
                : (c <= 8139 || (c < 8150
                  ? (c >= 8141 && c <= 8147)
                  : (c <= 8155 || (c >= 8157 && c <= 8175)))))))
            : (c <= 8180 || (c < 8304
              ? (c < 8255
                ? (c < 8189
                  ? (c >= 8182 && c <= 8187)
                  : (c <= 8190 || (c >= 8208 && c <= 8213)))
                : (c <= 8256 || (c < 8274
                  ? c == 8260
                  : (c <= 8274 || c == 8276))))
              : (c <= 8305 || (c < 8352
                ? (c < 8319
                  ? (c >= 8308 && c <= 8316)
                  : (c <= 8332 || (c >= 8336 && c <= 8348)))
                : (c <= 8384 || (c < 8448
                  ? (c >= 8400 && c <= 8432)
                  : (c <= 8587 || (c >= 8592 && c <= 8967)))))))))))
        : (c <= 9000 || (c < 11840
          ? (c < 11568
            ? (c < 10716
              ? (c < 10102
                ? (c < 9280
                  ? (c >= 9003 && c <= 9254)
                  : (c <= 9290 || (c >= 9312 && c <= 10087)))
                : (c <= 10180 || (c < 10224
                  ? (c >= 10183 && c <= 10213)
                  : (c <= 10626 || (c >= 10649 && c <= 10711)))))
              : (c <= 10747 || (c < 11517
                ? (c < 11126
                  ? (c >= 10750 && c <= 11123)
                  : (c <= 11157 || (c >= 11159 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))))
            : (c <= 11623 || (c < 11720
              ? (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))
              : (c <= 11726 || (c < 11799
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11799 || (c < 11823
                  ? c == 11802
                  : (c <= 11823 || (c >= 11834 && c <= 11835)))))))))
          : (c <= 11840 || (c < 12593
            ? (c < 12306
              ? (c < 11931
                ? (c < 11869
                  ? (c >= 11856 && c <= 11857)
                  : (c <= 11869 || (c >= 11904 && c <= 11929)))
                : (c <= 12019 || (c < 12272
                  ? (c >= 12032 && c <= 12245)
                  : (c <= 12283 || (c >= 12292 && c <= 12295)))))
              : (c <= 12307 || (c < 12353
                ? (c < 12320
                  ? c == 12316
                  : (c <= 12348 || (c >= 12350 && c <= 12351)))
                : (c <= 12438 || (c < 12540
                  ? (c >= 12441 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))))))
            : (c <= 12686 || (c < 42560
              ? (c < 42128
                ? (c < 12784
                  ? (c >= 12688 && c <= 12771)
                  : (c <= 12830 || (c >= 12832 && c <= 42124)))
                : (c <= 42182 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))))
              : (c <= 42610 || (c < 42960
                ? (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : (c <= 42737 || (c >= 42752 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))))))))))
      : (c <= 43052 || (c < 65374
        ? (c < 57344
          ? (c < 43616
            ? (c < 43312
              ? (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43065)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))
            : (c <= 43714 || (c < 43816
              ? (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))
              : (c <= 43822 || (c < 44016
                ? (c < 43888
                  ? (c >= 43824 && c <= 43883)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55216
                  ? (c >= 44032 && c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65073
            ? (c < 64323
              ? (c < 64285
                ? (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64450)
                  : (c <= 64829 || (c >= 64832 && c <= 64911)))
                : (c <= 64967 || (c < 65008
                  ? c == 64975
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))))))
            : (c <= 65076 || (c < 65291
              ? (c < 65129
                ? (c < 65112
                  ? (c >= 65101 && c <= 65103)
                  : (c <= 65112 || (c >= 65122 && c <= 65126)))
                : (c <= 65129 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || c == 65284))))
              : (c <= 65291 || (c < 65313
                ? (c < 65296
                  ? c == 65293
                  : (c <= 65305 || (c >= 65308 && c <= 65310)))
                : (c <= 65338 || (c < 65372
                  ? (c >= 65342 && c <= 65370)
                  : c <= 65372)))))))))
        : (c <= 65374 || (c < 66720
          ? (c < 65799
            ? (c < 65532
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65504
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65510 || (c >= 65512 && c <= 65518)))))
              : (c <= 65533 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65843 || (c < 66304
              ? (c < 66000
                ? (c < 65936
                  ? (c >= 65847 && c <= 65934)
                  : (c <= 65948 || c == 65952))
                : (c <= 66045 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66272 && c <= 66299)))))
              : (c <= 66339 || (c < 66464
                ? (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66426 || (c >= 66432 && c <= 66461)))
                : (c <= 66499 || (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))))))))
          : (c <= 66729 || (c < 67456
            ? (c < 66964
              ? (c < 66864
                ? (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))
              : (c <= 66965 || (c < 67003
                ? (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : (c <= 66993 || (c >= 66995 && c <= 67001)))
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67751
                  ? (c >= 67672 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(192);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(190)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(118);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(239);
      if (!sym_escape_sequence_character_set_1(lookahead)) ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(308);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(208);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '|') ADVANCE(201);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(211);
      if (lookahead == ':') ADVANCE(368);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(211);
      if (lookahead == ';') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(211);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == ';') ADVANCE(216);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(177);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(177);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(17);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(155);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(155);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(32);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(441);
      END_STATE();
    case 37:
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 38:
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(338);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(343);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(347);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(351);
      END_STATE();
    case 54:
      if (lookahead == '8') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(418);
      END_STATE();
    case 56:
      if (lookahead == ';') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == ';') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'x') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(443);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 'x') ADVANCE(182);
      END_STATE();
    case 123:
      if (lookahead == '|') ADVANCE(204);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 129:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 130:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 131:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 132:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 133:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 134:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 135:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 138:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(332);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(334);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 140:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 141:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 142:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      END_STATE();
    case 143:
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '|') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 144:
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 149:
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 151:
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '|') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 183:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(183)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(3);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(418);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 184:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(184)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(3);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(418);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(409);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 185:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(235);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 186:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(186)
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == ';') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 187:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(187);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '#') ADVANCE(5);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(368);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 188:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(188);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 189:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(189)
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == ';') ADVANCE(199);
      END_STATE();
    case 190:
      if (eof) ADVANCE(192);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(190)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(118);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(191)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(3);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(418);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead == ';') ADVANCE(199);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '!') ADVANCE(194);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '|') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '!') ADVANCE(211);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(123);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(123);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(435);
      if (lookahead == '(') ADVANCE(440);
      if (lookahead == ',') ADVANCE(437);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(220);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '`') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(119);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '|') ADVANCE(200);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(10);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '!') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(10);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '!') ADVANCE(213);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(368);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '!') ADVANCE(213);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(368);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      if (lookahead == '!') ADVANCE(211);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      if (lookahead == '|') ADVANCE(204);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUNDT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUNDF);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '+') ADVANCE(346);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(176);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(176);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '/') ADVANCE(141);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '/') ADVANCE(141);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(263);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == '|') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(377);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(379);
      if (lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(381);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_8(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_13(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(245);
      if (sym_symbol_character_set_14(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(393);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(382);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(247);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(375);
      if (lookahead == '|') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(252);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(382);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(256);
      if (sym_symbol_character_set_15(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(378);
      if (lookahead == '|') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(262);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(378);
      if (lookahead == '|') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '/') ADVANCE(154);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '/') ADVANCE(154);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '/') ADVANCE(180);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '/') ADVANCE(180);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '/') ADVANCE(180);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '/') ADVANCE(180);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(314);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == ':') ADVANCE(418);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(326);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(319);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(373);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(377);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(322);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(381);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(346);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(251);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(350);
      if (lookahead == '-') ADVANCE(350);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == '|') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == '|') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(294);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(361);
      if (lookahead == '-') ADVANCE(361);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(362);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(360);
      if (lookahead == '-') ADVANCE(360);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == '|') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(38);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '|') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(335);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(336);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(337);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '|') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(300);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(305);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(130);
      if (lookahead == '|') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_16(lookahead)) ADVANCE(368);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_16(lookahead)) ADVANCE(368);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_17(lookahead)) ADVANCE(368);
      if (lookahead == '>') ADVANCE(368);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!') ADVANCE(212);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(368);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(380);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_19(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '>') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_20(lookahead)) ADVANCE(418);
      if (lookahead == '+') ADVANCE(374);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(418);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_23(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_24(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_26(lookahead)) ADVANCE(418);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_26(lookahead)) ADVANCE(418);
      if (lookahead == '0') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_26(lookahead)) ADVANCE(418);
      if (lookahead == '0') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_27(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_27(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_27(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_28(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_28(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_28(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_28(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_29(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_13(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(14);
      if (sym_symbol_character_set_30(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == '/') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(376);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(16);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(376);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(28);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(380);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '|') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_23(lookahead)) ADVANCE(418);
      if (lookahead == '.') ADVANCE(399);
      if (lookahead == '\\') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_13(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '#') ADVANCE(55);
      if (sym_symbol_character_set_13(lookahead)) ADVANCE(418);
      if (lookahead == '\\') ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 183},
  [3] = {.lex_state = 183},
  [4] = {.lex_state = 183},
  [5] = {.lex_state = 183},
  [6] = {.lex_state = 183},
  [7] = {.lex_state = 184},
  [8] = {.lex_state = 184},
  [9] = {.lex_state = 184},
  [10] = {.lex_state = 184},
  [11] = {.lex_state = 184},
  [12] = {.lex_state = 184},
  [13] = {.lex_state = 184},
  [14] = {.lex_state = 184},
  [15] = {.lex_state = 191},
  [16] = {.lex_state = 184},
  [17] = {.lex_state = 183},
  [18] = {.lex_state = 183},
  [19] = {.lex_state = 183},
  [20] = {.lex_state = 183},
  [21] = {.lex_state = 183},
  [22] = {.lex_state = 191},
  [23] = {.lex_state = 191},
  [24] = {.lex_state = 191},
  [25] = {.lex_state = 191},
  [26] = {.lex_state = 191},
  [27] = {.lex_state = 191},
  [28] = {.lex_state = 191},
  [29] = {.lex_state = 191},
  [30] = {.lex_state = 191},
  [31] = {.lex_state = 191},
  [32] = {.lex_state = 191},
  [33] = {.lex_state = 191},
  [34] = {.lex_state = 191},
  [35] = {.lex_state = 191},
  [36] = {.lex_state = 191},
  [37] = {.lex_state = 191},
  [38] = {.lex_state = 191},
  [39] = {.lex_state = 191},
  [40] = {.lex_state = 191},
  [41] = {.lex_state = 191},
  [42] = {.lex_state = 191},
  [43] = {.lex_state = 191},
  [44] = {.lex_state = 191},
  [45] = {.lex_state = 191},
  [46] = {.lex_state = 191},
  [47] = {.lex_state = 191},
  [48] = {.lex_state = 191},
  [49] = {.lex_state = 191},
  [50] = {.lex_state = 191},
  [51] = {.lex_state = 191},
  [52] = {.lex_state = 191},
  [53] = {.lex_state = 191},
  [54] = {.lex_state = 191},
  [55] = {.lex_state = 191},
  [56] = {.lex_state = 191},
  [57] = {.lex_state = 191},
  [58] = {.lex_state = 191},
  [59] = {.lex_state = 191},
  [60] = {.lex_state = 191},
  [61] = {.lex_state = 191},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 191},
  [64] = {.lex_state = 191},
  [65] = {.lex_state = 191},
  [66] = {.lex_state = 191},
  [67] = {.lex_state = 191},
  [68] = {.lex_state = 191},
  [69] = {.lex_state = 183},
  [70] = {.lex_state = 183},
  [71] = {.lex_state = 191},
  [72] = {.lex_state = 191},
  [73] = {.lex_state = 191},
  [74] = {.lex_state = 191},
  [75] = {.lex_state = 191},
  [76] = {.lex_state = 183},
  [77] = {.lex_state = 191},
  [78] = {.lex_state = 191},
  [79] = {.lex_state = 191},
  [80] = {.lex_state = 191},
  [81] = {.lex_state = 191},
  [82] = {.lex_state = 191},
  [83] = {.lex_state = 183},
  [84] = {.lex_state = 183},
  [85] = {.lex_state = 183},
  [86] = {.lex_state = 191},
  [87] = {.lex_state = 183},
  [88] = {.lex_state = 191},
  [89] = {.lex_state = 183},
  [90] = {.lex_state = 183},
  [91] = {.lex_state = 183},
  [92] = {.lex_state = 183},
  [93] = {.lex_state = 183},
  [94] = {.lex_state = 183},
  [95] = {.lex_state = 183},
  [96] = {.lex_state = 183},
  [97] = {.lex_state = 183},
  [98] = {.lex_state = 191},
  [99] = {.lex_state = 183},
  [100] = {.lex_state = 183},
  [101] = {.lex_state = 183},
  [102] = {.lex_state = 191},
  [103] = {.lex_state = 191},
  [104] = {.lex_state = 191},
  [105] = {.lex_state = 191},
  [106] = {.lex_state = 191},
  [107] = {.lex_state = 191},
  [108] = {.lex_state = 191},
  [109] = {.lex_state = 185},
  [110] = {.lex_state = 185},
  [111] = {.lex_state = 185},
  [112] = {.lex_state = 185},
  [113] = {.lex_state = 185},
  [114] = {.lex_state = 185},
  [115] = {.lex_state = 185},
  [116] = {.lex_state = 185},
  [117] = {.lex_state = 186},
  [118] = {.lex_state = 186},
  [119] = {.lex_state = 186},
  [120] = {.lex_state = 186},
  [121] = {.lex_state = 186},
  [122] = {.lex_state = 186},
  [123] = {.lex_state = 186},
  [124] = {.lex_state = 186},
  [125] = {.lex_state = 187},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 188},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 189},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {(TSStateId)(-1)},
  [148] = {(TSStateId)(-1)},
  [149] = {(TSStateId)(-1)},
  [150] = {(TSStateId)(-1)},
  [151] = {(TSStateId)(-1)},
  [152] = {(TSStateId)(-1)},
  [153] = {(TSStateId)(-1)},
  [154] = {(TSStateId)(-1)},
  [155] = {(TSStateId)(-1)},
  [156] = {(TSStateId)(-1)},
  [157] = {(TSStateId)(-1)},
  [158] = {(TSStateId)(-1)},
  [159] = {(TSStateId)(-1)},
  [160] = {(TSStateId)(-1)},
  [161] = {(TSStateId)(-1)},
  [162] = {(TSStateId)(-1)},
  [163] = {(TSStateId)(-1)},
  [164] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_directive] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [anon_sym_POUNDT] = ACTIONS(1),
    [anon_sym_POUNDF] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(131),
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(1),
    [sym_directive] = STATE(1),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [2] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(35),
    [anon_sym_POUNDf] = ACTIONS(35),
    [anon_sym_POUNDT] = ACTIONS(35),
    [anon_sym_POUNDF] = ACTIONS(35),
    [sym_character] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_number] = ACTIONS(44),
    [sym_symbol] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_COMMA_AT] = ACTIONS(60),
    [anon_sym_POUND_SQUOTE] = ACTIONS(60),
    [anon_sym_POUND_BQUOTE] = ACTIONS(60),
    [anon_sym_POUND_COMMA] = ACTIONS(63),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(60),
    [anon_sym_POUND_LPAREN] = ACTIONS(66),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(69),
  },
  [3] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [4] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [5] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [6] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [7] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(104),
  },
  [8] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(8),
    [sym_directive] = STATE(8),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(106),
  },
  [9] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(9),
    [sym_directive] = STATE(9),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(108),
  },
  [10] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(10),
    [sym_directive] = STATE(10),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(112),
  },
  [11] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(114),
  },
  [12] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(116),
  },
  [13] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(120),
  },
  [14] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(122),
  },
  [15] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(124),
    [anon_sym_POUNDf] = ACTIONS(124),
    [anon_sym_POUNDT] = ACTIONS(124),
    [anon_sym_POUNDF] = ACTIONS(124),
    [sym_character] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_number] = ACTIONS(133),
    [sym_symbol] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_COMMA_AT] = ACTIONS(60),
    [anon_sym_POUND_SQUOTE] = ACTIONS(60),
    [anon_sym_POUND_BQUOTE] = ACTIONS(60),
    [anon_sym_POUND_COMMA] = ACTIONS(63),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(60),
    [anon_sym_POUND_LPAREN] = ACTIONS(145),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(148),
  },
  [16] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(151),
  },
  [17] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [18] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [19] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(19),
    [sym_directive] = STATE(19),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [20] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [21] = {
    [sym__datum] = STATE(76),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [22] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [23] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(27),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [24] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(24),
    [sym_directive] = STATE(24),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [25] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(25),
    [sym_directive] = STATE(25),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [26] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(26),
    [sym_directive] = STATE(26),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(24),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [27] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(27),
    [sym_directive] = STATE(27),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [28] = {
    [sym__datum] = STATE(106),
    [sym_comment] = STATE(28),
    [sym_directive] = STATE(28),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_program_repeat1] = STATE(25),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [29] = {
    [sym__datum] = STATE(133),
    [sym_comment] = STATE(29),
    [sym_directive] = STATE(29),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [30] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(30),
    [sym_directive] = STATE(30),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(51),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [31] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(48),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [32] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(32),
    [sym_directive] = STATE(32),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(54),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [33] = {
    [sym__datum] = STATE(127),
    [sym_comment] = STATE(33),
    [sym_directive] = STATE(33),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [34] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(34),
    [sym_directive] = STATE(34),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(56),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [35] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(35),
    [sym_directive] = STATE(35),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(63),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [36] = {
    [sym__datum] = STATE(126),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [37] = {
    [sym__datum] = STATE(132),
    [sym_comment] = STATE(37),
    [sym_directive] = STATE(37),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [38] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(66),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [39] = {
    [sym__datum] = STATE(144),
    [sym_comment] = STATE(39),
    [sym_directive] = STATE(39),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [40] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(61),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [41] = {
    [sym__datum] = STATE(145),
    [sym_comment] = STATE(41),
    [sym_directive] = STATE(41),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [42] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(42),
    [sym_directive] = STATE(42),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(68),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [43] = {
    [sym__datum] = STATE(146),
    [sym_comment] = STATE(43),
    [sym_directive] = STATE(43),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [44] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(44),
    [sym_directive] = STATE(44),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [sym_test] = STATE(47),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [45] = {
    [sym__datum] = STATE(140),
    [sym_comment] = STATE(45),
    [sym_directive] = STATE(45),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [46] = {
    [sym__datum] = STATE(142),
    [sym_comment] = STATE(46),
    [sym_directive] = STATE(46),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [47] = {
    [sym__datum] = STATE(41),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [48] = {
    [sym__datum] = STATE(29),
    [sym_comment] = STATE(48),
    [sym_directive] = STATE(48),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [49] = {
    [sym__datum] = STATE(160),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym__simple_datum] = STATE(160),
    [sym_boolean] = STATE(160),
    [sym_string] = STATE(160),
    [sym__compound_datum] = STATE(160),
    [sym_list] = STATE(160),
    [sym__abbreviation] = STATE(151),
    [sym__abbreviation_prefix] = STATE(60),
    [sym__special_form] = STATE(160),
    [sym_vector] = STATE(160),
    [sym_byte_vector] = STATE(160),
    [sym_if_expr] = STATE(160),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(185),
    [anon_sym_POUNDf] = ACTIONS(185),
    [anon_sym_POUNDT] = ACTIONS(185),
    [anon_sym_POUNDF] = ACTIONS(185),
    [sym_character] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_number] = ACTIONS(191),
    [sym_symbol] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(199),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(201),
  },
  [50] = {
    [sym__datum] = STATE(78),
    [sym_comment] = STATE(50),
    [sym_directive] = STATE(50),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [51] = {
    [sym__datum] = STATE(45),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [52] = {
    [sym__datum] = STATE(94),
    [sym_comment] = STATE(52),
    [sym_directive] = STATE(52),
    [sym__simple_datum] = STATE(85),
    [sym_boolean] = STATE(84),
    [sym_string] = STATE(84),
    [sym__compound_datum] = STATE(85),
    [sym_list] = STATE(69),
    [sym__abbreviation] = STATE(87),
    [sym__abbreviation_prefix] = STATE(52),
    [sym__special_form] = STATE(69),
    [sym_vector] = STATE(89),
    [sym_byte_vector] = STATE(89),
    [sym_if_expr] = STATE(89),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(72),
    [anon_sym_POUNDf] = ACTIONS(72),
    [anon_sym_POUNDT] = ACTIONS(72),
    [anon_sym_POUNDF] = ACTIONS(72),
    [sym_character] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(90),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(92),
  },
  [53] = {
    [sym__datum] = STATE(136),
    [sym_comment] = STATE(53),
    [sym_directive] = STATE(53),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [54] = {
    [sym__datum] = STATE(33),
    [sym_comment] = STATE(54),
    [sym_directive] = STATE(54),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [55] = {
    [sym__datum] = STATE(137),
    [sym_comment] = STATE(55),
    [sym_directive] = STATE(55),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [56] = {
    [sym__datum] = STATE(46),
    [sym_comment] = STATE(56),
    [sym_directive] = STATE(56),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [57] = {
    [sym__datum] = STATE(138),
    [sym_comment] = STATE(57),
    [sym_directive] = STATE(57),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [58] = {
    [sym__datum] = STATE(143),
    [sym_comment] = STATE(58),
    [sym_directive] = STATE(58),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [59] = {
    [sym__datum] = STATE(128),
    [sym_comment] = STATE(59),
    [sym_directive] = STATE(59),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [60] = {
    [sym__datum] = STATE(153),
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [sym__simple_datum] = STATE(153),
    [sym_boolean] = STATE(153),
    [sym_string] = STATE(153),
    [sym__compound_datum] = STATE(153),
    [sym_list] = STATE(153),
    [sym__abbreviation] = STATE(151),
    [sym__abbreviation_prefix] = STATE(60),
    [sym__special_form] = STATE(153),
    [sym_vector] = STATE(153),
    [sym_byte_vector] = STATE(153),
    [sym_if_expr] = STATE(153),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(185),
    [anon_sym_POUNDf] = ACTIONS(185),
    [anon_sym_POUNDT] = ACTIONS(185),
    [anon_sym_POUNDF] = ACTIONS(185),
    [sym_character] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_number] = ACTIONS(205),
    [sym_symbol] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(199),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(201),
  },
  [61] = {
    [sym__datum] = STATE(43),
    [sym_comment] = STATE(61),
    [sym_directive] = STATE(61),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [62] = {
    [sym__datum] = STATE(141),
    [sym_comment] = STATE(62),
    [sym_directive] = STATE(62),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [63] = {
    [sym__datum] = STATE(37),
    [sym_comment] = STATE(63),
    [sym_directive] = STATE(63),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [64] = {
    [sym__datum] = STATE(139),
    [sym_comment] = STATE(64),
    [sym_directive] = STATE(64),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [65] = {
    [sym__datum] = STATE(134),
    [sym_comment] = STATE(65),
    [sym_directive] = STATE(65),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [66] = {
    [sym__datum] = STATE(39),
    [sym_comment] = STATE(66),
    [sym_directive] = STATE(66),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [67] = {
    [sym__datum] = STATE(130),
    [sym_comment] = STATE(67),
    [sym_directive] = STATE(67),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [68] = {
    [sym__datum] = STATE(36),
    [sym_comment] = STATE(68),
    [sym_directive] = STATE(68),
    [sym__simple_datum] = STATE(79),
    [sym_boolean] = STATE(77),
    [sym_string] = STATE(77),
    [sym__compound_datum] = STATE(79),
    [sym_list] = STATE(80),
    [sym__abbreviation] = STATE(82),
    [sym__abbreviation_prefix] = STATE(50),
    [sym__special_form] = STATE(80),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [sym_if_expr] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(27),
    [anon_sym_POUND_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_COMMA] = ACTIONS(29),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(31),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(33),
  },
  [69] = {
    [sym_comment] = STATE(69),
    [sym_directive] = STATE(69),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(207),
    [anon_sym_POUNDf] = ACTIONS(207),
    [anon_sym_POUNDT] = ACTIONS(207),
    [anon_sym_POUNDF] = ACTIONS(207),
    [sym_character] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_symbol] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_SQUOTE] = ACTIONS(207),
    [anon_sym_POUND_BQUOTE] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(207),
  },
  [70] = {
    [sym_comment] = STATE(70),
    [sym_directive] = STATE(70),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(211),
    [anon_sym_POUNDf] = ACTIONS(211),
    [anon_sym_POUNDT] = ACTIONS(211),
    [anon_sym_POUNDF] = ACTIONS(211),
    [sym_character] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [sym_number] = ACTIONS(213),
    [sym_symbol] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUND_SQUOTE] = ACTIONS(211),
    [anon_sym_POUND_BQUOTE] = ACTIONS(211),
    [anon_sym_POUND_COMMA] = ACTIONS(213),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUND_LPAREN] = ACTIONS(211),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(211),
  },
  [71] = {
    [sym_comment] = STATE(71),
    [sym_directive] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(211),
    [anon_sym_POUNDf] = ACTIONS(211),
    [anon_sym_POUNDT] = ACTIONS(211),
    [anon_sym_POUNDF] = ACTIONS(211),
    [sym_character] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [sym_number] = ACTIONS(213),
    [sym_symbol] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUND_SQUOTE] = ACTIONS(211),
    [anon_sym_POUND_BQUOTE] = ACTIONS(211),
    [anon_sym_POUND_COMMA] = ACTIONS(213),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUND_LPAREN] = ACTIONS(211),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(211),
  },
  [72] = {
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(215),
    [anon_sym_POUNDf] = ACTIONS(215),
    [anon_sym_POUNDT] = ACTIONS(215),
    [anon_sym_POUNDF] = ACTIONS(215),
    [sym_character] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [sym_symbol] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_COMMA_AT] = ACTIONS(215),
    [anon_sym_POUND_SQUOTE] = ACTIONS(215),
    [anon_sym_POUND_BQUOTE] = ACTIONS(215),
    [anon_sym_POUND_COMMA] = ACTIONS(217),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(215),
    [anon_sym_POUND_LPAREN] = ACTIONS(215),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(215),
  },
  [73] = {
    [sym_comment] = STATE(73),
    [sym_directive] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(219),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(219),
    [anon_sym_POUNDf] = ACTIONS(219),
    [anon_sym_POUNDT] = ACTIONS(219),
    [anon_sym_POUNDF] = ACTIONS(219),
    [sym_character] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [sym_symbol] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COMMA_AT] = ACTIONS(219),
    [anon_sym_POUND_SQUOTE] = ACTIONS(219),
    [anon_sym_POUND_BQUOTE] = ACTIONS(219),
    [anon_sym_POUND_COMMA] = ACTIONS(221),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(219),
    [anon_sym_POUND_LPAREN] = ACTIONS(219),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(219),
  },
  [74] = {
    [sym_comment] = STATE(74),
    [sym_directive] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(223),
    [anon_sym_POUNDf] = ACTIONS(223),
    [anon_sym_POUNDT] = ACTIONS(223),
    [anon_sym_POUNDF] = ACTIONS(223),
    [sym_character] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_symbol] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_COMMA_AT] = ACTIONS(223),
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_POUND_BQUOTE] = ACTIONS(223),
    [anon_sym_POUND_COMMA] = ACTIONS(225),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(223),
    [anon_sym_POUND_LPAREN] = ACTIONS(223),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(223),
  },
  [75] = {
    [sym_comment] = STATE(75),
    [sym_directive] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(227),
    [anon_sym_POUNDf] = ACTIONS(227),
    [anon_sym_POUNDT] = ACTIONS(227),
    [anon_sym_POUNDF] = ACTIONS(227),
    [sym_character] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_symbol] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_COMMA_AT] = ACTIONS(227),
    [anon_sym_POUND_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_BQUOTE] = ACTIONS(227),
    [anon_sym_POUND_COMMA] = ACTIONS(229),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(227),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(227),
  },
  [76] = {
    [sym_comment] = STATE(76),
    [sym_directive] = STATE(76),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(231),
    [anon_sym_POUNDf] = ACTIONS(231),
    [anon_sym_POUNDT] = ACTIONS(231),
    [anon_sym_POUNDF] = ACTIONS(231),
    [sym_character] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [sym_symbol] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COMMA_AT] = ACTIONS(231),
    [anon_sym_POUND_SQUOTE] = ACTIONS(231),
    [anon_sym_POUND_BQUOTE] = ACTIONS(231),
    [anon_sym_POUND_COMMA] = ACTIONS(233),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(231),
    [anon_sym_POUND_LPAREN] = ACTIONS(231),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
  [77] = {
    [sym_comment] = STATE(77),
    [sym_directive] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(235),
    [anon_sym_POUNDf] = ACTIONS(235),
    [anon_sym_POUNDT] = ACTIONS(235),
    [anon_sym_POUNDF] = ACTIONS(235),
    [sym_character] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [sym_number] = ACTIONS(237),
    [sym_symbol] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_COMMA_AT] = ACTIONS(235),
    [anon_sym_POUND_SQUOTE] = ACTIONS(235),
    [anon_sym_POUND_BQUOTE] = ACTIONS(235),
    [anon_sym_POUND_COMMA] = ACTIONS(237),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(235),
    [anon_sym_POUND_LPAREN] = ACTIONS(235),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(235),
  },
  [78] = {
    [sym_comment] = STATE(78),
    [sym_directive] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(239),
    [anon_sym_POUNDf] = ACTIONS(239),
    [anon_sym_POUNDT] = ACTIONS(239),
    [anon_sym_POUNDF] = ACTIONS(239),
    [sym_character] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [sym_number] = ACTIONS(241),
    [sym_symbol] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_COMMA_AT] = ACTIONS(239),
    [anon_sym_POUND_SQUOTE] = ACTIONS(239),
    [anon_sym_POUND_BQUOTE] = ACTIONS(239),
    [anon_sym_POUND_COMMA] = ACTIONS(241),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(239),
    [anon_sym_POUND_LPAREN] = ACTIONS(239),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(239),
  },
  [79] = {
    [sym_comment] = STATE(79),
    [sym_directive] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(243),
    [anon_sym_POUNDf] = ACTIONS(243),
    [anon_sym_POUNDT] = ACTIONS(243),
    [anon_sym_POUNDF] = ACTIONS(243),
    [sym_character] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_symbol] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_COMMA_AT] = ACTIONS(243),
    [anon_sym_POUND_SQUOTE] = ACTIONS(243),
    [anon_sym_POUND_BQUOTE] = ACTIONS(243),
    [anon_sym_POUND_COMMA] = ACTIONS(245),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(243),
    [anon_sym_POUND_LPAREN] = ACTIONS(243),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(243),
  },
  [80] = {
    [sym_comment] = STATE(80),
    [sym_directive] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(207),
    [anon_sym_POUNDf] = ACTIONS(207),
    [anon_sym_POUNDT] = ACTIONS(207),
    [anon_sym_POUNDF] = ACTIONS(207),
    [sym_character] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_symbol] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_SQUOTE] = ACTIONS(207),
    [anon_sym_POUND_BQUOTE] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(207),
  },
  [81] = {
    [sym_comment] = STATE(81),
    [sym_directive] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(247),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(247),
    [anon_sym_POUNDf] = ACTIONS(247),
    [anon_sym_POUNDT] = ACTIONS(247),
    [anon_sym_POUNDF] = ACTIONS(247),
    [sym_character] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_number] = ACTIONS(249),
    [sym_symbol] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_POUND_BQUOTE] = ACTIONS(247),
    [anon_sym_POUND_COMMA] = ACTIONS(249),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(247),
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(247),
  },
  [82] = {
    [sym_comment] = STATE(82),
    [sym_directive] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(251),
    [anon_sym_POUNDf] = ACTIONS(251),
    [anon_sym_POUNDT] = ACTIONS(251),
    [anon_sym_POUNDF] = ACTIONS(251),
    [sym_character] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_number] = ACTIONS(253),
    [sym_symbol] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_POUND_BQUOTE] = ACTIONS(251),
    [anon_sym_POUND_COMMA] = ACTIONS(253),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(251),
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(251),
  },
  [83] = {
    [sym_comment] = STATE(83),
    [sym_directive] = STATE(83),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(215),
    [anon_sym_POUNDf] = ACTIONS(215),
    [anon_sym_POUNDT] = ACTIONS(215),
    [anon_sym_POUNDF] = ACTIONS(215),
    [sym_character] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [sym_symbol] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_COMMA_AT] = ACTIONS(215),
    [anon_sym_POUND_SQUOTE] = ACTIONS(215),
    [anon_sym_POUND_BQUOTE] = ACTIONS(215),
    [anon_sym_POUND_COMMA] = ACTIONS(217),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(215),
    [anon_sym_POUND_LPAREN] = ACTIONS(215),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(215),
  },
  [84] = {
    [sym_comment] = STATE(84),
    [sym_directive] = STATE(84),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(235),
    [anon_sym_POUNDf] = ACTIONS(235),
    [anon_sym_POUNDT] = ACTIONS(235),
    [anon_sym_POUNDF] = ACTIONS(235),
    [sym_character] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [sym_number] = ACTIONS(237),
    [sym_symbol] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_COMMA_AT] = ACTIONS(235),
    [anon_sym_POUND_SQUOTE] = ACTIONS(235),
    [anon_sym_POUND_BQUOTE] = ACTIONS(235),
    [anon_sym_POUND_COMMA] = ACTIONS(237),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(235),
    [anon_sym_POUND_LPAREN] = ACTIONS(235),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(235),
  },
  [85] = {
    [sym_comment] = STATE(85),
    [sym_directive] = STATE(85),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(243),
    [anon_sym_POUNDf] = ACTIONS(243),
    [anon_sym_POUNDT] = ACTIONS(243),
    [anon_sym_POUNDF] = ACTIONS(243),
    [sym_character] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym_number] = ACTIONS(245),
    [sym_symbol] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_COMMA_AT] = ACTIONS(243),
    [anon_sym_POUND_SQUOTE] = ACTIONS(243),
    [anon_sym_POUND_BQUOTE] = ACTIONS(243),
    [anon_sym_POUND_COMMA] = ACTIONS(245),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(243),
    [anon_sym_POUND_LPAREN] = ACTIONS(243),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(243),
  },
  [86] = {
    [sym_comment] = STATE(86),
    [sym_directive] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(255),
    [anon_sym_POUNDf] = ACTIONS(255),
    [anon_sym_POUNDT] = ACTIONS(255),
    [anon_sym_POUNDF] = ACTIONS(255),
    [sym_character] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [sym_number] = ACTIONS(257),
    [sym_symbol] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_POUND_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_COMMA] = ACTIONS(257),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(255),
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(255),
  },
  [87] = {
    [sym_comment] = STATE(87),
    [sym_directive] = STATE(87),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(251),
    [anon_sym_POUNDf] = ACTIONS(251),
    [anon_sym_POUNDT] = ACTIONS(251),
    [anon_sym_POUNDF] = ACTIONS(251),
    [sym_character] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_number] = ACTIONS(253),
    [sym_symbol] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_COMMA_AT] = ACTIONS(251),
    [anon_sym_POUND_SQUOTE] = ACTIONS(251),
    [anon_sym_POUND_BQUOTE] = ACTIONS(251),
    [anon_sym_POUND_COMMA] = ACTIONS(253),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(251),
    [anon_sym_POUND_LPAREN] = ACTIONS(251),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(251),
  },
  [88] = {
    [sym_comment] = STATE(88),
    [sym_directive] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(259),
    [anon_sym_POUNDf] = ACTIONS(259),
    [anon_sym_POUNDT] = ACTIONS(259),
    [anon_sym_POUNDF] = ACTIONS(259),
    [sym_character] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym_number] = ACTIONS(261),
    [sym_symbol] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_POUND_COMMA] = ACTIONS(261),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(259),
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(259),
  },
  [89] = {
    [sym_comment] = STATE(89),
    [sym_directive] = STATE(89),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(263),
    [anon_sym_POUNDf] = ACTIONS(263),
    [anon_sym_POUNDT] = ACTIONS(263),
    [anon_sym_POUNDF] = ACTIONS(263),
    [sym_character] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_number] = ACTIONS(265),
    [sym_symbol] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_SQUOTE] = ACTIONS(263),
    [anon_sym_POUND_BQUOTE] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(263),
  },
  [90] = {
    [sym_comment] = STATE(90),
    [sym_directive] = STATE(90),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(267),
    [anon_sym_POUNDf] = ACTIONS(267),
    [anon_sym_POUNDT] = ACTIONS(267),
    [anon_sym_POUNDF] = ACTIONS(267),
    [sym_character] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_symbol] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_SQUOTE] = ACTIONS(267),
    [anon_sym_POUND_BQUOTE] = ACTIONS(267),
    [anon_sym_POUND_COMMA] = ACTIONS(269),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(267),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(267),
  },
  [91] = {
    [sym_comment] = STATE(91),
    [sym_directive] = STATE(91),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(271),
    [anon_sym_POUNDf] = ACTIONS(271),
    [anon_sym_POUNDT] = ACTIONS(271),
    [anon_sym_POUNDF] = ACTIONS(271),
    [sym_character] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym_number] = ACTIONS(273),
    [sym_symbol] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_COMMA_AT] = ACTIONS(271),
    [anon_sym_POUND_SQUOTE] = ACTIONS(271),
    [anon_sym_POUND_BQUOTE] = ACTIONS(271),
    [anon_sym_POUND_COMMA] = ACTIONS(273),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(271),
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [92] = {
    [sym_comment] = STATE(92),
    [sym_directive] = STATE(92),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(275),
    [anon_sym_POUNDf] = ACTIONS(275),
    [anon_sym_POUNDT] = ACTIONS(275),
    [anon_sym_POUNDF] = ACTIONS(275),
    [sym_character] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [sym_number] = ACTIONS(277),
    [sym_symbol] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_COMMA_AT] = ACTIONS(275),
    [anon_sym_POUND_SQUOTE] = ACTIONS(275),
    [anon_sym_POUND_BQUOTE] = ACTIONS(275),
    [anon_sym_POUND_COMMA] = ACTIONS(277),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(275),
    [anon_sym_POUND_LPAREN] = ACTIONS(275),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(275),
  },
  [93] = {
    [sym_comment] = STATE(93),
    [sym_directive] = STATE(93),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(247),
    [anon_sym_POUNDf] = ACTIONS(247),
    [anon_sym_POUNDT] = ACTIONS(247),
    [anon_sym_POUNDF] = ACTIONS(247),
    [sym_character] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_number] = ACTIONS(249),
    [sym_symbol] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_COMMA_AT] = ACTIONS(247),
    [anon_sym_POUND_SQUOTE] = ACTIONS(247),
    [anon_sym_POUND_BQUOTE] = ACTIONS(247),
    [anon_sym_POUND_COMMA] = ACTIONS(249),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(247),
    [anon_sym_POUND_LPAREN] = ACTIONS(247),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(247),
  },
  [94] = {
    [sym_comment] = STATE(94),
    [sym_directive] = STATE(94),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(239),
    [anon_sym_POUNDf] = ACTIONS(239),
    [anon_sym_POUNDT] = ACTIONS(239),
    [anon_sym_POUNDF] = ACTIONS(239),
    [sym_character] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [sym_number] = ACTIONS(241),
    [sym_symbol] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_COMMA_AT] = ACTIONS(239),
    [anon_sym_POUND_SQUOTE] = ACTIONS(239),
    [anon_sym_POUND_BQUOTE] = ACTIONS(239),
    [anon_sym_POUND_COMMA] = ACTIONS(241),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(239),
    [anon_sym_POUND_LPAREN] = ACTIONS(239),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(239),
  },
  [95] = {
    [sym_comment] = STATE(95),
    [sym_directive] = STATE(95),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(255),
    [anon_sym_POUNDf] = ACTIONS(255),
    [anon_sym_POUNDT] = ACTIONS(255),
    [anon_sym_POUNDF] = ACTIONS(255),
    [sym_character] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [sym_number] = ACTIONS(257),
    [sym_symbol] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_COMMA_AT] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(255),
    [anon_sym_POUND_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_COMMA] = ACTIONS(257),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(255),
    [anon_sym_POUND_LPAREN] = ACTIONS(255),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(255),
  },
  [96] = {
    [sym_comment] = STATE(96),
    [sym_directive] = STATE(96),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(259),
    [anon_sym_POUNDf] = ACTIONS(259),
    [anon_sym_POUNDT] = ACTIONS(259),
    [anon_sym_POUNDF] = ACTIONS(259),
    [sym_character] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym_number] = ACTIONS(261),
    [sym_symbol] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(259),
    [anon_sym_POUND_SQUOTE] = ACTIONS(259),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_POUND_COMMA] = ACTIONS(261),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(259),
    [anon_sym_POUND_LPAREN] = ACTIONS(259),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(259),
  },
  [97] = {
    [sym_comment] = STATE(97),
    [sym_directive] = STATE(97),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(279),
    [anon_sym_POUNDf] = ACTIONS(279),
    [anon_sym_POUNDT] = ACTIONS(279),
    [anon_sym_POUNDF] = ACTIONS(279),
    [sym_character] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_number] = ACTIONS(281),
    [sym_symbol] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_COMMA_AT] = ACTIONS(279),
    [anon_sym_POUND_SQUOTE] = ACTIONS(279),
    [anon_sym_POUND_BQUOTE] = ACTIONS(279),
    [anon_sym_POUND_COMMA] = ACTIONS(281),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(279),
  },
  [98] = {
    [sym_comment] = STATE(98),
    [sym_directive] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(279),
    [anon_sym_POUNDf] = ACTIONS(279),
    [anon_sym_POUNDT] = ACTIONS(279),
    [anon_sym_POUNDF] = ACTIONS(279),
    [sym_character] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_number] = ACTIONS(281),
    [sym_symbol] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_COMMA_AT] = ACTIONS(279),
    [anon_sym_POUND_SQUOTE] = ACTIONS(279),
    [anon_sym_POUND_BQUOTE] = ACTIONS(279),
    [anon_sym_POUND_COMMA] = ACTIONS(281),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(279),
    [anon_sym_POUND_LPAREN] = ACTIONS(279),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(279),
  },
  [99] = {
    [sym_comment] = STATE(99),
    [sym_directive] = STATE(99),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(219),
    [anon_sym_POUNDf] = ACTIONS(219),
    [anon_sym_POUNDT] = ACTIONS(219),
    [anon_sym_POUNDF] = ACTIONS(219),
    [sym_character] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [sym_symbol] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COMMA_AT] = ACTIONS(219),
    [anon_sym_POUND_SQUOTE] = ACTIONS(219),
    [anon_sym_POUND_BQUOTE] = ACTIONS(219),
    [anon_sym_POUND_COMMA] = ACTIONS(221),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(219),
    [anon_sym_POUND_LPAREN] = ACTIONS(219),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(219),
  },
  [100] = {
    [sym_comment] = STATE(100),
    [sym_directive] = STATE(100),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(223),
    [anon_sym_POUNDf] = ACTIONS(223),
    [anon_sym_POUNDT] = ACTIONS(223),
    [anon_sym_POUNDF] = ACTIONS(223),
    [sym_character] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_symbol] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_COMMA_AT] = ACTIONS(223),
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_POUND_BQUOTE] = ACTIONS(223),
    [anon_sym_POUND_COMMA] = ACTIONS(225),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(223),
    [anon_sym_POUND_LPAREN] = ACTIONS(223),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(223),
  },
  [101] = {
    [sym_comment] = STATE(101),
    [sym_directive] = STATE(101),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(227),
    [anon_sym_POUNDf] = ACTIONS(227),
    [anon_sym_POUNDT] = ACTIONS(227),
    [anon_sym_POUNDF] = ACTIONS(227),
    [sym_character] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [sym_number] = ACTIONS(229),
    [sym_symbol] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_COMMA_AT] = ACTIONS(227),
    [anon_sym_POUND_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_BQUOTE] = ACTIONS(227),
    [anon_sym_POUND_COMMA] = ACTIONS(229),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(227),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(227),
  },
  [102] = {
    [sym_comment] = STATE(102),
    [sym_directive] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(263),
    [anon_sym_POUNDf] = ACTIONS(263),
    [anon_sym_POUNDT] = ACTIONS(263),
    [anon_sym_POUNDF] = ACTIONS(263),
    [sym_character] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_number] = ACTIONS(265),
    [sym_symbol] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_SQUOTE] = ACTIONS(263),
    [anon_sym_POUND_BQUOTE] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_LPAREN] = ACTIONS(263),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(263),
  },
  [103] = {
    [sym_comment] = STATE(103),
    [sym_directive] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(275),
    [anon_sym_POUNDf] = ACTIONS(275),
    [anon_sym_POUNDT] = ACTIONS(275),
    [anon_sym_POUNDF] = ACTIONS(275),
    [sym_character] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [sym_number] = ACTIONS(277),
    [sym_symbol] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_COMMA_AT] = ACTIONS(275),
    [anon_sym_POUND_SQUOTE] = ACTIONS(275),
    [anon_sym_POUND_BQUOTE] = ACTIONS(275),
    [anon_sym_POUND_COMMA] = ACTIONS(277),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(275),
    [anon_sym_POUND_LPAREN] = ACTIONS(275),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(275),
  },
  [104] = {
    [sym_comment] = STATE(104),
    [sym_directive] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(271),
    [anon_sym_POUNDf] = ACTIONS(271),
    [anon_sym_POUNDT] = ACTIONS(271),
    [anon_sym_POUNDF] = ACTIONS(271),
    [sym_character] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym_number] = ACTIONS(273),
    [sym_symbol] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_COMMA_AT] = ACTIONS(271),
    [anon_sym_POUND_SQUOTE] = ACTIONS(271),
    [anon_sym_POUND_BQUOTE] = ACTIONS(271),
    [anon_sym_POUND_COMMA] = ACTIONS(273),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(271),
    [anon_sym_POUND_LPAREN] = ACTIONS(271),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [105] = {
    [sym_comment] = STATE(105),
    [sym_directive] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(267),
    [anon_sym_POUNDf] = ACTIONS(267),
    [anon_sym_POUNDT] = ACTIONS(267),
    [anon_sym_POUNDF] = ACTIONS(267),
    [sym_character] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [sym_number] = ACTIONS(269),
    [sym_symbol] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_SQUOTE] = ACTIONS(267),
    [anon_sym_POUND_BQUOTE] = ACTIONS(267),
    [anon_sym_POUND_COMMA] = ACTIONS(269),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(267),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(267),
  },
  [106] = {
    [sym_comment] = STATE(106),
    [sym_directive] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_BANG] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(231),
    [anon_sym_POUNDf] = ACTIONS(231),
    [anon_sym_POUNDT] = ACTIONS(231),
    [anon_sym_POUNDF] = ACTIONS(231),
    [sym_character] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [sym_symbol] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COMMA_AT] = ACTIONS(231),
    [anon_sym_POUND_SQUOTE] = ACTIONS(231),
    [anon_sym_POUND_BQUOTE] = ACTIONS(231),
    [anon_sym_POUND_COMMA] = ACTIONS(233),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(231),
    [anon_sym_POUND_LPAREN] = ACTIONS(231),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    STATE(107), 2,
      sym_comment,
      sym_directive,
    ACTIONS(285), 5,
      sym_number,
      sym_symbol,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(283), 16,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [42] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    STATE(108), 2,
      sym_comment,
      sym_directive,
    ACTIONS(289), 5,
      sym_number,
      sym_symbol,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(287), 16,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [84] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(109), 2,
      sym_comment,
      sym_directive,
  [111] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(110), 2,
      sym_comment,
      sym_directive,
  [138] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(111), 2,
      sym_comment,
      sym_directive,
  [165] = 7,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(112), 3,
      sym_comment,
      sym_directive,
      aux_sym_string_repeat1,
  [190] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(113), 2,
      sym_comment,
      sym_directive,
  [217] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(114), 2,
      sym_comment,
      sym_directive,
  [244] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      aux_sym_string_repeat1,
    ACTIONS(301), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(115), 2,
      sym_comment,
      sym_directive,
  [271] = 7,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(116), 2,
      sym_comment,
      sym_directive,
  [295] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_byte_vector_repeat1,
    STATE(117), 2,
      sym_comment,
      sym_directive,
  [321] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_byte_vector_repeat1,
    STATE(118), 2,
      sym_comment,
      sym_directive,
  [347] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_byte_vector_repeat1,
    STATE(119), 2,
      sym_comment,
      sym_directive,
  [373] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_byte_vector_repeat1,
    STATE(120), 2,
      sym_comment,
      sym_directive,
  [399] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_byte_vector_repeat1,
    STATE(121), 2,
      sym_comment,
      sym_directive,
  [425] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(334), 1,
      sym_number,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(122), 3,
      sym_comment,
      sym_directive,
      aux_sym_byte_vector_repeat1,
  [449] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_byte_vector_repeat1,
    STATE(123), 2,
      sym_comment,
      sym_directive,
  [475] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(341), 2,
      sym_number,
      anon_sym_RPAREN,
    STATE(124), 2,
      sym_comment,
      sym_directive,
  [496] = 7,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(343), 1,
      aux_sym_comment_token3,
    ACTIONS(345), 1,
      sym_symbol,
    STATE(125), 2,
      sym_comment,
      sym_directive,
  [519] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(126), 2,
      sym_comment,
      sym_directive,
  [539] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(127), 2,
      sym_comment,
      sym_directive,
  [559] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(128), 2,
      sym_comment,
      sym_directive,
  [579] = 6,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(295), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(343), 1,
      aux_sym_comment_token2,
    STATE(129), 2,
      sym_comment,
      sym_directive,
  [599] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(130), 2,
      sym_comment,
      sym_directive,
  [619] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(131), 2,
      sym_comment,
      sym_directive,
  [639] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(132), 2,
      sym_comment,
      sym_directive,
  [659] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(133), 2,
      sym_comment,
      sym_directive,
  [679] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(134), 2,
      sym_comment,
      sym_directive,
  [699] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(355), 1,
      anon_sym_POUND,
    STATE(135), 2,
      sym_comment,
      sym_directive,
  [719] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(136), 2,
      sym_comment,
      sym_directive,
  [739] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(137), 2,
      sym_comment,
      sym_directive,
  [759] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(138), 2,
      sym_comment,
      sym_directive,
  [779] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_comment,
      sym_directive,
  [799] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_comment,
      sym_directive,
  [819] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(141), 2,
      sym_comment,
      sym_directive,
  [839] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(142), 2,
      sym_comment,
      sym_directive,
  [859] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(143), 2,
      sym_comment,
      sym_directive,
  [879] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(144), 2,
      sym_comment,
      sym_directive,
  [899] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(145), 2,
      sym_comment,
      sym_directive,
  [919] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_BANG,
    ACTIONS(9), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(146), 2,
      sym_comment,
      sym_directive,
  [939] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [943] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [947] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [951] = 1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [955] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [959] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [963] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [967] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [971] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [975] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [979] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [983] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [987] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [991] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [995] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [999] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [1003] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1007] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(107)] = 0,
  [SMALL_STATE(108)] = 42,
  [SMALL_STATE(109)] = 84,
  [SMALL_STATE(110)] = 111,
  [SMALL_STATE(111)] = 138,
  [SMALL_STATE(112)] = 165,
  [SMALL_STATE(113)] = 190,
  [SMALL_STATE(114)] = 217,
  [SMALL_STATE(115)] = 244,
  [SMALL_STATE(116)] = 271,
  [SMALL_STATE(117)] = 295,
  [SMALL_STATE(118)] = 321,
  [SMALL_STATE(119)] = 347,
  [SMALL_STATE(120)] = 373,
  [SMALL_STATE(121)] = 399,
  [SMALL_STATE(122)] = 425,
  [SMALL_STATE(123)] = 449,
  [SMALL_STATE(124)] = 475,
  [SMALL_STATE(125)] = 496,
  [SMALL_STATE(126)] = 519,
  [SMALL_STATE(127)] = 539,
  [SMALL_STATE(128)] = 559,
  [SMALL_STATE(129)] = 579,
  [SMALL_STATE(130)] = 599,
  [SMALL_STATE(131)] = 619,
  [SMALL_STATE(132)] = 639,
  [SMALL_STATE(133)] = 659,
  [SMALL_STATE(134)] = 679,
  [SMALL_STATE(135)] = 699,
  [SMALL_STATE(136)] = 719,
  [SMALL_STATE(137)] = 739,
  [SMALL_STATE(138)] = 759,
  [SMALL_STATE(139)] = 779,
  [SMALL_STATE(140)] = 799,
  [SMALL_STATE(141)] = 819,
  [SMALL_STATE(142)] = 839,
  [SMALL_STATE(143)] = 859,
  [SMALL_STATE(144)] = 879,
  [SMALL_STATE(145)] = 899,
  [SMALL_STATE(146)] = 919,
  [SMALL_STATE(147)] = 939,
  [SMALL_STATE(148)] = 943,
  [SMALL_STATE(149)] = 947,
  [SMALL_STATE(150)] = 951,
  [SMALL_STATE(151)] = 955,
  [SMALL_STATE(152)] = 959,
  [SMALL_STATE(153)] = 963,
  [SMALL_STATE(154)] = 967,
  [SMALL_STATE(155)] = 971,
  [SMALL_STATE(156)] = 975,
  [SMALL_STATE(157)] = 979,
  [SMALL_STATE(158)] = 983,
  [SMALL_STATE(159)] = 987,
  [SMALL_STATE(160)] = 991,
  [SMALL_STATE(161)] = 995,
  [SMALL_STATE(162)] = 999,
  [SMALL_STATE(163)] = 1003,
  [SMALL_STATE(164)] = 1007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(83),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_datum, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_datum, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_datum, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_datum, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datum, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datum, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_form, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_form, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation_prefix, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation_prefix, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2), SHIFT_REPEAT(124),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scheme(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
