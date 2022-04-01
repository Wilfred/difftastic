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
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 76
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_POUND = 4,
  anon_sym_POUND_SEMI = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_POUNDt = 7,
  anon_sym_POUNDf = 8,
  anon_sym_POUNDT = 9,
  anon_sym_POUNDF = 10,
  sym_character = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym_escape_sequence = 14,
  sym_number = 15,
  sym_symbol = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_DOT = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_COMMA = 25,
  anon_sym_COMMA_AT = 26,
  anon_sym_POUND_SQUOTE = 27,
  anon_sym_POUND_BQUOTE = 28,
  anon_sym_POUND_COMMA = 29,
  anon_sym_POUND_COMMA_AT = 30,
  anon_sym_SQUOTE = 31,
  anon_sym_quote = 32,
  anon_sym_POUND_LPAREN = 33,
  anon_sym_POUNDvu8_LPAREN = 34,
  anon_sym_define = 35,
  anon_sym_if = 36,
  sym_program = 37,
  sym__datum = 38,
  sym_comment = 39,
  sym_directive = 40,
  sym__simple_datum = 41,
  sym_boolean = 42,
  sym_string = 43,
  sym__compound_datum = 44,
  sym_list = 45,
  sym__abbreviation = 46,
  sym__abbreviation_prefix = 47,
  sym__special_form = 48,
  sym_quote = 49,
  sym_vector = 50,
  sym_byte_vector = 51,
  sym_if_expr = 52,
  sym_if_test = 53,
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
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
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
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_SQUOTE] = "'",
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
  [sym_quote] = "quote",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [sym_if_expr] = "if_expr",
  [sym_if_test] = "if_test",
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
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_quote] = sym_quote,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [sym_if_expr] = sym_if_expr,
  [sym_if_test] = sym_if_test,
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
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
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
  [anon_sym_SQUOTE] = {
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
  [sym_quote] = {
    .visible = true,
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
  [sym_if_test] = {
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

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < 6683
    ? (c < 3072
      ? (c < 2474
        ? (c < 1418
          ? (c < 188
            ? (c < 'j'
              ? (c < '<'
                ? (c < '/'
                  ? (c < '*'
                    ? (c >= '!' && c <= '&')
                    : c <= '*')
                  : (c <= '/' || c == ':'))
                : (c <= '?' || (c < '^'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'h')))))
              : (c <= 'p' || (c < 168
                ? (c < '~'
                  ? (c < '|'
                    ? (c >= 'r' && c <= 'z')
                    : c <= '|')
                  : (c <= '~' || (c >= 162 && c <= 166)))
                : (c <= 170 || (c < 174
                  ? c == 172
                  : (c <= 181 || (c >= 184 && c <= 186)))))))
            : (c <= 190 || (c < 904
              ? (c < 499
                ? (c < 457
                  ? (c < 454
                    ? (c >= 192 && c <= 452)
                    : c <= 455)
                  : (c <= 458 || (c >= 460 && c <= 497)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || (c >= 900 && c <= 902)))))
              : (c <= 906 || (c < 1162
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1159)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 1418 || (c < 1994
            ? (c < 1547
              ? (c < 1479
                ? (c < 1473
                  ? (c < 1425
                    ? (c >= 1421 && c <= 1423)
                    : c <= 1471)
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1542 && c <= 1544)))))
              : (c <= 1547 || (c < 1758
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1550 && c <= 1562)
                    : c <= 1631)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1775 || (c < 1808
                  ? (c >= 1786 && c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))
            : (c <= 2038 || (c < 2364
              ? (c < 2160
                ? (c < 2112
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2190 || (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2306 || (c >= 2308 && c <= 2362)))))
              : (c <= 2365 || (c < 2417
                ? (c < 2381
                  ? (c >= 2369 && c <= 2376)
                  : (c <= 2381 || (c >= 2384 && c <= 2403)))
                : (c <= 2433 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2759
          ? (c < 2620
            ? (c < 2558
              ? (c < 2509
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || (c >= 2497 && c <= 2500)))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2544 && c <= 2556)))))
              : (c <= 2558 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2562)
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))
            : (c <= 2620 || (c < 2693
              ? (c < 2649
                ? (c < 2635
                  ? (c < 2631
                    ? (c >= 2625 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2637 || c == 2641))
                : (c <= 2652 || (c < 2672
                  ? c == 2654
                  : (c <= 2677 || (c >= 2689 && c <= 2690)))))
              : (c <= 2701 || (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || (c >= 2753 && c <= 2757)))))))))
          : (c <= 2760 || (c < 2908
            ? (c < 2835
              ? (c < 2809
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2765
                    : c <= 2768)
                  : (c <= 2787 || c == 2801))
                : (c <= 2815 || (c < 2821
                  ? c == 2817
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2879
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2877)))
                : (c <= 2879 || (c < 2893
                  ? (c >= 2881 && c <= 2884)
                  : (c <= 2893 || (c >= 2901 && c <= 2902)))))))
            : (c <= 2909 || (c < 2974
              ? (c < 2958
                ? (c < 2946
                  ? (c < 2928
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))))
              : (c <= 2975 || (c < 3008
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3008 || (c < 3024
                  ? c == 3021
                  : (c <= 3024 || (c >= 3056 && c <= 3066)))))))))))))
      : (c <= 3072 || (c < 4146
        ? (c < 3461
          ? (c < 3260
            ? (c < 3160
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3076 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3136 || (c < 3146
                  ? (c >= 3142 && c <= 3144)
                  : (c <= 3149 || (c >= 3157 && c <= 3158)))))
              : (c <= 3162 || (c < 3214
                ? (c < 3192
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3171)
                  : (c <= 3201 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))
            : (c <= 3261 || (c < 3342
              ? (c < 3296
                ? (c < 3276
                  ? (c < 3270
                    ? c == 3263
                    : c <= 3270)
                  : (c <= 3277 || (c >= 3293 && c <= 3294)))
                : (c <= 3299 || (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3329 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3393
                  ? (c >= 3346 && c <= 3389)
                  : (c <= 3396 || (c >= 3405 && c <= 3407)))
                : (c <= 3414 || (c < 3440
                  ? (c >= 3416 && c <= 3427)
                  : (c <= 3455 || c == 3457))))))))
          : (c <= 3478 || (c < 3784
            ? (c < 3647
              ? (c < 3530
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3530 || (c < 3542
                  ? (c >= 3538 && c <= 3540)
                  : (c <= 3542 || (c >= 3585 && c <= 3642)))))
              : (c <= 3662 || (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : (c <= 3780 || c == 3782))))))
            : (c <= 3789 || (c < 3968
              ? (c < 3882
                ? (c < 3859
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3843)
                  : (c <= 3859 || (c >= 3861 && c <= 3871)))
                : (c <= 3897 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3966)))))
              : (c <= 3972 || (c < 4046
                ? (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || (c >= 4030 && c <= 4044)))
                : (c <= 4047 || (c < 4096
                  ? (c >= 4053 && c <= 4056)
                  : (c <= 4138 || (c >= 4141 && c <= 4144)))))))))))
        : (c <= 4151 || (c < 5743
          ? (c < 4704
            ? (c < 4253
              ? (c < 4197
                ? (c < 4176
                  ? (c < 4157
                    ? (c >= 4153 && c <= 4154)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4184 && c <= 4193)))
                : (c <= 4198 || (c < 4229
                  ? (c >= 4206 && c <= 4226)
                  : (c <= 4230 || (c >= 4237 && c <= 4238)))))
              : (c <= 4293 || (c < 4682
                ? (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))))
            : (c <= 4744 || (c < 4882
              ? (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))))
              : (c <= 4885 || (c < 4992
                ? (c < 4957
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 4959 || (c >= 4969 && c <= 4988)))
                : (c <= 5017 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5120 && c <= 5741)))))))))
          : (c <= 5786 || (c < 6155
            ? (c < 6016
              ? (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5908 || (c >= 5919 && c <= 5939)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6069 || (c < 6103
                ? (c < 6086
                  ? (c >= 6071 && c <= 6077)
                  : (c <= 6086 || (c >= 6089 && c <= 6099)))
                : (c <= 6103 || (c < 6128
                  ? (c >= 6107 && c <= 6109)
                  : (c <= 6137 || c == 6150))))))
            : (c <= 6157 || (c < 6457
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6159
                    : c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6439
                  ? (c >= 6432 && c <= 6434)
                  : (c <= 6440 || c == 6450))))
              : (c <= 6459 || (c < 6528
                ? (c < 6480
                  ? c == 6464
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6618
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6622 && c <= 6680)))))))))))))))
    : (c <= 6683 || (c < 42963
      ? (c < 8336
        ? (c < 7357
          ? (c < 7009
            ? (c < 6823
              ? (c < 6754
                ? (c < 6744
                  ? (c < 6742
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6742)
                  : (c <= 6750 || c == 6752))
                : (c <= 6754 || (c < 6771
                  ? (c >= 6757 && c <= 6764)
                  : (c <= 6780 || c == 6783))))
              : (c <= 6823 || (c < 6966
                ? (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6915 || (c >= 6917 && c <= 6964)))
                : (c <= 6970 || (c < 6978
                  ? c == 6972
                  : (c <= 6978 || (c >= 6981 && c <= 6988)))))))
            : (c <= 7036 || (c < 7151
              ? (c < 7083
                ? (c < 7074
                  ? (c < 7043
                    ? (c >= 7040 && c <= 7041)
                    : c <= 7072)
                  : (c <= 7077 || (c >= 7080 && c <= 7081)))
                : (c <= 7087 || (c < 7144
                  ? (c >= 7098 && c <= 7142)
                  : (c <= 7145 || c == 7149))))
              : (c <= 7153 || (c < 7245
                ? (c < 7212
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7219 || (c >= 7222 && c <= 7223)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))))
          : (c <= 7359 || (c < 8118
            ? (c < 8016
              ? (c < 7424
                ? (c < 7394
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7392)
                  : (c <= 7414 || (c >= 7416 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8071 || (c < 8096
                  ? (c >= 8080 && c <= 8087)
                  : (c <= 8103 || (c >= 8112 && c <= 8116)))))))
            : (c <= 8123 || (c < 8208
              ? (c < 8157
                ? (c < 8141
                  ? (c < 8134
                    ? (c >= 8125 && c <= 8132)
                    : c <= 8139)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8175 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8187 || (c >= 8189 && c <= 8190)))))
              : (c <= 8213 || (c < 8276
                ? (c < 8260
                  ? (c >= 8255 && c <= 8256)
                  : (c <= 8260 || c == 8274))
                : (c <= 8276 || (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8316 || (c >= 8319 && c <= 8332)))))))))))
        : (c <= 8348 || (c < 11799
          ? (c < 11159
            ? (c < 9280
              ? (c < 8448
                ? (c < 8417
                  ? (c < 8400
                    ? (c >= 8352 && c <= 8384)
                    : c <= 8412)
                  : (c <= 8417 || (c >= 8421 && c <= 8432)))
                : (c <= 8587 || (c < 8972
                  ? (c >= 8592 && c <= 8967)
                  : (c <= 9000 || (c >= 9003 && c <= 9254)))))
              : (c <= 9290 || (c < 10649
                ? (c < 10183
                  ? (c < 10102
                    ? (c >= 9312 && c <= 10087)
                    : c <= 10180)
                  : (c <= 10213 || (c >= 10224 && c <= 10626)))
                : (c <= 10711 || (c < 10750
                  ? (c >= 10716 && c <= 10747)
                  : (c <= 11123 || (c >= 11126 && c <= 11157)))))))
            : (c <= 11507 || (c < 11688
              ? (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? c == 11517
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))))))))
          : (c <= 11799 || (c < 12441
            ? (c < 12032
              ? (c < 11856
                ? (c < 11834
                  ? (c < 11823
                    ? c == 11802
                    : c <= 11823)
                  : (c <= 11835 || c == 11840))
                : (c <= 11857 || (c < 11904
                  ? c == 11869
                  : (c <= 11929 || (c >= 11931 && c <= 12019)))))
              : (c <= 12245 || (c < 12320
                ? (c < 12306
                  ? (c < 12292
                    ? (c >= 12272 && c <= 12283)
                    : c <= 12295)
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

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 3076
      ? (c < 2486
        ? (c < 1425
          ? (c < 454
            ? (c < '|'
              ? (c < ':'
                ? (c < '*'
                  ? (c < '$'
                    ? c == '!'
                    : c <= '&')
                  : (c <= '*' || c == '/'))
                : (c <= ':' || (c < 'A'
                  ? (c >= '<' && c <= '?')
                  : (c <= 'Z' || (c >= '^' && c <= 'z')))))
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
                : (c <= '?' || (c < '^'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))))
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

static inline bool sym_symbol_character_set_4(int32_t c) {
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

static inline bool sym_symbol_character_set_7(int32_t c) {
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

static inline bool sym_symbol_character_set_8(int32_t c) {
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

static inline bool sym_symbol_character_set_9(int32_t c) {
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

static inline bool sym_symbol_character_set_10(int32_t c) {
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

static inline bool sym_symbol_character_set_11(int32_t c) {
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

static inline bool sym_symbol_character_set_12(int32_t c) {
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

static inline bool sym_symbol_character_set_13(int32_t c) {
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

static inline bool sym_symbol_character_set_14(int32_t c) {
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

static inline bool sym_symbol_character_set_15(int32_t c) {
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

static inline bool sym_symbol_character_set_16(int32_t c) {
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

static inline bool sym_symbol_character_set_17(int32_t c) {
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

static inline bool sym_symbol_character_set_18(int32_t c) {
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

static inline bool sym_symbol_character_set_19(int32_t c) {
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

static inline bool sym_symbol_character_set_20(int32_t c) {
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

static inline bool sym_symbol_character_set_21(int32_t c) {
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

static inline bool sym_symbol_character_set_22(int32_t c) {
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
                : (c <= ':' || (c < '?'
                  ? (c >= '<' && c <= '=')
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

static inline bool sym_symbol_character_set_24(int32_t c) {
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
                  : (c <= 'd' || (c >= 'f' && c <= 'z')))))
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
                  : (c <= 'n' || (c >= 'p' && c <= 'z')))))
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
                  : (c <= 's' || (c >= 'u' && c <= 'z')))))
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
                  : (c <= 't' || (c >= 'v' && c <= 'z')))))
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(156);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(154)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(339);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'q') ADVANCE(108);
      if (lookahead == '{') ADVANCE(333);
      if (lookahead == '}') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '|') ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == '|') ADVANCE(161);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(142);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(7);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 23:
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(283);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(192);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(259);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(262);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(264);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(266);
      END_STATE();
    case 42:
      if (lookahead == '8') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ';') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == 'v') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'w') ADVANCE(87);
      END_STATE();
    case 112:
      if (lookahead == 'x') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == '|') ADVANCE(164);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 119:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(254);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 120:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      END_STATE();
    case 122:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 123:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(241);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(223);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(13);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 149:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(149)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(1);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(328);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == ',') ADVANCE(339);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'q') ADVANCE(327);
      if (lookahead == '{') ADVANCE(333);
      if (lookahead == '}') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 150:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(189);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 151:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(151)
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == ';') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 152:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(152)
      if (lookahead == '#') ADVANCE(166);
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(328);
      if (lookahead == '+') ADVANCE(328);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 153:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == ';') ADVANCE(159);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 154:
      if (eof) ADVANCE(156);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(154)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(339);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'q') ADVANCE(108);
      if (lookahead == '{') ADVANCE(333);
      if (lookahead == '}') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 155:
      if (eof) ADVANCE(156);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(155)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(1);
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(328);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '+') ADVANCE(289);
      if (lookahead == ',') ADVANCE(339);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == ';') ADVANCE(160);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '{') ADVANCE(333);
      if (lookahead == '}') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(114);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(114);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(174);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '`') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == '|') ADVANCE(161);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '|') ADVANCE(161);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_POUNDT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_POUNDF);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(197);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(292);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '|') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '@') ADVANCE(23);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(203);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(292);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '|') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(140);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '/') ADVANCE(140);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(141);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(209);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(294);
      if (lookahead == '|') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(215);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(141);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == '|') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(218);
      if (sym_symbol_character_set_8(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 's')) ADVANCE(294);
      if (lookahead == '|') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(221);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '+') ADVANCE(265);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '@') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '/') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '@') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(202);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(265);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '@') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '@') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(268);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == '-') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(212);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_10(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(6);
      if (sym_symbol_character_set_13(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '/') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(293);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '|') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(7);
      if (sym_symbol_character_set_14(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('d' <= lookahead && lookahead <= 'f') ||
          ('l' <= lookahead && lookahead <= 's')) ADVANCE(293);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '|') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(11);
      if (sym_symbol_character_set_15(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_16(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_17(lookahead)) ADVANCE(328);
      if (lookahead == '+') ADVANCE(291);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_18(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_19(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_19(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_19(lookahead)) ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_15(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_20(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_20(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_20(lookahead)) ADVANCE(328);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(328);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(328);
      if (lookahead == '0') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_21(lookahead)) ADVANCE(328);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_22(lookahead)) ADVANCE(328);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_23(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_23(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_23(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_24(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_25(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_26(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_11(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_27(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_28(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_29(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_quote);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_symbol_character_set_12(lookahead)) ADVANCE(328);
      if (lookahead == '\\') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 155},
  [2] = {.lex_state = 155},
  [3] = {.lex_state = 149},
  [4] = {.lex_state = 149},
  [5] = {.lex_state = 149},
  [6] = {.lex_state = 149},
  [7] = {.lex_state = 149},
  [8] = {.lex_state = 149},
  [9] = {.lex_state = 155},
  [10] = {.lex_state = 155},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 155},
  [13] = {.lex_state = 155},
  [14] = {.lex_state = 155},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 155},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 155},
  [21] = {.lex_state = 155},
  [22] = {.lex_state = 155},
  [23] = {.lex_state = 155},
  [24] = {.lex_state = 155},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 155},
  [27] = {.lex_state = 155},
  [28] = {.lex_state = 155},
  [29] = {.lex_state = 155},
  [30] = {.lex_state = 155},
  [31] = {.lex_state = 155},
  [32] = {.lex_state = 155},
  [33] = {.lex_state = 155},
  [34] = {.lex_state = 155},
  [35] = {.lex_state = 155},
  [36] = {.lex_state = 155},
  [37] = {.lex_state = 155},
  [38] = {.lex_state = 155},
  [39] = {.lex_state = 155},
  [40] = {.lex_state = 155},
  [41] = {.lex_state = 155},
  [42] = {.lex_state = 155},
  [43] = {.lex_state = 155},
  [44] = {.lex_state = 155},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 155},
  [47] = {.lex_state = 155},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 155},
  [50] = {.lex_state = 155},
  [51] = {.lex_state = 155},
  [52] = {.lex_state = 155},
  [53] = {.lex_state = 155},
  [54] = {.lex_state = 155},
  [55] = {.lex_state = 155},
  [56] = {.lex_state = 155},
  [57] = {.lex_state = 155},
  [58] = {.lex_state = 155},
  [59] = {.lex_state = 155},
  [60] = {.lex_state = 155},
  [61] = {.lex_state = 155},
  [62] = {.lex_state = 155},
  [63] = {.lex_state = 155},
  [64] = {.lex_state = 155},
  [65] = {.lex_state = 155},
  [66] = {.lex_state = 155},
  [67] = {.lex_state = 155},
  [68] = {.lex_state = 155},
  [69] = {.lex_state = 155},
  [70] = {.lex_state = 155},
  [71] = {.lex_state = 155},
  [72] = {.lex_state = 155},
  [73] = {.lex_state = 155},
  [74] = {.lex_state = 155},
  [75] = {.lex_state = 155},
  [76] = {.lex_state = 155},
  [77] = {.lex_state = 155},
  [78] = {.lex_state = 150},
  [79] = {.lex_state = 150},
  [80] = {.lex_state = 150},
  [81] = {.lex_state = 150},
  [82] = {.lex_state = 150},
  [83] = {.lex_state = 150},
  [84] = {.lex_state = 151},
  [85] = {.lex_state = 151},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 151},
  [88] = {.lex_state = 151},
  [89] = {.lex_state = 151},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 152},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 152},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 153},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {(TSStateId)(-1)},
  [113] = {(TSStateId)(-1)},
  [114] = {(TSStateId)(-1)},
  [115] = {(TSStateId)(-1)},
  [116] = {(TSStateId)(-1)},
  [117] = {(TSStateId)(-1)},
  [118] = {(TSStateId)(-1)},
  [119] = {(TSStateId)(-1)},
  [120] = {(TSStateId)(-1)},
  [121] = {(TSStateId)(-1)},
  [122] = {(TSStateId)(-1)},
  [123] = {(TSStateId)(-1)},
  [124] = {(TSStateId)(-1)},
  [125] = {(TSStateId)(-1)},
  [126] = {(TSStateId)(-1)},
  [127] = {(TSStateId)(-1)},
  [128] = {(TSStateId)(-1)},
  [129] = {(TSStateId)(-1)},
  [130] = {(TSStateId)(-1)},
  [131] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_directive] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_POUND_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(92),
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(1),
    [sym_directive] = STATE(1),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [2] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(39),
    [anon_sym_POUNDf] = ACTIONS(39),
    [anon_sym_POUNDT] = ACTIONS(39),
    [anon_sym_POUNDF] = ACTIONS(39),
    [sym_character] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_number] = ACTIONS(48),
    [sym_symbol] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_COMMA_AT] = ACTIONS(65),
    [anon_sym_POUND_SQUOTE] = ACTIONS(65),
    [anon_sym_POUND_BQUOTE] = ACTIONS(65),
    [anon_sym_POUND_COMMA] = ACTIONS(62),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_POUND_LPAREN] = ACTIONS(71),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(74),
  },
  [3] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(81),
  },
  [4] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(4),
    [sym_directive] = STATE(4),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(11),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(85),
  },
  [5] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(5),
    [sym_directive] = STATE(5),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(9),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(89),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(91),
  },
  [6] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(95),
  },
  [7] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(13),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(97),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(99),
  },
  [8] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(8),
    [sym_directive] = STATE(8),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(103),
  },
  [9] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(9),
    [sym_directive] = STATE(9),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [10] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(10),
    [sym_directive] = STATE(10),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [11] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [12] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [13] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [14] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [15] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [16] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [17] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [18] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [19] = {
    [sym__datum] = STATE(67),
    [sym_comment] = STATE(19),
    [sym_directive] = STATE(19),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [20] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(53),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [21] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(47),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [22] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(34),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [23] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(37),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [24] = {
    [sym__datum] = STATE(100),
    [sym_comment] = STATE(24),
    [sym_directive] = STATE(24),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [25] = {
    [sym__datum] = STATE(101),
    [sym_comment] = STATE(25),
    [sym_directive] = STATE(25),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [26] = {
    [sym__datum] = STATE(102),
    [sym_comment] = STATE(26),
    [sym_directive] = STATE(26),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [27] = {
    [sym__datum] = STATE(97),
    [sym_comment] = STATE(27),
    [sym_directive] = STATE(27),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(13),
    [anon_sym_POUNDf] = ACTIONS(13),
    [anon_sym_POUNDT] = ACTIONS(13),
    [anon_sym_POUNDF] = ACTIONS(13),
    [sym_character] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [28] = {
    [sym__datum] = STATE(90),
    [sym_comment] = STATE(28),
    [sym_directive] = STATE(28),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [29] = {
    [sym__datum] = STATE(96),
    [sym_comment] = STATE(29),
    [sym_directive] = STATE(29),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [30] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(30),
    [sym_directive] = STATE(30),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(46),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [31] = {
    [sym__datum] = STATE(77),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_if_test] = STATE(52),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [32] = {
    [sym__datum] = STATE(109),
    [sym_comment] = STATE(32),
    [sym_directive] = STATE(32),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [33] = {
    [sym__datum] = STATE(91),
    [sym_comment] = STATE(33),
    [sym_directive] = STATE(33),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [34] = {
    [sym__datum] = STATE(29),
    [sym_comment] = STATE(34),
    [sym_directive] = STATE(34),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [35] = {
    [sym__datum] = STATE(113),
    [sym_comment] = STATE(35),
    [sym_directive] = STATE(35),
    [sym__simple_datum] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_string] = STATE(113),
    [sym__compound_datum] = STATE(113),
    [sym_list] = STATE(113),
    [sym__abbreviation] = STATE(114),
    [sym__abbreviation_prefix] = STATE(35),
    [sym__special_form] = STATE(113),
    [sym_quote] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_byte_vector] = STATE(113),
    [sym_if_expr] = STATE(113),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(135),
    [anon_sym_POUNDf] = ACTIONS(135),
    [anon_sym_POUNDT] = ACTIONS(135),
    [anon_sym_POUNDF] = ACTIONS(135),
    [sym_character] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_number] = ACTIONS(141),
    [sym_symbol] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_POUND_LPAREN] = ACTIONS(151),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(153),
  },
  [36] = {
    [sym__datum] = STATE(107),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [37] = {
    [sym__datum] = STATE(28),
    [sym_comment] = STATE(37),
    [sym_directive] = STATE(37),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [38] = {
    [sym__datum] = STATE(66),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [39] = {
    [sym__datum] = STATE(94),
    [sym_comment] = STATE(39),
    [sym_directive] = STATE(39),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [40] = {
    [sym__datum] = STATE(95),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [41] = {
    [sym__datum] = STATE(99),
    [sym_comment] = STATE(41),
    [sym_directive] = STATE(41),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [42] = {
    [sym__datum] = STATE(129),
    [sym_comment] = STATE(42),
    [sym_directive] = STATE(42),
    [sym__simple_datum] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_string] = STATE(129),
    [sym__compound_datum] = STATE(129),
    [sym_list] = STATE(129),
    [sym__abbreviation] = STATE(114),
    [sym__abbreviation_prefix] = STATE(35),
    [sym__special_form] = STATE(129),
    [sym_quote] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_byte_vector] = STATE(129),
    [sym_if_expr] = STATE(129),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(135),
    [anon_sym_POUNDf] = ACTIONS(135),
    [anon_sym_POUNDT] = ACTIONS(135),
    [anon_sym_POUNDF] = ACTIONS(135),
    [sym_character] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_number] = ACTIONS(157),
    [sym_symbol] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_POUND_LPAREN] = ACTIONS(151),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(153),
  },
  [43] = {
    [sym__datum] = STATE(60),
    [sym_comment] = STATE(43),
    [sym_directive] = STATE(43),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [44] = {
    [sym__datum] = STATE(111),
    [sym_comment] = STATE(44),
    [sym_directive] = STATE(44),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [45] = {
    [sym__datum] = STATE(103),
    [sym_comment] = STATE(45),
    [sym_directive] = STATE(45),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [46] = {
    [sym__datum] = STATE(27),
    [sym_comment] = STATE(46),
    [sym_directive] = STATE(46),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [47] = {
    [sym__datum] = STATE(24),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [48] = {
    [sym__datum] = STATE(110),
    [sym_comment] = STATE(48),
    [sym_directive] = STATE(48),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [49] = {
    [sym__datum] = STATE(105),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [50] = {
    [sym__datum] = STATE(125),
    [sym_comment] = STATE(50),
    [sym_directive] = STATE(50),
    [sym__simple_datum] = STATE(125),
    [sym_boolean] = STATE(125),
    [sym_string] = STATE(125),
    [sym__compound_datum] = STATE(125),
    [sym_list] = STATE(125),
    [sym__abbreviation] = STATE(114),
    [sym__abbreviation_prefix] = STATE(35),
    [sym__special_form] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_byte_vector] = STATE(125),
    [sym_if_expr] = STATE(125),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(135),
    [anon_sym_POUNDf] = ACTIONS(135),
    [anon_sym_POUNDT] = ACTIONS(135),
    [anon_sym_POUNDF] = ACTIONS(135),
    [sym_character] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_number] = ACTIONS(161),
    [sym_symbol] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_POUND_LPAREN] = ACTIONS(151),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(153),
  },
  [51] = {
    [sym__datum] = STATE(108),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [52] = {
    [sym__datum] = STATE(25),
    [sym_comment] = STATE(52),
    [sym_directive] = STATE(52),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [53] = {
    [sym__datum] = STATE(26),
    [sym_comment] = STATE(53),
    [sym_directive] = STATE(53),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [54] = {
    [sym__datum] = STATE(98),
    [sym_comment] = STATE(54),
    [sym_directive] = STATE(54),
    [sym__simple_datum] = STATE(70),
    [sym_boolean] = STATE(73),
    [sym_string] = STATE(73),
    [sym__compound_datum] = STATE(70),
    [sym_list] = STATE(68),
    [sym__abbreviation] = STATE(72),
    [sym__abbreviation_prefix] = STATE(43),
    [sym__special_form] = STATE(68),
    [sym_quote] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_byte_vector] = STATE(59),
    [sym_if_expr] = STATE(59),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COMMA_AT] = ACTIONS(29),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(29),
    [anon_sym_POUND_COMMA] = ACTIONS(27),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_POUND_LPAREN] = ACTIONS(33),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(35),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [sym_directive] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(163),
    [anon_sym_POUNDf] = ACTIONS(163),
    [anon_sym_POUNDT] = ACTIONS(163),
    [anon_sym_POUNDF] = ACTIONS(163),
    [sym_character] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_symbol] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_COMMA_AT] = ACTIONS(163),
    [anon_sym_POUND_SQUOTE] = ACTIONS(163),
    [anon_sym_POUND_BQUOTE] = ACTIONS(163),
    [anon_sym_POUND_COMMA] = ACTIONS(165),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_POUND_LPAREN] = ACTIONS(163),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(163),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [sym_directive] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(167),
    [anon_sym_POUNDf] = ACTIONS(167),
    [anon_sym_POUNDT] = ACTIONS(167),
    [anon_sym_POUNDF] = ACTIONS(167),
    [sym_character] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_number] = ACTIONS(169),
    [sym_symbol] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_COMMA_AT] = ACTIONS(167),
    [anon_sym_POUND_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND_COMMA] = ACTIONS(169),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_POUND_LPAREN] = ACTIONS(167),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(167),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [sym_directive] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(171),
    [anon_sym_POUNDf] = ACTIONS(171),
    [anon_sym_POUNDT] = ACTIONS(171),
    [anon_sym_POUNDF] = ACTIONS(171),
    [sym_character] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_number] = ACTIONS(173),
    [sym_symbol] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_COMMA_AT] = ACTIONS(171),
    [anon_sym_POUND_SQUOTE] = ACTIONS(171),
    [anon_sym_POUND_BQUOTE] = ACTIONS(171),
    [anon_sym_POUND_COMMA] = ACTIONS(173),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_POUND_LPAREN] = ACTIONS(171),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(171),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [sym_directive] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(175),
    [anon_sym_POUNDf] = ACTIONS(175),
    [anon_sym_POUNDT] = ACTIONS(175),
    [anon_sym_POUNDF] = ACTIONS(175),
    [sym_character] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [sym_symbol] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_COMMA_AT] = ACTIONS(175),
    [anon_sym_POUND_SQUOTE] = ACTIONS(175),
    [anon_sym_POUND_BQUOTE] = ACTIONS(175),
    [anon_sym_POUND_COMMA] = ACTIONS(177),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_POUND_LPAREN] = ACTIONS(175),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(175),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [sym_directive] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(179),
    [anon_sym_POUNDf] = ACTIONS(179),
    [anon_sym_POUNDT] = ACTIONS(179),
    [anon_sym_POUNDF] = ACTIONS(179),
    [sym_character] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_number] = ACTIONS(181),
    [sym_symbol] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_COMMA_AT] = ACTIONS(179),
    [anon_sym_POUND_SQUOTE] = ACTIONS(179),
    [anon_sym_POUND_BQUOTE] = ACTIONS(179),
    [anon_sym_POUND_COMMA] = ACTIONS(181),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_POUND_LPAREN] = ACTIONS(179),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(179),
  },
  [60] = {
    [sym_comment] = STATE(60),
    [sym_directive] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(183),
    [anon_sym_POUNDf] = ACTIONS(183),
    [anon_sym_POUNDT] = ACTIONS(183),
    [anon_sym_POUNDF] = ACTIONS(183),
    [sym_character] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_number] = ACTIONS(185),
    [sym_symbol] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_COMMA_AT] = ACTIONS(183),
    [anon_sym_POUND_SQUOTE] = ACTIONS(183),
    [anon_sym_POUND_BQUOTE] = ACTIONS(183),
    [anon_sym_POUND_COMMA] = ACTIONS(185),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_POUND_LPAREN] = ACTIONS(183),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(183),
  },
  [61] = {
    [sym_comment] = STATE(61),
    [sym_directive] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(187),
    [anon_sym_POUNDf] = ACTIONS(187),
    [anon_sym_POUNDT] = ACTIONS(187),
    [anon_sym_POUNDF] = ACTIONS(187),
    [sym_character] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [sym_symbol] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_COMMA_AT] = ACTIONS(187),
    [anon_sym_POUND_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_BQUOTE] = ACTIONS(187),
    [anon_sym_POUND_COMMA] = ACTIONS(189),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_POUND_LPAREN] = ACTIONS(187),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(187),
  },
  [62] = {
    [sym_comment] = STATE(62),
    [sym_directive] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(191),
    [anon_sym_POUNDf] = ACTIONS(191),
    [anon_sym_POUNDT] = ACTIONS(191),
    [anon_sym_POUNDF] = ACTIONS(191),
    [sym_character] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [sym_symbol] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_COMMA_AT] = ACTIONS(191),
    [anon_sym_POUND_SQUOTE] = ACTIONS(191),
    [anon_sym_POUND_BQUOTE] = ACTIONS(191),
    [anon_sym_POUND_COMMA] = ACTIONS(193),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_POUND_LPAREN] = ACTIONS(191),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(191),
  },
  [63] = {
    [sym_comment] = STATE(63),
    [sym_directive] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(195),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(195),
    [anon_sym_POUNDf] = ACTIONS(195),
    [anon_sym_POUNDT] = ACTIONS(195),
    [anon_sym_POUNDF] = ACTIONS(195),
    [sym_character] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [sym_symbol] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_COMMA_AT] = ACTIONS(195),
    [anon_sym_POUND_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_BQUOTE] = ACTIONS(195),
    [anon_sym_POUND_COMMA] = ACTIONS(197),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_POUND_LPAREN] = ACTIONS(195),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(195),
  },
  [64] = {
    [sym_comment] = STATE(64),
    [sym_directive] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(199),
    [anon_sym_POUNDf] = ACTIONS(199),
    [anon_sym_POUNDT] = ACTIONS(199),
    [anon_sym_POUNDF] = ACTIONS(199),
    [sym_character] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [sym_symbol] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_COMMA_AT] = ACTIONS(199),
    [anon_sym_POUND_SQUOTE] = ACTIONS(199),
    [anon_sym_POUND_BQUOTE] = ACTIONS(199),
    [anon_sym_POUND_COMMA] = ACTIONS(201),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_POUND_LPAREN] = ACTIONS(199),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(199),
  },
  [65] = {
    [sym_comment] = STATE(65),
    [sym_directive] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(203),
    [anon_sym_POUNDf] = ACTIONS(203),
    [anon_sym_POUNDT] = ACTIONS(203),
    [anon_sym_POUNDF] = ACTIONS(203),
    [sym_character] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [sym_symbol] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_COMMA_AT] = ACTIONS(203),
    [anon_sym_POUND_SQUOTE] = ACTIONS(203),
    [anon_sym_POUND_BQUOTE] = ACTIONS(203),
    [anon_sym_POUND_COMMA] = ACTIONS(205),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_POUND_LPAREN] = ACTIONS(203),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(203),
  },
  [66] = {
    [sym_comment] = STATE(66),
    [sym_directive] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_COMMA_AT] = ACTIONS(207),
    [anon_sym_POUND_SQUOTE] = ACTIONS(207),
    [anon_sym_POUND_BQUOTE] = ACTIONS(207),
    [anon_sym_POUND_COMMA] = ACTIONS(209),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_POUND_LPAREN] = ACTIONS(207),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(207),
  },
  [67] = {
    [sym_comment] = STATE(67),
    [sym_directive] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_COMMA_AT] = ACTIONS(211),
    [anon_sym_POUND_SQUOTE] = ACTIONS(211),
    [anon_sym_POUND_BQUOTE] = ACTIONS(211),
    [anon_sym_POUND_COMMA] = ACTIONS(213),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_POUND_LPAREN] = ACTIONS(211),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(211),
  },
  [68] = {
    [sym_comment] = STATE(68),
    [sym_directive] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_COMMA_AT] = ACTIONS(215),
    [anon_sym_POUND_SQUOTE] = ACTIONS(215),
    [anon_sym_POUND_BQUOTE] = ACTIONS(215),
    [anon_sym_POUND_COMMA] = ACTIONS(217),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_POUND_LPAREN] = ACTIONS(215),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(215),
  },
  [69] = {
    [sym_comment] = STATE(69),
    [sym_directive] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(219),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COMMA_AT] = ACTIONS(219),
    [anon_sym_POUND_SQUOTE] = ACTIONS(219),
    [anon_sym_POUND_BQUOTE] = ACTIONS(219),
    [anon_sym_POUND_COMMA] = ACTIONS(221),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_POUND_LPAREN] = ACTIONS(219),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(219),
  },
  [70] = {
    [sym_comment] = STATE(70),
    [sym_directive] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_COMMA_AT] = ACTIONS(223),
    [anon_sym_POUND_SQUOTE] = ACTIONS(223),
    [anon_sym_POUND_BQUOTE] = ACTIONS(223),
    [anon_sym_POUND_COMMA] = ACTIONS(225),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_POUND_LPAREN] = ACTIONS(223),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(223),
  },
  [71] = {
    [sym_comment] = STATE(71),
    [sym_directive] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_COMMA_AT] = ACTIONS(227),
    [anon_sym_POUND_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_BQUOTE] = ACTIONS(227),
    [anon_sym_POUND_COMMA] = ACTIONS(229),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_POUND_LPAREN] = ACTIONS(227),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(227),
  },
  [72] = {
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_COMMA_AT] = ACTIONS(231),
    [anon_sym_POUND_SQUOTE] = ACTIONS(231),
    [anon_sym_POUND_BQUOTE] = ACTIONS(231),
    [anon_sym_POUND_COMMA] = ACTIONS(233),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_POUND_LPAREN] = ACTIONS(231),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(231),
  },
  [73] = {
    [sym_comment] = STATE(73),
    [sym_directive] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_COMMA_AT] = ACTIONS(235),
    [anon_sym_POUND_SQUOTE] = ACTIONS(235),
    [anon_sym_POUND_BQUOTE] = ACTIONS(235),
    [anon_sym_POUND_COMMA] = ACTIONS(237),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_POUND_LPAREN] = ACTIONS(235),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(235),
  },
  [74] = {
    [sym_comment] = STATE(74),
    [sym_directive] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_COMMA_AT] = ACTIONS(239),
    [anon_sym_POUND_SQUOTE] = ACTIONS(239),
    [anon_sym_POUND_BQUOTE] = ACTIONS(239),
    [anon_sym_POUND_COMMA] = ACTIONS(241),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_POUND_LPAREN] = ACTIONS(239),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(239),
  },
  [75] = {
    [sym_comment] = STATE(75),
    [sym_directive] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(243),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_POUND_SEMI] = ACTIONS(7),
    [anon_sym_POUND_BANG] = ACTIONS(9),
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
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_COMMA_AT] = ACTIONS(243),
    [anon_sym_POUND_SQUOTE] = ACTIONS(243),
    [anon_sym_POUND_BQUOTE] = ACTIONS(243),
    [anon_sym_POUND_COMMA] = ACTIONS(245),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_POUND_LPAREN] = ACTIONS(243),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(243),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    STATE(76), 2,
      sym_comment,
      sym_directive,
    ACTIONS(249), 5,
      sym_number,
      sym_symbol,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(247), 16,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_SQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [42] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    STATE(77), 2,
      sym_comment,
      sym_directive,
    ACTIONS(253), 5,
      sym_number,
      sym_symbol,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(251), 16,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      anon_sym_POUNDT,
      anon_sym_POUNDF,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_POUND_COMMA_AT,
      anon_sym_SQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [84] = 8,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(78), 2,
      sym_comment,
      sym_directive,
  [111] = 8,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(79), 2,
      sym_comment,
      sym_directive,
  [138] = 8,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(80), 2,
      sym_comment,
      sym_directive,
  [165] = 7,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(81), 3,
      sym_comment,
      sym_directive,
      aux_sym_string_repeat1,
  [190] = 8,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(265), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(82), 2,
      sym_comment,
      sym_directive,
  [217] = 7,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(83), 2,
      sym_comment,
      sym_directive,
  [241] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_byte_vector_repeat1,
    STATE(84), 2,
      sym_comment,
      sym_directive,
  [267] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_byte_vector_repeat1,
    STATE(85), 2,
      sym_comment,
      sym_directive,
  [293] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(288), 1,
      sym_number,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(86), 3,
      sym_comment,
      sym_directive,
      aux_sym_byte_vector_repeat1,
  [317] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_byte_vector_repeat1,
    STATE(87), 2,
      sym_comment,
      sym_directive,
  [343] = 8,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(282), 1,
      sym_number,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_byte_vector_repeat1,
    STATE(88), 2,
      sym_comment,
      sym_directive,
  [369] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(297), 2,
      sym_number,
      anon_sym_RPAREN,
    STATE(89), 2,
      sym_comment,
      sym_directive,
  [390] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(90), 2,
      sym_comment,
      sym_directive,
  [410] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(91), 2,
      sym_comment,
      sym_directive,
  [430] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(92), 2,
      sym_comment,
      sym_directive,
  [450] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(93), 2,
      sym_comment,
      sym_directive,
  [470] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_comment,
      sym_directive,
  [490] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(95), 2,
      sym_comment,
      sym_directive,
  [510] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(96), 2,
      sym_comment,
      sym_directive,
  [530] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(97), 2,
      sym_comment,
      sym_directive,
  [550] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(98), 2,
      sym_comment,
      sym_directive,
  [570] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_comment,
      sym_directive,
  [590] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym_comment,
      sym_directive,
  [610] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(101), 2,
      sym_comment,
      sym_directive,
  [630] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(102), 2,
      sym_comment,
      sym_directive,
  [650] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(103), 2,
      sym_comment,
      sym_directive,
  [670] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(313), 1,
      sym_symbol,
    STATE(104), 2,
      sym_comment,
      sym_directive,
  [690] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(105), 2,
      sym_comment,
      sym_directive,
  [710] = 6,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(259), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(261), 1,
      anon_sym_POUND_BANG,
    ACTIONS(315), 1,
      aux_sym_comment_token2,
    STATE(106), 2,
      sym_comment,
      sym_directive,
  [730] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(107), 2,
      sym_comment,
      sym_directive,
  [750] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(108), 2,
      sym_comment,
      sym_directive,
  [770] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(109), 2,
      sym_comment,
      sym_directive,
  [790] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(110), 2,
      sym_comment,
      sym_directive,
  [810] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(7), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND_BANG,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(111), 2,
      sym_comment,
      sym_directive,
  [830] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [834] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [838] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [842] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [846] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [850] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [854] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [858] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [862] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [866] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [870] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [874] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [878] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [882] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [886] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [890] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [894] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [898] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [902] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [906] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(76)] = 0,
  [SMALL_STATE(77)] = 42,
  [SMALL_STATE(78)] = 84,
  [SMALL_STATE(79)] = 111,
  [SMALL_STATE(80)] = 138,
  [SMALL_STATE(81)] = 165,
  [SMALL_STATE(82)] = 190,
  [SMALL_STATE(83)] = 217,
  [SMALL_STATE(84)] = 241,
  [SMALL_STATE(85)] = 267,
  [SMALL_STATE(86)] = 293,
  [SMALL_STATE(87)] = 317,
  [SMALL_STATE(88)] = 343,
  [SMALL_STATE(89)] = 369,
  [SMALL_STATE(90)] = 390,
  [SMALL_STATE(91)] = 410,
  [SMALL_STATE(92)] = 430,
  [SMALL_STATE(93)] = 450,
  [SMALL_STATE(94)] = 470,
  [SMALL_STATE(95)] = 490,
  [SMALL_STATE(96)] = 510,
  [SMALL_STATE(97)] = 530,
  [SMALL_STATE(98)] = 550,
  [SMALL_STATE(99)] = 570,
  [SMALL_STATE(100)] = 590,
  [SMALL_STATE(101)] = 610,
  [SMALL_STATE(102)] = 630,
  [SMALL_STATE(103)] = 650,
  [SMALL_STATE(104)] = 670,
  [SMALL_STATE(105)] = 690,
  [SMALL_STATE(106)] = 710,
  [SMALL_STATE(107)] = 730,
  [SMALL_STATE(108)] = 750,
  [SMALL_STATE(109)] = 770,
  [SMALL_STATE(110)] = 790,
  [SMALL_STATE(111)] = 810,
  [SMALL_STATE(112)] = 830,
  [SMALL_STATE(113)] = 834,
  [SMALL_STATE(114)] = 838,
  [SMALL_STATE(115)] = 842,
  [SMALL_STATE(116)] = 846,
  [SMALL_STATE(117)] = 850,
  [SMALL_STATE(118)] = 854,
  [SMALL_STATE(119)] = 858,
  [SMALL_STATE(120)] = 862,
  [SMALL_STATE(121)] = 866,
  [SMALL_STATE(122)] = 870,
  [SMALL_STATE(123)] = 874,
  [SMALL_STATE(124)] = 878,
  [SMALL_STATE(125)] = 882,
  [SMALL_STATE(126)] = 886,
  [SMALL_STATE(127)] = 890,
  [SMALL_STATE(128)] = 894,
  [SMALL_STATE(129)] = 898,
  [SMALL_STATE(130)] = 902,
  [SMALL_STATE(131)] = 906,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_form, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_form, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_datum, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compound_datum, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datum, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datum, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_datum, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_datum, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abbreviation_prefix, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__abbreviation_prefix, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_test, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_test, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(83),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2), SHIFT_REPEAT(89),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_vector_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
